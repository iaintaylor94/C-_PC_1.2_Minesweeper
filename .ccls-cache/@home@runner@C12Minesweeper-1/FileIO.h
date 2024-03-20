#ifndef FILEIO_H
#define FILEIO_H

#include <fstream>

class FileIO {
private:

protected:
  std::ifstream inFile;
  std::ofstream outFile;

public:
  FileIO (int argc, char *argv[]);
  ~FileIO();

};

#endif