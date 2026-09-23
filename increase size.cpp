#include<iostream>
using namespace std;
int main(){
    int old_size=6;
    int newsize=10;
    int *arr=new int [old_size];
    for(int i=0;i<old_size;i++){
        cout<<"enter element "<<i<<": ";
        cin>>arr[i];
    }
    int *newarr=new int [newsize];
    for(int i=0;i<old_size;i++){
        *(newarr+i)=*(arr+i);
    }
    for(int i=old_size;i<newsize;i++){
        *(newarr+i)=0;
    }
    for(int i=0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    arr=newarr;
}