#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cmath>
using namespace std;

stack<string> createStack(string str) {
    stack<string> theStack;
    istringstream istr(str);
    string c;
    while (istr >> c) {
        theStack.push(c);
    }
    return theStack;
}
void printSum(stack<string> st) {
    int temp;
    int sum = 0;
    while (st.size()) {
        if (st.top() == "+") {
            sum += temp;
            st.pop();
        }
        else if (st.top() == "-") {
            sum -= temp;
            st.pop();
        }
        temp = stoi(st.top());
        st.pop();
    }
    sum += temp;
    cout << sum;
}

int main()
{
    string input;
    getline(cin, input);
    stack<string> mystack = createStack(input);
    printSum(mystack);
  
}
