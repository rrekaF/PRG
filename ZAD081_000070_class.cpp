// ----------- ZAD70 -----------
//(class) Dopisz brakującą klasę TreeNode reprezentującą jeden liść drzewa binarnego
//Każdy liść może posiadać wartość liczbową oraz lewe i prawe dowiązanie kolejnych liści
//(rozwiązaniem jest tylko brakujący kod)

//./tree ➞ WYDRUKUJE:
//Root value: 5
//Left child value: 3
//Right child value: 7

#include <iostream>
// ROZWIĄZANIE POCZATEK
class TreeNode{
public:
	int val;
	TreeNode* left = nullptr;
	TreeNode* right = nullptr;
	TreeNode(int value){
		this->val = value;
	}
};
// ROZWIĄZANIE KONIEC
using namespace std;
int main() {
	// create tree like this
	//     5
	//    / \
	//   3   7
	//  / \ / \
	// 2  4 6  8
	TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(3);
	root->right = new TreeNode(7);
	root->left->left = new TreeNode(2);
	root->left->right = new TreeNode(4);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(8);

	// access the value of the root node
	cout << "Root value: " << root->val << endl;

	// access the value of the left child of the root node
	cout << "Left child value: " << root->left->val << endl;

	// access the value of the right child of the root node
	cout << "Right child value: " << root->right->val << endl;

	return 0;
}