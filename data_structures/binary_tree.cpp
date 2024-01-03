#include <iostream>

using namespace std;

struct Node {
    int value;
    Node *left;
    Node *right;
};

Node *createNode(int value) {
//    Node* node = new Node{};
//    node->value = value;
//    node->left = nullptr;
//    node->right = nullptr;
//    return node;
    return new Node{.value=value, .left=nullptr, .right = nullptr};
}

void printTree(Node* node, string prefix = ""){
    if (node != nullptr){
        cout << prefix << node->value << endl;
        printTree(node->left, "  "+prefix);
        printTree(node->right, "  "+prefix);
    }
}

int height(Node* node){
    if (node == nullptr) return 0;
    int left = height(node->left);
    int right = height(node->right);
    return (left > right ? left : right)+1;
}

int main() {
    Node* root = createNode(5);
    root->left = createNode(6);
    root->left->left = createNode(8);
    root->right = createNode(2);
    printTree(root);
    cout << "Height: " << height(root) << endl;
    return 0;
}