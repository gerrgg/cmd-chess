# cmd-chess
Command line chess in all its c++ glory.

## Requirements
- Display text-based display including Board, Pieces and UI
- Implement standard chess rules
- Prevent players from making illegal moves
- Show a pieces available loves
- Show a list of recent moves
- Allow for resign/rematch

## Classes
This is an area to define classes and what they do:

### CmdChess ( Proper C++ Naming Convention? )
- board
- players
- status
- whos turn
- timer
- win/loss record

### Board
- cells[8][8]

### Cell
- position
- color
- value

### Piece
- alive
- color

move(int x, int y);

#### Pawn
#### Rook
#### Knight
#### Bishop
#### Queen
#### King
