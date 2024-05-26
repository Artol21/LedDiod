#include <iostream>
#include "diod.h"

using namespace std;

int main() {
    // Створення світлодіодів
    LedDiod redLed;
    LedDiod greenLed(50, "green");

    // Відображення початкових станів
    cout << "Initial state of LED diodes:" << endl;
    redLed.showColor();
    redLed.showBrightness();
    greenLed.showColor();
    greenLed.showBrightness();

    // Зміна налаштувань
    redLed.setBrightness(80);
    greenLed.setColor("blue");

    // Відображення оновлених станів
    cout << "\nUpdated state of LED diodes:" << endl;
    redLed.showColor();
    redLed.showBrightness();
    greenLed.showColor();
    greenLed.showBrightness();

    // Обрахунок струму діода
    double voltage = 2.5; // Приклад напруги
    cout << "\nCalculating diode current for a voltage of " << voltage << "V:" << endl;
    cout << "Red LED diode current: " << redLed.calcDiodCurrent(voltage) << " A" << endl;
    cout << "Green LED diode current: " << greenLed.calcDiodCurrent(voltage) << " A" << endl;

    return 0;
}
