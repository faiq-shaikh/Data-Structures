#include<iostream>
using namespace std;
int main(){
     int n,target;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" element: ";
        cin>>arr[i];
    }
    cout<<"enter element to search: ";
    cin>>target;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target){cout<<target<<" fount at index: "<<mid; return 0;}
        else if(target<arr[mid]){high=mid-1;}
        else{low=mid+1;}
    }
    cout<<target<<" not found";
}