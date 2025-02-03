#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void LinkedListTraversal(Node *ptr) {
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    Node *head, *second, *third;

    // Memory allocation for linked list nodes
    head = new Node();
    second = new Node();
    third = new Node();

    // Assigning values
    head->data = 7;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 13;
    third->next = nullptr;

    // Traversing and printing the linked list
    LinkedListTraversal(head);
    
    cout << "The linked list is printed above." << endl;

    // Free allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}
