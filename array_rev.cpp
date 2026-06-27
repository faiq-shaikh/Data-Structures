#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter"<<i<<"element: ";
        cin>>arr[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
