/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * table_main.cpp
 * 
 * Created: Aug 31 2011 16:29:38
 * 
 * Comments: File to test table setup
 * 
 */

#include "stdincludes.h"
#include "staticmethods.h"
#include "gameobject.h"
#include "gamebox.h"


int main (int argc, char *argv[]) {
  std::cout << "Hello, World!\n";
  
  GameObject *screen = new GameObject();
  GameBox *table = new GameBox();//need new constructor:
  GameBox *board = new GameBox();//x,y,w,h,image
  board->setW(10);
  board->setH(110);
  board->setX(50);
  board->setY(550);



  std::cout << "w = " << board->getW() << "\n";
  std::cout << "h = " << board->getH() << "\n";
  std::cout << "x = " << board->getX() << "\n";
  std::cout << "y = " << board->getY() << "\n";


  screen->setImage(initScreen(screen->getImage()));
  if( screen->getImage()  == NULL ) { return 1; }
  
  board->setImage("../images/Board.png");

  createSurface(board->getImage(), screen->getImage(), 0, 0, NULL);

  if( SDL_Flip( screen->getImage() ) == -1 ) { return 1; }
  

  SDL_Delay( 1000 );
  
  delete screen;
  delete board;
  delete table;

  return 0;

}

