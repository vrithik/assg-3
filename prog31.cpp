#include <iostream>
using namespace std;
 
int main() 
{
int n,a=0;
cout<<"Enter any num : ";
cin>>n;
while(n>0)
{
n=n/10;
a++;
}
cout<<"\n No. of digits in given number is: "<<a;
return 0;
}