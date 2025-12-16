#include <iostream>

using namespace std;

string readSensor()

{

    string sensor;

    cout << "ข้อมูลเซนเซอร์ (ซ้าย,กลาง,ขวา) *หากต้องการออกจากโปรแกรม(ออก): ";

    cin >> sensor;

    return sensor;

}


void controlCar(const string& sensor) // อันนี้เอาไว้คุมรถ

{

    if (sensor == "ซ้าย")

    {

        cout << "เลี้ยวซ้าย\n";

    }

    else if (sensor == "ขวา")

    {

        cout << "เลี้ยวขวา\n";

    }

    else if (sensor == "กลาง")

    {

        cout << "ตรงไป\n";

    }

}


int main()

{

    while (true)

    {

        string sensor = readSensor();

        if (sensor == "ออก")

        {

            cout << "โปรแกรมหยุดการทำงาน\n";

            break;

        }

        controlCar(sensor);

    }

    return 0;

}