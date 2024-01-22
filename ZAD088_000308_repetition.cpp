// ----------- ZAD308 -----------
//(repetition) Dodaj do klasy Tree metodę sumRight(), która zwruci sumę wartości elementów które są prawym dzieckiem w drzewie
//(rozwiązaniem jest tylko brakujący kod)

//W przykładzie wydrukujemy drzewo 5 3 4 2 6 czyli:
//    5
//   / \
//  3   6
// / \
//2   4

//Drzewo ma być drukowane w taki sposób – poziomo:
//./tree 5 3 4 2 6 ➞ WYDRUKUJE: 10

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
// ROZWIĄZANIE POCZATEK
        int sumRight(TreeNode* node){
            if(node == nullptr){
                return 0;
            }
            if (node->right){
                return node->right->val + sumRight(node->right) + sumRight(node->left);   
            }else{
                return sumRight(node->left);
            }
            
            return -1;
        }
        int sumRight(){
            return sumRight(root);
            
        }
// ROZWIĄZANIE KONIEC

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
};

using namespace std;
int main(int argc, char** argv) {
	Tree tree;

	// insert some values into the tree
	for(int i=1; i<argc; ++i)
		tree.insert(std::stoi(argv[i]));

	std::cout << tree.sumRight();
	return 0;
}