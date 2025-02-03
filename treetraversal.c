#include <stdio.h>
#include <stdlib.h>

// Define structure for a binary tree node
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

// Function Prototypes
struct node *create();
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);

// Function to create a binary tree
struct node *create()
{
    struct node *newnode;
    int x;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the Data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1)
    {
        //free(newnode); // Free allocated memory before returning NULL
        return NULL;
    }

    newnode->data = x;

    printf("\nEnter the left child of %d: ", x);
    newnode->left = create();

    printf("\nEnter the right child of %d: ", x);
    newnode->right = create();

    return newnode;
}

// Preorder Traversal (Root → Left → Right)
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal (Left → Root → Right)
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Postorder Traversal (Left → Right → Root)
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

// Main function
int main()
{
    struct node *root = NULL;
    root = create();
    
    printf("\nPreorder Traversal: ");
    preorder(root);
    
    printf("\nInorder Traversal: ");
    inorder(root);
    
    printf("\nPostorder Traversal: ");
    postorder(root);
    
    return 0;
}
