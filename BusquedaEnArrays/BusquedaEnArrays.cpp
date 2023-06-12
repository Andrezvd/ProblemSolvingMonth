// BusquedaEnArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <functional>
#include <algorithm>

std::string ltrim(const std::string&);
std::string rtrim(const std::string&);

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

std::vector<int> matchingStrings(std::vector<std::string> strings, std::vector <std::string> queries) {
    std::vector<int> resultado;
    
    for (int i = 0; i < queries.size(); i++) {
        int contador = 0;
        for (int j = 0; j < strings.size(); j++) {

            if (queries[i] == strings[j]) {
                contador++;
            }
            
        }
        resultado.push_back(contador);
    }
    return resultado;
}

int main()
{
    std::ofstream fout(getenv("OUTPUT_PATH"));

    std::string strings_count_temp;
    std::getline(std::cin, strings_count_temp);

    int strings_count = std::stoi(ltrim(rtrim(strings_count_temp)));

    std::vector<std::string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        std::string strings_item;
        std::getline(std::cin, strings_item);

        strings[i] = strings_item;
    }

    std::string queries_count_temp;
    std::getline(std::cin, queries_count_temp);

    int queries_count = std::stoi(ltrim(rtrim(queries_count_temp)));

    std::vector<std::string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        std::string queries_item;
        std::getline(std::cin, queries_item);

        queries[i] = queries_item;
    }

    std::vector<int> res = matchingStrings(strings, queries);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

std::string ltrim(const std::string& str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string rtrim(const std::string& str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
