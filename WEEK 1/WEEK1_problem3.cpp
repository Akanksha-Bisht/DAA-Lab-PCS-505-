#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cout<<"enter no. of test cases:";
    cin>>t;

    while(t)
    {
        int n;
        cout<<endl<<"enter no. of elements: ";
        cin>>n;

        int arr[n];
        int end=n, start=0;
        cout<<endl<<"enter elements: ";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int comp=1, key;
        cout<<endl<<"enter element to be searched: ";
        bool re=false;
        int j=0;
        int m=sqrt(n);

        while(arr[m]<=key && m<n)
        {
            j=m;
            m=m+sqrt(n);
            if(m>n-1)
                break;
        }

        for(int i=j; i<m; i++)
        {
            comp++;
            if(arr[i]==key)
            {
                re=true;
                break;
            }
        }

        if(re)
            cout<<endl<<"ELEMENT IS PRESENT "<<comp<<endl;
        else
            cout<<endl<<"ELEMENT NOT PRESENT "<<endl;

        t--;
    }

    return 0;
}

