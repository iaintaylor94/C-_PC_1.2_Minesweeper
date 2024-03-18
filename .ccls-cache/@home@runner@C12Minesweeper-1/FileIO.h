#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>

class FileIO {
  std::ifstream inFile;
  std::ofstream outFile;

protected:


public:
  FileIO (int argc, char *argv[]);
  ~FileIO();
};

#endif