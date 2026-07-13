#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    int roll_number;

    void inputdata(){
        cout << "Enter your name: ";
cin >> name;

cout << "Enter your age: ";
cin >> age;

cout << "Enter your roll number: ";
cin >> roll_number;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll_number<<endl;
    }
};

int main(){
    Student s1,s2,s3;
    s1.inputdata();
    s2.inputdata();
    s3.inputdata();
    s1.display();
    s2.display();
    s3.display();
}