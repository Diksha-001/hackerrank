#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       long long s=1;
        for(int i=0;i<n;i++)
        {
            s*=a[i];
        }
        int p;
        p=s%10;
        if(p==2|| p==3||p==5)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<endl;
    }
     return 0;
}