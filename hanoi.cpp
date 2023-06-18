#include<iostream>

using namespace std;

int n = 3;
int movimientos = 0;

void hanoi(int n, string inicial, string objetivo, string aux){
    if(n == 0) return;

    hanoi(n - 1, inicial,aux,objetivo); // moviendo los n-1 discos hacia auxiliar

    cout << "disco " << n << " movido desde " << inicial << " hasta " << objetivo << endl; //moviendo el disco n.
    movimientos++;

    hanoi(n - 1, aux,objetivo,inicial); //devolviendo los n - 1 discos desde el auxiliar hasta el objetivo



}

int main(){
    hanoi(n,"inicial","objetivo","aux");
    printf("movimientos %d", movimientos);
}