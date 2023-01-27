#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *buildtree(struct node *root)
{
    int d;
    printf("\nEnter the data: ");
    scanf("%d", &d);
    if (d == -1)
    {
        return NULL;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = d;
    root = new_node;
    printf("Enter the data for left child of %d", d);
    root->left = buildtree(root);
    printf("Enter the data for right child of %d", d);
    root->right = buildtree(root);
    return root;
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    printf(" %d ", root->data);
    inorder(root->right);
}

int main()
{
    struct node *root;
    root = NULL;
    root = buildtree(root);
    inorder(root);

    return 0;
}