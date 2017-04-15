//Program to demonstrate : 
//friend function
//read : friend.txt

#include <iostream>

using namespace std;

class Myclass
{
private://access specifier
    int x, y; //data member
public://access specifier
    Myclass(); //constructor
    Myclass(int,int); //constructor
    void display();// member function
    
    friend void test(); //a friend function
};

Myclass :: Myclass()//default constructor
{
    cout<<"\n Myclass()";
    x = 10;//default value
    y = 20;//default value
}

Myclass :: Myclass(int q, int w)//parameterized constructor
{
    cout<<"\n Myclass(parameters)";
    x = q;//parameterized value
    y = w;//parameterized value
}

void Myclass :: display()
{
    cout<<"\n"<<x<<" "<<y;
}

void test() //a non member function
{
    Myclass m;//allowed because constructor is public
    m.display();//allowed because display is public
    m.x = 88;//not allowed because x is private
    m.y = 99;//not allowed because y is private
    m.display();//allowed because display is public
}

int main()
{
    test();
    return 0;
}