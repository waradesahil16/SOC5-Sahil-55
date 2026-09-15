#include<iostream>
using namespace std;

class Rectangle
{
	private:
	float l;
	float b;

	public:
	void accept()
{
	cout<<"Enter Length:";
	cin>> l;
	cout<<"Enter Breadth:";
	cin>> b;
}

float area();
float perimeter();

void display()
{
	cout<<"Area:"<< area() << endl;
	cout<<"Perimeter:"<< perimeter() << endl;
}
};

float Rectangle::area()
{
	return l*b;
}

float Rectangle::perimeter()
{
	return 2*(l+b);
}

int main ()
{
	Rectangle r;
	r.accept();
	r.display();

	return 0;
} 

