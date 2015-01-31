#include <stdio.h>
#include <math.h>

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

inline vector2
operator*(vector2 a, real32 b) {
  vector2 result = {
    a.x * b,
    a.y * b
  };
  return result;
}

inline real32
dot_product(vector2 a, vector2 b) {
  return (a.x * b.x) + (a.y * b.y);
}

inline real32
length(vector2 a) {
  return sqrtf(dot_product(a, a));
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
  print_vector("A*2", a * 2.0f);
  printf("A.B: %.2f\n", dot_product(a,b));
  printf("A length: %.2f\n", length(a));
  return 0;
}
