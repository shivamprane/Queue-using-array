#include <iostream>
using namespace std;
#define MAX 10
class Queue{
        int front, rear;                // front and rear pointer
    public:
        Queue(){front = -1; rear = -1;} // constructor to initialize
        int queuearray[MAX];
        void enQueue(int);
        void deQueue();
        void display();
};
void Queue :: enQueue(int data){
    if(rear == MAX-1)
        cout << "Queue is full"<< endl;
    else if(front == -1){       //adding data in empty queue
        front = 0;
        rear = 0;
        queuearray[rear]=data;}
    else{
        rear++;
        queuearray[rear]=data;
    }
}
void Queue :: deQueue(){
    if(front==-1){
        cout << "Queue is empty" << endl;}
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else
        front++;
}
void Queue :: display(){
    for(int i=front;i<=rear;i++)
        cout << queuearray[i] << " ";
    cout << endl;
}
int main(){
    Queue que;
    que.enQueue(10);
    que.enQueue(20);
    que.enQueue(30);
    que.enQueue(40);
    que.enQueue(50);
    que.display();
    cout << "DeQueue" << endl;
    que.deQueue();    
    que.display();
    cout << "DeQueue" << endl;
    que.deQueue();
    que.display();
}
