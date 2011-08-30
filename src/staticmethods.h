/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * staticmethods.h
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: 
 * 
 */

#ifndef STATICMETHODS_H_INCLUDED
#define STATICMETHODS_H_INCLUDED


#include "stdincludes.h"


//Support Loading functions
SDL_Surface* loadImage( std::string );
void createSurface(SDL_Surface *src, SDL_Surface *dst, int offsetX, int offsetY, SDL_Rect *clips = NULL);
  

//Setup / Cleanup functions
SDL_Surface* initScreen(SDL_Surface *);
void clean_up(SDL_Surface *, SDL_Surface *); //mod to return success


#endif
