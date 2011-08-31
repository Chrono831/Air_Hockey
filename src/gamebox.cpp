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
  int x, y //inherited
*/


GameBox::GameBox() {
  GameObject();
  w = 0;
  h = 0;
}

GameBox::~GameBox() {
  //no new objects to delete
}

int GameBox::getW(void) { return w; }

int GameBox::getH(void) { return h; }

float GameBox::getDiag(void) {
  return ( sqrt ( (w-getX())*(w-getX()) + (h-getY())*(h-getY()) ) );
  //return dist formula
}

int * GameBox::getCenter(void) {
  int *temp = (int *) malloc(2*sizeof(int)); 
  temp[0] = (getX()+w)/2;
  temp[1] = (getY()+h)/2;
  return temp;
}

void GameBox::setW(int newW) {
  if ( (newW >= 0) && (newW <= SCREEN_WIDTH) )
    w = newW;
}
void GameBox::setH(int newH) {
  if ( (newH >= 0) && (newH <= SCREEN_HEIGHT) )
    h = newH;
}

//A measured clockwise from 3 o'clock
void GameBox::setDiag(float r, float A) {
  int newW = r*cos(A);
  int newH = r*sin(A);
  setW(newW);
  setH(newH);
}

void GameBox::setCenter(int mpX, int mpY) {
  setW(2*mpX);
  setH(2*mpY);
}

void GameBox::moveBox(int newX, int newY) {
  setX(newX);
  setY(newY);
}
