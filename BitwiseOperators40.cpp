#include <iostream>
using namespace std;

//this bitwise operator consist of & | ^ << >> ~
//every bit in 8 bit architecture consist of 0^7 0^6 0^5 0^4 0^3 0^2 0^1 0^0

int main()
{
    int a=11,b=7,c;
    c=a&b; //and operator
    cout<<c<<endl;
        
    int d=11,e=7,f;
    f=d|e; //or operator
    cout<<f<<endl;
        
    int g=11,h=7,i;
    i=g^h; //xor operator
    cout<<i<<endl;
        
    char j=5,k;
    k=j<<1; //shift left operator
    cout<<(int)k<<endl;
        
    char l=20,m;
    m=l>>1; //shift right operator
    cout<<(int)m<<endl;
        
    char x=5,y;
    y= ~ x; //not operator
    cout<<(int)y<<endl;
        
    return 0;
        
}
