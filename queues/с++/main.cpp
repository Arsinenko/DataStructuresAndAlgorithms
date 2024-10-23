#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> myqueue;
    myqueue.emplace("test");
    myqueue.push("10");

    while (!myqueue.empty()){
        cout << myqueue.front() << endl;
        myqueue.pop();
    }
    return 0;
}
