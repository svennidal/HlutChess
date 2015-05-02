// SvenniDal - Sveinn Dal Bjornsson - 12/11/14 

// Require our dependencies
var app = require('express')();
var express = require('express');
var http = require('http').Server(app);
var path = require('path');
var io = require('socket.io')(http);

app.use(express.static(path.join(__dirname, '/')));

// Serve the index.html file from the root route
app.get('/', function(req, res){
	res.sendFile(__dirname + '/index.html');
});

// When a dataset is posted we emit it with socketio and log it
app.post('/data/:dataset', function(req, res, socket) {
	console.log(req.params.dataset);
	io.emit('dataset recieved', req.params.dataset);
	res.status(200).send('Coolio');
});

// The port we are operating on, change this after need
http.listen(3716, function(){
	console.log('listening on *:3716');
});
