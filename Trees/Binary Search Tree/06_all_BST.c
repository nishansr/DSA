#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left, *right;
};
struct tree *createTree(int item)
{
    struct tree *t;
    t = (struct tree *)malloc(sizeof(struct tree));
    t->data = item;
    t->left = NULL;
    t->right = NULL;

    return t;
}
int search(struct tree *t, int item)
{
    while (t != NULL)
    {
        if (t->data == item)
        {
            return 1;
        }
        else if (item < t->data)
        {
            t = t->left;
        }
        else
        {
            t = t->right;
        }
    }
    return 0;
}
int isBST(struct tree *t)
{
    static struct tree *prev;
    if (t != NULL)
    {
        if (!isBST(t->left))
        {
            return 0;
        }
        else if (prev != NULL && t->data <= prev->data)
        {
            return 0;
        }
        prev = t;
        return isBST(t->right);
    }
    else
    {
        return 1;
    }
}
void traverse(struct tree *t)
{
    if (t != NULL)
    {
        traverse(t->left);
        printf("%d\t", t->data);
        traverse(t->right);
    }
}
struct tree *insert(struct tree *t, int item)
{
    if (t == NULL)
    {
        struct tree *tmp = createTree(item);
    }
    else if (item < t->data)
    {
        t->left = insert(t->left, item);
    }
    else
    {
        t->right = insert(t->right, item);
    }
}
struct tree *inOrderPredecessor(struct tree *t)
{
    t = t->left;
    while (t->right != NULL)
    {
        t = t->right;
    }
    return t;
}
struct tree *delete(struct tree *t, int item)
{
    struct tree *iPre;
    if (t == NULL)
    {
        return NULL;
    }
    else if (t->left == NULL && t->right == NULL)
    {
        free(t);
        return NULL;
    }
    else if (item < t->data)
    {
        t->left = delete (t->left, item);
    }
    else if (item > t->data)
    {
        t->right = delete (t->right, item);
    }
    else
    {
        iPre = inOrderPredecessor(t);
        t->data = iPre->data;
        t->left = delete (t->left, iPre->data);
    }
    return t;
}
int main()
{
    struct tree *p = createTree(4);
    struct tree *p1 = createTree(2);
    struct tree *p2 = createTree(5);
    p->left = p1;
    p->right = p2;

    struct tree *p3 = createTree(1);
    struct tree *p4 = createTree(3);
    p1->left = p3;
    p1->right = p4;

    isBST(p) ? printf("BST\n") : printf("NOT BST\n");

    p = delete (p, 4);

    search(p, 13) ? printf("Item Found\n") : printf("Item not found!!\n");

    traverse(p);
}