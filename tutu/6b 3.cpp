#include <iostream>
using namespace std;
 
inline float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}
 
inline float fahrenheitToCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}
 
int main() {
    float c = 100, f = 212;
    cout << c << "°C = " << celsiusToFahrenheit(c) << "°F" << endl;
    cout << f << "°F = " << fahrenheitToCelsius(f) << "°C" << endl;
    return 0;
}
