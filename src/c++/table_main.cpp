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
  //These must be the first things in the program! They init SDL.
  GameObject *screen = new GameObject();
  screen->setImage(startup(screen->getImage()));
  //Okay, not other things can happen
  
  GameBox *table = new GameBox(TABLE_X_OFFSET, TABLE_Y_OFFSET, 
			       TABLE_WIDTH, TABLE_HEIGHT, TABLE_IMAGE);
  GameBox *board = new GameBox(BOARD_X_OFFSET, BOARD_Y_OFFSET, 
			       BOARD_WIDTH, BOARD_HEIGHT, BOARD_IMAGE);

  std::cout << "Board info:\t"; 
  std::cout << "w=" << board->getW() << "\t";
  std::cout << "h=" << board->getH() << "\t";
  std::cout << "x=" << board->getX() << "\t";
  std::cout << "y=" << board->getY() << "\n";
  std::cout << "Table info:\t"; 
  std::cout << "w=" << table->getW() << " \t";
  std::cout << "h=" << table->getH() << "\t";
  std::cout << "x=" << table->getX() << "\t";
  std::cout << "y=" << table->getY() << "\n";


  
  createSurface(board->getImage(), screen->getImage(), 0, 0, NULL);  
  createSurface(table->getImage(), screen->getImage(), TABLE_X_OFFSET, TABLE_Y_OFFSET, NULL);

  if( SDL_Flip( screen->getImage() ) == -1 ) { return 1; }
  
  SDL_Delay( 1000 );
  
  delete screen;
  delete table;
  delete board;
  return 0;
}








