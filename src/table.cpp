/**
   table.cpp

   Implementation for table.h

   @author Dylan Hall
 */


#include "table.h"

// Sample documentation for a function:
/**                                                                         
 * Decreases A[i] to key value.  Cannot be use to increase a key value.     
 * Restores heap property before exiting.                                   
 * @param i index to change                                                 
 * @param key value to decrease intArray[i] to                              
 */
//    public void decreaseKey(int i, int key);
 


/**
   Loads an image from a file.
 
   @param filename string name of the file to load
   @return optimizedImage image formatted by SDL_DisplayFormat(*)
 */
SDL_Surface *load_image( std::string filename, SDL_Surface *dest ) {
  SDL_Surface* loadedImage = NULL;
  SDL_Surface* optimizedImage = NULL;
  
  loadedImage = IMG_Load( filename.c_str() );
  
  if( loadedImage != NULL ) {
    optimizedImage = SDL_DisplayFormat( loadedImage );
    SDL_FreeSurface( loadedImage );
  }
  dest = optimizedImage;
  return optimizedImage;
}

void apply_surface( int x, int y, SDL_Surface* src, SDL_Surface* dest ) {
  SDL_Rect *offset;
  offset->x = x;
  offset->y = y;
  
  SDL_BlitSurface( src, NULL, dest, offset );
}


SDL_Surface* initScreen(SDL_Surface *scn) {
  //init everything                                                                                                            
  if(SDL_Init(SDL_INIT_EVERYTHING) == -1) { return NULL; }
  scn = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE);
  if(scn == NULL) { return NULL; } //checks screen good                                                                         
  return scn; //if everything initialized properly                                                                             
}


//Needs to be rewritted with varargs or something similar
void clean_up(SDL_Surface *s1, SDL_Surface *s2) {
  SDL_FreeSurface(s1); //Free the surface
  SDL_FreeSurface(s2); //Free the surface
  SDL_Quit();
}
