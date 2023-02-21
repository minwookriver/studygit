#include<iostream>
using namespace std;

#define WIDTH 2
#define HEIGHT 4

int transpose(const int input[WIDTH][HEIGHT]){
int output[HEIGHT][WIDTH];
// TODO : input으로 받아  output을 리턴값으로 내보내주는 함수를 작성
for (int h=0; h<HEIGHT; ++h){
    for (int w=0; w<WIDTH; ++w){
      output[h][w] = input[w][h];
    }
  } 
  return output[HEIGHT][WIDTH];
}
int main(){
int input[WIDTH][HEIGHT];

  for (int w=0; w<WIDTH; ++w){
    for (int h=0; h<HEIGHT; ++h){
      cin >> input[w][h];
    }
  }
  transpose(input);
  // TODO : output 출력

  cout << transpose << endl;
  return 0;
}

