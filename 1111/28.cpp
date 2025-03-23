//sample to show the multiple inheritance..


#include <iostream>
using namespace std;
class student {
public:
string name ;
double rollno;


};
class teacher{
    public:
string subject;
double salary;
};
class TA: public student,public teacher{
public:
//it have nothing it will only  show which it has inherit 

};
int main(){
TA t1;
t1.name="tony stark";
t1.subject="english";
cout<<t1.name<<endl;
cout<<t1.subject<<endl;

return 0;
}