#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <stack>

class EvenStack {
private:
    std::stack<int> stack;

public:
    bool empty() const;
    size_t size() const;
    int top() const;
    void push(int value);
    void pop();
    void getEvenNumbers(std::stack<int>& inputStack);
    void emptyStack();
};

#endif // EVENSTACK_H
