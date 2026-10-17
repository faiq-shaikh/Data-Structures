#include<iostream>
using namespace std;
#define SIZE 100
class queue{

    private:
    int arr[SIZE];
    int front,rear;
    public:

    queue(){
        front=-1;
        rear=-1;
    }

    void enqueue(int val){
        if(SIZE==99){cout<<"queue overflow"; return;}
        else{arr[++rear]=val;front=0;}
    }
    void dequeue(){
        if(SIZE==-1){cout<<"queue underfow"; return;}
        if(front==rear){front=rear=-1;}
        else{front++;}
    }
    void peek(){
        if(front==-1){cout<<"queue empty";return;}
        else{cout<<arr[front];}
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<endl;
        }
        cout<<"\n";
    }
};
int main(){
    queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.display();
    q1.dequeue();
    q1.display();
    q1.peek();
}