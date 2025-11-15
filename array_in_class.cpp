#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter the roll no of the student:";
        cin>>rollno;
        cout<<"Enter the name of the student:";
        cin>>name;
    }
    void display()
    {
        cout<<"\nRoll no is:"<<rollno<<endl;
        cout<<"\nName is:"<<name<<endl;
    }
};
int main()
{
    int size=3;
    student s[size];
    for(int i=0;i<=3;i++)
    {
        cout<<"enter the student information"<<i+1<<"i";
        s[i].getdata();
    }
     for(int i=0;i<=3;i++)
    {
        cout<<" the student information"<<i+1<<"i";
        s[i].display();
    }
    return 0;
}
