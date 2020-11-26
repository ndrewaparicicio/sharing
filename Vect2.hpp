// Andrew Aparicio
// CPSC 121-03
//
// ndrewaparicio@gmail.com
// 2020-09-16
// this file calculates the distance between to vectors
// and organized to extract the largest and smalles values using
// a structure

#include <iostream>

#ifndef _VECT2_HPP_
#define _VECT2_HPP_

class Vect2 {
 private:
  float x;
  float y;

 public:
  float x_;
  float y_;
  Vect2();
  Vect2(Vect2& other);
  float getX();
  float getY();
  void setX(float x);
  void setY(float y);
  auto distance(Vect2 a, Vect2 b) -> float;
  ~Vect2();
  std::ostream& write(std::ostream& out);
};

auto distance(Vect2 x, Vect2 y) -> float;

#endif
