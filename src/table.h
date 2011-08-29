/**
 * table.h
 *
 * define table size and provides methods for usage
 */

#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED

//Header files
#include "stdincludes.h"


//Image functions
SDL_Surface* load_image( std::string filename );
void apply_surface( int, int, SDL_Surface*, SDL_Surface* );


//Setup / Cleanup functions
SDL_Surface* initScreen(SDL_Surface *);
void clean_up(SDL_Surface *, SDL_Surface *);


#endif
