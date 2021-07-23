#include "sudoku.h"

int main()
{
    int ** puzzleDiagram;

    puzzleDiagram= createPuzzle();
    printPuzzle(puzzleDiagram);
    
    return 0;
}