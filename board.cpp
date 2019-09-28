#include <iostream>
#include <sstream>
#include "piece.cpp"

using namespace std;

class Board
{
    private:
        const int white_royal = 0;
        const int white_pawn = 1;
        const int black_pawn = 6;
        const int black_royal = 7;

    public:
    Cell board[8][8];

    Board(){
        setup();
    }

    void setup(){
        for(int x = 0; x < 8; x++){
            for(int y = 0; y < 8; y++){
                Cell& c = board[x][y];
                if( x == white_pawn || x == black_pawn ){
                    c.set( Pawn() );
                }
            }
        }
    }



    void clear(){
        /*
        Clears the screen
        */
        cout << string( 100, '\n' );
    }

    void display(){
        stringstream ss;
        for(int x = 0; x < 8; x++){
            for(int y = 0; y < 8; y++){
                Cell &c = board[x][y];
                ss << '|' << c.get() << "|";
            }
            ss << '\n';
        }
        cout << ss.str() << endl;
    }
};