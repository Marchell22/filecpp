#include <iostream>
using namespace std;

struct  Node{
    string nama;
    Node* left;
    Node* right;
};

Node* getNewNode(string nama){
    Node *newNode = new Node();
    newNode->nama = nama;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node* Insert(Node * root, string nama){
    if(root == NULL ){
        root = getNewNode(nama);
        return root;
    }else if(nama > root->nama){
        root->right = Insert(root->right, nama);
    }else{
        root->left = Insert(root->left, nama);
    }
    return root;
}

bool Search(Node* root,string keturunan,string induk) {
	if(root == NULL) {
		return false;
	}
	else if(root->nama == induk) {
		return true;
	}
	else if(keturunan <= root->nama) {
		return Search(root->left,keturunan,induk);
	}
	else if(keturunan >= root->nama) {
		return Search(root->right,keturunan,induk);
	}
}
int main(){
    Node *root = NULL;
    string induk,keturunan,inputNama;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> inputNama;
        root = Insert(root, inputNama);

    }
    cout << "nama yang ingin di cek: " << endl;
    cout << "Induk: ";
    cin >> induk;
    cout << "Keturunan: ";
    cin >> keturunan;

    if(Search(root,keturunan,induk) == true){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    return 0;
}
