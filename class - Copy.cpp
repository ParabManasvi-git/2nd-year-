#include<iostream>
using namespace std;
class student
{
    int rollno;
    public:
    void getdata()
  10  {
        cout<<"Enter the Roll no :";
        cin>>rollno;
    }
    void display()
    {
        cout<<"The roll no is"<<rollno;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}