//DESCRIPTION
//statng of oops (objet oriented progtrammng).
//here we start and see classs, object, setdata and getdata 
//we make things  poriavte and public  use getdata  and setdata 
//class is always written after  namespace 
//to see the prvate item use this setdata and getdata to gain that item  in main function
//to do that  set salary in privvate form and set function setdata and getdata in publc format
//note down each synta  and learn it carefully.
//constructor -which strats automatically just after creation of object.
//if you have not set anything in main function  and directly set in  constuor then 
//it will also show it directly like here in main function if we ignore department setion 
//and write it directly in class as a constructor so it show us department diretcly 
//as MECH 
//Constructor can only be write  once.
//  you can not set two mesage as constructor ------->>>>>>"WRONG".
//if in main function you write the tag and then again in constructor 
//so it wll show as you write in main function .
//constructor wll be only in public .(******)
//as it getting call by directly main function and as we know main function does not access to private funtion 
// YOU SET AS MANY CONSTRUCTOR BUT NO OF PARAMETER  SHOULD BE DIFFERENT 
//line number -42




#include <iostream>
using namespace std;
class teacher {
    public:
string name;//these are object of clas teacher.
string department ;//these are object of clas teacher.
string subject;//these are object of clas teacher.
//this is sample  of non parameter constructor.

 //teacher(){
//cout<<"namaste ;  i am  constuctor "<<endl;
//department="MECH";
 //}
teacher(){
    department="ASTRONOMY";//sample of constructor.
}
//why not department of teacher2 get changed?

private:
double salary;
public:
void setsalary(double s){

    salary=s;

}
double getsalary(){
    return    salary ;
}
 };


int main(){
 teacher t1;
 t1.name="Nitesh";
 cout << t1.name <<endl;
 t1.subject="c++";
 cout << t1.subject <<endl;
//t1.department="CSE";
 cout << t1.department <<endl;
 t1.setsalary(50000);

 cout << t1.getsalary()<<endl;
 cout<<t1.department <<endl;                                           
cout<<t1.subject<<endl;
cout<<t1.name<<endl;
teacher t2;
t2.name="rupesh";
t2.subject="python";
t2.department="CSE";
t2.setsalary(60000);
cout<<t2.name<<endl;
cout<<t2.subject<<endl;
cout<<t2.department<<endl;
cout<<t2.getsalary()<<endl;
cout<<"salary of teacher 2 is  " <<t2.getsalary();


return 0;
}