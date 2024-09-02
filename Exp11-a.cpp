#include <iostream>
using namespace std;

class Cube {
    public:
    double height = 2.0;
    double width = 3.0;
    double length = 5.0;  
};

int main() {
    Cube c1;
    double vol = c1.height * c1.width * c1.length;  
    cout << "Volume: " << vol << endl;
}