char index_css[] = R"foo(
/*!
 * Bootstrap v3.3.6 (http://getbootstrap.com)
 * Copyright 2011-2015 Twitter, Inc.
 * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)
 */

/*! normalize.css v3.0.3 | MIT License | github.com/necolas/normalize.css */

html {
  font-family: sans-serif;
  -webkit-text-size-adjust: 100%;
  -ms-text-size-adjust: 100%;
}

body {
  margin: 0;
}

header,nav {
  display: block;
}

[hidden],template {
  display: none;
}

a {
  background-color: transparent;
}

a:active,a:hover {
  outline: 0;
}

h1 {
  margin: .67em 0;
  font-size: 2em;
}

button,input,select {
  margin: 0;
  font: inherit;
  color: inherit;
}

button {
  overflow: visible;
}

button,select {
  text-transform: none;
}

button,html input[type="button"],input[type="reset"],input[type="submit"] {
  -webkit-appearance: button;
  cursor: pointer;
}

button[disabled],html input[disabled] {
  cursor: default;
}

button::-moz-focus-inner,input::-moz-focus-inner {
  padding: 0;
  border: 0;
}

input {
  line-height: normal;
}

input[type="checkbox"],input[type="radio"] {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  padding: 0;
}

input[type="number"]::-webkit-inner-spin-button,input[type="number"]::-webkit-outer-spin-button {
  height: auto;
}

input[type="search"] {
  -webkit-box-sizing: content-box;
  -moz-box-sizing: content-box;
  box-sizing: content-box;
  -webkit-appearance: textfield;
}

input[type="search"]::-webkit-search-cancel-button,input[type="search"]::-webkit-search-decoration {
  -webkit-appearance: none;
}

/*! Source: https://github.com/h5bp/html5-boilerplate/blob/master/src/css/main.css */

@media print {
  *,  *:before,  *:after {
    color: #000 !important;
    text-shadow: none !important;
    background: transparent !important;
    -webkit-box-shadow: none !important;
    box-shadow: none !important;
  }

  a,  a:visited {
    text-decoration: underline;
  }

  a[href]:after {
    content: " (" attr(href) ")";
  }

  a[href^="#"]:after,  a[href^="javascript:"]:after {
    content: "";
  }

  h2,  h3 {
    orphans: 3;
    widows: 3;
  }

  h2,  h3 {
    page-break-after: avoid;
  }

  .navbar {
    display: none;
  }

  .label {
    border: 1px solid #000;
  }
}

