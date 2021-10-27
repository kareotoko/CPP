#include<iostream>
using namespace std;
    
int main()
{
	int n,r,sum=0,m;
	cout<<"Enter the Number ";
	cin>>n;
	m=n;
	    
	while(n>0)
	{
	    r=n%10;
            sum=sum+r*r*r;
            n/=10;
	}
	cout<<"sum is "<<sum<<endl;
	    
	if(sum==m)
	    cout<<"Armstrong Number";
	else
	    cout<<"Not a Armstrong Number";
		
	return 0;
	    
}
