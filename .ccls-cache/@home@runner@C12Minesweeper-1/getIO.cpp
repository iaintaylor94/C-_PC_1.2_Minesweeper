#include "getIO.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int GetIO::field = 1;

bool GetIO::getGridDimensions(void) {
  std::string line;
  std::getline(inFile, line);
  std::stringstream iss(line);
  iss >> gridHeight >> gridWidth;

  if (gridHeight == 0 && gridWidth == 0) return false;
  else if (gridHeight < 1 || gridHeight > 100) {
    std::cout << "Error: grid height must be between 1 and 100" << std::endl;
    return false;
  }
  else if (gridWidth < 1 || gridWidth > 100) {
    std::cout << "Error: grid width must be between 1 and 100" << std::endl;
    return false;
  }
  else return true;
}
void GetIO::getGrid(void) {
  for (int i = 0; i < gridHeight; i++) {
    std::string line;
    std::getline(inFile, line);
    
    for (int j = 0; j < gridWidth; j++) {
      unprocessedGrid[i + 1][j + 1] = line[j];
    }
  }
}
void GetIO::printGrid(void) {
  outFile << "Field #" << field << std::endl;
  for (int i = 0; i < gridHeight; i++) {
    for (int j = 0; j < gridWidth; j++) {
      outFile << processedGrid[i + 1][j + 1];
    }
    outFile << std::endl;
  }
  field++;
}