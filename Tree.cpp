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

BinTree AlokNode(infotype X){
  addrNode nodeBaru;
  nodeBaru = (Node*) malloc (sizeof(Node));

  Akar(nodeBaru) = X;
  Left(nodeBaru) = NULL;
  Right(nodeBaru) = NULL;

  return nodeBaru;
}

BinTree Tree(infotype Akar, BinTree L, BinTree R){
  BinTree T;
  T = AlokNode(Akar);

  if (T != NULL){
    Left(T) = L;
    Right (T) = R;
  }
}

bool IsTreeEmpty(BinTree P){
  return (P == Nil);
}

bool IsTreeOneElmt (BinTree P){
    if(P != Nil){
        return (Left(P) == Nil  && Right(P) == Nil);
    } else {
        return false;
    }
}

// void Add(BinTree P, infotype X){
//   addrNode nodeBaru = AlokNode(X);

//   if(IsTreeEmpty(P)){

//   }else{
//     if( Left(P) == Nil ){
//       Left(P) = nodeBaru;
//     }else if( Right(P) == Nil ){
//       Right(P) = nodeBaru;
//     }else{
//       Add( Right(P) , X );
//     }
//   }
// }

void PrintPreorder (BinTree P){
  cout << "(";
  if (!IsTreeEmpty(P)) {
    cout << Akar(P);
    PrintPreorder(Left(P));
    PrintPreorder(Right(P));
  }
  cout << ")";
}

void PrintPostorder (BinTree P){
  cout << "(";
  if (!IsTreeEmpty(P)) {
    PrintPostorder(Left(P));
    PrintPostorder(Right(P));
    cout << Akar(P);
  }
  cout << ")";
}

void PrintInorder (BinTree P){
  cout << "(";
  if (!IsTreeEmpty(P)) {
    PrintInorder(Left(P));
    cout << Akar(P);
    PrintInorder(Right(P));
  }
  cout << ")";
}

void Add(BinTree P, infotype X){
  addrNode nodeBaru = AlokNode(X);

  if( !( IsTreeEmpty(P) )){
    if( Left(P) == Nil ){
      Left(P) = nodeBaru;
    }else if( Right(P) == Nil ){
      Right(P) = nodeBaru;
    }else{
      if( IsTreeOneElmt(P)){
        Add(Left(P), X);
      }else{
        Add(Right(P), X);
      }
    }
  }
}

int main(){
  BinTree P;

  int n;
  cin>>n;

  for(int i=0; i<n; i++){
    int x;
    cin>>x;

    Add(P, x);
  }

  PrintPreorder(P);
  cout<<endl;
  PrintPostorder(P);
  cout<<endl;
  PrintInorder(P);

  return 0;
} 
