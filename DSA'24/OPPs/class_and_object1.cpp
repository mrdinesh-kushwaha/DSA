#include<iostream>
using namespace std;

class fruits{
    public:
    string name;
    string color;
};

int main(){
    
    fruits apple;
    apple.name ="Apple";
    apple.color="Red";
    cout<<"name"<<"->"<< apple.name<<"\n"<<"color->"<<apple.color<<endl;

    fruits *mango= new fruits();
    mango->name="Mango";
    mango->color="Yellow";
     cout<<"name"<<"->"<< mango->name<<"\n"<<"color->"<<mango->color<<endl;

    return 0;
}