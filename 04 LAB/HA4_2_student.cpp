//Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.


#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        long long int phone;
        string address;
    public:
        void get_data(){
            cout<<"Enter the roll no \n"<<endl;
            cin>>rollno;
            cout<<"Enter the phone no \n"<<endl;
            cin>>phone;
            cout<<"Enter the addreess \n"<<endl;
            cin>>address;
        }
        void display(){
            cout<<rollno<<" "<<phone<<" "<<address<<"\n";
        }

};

int main(){
    Student s1,s2;
    s1.get_data();
    s2.get_data();
    s1.display();
    s2.display();
}
