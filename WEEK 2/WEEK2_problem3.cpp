#include<iostream>
using namespace std;

int mod(int n)
{
    if(n<0)
        return -n;
    else
        return n;
}

int main()
{
    int t;
    cout<<"enter no. of test cases: ";
    cin>>t;

    while(t)
    {
        int n;
        cout<<endl<<"enter n. of elements: ";
        cin>>n;
        int arr[n];
        int i,j,k;

        cout<<endl<<"enter elements: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int key;
        cin>>key;

        int count=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(mod(arr[i]-arr[j])==key)
                {
                    count++;
                }
            }
        }
        cout<<endl<<count<<endl;
        t--;
    }
    return 0;
}
