#define STACKSIZE 1000

class stack
{
public:
	
	int stack_array[STACKSIZE];
	int curr_index ;
	stack();
	int push(int element);
	int pop();
	int top();
	bool isempty();
	int size();
};
