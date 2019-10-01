#include <vector>
#include <iostream>

using namespace std;

class Piece{
    public:
        string color;
        string symbol;

        void set_symbol(char c){
            if( this->color == "black"){
                c = putchar(toupper(c));
            }
            this->symbol = c;
        }

};

class Bishop: public Piece{
    public:
        Bishop(string c){
            this->color = c;
            set_symbol('b');
        }
};

class Rook: public Piece{
    public:
        Rook(string c){
            this->color = c;
            set_symbol('r');
        }
};

class Knight: public Piece{
    public:
        Knight(string c){
            this->color = c;
            set_symbol('n');
        }
};

class Queen: public Piece{
    public:
        Queen(string c){
            this->color = c;
            set_symbol('q');
        }
};

class King: public Piece{
    public:
        King(string c){
            this->color = c;
            set_symbol('k');
        }
};

class Pawn: public Piece{
    public:
        Pawn(string c){
            this->color = c;
            set_symbol('p');
        }
};