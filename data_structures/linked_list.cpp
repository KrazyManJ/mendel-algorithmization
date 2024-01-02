#include <iostream>

using namespace std;

//
// U1 --> U2 --> U3 -->


struct Node {
    int value;
    Node *next;
};

struct LinkedList {
    Node *head;
    Node *tail;
};

/**
 * Initializes LinkedList before usage
 */
void init(LinkedList *&list) {
    list = new LinkedList;
    list->head = nullptr;
    list->tail = nullptr;
}

/**
 * Appends element at the end of the linked list.
 *
 * Used in Queue (Fronta) data structure.
 */
void append(LinkedList *list, int value) {
    auto *node = new Node{.value=value, .next=nullptr};
    if (list->head == nullptr) {
        list->head = node;
        list->tail = node;
        return;
    }
    list->tail->next = node;
    list->tail = node;
}

/**
 * Pushes element at the beginning of the linked list.
 *
 * Used in Stack (Zásobník) data structure.
 */
void push(LinkedList *list, int value) {
    auto *node = new Node{.value=value, .next=nullptr};
    if (list->head == nullptr or list->tail == nullptr) {
        list->head = node;
        list->tail = node;
        return;
    }
    node->next = list->head;
    list->head = node;
}

void print(LinkedList *list) {
    Node *temp = list->head;
    while (temp != nullptr) {
        std::cout << temp->value << endl;
        temp = temp->next;
    }
}

/**
 * Removes first element in linked list and returns it.
 *
 * Returns a pointer of it so we can clarify if it contains anything.
 */
int* pop(LinkedList *list) {
    Node* node = list->head;
    if (node == nullptr) return nullptr;
    list->head = node->next;
    node->next = nullptr;
    return new int(node->value);
}

int main() {
    LinkedList *list = nullptr;
    init(list);
    append(list, 3);
    append(list, 5);
    append(list, 8);
    append(list, 4);
    append(list, 3);
    push(list, 24);
    push(list, 32);
    print(list);
    int* a = pop(list);
    cout << endl << "Removed: " << *a << endl;
    print(list);
    delete list;
    delete a;
    return 0;
}