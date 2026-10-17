#include<iostream>
using namespace std;
#define SIZE 5
class circularQueue{
private:
    int arr[SIZE];
    int front,rear;
public:
    circularQueue(){
        front=rear=-1;
    }
    bool is_empty(){
        return front==-1;
    }
    bool is_full(){
        return (rear+1)%SIZE==front;
    }
    void enqueue(int val){
        if(is_full()){cout<<"queue overflow"; return;}
        if(is_empty()){
            front=0;
        }
        rear=(rear+1)%SIZE;
        arr[rear]=val;
    }
    int dequeue(){
        if(is_empty()){
            cout<<"queue underflow";
            return -1;
        }
        int val=arr[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%SIZE;
        }
        return val;
    }
    int peek(){
        if(is_empty()){
            cout<<"queue underflow";
            return -1;
        }
        return arr[front];
    }
    void display(){
        if(is_empty()){
            cout<<"queue underflow";
            return;
        }
        int i=front;

        while(true){

            cout<<arr[i]<<" ";

            if(i==rear){
                break;
            }

            i=(i+1)%SIZE;
        }
        cout<<endl;
    }
};
int main(){
    circularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.dequeue();
    cq.dequeue();
    cq.enqueue(60);
    cq.enqueue(70);
    cq.display();
    return 0;
}