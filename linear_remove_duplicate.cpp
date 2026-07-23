#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
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
        ans^=arr[i];
    }
    cout<<ans;
}