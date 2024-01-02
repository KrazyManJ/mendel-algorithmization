#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
};

struct Car {
    bool isFavoriteByDan;
    Person *driver;
    bool isDriveable;
};

struct ListNode {
    Car *value;
    ListNode *next;
};

ListNode *createNode(Car *value) {
    return new ListNode{.value=value, .next=nullptr};
}

struct BinaryTreeNode {
    Person *value;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
};

int main() {
    Person *dan = new Person{
            .name = "Daniel Kupka",
            .age = 19,
    };
    Car americanTruck = {
            .isFavoriteByDan = true,
            .driver = dan,
            .isDriveable = false,
    };
    Car *parkingSpot[10];
    for (int i = 0; i < 10; i++) {
        parkingSpot[i] = new Car(americanTruck);
        cout << i << " - "
             << (parkingSpot[i]->isDriveable ? "pojizdne" : "nepojizdne") << " / "
             << parkingSpot[i]->driver->name << endl;
    }
    ListNode *head = createNode(new Car(americanTruck));
    ListNode *temp = head;
    for (int i = 0; i < 10; i++){
        temp->next = createNode(new Car(americanTruck));
        temp = temp->next;
    }

    return 0;
}