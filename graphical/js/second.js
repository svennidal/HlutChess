var pieces = {
    NONE :          {name: "None",          code: " "}, 
    WHITE_KING :    {name: "White King",    code: "\u2654"}, 
    WHITE_QUEEN :   {name: "White Queen",   code: "\u2655"}, 
    WHITE_ROOK :    {name: "White Rook",    code: "\u2656"}, 
    WHITE_BISHOP :  {name: "White Bishop",  code: "\u2657"}, 
    WHITE_KNIGHT :  {name: "White Knight",  code: "\u2658"}, 
    WHITE_POWN :    {name: "White Pown",    code: "\u2659"}, 
    BLACK_KING :    {name: "Black King",    code: "\u265A"}, 
    BLACK_QUEEN :   {name: "Black Queen",   code: "\u265B"}, 
    BLACK_ROOK :    {name: "Black Rook",    code: "\u265C"}, 
    BLACK_BISHOP :  {name: "Black Bishop",  code: "\u265D"}, 
    BLACK_KNIGHT :  {name: "Black Knight",  code: "\u265E"}, 
    BLACK_POWN :    {name: "Black Pown",    code: "\u265F"},
};


board[0].piece = pieces.BLACK_ROOK
    board[1].piece = pieces.BLACK_KNIGHT
    board[2].piece = pieces.BLACK_BISHOP
    board[3].piece = pieces.BLACK_QUEEN
    board[4].piece = pieces.BLACK_KING
    board[5].piece = pieces.BLACK_BISHOP
    board[6].piece = pieces.BLACK_KNIGHT
    board[7].piece = pieces.BLACK_ROOK

    board[8].piece = pieces.BLACK_POWN
    board[9].piece = pieces.BLACK_POWN
    board[10].piece = pieces.BLACK_POWN
    board[11].piece = pieces.BLACK_POWN
    board[12].piece = pieces.BLACK_POWN
    board[13].piece = pieces.BLACK_POWN
    board[14].piece = pieces.BLACK_POWN
    board[15].piece = pieces.BLACK_POWN

    board[6*8 + 0].piece = pieces.WHITE_POWN
    board[6*8 + 1].piece = pieces.WHITE_POWN
    board[6*8 + 2].piece = pieces.WHITE_POWN
    board[6*8 + 3].piece = pieces.WHITE_POWN
    board[6*8 + 4].piece = pieces.WHITE_POWN
    board[6*8 + 5].piece = pieces.WHITE_POWN
    board[6*8 + 6].piece = pieces.WHITE_POWN
    board[6*8 + 7].piece = pieces.WHITE_POWN

    board[7*8 + 0].piece = pieces.WHITE_ROOK
    board[7*8 + 1].piece = pieces.WHITE_KNIGHT
    board[7*8 + 2].piece = pieces.WHITE_BISHOP
    board[7*8 + 3].piece = pieces.WHITE_QUEEN
    board[7*8 + 4].piece = pieces.WHITE_KING
    board[7*8 + 5].piece = pieces.WHITE_BISHOP
    board[7*8 + 6].piece = pieces.WHITE_KNIGHT
    board[7*8 + 7].piece = pieces.WHITE_ROOK

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
             if ( ((d.x%2 == 0) && (d.y%2 == 0)) ||
                  ((d.x%2 == 1) && (d.y%2 == 1))    ) 
                 return "beige";
             else
                 return "tan";
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
            return d.piece.code;
         })
        .append("title")
        .text(function(d) {
            return d.piece.name;
        });
