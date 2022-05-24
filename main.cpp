
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
