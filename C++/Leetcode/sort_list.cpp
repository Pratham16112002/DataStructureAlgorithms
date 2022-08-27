#include <iostream>

class Node {
public:
  int data;
  Node *next;
};

void push(Node **head_ref, int new_data) {
  Node *new_node = new Node();

  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void print_list(Node *node) {
  while (node != NULL) {
    std::cout << node->data << std::endl;
    node = node->next;
  }
  std::cout << std::endl;
}

void sort_list(Node *&head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }
  Node *temp = head;
  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL) {

    temp = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  temp->next = NULL;

  Node *left_side = sort_list(head);
  Node *right_side = sort_list(slow);

  return merge(left_side, right_side);
}

Node *merge(Node **head1, Node **head2) {
  Node *sorted_temp = new Node();
  push(sorted_temp, 0);
  Node *current_node = sorted_temp;

  while (head1 != NULL && head2 != NULL) {
    if (head1->data < head2->data) {
      current_node->next = head1;
      head1 = head1->next;
    } else {
      current_node->next = head2;
      head2 = head2->next;
    }
    current_node = current_node->next;
  }
  if (head1 != NULL) {
    current_node = current_node->next;
    head1 = head1->next;
  }
  if (head2 != NULL) {
    current_node = current_node->next;
    head2 = head2->next;
  }
  return sorted_temp->next;
}

int main() {

  Node *head = NULL;
  push(&head, 0);
  push(&head, 1);
  push(&head, 0);
  push(&head, 2);
  push(&head, 1);
  push(&head, 1);
  push(&head, 2);
  push(&head, 1);
  push(&head, 2);

  std::cout << "Linked list before Sorting" << std::endl;
  print_list(head);

  std::cout << "Linked list after Sorting" << std::endl;
  print_list(head);
  return 0;
}
