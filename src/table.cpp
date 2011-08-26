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


SDL_Surface* initScreen(SDL_Surface *scn) {
  //init everything                                                                                                            
  if(SDL_Init(SDL_INIT_EVERYTHING) == -1) { return NULL; }
  scn = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE);
  if(scn == NULL) { return NULL; } //checks screen good                                                                         
  return scn; //if everything initialized properly                                                                             
}

void clean_up(SDL_Surface *s1, SDL_Surface *s2) {
  SDL_FreeSurface(s1); //Free the surface
  SDL_FreeSurface(s2); //Free the surface
  SDL_Quit();
}
