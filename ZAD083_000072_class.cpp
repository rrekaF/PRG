#include <iostream>

class TreeNode {
	public:
		int val;
		TreeNode* left= nullptr;
		TreeNode* right= nullptr;
		TreeNode(int val){
			this->val = val;
		}
};

class Tree {
public:
	TreeNode* root;
	Tree() : root(nullptr) {}
	bool search(int value) {
		if (root == nullptr) {
			return false;
		}
		else {
			return search2(value, root);
		}
	}
	bool search2(int value, TreeNode* node) {
		if (node->val == value) {
			return true;
		}
		bool left = false, right = false;
		if (node->left != nullptr)
			left = search2(value, node->left);

		if (node->right != nullptr)
			right = search2(value, node->right);
		
		return (right || left);
	}

void insert(int val) {
	if (root == nullptr) {
		root = new TreeNode(val);
		return;
	}
	TreeNode *c = root;
	while (true) {

		if (c->val <= val) {
			if (c->right == nullptr) {
				c->right = new TreeNode(val);
				break;
			} else
				c = c->right;

		} else{
			if (c->left == nullptr) {
				c->left = new TreeNode(val);
				break;
			} else
				c = c->left;
		}
	}
}
	~Tree() {
		deleteTree(root);
	}
private:

	void deleteTree(TreeNode* node) {
		if (node == nullptr)
			return;

		// first delete both subtrees
		deleteTree(node->left);
		deleteTree(node->right);

		// then delete the node
		delete node;
	}
};

using namespace std;
int main() {
	Tree tree;
	tree.insert(5);
	tree.insert(3);
	tree.insert(7);
	tree.insert(2);
	tree.insert(4);
	tree.insert(6);
	tree.insert(8);
	//     5
	//    / \
	//   3   7
	//  / \ / \
	// 2  4 6  8

	int searchValue = 4;
	if (tree.search(searchValue)) {
		cout << searchValue << " is in the tree" << endl;
	} else {
		cout << searchValue << " is not in the tree" << endl;
	}
	return 0;
}
