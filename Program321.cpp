#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Stack
{
    public:
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int no);
        int Pop();     

};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;

}
bool 
int main()
{


    return 0;
}