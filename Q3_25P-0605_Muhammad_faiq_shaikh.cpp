#include<iostream>
using namespace std;
class inventory{
private:
int *arr;
int capacity;
int size;
public:
inventory(int cap){
    capacity=cap;
    arr=new int[capacity];
    size=0;
}
int *getarr(){return arr;}
int &getsize(){return size;}
bool exists(int *arr,int &size,int val){
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}
void end(int *arr,int &size,int val){
    if(size==capacity){
        cout<<"array full"<<endl;
    }
    else if(exists(arr,size,val)){
        cout<<"Duplicate product ID"<<endl;
    }
    else{
        arr[size]=val;
        size++;
        cout<<"Product added"<<endl;
    }
}
void specific(int *arr,int &size,int val,int idx){
    if(size==capacity){
        cout<<"array full"<<endl;
    }
    else if(exists(arr,size,val)){
        cout<<"Duplicate product ID"<<endl;
    }
    else{
        for(int i=size;i>idx;i--){
            arr[i]=arr[i-1];
        }
        arr[idx]=val;
        size++;
        cout<<"Product inserted"<<endl;
    }
}
void removeID(int *arr,int &size,int val){
    int idx=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout<<"Product not found"<<endl;
    }
    else{
        for(int i=idx;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"Product removed"<<endl;
    }
}
void remove(int *arr,int &size,int idx){
    if(size==0){
        cout<<"list empty"<<endl;
    }
    else{
        for(int i=idx;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"Product removed"<<endl;
    }
}
void search(int *arr,int &size,int val){
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            cout<<val<<" found at position: "<<i<<endl;
            return;
        }
    }
    cout<<"Product not found"<<endl;
}
void display(int *arr,int &size){
    if(size==0){
        cout<<"list empty"<<endl;
    }
    else{
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
bool empty(){
    if(size==0){
        return true;
    }
    else{
        return false;
    }
}
bool full(){
    if(size==capacity){
        return true;
    }
    else{
        return false;
    }
}
~inventory(){
    delete[] arr;
}
};
int main(){
    int capacity;
    cout<<"enter the capacity of the list: ";
    cin>>capacity;
    inventory i1(capacity);
    int choice,id,position;
    while(1){
        cout<<"1. Add Product ID at End\n";
        cout<<"2. Insert Product ID at Specific Position\n";
        cout<<"3. Remove Product by ID\n";
        cout<<"4. Remove Product by Position\n";
        cout<<"5. Search for Product ID\n";
        cout<<"6. Display All Products\n";
        cout<<"7. Count Products\n";
        cout<<"8. Check if Product Exists\n";
        cout<<"9. Exit\n";
        cout<<"Enter your choice (1-9): ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Product ID: ";
                cin>>id;
                i1.end(i1.getarr(),i1.getsize(),id);
                break;
            case 2:
                cout<<"Enter Product ID: ";
                cin>>id;
                cout<<"Enter target position (index): ";
                cin>>position;
                i1.specific(i1.getarr(),i1.getsize(),id,position);
                break;
            case 3:
                cout<<"Enter Product ID to remove: ";
                cin>>id;
                i1.removeID(i1.getarr(),i1.getsize(),id);
                break;
            case 4:
                cout<<"Enter position (index) to remove: ";
                cin>>position;
                i1.remove(i1.getarr(),i1.getsize(),position);
                break;
            case 5:
                cout<<"Enter Product ID to search: ";
                cin>>id;
                i1.search(i1.getarr(),i1.getsize(),id);
                break;
            case 6:
                cout<<"Product List: ";
                i1.display(i1.getarr(),i1.getsize());
                break;
            case 7:
                cout<<"Current number of products: "<<i1.getsize()<<endl;
                break;
            case 8:
                cout<<"Enter Product ID: ";
                cin>>id;
                if(i1.exists(i1.getarr(),i1.getsize(),id)){
                    cout<<"Product exists"<<endl;
                }
                else{
                    cout<<"Product does not exist"<<endl;
                }
                break;
            case 9:
                cout<<"Exiting program."<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
}