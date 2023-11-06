// Alexis Martinez
// alexism2101@csu.fullerton.edu
// @AlexisM21
// Partners: @as

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() == 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  try {
    double sum{0};
    for (const auto& argument : arguments) {
      if (argument == arguments[0]) {
        continue;
      }
      double current_value = std::stod(argument);
      sum += current_value;
    }

    auto input_size = static_cast<double>(arguments.size() - 1);
    sum = sum / input_size;

    std::cout << "average = " << sum << "\n";
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }

  return 0;
}
