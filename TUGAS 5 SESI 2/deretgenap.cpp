#include <iostream>
using namespace std;

int main (){
  int a, b=20, c=10, d=0;
  cout <<"Nova Satria";
  cout <<"\nProgram Menghitung Deret 10 Bilangan Ganjil \nGASSKEUN!!!" <<endl;
  for (a=2; a<=b; a+=2){
       cout <<a;
       if (a<b){
        cout << " + ";
      }
  }
      cout <<" = ";
      d = c/2*(2*2+(c-1)*2);
      cout << d;
getchar();   
}