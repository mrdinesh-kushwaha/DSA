#include<iostream>
using namespace std;

struct book
{
    private:
    int bookid;
    char title[50];
    float price;
    public:
    void input()
    {
        cout<<"Enter bookid , Title and Price:"<<endl;
        cin>>bookid>>title>>price;
        if(price<0)
        price=-price;
 
    }

    void display()
    {
        cout<<"\n"<<bookid<<"\n"<<title<<"\n"<<price<<"$"<<"\n";

    }
};

int main(){

  book b1;
  
  b1.input();
  b1.display();  

    return 0;
}