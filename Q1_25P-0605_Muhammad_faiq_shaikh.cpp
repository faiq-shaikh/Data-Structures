#include<iostream>
using namespace std;
class library{
private:
int *arr;
int capacity;
int size;
public:
library(int cap){
    capacity=cap;
    arr=new int[capacity];
    size=0;
}
int *getarr(){return arr;}
int &getsize(){return size;}
void end(int *arr,int &size,int val){
    if (size==capacity)
    {
        cout<<"array full";
    }
    else{
        arr[size]=val;
        size++;
    }
    cout<<"student added"<<endl;
}
void specific(int *arr,int &size, int val,int idx){
    for (int i = size; i >idx ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[idx]=val;
    size++;
    cout<<"student added at index "<<idx<<endl;
}
void remove(int *arr,int &size,int idx){
    for (int i = idx; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"student ID removed"<<endl;
}
void search(int *arr,int &size,int val){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==val){
            cout<<val<<" found at position: "<<i;
        }
    }
    cout<<"ID not found"<<endl;
    
}
void display(int *arr,int &size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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


~library(){
    delete[] arr;
}
};
int main(){
    int capacity;
    cout<<"enter the capacity of the list: ";
    cin>>capacity;
    library l1(capacity);
    int choice,id,position;
     while (1) {
        cout << "1. Add Student ID at End\n";
        cout << "2. Insert Student ID at Specific Position\n";
        cout << "3. Remove Student ID from Position\n";
        cout << "4. Search for a Student ID\n";
        cout << "5. Display All Student IDs\n";
        cout << "6. Check if List is Empty / Full\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Student ID to add: ";
                cin >> id;
                l1.end(l1.getarr(),l1.getsize(),id);
                break;

            case 2:
                cout << "Enter Student ID to insert: ";
                cin >> id;
                cout << "Enter target position (index): ";
                cin >> position;
                l1.specific(l1.getarr(),l1.getsize(),id, position);
                break;

            case 3:
                cout << "Enter position (index) to remove: ";
                cin >> position;
                l1.remove(l1.getarr(),l1.getsize(),position);
                break;

            case 4:
                cout << "Enter Student ID to search for: ";
                cin >> id;
                l1.search(l1.getarr(),l1.getsize(),id);
                break;

            case 5:
                cout << "\n Student List \n";
                l1.display(l1.getarr(),l1.getsize());
                break;

            case 6:
                if (l1.empty()) {
                    cout << "The list is currently EMPTY.\n";
                } else if (l1.full()) {
                    cout << "The list is currently FULL.\n";
                } else {
                    cout << "The list has space available.\n";
                }
                break;

            case 7:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice! Please select an option between 1 and 7.\n";
        }

}
}