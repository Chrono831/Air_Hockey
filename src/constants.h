/**
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 *
 *
 * constants.h
 *
 * Created: Aug 29 2011 15:50:45
 *
 * Comments: 
 * 
 */

#ifndef CONSTANTS_H_INCLUDED
#define CONSTANTS_H_INCLUDED

//Screen attributes
const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;
const int SCREEN_BPP = 32;


//Game Physics attributes
const int MAX_DX = SCREEN_WIDTH - 1;
const int MAX_DY = SCREEN_HEIGHT - 1;



//Enumerations
const int ERROR_INT = -1;
const int GOOD_VALUE = 0;

//Game Board Size
const int BOARD_WIDTH = 1024;
const int BOARD_HEIGHT = 612;
const int BOARD_X_OFFSET = 0;
const int BOARD_Y_OFFSET = 0;


//Table Size (Playing space)
const int TABLE_WIDTH = 924;
const int TABLE_HEIGHT = 512;
const int TABLE_X_OFFSET = 50;
const int TABLE_Y_OFFSET = 50;

//Goal Size
const int GOAL_WIDTH = 50;
const int GOAL_HEIGHT = 160;
const int GOAL_X_OFFSET = 0;
const int GOAL_Y_OFFSET = 175 + TABLE_Y_OFFSET;



#endif
