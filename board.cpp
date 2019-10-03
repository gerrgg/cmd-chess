#include <vector>
#include <sstream>
#include "piece.cpp"

using namespace std;


class Board{
    public:
    Piece board[8][8] = {
        { Rook(), Bishop(), Knight(), Queen(), King(), Knight(), Queen(), Rook()  },
        { Pawn(), Pawn(), Pawn(), Pawn(), Pawn(), Pawn(), Pawn(), Pawn()  },
        { N(), N(), N(), N(), N(), N(), N(), N() },
        { N(), N(), N(), N(), N(), N(), N(), N() },
        { N(), N(), N(), N(), N(), N(), N(), N() },
        { N(), N(), N(), N(), N(), N(), N(), N() },
        { Rook(), Bishop(), Knight(), Queen(), King(), Knight(), Queen(), Rook()  },
        { Pawn(), Pawn(), Pawn(), Pawn(), Pawn(), Pawn(), Pawn(), Pawn()  }
    };

    Board(){
        set_colors();
    }

    void set_colors(){
        
    }

    void move_piece(int f[2], int t[2]){
        Piece &from = board[f[0]][f[1]];
        Piece temp = board[t[0]][t[1]];

        // we want the from to equal the to
        board[t[0]][t[1]] = from;
        board[f[0]][f[1]] = temp;
    }

    void display(){
        stringstream ss;
        int x, y;
        
        for(x=0; x<8; x++){
            for(y=0; y<8; y++){
                char &piece = board[x][y].symbol;
                ss << "|" << piece << "|";
            }
            ss << '\n';
        }

        cout << ss.str() << '\n';
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