#include <iostream>
#include <forward_list>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    forward_list<int> numbers = { 10, 20, 30, 40 };

    numbers.push_front(5);
    cout << "Forward List Front: " << numbers.front() << endl;

    numbers.pop_front();
    cout << "After pop_front: " << numbers.front() << endl;

    cout << "Forward List: ";
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    queue<int> numbersQueue;

    numbersQueue.push(10);
    numbersQueue.push(20);
    numbersQueue.push(30);

    cout << "Queue Front: " << numbersQueue.front() << endl;
    cout << "Queue Size: " << numbersQueue.size() << endl;

    numbersQueue.pop();

    cout << "Queue Front After Pop: " << numbersQueue.front() << endl;
    cout << "Queue Empty: " << boolalpha << numbersQueue.empty() << endl;

    stack<int> numbersStack;

    numbersStack.push(100);
    numbersStack.push(200);
    numbersStack.push(300);

    cout << "Stack Top: " << numbersStack.top() << endl;
    cout << "Stack Size: " << numbersStack.size() << endl;

    numbersStack.pop();

    cout << "Stack Top After Pop: " << numbersStack.top() << endl;
    cout << "Stack Empty: " << boolalpha << numbersStack.empty() << endl;

    return 0;
}