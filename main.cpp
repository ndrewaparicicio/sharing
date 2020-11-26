// Andrew Aparicio
// CPSC 121-03
// Lab-03 prob-02
// 2020-10-19
// ndrewaparicio@csu.fullerton.edu
//
// this file calculates the distance between to vectors
// and organized to extract the largest and smallest values using
// a structure

#include <fstream>
#include <iostream>

#include "Vect2.hpp"

using namespace std;

int main(int argc, char* argv[]) {
  if (argc < 2) {
    cout << "Please provide an input file with 5 2D vectors. Exiting.\n";
    exit(1);
  }
  // input file stream declaration & Vect 2 declaration of array structure
  ifstream input_file_stream(argv[1], ios::in);
  const int NUM_POINTS = 5;
  Vect2 points[NUM_POINTS];
  int current_point = 0;

  // Float a * b declared to pass values to Vect2 objects x & y
  float a = 0;
  float b = 0;

  // Float min a/b max a/b are indexes used in for loop statement line 53
  int min_a = 0;
  int min_b = 1;
  int max_a = 1;
  int max_b = 0;

  // Float max/min are boundries set for the array call in for loop line 54
  float max = 0;
  float min = 0;

  // While statment stores values into variables a/b and sends them to Vect 2
  // and stores the values in the array.
  while (!input_file_stream.eof()) {
    input_file_stream >> a;
    input_file_stream >> b;
    points[current_point] = Vect2(a, b);
    current_point++;
  }

  // Distance determines the distance for max values and min values
  max = 0; //points[max_a].distance(points[max_b].x_, points[max_b].y_);
  min = max;
  float d;

  // Runs a selction sort with a nested loop to determine largest and smallest
  // Values contained within the array of points.
  for (int outer_loop_cnt = 0; outer_loop_cnt < (NUM_POINTS - 1);
       outer_loop_cnt++) {
    for (int inner_loop_cnt = (outer_loop_cnt + 1); inner_loop_cnt < NUM_POINTS;
         inner_loop_cnt++) {
        d = distance(&points[outer_loop_cnt], &points[inner_loop_cnt]);
      if (d < min) {
        min_a = outer_loop_cnt;
        min_b = inner_loop_cnt;
        min = d;
      }
      if (d > max) {
        max_a = outer_loop_cnt;
        max_b = inner_loop_cnt;
        max = d;
      }
    }
  }

  cout << "vect[" << min_a << "]";
  points[min_a].write(std::cout);
  cout << " and vect[" << min_b << "]";
  points[min_b].write(std::cout);

  return 0;
}
