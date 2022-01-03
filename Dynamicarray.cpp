#include <iostream>
using namespace std;
class dynamicarray
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    dynamicarray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity = capacity * 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element,int i){
        if(i<nextIndex){
            data[i] = element;
        }
        else if(i==nextIndex){
            add(element);
        }
        else{
            return ; 
        }
    }

    int get(int i)
    {
        if (i >= 0 && i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void print(){
        for (int i = 0; i < nextIndex; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
        
    }

    int getcapacity(){
        return capacity;
    }
};

int main()
{
    dynamicarray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(100,4);

    d1.print();
    cout<<d1.getcapacity();

    dynamicarray d2(d1); //copy constructor
    d1.add(100,0);
    d1.print();
    // It creates shallow copy 
    d2.print();

    cout<<d1.get(2);

    return 0;
}