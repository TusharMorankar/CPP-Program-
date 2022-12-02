#include<iostream>
using namespace std;

class Base
{
    public:
         int A,B;

         Base()
         {
            cout<<"inside Base constructor\n";
         }

         ~Base()
         {
             cout<<"inside Base destructor\n";
         }
          
          void fun()
          {
             cout<<"inside Base fun\n";
          }


};

class Derived : public Base
{
    public:
        int X,Y;

        Derived()
        {
           cout<<"inside Derived constructor\n";  
        }
        ~Derived()
        {1
        {
            cout<<"inside gun of Derived\n";  
        }
};

int main()
{
    Derived * ptr = NULL;

    ptr = new Derived;
    
    ptr ->fun ();
    ptr ->gun ();

    delete ptr;


    return 0;
}