#ifndef GETIO_H
#define GETIO_H

#include "FileIO.h"

class GetIO : public FileIO {
private:
  static int field;

protected:
  static const int kMaxInputSize = 100;
  static const int kMaxGridSize = kMaxInputSize + 2;

  int gridWidth;
  int gridHeight;

  char unprocessedGrid [kMaxGridSize][kMaxGridSize];
  char processedGrid [kMaxGridSize][kMaxGridSize];
      
public:
  GetIO (int argc, char *argv[]) : FileIO(argc, argv) {}; // pass variables to base constructor
  ~GetIO () {}; // unused

  bool getGridDimensions (void);
  void getGrid (void);
  void printGrid (void);
};

#endif