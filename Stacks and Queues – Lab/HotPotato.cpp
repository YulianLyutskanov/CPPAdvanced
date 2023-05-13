#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    istringstream istr(input);
    deque<string> mydeque;
    while (istr >> input) {
        mydeque.push_back(input);
    }
    int n;
    cin >> n;
    int i = 0;
    int num = 1;
    
    while (mydeque.size()!=1) {
        if (num == n) {
            cout << "Remove " << mydeque[i]<<endl;
            mydeque.erase(mydeque.begin() + i);
            i--;
            num = 0;
        }
        num++;
        i++;
        if (i >= mydeque.size()) {
            i = 0;
        }
    }
    cout << "Last is " << mydeque.front();


}
