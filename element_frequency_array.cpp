#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" element: ";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i]==arr[j])
            {
                duplicate=true;
                break;
            }
            
        }
        if(duplicate){continue;}



        count=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        cout<<arr[i]<<" -> "<<count<<endl;
    }

}