#include <string>
#include <vector>
#include <ctime>

class Solution {
 public:
  std::string dayOfTheWeek(int day, int month, int year) {
    std::vector<std::string> weekdays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    std::tm time_in = {0, 0, 0, day, month-1, year-1900};
    std::time_t time1 = std::mktime(&time_in);
    const std::tm *time_out = std::localtime(&time1);
    return weekdays[time_out->tm_wday];
  }
};