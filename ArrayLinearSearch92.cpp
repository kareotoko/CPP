#include<iostream>
using namespace std;

// this algo used to search from beg to end one by one
// time complexity is O(n)

int main()
{
 	int A[10],n=10;
	int key;
	cout<<"Enter Numbers of ten array: ";
	    
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	cout<<"Enter Key: ";
	cin>>key;
	    
	for(int i=0;i<n;i++)
	{
		if(key==A[i])
		{
			cout<<"Found at "<<i;
			return 0;
		}
	}
	    
	cout<<"Not Found";
	
	return 0;
	    
}		
