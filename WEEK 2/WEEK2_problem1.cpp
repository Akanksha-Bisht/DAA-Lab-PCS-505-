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

        int comp=1, key, count=0;
        cout<<endl<<"enter no. to be searched: ";
        cin>>key;

        bool re=false; int mid=0;

        while(end>=start)
        {
            comp++;
            mid=(start+end)/2;
            if(arr[mid]==key)
            {
                re=true;
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
        {
            int j;
            count++;
            for(int i=mid+1, j=mid-1; arr[i]==key || arr[j]==key; i++,j--)
            {
                count++;
            }

            cout<<endl<<key<<"-"<<count;
        }
        else
            cout<<endl<<"element not present";
        t--;
    }

    return 0;
}
