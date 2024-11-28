#include<iostream>
using namespace std;
void point(int& b)    //Referential variable
{
     b++;
}
int main(){
    
    int a=5;

    point(a);

    cout<<a;

    return 0;
}