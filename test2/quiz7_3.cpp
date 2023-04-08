#include<iostream>
using namespace std;

void swap(int **ptr3,int **ptr4){
// TODO : change pointer to pointer 
  int *cng1 = *ptr3;
  *ptr3 = *ptr4;
  *ptr4 = cng1;

}

int main(){
  int x = 5 , y = 6;
  int *ptr1 = &x , *ptr2 = &y;
  swap(&ptr1,&ptr2);
  cout << *ptr1 << ' ' << *ptr2 << endl;
  return 0;
}
