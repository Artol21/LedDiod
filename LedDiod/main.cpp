#include <iostream>
#include "diod.h"

using namespace std;

int main() {
    // ��������� ���������
    LedDiod redLed;
    LedDiod greenLed(50, "green");

    // ³���������� ���������� �����
    cout << "Initial state of LED diodes:" << endl;
    redLed.showColor();
    redLed.showBrightness();
    greenLed.showColor();
    greenLed.showBrightness();

    // ���� �����������
    redLed.setBrightness(80);
    greenLed.setColor("blue");

    // ³���������� ��������� �����
    cout << "\nUpdated state of LED diodes:" << endl;
    redLed.showColor();
    redLed.showBrightness();
    greenLed.showColor();
    greenLed.showBrightness();

    // ��������� ������ ����
    double voltage = 2.5; // ������� �������
    cout << "\nCalculating diode current for a voltage of " << voltage << "V:" << endl;
    cout << "Red LED diode current: " << redLed.calcDiodCurrent(voltage) << " A" << endl;
    cout << "Green LED diode current: " << greenLed.calcDiodCurrent(voltage) << " A" << endl;

    return 0;
}
