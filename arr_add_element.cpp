#include<iostream>
using namespace std;
int main(){
    int n,idx,val;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" element: ";
        cin>>arr[i];
    }
    cout<<"enter array index: ";
    cin>>idx;
    cout<<"enter new value: ";
    cin>>val;
    for (int i = n; i > idx; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[idx]=val;
    for (int i = 0; i < n+1; i++)
    {
        cout<<" "<<arr[i];
    }
    
    
}