* {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

*:before,*:after {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

html {
  font-size: 10px;
  -webkit-tap-highlight-color: rgba(0, 0, 0, 0);
}

body {
  font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
  font-size: 14px;
  line-height: 1.42857143;
  color: #333;
  background-color: #fff;
}

input,button,select {
  font-family: inherit;
  font-size: inherit;
  line-height: inherit;
}

a {
  color: #337ab7;
  text-decoration: none;
}

a:hover,a:focus {
  color: #23527c;
  text-decoration: underline;
}

a:focus {
  outline: thin dotted;
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}

.sr-only {
  position: absolute;
  width: 1px;
  height: 1px;
  padding: 0;
  margin: -1px;
  overflow: hidden;
  clip: rect(0, 0, 0, 0);
  border: 0;
}

[role="button"] {
  cursor: pointer;
}

h1,h2,h3,h4,h5,h6,.h1,.h2,.h3,.h4,.h5,.h6 {
  font-family: inherit;
  font-weight: 500;
  line-height: 1.1;
  color: inherit;
}

h1,.h1,h2,.h2,h3,.h3 {
  margin-top: 20px;
  margin-bottom: 10px;
}

h4,.h4,h5,.h5,h6,.h6 {
  margin-top: 10px;
  margin-bottom: 10px;
}

h1,.h1 {
  font-size: 36px;
}

h2,.h2 {
  font-size: 30px;
}

h3,.h3 {
  font-size: 24px;
}

h4,.h4 {
  font-size: 18px;
}

h5,.h5 {
  font-size: 14px;
}

h6,.h6 {
  font-size: 12px;
}

.text-center {
  text-align: center;
}

.container {
  padding-right: 15px;
  padding-left: 15px;
  margin-right: auto;
  margin-left: auto;
}

@media (min-width: 768px) {
  .container {
    width: 750px;
  }
}

@media (min-width: 992px) {
  .container {
    width: 970px;
  }
}

@media (min-width: 1200px) {
  .container {
    width: 1170px;
  }
}

label {
  display: inline-block;
  max-width: 100%;
  margin-bottom: 5px;
  font-weight: bold;
}

input[type="search"] {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

input[type="radio"],input[type="checkbox"] {
  margin: 4px 0 0;
  margin-top: 1px \9;
  line-height: normal;
}

input[type="file"] {
  display: block;
}

input[type="range"] {
  display: block;
  width: 100%;
}

select[multiple],select[size] {
  height: auto;
}

input[type="file"]:focus,input[type="radio"]:focus,input[type="checkbox"]:focus {
  outline: thin dotted;
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}

.form-control {
  display: block;
  width: 100%;
  height: 34px;
  padding: 6px 12px;
  font-size: 14px;
  line-height: 1.42857143;
  color: #555;
  background-color: #fff;
  background-image: none;
  border: 1px solid #ccc;
  border-radius: 4px;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, .075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, .075);
  -webkit-transition: border-color ease-in-out .15s, -webkit-box-shadow ease-in-out .15s;
  -o-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
  transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;
}

.form-control:focus {
  border-color: #66afe9;
  outline: 0;
  -webkit-box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, .6);
  box-shadow: inset 0 1px 1px rgba(0,0,0,.075), 0 0 8px rgba(102, 175, 233, .6);
}

.form-control::-moz-placeholder {
  color: #999;
  opacity: 1;
}

.form-control:-ms-input-placeholder {
  color: #999;
}

.form-control::-webkit-input-placeholder {
  color: #999;
}

.form-control::-ms-expand {
  background-color: transparent;
  border: 0;
}

.form-control[disabled],.form-control[readonly] {
  background-color: #eee;
  opacity: 1;
}

.form-control[disabled] {
  cursor: not-allowed;
}

input[type="search"] {
  -webkit-appearance: none;
}

@media screen and (-webkit-min-device-pixel-ratio: 0) {
  input[type="date"].form-control,  input[type="time"].form-control,  input[type="datetime-local"].form-control,  input[type="month"].form-control {
    line-height: 34px;
  }
}

.form-group {
  margin-bottom: 15px;
}

input[type="radio"][disabled],input[type="checkbox"][disabled] {
  cursor: not-allowed;
}

.btn {
  display: inline-block;
  padding: 6px 12px;
  margin-bottom: 0;
  font-size: 14px;
  font-weight: normal;
  line-height: 1.42857143;
  text-align: center;
  white-space: nowrap;
  vertical-align: middle;
  -ms-touch-action: manipulation;
  touch-action: manipulation;
  cursor: pointer;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  background-image: none;
  border: 1px solid transparent;
  border-radius: 4px;
}

.btn:focus,.btn:active:focus,.btn:active.focus {
  outline: thin dotted;
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}

.btn:hover,.btn:focus {
  color: #333;
  text-decoration: none;
}

.btn:active {
  background-image: none;
  outline: 0;
  -webkit-box-shadow: inset 0 3px 5px rgba(0, 0, 0, .125);
  box-shadow: inset 0 3px 5px rgba(0, 0, 0, .125);
}

.btn[disabled] {
  cursor: not-allowed;
  filter: alpha(opacity=65);
  -webkit-box-shadow: none;
  box-shadow: none;
  opacity: .65;
}

.btn-default {
  color: #333;
  background-color: #fff;
  border-color: #ccc;
}

.btn-default:focus {
  color: #333;
  background-color: #e6e6e6;
  border-color: #8c8c8c;
}

.btn-default:hover {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}

.btn-default:active {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}

.btn-default:active:hover,.btn-default:active:focus,.btn-default:active.focus {
  color: #333;
  background-color: #d4d4d4;
  border-color: #8c8c8c;
}

.btn-default:active {
  background-image: none;
}

.btn-default[disabled]:hover,.btn-default[disabled]:focus {
  background-color: #fff;
  border-color: #ccc;
}

.btn-default .badge {
  color: #fff;
  background-color: #333;
}

.btn-link {
  font-weight: normal;
  color: #337ab7;
  border-radius: 0;
}

.btn-link,.btn-link:active,.btn-link[disabled] {
  background-color: transparent;
  -webkit-box-shadow: none;
  box-shadow: none;
}

.btn-link,.btn-link:hover,.btn-link:focus,.btn-link:active {
  border-color: transparent;
}

.btn-link:hover,.btn-link:focus {
  color: #23527c;
  text-decoration: underline;
  background-color: transparent;
}

.btn-link[disabled]:hover,.btn-link[disabled]:focus {
  color: #777;
  text-decoration: none;
}

.collapse {
  display: none;
}

.collapse.in {
  display: block;
}

.btn-group {
  position: relative;
  display: inline-block;
  vertical-align: middle;
}

.btn-group > .btn {
  position: relative;
  float: left;
}

.btn-group > .btn:hover,.btn-group > .btn:focus,.btn-group > .btn:active {
  z-index: 2;
}

.btn-group .btn + .btn,.btn-group .btn + .btn-group,.btn-group .btn-group + .btn,.btn-group .btn-group + .btn-group {
  margin-left: -1px;
}

.btn-group > .btn:not(:first-child):not(:last-child):not(.dropdown-toggle) {
  border-radius: 0;
}

.btn-group > .btn:first-child {
  margin-left: 0;
}

.btn-group > .btn:first-child:not(:last-child):not(.dropdown-toggle) {
  border-top-right-radius: 0;
  border-bottom-right-radius: 0;
}

.btn-group > .btn:last-child:not(:first-child) {
  border-top-left-radius: 0;
  border-bottom-left-radius: 0;
}

.btn-group > .btn-group {
  float: left;
}

.btn-group > .btn-group:not(:first-child):not(:last-child) > .btn {
  border-radius: 0;
}

.btn-group > .btn-group:first-child:not(:last-child) > .btn:last-child,.btn-group > .btn-group:first-child:not(:last-child) > .dropdown-toggle {
  border-top-right-radius: 0;
  border-bottom-right-radius: 0;
}

.btn-group > .btn-group:last-child:not(:first-child) > .btn:first-child {
  border-top-left-radius: 0;
  border-bottom-left-radius: 0;
}

[data-toggle="buttons"] > .btn input[type="radio"],[data-toggle="buttons"] > .btn-group > .btn input[type="radio"],[data-toggle="buttons"] > .btn input[type="checkbox"],[data-toggle="buttons"] > .btn-group > .btn input[type="checkbox"] {
  position: absolute;
  clip: rect(0, 0, 0, 0);
  pointer-events: none;
}

.input-group {
  position: relative;
  display: table;
  border-collapse: separate;
}

.input-group[class*="col-"] {
  float: none;
  padding-right: 0;
  padding-left: 0;
}

.input-group .form-control {
  position: relative;
  z-index: 2;
  float: left;
  width: 100%;
  margin-bottom: 0;
}

.input-group .form-control:focus {
  z-index: 3;
}

.input-group-btn,.input-group .form-control {
  display: table-cell;
}

.input-group-btn:not(:first-child):not(:last-child),.input-group .form-control:not(:first-child):not(:last-child) {
  border-radius: 0;
}

.input-group-btn {
  width: 1%;
  white-space: nowrap;
  vertical-align: middle;
}

.input-group .form-control:first-child,.input-group-btn:first-child > .btn,.input-group-btn:first-child > .btn-group > .btn,.input-group-btn:first-child > .dropdown-toggle,.input-group-btn:last-child > .btn:not(:last-child):not(.dropdown-toggle),.input-group-btn:last-child > .btn-group:not(:last-child) > .btn {
  border-top-right-radius: 0;
  border-bottom-right-radius: 0;
}

.input-group .form-control:last-child,.input-group-btn:last-child > .btn,.input-group-btn:last-child > .btn-group > .btn,.input-group-btn:last-child > .dropdown-toggle,.input-group-btn:first-child > .btn:not(:first-child),.input-group-btn:first-child > .btn-group:not(:first-child) > .btn {
  border-top-left-radius: 0;
  border-bottom-left-radius: 0;
}

.input-group-btn {
  position: relative;
  font-size: 0;
  white-space: nowrap;
}

.input-group-btn > .btn {
  position: relative;
}

.input-group-btn > .btn + .btn {
  margin-left: -1px;
}

.input-group-btn > .btn:hover,.input-group-btn > .btn:focus,.input-group-btn > .btn:active {
  z-index: 2;
}

.input-group-btn:first-child > .btn,.input-group-btn:first-child > .btn-group {
  margin-right: -1px;
}

.input-group-btn:last-child > .btn,.input-group-btn:last-child > .btn-group {
  z-index: 2;
  margin-left: -1px;
}

.nav {
  padding-left: 0;
  margin-bottom: 0;
  list-style: none;
}

.navbar {
  position: relative;
  min-height: 50px;
  margin-bottom: 20px;
  border: 1px solid transparent;
}

@media (min-width: 768px) {
  .navbar {
    border-radius: 4px;
  }
}

@media (min-width: 768px) {
  .navbar-header {
    float: left;
  }
}

.navbar-collapse {
  padding-right: 15px;
  padding-left: 15px;
  overflow-x: visible;
  -webkit-overflow-scrolling: touch;
  border-top: 1px solid transparent;
  -webkit-box-shadow: inset 0 1px 0 rgba(255, 255, 255, .1);
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, .1);
}

