//
//  main.cpp
//  OS Lab 1 C++
//
//  Created by Yegor Tya-Shen-Tin on 22.02.2018.
//  Copyright © 2018 Yegor Tya-Shen-Tin. All rights reserved.
//
#include <iostream>
using namespace std;
void add(int arrFirst[], int arrSecond[], int counterFirst, int counterSecond) {
    int flag = 0;
    for (int i = 0; i < counterFirst; i++) {
        flag = 0;
        for(int j = 0; j < counterSecond; j++) {
            if (arrFirst[i] == arrSecond[j]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            cout << arrFirst[i] << " ";
        }
    }
}
void printArray(int N, int arr[]) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N = 11;
    int arrFirst[N];
    for (int i = 0; i < N; i++) {
        arrFirst[i] = i;
    }
    int arrSecond[4] = {2,5,7,8};
    cout << "First Array: " << endl;
    printArray(N, arrFirst);
    cout << "Second Array: " << endl;
    printArray(4, arrSecond);
    cout << "Result: " << endl;
    add(arrFirst, arrSecond, N, 4);
    
    
    return 0;
}
