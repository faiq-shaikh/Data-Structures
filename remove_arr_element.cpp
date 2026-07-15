#include<iostream>
using namespace std;
int main(){
    int n,idx;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" value: ";
        cin>>arr[i];
    }
    cout<<"enter index you wanted to delete: ";
    cin>>idx;
    for (int i = idx; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<" "<<arr[i];
    }
    
}