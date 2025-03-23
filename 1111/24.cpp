
//dont forget to have #sting on top.
//class teacher as usual
//this is sample of parameteried constructor.
//class teacher ,public ,prvate ...all are the same 
//ooonly constructor get paramerterised 
//and this will reduce our line of code in main function 
// instead of writing to each we can do the same thing for all


#include <iostream>
#include <string>
using namespace std;
 class teacher {
    
    public:
    string name,section,cgpa;
    //down the line.... it is an eample of parametrisesd constructor
    teacher(string n,string s,string c){
section=s;
name=n;
cgpa=c;
}
void getinfo(){
cout<<"name:"<<name<<endl;
cout<<"section:"<<section<<endl;
cout<<"cgpa:"<<cgpa<<endl;
}
};
int main(){
teacher t1("nitesh","A-3","9.00");

t1.getinfo();
return 0;
}