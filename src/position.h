#ifndef POSITION_H
#define POSITION_H

#include "position_exception.h"
#include <stdlib.h>


class Position {
    private:
        int x;
        int y;

        Position* new_position_for(int x, int y);
        bool are_coords_valid(int x, int y);

    public:
        Position(int x, int y);

        int get_x();
        int get_y();

        Position* up();
        Position* down();
        Position* left();
        Position* right();
        Position* up_left();
        Position* up_right();
        Position* down_left();
        Position* down_right();

        bool is_adjacent(Position* p);
};

#endif
