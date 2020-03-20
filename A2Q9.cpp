/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
//function to print the solution step by step
void print(char **board,int n)
{
	cout<<"Press Enter to see next solution";
	cin.get();
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				cout<<"__";
				cout<<board[i][j]<<"|";
			}
			cout<<"\n";
		}
}
bool check(char **board,int n,int row,int col)
{
    // condition for checking row
    for (int i=0; i<col;i++) 
    {
        if (board[row][i]=='*') //if star already present return false
            return false;
    }
    // condition for principal diagonal
    for (int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if (board[i][j]=='*') //if star already present return false
            return false;
    }
    // condition for anti diagonal
    for (int i=row,j=col;j>=0 && i<n;i++,j--)
    {
        if (board[i][j]=='*') //if star already present return false
            return false;
    }
   // if not present return true
    return true; 
}
bool nQueens(char **b /*board*/, int n/*size of board*/,int r/*current row number*/, int col/*current column number*/)
{
	if (col==n) //base condition. if all columns are filled 
	return true;
	else
	{
		for (int i=0;i<n;i++) // loop for rows
		{
			if (check(b,n,i,col)==true) // sending board, total rows/cols, current row and col to check whether there is already star present or not 
			{ 
				b[i][col]='*'; //if no then place star there
				print (b,n); // show the solution 
				if (nQueens(b,n,r,col+1)==true) // recursive call. and if recursive call == true  then return true 
				return true;
				b[i][col]=' '; 
			}
		}
	}
	return false;
}
int main()
{
	
	int n=9; //size of the board 
	char arr[n][n]; //board of the size n
	
	//assigning space to the whole array
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			arr[i][j]=' ';
		}
	}
	
	//creating dynamic character array to store array created before in it as we're to send pointer.
	char **board= new char *[n];
	for (int i=0;i<n;i++)
	{
		*(board+i)=new char [n];
	}
	// assigning values of arr to board
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				board[i][j]=arr[i][j];
			}
		}
		
			
	if (nQueens(board,n,0,0)==true) //if all queens placed 
	{
		cout<<"Queens Placed";
	}
	else //if not
	{
		cout<<"Solution doesn't exist";
	}
	//dealocating memory
	for (int i=0;i<n;i++)
	{
		delete[] *(board+i);
	}
	delete [] board;
	return 0;
}
