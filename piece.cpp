#include <sstream>

class Piece {
    public:
        bool alive = true;
        std::string symbol = " ";
};

class Cell
{
    public:
        Piece value;

    void set(Piece v)
        { value = v; }

    std::string get()
        { return value.symbol; }
    
};

class Pawn: public Piece{
    public:
        Pawn(){
            symbol = "P";
        }
};