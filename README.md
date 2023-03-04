# distance-formula

```c++
    // Test case 1la-test.exe
    double x1 = 0.0;
    double y1 = 0.0;
    double z1 = 0.0;
    double x2 = 3.0; /c/Users/user/projects/distance-formula
    double y2 = 4.0;la.cpp
    double z2 = 0.0;
    double expectedDistance1 = 5.0;projects/distance-formula
    double actualDistance1 = calculateDistance(x1, y1, z1, x2, y2, z2);
    if (abs(actualDistance1 - expectedDistance1) < 0.001) {
        cout << "Test case 1 passed!" << endl;stance-formula
    } else {-formula-test.exe
        cout << "Test case 1 failed!" << endl;
    }case 2 passed!

    // Test case 264 /c/Users/user/projects/distance-formula
    double x3 = 7.0;la.cpp
    double y3 = 4.0;
    double z3 = 3.0; /c/Users/user/projects/distance-formula
    double x4 = 17.0;mula-test distance-formula.cpp
    double y4 = 6.0;
    double z4 = 2.0; /c/Users/user/projects/distance-formula
    double expectedDistance2 = 10.246951;
    double actualDistance2 = calculateDistance(x3, y3, z3, x4, y4, z4);
    if (abs(actualDistance2 - expectedDistance2) < 0.001) {
        cout << "Test case 2 passed!" << endl;
    } else { MINGW64 /c/Users/user/projects/distance-formula
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
