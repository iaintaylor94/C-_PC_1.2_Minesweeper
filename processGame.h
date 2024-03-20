#ifndef PROCESS_GAME_H
#define PROCESS_GAME_H

#include "getIO.h"

class ProcessGame : public GetIO{
private:

protected:

public:
  ProcessGame (int argc, char *argv[]) : GetIO (argc, argv) {};
  ~ProcessGame () {};

  char processSquare (int, int);
  void processGrid (void);
};

#endif