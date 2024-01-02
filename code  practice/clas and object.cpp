#include<iostream>
using namespace std;
class student
{
private:
    int age;
    int id;
public:
    void getdata();
    void display();
};

void student :: getdata()
{
    cout<<"Enter student age :\n";
    cin>>age;
    cout<<"Enter student id  :\n";
    cin>>id;
};

void student :: display()
{
    cout<<"Printing student information: \n";
    cout<<"Age  : " <<age <<endl;
    cout<<"ID   : " <<id <<endl;
}

int main()
{
    student obj1, obj2;

    obj1.getdata();
    obj2.getdata();
    obj1.display();
    obj2.display();


    return 0;
}
