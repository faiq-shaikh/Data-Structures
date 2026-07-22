#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                for (int k = j; k < n-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    
}