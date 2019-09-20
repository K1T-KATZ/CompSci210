/** pex1.c
 * ===================================================================================
 * Name: Christopher Katz, 15 Sep 2019
 * Section: T1/2
 * Project: Programming exercise 1
 * Purpose: Adhere to DFCS C Programming Standards to include appropriate commenting,
     * use functional decomposition to implement a solution,
     * understand function calls and the power of code reuse,
     * use selection statements,
     * and understand indefinite iteration through while loop implementation
 * ===================================================================================
 */

#include "pex1.h"

/**===================================================================================
 * the main function initializes all my variables, runs all the prompts for the users,
 * and calls my user defined functions.
 * ===================================================================================*/

int main(void) {

    printf("Pig!\n\n");

    int dieRolled;
    int player = 0;
    int score0 = 0;
    int score1 = 0;
    int turnTotal = 0;
    int hold = 0;

    while ((score0 <= 100) && (score1 <= 100)) {
        while (hold == 0) {  //the loop continues to run so long as the player wants it to run.

            dieRolled = rollDie(); //this calls the rollDie function, which returns a random number of pips.
            drawDie(dieRolled);  //by calling the function drawDie, this draws the die.

            if (dieRolled != 1) { //this makes sure the user did not roll a 1.
                turnTotal = turnTotal + dieRolled;
                turnStatus(dieRolled, player, turnTotal, score0, score1);
                printf("Hit 0 to keep playing, or 1 to hold\n\n");
                scanf("%d", &hold);
            } else {
                turnTotal = 0;
                hold = 1;
            }

            if (hold == 1) {
                if (player == 0) {
                    score0 = totalScore(score0, turnTotal);
                    player = 1;
                } else {
                    score1 = totalScore(score1, turnTotal);
                    player = 0;
                }
            }
        }
        gameStatus(player, score0, score1); //this prints the game status based on the function gameStatus
        hold = 0; //this forces the loop to stop so that the player can be changed.
        turnTotal = 0; //this sets the turn total to 0 so that nothing is added to the total score.
    }

    return 0;
}

/**===================================================================================
 * the 'drawDie' function takes an inputted number of pips and draws the correct dice
 * accordingly. If drawDie is given 4 pips, it will draw a dice with 4 pips.
 * ===================================================================================*/
void drawDie(int pips) {
    if (pips == 1) {
        printf(" ------- \n|       |\n|   *   |\n|       |\n -------\n");
    } else if (pips == 2) {
        printf(" ------- \n| *     |\n|       |\n|     * |\n -------\n");
    } else if (pips == 3) {
        printf(" ------- \n| *     |\n|   *   |\n|     * |\n -------\n");
    } else if (pips == 4) {
        printf(" ------- \n| *   * |\n|       |\n| *   * |\n -------\n");
    } else if (pips == 5) {
        printf(" ------- \n| *   * |\n|   *   |\n| *   * |\n -------\n");
    } else if (pips == 6) {
        printf(" ------- \n| *   * |\n| *   * |\n| *   * |\n -------\n");
    }
}

/**===================================================================================
 * the 'rollDie' function randomly assigns a number to 'pips' in order to simulate the
 * random rolling of a die. With no input the function should return a random number
 * between 1 and 6 inclusively.
 * ===================================================================================*/
int rollDie() {
    int pips;
    pips = (rand() % 6) + 1;  //while rand is not completely random, it is random enough
    return pips; //this is the number of pips that will be drawn on the dice
}

/**===================================================================================
 * the 'turnStatus' function takes inputs for the number of pips on the dice that was
 * rolled, which player rolled it, that player's current total points, and the running
 * score for both players 1 and 2. It then prints the current (round) score for the
 * player and the total (game) score for the player. Unless, of course, a 1 is rolled
 * ending that player's turn. If given the inputs die = 3, player = 1, currentTotal = 7,
 * score0 = 3, and score1 = 4, the function should print
 * "Current score for player 1 = 7"
 * "Total score = 4"
 * ===================================================================================*/

void turnStatus(int die, int player, int currentTotal, int score0, int score1) {
    score0 = score0 + currentTotal;
    score1 = score1 + currentTotal;
    switch (die) {
        case 1:
            printf("Player %d pigged out.\n", player);
            break;
        default:
            switch (player) {
                case 0:
                    printf("Current score for player 0 = %d.\n", currentTotal);
                    printf("Total score = %d.\n", score0);
                    break;
                default:
                    printf("Current score for player 1 = %d.\n", currentTotal);
                    printf("Total score = %d.\n", score1);
                    break;
            }
    }
}

/**===================================================================================
 * the 'gameStatus' function takes inputs for the player and the running score for both
 * players 1 and 2. It then prints the scores for both players and then decides if the
 * game is over or not. If it is not, the function determines who's turn it is. If given
 * the inputs player = 0, score0 = 3, and score1 = 4, the function should print
 * "Player 0 score: 3"
 * "Player 1 score: 4"
 *
 * "It is Player 0's turn"
 * ===================================================================================*/

void gameStatus(int player, int score0, int score1) {
    printf("Player 0 score: %d\n", score0);
    printf("Player 1 score: %d\n\n", score1);
    if (score0 >= 100) { // this makes sure that if someone wins the correct status is outputted
        printf("Player 0 won!\n");
    } else if (score1 > 100) {
        printf("Player 1 won!\n");
    } else {
        printf("It is Player %d's turn.\n", player);
    }
}

/**===================================================================================
 * the 'totalScore' function takes inputs for the total score of the player and for the
 * score of the turn. If given the inputs score = 5 and turnTotal = 33, the function
 * should return 38.
 * ===================================================================================*/
int totalScore(int score, int turnTotal) {
    return score + turnTotal;
}

