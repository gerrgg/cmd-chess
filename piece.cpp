#include <sstream>

class Piece {
    public:
        bool alive = true;
        std::string symbol;
};

class Cell
{
    public:
        Piece piece;
        std::string symbol = " ";

    void set(Piece v)
        { piece = v; symbol = v.symbol; }

    std::string get()
        { return symbol; }
    
};

class Pawn: public Piece{
    public:
        Pawn(){
            symbol = "P";
        }
};