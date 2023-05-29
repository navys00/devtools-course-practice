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
}

std::string application::help(const std::string& an) {
  return "To calculate the volume of three-dimensional shapes";
}

