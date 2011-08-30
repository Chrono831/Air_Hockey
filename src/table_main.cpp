/**
 table_main.cpp

 Main file to test drawing table. draws for 5 seconds, quits.

 Author Dylan Hall
 Created 26 Aug 2011
 */


#include "table.h"

int main( void ) {
  SDL_Surface *image = NULL;
  SDL_Surface *screen = NULL;
  
  if( (screen = table::initScreen(screen)) == NULL ) { return 1; }
  
  //  image = table::load_image( "../images/Air_Hockey_Layout.png", image );
  if( table::load_image( "../images/Air_Hockey_Layout.png", image ) == NULL ) { return 1; }
  
  table::apply_surface( 0, 0, image, screen );
  if( SDL_Flip( screen ) == -1 ) { return 1; }
  
  SDL_Delay( 5000 );
   
  table::clean_up(image, screen);
  return 0;
}
