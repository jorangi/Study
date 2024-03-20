#include <iostream>
#include <queue>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;

	Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
public:
	Node* root = nullptr;
	int size = 0;

	void insert(int value)
	{
		size++;
		if (root == nullptr)
		{
			root = new Node(value);
			return;
		}
		queue<Node*> q;
		q.push(root);

		while (!q.empty())
		{
			Node* pa = q.front();
			q.pop();

			if (pa->left == nullptr)
			{
				pa->left = new Node(value);
				return;
			}
			else
			{
				q.push(pa->left);
			}

			if (pa->right == nullptr)
			{
				pa->right = new Node(value);
				return;
			}
			else
			{
				q.push(pa->right);
			}
		}
	}
	void preorder_traverse(Node* node)
	{
		if (node == nullptr) return;

		cout << node->data << " ";
		preorder_traverse(node->left);
		preorder_traverse(node->right);
	}
	void inorder_traverse(Node* node)
	{
		if (node == nullptr) return;

		inorder_traverse(node->left);
		cout << node->data << " ";
		inorder_traverse(node->right);
	}
	void postorder_traverse(Node* node)
	{
		if (node == nullptr) return;

		postorder_traverse(node->left);
		postorder_traverse(node->right);
		cout << node->data << " ";
	}
	void level_order_traverse (Node* node)
	{
		if (root == nullptr) return;

		queue<Node*> q;
		q.push(node);

		while (!q.empty())
		{
			Node* pa = q.front();
			q.pop();
			cout << pa->data << " ";

			if (pa->left != nullptr) q.push(pa->left);
			if (pa->right != nullptr) q.push(pa->right);
		}
	}
};

int main(void)
{
	BinaryTree* BT = new BinaryTree();
	for (int i = 0; i <= 11; i++)
	{
		BT->insert(i);
	}

	BT->level_order_traverse(BT->root);
}