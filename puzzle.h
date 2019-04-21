#ifndef PUZZLEH
#define PUZZLEH


#include <list>
#define BLANK_TILE 0

using namespace std;
enum moveTo
{
    UP,
    RIGHT,
    DOWN,
    LEFT
};

typedef struct
{
    char state[9];
    int h;
    int g;
} PUZZLE_STATE;


void printState(char* state);
string stateToString(char* state);

PUZZLE_STATE makeNode(char* state, int puzzleRoot);

//Check functions
bool isGoal(char *state);
bool compareState(char *state, char *state2);
int getBlankPosition(char* state, int puzzleSize);

//Move Functions
bool move8(char* state, moveTo movement, int blankPosition, char* newState);
list<PUZZLE_STATE> succ(char* state);
list<PUZZLE_STATE> succ(PUZZLE_STATE puzzle, int puzzleRoot); 

//Heuristic functions
int heuristic(PUZZLE_STATE puzzle, int puzzleRoot);
int getMarcoPoloDistance(int currentPosition, int desiredPosition, int puzzleRoot);
int getHorizontalPosition(int pos, int puzzleRoot);
int getVerticalPosition(int pos, int puzzleRoot);
int getPuzzleRoot(int puzzleSize);

//Sorted list functor




#endif