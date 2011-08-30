/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * gameobject.h
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: This class should form the basis for any in game objects; it should not be created by itself,
 *  rather inherited and instantiated.
 * 
 */

#ifndef GAMEOBJECT_H_INCLUDED
#define GAMEOBJECT_H_INCLUDED


#include "stdincludes.h"
#include "staticmethods.h"

class GameObject {
 private:
  int x, y; //x, y position of object
  SDL_Surface * image; //visual representation of object
  float dx, dy; //velocity vector


 public:
  GameObject(); //default init : x,y,dx,dy = 0; image = NULL
  ~GameObject(); //destructor - SDL_Surface*
   
  int getX(void);
  int getY(void);
  void setX(int);
  void setY(int);
  SDL_Surface * getImage(void);
  void setImage(SDL_Surface *);
  void setImage(std::string);
  float getDx(void);
  float getDy(void);
  void setDx(float);
  void setDy(float);


};

//#include "staticmethods.h"


#endif
