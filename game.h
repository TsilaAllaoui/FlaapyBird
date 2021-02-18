#pragma once
#include "defs.h"
#include "bird.h"
#include "pipe.h"

class Game
{
    private:
        SDL_Surface *screen, *bg;
        SDL_Rect blit_pos;
        Bird *flappy;
        Pipe *pipe_down, *pipe_up;
    public:
        Game();
        void show();
        void play();
        void update();
        ~Game();
};