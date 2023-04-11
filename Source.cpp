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
	Tree(TreeNode* root_node);
	void insert(Tdata user_input);
};

template<typename Tdata>
Tree<Tdata>::Tree()
{

}

template<typename Tdata>
Tree<Tdata>::Tree(TreeNode* root_node)
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

	if (root_node->data == NULL)
		root_node->data = user_input;

	//TreeNode* temp = root_node;
}

int main()
{
	Tree<int> tt;
	tt.insert(5);

	return 0;
}