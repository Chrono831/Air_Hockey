

#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED


//Header files
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <string>

//Screen attributes
const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;
const int SCREEN_BPP = 32;

//Image functions
SDL_Surface * load_image( std::string filename );
void apply_surface( int, int, SDL_Surface*, SDL_Surface* );

//Setup / Cleanup functions
SDL_Surface* initScreen(SDL_Surface *);
void clean_up(SDL_Surface *, SDL_Surface *);


#endif
