#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    string result;
    std::cin >> S >> height;
    if (S = 'M') {
        if (height < 1.70) {
            result = "Short";
        } else if (height >= 1.70 && height < 1.85) {
            result = "Normal";
        } else if (height >= 1.85) {
            result = "Tall";
        }
    } else if (S = 'F') {
        if (height < 1.60) {
            result = "Short";
        } else if (height >= 1.60 && height < 1.75) {
            result = "Normal";
        } else if (height >= 1.75) {
            result = "Tall";
        }
    }
    // use return to return your result
    // make use of control flow statements
}