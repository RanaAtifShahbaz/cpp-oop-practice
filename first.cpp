#include<iostream>
using namespace std;
// class Student {
//     public:
//     string name;
//     int age;
//     int roll_number;

//     void inputdata(){
//         cout << "Enter your name: ";
// cin >> name;

// cout << "Enter your age: ";
// cin >> age;

// cout << "Enter your roll number: ";
// cin >> roll_number;
//     }
//     void display(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//         cout<<roll_number<<endl;
//     }
// };

// int main(){
//     Student s1,s2,s3;
//     s1.inputdata();
//     s2.inputdata();
//     s3.inputdata();
//     s1.display();
//     s2.display();
//     s3.display();
// }

class Rectangle{
    public:
    float length;
    float width;

    void input(){
        cout<<"Please Enter The Length"<<endl;
        cin>>length;
        cout<<"Enter The Width"<<endl;
        cin>>width;
    }

    float area(){
        return (length*width);
    }
    float parameter(){
        return(2*(length+width));
    }


};
 int main(){
    float Area;
    float Parameter;
    Rectangle l1;
    l1.input();
    Area=l1.area();
    cout<<"Area is "<<Area<<endl;
    Parameter=l1.parameter();
    cout<<"Parameter is "<<Parameter<<endl;
    return 0;

 }