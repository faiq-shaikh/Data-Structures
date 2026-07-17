#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" element: ";
        cin>>arr[i];
    }
    int e_count=0,o_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){e_count++;}
        else{o_count++;}
    }
    cout<<"even count: "<<e_count<<endl;
    cout<<"odd count: "<<o_count<<endl;
}