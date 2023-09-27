#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left, *right;
};
struct tree *createTree(int item)
{
    struct tree *tmp;
    tmp = (struct tree *)malloc(sizeof(struct tree));
    tmp->data = item;
    tmp->left = NULL;
    tmp->right = NULL;

    return tmp;
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
void traverse(struct tree *t)
{
    if (t != NULL)
    {
        traverse(t->left);
        printf("%d\t", t->data);
        traverse(t->right);
    }
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

    p = delete (p, 4);

    traverse(p);
}