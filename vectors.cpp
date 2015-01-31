#include <stdio.h>

typedef float real32;

union vector2 {
  struct {
    real32 x, y;
  };
  real32 e[2];
};

inline vector2
operator+(vector2 a, vector2 b) {
  vector2 result = {
    a.x + b.x,
    a.y + b.y
  };
  return result;
}

inline vector2
operator-(vector2 a, vector2 b) {
  vector2 result = {
    a.x - b.x,
    a.y - b.y
  };
  return result;
}

void print_vector(const char name[], vector2 a) {
  printf("%s: [%.2f,%.2f]\n", name, a.x, a.y);
}

int main() {
  vector2 a = {3, 5};
  vector2 b = {-1, 2};
  print_vector("A", a);
  print_vector("B", b);
  print_vector("A+B", a+b);
  print_vector("A-B", a-b);
  print_vector("B-A", b-a);
  return 0;
}
