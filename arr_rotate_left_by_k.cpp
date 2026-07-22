#include<iostream>
using namespace std;
int main(){
int n,k;
cout<<"enter size of array: ";
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cout<<"enter "<<i<<" element: ";
    cin>>arr[i];
}
cout<<"enter number of elements to rotate: ";
cin>>k;
int narr[k];
for (int i = 0; i < k; i++)
{
    narr[i]=arr[i];
}
for (int i = 0; i < n-k; i++)
{
    arr[i]=arr[i+k];
}
for (int i = 0; i < n-k+1; i++)
{
    arr[n+i-k]=narr[i];
}
for (int i = 0; i < n; i++)
{
    cout<<" "<<arr[i];
}

}