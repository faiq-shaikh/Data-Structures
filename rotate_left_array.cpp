#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" value: ";
        cin>>arr[i];
    }
    temp=arr[0];
    for (int  i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
}