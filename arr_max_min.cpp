#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i+1<<"element: ";
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    cout<<"minimum: "<<arr[0]<<endl;
    cout<<"maximum: "<<arr[n-1]<<endl;
}