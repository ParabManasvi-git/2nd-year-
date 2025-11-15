#include <iostream>
using namespace std;

class Student 
{
private:
    string name;
    int age;
    float grade;

public:
    Student(string n, int a, float g) : name(n), age(a), grade(g) {

    }

  
    Student() : name("Unknown"), age(0), grade(0.0) {

    }

    
    void display() 
    const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }

    
    void setDetails(string n, int a, float g) {
        name = n;
        age = a;
        grade = g;
    }
};

int main() {
   
    const int size = 3;
    Student S1[size];

    
    S1[0].setDetails("Alice", 20, 88.5);
    S1[1].setDetails("Bob", 21, 92.0);
    S1[2].setDetails("Charlie", 19, 85.0);

 
    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << " details:" << endl;
        S1[i].display();
        cout << endl;
    }

    return 0;
}
