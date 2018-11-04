/*
 * created by Danil Kireev, PFUR NFIbd-01-17, 17.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"


/*
 * № 43
 * Дана матрица размера M * N (M и N – четные числа).
 * Поменять местами левую верхнюю и правую нижнюю четверти матрицы.
 * Вывести элемент M/2, N/2 и строку содержащую этот элемент.
 */

int main() {
    cout << "нахождение строки с наибольшей суммой элементов и вывод суммы" << endl;
    Q obj;
    int res, n_res;
    obj.user_input();
    obj.print();
    n_res = obj.fun(&res);
    obj.print();
    cout << "элемент M/2, N/2: " << res << ", строка с этим эллементом = " << n_res << endl;
    return 0;
}