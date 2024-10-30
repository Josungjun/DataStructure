#include <iostream>

using namespace std;

#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType *s)
{
    s -> top = -1;
}

int is_stack_empty(StackType *s)
{
    return s -> top == -1;
}

int is_stack_full(StackType *s)
{
    return s -> top == MAX_STACK_SIZE - 1;
}

void push(StackType *s, element e)
{
    if(is_stack_full(s))
    {
        cout << "가득 찼습니다." << '\n';
        return;
    }
    else s->data[++(s->top)] = e;
}

element pop(StackType *s)
{
    if(is_stack_empty(s))
    {
        cout << "아따 비었당께요" << '\n';
        return -1;
    }

    else return s->data[s->top--];
}

element peek(StackType *s)
{
    if(is_stack_empty(s))
    {
        cout << "아따 비었당께요" << '\n';
        return -1;
    }
    else return s->data[s->top];
}

int main()
{
    StackType s;

    init_stack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    cout << pop(&s) << '\n';
    cout << pop(&s) << '\n';
    cout << pop(&s) << '\n';

    return 0;
}
