#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

//트리 및 트리 순회 구현

class Node {
public:
	int data;
	Node* par;
	vector<Node*> chi_v;

	Node(int data) {
		this->data = data;
		this->par = NULL;
	}
};

class Tree {
public:
	Node* root;
	vector<Node*> node_v; //모든 노드를 저장할 백터

	Tree(int data) {
		Node* node = new Node(data);
		this->root = node;
		this->node_v.push_back(node);
	};

	void insertNode(int par_data, int data) {
		Node* node = new Node(data);
		for (int i = 0; i < node_v.size(); i++) {
			if (node_v[i]->data == par_data) {
				node_v[i]->chi_v.push_back(node);
				node_v.push_back(node);
				node->par = node_v[i];
				return;
			}
		}
	}

	void preOrder(Node*);
	void inOrder(Node*);
	void postOrder(Node*);
};

void Tree::preOrder(Node* node) {
	//if (!node) return;
	cout << node->data << " ";
	for (int i = 0; i < node->chi_v.size(); i++) {
		if (node->chi_v[i]->data != -1) preOrder(node->chi_v[i]);
	}
}

void Tree::inOrder(Node* node) {
	if (node->chi_v[0]->data != -1) inOrder(node->chi_v[0]);
	cout << node->data << " ";
	if (node->chi_v[1]->data != -1) inOrder(node->chi_v[1]);
}

void Tree::postOrder(Node* node) {
	if (!node) return;

	for (int i = 0; i < node->chi_v.size(); i++) {
		if (node->chi_v[i]->data != -1) postOrder(node->chi_v[i]);
	}
	cout << node->data << " ";
}

int n;

int main() {
	cin >> n;

	Tree myTree(0);
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		myTree.insertNode(a, b);
		myTree.insertNode(a, c);
	}

	myTree.preOrder(myTree.root);
	cout << "\n";
	myTree.inOrder(myTree.root); //3 1 4 0 2 6
	cout << "\n";
	myTree.postOrder(myTree.root);
	cout << "\n";
}