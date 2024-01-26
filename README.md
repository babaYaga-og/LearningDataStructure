# LearningDataStructure
Date: 25/01/2024  
A custom data structure for my parser  
(Project for my CS class)

# Usage:
## Example:
```cpp
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
## TODO
1. Use Templates
2. Use smart pointers
3. ...and whole lot of other things