.navbar-collapse.in {
  overflow-y: auto;
}

@media (min-width: 768px) {
  .navbar-collapse {
    width: auto;
    border-top: 0;
    -webkit-box-shadow: none;
    box-shadow: none;
  }

  .navbar-collapse.collapse {
    display: block !important;
    height: auto !important;
    padding-bottom: 0;
    overflow: visible !important;
  }

  .navbar-collapse.in {
    overflow-y: visible;
  }

  .navbar-fixed-top .navbar-collapse {
    padding-right: 0;
    padding-left: 0;
  }
}

.navbar-fixed-top .navbar-collapse {
  max-height: 340px;
}

@media (max-device-width: 480px) and (orientation: landscape) {
  .navbar-fixed-top .navbar-collapse {
    max-height: 200px;
  }
}

.container > .navbar-header,.container > .navbar-collapse {
  margin-right: -15px;
  margin-left: -15px;
}

@media (min-width: 768px) {
  .container > .navbar-header,  .container > .navbar-collapse {
    margin-right: 0;
    margin-left: 0;
  }
}

.navbar-fixed-top {
  position: fixed;
  right: 0;
  left: 0;
  z-index: 1030;
}

@media (min-width: 768px) {
  .navbar-fixed-top {
    border-radius: 0;
  }
}

