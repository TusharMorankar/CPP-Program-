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
        {
            cout<<"inside Derived destructor\n";
        }
        void gun()
        {
            cout<<"inside gun of Derived\n";  
        }
};

class DerivedX : public Derived
{
   public:
      int i,j;
      DerivedX()
      {
       cout<<"inside DerivedX constructor\n";  
      }
       ~DerivedX()
       {
        cout<<"inside DerivedX destructor\n";
       }
       void sun()
       {
        cout<<"inside sun of DerivedX\n"; 
       }
};

int main()
{
    cout<<"Size of Base: "<<sizeof(Base)<<"\n";     //8
    cout<<"Size of Derived: "<<sizeof(Derived)<<"\n";  //16
    cout<<"Size of DerivedX: "<<sizeof(DerivedX)<<"\n";  //24

     DerivedX dobj;

     dobj.fun();
     dobj.gun();
     dobj.sun();

    return 0;
}