
//This program is to implement queue using stack where
// push operation takes O(n) and pop operation takes O(1)

#include <bits/stdc++.h>

using namespace std;

template <class X>
class queue_using_stack
{
 private:
    stack<X>s,s1;
 public:
    void push(X data)
    {
        while(!s.empty())
        {
            X r = s.top();
            s.pop();
            s1.push(r);
        }
        s.push(data);
        while(!s1.empty())
        {
            X r= s1.top();
            s1.pop();
            s.push(r);
        }
    }
    void pop()
    {
        s.pop();
    }
    void print_element()
    {
        while(!s.empty())
        {
          cout<<s.top()<<" ";
          X r = s.top();
          s.pop();
          s1.push(r);
        }
        while(!s1.empty())
        {
            X r = s1.top();
            s1.pop();
            s.push(r);
        }
    }
};

int main()
{
    queue_using_stack<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.print_element();
    q.pop();
    cout<<endl;
    q.print_element();
    return 0;
}
