#include<iostream>
using namespace std;
class circularQueue{
    private:
    int *arr;
    int front,rear;
    int currsize,cap;
    public:
    circularQueue(int size){
        cap=size;
        arr=new int[cap];
        front=0;
        rear=-1;
        currsize=0;
    }
    void push(int val){
        if(currsize==cap){
            cout<<"queue overflow";
            return;
        }
        rear=(rear+1)%cap;
        arr[rear]=val;
        currsize++;
    }
    void pop(){
        if(is_empty()){
            cout<<"queue underflow";
            return;
        }
        front=(front+1)%cap;
        currsize--;
    }
    int peek(){
        if(is_empty()){
            cout<<"queue underflow";
            return -1;
        }
        return arr[front];
    }
    bool is_empty(){
        return currsize==0;
    }
    void display(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    circularQueue cq(4);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cout<<"before pop\n";
    cq.display();
    cq.pop();
    cq.pop();
    cq.push(5);
    cq.push(6);
    cout<<"after pop\n";
    cq.display();
}