# distance-formula

```c++
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
    }case 2 passed!

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



```
