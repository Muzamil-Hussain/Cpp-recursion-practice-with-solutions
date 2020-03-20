/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
void print (int x,char ch) //function to print the characters. i.e spaces and stars
{
	if (x>=1) //base condition 
	{
		print (x-1,ch); // recursive call
		if (ch=='*') // if ch is '*' then print space with it
		cout<<ch<<" ";
		else  // if not then simply print it
		cout<<ch;
	}
}
void PrintPatternQ6(int x, int y,int z) // function to print the whole pattern as given
 {  // upper half part of the pattern
	if (x>1) // base condition
	{
		print ((2*x)-1,' '); // x=5--> (2*5)-1=9. print 9 spaces first and so on
		cout<<"|";
		print ((2*x)-1,' '); //x=5--> (2*5)-1=9. print 9 spaces first and so on
		print ((2*y)-2,'*'); // y=1--> (2*1)-2=0. print 0 star on line number one and so on with increament of y.
		cout<<"| ";
		print ((2*y)-2,'*'); // y=1--> (2*1)-2=0. print 0 star on line number one and so on with increament of y.
		print ((2*x)-1,' '); //x=5--> (2*5)-1=9. print 9 spaces first and so on
		cout<<"|";
		cout<<"\n";
		PrintPatternQ6(x-1,y+1,z);
		
	} //lower part of the pattern
	    print ((2*x)-1,' '); //x=2--> (2*2)-1=3. print 3 spaces first and so on with increament of x.
		cout<<"|";
		print ((2*x)-1,' '); //x=2--> (2*2)-1=3. print 3 spaces first and so on with increament of x.
		print ((2*y)-2,'*'); // y will change accoring to size
		cout<<"| ";
		print ((2*y)-2,'*');
		print ((2*x)-1,' '); //x=2--> (2*2)-1=3. print 3 spaces first and so on with increament of x.
		cout<<"|";
		cout<<"\n";
}
int main()
{
	PrintPatternQ6(10,1,10);
	
}
