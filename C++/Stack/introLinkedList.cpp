#include <cstdlib>
#include <iostream>

struct Node {
  int data;
  struct Node *next;
};

struct Node *top = NULL; // initially our top is null

void push(int val) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  // Creating a new node and allocating a block of unintialized memory to
  // pointer
  new_node->data = val;
  new_node->next = top;
  top = new_node;
}
void pop() {
  if (top == NULL) {
    std::cout << "STACK UNDERFLOW" << std::endl;
  } else {
    std::cout << "The popped element is " << top->data << std::endl;
    top = top->next;
  }
}

void peek() {
  if (top == NULL) {
    std::cout << "STACK IS EMPTY" << std::endl;
  } else {
    std::cout << top->data << std::endl;
  }
}
bool isEmpty() {
  if (top == NULL) {
    return true;
  } else {
    return false;
  }
}

void display() {
  struct Node *ptr;
  if (top == NULL) {
    std::cout << "STACK IS EMPTY" << std::endl;
  } else {
    ptr = top;
    std::cout << "The elements " << std::endl;
  }
}

int main() {
  push(1);
  push(2);
  push(3);
  push(4);
  isEmpty();
  display();
  peek();
  pop();
  peek();
}
