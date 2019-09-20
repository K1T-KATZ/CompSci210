/** lab05.c
* ===========================================================
* Name: Christopher Katz, 20AUG19
* Section: T1-T2
* Project: Lab 5 - Branches I
* Purpose: 
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/***
 *  Function prototypes
 */
void guessGame();
int evenOdd(int value);
int passFail(int score);
int residenceHall(int squadron);
int daysInYear(int year);
int exemplar(int year);
int drinkSize(int size);
int quadrant(int x, int y);
bool isLeap(int year);
int daysInMonth(int month, int year);

int main() {

    // Exercise 0 - Guess Game
    guessGame();

    // TODO 1.2 - Exercise 1 - Even or Odd Numbers
   int value;
   printf("Try a number I'll tell you if it is even or odd.\n");
   scanf("%d", &value);
   printf("%d\n", evenOdd(value));
   if (evenOdd(value) == 1) {
      printf("%d is odd.\n\n", value);
   }
   
   else {
      printf("%d is even.\n\n", value);
   }
    // TODO 2.2 - Exercise 2 - Pass or Fail Grades
    int score;
    printf("Enter a score:\n");
    scanf(" %d", &score);
    if (passFail(score) == 1) {
       printf("%d is passing.\n\n", score);
    }
    else {
       printf("%d is failing.\n\n", score);
    }

    // TODO 3.2 - Exercise 3 - Squadron Residence Halls
    int squadron;
    scanf("Enter a Squadron: %d\n", &squadron);
    if (residenceHall(squadron) == 1) {
       printf("Squadron %d is located in Vandy\n\n", squadron);
    }
    else {
       printf("Squadron %d is located in Sijan\n\n", squadron);
    }

    // TODO 4.2 - Exercise 4 - Days in Year
    int year;
    scanf("Enter a year: %d", &year);
    if (daysInYear(year) == 1) {
       printf("The year %d has 366 days.\n\n", year);
    }
    else {
       printf("The year %d has 365 days.\n\n", year);
    }

    // TODO 5.2 - Exercise 5 - Exemplar
    int yearExemp;
    scanf("Enter a class year (two digits): %d", &yearExemp);
    if (exemplar(yearExemp) == 0) {
       printf("The class of 2019's exemplar is Armstrong.\n\n");
       }
       else if (exemplar(yearExemp) == 1) {
          printf("The class of 2020's exemplar is Hoover.\n\n");
       }
    else {
       printf("The class of 2021's exemplar is Risner.");
    }

    // TODO 6.2 - Exercise 6 - Drink Size
	int size;
	scanf("Enter a drink size: %d", &size);
	

    // TODO 7.2 - Exercise 7 - Quadrant
	int x;
	int y;
	scanf("Enter the x and y values of a point: %d %d", &x, &y);

    // TODO 8.3 - Exercise 8 - Days in Month
	int month;
	int theYear;
	scanf("Enter the month then year: %d %d", &month, &theYear);
	printf("Month has %d days.", daysInMonth(month, theYear));

    return 0;
}

/**--------------------------------------------------------------------------------------------
 * A function that generates a random number between 0 and 100 and asks the user to guess it.
 * @param <explanation of each of the function parameters>
 * @return <explanation of what the function returns>
 */
void guessGame() {
    int answer, guess;

    // Setup and seed the random number generator
    struct timespec time;
    clock_gettime(CLOCK_REALTIME, &time);
    srandom((unsigned) (time.tv_nsec ^ time.tv_sec));

    // Generate a random number between 0 and 100
    answer = random() % 101;

    // Prompt user for a guess and check whether it is correct or not
    printf("I am thinking of a number between 0 and 100.\n");
    printf("Pssst...the secret answer is %d.\n",answer); // for debugging only
    printf("What is your guess: ");
    scanf("%d",&guess);
    if (guess == answer) {
        printf("You guessed right! The answer was %d.\n\n", answer);
    } else {
        printf("Sorry, you guessed %d, but the answer was %d.\n\n",guess, answer);
    }
}

// TODO 1.1 - Exercise 1 - Even or Odd Numbers
int evenOdd(int value) {
   int zeroOne;
   zeroOne = value % 2;
   return zeroOne;
}

// TODO 2.1 - Exercise 2 - Pass Fail Grades
int passFail(int score) {
   if (score >= 70) {
      return 1;
   }
   else {
      return 0;
   }
}

// TODO 3.1 - Exercise 3 - Residence Hall
int residenceHall(int squadron) {
   if (squadron > 23) {
      return 0;
   }
   else {
      return 1;
   }
}

// TODO 4.1 - Exercise 4 - Days in Year
int daysInYear(int year) {
   if ((year % 4) == 0) {
      if ((year % 100) == 0) {
         if ((year % 400) == 0) {
         return 366;
         }
         else {
            return 365;
         }
      }
      else {
         return 366;
      }
   }
   else {
      return 365;
   }
}

// TODO 5.1 - Exercise 5 - Exemplar
int exemplar(int year) {
   if (year == 19) {
      return 2;
   }
   else if (year == 20){
      return 1;
   }
   else {
      return 0;
   }
}


// TODO 6.1 - Exercise 6 - Drink Size
int drinkSize(int size) {
	if (size <= 12) {
		return 0;
	}
	else if (size <= 20) {
		return 1;
	}
	else if (size <= 32) {
		return 2;
	}
	else {
		return 3;
	}
}

// TODO 7.1 - Exercise 7 - Quadrant
int quadrant(int x, int y) {
	if ((x > 0) && (y > 0)) {
		return 1;
	}
	if ((x < 0) && (y > 0)) {
		return 2;
	}
	if ((x < 0) && (y < 0)) {
		return 3;
	}
	if ((x > 0) && (y < 0)) {
		return 4;
	}
	else {
		return 0;
	}
}

 /**------------------------------------------------------------------------------------
 *   <add a description>
 *   @param year - The number of years.
 *   @returns A boolean indicating whether the year is a leap year.
 */
bool isLeap(int year) {
    // TODO 8.1: Remove True from the line below and write the leap year condition as described
    // TODO      using logical operators && (and) and || (or).  Ask for help as this is a preview
    // TODO      of next lesson's material
    //if ((((year % 4) == 0) && ((year % 100) != 0)) || (((year % 4) == 0) && ((year % 400) == 0))) {
     //  return true;
    //}
    //else {
       return ((((year % 4) == 0) && ((year % 100) != 0)) || (((year % 4) == 0) && ((year % 400) == 0)));
	//((((year % 4) == 0) && ((year % 100) != 0)) || ((((year % 100) == 0)) && ((year % 400) == 0) && (year % 4) == 0));
}
 
/**------------------------------------------------------------------------------------
 *   A function that determines the number of days in a month in a given year.
 *   @param month The numeric value for the month.
 *   @param year The year in which the month occurs.
 *   @returns The number of days in the month.
 */
int daysInMonth(int month, int year){
    // TODO 8.2: Implement the selection statement as described
    // TODO      using logical operators && (and) and || (or) Ask for help as this is a preview
    // TODO      of next lesson's material
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
		return 31;
	}
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
		return 30;
	}
	else {
		if (isLeap(year) == true) {
		   return 29;
		}
		else {
		   return 28;
		}
	}
}