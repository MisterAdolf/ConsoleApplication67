
#include <iostream>
using namespace std;

class Cars {

public:
    int Wheels;
    int Doors;
    int Speed;
    string CarColor;
    static enum ColorEnum {
        red = 1,
        green = 2,
        blue = 3
    };
    int color;
};

class Parking {

public:
    static enum CarsEnum {
        FirstCar = 1,
        SecondCar = 2,
        ThirdCar = 3
    };
    int Car;
};

int main()
{
    Cars obj;
    int color;
    cout << "Enter color: ";
    cin >> color;
    if (color == 1) {
        obj.color = Cars::red;
    }
    cout << obj.color;

    Parking obj;
    int Car;
    cout << "Enter Car Number: ";
    cin >> Car;
    if (Car == 1) {
        obj.Car = Parking::FirstCar;
    }
    cout << obj.Car;
}

