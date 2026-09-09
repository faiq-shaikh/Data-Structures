#include<iostream>
using namespace std;
class hospital{
private:
int *arr;
int capacity;
int size;
public:
hospital(int cap){
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
        cout<<"Patient added"<<endl;
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
        cout<<"Patient inserted"<<endl;
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
        cout<<"Patient removed"<<endl;
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
        cout<<"Patient not found"<<endl;
    }
    else{
        for(int i=idx;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"Patient removed"<<endl;
    }
}
void search(int *arr,int &size,int val){
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            cout<<val<<" found at position: "<<i<<endl;
            return;
        }
    }
    cout<<"Patient not found"<<endl;
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
void firstlast(int *arr,int &size){
    if(size==0){
        cout<<"list empty"<<endl;
    }
    else{
        cout<<"First patient: "<<arr[0]<<endl;
        cout<<"Last patient: "<<arr[size-1]<<endl;
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
~hospital(){
    delete[] arr;
}
};
int main(){
    int capacity;
    cout<<"enter the capacity of the list: ";
    cin>>capacity;
    hospital h1(capacity);
    int choice,id,position;
    while(1){
        cout<<"1. Add Patient ID at End\n";
        cout<<"2. Insert Patient ID at Specific Position\n";
        cout<<"3. Delete Patient ID by Position\n";
        cout<<"4. Delete First Occurrence of Patient ID\n";
        cout<<"5. Search for Patient ID\n";
        cout<<"6. Display Appointment List\n";
        cout<<"7. Display First and Last Patient IDs\n";
        cout<<"8. Display Number of Patients\n";
        cout<<"9. Exit\n";
        cout<<"Enter your choice (1-9): ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Patient ID: ";
                cin>>id;
                h1.end(h1.getarr(),h1.getsize(),id);
                break;
            case 2:
                cout<<"Enter Patient ID: ";
                cin>>id;
                cout<<"Enter target position (index): ";
                cin>>position;
                h1.specific(h1.getarr(),h1.getsize(),id,position);
                break;
            case 3:
                cout<<"Enter position (index) to remove: ";
                cin>>position;
                h1.remove(h1.getarr(),h1.getsize(),position);
                break;
            case 4:
                cout<<"Enter Patient ID to remove: ";
                cin>>id;
                h1.removeID(h1.getarr(),h1.getsize(),id);
                break;
            case 5:
                cout<<"Enter Patient ID to search: ";
                cin>>id;
                h1.search(h1.getarr(),h1.getsize(),id);
                break;
            case 6:
                cout<<"Appointment List: ";
                h1.display(h1.getarr(),h1.getsize());
                break;
            case 7:
                h1.firstlast(h1.getarr(),h1.getsize());
                break;
            case 8:
                cout<<"Current number of patients: "<<h1.getsize()<<endl;
                break;
            case 9:
                cout<<"Exiting program."<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }
}