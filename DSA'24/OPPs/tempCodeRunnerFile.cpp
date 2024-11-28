******called Overloading  
class sum
{
    public:
    void add(int x,int y)
    {
        int sum=x+y;
        cout<<"Sum:"<<sum<<endl;
    }
    void add(int x,int y,int z)
    {
        int sum=x+y+z;
        cout<<"Sum is:"<<sum<<endl;

    }

    void add(float x,float y)
{
    float sum=x+y;
    cout<<"Sum is:"<<sum<<endl;
}

};

int main(){
    
    sum b;
    b.add(3,5);
    b.add(1,3,5);
    b.add(float(5.6),float(3.4));

    return 0;
}