#include <iostream>
#include<string>
using namespace std;
class teacher{
public:
string username,dob,password;

//here you can easily see that our object and parameter have same name --->>>'dob'
//here as it is simple programming compiler get undertaand but in cae of comples
//programjming it is hard to understand for compiler and thats why we use that arrow tag 
//for marking real object and parameter.so compiler get understand easily.

teacher(string un, string dob, string pw){
username=un;
password=pw;
dob=dob;
}

 void getinfo(){
cout<<"username:"<<username<<endl;
cout<<"password:"<<password<<endl;
cout<<"dob:"<<dob<<endl;

 }

};
int main(){
teacher t1("NITE","NITESH","KKKK");
t1.getinfo();
teacher t2(t1);
t2.getinfo();
teacher t3(t2);
t3.getinfo();

return 0;
}