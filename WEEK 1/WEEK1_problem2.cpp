#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"enter test case:";
    cin>>t;

    while(t)
    {
        int n;
        cout<<endl<<"enter no. of elements ";
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
        cin>>key;

        bool re= false;

        while(start<=end)
        {
            comp++;
            int mid=(start+end)/2;
            if(arr[mid]==key)
            {
                re= true;
                break;
            }
            else if(arr[mid]<key)
            {
                start=mid+1;
            }
            else
                end=mid-1;
        }
        if(re)
            cout<<endl<<"NO. IS PRESENT"<<endl;
        else
            cout<<endl<<"NO. NOT PRESENT"<<endl;

        t--;
    }

    return 0;
}
