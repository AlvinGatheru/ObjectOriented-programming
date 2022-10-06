// C++ program to convert temperature from degrees fahrenheit to degrees celcius.
 
#include <iostream>
using namespace std;
  
int main() {
    float fahren, celsius;
  
    cout << "Enter the temperature in fahrenheit\n";
    cin >> fahren;
  
    // convert fahreneheit to celsius 
    // Subtract 32, then multiply it by 5, then divide by 9
     
    celsius = 5 * (fahren - 32) / 9;
  
    cout << fahren <<" Fahrenheit is equal to " << celsius <<" celsius ";
      
    return 0;
}