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
struct tree *insert(struct tree *t, int item)
{
    if (t == NULL)
    {
        struct tree *t;
        t = createTree(item);
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

    p = insert(p, 6);

    traverse(p);
}