#include "board.cpp"

int main()
{
 Board b;
 int to[2] = {0,0};
 int from[2] = {4,4};
 b.display();
 b.move_piece(to, from);
 b.display();
};
