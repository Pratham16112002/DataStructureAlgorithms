#include <bits/stdc++.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *newNode(int data) {
  Node *temp = new Node;
  temp->data = data;
  temp->next = NULL;
  return temp;
}

void removeDup(struct Node *start) {
  struct Node *ptr1, *ptr2, *dup;
  ptr1 = start;

  // Pick an element one by one
  while (ptr1 != NULL && ptr1->next != NULL) {
    ptr2 = ptr1;

    // Now we will compare our selected element with our rest of the linked list
    // and if we found a dup when we will delete that node
    while (ptr2->next != NULL) {
      if (ptr1->data == ptr2->next->data) {
        // We are doing next->data because we dont want to compare the value
        // with itself because if will always be a duplicate and the if
        // condition will execute In case we find the duplicate then we will
        // delete that node using in built delete function in c++
        dup = ptr2->next;
        ptr2->next = ptr2->next->next;
        delete (dup);
      } else {
        ptr2 = ptr2->next;
      }
    }
    ptr1 = ptr1->next;
  }
}

void printList(struct Node *node) {
  while (node != NULL) {
    std::cout << node->data << std::endl;
    node = node->next;
  }
}

int main() {
  struct Node *start = newNode(10);
  start->next = newNode(12);
  start->next->next = newNode(11);
  start->next->next->next = newNode(11);
  start->next->next->next->next = newNode(12);
  start->next->next->next->next->next = newNode(11);
  start->next->next->next->next->next->next = newNode(10);
  std::cout << "linked list before removeing the duplicate" << std::endl;
  printList(start);
  removeDup(start);
  std::cout << "linked list after removeing the duplicate" << std::endl;
  printList(start);
}
