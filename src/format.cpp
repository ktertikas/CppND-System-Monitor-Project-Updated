#include "format.h"

#include <string>

using std::string;
using std::to_string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
  int hour_seconds = 3600;
  int min_seconds = 60;
  int res_hours, res_minutes, res_seconds, rest;
  string formatting_result;
  res_hours = seconds / hour_seconds;
  rest = seconds % hour_seconds;
  res_minutes = rest / min_seconds;
  res_seconds = rest % min_seconds;
  formatting_result = to_string(res_hours) + ":" + to_string(res_minutes) + ":";
  if (res_seconds <= 9) {
    formatting_result += "0";
  }
  return formatting_result + to_string(res_seconds);
}
