/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * surface.cpp
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: 
 * 
 */

#include "surface.h"

Surface::Surface() {
  s = (SDL_Surface *) malloc (sizeof(SDL_Surface *));
}

Surface::~Surface() {
  SDL_FreeSurface(s);
}

/**
   Loads an image from a file.
 
   @param filename string name of the file to load
*/
void Surface::loadImageFrom( std::string filename ) {
  SDL_Surface* loadedImage = NULL;
  SDL_Surface* optimizedImage = NULL;
  
  loadedImage = IMG_Load( filename.c_str() );
  
  if( loadedImage != NULL ) {
    optimizedImage = SDL_DisplayFormat( loadedImage );
    SDL_FreeSurface( loadedImage );
  }
  this->s = optimizedImage;
}


void Surface::applyTo( int x, int y, Surface* dest ) {
  SDL_Rect *offset = (SDL_Rect *) malloc(sizeof(SDL_Rect *));
  offset->x = x;
  offset->y = y;
  SDL_BlitSurface( (this->s), NULL, (dest->s), offset );
}
