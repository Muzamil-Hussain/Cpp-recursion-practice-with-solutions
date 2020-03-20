/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
#include <stdlib.h>
using namespace std;
// function to print maze
void printmaze(char **maze, int nrows, int ncols, int srow, int scol)
{
   cout << "\nPress Enter to see next move\n";
   cin.get();
	cout<<"\n";
	for (int i=0;i<nrows;i++){
	for (int j=0;j<ncols;j++)
	{
		cout<<maze[i][j]<<"  ";
	}
	cout<<"\n";}
}
bool mazeSolver( char **maze, int nrows, int ncols, int srow /*starting row */, int scol /*starting column*/)
{
	maze[srow][scol]='X'; // assign X to current row and col of the maze
	printmaze(maze,nrows,ncols,srow,scol);  // after assigning print the maze current condition
		if (scol==0) // base condition 
		{
			cout<<"Maze Solved";
			exit(0); // if maze solved and base condition has met then no need to backtrack just exit the program
		}
	    else // if base condition is not yet met
	    {
            if (maze[srow+1][scol]=='.') // condition to check down
        	{
	    	   mazeSolver(maze,nrows,ncols,srow+1,scol); 
        	}
         	if (maze[srow-1][scol]=='.') //condition to check up
        	{
        		
	        	mazeSolver(maze,nrows,ncols,srow-1,scol);
			}
	     	if (maze[srow][scol-1]=='.') //condition to check left
	        {
	        	mazeSolver(maze,nrows,ncols,srow,scol-1);

         	}
            if (maze[srow][scol+1]=='.')
         	{
	        	mazeSolver(maze,nrows,ncols,srow,scol+1); //condition to check right
	        }
	
		}
}
int main()
{	 
   //creating the maze array character by character
   char arr[12][12]={{'#','#','#','#','#','#','#','#','#','#','#','#'},
	                  {'#','.','.','.','#','.','.','.','.','.','.','#'},
					  {'#','.','#','.','#','.','#','#','#','#','.','#'},
					  {'#','#','#','.','#','.','.','.','.','#','.','#'},
					  {'#','.','.','.','.','#','#','#','.','#','.','.'},
					  {'#','#','#','#','.','#','.','#','.','#','.','#'},
					  {'#','.','.','#','.','#','.','#','.','#','.','#'},
					  {'#','#','.','#','.','#','.','#','.','#','.','#'},
					  {'#','.','.','.','.','.','.','.','.','#','.','#'},
					  {'#','#','#','#','#','#','.','#','#','#','.','#'},
					  {'.','.','.','.','.','.','.','#','.','.','.','#'},
					  {'#','#','#','#','#','#','#','#','#','#','#','#'}
					  };
	// creating dynamic character array to store the character array and send it as argument and receive it as pointer paramreter				  
	char **maze=new char*[12];
	for (int i=0;i<12;i++)
	maze[i]=new char [12];
	
	// assigning value of arr to maze
	for (int i=0;i<12;i++)
	{
		for (int j=0;j<12;j++)
		{
			maze[i][j]=arr[i][j];
		}
	 } 
	
	// displaying maze			 
    for (int i=0;i<12;i++)
    {
    	for (int j=0;j<12;j++)
    	{
    		cout<<maze[i][j]<<"  ";
		}
		cout<<"\n";
	}
	 mazeSolver(maze,12,12,4,11);
    // dealocating memory created on heap	 
	 for (int i=0;i<12;i++)
	 delete [] maze[i];
	 
	 delete [] maze;
}
