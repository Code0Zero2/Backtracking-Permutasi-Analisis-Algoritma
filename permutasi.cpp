#include <iostream>
using namespace std;

int arr[] = {1, 2, 3};
int jmlh = sizeof(arr) / sizeof(arr[0]);
int result[3];
bool used[3] = {false};

void permutasi(int pos) {
    // jika semua posisi terisi
    if (pos == jmlh) {
        for (int i = 0; i < jmlh; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        return;
    }

    // coba semua kemungkinan angka
    for (int i = 0; i < jmlh; i++) {
        if (!used[i]) {
            used[i] = true;          // pilih
            result[pos] = arr[i];

            permutasi(pos + 1);       // rekursi

            used[i] = false;        // backtrack
        }
    }
}

int main() {
    cout << "Hasil Permutasi:\n";
    permutasi(0);
    return 0;
}