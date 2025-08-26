#include<iostream>

#include<vector>

using namespace std;

class vectorqueue{

    vector<int>q;

    public:

    void enqueue(int value){

           q.push_back(value);

            cout << value << " added in queue" << endl;
    }

    void dequeue(){

        if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

        cout << q.front() << " is removed from stack" << endl; 

        q.erase(q.begin());
    }

    void peek(){
        
        if(q.empty()){

            cout << " queue is empty" << endl;
            return;
        }

         cout << q.front() << " is the first element in the queue" << endl;
    }


       void display(){
          if(q.empty()){
            cout << " queue is empty" << endl;
            return;
        }

        cout <<  " queue elements:";
        for (int i :q) cout << i << " ";
        cout << endl;

    }
};

int main(){

    vectorqueue u1;

    u1.enqueue(10);
    u1.enqueue(20);
    u1.enqueue(30);

    u1.dequeue();
    u1.dequeue();

   u1.peek();

   
    u1.display();

   return 0;
}