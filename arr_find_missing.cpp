#include<iostream>
using namespace std;
int main(){
    int n,expected;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element: ";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}
        }
    }
    expected=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==expected){expected++;}
    }
    cout<<"missing element: "<<expected;
}