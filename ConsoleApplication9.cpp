/*
�������� 1

#include <iostream>

int main() {
    int a = 10;
    int& ref = a;
    int* ptr = &a;
       return 0;
}


�������� 2

#include <iostream>
int main() {
    int varOne = 6;
    const int* const ptr = &varOne;
    std::cout << "How much is varOne: " << varOne << std::endl;
    *ptr = 7; 
    int varTwo = 0;
     ptr = &varTwo;
    return 0;
}

�� ��������� ��������� �� 6 � ���������� �� ������ - �� �� ����
������ ����� ����� �� �� ������ ������

�������� 3

21 � 23 �����  ��������� ������� �� �������


�������� 4

int* ptr = new int(1);
delete ptr;

���� ��������� ��������� �� ����������� ���������

�������� 5

int* ptr = new int(1);
delete ptr;
ptr = nullptr;

�������� 6

void memoryLeak() {
int* leak = new int(1);

    std::cout << "Value: " << *leak << std::endl;
}
int main() {
    for (int i = 0; i < 100; ++i) {
        memoryLeak();
    }

�������� 7


���� ����� 53 ����� ������ delete leak ��� �������� ������ �����



�������� 8

��������� �� �������� �������, ��� �������� � �������� ��� � �������� � ������ �����
����� �������� ������ ���� ������������ �������

���� ����� ���� ���������� �� ������ ���� �������� �� �����, ���� �����

*/
