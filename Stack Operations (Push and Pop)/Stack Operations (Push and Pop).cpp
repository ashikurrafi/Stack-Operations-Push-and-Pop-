#include<iostream>
using namespace std;
#define max 5
int top = -1;
int stack[max];
void push();
void pop();
void display();
int main()
{
	int choice;
	cout << "Enter '1' to push" << endl;
	cout << "Enter '2' to pop" << endl;
	cout << "Enter '3' to display" << endl;
	cout << "Enter '4' to exit" << endl;
	do
	{
		cout << "Enter choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Wrong input";
			main();
			break;
		}
	} while (choice != 4);
}

void push()
{
	int value;
	if (top >= max - 1)
	{
		cout << "Stack overflow" << endl;
	}
	else
	{
		cout << "Enter element to push : ";
		cin >> value;
		top++;
		stack[top] = value;
	}
}

void pop()
{
	if (top == -1)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Pooped element : " << stack[top] << endl;
		top = top - 1;
	}
}

void display()
{
	if (top == -1)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		int i = top;
		while (i >= 0)
		{
			cout << "Index " << i << " element : ";
			cout << stack[i] << endl;
			--i;
		}
	}
}