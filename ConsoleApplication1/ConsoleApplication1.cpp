#include <iostream>
#include "stack_array.cpp"
using namespace std;
int main(void)
{
	stack_array <char> brackets(10);
	string text;
	cin >> text;
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == '{')
			brackets.Push('{');
		else if (text[i] == '}')
		{
			if (brackets.Empty() != true)
				brackets.Pop();
			else
			{
				brackets.Push('{');
				break;
			}
				
		}
	}
	if (brackets.Empty() == true)
		cout << "Right";
	else
		cout << "Wrong";
}
