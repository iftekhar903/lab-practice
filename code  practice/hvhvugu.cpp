#include<iostream>
using namespace std;
class book
{
private:
    int price;
    int page;
public:
    void getdata();
    void display();

};
void book :: getdata()
{
    cout<<"enter the price:\n";
    cin>>price;
    cout<<"Enter the page  :\n";
    cin>>page;
};
void book:: display()
{
   cout<<"Printing BOOK information: \n";
    cout<<"price : " << price<<endl;
    cout<<"page  : " <<page <<endl;
};
int main()
{
    book obj1,obj2;
    obj1.getdata();
    obj1.display();
    obj2.getdata();
    obj2.display();
}
