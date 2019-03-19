/*
zip.h

created on: 2019/2/1
Author Yuya Nakata
*/
#include <iostream>
#include <vector>
#include<cmath>


using namespace std;
int main(){
  double alpha = 0.7;
  double numerator = 0;
  int Ncontnets = 100;
  //int trycount = 10000; //試行回数
//  vector <int> A(100);
///  for(int i=0; i<100; i++){
//    A[i]=0;
//  }
  int number; //もし関数にするのであれば返り値にもちいる
  for(int i=1; i<=Ncontents; i++){
    numerator += 1/(pow(i,alpha));
  }

//  for(int i=0; i<trycount; i++){

  bool finish =true;
  while(finish == true){

    for(int j=1; j<=Ncontents; j++){
      double R;
      R=(double)(rand()) /RAND_MAX; //0~1のランダムな値を生成
      double zz;
      zz=(1/(pow(j,alpha)) ) / numerator;
      R=R-zz;

      if(R < 0){
        number = j-1;
        finish = false;
        //  A[j-1] +=1;
        break;
      }
      if(j == Ncontents) number = j-1;
    }
  }
//}
  //zipf則の基づいた数値生成になっているか確認
  //for(int i=0; i<100; i++){
  //cout<<i<<"が生成された回数は" << A[i] << endl;

  //}
//  getchar();


  return 0;
  //関数でつかうなら
  return number;
}
