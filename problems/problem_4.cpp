#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    if (macAddress[01] == "FF") {
        result = "Broadcast";
    } else {
        switch (macAddress[1]) {
            case '0':
                result = "Unicast";
                break;
            case '1':
                result = "Multicast";
                break;
            case '2':
                result = "Unicast";
                break;
            case '3':
                result = "Multicast";
                break;
            case '4':
                result = "Unicast";
                break;
            case '5':
                result = "Multicast";
                break;
            case '6':
                result = "Unicast";
                break;
            case '7':
                result = "Multicast";
                break;
            case '8':
                result = "Unicast";
                break;
            case '9':
                result = "Multicast";
                break;
            case 'A':
                result = "Unicast";
                break;
            case 'B':
                result = "Multicast";
                break;
            case 'C':
                result = "Unicast";
                break;
            case 'D':
                result = "Multicast";
                break;
            case 'E':
                result = "Unicast";
                break;
            case 'F':
                result = "Multicast";
                break;
        }
    }
    // make use of control flow statements
    // return result;
    return result;
}
