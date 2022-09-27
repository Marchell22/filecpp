#include <iostream>
using namespace std;

struct Node{
	string nama;
	Node *left, *right, *info;
}*root, *newNode;

void buatBaru( string nama ){
	if( root == NULL){
		root = new Node();
		root -> nama = nama;
		root -> left = NULL;
		root -> right = NULL;
		root -> info = NULL;
	}
	
}
Node insertLeft (stirng nama, Node *node){
	if( root == NULL){
		return NULL
	}else{
		if(node -> left == NULL){
		newNode = new Node();
		newNode -> nama = nama;
		newNode -> left = NULL;
		newNode -> right = NULL;
		newNode -> info = *node;
		node -> left = newNode
		
		return newNode;
		}
	}
}

Node insertRight (stirng nama, Node *node){
	if( root == NULL){
		return NULL
	}else{
		if(node ->right == NULL){
		newNode = new Node();
		newNode -> nama = nama;
		newNode -> left = NULL;
		newNode -> right = NULL;
		newNode -> info = *node;
		node -> right = newNode
		
		return newNode;
		}
	}
}
bool cekKosong {
	if(root == NULL){
		return true;
	}else{
		return false;
	}
}



int main () {
	
}
