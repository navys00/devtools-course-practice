// Copyright 2023 Popov Andrey
#include "include/Volumes_3d.h"
#include <string>
#include <cmath>
#include "include/Volumes.h"

std::string application::operator()(int argc, char** argv) {
  double result = -1;
  if (argc == 1) {
    return help(argv[0]);
  }
  if (argc >2) {
    return "Text of error: arguments more than its needed";
  }
  arguments args;
  if (args.operation == "Parallelepiped") {
    double result = Parallelepiped(2, 2, 2);
  }
  if (args.operation == "TruncatedCone")
    result = TruncatedCone(5, 8, 8, 4.9, 4.9);

  if (args.operation == "EllipticalCone") result = EllipticalCone(5, 6, 6);

  return std::to_string(result);
}

std::string application::help(const std::string& an) {
  return " This application is designed to calculate the volume of "
             "three-dimensional shapes by various parameters that do "
         "not have to be stored in the classroom";
}

bool application::validate(const std::string& str) { return true; }

