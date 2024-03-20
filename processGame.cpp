#include "processGame.h"

char ProcessGame::processSquare(int h, int w) {
  if (unprocessedGrid[h][w] == '*') return '*';
  else {
    int count = 0;
    
    if (unprocessedGrid[h - 1][w - 1] == '*') count++;
    if (unprocessedGrid[h - 1][w + 0] == '*') count++;
    if (unprocessedGrid[h - 1][w + 1] == '*') count++;
    if (unprocessedGrid[h + 0][w - 1] == '*') count++;
    if (unprocessedGrid[h + 0][w + 1] == '*') count++;
    if (unprocessedGrid[h + 1][w - 1] == '*') count++;
    if (unprocessedGrid[h + 1][w + 0] == '*') count++;
    if (unprocessedGrid[h + 1][w + 1] == '*') count++;
    
    return count + '0';
  }
}
void ProcessGame::processGrid (void) {
  for (int i = 1; i < gridHeight + 1; i++) {
    for (int j = 1; j < gridWidth + 1; j++) {
      processedGrid[i][j] = processSquare(i, j);
    }
  }
}