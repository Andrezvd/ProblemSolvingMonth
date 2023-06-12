// TimeConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

// FUNCION PARA CONVERTIR UNA HORA A  HORA MILITAR

std::string timeConversion(std::string s) {

    int sz = s.length();

    if (s[sz - 2] == 'A') {

        std::string horaCadena = s.substr(0, 2);
        int horaNumero = std::stoi(horaCadena);

        if (horaNumero == 12)
        {
            std::string horanew = "00";
            std::string horaMilitar = horanew.append(s.substr(2, 6));
            return horaMilitar;
        }
        else {
            return s.substr(0, sz - 2);
        }
    }
    else
    {
        std::string horaPM = s.substr(0, 2);
        int horaPMnum = std::stoi(horaPM);

        if (horaPMnum == 12)
        {
            return s.substr(0, sz - 2);
        }

        else
        {
            int niuHoraPm = horaPMnum + 12;
            std::string addHorapm = std::to_string(niuHoraPm);
            std::string HoraMilitarPm = addHorapm.append(s.substr(2, 6));
            return HoraMilitarPm;
        }
    }
}

int main()
{
    std::ofstream fout(getenv("OUTPUT_PATH"));

    std::string s;
    std::getline(std::cin, s);

    std::string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}