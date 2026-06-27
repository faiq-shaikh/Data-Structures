// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n/2; i++)
//     {
//         swap(arr[i],arr[n-i-1]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
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