//배열을 이용한 stack의 구현

#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX_STACK_SIZE 100 //스택의 최대 크기
typedef int element; //데이터의 자료형
element stack[MAX_STACK_SIZE]; //1차원 배열
int top = -1; //stack의 최상단 위치.

// 공백 상태 검출 함수
int is_stack_empty()
{
    return top == -1;
}

// 포화 상태 검출 함수
int is_stack_full()
{
    return top == MAX_STACK_SIZE - 1;
}

// 삽입 함수
void push(element item)
{
    if(is_stack_full())
    {
        cout << "스택 포화 에러" << '\n';
        return;
    }
    else stack[++top] = item;
}

// 삭제 함수
element pop()
{
    if(is_stack_empty())
    {
        cout << "스택 공백 에러" << '\n';
        exit(1);
    }
    else return stack[top--];
}

//최상단 데이터를 꺼내는
element peek()
{
    if(is_stack_empty())
    {
        cout << "스택 공백 에러" << '\n';
        exit(1);
    }
    else return stack[top];
}
int main()
{
    push(1);
    push(2);
    push(3);
    cout << pop() << '\n';
    cout << pop() << '\n';
    cout << pop() << '\n';
    return 0;
}
