#include<iostream>

using namespace std;
void Fibonacci(int);

int main()
{
    int number;
    while(true)
    {   
        cout<<"Pleas Enter you'r number: "<<endl;
        cin>>number;
        if(number==1)  
        {   
            cout<<"Fibonacci Series:"<<'\n'<<1<<endl;
        }     
        else if(number==2)
        {   
            cout<<"Fibonacci Series:"<<'\n'<<1<<"\n"<<1<<endl;
        }
        else if(number>2)
        {
            Fibonacci(number);
        }
        else
        {
            cout<<"Invalid Number"<<endl;
        }
        
    }
   
    return 0;
}

void Fibonacci(int n)
{   int i=2, a=1, b=1, c;

    cout<<"Fibonacci Series:"<<'\n'<<a<<"\n"<<b<<endl;
    while(i<n)
    {   
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        i+=1;
    }
}
