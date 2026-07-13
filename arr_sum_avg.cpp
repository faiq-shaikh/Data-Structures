#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int avg=sum/n;
    cout<<"sum: "<<sum<<endl;
    cout<<"average: "<<avg<<endl;
}