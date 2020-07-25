#include "processor.h"

#include <iostream>

#include "linux_parser.h"

using std::stof;

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
  return stof(LinuxParser::CpuUtilization()[0]);
}
