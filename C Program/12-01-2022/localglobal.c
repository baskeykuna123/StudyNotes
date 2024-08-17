#include<iostream>
using namespace std;
int x=20;
main()
{
	int x=10;
	cout<<"x local value is :"<<x<<endl;
	cout<<"X value is :"<<::x;
}

