#include <iostream>
#include<algorithm>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

void readInput(stack<int> &mystack) {
    string input;
    getline(cin, input);
    istringstream istr(input);
    int i;
    while (istr >> i) {
        mystack.push(i);
    }
}
void add(stack<int>& mystack) {
    int a, b;
    cin >> a >> b;
    mystack.push(a);
    mystack.push(b);
}
void remove(stack<int>& mystack) {
    
    int c;
    cin >> c;
    if (c > mystack.size())
        return;
    for (int i = 0; i < c; i++)
    {
        mystack.pop();
    }
}
void printSum(stack<int>& mystack) {
    int sum=0;
    while(mystack.size())
    {
        sum += mystack.top();
        mystack.pop();
    }
    cout << "Sum: " << sum;
}
void decapitalise(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main()
{
    stack<int> mystack;
    readInput(mystack);
    string command;
    while (true)
    {


        cin >> command;
        decapitalise(command);
        if (command == "add") {
            add(mystack);
        }
        else if (command == "remove") {
            remove(mystack);
        }
        else if (command == "end") {
            printSum(mystack);
            break;
        }
    }
}
