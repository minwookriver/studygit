#include<iostream>
using namespace std;

#define WIDTH 4
#define HEIGHT 2

void print_array(int arr[][WIDTH], int W, int H){
  for (int h=0; h<H; ++h){
    for (int w=0; w<W; ++w){
      cout << arr[h][w];
    }
    cout << endl;
  }
}

void print_array2(int arr[][HEIGHT], int W, int H){
  for (int h=0; h<H; ++h){
    for (int w=0; w<W; ++w){
      cout << arr[h][w];
    }
    cout << endl;
  }
}

void transpose(const int input[HEIGHT][WIDTH], int output[WIDTH][HEIGHT]){
  for (int h=0; h<HEIGHT; ++h){
    for (int w=0; w<WIDTH; ++w){
      output[w][h] = input[h][w];
    }
  }
}

int main(){
  int input[HEIGHT][WIDTH];
  int output[WIDTH][HEIGHT];
  
  for (int h=0; h<HEIGHT; ++h){
    for (int w=0; w<WIDTH; ++w){
      cin >> input[h][w];
    }
  }

  transpose(input, output);
  print_array(input, WIDTH, HEIGHT);
  print_array2(output, HEIGHT, WIDTH);

  return 0;
}
