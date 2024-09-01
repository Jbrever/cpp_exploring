#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int size;
    int top;
    int midele;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
        midele = size / 2;
    }

    void push(int data)
    {
        if (size - top > 0)
        {
            top++;
            arr[top] = data;
        }
        else
            cout << "overflow condition" << endl;
    }

    int peek()
    {
        return arr[top];
    }
    int mdlpop()
    {
        while (midele < top)
        {
            cout<<"middle - : "<<midele<<endl;
            arr[midele] = arr[midele + 1];
            midele++;
        }
        return 0;
    }
    void topNum()
    {
        cout << "top number is -: " << top << endl;
    }
};

int main()
{
    stack st(10);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "peek element is -:" << st.peek() << endl;
    st.topNum();
    st.mdlpop();
    
    return 0;
}