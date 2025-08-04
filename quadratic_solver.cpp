#include <iostream>
#include <cmath>

int main() {
  int a;
  int b;
  int c;
  double x1;
  double x2;

  // Quadratic form ax^2 + bx + c = 0
  std::cout << "Enter x-squared coefficient (a)\n> ";
  std::cin >> a;

  std::cout << "Enter x coefficient (b)\n> ";
  std::cin >> b;

  std::cout << "Enter constant (c)\n> ";
  std::cin >> c;
  
  // Solve quadratic
  x1 = (-b + std::sqrt(std::pow(b, 2) - 4 * a * c)) / (2 * a);
  x2 = (-b - std::sqrt(std::pow(b, 2) - 4 * a * c)) / (2 * a);

  std::cout << "Quadratic roots: " << x1 << ", " << x2 << "\n";
}