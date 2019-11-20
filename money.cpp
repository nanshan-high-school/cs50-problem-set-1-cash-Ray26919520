#include <iostream>
using namespace std;

int main() {
    float $$;
    cout << "請輸入$$\n";
    cin >> $$;
    while ($$ >= 0)
    if ($$ >= 2000) {
        cout << "一張2000\n";
        $$ = $$ - 2000;
    } else if ($$ >= 1000) {
        cout << "一張1000\n";
        $$ = $$ - 1000;
    } else if ($$ >= 500) {
        cout << "一張500\n";
        $$ = $$ - 500;
    }  else if ($$ >= 200) {
        cout << "一張200\n";
        $$ = $$ - 200;
    } else if ($$ >= 100) {
        cout << "一張100\n";
        $$ = $$ - 100;
    } else if ($$ >= 50) {
        cout << "一個50\n";
        $$ = $$ - 50;
    } else if ($$ >= 20) {
        cout << "一個20\n";
        $$ = $$ - 20;
    } else if ($$ >= 10) {
        cout << "一個10\n";
        $$ = $$ - 10;
    } else if ($$ >= 5) {
        cout << "一個5\n";
        $$ = $$ - 5;
    } else if ($$ >= 1) {
        cout << "一個1\n";
        $$ = $$ - 1;
    } else if ($$ > 0) {
        cout << "一個1\n";
        $$ = $$ -1;
    }
}
