# Cpp-recursion-practice-with-solutions
C++ Recursion Practice Exercises with Solutions

## Q1.
###### Write a recursive function Find that finds given target value in the array. If value is not found your function must return -1, otherwise it should return the index of array where the value was found. Your function prototype must be as follows:
  
  ```
  int Find(int array[], int length, int target);
  ```
## Q2. 
###### The value of π can be determined by the series equation π=4∗(1−1/3+1/5−1/7+1/9−1/11+1/13+…)
###### Write a  recursive function that takes an odd number n and uses recursion to approximate the value of π using the given formula including term up through 1/n. Your function prototype must be as follows:

 ```
 float PiValue(int n);
 ```
 
 ## Calling this function “PiValue(1875)” should give the answer 3.14052655581
 
 
 ## Q3.
 ###### Write a C++ recursive function PrintPatternQ3 to print following pattern using recursion. No loops allowed whatsoever and you can write maximum two functions apart from main function.  Your function prototype must be as follows:
```
void PrintPatternQ3(int start, int end);
```
![Image description](https://i.imgur.com/ZZ6DuWB.png)


## Q4.
###### Write a C++ recursive function PrintPatternQ4 to print following pattern using recursion. No loops allowed whatsoever and you can write maximum two functions apart from main function. For example calling your function with  these a argument  PrintPatternQ4(5,1,5) should print following pattern. Your function prototype must be as follows:
```
void PrintPatternQ4(int, int ,int);
```

![Image description](https://i.imgur.com/d6c8L5O.png)


## Q5
###### Write a C++ recursive function PrintPatternQ5 to print following pattern using recursion. No loops allowed whatsoever and you can write maximum two functions apart from main function. For example calling your function with  these a argument  PrintPatternQ5(5,1,5) should print following pattern. Your function prototype must be as follows:
```
void PrintPatternQ5(int, int ,int);
```
![Image description](https://i.imgur.com/Limkb9h.png)


## Q6
###### Write a C++ recursive function PrintPatternQ6 to print following pattern using recursion. No loops allowed whatsoever and you can write maximum two functions apart from main function. For example calling your function with  these a argument PrintPatternQ6(5,1,5) should print following pattern. Your function prototype must be as follows:
```
void PrintPatternQ6(int, int ,int);
```
![Image description](https://i.imgur.com/zdIUdd0.png)


## Q7
###### Write a C++ recursive function PrintPatternQ7 to print following pattern using recursion. No loops allowed whatsoever and you can write maximum two functions apart from main function. For example calling your function with these a argument  PrintPatternQ7(1,5) should print following pattern. Your function prototype must be as follows:
```
void PrintPatternQ7(int, int);
```
![Image description](https://i.imgur.com/cK6B9g7.png)


## Q8
###### Write a C++ recursive function PrintPatternQ8 to print following pattern using recursion. No loops allowed whatsoever and you can write maximum two functions apart from main function. For example calling your function with these a argument  PrintPatternQ8(1,5) should print following pattern. Your function prototype must be as follows:
```
void PrintPatternQ8(int, int);  
```

![Image description](https://i.imgur.com/K0ILbuc.png)

## Q9
######  Solve the Nine Queens problem recursively. The objective is to place nine queens on an empty chessboard (9x9  matrix) so that no queen is “attacking” any other, i.e., no two queens are in the same row, the same column, or along the same diagonal?


![Image description](https://i.imgur.com/ysvf0NM.png)

Show a solution on the screen and wait for the user to press a key before displaying the next solution. [See the Book Deitel & Deitel’s How to Program Problem 7.26]
Your function prototype must be as follows:
```
bool nQueens(char **b /*board*/, int n=9/*size of board*/,
int r=0/*current row number*/, int col=1/*current column number*/);
```


## Q10
###### Write a recursive function that accepts two arguments into the parameters x and y, initially y will be always greater than x. The function should return the value of x times y. You are required to compute the product as repeated addition, for example: 7*4=4+4+4+4+4+4+4. 
###### Your function prototype must be as follows:
```
int product(int x, int y);
```

## Q11
###### Maze Traversal The grid of hashes (#) and dots (.) in the following figure is a two-dimensional array representation of a maze. In the two-dimensional array, the hashes represent the walls of the maze and the dots represent squares in the possible paths through the maze. Moves can be made only to a location in the array that contains a dot. There is a simple algorithm for walking through a maze that guarantees finding the exit (assuming that there is an exit). If there is not an exit, you’ll arrive at the starting location again. Place your right hand on the wall to your right and begin walking forward. Never remove your hand from the wall. If the maze turns to the right, you follow the wall to the right. As long as you do not remove your hand from the wall, eventually you’ll arrive at the exit of the maze. There may be a shorter path than the one you’ve taken, but you are guaranteed to get out of the maze if you follow the algorithm.

![Image description](https://i.imgur.com/pON7HFg.png)

###### Here is the final solution.

![Image description](https://i.imgur.com/ipt2lAx.png)


Your function prototype must be as follows:
```
bool mazeSolver( char **, int nrows, int ncols, int srow/*starting row */, int  scol /*starting column*/);
```


