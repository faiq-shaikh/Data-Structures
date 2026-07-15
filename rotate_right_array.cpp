#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" element: ";
        cin>>arr[i];
    }
    temp=arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    
    
}