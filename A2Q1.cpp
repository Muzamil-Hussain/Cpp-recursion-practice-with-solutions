/*Name: Muzamil Hussain
  Roll No: i170191*/

#include <iostream>
using namespace std;
int Find(int array[], int length, int target)
{
	if (length<0) //base condition
	return -1; // if the whole array is traversed and reaches here so it means there's not target in the array, so return -1.
	if (array[length]==target)  //if the target is present then return the index(length)
	return length;
	Find(array,length-1,target); //recursive call
}
int main()
{
	int arr[]={1,2,3,4,5};
	cout<<Find(arr,4,6);
}
