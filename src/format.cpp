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
  string hours, mins, secs, formatting_result;
  res_hours = seconds / hour_seconds;
  rest = seconds % hour_seconds;
  res_minutes = rest / min_seconds;
  res_seconds = rest % min_seconds;
  if (res_hours <= 9) {
    hours += "0";
  }
  if (res_minutes <= 9) {
    mins += "0";
  }
  if (res_seconds <= 9) {
    secs += "0";
  }
  formatting_result = hours + to_string(res_hours) + ":" + mins +
                      to_string(res_minutes) + ":" + secs +
                      to_string(res_seconds);
  return formatting_result;
}
