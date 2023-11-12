#include "EvenStack.h"
#include <iostream>
#include <stdexcept>

using namespace std;

bool EvenStack::empty() const {
    return stack.empty();
}

size_t EvenStack::size() const {
    return stack.size();
}

int EvenStack::top() const {
    return stack.top();
}

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        stack.push(value);
    } else {
        throw runtime_error("Error: Can only push even numbers.");
    }
}

void EvenStack::pop() {
    if (!stack.empty()) {
        stack.pop();
    }
}

void EvenStack::getEvenNumbers(stack<int>& inputStack) {
    stack<int> tempStack;

    while (!inputStack.empty()) {
        if (inputStack.top() % 2 == 0) {
            tempStack.push(inputStack.top());
        }
        inputStack.pop();
    }

    while (!tempStack.empty()) {
        int evenNumber = tempStack.top();
        stack.push(evenNumber);
        tempStack.pop();
    }
}

void EvenStack::emptyStack() {
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
}
