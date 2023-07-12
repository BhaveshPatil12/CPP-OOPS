#include<iostream>
using namespace std;
class coordinates
{
private:
    int x1, y1;
public:
    coordinates(int x_coord = 0, int y_coord = 0) {
        x1 = x_coord ; 
        y1 = y_coord;
    }
    void displayCoordinates() {
        cout << "\n";
        cout << " The x-coordinate = " << x1 << ", The y-coordinate = " << y1;
        cout << "\n\n";
    }
};

int main() {
    coordinates point(100, 100);
    point.displayCoordinates();
    point = 30;
    point.displayCoordinates();
    return 0;
}