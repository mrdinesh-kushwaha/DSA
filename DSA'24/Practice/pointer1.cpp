#include<iostream>
using namespace std;
void point(int** ptr)
{
  //  *ptr=*ptr+1; // change at value at p(which have add of a)
                        // no affect at a

   **ptr=**ptr+1; // **ptr Value of X
}
int main(){
    int a=5;
    int* p=&a;
    int** q=&p;

point(q);
    cout<<a<<endl;

    return 0;
}