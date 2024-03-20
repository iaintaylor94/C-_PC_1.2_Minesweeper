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
  for (int i = 0; i < gridHeight; i++) {
    for (int j = 0; j < gridWidth; j++) {
      processedGrid[i + 1][j + 1] = processSquare(i + 1, j + 1);
    }
  }
}