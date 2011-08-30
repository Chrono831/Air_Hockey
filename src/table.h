/**
 * table.h
 *
 * define table size and provides methods for usage
 */

#ifndef TABLE_H_INCLUDED
#define TABLE_H_INCLUDED

//Header files
#include "stdincludes.h"


class table {
 private:


 public:
  //Image functions
  SDL_Surface * load_image( std::string filename, SDL_Surface* );
  void apply_surface( int, int, SDL_Surface*, SDL_Surface* ); //mod to return dest
  

  //Setup / Cleanup functions
  SDL_Surface* initScreen(SDL_Surface *);
  void clean_up(SDL_Surface *, SDL_Surface *); //mod to return success
};

#endif
