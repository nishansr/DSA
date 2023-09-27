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
}
struct tree *search(struct tree *t, int key)
{
    while (t != NULL)
    {
        if (t->data == key)
        {
            return t;
        }
        else if (key < t->data)
        {
            t = t->left;
        }
        else
        {
            t = t->right;
        }
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

    search(p, 5) ? printf("Item found!!") : printf("Item not found!!");
}
