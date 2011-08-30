/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * gamebox.cpp
 * 
 * Created: Aug 29 2011 16:56:41
 * 
 * Comments: 
 * 
 */

#include "gamebox.h"
/*
 private:
  int w; //width
  int h; //height
*/


int GameBox::getW(void) { return w; }

int GameBox::getH(void) { return h; }

float GameBox::getDiag(void) {
  //return dist formula
}

int * GameBox::getCenter(void) {
  int[] temp = { xmidpt, ymidpt };
  return temp;
 //center point
}

void GameBox::setW(int);
void GameBox::setH(int);
void GameBox::setDiag(float r, float A);
void GameBox::setCenter(int, int);

