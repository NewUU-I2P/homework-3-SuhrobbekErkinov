float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    cin >> i >> j >> k;
    if (i > j && i > k) {
        result = i;
    } else if (j > i && j > k) {
        result = j;
    } else {
        result = k;
    }


    return result;
}