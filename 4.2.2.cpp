#include<iostream>
using namespace std;

class Animal
{
public:

virtual void eat()
{
	cout<<"Animal Eats"<<endl;
}
};

class Dog:public Animal
{
public:

void eat()
{
	cout<<"Dog Eats"<<endl;
}
};

int main()
{
Animal *ptr;
Dog d;
ptr=&d;
ptr->eat();
return 0;
}
