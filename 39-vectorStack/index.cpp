

#include <iostream>
#include <vector>
using namespace std;

class Stack
{

    vector<int> arr;

public:
    // add

    void push(int value)
    {
        arr.push_back(value);

        cout << value << "added to stack" << endl;
    }

    void pop()
    {

        if (arr.empty())
        {
            cout << "stack is empty" << endl;
            return;
        }

        int topElement = arr.back();

        cout << topElement << " removed from stack" << endl;

        arr.pop_back();
    }

    void peek()
    {
        cout << arr.back() << " is the top element" << endl;
    }
    void size()
    {
        cout << "total element in array is " << arr.size() << endl;
    }

    void deleteall()
    {
        arr.clear();

        cout << " stack is cleared now" << endl;
    }

    void display()
    {

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            cout << " stack element " << arr[i] << " " << endl;
        }
    }
};

int main()
{

    Stack u1;
    //  add
    u1.push(10);
    u1.push(20);
    
    u1.push(30);
    u1.push(40);

    // remove
    u1.pop();

    // peek

    u1.peek();

    // size

    // delete

    u1.deleteall();
    u1.size();

    u1.display();
};