.navbar-fixed-top {
  top: 0;
  border-width: 0 0 1px;
}

.navbar-brand {
  float: left;
  height: 50px;
  padding: 15px 15px;
  font-size: 18px;
  line-height: 20px;
}

.navbar-brand:hover,.navbar-brand:focus {
  text-decoration: none;
}

@media (min-width: 768px) {
  .navbar > .container .navbar-brand {
    margin-left: -15px;
  }
}

.navbar-toggle {
  position: relative;
  float: right;
  padding: 9px 10px;
  margin-top: 8px;
  margin-right: 15px;
  margin-bottom: 8px;
  background-color: transparent;
  background-image: none;
  border: 1px solid transparent;
  border-radius: 4px;
}

.navbar-toggle:focus {
  outline: 0;
}

.navbar-toggle .icon-bar {
  display: block;
  width: 22px;
  height: 2px;
  border-radius: 1px;
}

.navbar-toggle .icon-bar + .icon-bar {
  margin-top: 4px;
}

@media (min-width: 768px) {
  .navbar-toggle {
    display: none;
  }
}

.navbar-nav {
  margin: 7.5px -15px;
}

@media (min-width: 768px) {
  .navbar-nav {
    float: left;
    margin: 0;
  }
}

.navbar-form {
  padding: 10px 15px;
  margin-top: 8px;
  margin-right: -15px;
  margin-bottom: 8px;
  margin-left: -15px;
  border-top: 1px solid transparent;
  border-bottom: 1px solid transparent;
  -webkit-box-shadow: inset 0 1px 0 rgba(255, 255, 255, .1), 0 1px 0 rgba(255, 255, 255, .1);
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, .1), 0 1px 0 rgba(255, 255, 255, .1);
}

