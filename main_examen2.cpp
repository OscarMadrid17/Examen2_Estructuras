
#include <bits/stdc++.h>
using namespace std;
 

int contarElementos(int* arr, int n)
{
 
    int count = 0;
    for (int i = 0; i < n; i++) {
 
        int x = arr[i];
 
        int xPlusOne = x + 1;
 
        bool encontrado = false;
 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == xPlusOne) {
                encontrado = true;
                break;
            }
        }
 
        for (int k = i - 1;
             !encontrado && k >= 0; k--) {
            if (arr[k] == xPlusOne) {
                encontrado = true;
                break;
            }
        }
 
        
        if (encontrado == true) {
            count++;
        }
    }
 
    return count;
}
 

int main()
{
    int arreglo[] = { 1, 3, 2, 3, 5, 0};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
 
    cout << contarElementos(arreglo, n);
 
    return 0;
}
