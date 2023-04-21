/// require express to use it
const express = require('express');
const app = express();

/// Your application will serve at http://localhost:PORT
const PORT = 4000;

module.exports = { app, PORT };