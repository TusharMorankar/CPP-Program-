//accept  n number from user template
#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"allocating the memory for resources.."<<"\n";
            iSize = i;
            Arr = new int[iSize];
        
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources.."<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            int length = 0;
            cout<<"Enter the elements of array: "<<"\n";

            for(int iCnt =0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Enter the elements of array: "<<"\n";

            for(int iCnt =0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }


};
int main()
{
    int iLength = 0;
    cout<<"Enter the elements of array: "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);
    
    obj.Accept();
    obj.Display();

    delete obj ;

    return 0;
}