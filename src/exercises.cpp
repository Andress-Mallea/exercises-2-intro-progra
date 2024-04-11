
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
          r += " ";
      };
      if (b < 10 ){
          r += " ";
      };
      if (a == 7){
          cout << r << endl;
          a = 0;
          r = " ";
          if(b < 10){
              r += " ";
          }
      }
      
      r += " ";
      ++a;
      ++o;
  }
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
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