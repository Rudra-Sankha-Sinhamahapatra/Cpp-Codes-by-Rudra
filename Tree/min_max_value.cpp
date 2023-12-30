#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

int minvalue(struct Node *root)
{
    if (root == NULL)
    {
        return root->data;
    }

    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

int maxvalue(struct Node *root)
{
    if (root == NULL)
    {
        return root->data;
    }

    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int main()
{
    struct Node *root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(8);
    root->left->left = createNode(2);
    root->left->right = createNode(4);
    root->right->left = createNode(6);
    root->right->right = createNode(9);

    int minValue = minvalue(root);
    cout << "The minimum value of the Binary tree is " << minValue << endl;

    int maxValue = maxvalue(root);
    cout << "The maximum value of the Binary tree is " << maxValue << endl;

    return 0;
}