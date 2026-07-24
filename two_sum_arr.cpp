#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" value: ";
        cin>>arr[i];
    }
    cout<<"enter targeted sum: ";
    cin>>target;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<target;
                return 0;
            }
            
        }
        
    }
    cout<<"no sum possible";
    
}