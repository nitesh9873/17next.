//here in this line of code 
//we see sngle level inheritance and multi level heritace as well 
//net to see this is multiple inheritane 
//

#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
};
class student : public person //here we call parent(person)class
{
public:
    int rollno;
   // void getinfo()
   // {
    //    cout << "name:" << name;
    //    cout << "age:" << age;
    //    cout << "rollno:" << rollno;
   // }
};
class gradstudent:public student {
    public:
string research;


};
int main()
{
    // everything comes under student but for student we only
    // define roll no because  it inherit its name and age from
    // class--person and we say it is inherited from person class
    // and this is how inheritance works
    gradstudent s1;
   // s1.name = "nitesh";
    //s1.rollno = 158;
    //s1.age = 19;
    //s1.getinfo();
    s1.name="tonystark";
    s1.research="quantum mechanics ";
    cout<<s1.name;
    cout<<s1.research;
    return 0;
}