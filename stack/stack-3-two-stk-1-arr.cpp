// Q---> create two stack using one array

#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push(int data, int stk)
    {
        if (stk == 1)
        {

            if (top1 < top2 - 1)
            {
                top1++;
                arr[top1] = data;
            }
            else
            {
                cout << "sorry overflow :)" << endl;
            }
        }
        else if (stk == 2)
        {
            if (top1 < top2 - 1)
            {
                top2--;
                arr[top2] = data;
            }
            else
            {
                cout << "sorry overflow :)" << endl;
            }
        }
        else
        {
            cout << "please enter valid stack number to push element " << endl;
        }
    }

    // void stk1_push(int data)
    // {
    //     if (top1 < top2 - 1)
    //     {
    //         top1++;
    //         arr[top1] = data;
    //     }
    //     else
    //     {
    //         cout << "sorry overflow :)" << endl;
    //     }
    // }

    // void stk2_push(int data)
    // {
    //     if (top1 < top2 - 1)
    //     {
    //         top2--;
    //         arr[top2] = data;
    //     }
    //     else
    //     {
    //         cout << "sorry overflow :)" << endl;
    //     }
    // }

    void peek(int stk)
    {
        if (stk == 1)
        {
            cout << "stack 1 top element -: " << arr[top1] << endl;
        }
        else if (stk == 2)
        {
            cout << "stack 2 top element -: " << arr[top2] << endl;
        }
        else
        {
            cout << "please enter valid stack number to peek element" << endl;
        }
    }

    void pop(int stk)
    {
        if (stk == 1)
        {
            top1--;
        }
        else if (stk == 2)
        {
            top2++;
        }
        else
        {
            cout << "please enter valid stack number to pop element" << endl;
        }
    }
};

int main()
{
    stack st(5);
    st.push(30, 2);
    st.push(20, 2);

    st.push(110, 1);
    st.push(10, 1);
    st.push(0, 1);

    st.peek(1);
    st.peek(2);
    st.push(70, 1);
    st.peek(1);
    st.push(70, 4);
    st.push(70, 1);
    st.pop(1);
    st.push(70, 1);
    st.peek(1);
    st.peek(2);
    st.pop(2);
    st.peek(2);
    st.push(80, 2);
    st.peek(2);
    st.push(90 , 2);
}