#include<iostream>
using namespace std;
class ComplexNum{
    int x,y;//x is real num
    public:
    void readNum()
    {
        cout<<"Enter real no.";
        cin>>x;
        cout<<"Enter imaginary number ";
        cin>>y;
    }
    void displayNum()
    {
        if(y<0)
        cout<<"Number is: "<<x<<y<<"i";
        else
        cout<<"Number is: "<<x<<"+"<<y<<"i";}
        ComplexNum(){
        x=0;y=0;
    }
    ComplexNum(int p,int q){
        x=p;y=q;
    }
    ComplexNum(int r){
        x=r;y=r;
    }
    ComplexNum addComplexNum(ComplexNum c2)
    {

            ComplexNum c3;
            c3.x=x+c2.x ;endl;
            c3.y=x+c2.y ;endl;
            return c3;
    }
};
int main()
{
    ComplexNum c1,c4;
    c1.readNum();
    c1.displayNum();

    ComplexNum c2(7,8);
    c2.displayNum();

    ComplexNum c3(5);
    c3.displayNum();

    c4=c1.addComplexNum(c2);
    c4.displayNum();
}
