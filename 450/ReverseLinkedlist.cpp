#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
class LinkedList
{
private:
    Node<T> *head;
    int length;

public:
    LinkedList()
    {
        length = 0;
        head = NULL;
    }

    void insertHead(T data)
    {
        Node<T> *ptr = new Node<T>(data);
        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }
        length++;
    }

    void insertEnd(T data)
    {
        Node<T> *ptr = new Node<T>(data);
        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            Node<T> *temp;
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
        }
        length++;
    }

    void reverse(){
        Node<T> *prev = NULL;
        Node<T> *cur=head;
        Node<T> *cur_next=head->next;
        while(cur!=NULL){
            cur->next = prev;
            prev = cur;
            cur = cur_next;
            if (cur != NULL)
                cur_next = cur->next;
        }
        head = prev;
    }

    T deleteHead()
    {
        T deletedData = NULL;
        if (head == NULL)
        {
            cout << "nothing to delete";
            return NULL;
        }
        else
        {
            Node<T> *temp;
            temp = head;
            if (temp->next == NULL)
            {
                deletedData = head->data;

                delete (head);
                head = NULL;
            }
            else
            {
                head = temp->next;
                deletedData = temp->data;
                delete (temp);
            }
        }
        length--;
        return deletedData;
    }

    T deleteEnd()
    {
        T deletedData = NULL;
        if (head == NULL)
        {
            cout << "nothing to delete";
            return NULL;
        }
        else if (head->next == NULL)
        {
            deletedData = head->data;
            delete (head);
            head = NULL;
        }
        else
        {
            Node<T> *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            deletedData = temp->next->data;
            delete (temp->next);
            temp->next = NULL;
        }
        length--;
        return deletedData;
    }

    void display()
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int size()
    {
        return length;
    }
};

int main()
{
    LinkedList<int> ll;
    ll.insertEnd(1);
    ll.insertEnd(2);
    ll.insertEnd(3);
    ll.insertEnd(4);
    ll.insertEnd(5);
    ll.display();
    ll.reverse();
    ll.display();
    // cout<<ll.size();

    return 0;
}