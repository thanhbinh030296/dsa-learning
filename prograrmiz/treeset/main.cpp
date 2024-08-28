#include <stdio.h>

struct Node {
    int value;
    struct Node* left;
    struct Node* right;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};



int main() {

    Node n1 = Node(1);
    Node n2 = Node(2);

    return 0;
}