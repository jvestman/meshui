/*
 *  This sketch demonstrates how to set up a simple HTTP-like server.
 *  The server will set a GPIO pin depending on the request
 *    http://server_ip/gpio/0 will set the GPIO2 low,
 *    http://server_ip/gpio/1 will set the GPIO2 high
 *  server_ip is the IP address of the ESP8266 module, will be
 *  printed to Serial when the module is connected.
 */

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <FS.h>

const char* ssid = "meshui12345";
const char* password = "meshui12345";

#define ONE_WIRE_BUS 2  // DS18B20 pin
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature DS18B20(&oneWire);


// Create an instance of the server
// specify the port to listen on as an argument

ESP8266WebServer server(80);

void handleRoot() {
  //server.send(200, "text/html", index_html);
}

void sendCss() {
  //server.send(200, "text/css", index_css);
}

void sendZepto() {
  File f = SPIFFS.open("/zepto.js", "r");
  if (!f) {
      Serial.println("file open failed");
  }
  server.streamFile( f,"application/javascript");
}

void sendFile(const char filename[], const char contenttype[]){
  File f = SPIFFS.open(filename, "r");
  if (!f) {
      Serial.println("file open failed");
  }
  server.streamFile( f, contenttype);
}

void handleNotFound(){
  server.send(404, "text/plain", "");
}

void handleGetTemp(){
  DS18B20.requestTemperatures();
  float temp = DS18B20.getTempCByIndex(0);
  server.send(200, "application/json", String(temp, 1));
}

void setup() {
  SPIFFS.begin();
  Serial.begin(115200);
  delay(10);


  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  //server.on("/", handleRoot);
  //server.on("/index.css", sendCss);
  //server.on("index.css", sendCss);
  server.on("/temp", handleGetTemp);
  //server.on("/zepto.js", sendZepto);
  server.on("/", [] () { sendFile("/index.hml", "text/html");} );
  server.on("/index.css", [] () { sendFile("/index.css", "text/css");} );
  //server.on("/temp", [] () { sendFile("/index.hml")} );
  server.on("/zepto.js", [] () { sendFile("/zepto.js", "application/javascript");} );

  server.onNotFound(handleNotFound);
  server.begin();
  Serial.println("Server started");

  // Print the IP address
  Serial.println(WiFi.localIP());

}

void loop() {
  server.handleClient();
}
