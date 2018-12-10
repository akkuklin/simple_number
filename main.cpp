#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
    int start = clock();
    int n;
    cout << "Введите n.. ";
    cin >> n;
    cout << "Вычисление..." << endl;
    int *array = new int[100000000];
    ofstream output("output.txt");
    for (long i = 2; i < n; i++){
        for (long j = i * i; j <= n; j+=i){
            if (j > n)
                break;
            array[j] = 1;
        }
    }
    for (long i = 2; i < n; i++){
            if (array[i] == 0)
                output << i << endl;
    }
    int end = clock();
    double runtime = (end - start)/(double)CLOCKS_PER_SEC;
    output << "runtime: " << runtime;
    output.close();
    return 0;
}