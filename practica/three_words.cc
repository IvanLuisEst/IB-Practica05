/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file three_words.cc
  * @author alu0101543581@ull.edu.es
  * @date Nov 4 2022
  * @brief Write a program that reads three words a, b and c,
  * and prints a line with c, b and a in this order. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421_en
  */

#include <iostream>
using namespace std;

int main() {

  string a , b , c;
  cin >> a >> b >> c;
  cout << c << " " << b << " " << a << endl;
}
