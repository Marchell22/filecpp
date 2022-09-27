#include <iostream>
using namespace std;

#define max 10
#define Nil 0

typedef int address;
typedef int InfoType;
typedef struct{
  address top;
  InfoType data[max+1];
} stack;

#define TOP(S) (S).top
#define InfoTop(S) (S).data[(S).top]

void CreateEmpty( stack *S){
  TOP(*S) = Nil;
}

// void Push(stack *S, int x){
//   if( (*S).top == max ){
//     cout<<"penuh";
//   }else{
//     TOP(*S)++;
//     InfoTop(*S) = x;
//   }
// }

// void Pop(stack *S, int *x){
//   if((*S).top == Nil){
//     cout<<"kosong";
//   }else{
//     *x = InfoTop(*S);
//     TOP(*S)--;
//   }
// }

void Push(stack *S, int x){
  if( !( TOP(*S) == max) ){
    TOP(*S)++;
    InfoTop(*S) = x;
  }else{
    cout<<"Stack penuh";
  }
}

void Pop(stack *S, int *x){
  if( !( TOP(*S) == Nil) ){
    *x = InfoTop(*S);
    TOP(*S)--;
  }else{
    cout<<"Stack kosong";
  }
}

bool cekAngka(char a){
  char angka[] = {1,2,3,4,5,6,7,8,9,0};

  return true;
}
/*
int main(){

  int n;
  cin>>n;

  stack S[n];

  for(int i=0; i<n; i++){
    CreateEmpty(&(S[i]));

    string kalimat;
    cin>>kalimat;
    
    int simpanHapus;
    for(int j=0; j<kalimat.length(); j++){
      if( cekAngka(kalimat[j]) == true){
        int angka = (int) kalimat[j];
        Push(&(S[i]), angka);
      }else if( kalimat[j] == '_'){
        Pop(&(S[i]), &simpanHapus )
      }
    }
  }

  for(int i=0; i<n; i++){
    while(){
      
    }
  }
}
*/


int main() {
  stack S;
  stack S2;
  
  CreateEmpty(&S);
  CreateEmpty(&S2);

  int n;
  cin>>n;

  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    Push(&S, x);
  }

  int simpanHapus;
  while((S).top != Nil){
    Pop(&S, &simpanHapus);
    Push(&S2, simpanHapus);

    Pop(&S, &simpanHapus);
    Pop(&S2, &simpanHapus);
    Push(&S, simpanHapus);
  }

  return 0;
} 

