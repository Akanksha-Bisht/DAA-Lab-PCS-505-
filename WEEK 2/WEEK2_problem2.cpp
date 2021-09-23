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

        int i,j,k;
        cout<<endl<<"enter elements: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int t=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]==arr[k])
                    {
                        t=1;
                        break;
                    }
                    if(arr[i]+arr[j]<arr[k])
                    {
                        break;
                    }
                }
                if(t==1)
                break;
            }
            if(t==1)
            break;
        }
        if(t==1)
        cout<<endl<<i++<<" "<<j++<<" "<<k++<<endl;
        else
        cout<<endl<<"element not found\n";

        t--;
    }
}
