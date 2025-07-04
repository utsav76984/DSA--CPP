#include <iostream>
#include <string>

using namespace std;

class parent
{
    public:
    int add(int n1, int n2){
        return n1+n2;
    }
};


class  child: public parent{

    public:
    int add(int n1, int n2){
        return n1*n2;
    }
};


class gradchild: public child{

    public:
    int add(int n1, int n2)
    {
        return n1/n2;
    }
};
int main()
{

   
    gradchild op;

       cout<< op.parent::add(5,5)<<endl;
       cout<< op.child::add(5,4)<<endl;
       cout<< op.gradchild::add(8,4)<<endl;

    return 0;
}