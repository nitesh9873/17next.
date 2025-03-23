// shallow and deeep ,memeory allocaton
// here we are dealing wth dynamic memory alloaction.
// new and pointer is dynamic memory allocaton.

#include <iostream>
using namespace std;
class student
{
public:
    string name;
    double *cgpaPtr;
    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // we need to make deepcopy constructor here.
    ~student()
    {
        cout << "hii a am destructor";
        // pura code run hua  and at last fir compiler ne kha koi destructor h to aply kro nhi to khud hi kro
        // he see a compiler having message "hii a am destructor"
        // so he(compler) applied it
        // and end the function.
        delete cgpaPtr; // it delete the pointer memory
        // it helps in case of MEMORY ALLOCATION
    }
    student(student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getinfo()
    {
        cout << "name:" << name << endl;
        cout << "cgpa:" << *cgpaPtr << endl;
    }
};
int main()
{
    student s1("rahul kumar", 8.9);
    student s2(s1);
    s1.getinfo();
    // we want that cgpga of student become 9.2 and name is same as s1(rahul kumar).
    *(s2.cgpaPtr) = 9.2;
    s1.getinfo();
    s2.name = "neha";
    s2.getinfo();
    // s1.getinfo will always give of s1 .so why this give two differenrt values on running.
    // here we command s1.getinfo two times one before s2.cgpa and one after that.
    // and it show diffrent diferent values for same call
    // AND both times rahul cgpa shold be 8.9 .as we increse cgpa of s2 not s1 who is rahul kumar
    //  this is due to the fact that we are here dealing with DYANMIC MEMORY ALLOCATON
    // this is the problem of shallow copy
    // thn we have deep copy which solve our problem
    // and it have its own constructor.

    //

    return 0;
}