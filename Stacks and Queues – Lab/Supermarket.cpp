#include <iostream>
#include <queue>
#include <string>

using namespace std;
int main()
{
    queue<string> clients;
    string input;
    int count = 0;\
        cin >> input;
    while (input != "End") {
        
        if (input == "Paid") {
            while (clients.size()) {
                cout << clients.front()<<endl;
                clients.pop();
                count--;
            }
        }
        else {
            clients.push(input);
            count++;
        }
        cin >> input;
    }
    cout << count << " people remaining.";
    
}
