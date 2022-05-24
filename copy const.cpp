#include<iostream>
using namespace std;
class student
{
int rollno;
float marks;
public:
student()
{
rollno=-5;
marks=0;
}
student(student &s1)
{
this->rollno= s1.rollno;
this->marks= s1.marks;
}
student(int x,float  y)
{
    rollno=x;
    marks=y;
}
void display()
{
cout<<"roll no  "<<rollno<<endl<<"marks  "<<marks;
}

};
int main()
{
student s1;
s1.display();
student s3(s1);
s3.display();
student s2(1503,20);
student s4(s2);
s4.display();
}
