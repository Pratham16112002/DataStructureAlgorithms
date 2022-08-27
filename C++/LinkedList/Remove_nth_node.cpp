#include <iostream>

using namespace std;

class node {
public:
  int data;
  node *next;
  node(int val) {
    data = val;
    next = NULL;
  }
};

void insertAtTail(node *&head, int val) {

  node *n = new node(val);
  if (head == NULL) {
    head = n;
    return;
  }
  node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = n;
}

void insertAtHead(node *head, int val) {
  node *n = new node(val);
  if (head == NULL) {
    head = n;
  } else {
    n->next = head;
    head = n;
  }
}

bool search(node *head, int key) {
  node *temp = head;
  while (temp != NULL) {
    if (temp->data == key) {
      return true;
    }
  }
  return false;
}

void display(node *head) {
  node *temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    temp = temp->next;
  }
  cout << endl;
}

void Remove_nth_node(node *head, int n) {
  node *dummy_head = new node(0);
  dummy_head->next = head;
  node *slow = dummy_head;
  node *fast = dummy_head;
  for (int i = 1; i <= n + 1; i++) {
    fast = fast->next;
  }
  while (fast != NULL) {
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = slow->next->next;

  return dummy_head->next;
}

int main() {
  node *head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  std::cout << "Before Deleting the node" << std::endl;
  display(head);
  std::cout << "After Deleting the node" << std::endl;
  Remove_nth_node(head, 2);
  display(head);
  return 0;
}
