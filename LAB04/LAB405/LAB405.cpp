#include <iostream>

using namespace std;


int main()

{

    srand(time(0));

    int RandomNumber = rand() % 100 + 1;

    int guess;

    int Try = 0;


    cout << " โปรแกรมทายเลข 1 ถึง 100" << endl;


    do

    {

        cout << " เลขที่คุณต้องการทาย: ";

        cin >> guess;

        Try++;


        if (guess != RandomNumber)

        {

            int difference = abs(guess - RandomNumber);

            if (difference <= 10)

            {

                cout << " ใกล้มาก! ลองอีกครั้ง!" << endl;

            }

            else

            {

                cout << " ไกลมาก! ลองใหม่อีกครั้ง!" << endl;

            }


            if (guess < RandomNumber)

            {

                cout << "     เพิ่มขึ้นอีก!" << endl;

            }

            else if (guess > RandomNumber)

            {

                cout << "     ลดลงอีก!" << endl;

            }

        }

        else

        {

            cout << "ยินดีด้วยคุณทายถูกต้องแล้วใน " << Try << " ครั้ง!" << endl;

        }

    } while (guess != RandomNumber);


    return 0;

}