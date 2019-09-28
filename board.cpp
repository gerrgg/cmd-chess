#include <iostream>
#include <sstream>
#include "piece.cpp"

using namespace std;

class Board
{
    public:
    Cell board[8][8];

    Board(){
        setup();
    }

    void setup(){
        for(int x = 0; x < 8; x++){
            for(int y = 0; y < 8; y++){
                Cell& c = board[x][y];
                if( x == 1 || x == 6 ){
                    c.set( Pawn() );
                } // we need a way to place empty strings too
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