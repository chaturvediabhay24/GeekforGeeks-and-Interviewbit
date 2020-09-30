#include <bits/stdc++.h>
using namespace std;

struct List
{
    int data;
    List *next;
    List(int x)
    {
        data = x;
        next = NULL;
    }
};

void insert(List *node, int x)
{
    if (node == NULL)
    {
        List *temp = new List(x);
        node = temp;
        return;
    }
    while (node->next != NULL)
    {
        node = node->next;
    }
    node->next = new List(x);
}

void printList(List *node)
{
    if (node == NULL)
        return;
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

List* mergeTwo(List* l1, List *l2) {
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    List *result;
    if(l1->data < l2->data)
    {
        result = l1;
        result->next = mergeTwo(l1->next, l2);
    }
    else{
        result = l2;
        result->next = mergeTwo(l1, l2->next);
    }
    return result;
}

int main()
{
    List *root1 = new List(1);
    List *tmp = root1;
    for (int i = 2; i <= 10; i++)
        if (i & 1)
            insert(tmp, i);
    printList(root1);
    List *root2 = new List(0);
    List *tmp2 = root2;
    for (int i = 2; i <= 10; i++)
        if (!(i & 1))
            insert(tmp2, i);
    printList(root2);
    List* res = mergeTwo(root1, root2);
    printList(res);
}