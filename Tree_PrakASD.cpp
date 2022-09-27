#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int infotype;
typedef struct tNode *addrNode;
typedef struct tNode {
  infotype info;
  addrNode left;
  addrNode right;
} Node;
typedef addrNode BinTree;

/* Selektor */
#define Akar(P) (P)->info
#define Left(P) (P)->left
#define Right(P) (P)->right

#define Nil NULL

addrNode AlokNode(infotype X){
  addrNode nodeBaru; 
  nodeBaru = (Node*) malloc (sizeof(Node));
  
  Akar(nodeBaru ) = X;
  Left(nodeBaru ) = NULL;
  Right(nodeBaru ) = NULL;

  return nodeBaru;
}

BinTree Tree(infotype Akar ,BinTree L, BinTree R){
  BinTree T;
  T = AlokNode(Akar);
  if (T != NULL){
    Left(T) = L;
    Right (T) = R;
  }

  return T;
}

bool IsTreeEmpty(BinTree P){
  return (P == Nil);
}

bool IsTreeOneElmt (BinTree P){
  if(P != Nil){
    return (Left(P) == Nil && Right(P) == Nil);
  }else{
    return false;
  }
}

void PrintPreOrder(BinTree P){
    if (!(IsTreeEmpty(P))){
        cout<<Akar(P);
        PrintPreOrder(Left(P));
        PrintPreOrder(Right(P));
    }
}

void PrintInOrder(BinTree P){
    if (!(IsTreeEmpty(P))){
        PrintInOrder(Left(P));
        cout<<Akar(P);
        PrintInOrder(Right(P));
    }
}

void PrintPostOrder(BinTree P){
    if (!(IsTreeEmpty(P))){
        PrintPostOrder(Left(P));
        PrintPostOrder(Right(P));
        cout<<Akar(P);
    }
}

void Add(BinTree *P, infotype x){
  addrNode nodeBaru = AlokNode(x); 
  if(IsTreeEmpty(*P)){
    
  }else{
    if(IsTreeOneElmt (*P)){
      if(Left(*P) == Nil) Left(*P) = nodeBaru;
      else Right(*P) = nodeBaru;
    }else{
      if(Left(*P) != Nil) Right(*P) = nodeBaru;
    }

  }
}


int main() {
  BinTree P;
  int n;
  infotype x;
  
  cin >> n;
  
  for ( int i = 0; i < n; i++ ) {
    cin >> x;
    Add(&P,x);
  }
  PrintPreOrder(P);

	return 0;
}
