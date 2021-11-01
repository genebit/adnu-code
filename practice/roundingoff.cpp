#include <iostream>
#include <cmath>

using namespace std;

float round(int decimalPlaces, float num)
{
    float value = (int)(num * pow(10, decimalPlaces) + 0.5);
    cout << value;
    return (float)value / pow(10, decimalPlaces);
}
 
int main()
{
    float num = 3.666666;
    // round(x decimal places, inputnum);
    cout << round(2, num);

    return 0;
}