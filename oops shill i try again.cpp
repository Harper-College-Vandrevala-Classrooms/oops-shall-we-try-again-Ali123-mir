#include <iostream>
#include <limits>

using namespace std;

int prompt(int lower_bound = numeric_limits<int>::min(),
int upper_bound = numeric_limits<int>::max(),
string prompt_message = "Please enter a value",
string error_message = "Your value is invalid") {

int value;
bool valid = false;
while (!valid) {
cout << prompt_message << endl;
cin >> value;

if (cin.fail()) {
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
cout << error_message << endl;
}

else if (value < lower_bound || value > upper_bound) {
cout << error_message << endl;
} else {
valid = true; 
}
}
return value;
}
int main() {

int value = prompt(0, 100, "Please enter a value between 0 and 100", "Your value is invalid");
cout << "The value chosen by the user is " << value << endl;
return 0;
}