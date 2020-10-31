#include <bits/stdc++.h>
using namespace std;

class Main {
	stack<int> s1, s2;

public:
	void enqueue(int data)
	{
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		
		s1.push(data);

		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}

	int dequeue()
	{
		// if first stack is empty
		if (s1.empty()) {
			cout << "Underflow!!";
			exit(0);
		}

		// return the top item from the first stack
		int top = s1.top();
		s1.pop();
		return top;
	}
};

int main()
{
	int keys[] = { 1, 2, 3, 4, 5 };
	Queue q;

	// insert above keys
	for (int key : keys) {
		q.enqueue(key);
	}

	cout << q.dequeue() << '\n';
	cout << q.dequeue() << '\n';

	return 0;
}
