
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  int s = 0;
  int z = s1.size();
  while(s <= z){
      if (s1[s] == ' '){
          cout << s << endl;
      }
      ++s;
  }
  cout << z << endl;
}
 
void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  if(s1 != ""){
  int s = 0;
  int z = s1.size();
  string str1 = "[";
  while(s <= z - 1){
      if (s1[s] == ' ' || s1[s] == '\n'){
          str1 += ']';
          cout << str1 << endl;
          str1 = "[";
      }
      else{
        str1 += s1[s];
      }
      ++s;
  }
  str1 += ']';
  cout << str1 << endl;
}
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
  int o = 0;
    int u = 0;
    int s1_size = s1.size();
    while( o <= s1_size){
        if ( u == 10){
            break;
        };
        if(s1_size == o){
              break;
          };
        if (s1[o] < '0' && s1[o] != ' '){
              cout << s1;
              break;
          };
      if(s1[o] == '1' || s1[o] == '0'){
         if (s1[o] == '1'){
          cout << "Om-nom-nom :P" << endl;
          ++u;
         }
         else {
          cout << "No cake :(" << endl;
            break;
      }
      }
      ++o;
  }
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
  if ( n < 0){
      cout << "El numero es negativo. Intentelo de nuevo" << endl;
    }
    else if( n > 14){
      cout << "El numero es muy grande. Intentelo de nuevo" << endl;
    }
    else if(n >= 0 && n < 14){
      int o = 1;
      int u = 1;
      while(o <= n){
          u *= o;
          ++o;
      }
      cout << u << endl;
  }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
   string r = "";
  int o = 0;
  int a = 0;
  int b = 1;
  while (o <= k){
      if (o >= n){
          r += to_string(b);
          ++b;
      }
      else{
          if (o < 6){
          r += " ";}
          k += 1;
      };
      if (b < 10 ){
          r += " ";
      };
      if (a == 7){
          cout << r << endl;
          a = 0;
          r = "";
          if(b < 10){
              if (a != 7){ 
              r += " ";}
          };
      };
      if ( a < 7 && a != 0){
      r += " ";}
      ++a;
      ++o;
      if (o == k){
          cout << r  + ""<< endl;
      }
  }
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  string nss = to_string(n);
  int ns = nss.size();
  int b = 0;
  int a = 0;
  while (b < ns){
    if(nss[b] != '-'){
         a += nss[b] - '0';
    }
    else{
    a = a + (nss[b] -'0') + 1;
    }
    ++b;
  }
  cout << a << endl;
  return a;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
  int a= 1;
  double r = 0;
  double r2 = 0;
  while (a <= n){
      double r1 = pow(-1, a+1);
      r2 += r1/a;
      ++a;
  }
  cout << r2 << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  int ss = s.size();
  if(ss <= 100 ){
      int a=0;
      int b=1;
      string r1 = "";
      string r2 = "";
      while(a<ss){
          if(s[a] != ' '){
              r1 += s[a];
          }
          ++a;
      }
      while(b<=ss){
          if(s[ss-b] != ' '){
              r2 += s[ss-b];
          }
          ++b;
      }
      if ( r1 == r2){
          cout << "YES" << endl;
      }
      else{
          cout << "NO" << endl;
      }
  }
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
  int ss = s.size();
 int a = 0;
 int d = 0;
 int p1; 
 int p2 = 0;
 while(a < ss){
     if(s[a] == 'f'){
         d += 1;
         if (d <= 1){
             p1 = a;
         }
     }
     ++a;
 }
 if(d>1){
    int b = p1 +1;
    while(b < ss){
        if(s[b] == 'f'){
            cout << b << endl;
        }
        ++b;
    }
 }
 else if (d == 1){
     cout << "-1" << endl;
 }
 else if (d<1){
     cout << "-2" << endl;
 }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}