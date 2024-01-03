#include <iostream>

using namespace std;

template<class T>
struct BinaryNode {
    T value;
    BinaryNode *left;
    BinaryNode *right;
};

template<class T>
BinaryNode<T> *create(T value) {
    auto *node = new BinaryNode<T>{};
    node->value = value;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

template<class T>
bool isLeaf(BinaryNode<T> *node) {
    return node->right == nullptr && node->left == nullptr;
}

template<class T>
int height(BinaryNode<T> *node) {
    if (node == nullptr) return 0;
    if (isLeaf(node)) return 1;
    int leftHeight = node->left != nullptr ? height(node->left) + 1 : 0;
    int rightHeight = node->right != nullptr ? height(node->right) + 1 : 0;
    return leftHeight > rightHeight ? leftHeight : rightHeight;
}

template<class T>
bool isFull(BinaryNode<T> *node) {
    if (node == nullptr) return false;
    if ((node->left == nullptr) != (node->left == nullptr)) return false;
    if (!isLeaf(node)) {
        if (abs(height(node->left) - height(node->right)) > 0) return false;
        return isFull(node->left) && isFull(node->right);
    }
    return true;
}

template<class T>
void addToTree(BinaryNode<T> *node, T value) {
    if (node->left == nullptr) {
        node->left = create(value);
    } else if (node->right == nullptr) {
        node->right = create(value);
    } else if (
            (isFull(node->left) && height(node->left) > height(node->right))
            ||
            !isFull(node->right)
            ) {
        addToTree(node->right, value);
    } else {
        addToTree(node->left, value);
    }
}

template<class T>
void print(BinaryNode<T> *node, const string &p = "", const string &ch = "") {
    cout << p << node->value << endl;
    if (node->left != nullptr) {
        print(node->left, ch+ "|---", ch+"|   ");
    }
    if (node->right != nullptr) {
        print(node->right, ch+ "L---", ch+"    ");
    }
}

int main() {
    BinaryNode<int> *node = create(1);
    for (int i = 2; i < 32; i++) addToTree(node, i);
    cout << "Height: " << height(node) << endl;
    print(node);
    return 0;
}