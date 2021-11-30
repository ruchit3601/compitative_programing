#include<bits/stdc++.h>
using namespace std;

template <class T>
class Node{
    private:
        T data;
        Node<T> *next;
        
    public:
        node(T data){
            this->data = data;
            next = NULL;
        }
};

template <class T>
class Queue
{
    private:
        Node<T> *front;
        Node<T> *rear;
        int size;
    public:
        Queue(){
            front = NULL;
            rear = NULL;
            size = 0;
        }

        void enqueue(T data){
            Node<T> *ptr = new Node<T>(data);
            if(rear == NULL){
                front = ptr;
                rear = ptr;
            }
            else{
                rear->next = ptr;
                rear = rear->next;
            }
            size++;
        }

        T dequeue(){
            if(front ==NULL){
                cout << "queue is empty\n";
                return NULL;
            }
            Node<T> *temp = front;
            front = front->next;
            T deleted = temp->data;
            delete (temp);
            if(front==NULL){
                rear = NULL;
            }
            size--;
            return deleted;
        }

        T frontelm(){
            if (front == NULL)
            {
                cout << "queue is empty\n";
                return NULL;
            }
            return front->data;
        }

};

    int main()
    {
        Queue<int> q;
        q.enqueue(6);
        q.enqueue(7);
        q.enqueue(10);
        cout << q.dequeue() << endl;
        cout << q.dequeue() << endl;
        q.enqueue(13);
        cout << q.frontelm() << endl;
        cout << q.dequeue() << endl;
        cout << q.frontelm() << endl;

        return 0;
    }