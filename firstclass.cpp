#include<iostream>
using namespace std;

class Maths
{
   public:
       int iNo1;
       int iNo2;
    Maths()
    {
        iNo1 =0;
        iNo2 = 0;
    }

    Maths(int A, int B)
    {
      iNo1=A;
      iNo2=B;
    }   

    int Addition() //(function)
     {
        return iNo1+ iNo2;
     }

     int substraction()
     {
        return iNo1- iNo2;
     }   

};

int main()
{
   Maths mobj1;  //call 
   Maths mobj2(11,10);  //call
   int ret =0;

   ret = mobj2.Addition();
   cout<<"Addition is :"<<ret<<"\n";

   ret = mobj1.Addition();
   cout<<"Addition is :"<<ret<<"\n";



    return 0;
}