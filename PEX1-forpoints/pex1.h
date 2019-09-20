#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void drawDie(int pips);
int rollDie();
void turnStatus(int die, int player, int currentTotal, int score0, int score1);
void gameStatus(int player, int score0, int score1);
int totalScore(int score, int turnTotal);