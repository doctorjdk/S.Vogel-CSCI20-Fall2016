#include <iostream>
#include <string>
using namespace std;


double VolumeBox(double length, double width, double height)
{
    double BoxVol;
    BoxVol = length * width * height;
    return BoxVol;
}

int main() {
    
    cout << VolumeBox(3,1,2*5) << " meters squared." << endl;
}