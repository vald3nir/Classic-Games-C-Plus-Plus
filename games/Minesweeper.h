#ifndef GAMES_CPP_MINESWEEPER_H
#define GAMES_CPP_MINESWEEPER_H

#include "Game.h"

class Minesweeper : public Game {

public:

    void setup() override;

    void play() override;
};

#endif
