#include <iostream>

#define n 100
// This method is the array implementation of stack

class stack {

  int *arr;
  int top;

public:
  stack() {
    arr = new int[n];
    top = -1;
  }

  void push(int x) {
    if (top == n - 1) {
      std::cout << "STACK OVERFLOW" << std::endl;
      return;
    }
    top++;
    arr[top] = x;
  }
  void pop() {
    if (top == -1) {
      std::cout << "STACK IS EMPTY" << std::endl;
      return;
    }
    top--;
  }

  int Top() {
    if (top == -1) {
      std::cout << "STACK IS EMPTY" << std::endl;
    }
    return arr[top];
  }

  bool empty() { return top == -1; }
};

int main() {
  stack new_stack;
  new_stack.push(1);
  new_stack.push(2);
  new_stack.push(3);
  new_stack.push(4);
  std::cout << new_stack.Top() << std::endl;
  new_stack.pop();
  std::cout << new_stack.Top() << std::endl;

  return 0;
}
