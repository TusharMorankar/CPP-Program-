#include<iostream>
using namespace std;

#pragma pack(1)
struct  node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE First;

        SinglyLL();
        
        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPosition(int no,int ipos);

        void DeleteFirst(int);
        void DeleteLast(int);
        void DeleteAtPosition(int ipos);

        void Display();
        int Count();

};

int main()
{


    return 0;
}