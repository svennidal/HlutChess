var marginTop = 30,
		marginLeft = 30,
		fieldSize = 40,
		boardDimension = 8,
		boardSize = boardDimension*fieldSize;

var verticalLabel = [];
for(var j = 0; j < boardDimension; j++){
	verticalLabel.push({
		x: Math.floor(j / boardDimension),
		y: j % boardDimension,
		piece: 0
	});
};
for(j = 0; j < 8; j++){
	verticalLabel[j].piece = (8 - j);
}

var horizontalLabel = [];
for(j = 0; j < boardDimension; j++){
	horizontalLabel.push({
		x: j % boardDimension,
		b: Math.floor(j / boardDimension),
		piece: 0
	});
};
horizontalLabel[0].piece = 'a';
horizontalLabel[1].piece = 'b';
horizontalLabel[2].piece = 'c';
horizontalLabel[3].piece = 'd';
horizontalLabel[4].piece = 'e';
horizontalLabel[5].piece = 'f';
horizontalLabel[6].piece = 'g';
horizontalLabel[7].piece = 'h';

// Make the board ready
var board =[];

for(var i = 0; i < boardDimension*boardDimension; i++) {
	board.push({
		x: i % boardDimension,
		y: Math.floor(i / boardDimension),
		piece: ' '
	});
};

var div = d3.select("body")
	.append("div")
	.attr('class', 'board')
	.style("top", marginTop + "px")
	.style("left", marginLeft + "px")
	.style("width", boardSize + "px")
	.style("height", boardSize + "px");

var svg = div.append("svg")
	.attr('class', 'boardSVG')
	.attr("width", boardSize + "px")
	.attr("height", boardSize + "px")
	.selectAll(".fields")
	.data(board)
	.enter()
	.append("g");

var div2 = d3.select("body")
	.append("div")
	.attr('class', 'verticalList')
	.style("top", marginTop + "px")
	.style("left", marginLeft + "px")
	.style("width", 50 + "px")
	.style("height", boardSize + "px");

var svg2 = div2.append("svg")
	.attr('class', 'verticalSVG')
	.attr("width", 50 + "px")
	.attr("height", boardSize + "px")
	.selectAll(".fields")
	.data(verticalLabel)
	.enter()
	.append("g");

var div3 = d3.select("body")
	.append("div")
	.attr('class', 'horizontalList')
	.style("top", 0 + "px")
	.style("left", 80 + "px")
	.style("width", boardSize + "px")
	.style("height", 50 + "px");

var svg3 = div3.append("svg")
	.attr('class', 'horizontalSVG')
	.attr("width", boardSize + "px")
	.attr("height", 50 + "px")
	.selectAll(".fields")
	.data(horizontalLabel)
	.enter()
	.append("g");

var pieces = {
	NONE :         " ", 
	WHITE_KING :   "\u2654", 
	WHITE_QUEEN :  "\u2655", 
	WHITE_ROOK :   "\u2656", 
	WHITE_BISHOP : "\u2657", 
	WHITE_KNIGHT : "\u2658", 
	WHITE_POWN :   "\u2659", 
	BLACK_KING :   "\u265A", 
	BLACK_QUEEN :  "\u265B", 
	BLACK_ROOK :   "\u265C", 
	BLACK_BISHOP : "\u265D", 
	BLACK_KNIGHT : "\u265E", 
	BLACK_POWN :   "\u265F" 
};


// initial board setting
var data = [];
for(var i = 0; i < boardDimension*boardDimension; i++) {
		data.push({
				x: i % boardDimension,
				y: Math.floor(i / boardDimension),
				piece: ' '
		});
};
data[0*8 + 0].piece = pieces.BLACK_ROOK
data[0*8 + 1].piece = pieces.BLACK_KNIGHT
data[0*8 + 2].piece = pieces.BLACK_BISHOP
data[0*8 + 3].piece = pieces.BLACK_QUEEN
data[0*8 + 4].piece = pieces.BLACK_KING
data[0*8 + 5].piece = pieces.BLACK_BISHOP
data[0*8 + 6].piece = pieces.BLACK_KNIGHT
data[0*8 + 7].piece = pieces.BLACK_ROOK

data[1*8 + 0].piece = pieces.BLACK_POWN
data[1*8 + 1].piece = pieces.BLACK_POWN
data[1*8 + 2].piece = pieces.BLACK_POWN
data[1*8 + 3].piece = pieces.BLACK_POWN
data[1*8 + 4].piece = pieces.BLACK_POWN
data[1*8 + 5].piece = pieces.BLACK_POWN
data[1*8 + 6].piece = pieces.BLACK_POWN
data[1*8 + 7].piece = pieces.BLACK_POWN

data[6*8 + 0].piece = pieces.WHITE_POWN
data[6*8 + 1].piece = pieces.WHITE_POWN
data[6*8 + 2].piece = pieces.WHITE_POWN
data[6*8 + 3].piece = pieces.WHITE_POWN
data[6*8 + 4].piece = pieces.WHITE_POWN
data[6*8 + 5].piece = pieces.WHITE_POWN
data[6*8 + 6].piece = pieces.WHITE_POWN
data[6*8 + 7].piece = pieces.WHITE_POWN

