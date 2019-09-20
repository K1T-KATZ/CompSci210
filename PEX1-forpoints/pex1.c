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

    /** all the variables are initialized. They do not need to be set to 0*/

    int pips;
    int die;
    int player;
    int currentTotal;
    int score0;
    int score1;
    int score;
    int turnTotal;

    printf("Pig!\n\n");  //this is the header for the game
    printf("Enter the number of pips: \n");
    scanf("%d", &pips);
    drawDie(pips);
    printf("enter the number of pips on the die, the player, the current total, the "
           "player 0 score, and the player 1 score.\n");
    scanf("%d %d %d %d %d", &die, &player, &currentTotal, &score0, &score1),
    turnStatus(die, player, currentTotal, score0, score1);

    rollDie();

    gameStatus(player, score0, score1);

    switch (player) {
        case 0:
            score = score0;
            turnTotal = currentTotal;
            totalScore(score, turnTotal);
            break;
        default:
            score = score1;
            turnTotal = currentTotal;
            totalScore(score, turnTotal);
            break;
    }


    return 0;
}

/**===================================================================================
 * the 'drawDie' function takes an inputted number of pips and draws the correct dice
 * accordingly.
 * ===================================================================================*/
void drawDie(int pips) {
    if (pips == 1) {
        printf(" ------- \n|       |\n|   *   |\n|       |\n -------\n");
    }
    else if (pips == 2) {
        printf(" ------- \n| *     |\n|       |\n|     * |\n -------\n");
    }
    else if (pips == 3) {
        printf(" ------- \n| *     |\n|   *   |\n|     * |\n -------\n");
    }
    else if (pips == 4) {
        printf(" ------- \n| *   * |\n|       |\n| *   * |\n -------\n");
    }
    else if (pips == 5) {
        printf(" ------- \n| *   * |\n|   *   |\n| *   * |\n -------\n");
    }
    else if (pips == 6) {
        printf(" ------- \n| *   * |\n| *   * |\n| *   * |\n -------\n");
    }
}

/**===================================================================================
 * the 'rollDie' function randomly assigns a number to 'pips' in order to simulate the
 * random rolling of a die.
 * ===================================================================================*/
int rollDie() {
    int pips;
    pips = (rand() % 6) + 1;
    return pips;
}

/**===================================================================================
 * the 'turnStatus' function takes inputs for the number of pips on the dice that was
 * rolled, which player rolled it, that player's current total points, and the running
 * score for both players 1 and 2. It then prints the current (round) score for the
 * player and the total (game) score for the player. Unless, of course, a 1 is rolled
 * ending that player's turn.
 * ===================================================================================*/
void turnStatus(int die, int player, int currentTotal, int score0, int score1) {
    switch (die) {
        case 1:
            printf("Player %d pigged out.\n", player);
            break;
        default:
            //score0 = score0 + die;
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
 * game is over or not. If it is not, the function determines who's turn it is.
 * ===================================================================================*/
void gameStatus(int player, int score0, int score1) {
    printf("Player 0 score: %d\n", score0);
    printf("Player 1 score: %d\n", score1);
    if (score0 >= 100) {
        printf("Player 0 won!\n");
    } else if (score1 > 100) {
        printf("Player 1 won!\n");
    } else {
        printf("It is Player %d turn.\n", player);
    }
}

/**===================================================================================
 * the 'totalScore' function takes inputs for the total score of the player and for the
 * score of the turn
 * ===================================================================================*/
int totalScore(int score, int turnTotal) {
    return score + turnTotal;
}

