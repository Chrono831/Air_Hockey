/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * staticmethods.cpp
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: 
 * 
 */

#include "staticmethods.h"


/** 
    Loads the image specified in by the filename parameter and converts it to the screen format.  Returns NULL if unable to load.
    @param filename name of file to be loaded
    @return formattedImage image formatted to screen format
*/
SDL_Surface* loadImage(std::string filename) {
  SDL_Surface *loadedImage = NULL;
  SDL_Surface *formattedImage = NULL;

  loadedImage = IMG_Load( filename.c_str() );

  if(loadedImage != NULL) {
    formattedImage = SDL_DisplayFormat(loadedImage);
  } //converts image to settings specified by SDL_SetVideoMode
  SDL_FreeSurface(loadedImage);

  if(formattedImage != NULL) {
    SDL_SetColorKey(formattedImage, SDL_SRCCOLORKEY, SDL_MapRGB(formattedImage->format, 0xFF, 0xFF, 0xFF));
  } //converts image to settings specified by SDL_SetVideoMode
  return formattedImage;
}



/** Blits to the surface provided at the x,y position provided

    @param src image to be blitted
    @param dst screen to blit image to
    @param offsetX x-position of image
    @param offsetY y-position of image
    @param clips portion of image to blit
*/
void createSurface(SDL_Surface *src, SDL_Surface *dst, int offsetX, int offsetY, SDL_Rect *clips) {
  SDL_Rect *offset = (SDL_Rect *) malloc (sizeof(SDL_Rect *));
  offset->x = offsetX;
  offset->y = offsetY;
  SDL_BlitSurface(src, NULL, dst, offset);
/*
  int blitCheck = 0;
  blitCheck = SDL_BlitSurface(src, clips, dst, &offset);
  if(blitCheck != GOOD_VALUE) {//unsuccessful                                                                       
      printf("Error Blitting.\n"); return;
  }
*/
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
