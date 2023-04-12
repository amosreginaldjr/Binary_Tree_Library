#include<iostream>
using namespace std;

template <typename Tdata>
class Tree;

template<typename Tdata>
class Tree
{
private: 
	struct TreeNode
	{
		TreeNode* left = nullptr;
		Tdata data = NULL;
		TreeNode* right = nullptr;
		//TreeNode* parent;
	};
private:
	TreeNode* root_node;

public:
	Tree();
	void insert(Tdata user_input);
};

template<typename Tdata>
Tree<Tdata>::Tree()
{
	root_node = new TreeNode;
	root_node->data = NULL;
	root_node->left = nullptr;
	root_node->right = nullptr;
}

template<typename Tdata>
void Tree<Tdata>::insert(Tdata user_input)
{
	TreeNode* newNode = new TreeNode;
	//base case:
	if (root_node->data == NULL)
	{
		root_node->data = user_input;
		root_node->left = nullptr;
		root_node->right = nullptr;
		cout << root_node->data << endl;
	}
	

	
	//TreeNode* temp = root_node;
	if (user_input < root_node->data)
	{
		if (root_node->left == nullptr)
		{
			root_node->left = newNode;
			newNode->data = user_input;
			newNode->left = nullptr;
			newNode->right = nullptr;
			cout << root_node->left->data << endl;
		}
		else if (root_node->left != nullptr)
		{
			while (!root_node->left)
			{


			}
		}
	}

}

int main()
{
	Tree<int> tt;
	tt.insert(5);
	//tt.insert(7);
	tt.insert(3);

	return 0;
}