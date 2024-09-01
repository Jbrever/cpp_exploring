// Q---> create a stack and perform push , pop , peek , empty operation

#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int data)
    {
        if (size - top > 0)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << " sorry!! stack is overflow" << endl;
        }
    }

    void peek()
    {

        cout << "peek element is -: " << arr[top] << endl;
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "underflow -:" << endl;
        }
        else
        {
            top--;
        }
    }

    void empty()
    {
        if (top < 0)
        {
            cout << "sorry stack is empty-: " << endl;
        }
        else
        {
            cout << " stack is not empty-: " << endl;
        }
    }
};

int main()
{
    stack st(2);
    st.push(1);
    st.peek();
    st.push(10);
    st.pop();
    st.peek();
    st.push(5);
    st.peek();
    st.empty();
    st.peek();
    st.push(6);
    st.push(7);
    st.push(12);
    st.push(1);
    st.peek();
}