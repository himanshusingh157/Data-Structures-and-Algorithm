#include <cstdio>
#include "stacks.h"

stack::stack()
{
	curr_index =-1;
}

int stack::push(int element)
{
	if(curr_index == STACKSIZE -1)
	{
		printf("Cannot push the element, Stack FULL!! \n");
		return -1;
	}
	stack_array[++curr_index] = element;
	return 0;
}

int stack::pop()
{
	if(curr_index == -1)
	{
		printf("Cannot pop the element, Stack EMPTY!! \n");
		return -1;
	}
	int element = stack_array[curr_index];
	curr_index--;
	return element;
}

int stack::top()
{
	if(curr_index == -1)
	{
		printf("Cannot pop the element, Stack EMPTY!! \n");
		return -1;
	}
	return stack_array[curr_index];
}

bool stack::isempty()
{
	if(curr_index == -1)
	{
		return true;
	}
	return false;
}


int main()
{
	stack stack_obj;
	printf("%d\n",stack_obj.isempty());
	stack_obj.push(10);
	stack_obj.push(20);
	int ele = stack_obj.pop();
	printf("%d\n",ele);
	stack_obj.push(30);
	stack_obj.push(40);
	stack_obj.push(50);
	stack_obj.push(60);
	ele = stack_obj.pop();
	printf("%d\n",ele);
	stack_obj.push(70);
	stack_obj.push(80);
	ele = stack_obj.top();
	printf("%d\n",ele);
	for (int i = 0; i <= stack_obj.curr_index; i++)
	{
		printf("%d\n",stack_obj.stack_array[i]);
	}
}

