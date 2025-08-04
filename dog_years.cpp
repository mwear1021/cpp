// Human years to dog years converter
/*     
The first two years of a dog’s life count as 21 human years.
Each following year counts as 4 human years.
*/

#include <iostream>

int main() {
  double one_y_old = 10.5;
  int two_y_old = 21;
  int human_years;
  double dog_years;

  std::cout << "Enter your dog's age\n> ";
  std::cin >> human_years;

  if (human_years <= 2) {
    dog_years = one_y_old * human_years;
  } else {
    dog_years = two_y_old + (4 * (human_years - 2));
  }
  
  std::cout << "Your dog is " << dog_years << " dog years old\n";
}