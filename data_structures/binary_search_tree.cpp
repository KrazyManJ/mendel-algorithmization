#include <iostream>

using namespace std;

struct BinaryNode {
    int val;
    BinaryNode* left;
    BinaryNode* right;
};


BinaryNode* createNode(int value){
    return new BinaryNode{.val=value,.left=nullptr,.right=nullptr};
}

void insertToTree(BinaryNode* &node, int value){
    if (node== nullptr) {
        node = createNode(value);
    }
    else if (value <=node->val) insertToTree(node->left, value);
    else insertToTree(node->right, value);
}

bool treeContains(BinaryNode* node, int value){
    BinaryNode* temp = node;
    while (temp != nullptr && temp->val!=value){
        temp = value<temp->val ? temp->left : temp->right;
    }
    return temp != nullptr;
}

void printTree(BinaryNode *node, string p = "") {
    if (node == nullptr) return;
    cout << p << node->val << endl;
    printTree(node->left, p + "  ");
    printTree(node->right, p + "  ");
}

int main() {
    BinaryNode *node = nullptr;
    for (int i = 0; i < 20; i++){
        insertToTree(node,i*5);
    }
    printTree(node);
    cout << treeContains(node,8) << endl;
    cout << treeContains(node,5) << endl;
    return 0;
}