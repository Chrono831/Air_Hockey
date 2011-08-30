/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * surface.h
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: wrapper class for SDL_Surface; use this for surface manipulations
 * 
 */

#ifndef SURFACE_H_INCLUDED
#define SURFACE_H_INCLUDED

#include "stdincludes.h"

class Surface {
 private:
  SDL_Surface * s;

 public:
  Surface();
  ~Surface();
  void loadImageFrom( std::string filename );
  void applyTo( int, int, SDL_Surface* ); //mod to return dest


#endif SURFACE_H_INCLUDED
