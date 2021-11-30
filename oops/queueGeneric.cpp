#include<bits/stdc++.h>
using namespace std;

template <class T>
class Queue{
    private:
        int size;
        int front;
        int rear;
        T *arr;
        int arrSize;

    public:
        Queue(){
            size = 0;
            front = -1;
            rear = -1;
            arr = new T[1000];
            arrSize = 1000;
        }
        
        void enqueue(T element){
            if(rear==(arrSize-1)){
                cout << "you queue is filled\n";
            }
            rear++;
            arr[rear] = element;
        }

        T dequeue(){
            if(front==rear){
                cout << "your queue is empty\n";
                return NULL;
            }
            front++;
            return arr[front];
        }
        T frontelm(){
            if (front == rear)
            {
                cout << "your queue is empty\n";
                return NULL;
            }
            return arr[front + 1];
        }
        
};

int main(){
    Queue<int> q;
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(10);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    q.enqueue(13);
    cout<<q.frontelm() << endl;
    cout << q.dequeue() << endl;
    cout << q.frontelm() << endl;

    return 0;
}
