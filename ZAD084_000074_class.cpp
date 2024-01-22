// ----------- ZAD74 -----------
//(class) Do klasy TreeNode z poprzedniego zadania (70) dodajmy klasę Tree reprezetującą całe drzewo

//Dodaj do klasy Tree metodę printHorizontal(), która wydrukuje całe drzewo w ASCII tak jak w przykładzie
//(rozwiązaniem jest tylko brakujący kod)

//W przykładzie wydrukujemy drzewo 5 3 4 2 6 czyli:
//    5
//   / \
//  3   6
// / \
//2  4

//Drzewo ma być drukowane w taki sposób – poziomo:
//./tree 5 3 4 2 6 ➞ WYDRUKUJE:
// /6
//=5
//  /4
// \3
//  \2

#include <iostream>

// TODO tu trzeba umieścić klasę TreeNode z poprzedniego zadania (70) <!-- TODO brakuje insert!!!!!!!!!!!!!
class TreeNode {
	public:
		int val;
		TreeNode* left= nullptr;
		TreeNode* right= nullptr;
		TreeNode(int val){
			this->val = val;
		}
};
// -->

class Tree {
	public:
		TreeNode* root;
		Tree() : root(nullptr) {}
// ROZWIĄZANIE POCZATEK
public:
	void printHorizontal(){
		if (this->root == nullptr){
			return;
		}
		printHorizontal1(this->root);
	}
	void printHorizontal1(TreeNode* node, int depth = 0, char slash = '='){
		if (node  == nullptr)return;
		
			//for(int i = 0; i < depth; i++) std::cout << ' ';
			printHorizontal1(node->right, depth + 1,  '/');
	
		for(int i = 0; i < depth; i++) std::cout << ' ';
		std::cout << slash << node->val << std::endl;
	
			printHorizontal1(node->left, depth + 1, '\\');

	}
// ROZWIĄZANIE KONIEC

// TODO insert z poprzedniego zadania <!--
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
// -->
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
int main(int argc, char** argv) {
	Tree tree;

	// insert some values into the tree
	for(int i=1; i<argc; ++i)
		tree.insert(std::stoi(argv[i]));

	tree.printHorizontal();
	return 0;
}