#include <vector>
#include <sstream>
#include "piece.cpp"

using namespace std;

class Board{
    public:
    Piece board[8][8];

    Board(){
        setup();
    }

    void setup(){
        /*
        Setup the board
        */
        int x,y;
        for(x=0; x<8; x++){
            string color = get_color(x);

            for(y=0; y<8; y++){
                if( x == 0 || x == 7 ){
                    board[x][y] = get_royalty(color, x ,y);
                }
            }
        }
    }

    void display(){
        stringstream ss;
        int x, y;
        

        for(x=0; x<8; x++){
            for(y=0; y<8; y++){
                ss << "|" << board[x][y].symbol << "|";
            }
            ss << '\n';
        }

        cout << ss.str() << '\n';
    }

    Piece get_royalty(string color, int x, int y){
        if( y == 0 || y == 7 ){
            return Rook(color);
        } else if( y == 1 || y == 2 ){
            return Bishop(color);
        } else if( y == 3 || y == 5 ){
            return Knight(color);
        } else {
            //king or queen
            if( x == 0 ){
                if( y == 4 ){
                    return Queen(color);
                } else {
                    return King(color);
                }
            } else {
                if( y == 4 ){
                    return King(color);
                } else {
                    return Queen(color);
                }
            }
        }
    }

    string get_color(int x){
        string color;

        if( x == 0 ){
            color = "black";
        } else {
            color = "white";
        }

        return color;
    }
};