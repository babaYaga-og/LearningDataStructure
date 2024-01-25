#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
	Graph g;

	//cout << "\nbefore calling g.createNode()\n";
	struct Graph::Node* node = g.createNode( std::string("test"), 42);
	//cout << "after calling g.createNode()\n";

	//g.getValue(Node*/std::string/char*);
	//cout << "\nbefore calling g.getData(node)\n";
	int val = g.getData(node);
	//cout << "after calling g.getData(node)\n";

	cout << "\ng.getData(node) = " << val << "\n";

	return 0;
}