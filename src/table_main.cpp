/**
 * testing file to execute table.cpp/.h
 */


#include "table.h"

int main( void ) {
  SDL_Surface *image = NULL;
  SDL_Surface *screen = NULL;
  
  if( (screen = initScreen(screen)) == NULL ) { return 1; }
  
  image = load_image( "../images/look.png" );
  if( image == NULL ) { return 1; }
  
  apply_surface( 0, 0, image, screen );
  if( SDL_Flip( screen ) == -1 ) { return 1; }
  
  SDL_Delay( 2000 );
   
  clean_up(image, screen);
  return 0;
}
