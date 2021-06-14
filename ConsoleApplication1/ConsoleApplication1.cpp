#include <iostream>
#include "stack_array.cpp"
using namespace std;
int main(void)
{
	stack_array <string> ahmed(1);
	ahmed.Push("abulfarh");
	ahmed.Push("mohamed");
	ahmed.Push("ahmed");
	while (!(ahmed.Empty()))
	{
		cout << ahmed.Pop() << " ";
	}
}
