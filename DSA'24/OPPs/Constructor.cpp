#include<iostream>
using namespace std;

class student
{
    
    string name;
    int roll_no;
    string branch;
     public:
    //default Constructor:
    student()
    {
        cout<<"This is Default Constructor:"<<endl; // constuctor called when Object Create initialize
        name="Arman Ali";
        roll_no=123456789;
        branch="IT";
    }

    // Parameterized Consructor:
    student(string name1 ,int roll,string branch1)
    {
         cout<<"This is Parameterized Constructor:"<<endl;
        name=name1;
        roll_no=roll;
        branch=branch1;
    }

    //Copy Constuctor:
    student(const student& r)
    {
        cout<<"This is Copy Constuctor:"<<endl;
        name=r.name;
        roll_no=r.roll_no;
        branch=r.branch;
    }

    //destructor when called delete object:
    ~student()
    {
      cout<<"This is Called:"<<endl;
    }

    //Display 
    void displayInfo()
    {
    
        cout<<"Name:->"<<name<<endl;
         cout<<"Roll_No:->"<<roll_no<<endl;
          cout<<"Branch:->"<<branch<<endl;
           
    }

};

int main(){
    // student b1; //Object
   // b1.name="Dinesh"; Hum access nhi kr skte private hai

    student *b1=new student(); // Create Object **Called Constructor**
    delete b1;                  //delete object  **Called destrutor**
    cout<<"\n";

    student default1; //Object
    default1.displayInfo();

    student para("Anurag",123456789,"CSE"); //Object
    para.displayInfo();

    student r2=para;
    r2.displayInfo();
    return 0;
}