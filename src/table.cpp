#include "table.h"

SDL_Surface *load_image( std::string filename ) {
  SDL_Surface* loadedImage = NULL;
  SDL_Surface* optimizedImage = NULL;
  
  loadedImage = IMG_Load( filename.c_str() );
  
  if( loadedImage != NULL ) {
    optimizedImage = SDL_DisplayFormat( loadedImage );
    SDL_FreeSurface( loadedImage );
  }
  return optimizedImage;
}

void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination ) {
  SDL_Rect offset;
  offset.x = x;
  offset.y = y;
  
  SDL_BlitSurface( source, NULL, destination, &offset );
}

bool init(SDL_Surface *screen) {
  if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 ) { return false; }

  screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );
  if( screen == NULL ) { return false; }
  
  SDL_WM_SetCaption( "PNG test", NULL ); //Set the window caption

  return true; //If everything initialized fine
}

void clean_up(SDL_Surface *s1, SDL_Surface *s2) {
  SDL_FreeSurface(s1); //Free the surface
  SDL_FreeSurface(s2); //Free the surface
  SDL_Quit();
}
