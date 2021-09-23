#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"enter no. of test cases: ";
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
        int count=0;
        cout<<endl<<"enter element to be searched: ";
        cin>>key;
        bool re=false;

        while(start<=end)
        {
            comp++;
            int mid=(start+end)/2;
            if(arr[mid]==key)
            {
                re=true;
                count++;
            }
            else if(arr[mid]<key)
            {
                start=mid+1;
            }
            else
                end=mid-1;
        }
        if(re)
            cout<<endl<<count;
        else
            cout<<endl<<"ELEMENT NOT PRESENT";
        t--;
    }

    return 0;
}
