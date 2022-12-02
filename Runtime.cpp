#include<iostream>
using namespace std;
 
class Base
{
   public:                    //access specifier
      int A,B;
    
    void fun()                 //function defination  1000
    {
        cout<<"Base fun\n";
    }
    void gun (int i)       //function defination     2000
    {
       cout<<"Base gun with one integer\n"; 
    }
    void gun (int i,int j)   // overloaded function defination 3000
    {
       cout<<"Base gun with two integer\n"; 
    }

};

class Derived : public Base
{
    public :
        int X,y;
        void sun()                   //function defination 4000
        {
            cout<<"Derived sun\n";
        }
        void fun()                   // function redefination 5000
        {
          cout<<"Derived fun\n";  
        }
};
int main()
{
   Derived dobj;
   dobj.fun();    //call   5000
   dobj.gun(11);  //call  2000
   dobj.gun(11,21); //call  3000
   dobj.sun();    // call   4000
    return 0;
}