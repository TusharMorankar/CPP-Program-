#include<iostream>
using namespace std;

template <class T>
struct node
{
    int data;
    struct node *next;
};
template <class T>
class Stack
{
    public:
        struct node<T> *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int no);      // Insert
        int Pop();              // Delete
        void Display();
};
template <class T>
Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}
template <class T>
bool Stack :: IsStackEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
void Stack :: Push(int no)  // InsertFirst
{
    struct node *newn = new node;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    
    iCount++;

    cout<<no<<" gets pushed in the stack succesfully"<<"\n";
}
template <class T>
int Stack :: Pop()          // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty."<<"\n";
        return -1;
    }
    else 
    {
        int value = First -> data;
        struct node *temp = First;

        First = First ->next;
        delete temp;

        iCount--;

        return value;
    }
}
template <class T>
void Stack :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of stack are : "<<"\n";

        struct node *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" |-> ";
            temp = temp -> next;
        }
        cout<<" NULL"<<"\n";
    }
}

int main()
{
    Stack obj;

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);

    obj.Display();

    int iRet = obj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";

    obj.Display();
    
    return 0;
}