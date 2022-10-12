#include <string>
#include <sstream>

class Solution {
public:
    std::string generateTheString(int n) {
        std::stringstream stream;
        if(n % 2) { // n is odd
            for(size_t i=0; i<n; i++) {
                stream << 'a';
            }
        } else { // n is even
            if( (n/2) % 2) {
                // ok
                for(size_t i=0; i<n/2; i++) {
                    stream << 'b';
                }
                for(size_t i=0; i<n/2; i++) {
                    stream << 'c';
                }
            } else {
                // n/2+1  n/2-1
                for(size_t i=0; i<n/2+1; i++) {
                    stream << 'b';
                }
                for(size_t i=0; i<n/2-1; i++) {
                    stream << 'c';
                }
            }
        }
        return stream.str();
    }
};