#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter the three numbers";
	cin>>a>>b>>c;
	if( a>b && a>c)
	cout<<"the largest is"<<a;
	if( b>a && b>c)
	cout<<"the largest is"<<b;
	if( c>a && c>b)
	cout<<"the largest is"<<c;
	return 0;
}
