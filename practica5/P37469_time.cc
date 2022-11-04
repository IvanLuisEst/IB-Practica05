/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P37469_time.cc
  * @author alu0101543581@ull.edu.es
  * @date Nov 04 2022
  * @brief Write a program that, given a number of seconds n,
  * prints the number of hours, minutes and seconds represented by n. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37469_en/statement
  */

#include <iostream>
using namespace std;

int main() {

  int a, b, c, d;
  cin >> a;
  b = a / 3600;
  c = (a - b * 3600) / 60;
  d = a - b * 3600 - c * 60;
  cout << b << " " << c << " " << d << endl;
} 
