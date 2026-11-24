#include<iostream>
using namespace std;

class Calculator
{
 public:
int add(int a,int b)
{	return a+b;
}

int add(int c,int d,int e)
{
	return c+d+e;
}
};

int main()
{
Calculator c;
cout<<"Addition="<<c.add(3,4);
cout<<"\nAddition="<<c.add(55,3,4);
return 0;
}
