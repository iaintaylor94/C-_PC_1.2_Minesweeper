#include "FileIO.h"
#include <fstream>
#include <iostream>
#include <string.h>

FileIO::FileIO(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
  }
  FileIO::inFile.open(argv[1]);
  if (!inFile.is_open()) {
    std::cout << "Error opening file " << argv[1] << std::endl;
  }
  else {
    std::cout << "File " << argv[1] << " opened successfully" << std::endl;
  }
  char outFileName [100];
  strcpy(outFileName, argv[1]);
  strcat(outFileName, ".out");
  outFile.open(outFileName);
  if (!outFile.is_open()) {
    std::cout << "Error opening file " << argv[1] << ".out" << std::endl;
  }
  else {
    std::cout << "File " << argv[1] << ".out" << " opened successfully" << std::endl;
  }
}
FileIO::~FileIO() {
  inFile.close();
  outFile.close();
}