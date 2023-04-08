#include<iostream>
using namespace std;

template<typename Tdata>
struct TreeNode;

template<typename Tdata>
	struct TreeNode
	{
		TreeNode* root;
		TreeNode* parentOf; //maybe should be named "parent" not "parentOf
		TreeNode* right;
		Tdata data;
		TreeNode* left;

		void add_to_left(Tdata user_input);
		void add_to_right(Tdata user_input);
		
		//
		TreeNode();
		
	};



template<typename Tdata>
TreeNode<Tdata>::TreeNode()
{
	root = new TreeNode<Tdata>; /*have to set root in the default constructor to
								be equal to a new TreeNode (to be able to add data)*/
}

template<typename Tdata>
void TreeNode<Tdata>::add_to_left(Tdata user_input)
{
	TreeNode* newNode = new TreeNode;
	this->left = newNode;
	newNode->data = user_input;
	newNode->parentOf = this;
}

template<typename Tdata>
void TreeNode<Tdata>::add_to_right(Tdata user_input)
{
	TreeNode* newNode = new TreeNode;
	this->right = newNode;
	newNode->data = user_input;
	newNode->parentOf = this;
}

int main()
{
	TreeNode<int> build_tree;
	build_tree.root->data = 5;
	build_tree.root->add_to_left(3);
	build_tree.root->add_to_right(7);
	
	//cout << build_tree.root->data << endl;
	//cout << build_tree.root->left->data << ' ';
	//cout << build_tree.root->right->data << endl;

	//build_tree.root->left = new TreeNode<int>;
	//build_tree.root->left->add_to_left(1);
	//cout << build_tree.root->left->left->data << ' ';


	return 0;
}