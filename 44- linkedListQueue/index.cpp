#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int value)
    {

        data = value;
        next = nullptr;
    }
};

class linkedListQueue
{

    Node *front;
    Node *rear;

public:
    linkedListQueue()
    {
        front = rear = nullptr;
    }

    void enqueue(int value)
    {

        Node *newNode = new Node(value);

        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " <-added in queue" << endl;
    };

    void dequeue()
    {
        if (front == nullptr)
        {
            cout << "queue is empty" << endl;
            return;
        }

        Node *temp = front;
        cout << temp->data << " is removed from queue" << endl;
        front = front->next;
        delete temp;
    }

    void peek()
    {

        if (front == nullptr)
        {
            cout << " queue is empty" << endl;
            return;
        }

        cout << front->data << " is the top element in queue" << endl;
    }

    void display(){

        if (front == nullptr)
        {
            cout<<"queue is empty";
            return;
        }

        Node* temp = front;

        cout<<"element are queue"<<endl;

        while (temp!= nullptr)
        {
            cout<< temp->data <<" ";
            temp= temp->next;
        }

        cout<<endl;
        
        
    }
};

int main()
{

    linkedListQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();


    q.peek();

    q.display();
}