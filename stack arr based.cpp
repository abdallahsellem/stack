
#include <iostream>
using namespace std;
#define MAXI 100000 
struct stack
{
	int top = -1;
	int arr[MAXI];
};
void push(stack* p, int value)
{
	p->top++;
	p->arr[p->top] = value;
}
void pop(stack* p)
{
	if (p->top == -1)
	{
		cout << "Empty" << endl;
	}
	else
	{
		p->top--;
	}
}
void display(stack* p)
{
	for (int i = p->top; i >= 0; i--)
	{
		cout << p->arr[i] << " ";
	}
	cout << endl;
}
bool empty(stack* p)
{
	if (p->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int size(stack* p)
{
	return p->top + 1;
}
int top(stack* p)
{
	return p->arr[p->top];
}
void clear(stack* p)
{
	p->top = -1;
}
int main()
{
	stack s;
	push(&s, 5);
	push(&s, 8);
	push(&s, 100);
	cout << top(&s);
}
