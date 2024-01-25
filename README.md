# LearningDataStructure
Date: 25/01/2024 
For my CS class

# Usage:
## Example:
```
#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
	Graph g;

	struct Graph::Node* node = g.createNode( std::string("test"), 42);
	int val = g.getData(node);
	cout << "\ng.getData(node) = " << val << "\n";

	return 0;
}
```
