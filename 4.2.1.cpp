#include<iostream>
using namespace std;

class Animal
{
public:


void walk()
{
	cout<<"Animal Walks"<<endl;
}
};

class Dog:public Animal
{
public:

void walk()
{
	cout<<"Dog Walks"<<endl;
}
};

int main()
{
Animal a;
Dog d;
a.walk();
d.walk();
return 0;
}

