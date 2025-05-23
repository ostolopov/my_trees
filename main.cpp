#include <iostream>

#include "trees_structs.h"
#include "utils.h"

int main() {
    int case_number;
    std::cout << "(1) Работа с однонаправленным линейным списком без головного элемента.\n"
            "(2) Работа с однонаправленным линейным списком с головным элементом.\n"
            "(3) Работа с симметричным линейным списком без головного элемента.\n"
            "(4) Работа с симметричным линейным списком с головным элементом.\n"
            "(5) Работа с однонаправленным циклическим списком без головного элемента.\n"
            "(6) Работа с однонаправленным циклическим списком с головным элементом.\n";
    while (get_int(&case_number, 0 ,6) != 0  && case_number != 0) {
        switch (case_number) {
            case 1:
                universal_case <RBTree> ();
                break;
            case 2:
                universal_case <RBTreeH> ();
                break;
            case 3:
                universal_case <BinTree> ();
                break;
            case 4:
                universal_case <BinTreeH> ();
                break;
            case 5:
                universal_case <BalTree> ();
                break;
            case 6:
                universal_case <BalTreeH> ();
                break;
            default:
                std::cout << "Число вышло за разрешенный диапазон. Попробуйте еще раз!\n";
            break;
        }
        std::cout << "(1) Работа с однонаправленным линейным списком без головного элемента.\n"
            "(2) Работа с однонаправленным линейным списком с головным элементом.\n"
            "(3) Работа с симметричным линейным списком без головного элемента.\n"
            "(4) Работа с симметричным линейным списком с головным элементом.\n"
            "(5) Работа с однонаправленным циклическим списком без головного элемента.\n"
            "(6) Работа с однонаправленным циклическим списком с головным элементом.\n";
    }
    return 0;
}
