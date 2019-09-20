/**
 * I am kitkatz
 * cs210
 */

#include "lab15functs.h"
#include "lab15fbFuncts.h"
#include <stdio.h>


int main() {
    printf("here");
    int MyArray[MAXPLAYERS][DATACOLS];
    int numPlayers = readData(MyArray);
    printf("%d players data read.\n",numPlayers);

    //The player ID 0 is Aaron Jones and he scored 4 touchdowns in 2017.
    printf("The player ID 0 is %s and he scored %d touchdowns in 2017.\n", getPlayerName(0), MyArray[0][2]);

    //The player ID 122 is Ezekiel Elliott and he rushed for 983 yards in 2017.
    printf("The player ID 122 is %s and he rushed for %d yards in 2017.\n", getPlayerName(122), MyArray[122][1]);

    //The player with the most yards in 2017 is Kareem Hunt and he had 1327.
    int mostYards = findMaxIndex(MyArray, numPlayers, 1);
    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(mostYards), MyArray[mostYards][1]);

    //The player with the most TDs in 2017 is Todd Gurley and he had 13.
    int mostTDs = findMaxIndex(MyArray, numPlayers, 2);
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(mostTDs), MyArray[mostTDs][2]);

    //The number of players with more than 10 TDs in 2017 is 2.
    int threshold = 10;
    int numTDs = numPlayerOverX(MyArray, threshold, numPlayers, 2);
    printf("The number of players with more than %d TDs in 2017 is %d.\n", threshold, numTDs);

    //The number of players with more than 1000 yards in 2017 is 9.
    threshold = 1000;
    int numYds = numPlayerOverX(MyArray, threshold, numPlayers, 1);
    printf("The number of players with more than %d yards in 2017 is %d.\n", threshold, numYds);

    //The number of players with more than 100 attempts in 2017 is 48.
    threshold = 100;
    int numAtms = numPlayerOverX(MyArray, threshold, numPlayers, 0);
    printf("The number of players with more than %d attempts in 2017 is %d.\n", threshold, numAtms);

    //The player with the most yards per carry (>100 attempts) is Alvin Kamara and he had 6.1.
    threshold = 100;
    int playerIndex = getMaxYardsPerCarryIndex(threshold, MyArray);
    double ydsPerCarry = getMaxYardsPerCarry(MyArray, playerIndex);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n",
            threshold, getPlayerName(playerIndex), ydsPerCarry);

    //The player with the most yards per carry (>50 attempts) is Dak Prescott and he had 6.3.
    threshold = 50;
    playerIndex = getMaxYardsPerCarryIndex(threshold, MyArray);
    ydsPerCarry = getMaxYardsPerCarry(MyArray, playerIndex);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n",
           threshold, getPlayerName(playerIndex), ydsPerCarry);

    //The player with the most yards per carry (>10 attempts) is Cordarrelle Patterson and he had 9.3.
    threshold = 10;
    playerIndex = getMaxYardsPerCarryIndex(threshold, MyArray);
    ydsPerCarry = getMaxYardsPerCarry(MyArray, playerIndex);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n",
           threshold, getPlayerName(playerIndex), ydsPerCarry);

    return 0;
}