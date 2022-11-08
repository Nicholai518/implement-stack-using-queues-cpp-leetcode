#include <iostream>
#include <queue>
using namespace std;

class MyStack 
{
public:
    // needed for exercise
    queue<int> q;

    MyStack() 
    {

    }

    void push(int x) 
    {
        if (q.empty())
        {
            q.push(x);
        }
        else
        {
            int size = q.size();
            q.push(x);

            // reverse / rotate the queue
            while (size--)
            {
                int top = q.front();
                q.pop();
                q.push(top);
            }
        }
    }

    int pop() 
    {
        // store
        int top = q.front();
        // remove
        q.pop();
        // return
        return top;
    }

    int top() 
    {
        return q.front();
    }

    bool empty() 
    {
        if (q.empty())
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};

int main()
{
    MyStack my_stack;

    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);

    cout << "My Stack : ";

    while (!my_stack.empty()) {

        cout << my_stack.pop() << " ";
    }
	return 0;
}
