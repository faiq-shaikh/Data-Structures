#include<iostream>
using namespace std;
class supply{
private:
int *arr;
int capacity;
int size;
public:
supply(int cap){
    capacity=cap;
    arr=new int[capacity];
    size=0;
}
int *getarr(){return arr;}
int &getsize(){return size;}
void end(int *arr,int &size,int val){
    if(size==capacity){
        cout<<"array full"<<endl;
    }
    else{
        arr[size]=val;
        size++;
        cout<<"Supply added"<<endl;
    }
}
void specific(int *arr,int &size,int val,int idx){
    if(size==capacity){
        cout<<"array full"<<endl;
    }
    else{
        for(int i=size;i>idx;i--){
            arr[i]=arr[i-1];
        }
        arr[idx]=val;
        size++;
        cout<<endl;
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
        cout<<"Supply removed"<<endl;
    }
}
void removeAll(int *arr,int &size,int val){
    if(size==0){
        cout<<"list empty"<<endl;
        return;
    }
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=val){
            arr[j]=arr[i];
            j++;
        }
    }
    if(j==size){
        cout<<"Supply code not found"<<endl;
    }
    else{
        size=j;
        cout<<"All occurrences removed"<<endl;
    }
}
void search(int *arr,int &size,int val){
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            cout<<"Supply found at position: "<<i<<endl;
        }
    }
}
void display(int *arr,int &size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
void reverse(int *arr,int &size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }
    cout<<"List reversed"<<endl;
}
void clear(int *arr,int &size){
    size=0;
    cout<<"List cleared"<<endl;
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
~supply(){
    delete[] arr;
}
};
int main(){
    int capacity;
    cout<<"enter the capacity of the list: ";
    cin>>capacity;
    supply s1(capacity);
    int choice,code,position;
    while(1){
        cout<<"1. Add Supply Code at End\n";
        cout<<"2. Insert Supply Code at Specific Position\n";
        cout<<"3. Remove Supply Code from Position\n";
        cout<<"4. Remove All Occurrences of Supply Code\n";
        cout<<"5. Search for Supply Code\n";
        cout<<"6. Display Supply List\n";
        cout<<"7. Reverse List\n";
        cout<<"8. Display Size and Capacity\n";
        cout<<"9. Clear List\n";
        cout<<"10. Exit\n";
        cout<<"Enter your choice (1-10): ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Supply Code: ";
                cin>>code;
                s1.end(s1.getarr(),s1.getsize(),code);
                break;
            case 2:
                cout<<"Enter Supply Code: ";
                cin>>code;
                cout<<"Enter target position (index): ";
                cin>>position;
                s1.specific(s1.getarr(),s1.getsize(),code,position);
                break;
            case 3:
                cout<<"Enter position (index) to remove: ";
                cin>>position;
                s1.remove(s1.getarr(),s1.getsize(),position);
                break;
            case 4:
                cout<<"Enter Supply Code to remove: ";
                cin>>code;
                s1.removeAll(s1.getarr(),s1.getsize(),code);
                break;
            case 5:
                cout<<"Enter Supply Code to search: ";
                cin>>code;
                s1.search(s1.getarr(),s1.getsize(),code);
                break;
            case 6:
                cout<<"Supply List: ";
                s1.display(s1.getarr(),s1.getsize());
                break;
            case 7:
                if(s1.empty()){
                    cout<<"list empty"<<endl;
                }
                else{
                    s1.reverse(s1.getarr(),s1.getsize());
                }
                break;
            case 8:
                cout<<"Current size: "<<s1.getsize()<<endl;
                cout<<"Capacity: "<<capacity<<endl;
                break;
            case 9:
                s1.clear(s1.getarr(),s1.getsize());
                break;
            case 10:
                cout<<"Exiting program."<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
}