@media (min-width: 768px) {
  .navbar-form .form-group {
    display: inline-block;
    margin-bottom: 0;
    vertical-align: middle;
  }

  .navbar-form .form-control {
    display: inline-block;
    width: auto;
    vertical-align: middle;
  }

  .navbar-form .input-group {
    display: inline-table;
    vertical-align: middle;
  }

  .navbar-form .input-group .input-group-btn,  .navbar-form .input-group .form-control {
    width: auto;
  }

  .navbar-form .input-group > .form-control {
    width: 100%;
  }

  .navbar-form .control-label {
    margin-bottom: 0;
    vertical-align: middle;
  }
}

@media (max-width: 767px) {
  .navbar-form .form-group {
    margin-bottom: 5px;
  }

  .navbar-form .form-group:last-child {
    margin-bottom: 0;
  }
}

@media (min-width: 768px) {
  .navbar-form {
    width: auto;
    padding-top: 0;
    padding-bottom: 0;
    margin-right: 0;
    margin-left: 0;
    border: 0;
    -webkit-box-shadow: none;
    box-shadow: none;
  }
}

.navbar-btn {
  margin-top: 8px;
  margin-bottom: 8px;
}

.navbar-text {
  margin-top: 15px;
  margin-bottom: 15px;
}

@media (min-width: 768px) {
  .navbar-text {
    float: left;
    margin-right: 15px;
    margin-left: 15px;
  }
}

.navbar-default {
  background-color: #f8f8f8;
  border-color: #e7e7e7;
}

.navbar-default .navbar-brand {
  color: #777;
}

.navbar-default .navbar-brand:hover,.navbar-default .navbar-brand:focus {
  color: #5e5e5e;
  background-color: transparent;
}

.navbar-default .navbar-text {
  color: #777;
}

.navbar-default .navbar-toggle {
  border-color: #ddd;
}

.navbar-default .navbar-toggle:hover,.navbar-default .navbar-toggle:focus {
  background-color: #ddd;
}

.navbar-default .navbar-toggle .icon-bar {
  background-color: #888;
}

.navbar-default .navbar-collapse,.navbar-default .navbar-form {
  border-color: #e7e7e7;
}

.navbar-default .navbar-link {
  color: #777;
}

.navbar-default .navbar-link:hover {
  color: #333;
}

.navbar-default .btn-link {
  color: #777;
}

.navbar-default .btn-link:hover,.navbar-default .btn-link:focus {
  color: #333;
}

.navbar-default .btn-link[disabled]:hover,.navbar-default .btn-link[disabled]:focus {
  color: #ccc;
}

.navbar-inverse {
  background-color: #222;
  border-color: #080808;
}

