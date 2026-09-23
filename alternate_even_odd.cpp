#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,8,7,10,5,15};
    for(int i=0;i<6;i++){
        if(i%2==0 &&arr[i]%2==0){
            for(int j=i+1;j<6;j++){
                if(arr[j]%2==0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
        else if(i%2!=0 && arr[i]%2==0){
            for(int j=i+1;j<6;j++){
                if(arr[j]%2!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<*(arr+i)<<" ";
       }
}