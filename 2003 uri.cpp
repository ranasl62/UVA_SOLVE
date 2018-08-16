#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <time.h>

using namespace std;


int main(int argc, char *argv[])
{
    tm horaMarcada = {0}, horaAcordou = {0};

    horaMarcada.tm_hour = 8; horaMarcada.tm_min = 0; horaMarcada.tm_year = 2015;

    while (scanf("%d:%d", &horaAcordou.tm_hour, &horaAcordou.tm_min))
    {
        if (5 <= horaAcordou.tm_hour && horaAcordou.tm_hour <= 9)
        {
            if ((horaAcordou.tm_hour + 1 <= horaMarcada.tm_hour) &&
                (horaAcordou.tm_min <= horaMarcada.tm_min))
                cout << "Atraso maximo: 0\n" << endl;
            else
            {
                horaAcordou.tm_hour += 1;
                int diferencaHoras, diferencaMinutos;

                diferencaHoras = (horaAcordou.tm_hour - horaMarcada.tm_hour) * 60;
                diferencaMinutos = horaAcordou.tm_min - horaMarcada.tm_min;

                printf("Atraso maximo: %d\n", diferencaHoras + diferencaMinutos);
            }
        }
    }
}
