#include <iostream>
#include <string>
#include <stack>
#include <climits>
using namespace std;
int main()
{
    int n, s, x;
    cin >> n >> s >> x;

    stack<int> mystack;
    for (int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        mystack.push(a);
    }
    for (int j = 0; j < s; j++)
    {
        mystack.pop();
    }


    if (!mystack.size()) {
        cout << "0";
        return 0;
    }
    int smallest = INT_MAX;
    while (mystack.size()) {
        if (mystack.top() == x) {
            cout << "true";
            return 0;
        }
        else {
            if (mystack.top() < smallest) {
                smallest = mystack.top();
            }
            mystack.pop();
        }
    }
    cout << smallest;
}
