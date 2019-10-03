#include <vector>
#include <iostream>

using namespace std;

class Piece{
    public:
        char symbol;
        bool is_black;

        Piece(){ is_black = false; }
    
};

class Bishop: public Piece{
    public:
        Bishop(){
            symbol = 'b';
        }
};

class Rook: public Piece{
    public:
        Rook(){
            symbol = 'r';
        }
};

class Knight: public Piece{
    public:
        Knight(){
            symbol = 'n';
        }
};

class Queen: public Piece{
    public:
        Queen(){
            symbol = 'q';
        }
};

class King: public Piece{
    public:
        King(){
            symbol = 'k';
        }
};

class Pawn: public Piece{
    public:
        Pawn(){
            symbol = 'p';
        }
};

class N: public Piece{
    public:
        N(){
            symbol = ' ';
        }
};