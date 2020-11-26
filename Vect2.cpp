// Andrew Aparicio
// CPSC 121-XX
// Lab-XX, prob-XX
// 2020-XX-XX
// ndrewaparicio@csu.fullerton.edu
//
// this file calculates the distance between to vectors
// and organized to extract the largest and smalles values using
// a structure

#include "Vect2.hpp"

Vect2::Vect2(float x, float y): x_ {x}, y_{y}

auto distance(Vect2 a, Vect2 b) -> float {
  float delta_x = (a->x_ - b->x_) * (a->x_ - b->x_);
  float delta_y = (a->y_ = b->y_) * (a->y_ - b->y_);
  float sum = delta_x + delta_y;
  float d = sqrt(sum);
  return d;
}

std::ostream& Vect2::write(ostream& out) {
  out << "(" << v->x << ", " << v->y << ")";
  return out;
}
