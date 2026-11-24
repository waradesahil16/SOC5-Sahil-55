#include<iostream>
using namespace std;

class Calculator
{
 public:
int add(int a,int b)
{
	return a+b;
}

int sub(int c,int d)
{
	return c-d;
}

int multi(int e,int f)
{
	return e*f;
}

int div(int g,int h)
{
	return g/h;
}
};

int main()
{
Calculator c;
cout<<"Addition="<<c.add(3,4);
cout<<"\nSubtraction="<<c.sub(5,3);
cout<<"\nMultiplication="<<c.multi(4,5);
cout<<"\nDivision="<<c.div(8,4);
return 0;
}
