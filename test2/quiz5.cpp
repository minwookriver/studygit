#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

#define random() ((double)rand() / RAND_MAX)
#define N 5000000

using namespace std;

double pi_calculate(double n){
  srand(time(NULL));
  double pi_value;
  int Cnt = 0;
  
  for(;n>0; --n){
    double x = random();
    double y = random();
    double rng = sqrt((x*x)+(y*y));
    // printf("x : %lf , y : %lf \n",x,y);
    // printf("range : %lf \n",rng);
    if(rng<1){
      Cnt++;
    }
  }
  cout << Cnt << endl;
  pi_value = Cnt;
  return 4*pi_value/N;
}

int main(){
  int n = N;
  cout << pi_calculate(n) << endl;
  return 0;
}
