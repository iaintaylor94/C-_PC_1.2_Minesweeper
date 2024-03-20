#include <iostream>
#include "FileIO.h"
#include "getIO.h"
#include "processGame.h"

int main(int argc, char *argv[]) {

  ProcessGame processGame (argc, argv);

  while (processGame.getGridDimensions()) {
    processGame.getGrid();
    processGame.processGrid();
    processGame.printGrid();
  }
  
}