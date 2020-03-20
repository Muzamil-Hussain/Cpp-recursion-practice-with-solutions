/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
float PiValue(int n)
{
	if (n==1) //base condition 
	{
		return 4; //return 1 as the first term is also 1
	}
	if (n%2==0) // if n is completely divisible by 2 (even term) then put minus with the formula
	{
		return PiValue(n-1)-(4.0/((2.0*n)-1.0));  // -(1/(2*2)-1)=-1/3. same for other n
	}
	else //if odd n(term)
	{
		return PiValue(n-1)+(4.0/((2.0*n)-1.0)); //(1/(2*3)-1)=1/5. same for other n
	}
}
int main()
{
	cout<<PiValue(1875);
}