data[7*8 + 0].piece = pieces.WHITE_ROOK
data[7*8 + 1].piece = pieces.WHITE_KNIGHT
data[7*8 + 2].piece = pieces.WHITE_BISHOP
data[7*8 + 3].piece = pieces.WHITE_QUEEN
data[7*8 + 4].piece = pieces.WHITE_KING
data[7*8 + 5].piece = pieces.WHITE_BISHOP
data[7*8 + 6].piece = pieces.WHITE_KNIGHT
data[7*8 + 7].piece = pieces.WHITE_ROOK

// first draw
//console.log(JSON.stringify(data));
update(data);
function update(source){

	for(i = 0; i < board.length; i++){
		board[i].piece = source[i].piece;
	}

	/************************************** DRAW CHESS BOARD *******************/
	svg.append("rect")
		.style("class", "fields")
		.style("class", "rects")
		.attr("x", function (d) {
			return d.x*fieldSize;
		})
		.attr("y", function (d) {
			return d.y*fieldSize;
		})
		.attr("width", fieldSize + "px")
		.attr("height", fieldSize + "px")
		.style("fill", function (d) {
		if ( ((d.x%2 == 0) && (d.y%2 == 0)) || ((d.x%2 == 1) && (d.y%2 == 1)) ){ 
			return "beige";
		} else {
			return "tan";
		}
	});

	svg.append("text")
		.attr("x", function (d) {
			return d.x*fieldSize;
		})
		.attr("y", function (d) {
			return d.y*fieldSize;
		})
		.style("font-size", "40")
		.attr("text-anchor", "middle")
		.attr("dy", "35px")
		.attr("dx", "20px")
		.text(function (d) {
			return d.piece;
		 });
	/*********************************** // DRAW CHESS BOARD *******************/


	/************************************** DRAW VERTICAL LIST ******************/
	svg2.append("rect")
	 .style("class", "fields")
	 .style("class", "rects")
	 .attr("x", function (d) {
			 return d.x*fieldSize;
	 })
	 .attr("y", function (d) {
			 return d.y*fieldSize;
	 })
	 .attr("width", fieldSize + "px")
	 .attr("height", fieldSize + "px")
	 .style("fill", "white");

	svg2.append("text")
		.attr("x", function (d) {
			return d.x*fieldSize;
		})
		.attr("y", function (d) {
			return d.y*fieldSize;
		})
		.style("font-size", "20")
		.attr("text-anchor", "middle")
		.attr("dy", "35px")
		.attr("dx", "20px")
		.text(function (d) {
			return d.piece;
		 });
	/*********************************** // DRAW VERTICAL LIST ******************/


	/************************************** DRAW HORIZONTAL LIST ****************/
	svg3.append("rect")
	 .style("class", "fields")
	 .style("class", "rects")
	 .attr("x", function (d) {
		 return d.x*fieldSize;
	 })
	 .attr("y", function (d) {
		 return d.y*fieldSize;
	 })
	 .attr("width", fieldSize + "px")
	 .attr("height", fieldSize + "px")
	 .style("fill", "white");

	svg3.append("text")
		.attr("x", function (d) {
			return d.x*fieldSize;
		})
		.attr("y", function (d) {
			return d.y*fieldSize;
		})
		.style("font-size", "20")
		.attr("text-anchor", "middle")
		.attr("dy", "35px")
		.attr("dx", "20px")
		.text(function (d) {
			return d.piece;
		 });
	/*********************************** // DRAW HORIZONTAL LIST ****************/
}
// Here we start using the socket.io
var socket = io();
socket.on('dataset recieved', function(datasetFromServer){
	var dataset = JSON.parse(datasetFromServer);
	for(i = 0; i < data.length; i++){
		switch(dataset[i]){
			case 0:
				data[i].piece = pieces.NONE;
				break;
			case 1:
				data[i].piece = pieces.WHITE_KING;
				break;
			case 2:
				data[i].piece = pieces.WHITE_QUEEN;
				break;
			case 3:
				data[i].piece = pieces.WHITE_ROOK;
				break;
			case 4:
				data[i].piece = pieces.WHITE_BISHOP;
				break;
			case 5:
				data[i].piece = pieces.WHITE_KNIGHT;
				break;
			case 6:
				data[i].piece = pieces.WHITE_POWN;
				break;
			case 7:
				data[i].piece = pieces.BLACK_KING;
				break;
			case 8:
				data[i].piece = pieces.BLACK_QUEEN;
				break;
			case 9:
				data[i].piece = pieces.BLACK_ROOK;
				break;
			case 10:
				data[i].piece = pieces.BLACK_BISHOP;
				break;
			case 11:
				data[i].piece = pieces.BLACK_KNIGHT;
				break;
			case 12:
				data[i].piece = pieces.BLACK_POWN;
				break;
			default:
				data[i].piece = pieces.NONE;
		}
	}
	update(data);
});
