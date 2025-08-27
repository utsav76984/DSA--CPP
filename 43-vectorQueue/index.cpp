#include <iostream>
#include <vector>

using namespace std;

class vectorqueue
{

    vector<int> q;

public:
    void enqueue(int value)
    {

        q.push_back(value);

        cout << value << " add in queue"<<endl;

        cout<<"->";
    }
        

      void dequeue(){

        if(q.empty()){
            
            cout << " queue is empty" << endl;
            return;
        }
        
        cout << q.front() << " is removed from queue" << endl;

        q.erase(q.begin());


    }


    void peek(){

        if (q.empty())
        {
            cout<<"queue is empty"<< endl;
            return;
        }
        
        
          cout << q.front() << " is the front element in queue" << endl;

    }


      void display(){

           if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

        
        cout << "queue elements are ";
        for (int i: q) {
            cout << i << " ";

        }

        cout << endl;



    }

};

int main()
{

    vectorqueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    

    q.peek();

    q.display();
}