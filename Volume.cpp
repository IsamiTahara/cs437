#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   float length;
   float width;
   float depth;
   float rate;
   float volume;
   float waterVolume;
   float time;

   cin >> length >> width >> depth >> rate;

   volume = length * width * depth;
   waterVolume = volume * 7.48;
   time = waterVolume / (rate * 3.78541 / 60);

   cout << fixed << setprecision(2);
   cout << "Reservoir volume: " << volume << " cu. ft" << endl;
   cout << "Water volume: " << waterVolume << " gallons" << endl;
   cout << "Time to fill: " << time << " hour(s)" << endl;

   return 0;
}
