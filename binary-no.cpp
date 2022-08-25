#include<iostream>
using namespace std;

int main()
{
    
    int n,m;

    cout<<endl<<"Enter a number : ";
    cin>>n;
    
    if(0<=n && n<=30000)
    {
        while(n>0)
        {
            m=n%10;
        
             if(m!=0 && m!=1)
             {
                cout<<endl<<"Entered number is not in binary.";
                 break;
             }

            n=n/10;

            if(n==0)
            {
                cout<<endl<<"Entered number is in binary.";
                break;
             }
        
        }
    }

    else
    {
        cout<<endl<<"Entered number is out of range.";
    }
    
    
    return 0;
}