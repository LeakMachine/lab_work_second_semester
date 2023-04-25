// Copyright 2022 Marina Usova

#include <stdio.h>
#include <string>

#include "hash_vector.h"
#include "../lib_polynomial/polynomial.h"
#include "../lib_table_linear_list/linear_list.h"


int main() {
    
    // Testing Monoms.
    int* deg = new int(3);
    deg[0] = 1;
    deg[1] = 2;
    deg[2] = 3;
    double coef = 3;
    CMonomial monom(coef, deg);
    std::cout << monom.toString() << std::endl;

    CMonomial monom2(coef, deg);
    std::cout << monom2.toString() << std::endl;

    if (monom == monom2)
        std::cout << "Equal" << std::endl;
    else
        std::cout << "Not Equal" << std::endl;

    CMonomial monom3;
    std::cout << "Operator +" << std::endl;
    monom3 = monom + monom2;
    std::cout << monom3.toString() << std::endl;

    std::cout << "Operator -" << std::endl;
    monom3 = monom - monom2;
    std::cout << monom3.toString() << std::endl;

    std::cout << "Operator *" << std::endl;
    monom3 = monom * monom2;
    std::cout << monom3.toString() << std::endl;

    std::cout << "Operator /" << std::endl;
    monom3 = monom / monom2;
    std::cout << monom3.toString() << std::endl;

    CMonomial monom4;
    monom4 = monom.getDerivative(monom);
    std::cout << monom4.toString() << std::endl;

    // Testing Polinoms.

    CList<CMonomial> list;
    list.push_back(monom);
    list.push_back(monom2);
    CPolynomial polynom(list);
    std::cout << polynom.toString();
    

    
    // ������� ������ �������
    CLinearTableList<std::pair<std::string, int>> table;

    // ��������� ��������
    table.insert(std::pair<std::string, int>("key1", 12));
    table.insert(std::pair<std::string, int>("key2", 13));
    table.insert(std::pair<std::string, int>("key3", 14));

    std::pair<std::string, int> objtofind("key1", 12);
    if (table.contains(objtofind)) {
        std::cout << "Found object 1!" << std::endl;
    }else
        std::cout << "Couldn't find object 1..." << std::endl;

    // ������� �������
    std::pair<std::string, int> objtoremove("key2", 13);
    table.remove(objtoremove);

    // ���� ������� �� �����
    try {
        const std::pair<std::string, int> found = table.find("key2");
        std::cout << found.first << " " << found.second << std::endl;
    }
    catch (const std::out_of_range) {
        std::cout << "Caught and Exception, code works as intendent." << std::endl;
    }

    CHashTableMix<std::pair<std::string, int>> MyHashTable1(10);

    std::pair<std::string, int> obj1("key1", 13);
    std::pair<std::string, int> obj2("key2", 14);
    std::pair<std::string, int> obj3("key3", 15);
    
    MyHashTable1.insert(obj1);
    MyHashTable1.insert(obj2);
    MyHashTable1.insert(obj3);

    std::cout << "Value for key 1: " << MyHashTable1.find("key1").second << std::endl;
    std::cout << "Value for key 2: " << MyHashTable1.find("key2").second << std::endl;
    std::cout << "Value for key 3: " << MyHashTable1.find("key3").second << std::endl;

    MyHashTable1.remove(obj2);

    try {
        std::cout << "Value for key 15 after removal: " << MyHashTable1.find("key2").second << std::endl;

    }
    catch (const std::out_of_range) {
        std::cout << "Caught and Exception, code works as intendent." << std::endl;
    }

    
    CHashTableMix<std::pair<std::string, int>> MyHashTable2(20);

    // ��������� ��������� ���������
    std::pair<std::string, int> obj4("apple", 5);
    std::pair<std::string, int> obj5("banana", 3);
    std::pair<std::string, int> obj6("orange", 7);
    MyHashTable2.insert(obj4);
    MyHashTable2.insert(obj5);
    MyHashTable2.insert(obj6);

    // �������� �������� �� �����
    std::pair<std::string, int> value = MyHashTable2.find("banana");
    std::cout << "Value of banana is " << value.second << std::endl;

    // ������� ������� �� �����
    MyHashTable2.remove(std::make_pair(std::string("orange"), 0));

    // ���������, ���� �� ������� � �������
    if (MyHashTable2.contains(std::make_pair(std::string("orange"), 0))) {
        std::cout << "Orange is in the table" << std::endl;
    }
    else {
        std::cout << "Orange is not in the table" << std::endl;
    }
    
    return 0;
}
