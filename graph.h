#pragma once

#ifndef GRAPH_H
#define GRAPH_H

#include<string>
using namespace std;
class Graph {
public:
	struct Node;
	Graph() { //root = createNode(std::string("root"), 0);
		        root = &rootNode;
				cout << "inside Grpah::Graph()\n";
			}
	struct Node* createNode(std::string name, int value)
	{
		struct Node* node_ = new Node(name, value);
		return node_;
	}

	int getData(Node* node)
	{
		return node->getdata();
	}

	struct Node {
	public:
		Node() { id = "root", list.data = 0; cout << "inside Graph::Node::Node()\n"; }

		Node(std::string name_, int val)
		{
			id = name_; list.data = val;
			cout << "inside Graph::Node(string, int)\n";
		}

		int getdata() 
		{
			return this->list.data;
		}
		
	private:
		struct List {
			int data;
			struct Graph::Node* prev;
			struct Graph::Node* next;

			List() { cout << "inside Graph::Node::List()\n"; data = 0; prev, next = nullptr; }

			int getData() {
				return this->data;
			}
			void setNext(Node* next) {
				this->next = next;
			}
			void setData(int data) {
				this->data = data;
			}
		};
		struct List list;
		std::string id;
	};
private:
	struct Node* root;
	struct Node rootNode;
};

#endif