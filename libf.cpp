#include <string>
#include <string_view>

// Option 1: Return std::string (owns the data)
std::string depf(int a) {
    return "... called F";
}
