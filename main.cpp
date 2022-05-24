/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Mammals{
    public:
    void fun()
    {
        cout<<"I am mammal"<<endl;
    }
};

class MarineAnimals{
    public:
    void fun()
    {
        cout<<"I am a marine animal"<<endl;
    }
};

class BlueWhale: public Mammals, public MarineAnimals{
    public:
    BlueWhale(){
        cout<<"I belong to both categories"<<endl;
    }
};

int main()
{
    BlueWhale obj;
    obj.Mammals::fun();
    obj.MarineAnimals::fun();
    
    
    return 0;
}