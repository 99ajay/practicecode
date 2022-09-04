#include<iostream>
#include<stdio.h>
using namespace std;
struct Node {
	int a, b;
	string str;
};
int findNumber(int a, int b)
{
	queue<Node> q;
	Node temp = Node{ 0, 0, "" };
	visited[0][0] = 1;
	q.push(temp);
	while (!q.empty()) {
		Node u = q.front();
		q.pop();
		if (u.a == 0 && u.b == b)
			return std::stoi(u.str);
		for (int i = 0; i < 10; i++) {
			int dd = (u.a * 10 + i) % a;
			int ss = u.b + i;
			if (ss <= b && !visited[dd][ss]) {
				visited[dd][ss] = 1;
				q.push(Node{ dd, ss, u.str + char('0' + i) });
			}
		}
	}
	return -1;
}
int main()
{
     char string1[100];
    cin.getline(string1,100);
    cout<<fo(string1)<<endl;
    return 0;
}