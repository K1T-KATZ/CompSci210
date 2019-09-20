/** lab02.c
* ===========================================================
* Name: Christopher Katz / 11Aug19
* Section: T1-T2
* Project: Lab 2 - Variables, I/O, and Arithmetic Expressions
* Purpose: Learn C basics
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

   /* TODO 0.1 - Exercise 0 - Include Statement
         *a. add the required include statement to use scanf and printf */

  #include <stdio.h> //this calls the header file stdio.h which includes the usage of printf() and scanf().
  
int main(void) { //this begins the program

    /* TODO 1.1 - Exercise 1 - Output Statements
         *a. Your name
         *b. Your hometown
         *c. Your squadron number and nickname
         *d. An interesting fact about you */
   
   printf("Name: Christopher Katz\n"); //this line prints my name, then drops to the next line
   printf("Hometown: Ocala Florida\n"); //this line prints my hometown, then drops to the next line
   printf("Squadron: 11, Rowdy Rebels\n"); //this prints my squadron, then drops to the next line
   printf("Fun fact: While my last name is Katz, I am allergic to Cats.\n \n"); //this prints my interesting fact, then drops two lines lower.
   
    /* TODO 2.1 - Exercise 2 - Variable Basics
         *a. Prompt the user for two integers x and y
         *b. Output the first input value divided by the second input value
         *c. Output the second input value multiplied by the first input value */
   
   int y; //these four lines initiate the variables I will use in this section of the code: y, x, z, and b.
   int x;
   int z;
   int b;
   
   printf("Enter a value for x\n"); //this promts the user to enter a value for 'x'
   scanf("%d", &x); //this inputs the value from the user and sets it as 'x'
   
   printf("Enter a value for y\n"); //this promts the user to enter a value for 'y'
   scanf("%d", &y); //this inputs the value from the user and sets it as 'y'
   
   z = x / y; //this devides x by y, and sets the resault as the variable 'z'
   b = y * x; //this multiplies y by x and sets the resault as the variable 'b'
 
   printf("%d\n", z); //this prints the number value of 'z'
   printf("%d\n\n", b); //this prints the number value of 'b'
   
    /* TODO 3.1 - Exercise 3 - Arithmetic Expressions
         *a. Using multiplication, create an expression that will equal 512 and output this value
         *b. Using division, create an expression that will equal 512 and output this value
         *c. Using a combination of addition, subtraction, multiplication, and division, create an expression that will equal 512 and output this value
         *d. Using modulus, create an expression that will equal 512 and output this value */
      
      int c; //these four lines initiate the four variables I will use in this section of the code: c, d, e, and h.
      int d;
      int e;
      int h;
      
      c = 2 * 256; //this line sets the variable 'c' to equal 2 times 256
      d = 1024 / 2; //this line sets the variable 'd' to equal 1024 devided by 2
      e = (384 - 128) * 4 / 2; //this line sets the variable 'e' to equal 384 minus 128
      h = 512%5136; //this line sets the variable 'h' to equal 512 modulus 5136. Because of the nature of Mod, any number larger than 512 could have been used in place of 5136.
                 
      printf("%d\n", c); //the next four lines print the calculated values for c, d, e, and h. All of which equal 512. 
      printf("%d\n", d);
      printf("%d\n", e);
      printf("%d\n\n", h);
      
    /*TODO 4.1 - Exercise 4 - More Arithmetic Expressions
         *a. Prompt the user for the length of the side of a square
         *b. Output the perimeter of the square
         *c. Output the area of the square
         *d. Output the volume of the cube */
   
      int squareSide;                              //these four lines initiate the variables I will use for this section of the code, squareSide, squarePareim, squareArea, and cubeVoluem.
      int squareParim;
      int squareArea;
      int cubeVolume;
      
      printf("Input the length of the side of a square: \n\n"); //this line prompts the user to enter a value for the side of the square
      scanf("%d\n", &squareSide);                  //this line takes the user's inputed value and assigns it to squareSide
      
      squareParim = squareSide * 4;                //this line multiplies the inputed value for squareSide and multiplies it by 4 to find the parimeter of the square, then assigns this value to the variable squareParim
      squareArea = squareSide * squareSide;        //this line multiplies the square sides together to find the area of the square, then assigns this value to squareArea
      cubeVolume = squareArea * squareSide;        //this line finds the volume of the cube by multiplying one side of the cube by the length of the cube, and assigns this value to the variable cubeVolume
      
      printf("The Parimeter of the square is %d\n", squareParim); //the next three lines output the values for squareParim, squareArea, and cubeVolume. 
      printf("The area of the square is %d\n", squareArea);
      printf("The volume of the cube is %d\n\n", cubeVolume);
      
   /* TODO 4.2 - Exercise 4 - More Arithmetic Expressions
         *a. Prompt the user for two integers valueA and valueB
         *b. Output the difference between valueA and valueB
         *c. Output valueB divided by valueA */    
         
      int valueA;                                     //these four lines initaite the variables I will use in this section of the code: valueA, valueB, valueC, and valued.
      int valueB;
      int valueC;
      int valueD;
         
      printf("insert an integer for valueA\n");       //this line requests user input for valueA
      scanf("%d", &valueA);                           //this line takes the input for valueA and inputs it for the variable valueA
      printf("insert an integer for valueB\n");       //this line requests user input for valueB
      scanf("%d", &valueB);                           //this line takes the input for valueB and inputs it for the variable valueB
      
      valueC = valueA - valueB;                       //this line sets valueC to equal valueA minus valueB
      valueD = valueB / valueA;                       //this sets valueD to equal to valueB devided by valueA
      
      printf("%d\n", valueC);                         //these two lines output the values for the variables valueC and valueD
      printf("%d\n", valueD);
      
    return 0;                                         //this line tels the program to stop returning.
}                                                     //this close brace tells the program to end.