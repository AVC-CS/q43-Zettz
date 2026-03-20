#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3;
    int maxVal, midVal, minVal;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // TODO
    // Find max, min, mid using only if-statements (no loops, no functions, no arrays)
    if (num1 >= num2 && num1 >= num3) {
        maxVal = num1;
        if (num2 >= num3) {
            midVal = num2;
            minVal = num3;
        } else {
            midVal = num3;
            minVal = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        maxVal = num2;
        if (num1 >= num3) {
            midVal = num1;
            minVal = num3;
        } else {
            midVal = num3;
            minVal = num1;
        }
    } else {
        maxVal = num3;
        if (num1 >= num2) {
            midVal = num1;
            minVal = num2;
        } else {
            midVal = num2;
            minVal = num1;
        }
    }

    cout << maxVal << " " << midVal << " " << minVal << endl;

    return 0;
}
