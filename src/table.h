

#ifndef TABLE_H_
#define TABLE_H_


//The headers
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <string>

//Screen attributes
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

SDL_Surface * load_image( std::string filename );
void apply_surface( int, int, SDL_Surface*, SDL_Surface* );

bool init(SDL_Surface *);
void clean_up(SDL_Surface *, SDL_Surface *);


#endif
