#ifndef PROCESS_GAME_H
#define PROCESS_GAME_H

#include "getIO.h"

class ProcessGame : public GetIO{
private:
  char processSquare (int, int);

protected:

public:
  ProcessGame (int argc, char *argv[]) : GetIO (argc, argv) {};
  ~ProcessGame () {};

  void processGrid (void);
};

#endif