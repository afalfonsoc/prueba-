#include <iostream>
#include <cmath>

using namespace std;

int main(void){
  double sum=0;
  for(int i=0; i<=100;i++){
    sum +=i;
    cout<<i<< "\t"<<sum<<endl;
  }
  return 0;
}
