
#include <iostream>
using namespace std;
struct stack {
    int data;
    stack* next;
    stack* head = NULL;
    int size = 0;
};

void push(int value, stack* s)
{
    stack* pt = new stack;
    pt->data = value;
    pt->next = s->head;
    s->head = pt;
    s->size++;

}
void display(stack* s)
{
    stack* pt = s->head;
    while (pt != NULL)
    {
        cout << pt->data << " ";
        pt = pt->next;
    }
    cout << "\n";
}
void pop(stack* s)
{
    stack* pt = s->head;
    if (s->head == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        s->head = pt->next;
        free(pt);
        s->size--;
    }
}
int top(stack* s)
{
    stack* pt = s->head;
    return pt->data;
}
bool empty(stack* s)
{
    return s->head == NULL;
}
void clear(stack* s)
{
    stack* current = s->head;
    stack* nextt;
    while (current != NULL)
    {
        nextt = current->next;
        free(current);
        current = nextt;
    }
    s->head = NULL;
    s->size = 0;
    
}
int size(stack* s)
{
    return s->size;
}
int main()
{
    stack s;
    pop(&s);
    push(36, &s);
    push(7, &s);
    push(9, &s);
    clear(&s);
    display(&s);




}