.navbar-inverse .navbar-brand {
  color: #9d9d9d;
}

.navbar-inverse .navbar-brand:hover,.navbar-inverse .navbar-brand:focus {
  color: #fff;
  background-color: transparent;
}

.navbar-inverse .navbar-text {
  color: #9d9d9d;
}

.navbar-inverse .navbar-toggle {
  border-color: #333;
}

.navbar-inverse .navbar-toggle:hover,.navbar-inverse .navbar-toggle:focus {
  background-color: #333;
}

.navbar-inverse .navbar-toggle .icon-bar {
  background-color: #fff;
}

.navbar-inverse .navbar-collapse,.navbar-inverse .navbar-form {
  border-color: #101010;
}

.navbar-inverse .navbar-link {
  color: #9d9d9d;
}

.navbar-inverse .navbar-link:hover {
  color: #fff;
}

.navbar-inverse .btn-link {
  color: #9d9d9d;
}

.navbar-inverse .btn-link:hover,.navbar-inverse .btn-link:focus {
  color: #fff;
}

.navbar-inverse .btn-link[disabled]:hover,.navbar-inverse .btn-link[disabled]:focus {
  color: #444;
}

.label {
  display: inline;
  padding: .2em .6em .3em;
  font-size: 75%;
  font-weight: bold;
  line-height: 1;
  color: #fff;
  text-align: center;
  white-space: nowrap;
  vertical-align: baseline;
  border-radius: .25em;
}

a.label:hover,a.label:focus {
  color: #fff;
  text-decoration: none;
  cursor: pointer;
}

.label:empty {
  display: none;
}

.btn .label {
  position: relative;
  top: -1px;
}

.label-default {
  background-color: #777;
}

.label-default[href]:hover,.label-default[href]:focus {
  background-color: #5e5e5e;
}

.badge {
  display: inline-block;
  min-width: 10px;
  padding: 3px 7px;
  font-size: 12px;
  font-weight: bold;
  line-height: 1;
  color: #fff;
  text-align: center;
  white-space: nowrap;
  vertical-align: middle;
  background-color: #777;
  border-radius: 10px;
}

.badge:empty {
  display: none;
}

.btn .badge {
  position: relative;
  top: -1px;
}

a.badge:hover,a.badge:focus {
  color: #fff;
  text-decoration: none;
  cursor: pointer;
}

.jumbotron {
  padding-top: 30px;
  padding-bottom: 30px;
  margin-bottom: 30px;
  color: inherit;
  background-color: #eee;
}

.jumbotron h1,.jumbotron .h1 {
  color: inherit;
}

.container .jumbotron {
  padding-right: 15px;
  padding-left: 15px;
  border-radius: 6px;
}

.jumbotron .container {
  max-width: 100%;
}

@media screen and (min-width: 768px) {
  .jumbotron {
    padding-top: 48px;
    padding-bottom: 48px;
  }

  .container .jumbotron {
    padding-right: 60px;
    padding-left: 60px;
  }

  .jumbotron h1,  .jumbotron .h1 {
    font-size: 63px;
  }
}

@-webkit-keyframes progress-bar-stripes {
  from {
    background-position: 40px 0;
  }

  to {
    background-position: 0 0;
  }
}

@-o-keyframes progress-bar-stripes {
  from {
    background-position: 40px 0;
  }

  to {
    background-position: 0 0;
  }
}

@keyframes progress-bar-stripes {
  from {
    background-position: 40px 0;
  }

  to {
    background-position: 0 0;
  }
}

.container:before,.container:after,.nav:before,.nav:after,.navbar:before,.navbar:after,.navbar-header:before,.navbar-header:after,.navbar-collapse:before,.navbar-collapse:after {
  display: table;
  content: " ";
}

.container:after,.nav:after,.navbar:after,.navbar-header:after,.navbar-collapse:after {
  clear: both;
}

/*# sourceMappingURL=bootstrap.css.map */)foo";
