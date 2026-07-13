#include<iostream>
using namespace std;
int main(){
    int n,search;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter element to search: ";
    cin>>search; 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<" element: ";
        cin>>arr[i];
    }
    bool found=false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==search)
        {
            cout<<search<<" found at index "<<i<<endl;
            found=true;
            break;
        }
        }
        if(!found)
        {
            cout<<search<<"not found in the array";
        }
        
        
    }
    