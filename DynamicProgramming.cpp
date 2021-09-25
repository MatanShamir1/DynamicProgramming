//
// Created by matan on 25/09/2021.
//
#include <stdio.h>
#include <string>
#include <math.h>

std::string minSquares(int num) {
    std::string answer;
    int root = (int) sqrt(num);
    int dynamicArray[root + 1][num + 1];
    for (int i = 0; i <= root; i++) {
        dynamicArray[i][0] = 0;
    }
    for (int j = 0; j <= num; j++) {
        dynamicArray[0][j] = 0;
        dynamicArray[1][j] = j;
    }
    for (int j = 1; j <= num; j++) {
        for (int i = 2; i <= root; i++) {
            if (i * i > j) {
                dynamicArray[i][j] = dynamicArray[i - 1][j];
            } else {
                dynamicArray[i][j] = std::min(dynamicArray[i - 1][j], 1 + dynamicArray[i][j - i * i]);
            }
        }
    }
    int j = num, i = root;
    while (true) {
        if (j <= 0) {
            break;
        }
        if (i == 1) {
            while (j > 0) {
                answer += "+1";
                j--;
            }
            break;
        }
        if (dynamicArray[i - 1][j] <= dynamicArray[i][j - i * i]) {
            i -= 1;
        } else {
            j -= i * i;
            answer += "+" + std::to_string(i*i);
        }
    }
    answer.erase(0,answer.find_first_not_of("+"));
    return answer;
}

