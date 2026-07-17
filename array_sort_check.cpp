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
    bool flag=true;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                flag=false;
                break;
            }
            
        }
        
    }
    if (flag)
    {
        cout<<"array is sorted"<<endl;
    }
    else{cout<<"array is not sorted";}
    
}