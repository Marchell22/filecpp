#include <iostream>
using namespace std;

#define maxStack 10

struct stack{
	char data[10];
	int head;
};

bool isEmpty(stack *stck){
	return stck->head == 0;
}

void newStack(stack *stck){
	stck->head = 0;
}

void push(stack *stck, char a){
	if(stck->head < maxStack){
		stck->data[stck->head++] = a;
	}
}

void pop(stack *stck){
	if(!isEmpty(stck)){
		stck->head--;
	}
}

char top(stack *stck){
	if(!isEmpty(stck)){
	return stck->data[stck->head - 1];
	}
}

void printStack(stack *stck){
	int idx = 1;
	for(int i = stck->head - 1; i >= 0; i--){
		cout << stck  << endl;
	}
}

void sortStack(string *str){
	int len = (*str).length();
    stack sorted;
    stack temp;

    for(int i = 0; i < len; i++)
    {
        while(!isEmpty(&sorted) && top(&sorted) < (*str)[i])
        {
            push(&temp, top(&sorted));
            pop(&sorted);
        }
        push(&sorted, (*str)[i]);
        while(!isEmpty(&temp))
        {
            push(&sorted, top(&temp));
            pop(&temp);
        }
    }
    for(int i = 0; i < len; i++)
    {
        (*str)[i] = top(&sorted);
        pop(&sorted);
    }
}

int main(){
	int n;
	string a;
	cout << "Masukan String: ";
	cin >> a;
	sortStack(&a);
	cout << a;
}
