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


// class Bank{
//     private:
//     int balance;
//     int amount;
//     int remaining;
//     public:
//     void deposit(int b){
//         if(b<=0){
//             cout<<"Deposit Must Be Greater Than Zero "<<endl;
        
//         }
//         balance=b;
//     }
//     void withdraw(){
        
//         cout<<"Enter The amount to withdraw "<<endl;
//           cin>>amount;
//         if(amount>balance){
//             cout<<"Not have enough balance to withdraw ";
//         }
      


//     }
//     void display_balance (){

//         remaining=balance-amount;
//         cout<<"Your Remaining Balance is "<<remaining<<endl;


//     }


// };
// int main(){
//     Bank b1;
//     b1.deposit(2000);
//     b1.withdraw();
//     b1.display_balance();

// }

class Student{
    private:
    string name;
    int roll_number;
    float gpa;
    public:
    void setdata(string s, int r,float g){
        name=s;
        roll_number=r;
        gpa=g;}
        
    void getdata(){
        cout<<"Roll No is "<<roll_number<<endl;
        cout<<"Name is "<<name<<endl;
        if(gpa<0||gpa>4){
            cout<<"Invalid GPA Input"<<endl;
        }
        else
        cout<<"GPA is "<<gpa<<endl;
    }
    

};
int  main(){
    Student s;
    s.setdata("Atif",30,3.00);
    s.getdata();
}