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
int isBST(struct tree *t)
{
    static struct tree *prev;
    if (t != NULL)
    {
        if (!isBST(t->left))
        {
            return 0;
        }
        if (prev != NULL && t->data <= prev->data)
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

    isBST(p) ? printf("It is BST!!") : printf("NOT BST!!");
}