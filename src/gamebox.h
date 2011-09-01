/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * gamebox.h
 * 
 * Created: Aug 29 2011 16:56:41
 * 
 * Comments: Generic box inheriting from GameObject; meant to be inherited.
 * 
 */

#ifndef GAMEBOX_H_INCLUDED
#define GAMEBOX_H_INCLUDED

//#include "stdincludes.h"
#include "gameobject.h"

class GameBox: public GameObject {
 private:
  int w; //width
  int h; //height

 public:
  GameBox();
  GameBox(int, int, int, int, std::string);//x,y,w,h,image
  ~GameBox();

  int getW(void);
  int getH(void);
  float getDiag(void);
  int * getCenter(void); //center point
  
  void setW(int);
  void setH(int);
  void setDiag(float, float);
  void setCenter(int, int);

  void moveBox(int, int);
};


#endif
