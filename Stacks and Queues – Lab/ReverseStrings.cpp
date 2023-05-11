#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	string input;
	getline(cin, input);
	stack<char> mystack;
	for (int i = 0; i < input.size(); i++)
	{
		mystack.push(input[i]);
	}

	for (int j = 0; j < input.size(); j++)
	{
		cout << mystack.top();
		mystack.pop();
	}

}
