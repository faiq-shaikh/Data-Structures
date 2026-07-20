#include<iostream>
using namespace std;
int main(){
    int arr[7]={7,9,36,23,15,50,31};
    for (int i = 0; i < 7-1; i++)
    {
        for (int j = 0; j < 7-i-1; j++)
        {
            if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}
        }
        
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<" "<<arr[i];
    }
    
    
}