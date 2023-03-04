#include <iostream>
#include <cmath>

using namespace std;

// This function takes in three coordinates (x1, y1, z1) and (x2, y2, z2) and returns the distance between them
double calculateDistance(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
}

// This function tests the calculateDistance function
void testCalculateDistance()
{
    // Test case 1
    double x1 = 0.0;
    double y1 = 0.0;
    double z1 = 0.0;
    double x2 = 3.0;
    double y2 = 4.0;
    double z2 = 0.0;
    double expectedDistance1 = 5.0;
    double actualDistance1 = calculateDistance(x1, y1, z1, x2, y2, z2);
    if (abs(actualDistance1 - expectedDistance1) < 0.001) {
        cout << "Test case 1 passed!" << endl;
    } else {
        cout << "Test case 1 failed!" << endl;
    }

    // Test case 2
    double x3 = 7.0;
    double y3 = 4.0;
    double z3 = 3.0;
    double x4 = 17.0;
    double y4 = 6.0;
    double z4 = 2.0;
    double expectedDistance2 = 10.246951;
    double actualDistance2 = calculateDistance(x3, y3, z3, x4, y4, z4);
    if (abs(actualDistance2 - expectedDistance2) < 0.001) {
        cout << "Test case 2 passed!" << endl;
    } else {
        cout << "Test case 2 failed!" << endl;
    }
}

// Main Function
int main()
{
    testCalculateDistance();
    return 0;
}
