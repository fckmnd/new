/*
1.

pOne � �������� �� ���� �����. �� �������������.
vTwo � �� ���� �����, �� ������������.
pThree � �������� �� ���� �����, ������������� ������� ����� vTwo (& ���� ������ ����� vTwo � �������� �� pThree)


2.

    unsigned short yourAge;
    unsigned short *pYourAge;
    pYourAge = &yourAge;



3.

    unsigned short yourAge;     
    unsigned short *pYourAge;    
    pYourAge = &yourAge;         
    *pYourAge = 50;

 
 4.

#include <iostream>
int main() {
    int myDogsWeight;       
    int *pmyDogsWeight;    

    pmyDogsWeight = &myDogsWeight;

    *myDogsWeight = 14;
    std::cout << "Weight of my dog is: " << myDogsWeight << std::endl;

    return 0;



5.

������� ������������ ����� ��� � ��� ���� ����������� ��������
    int myInt;
    int *pInt = &myInt;  
    *pInt = 9;           
    cout << "The value at pInt: " << *pInt << endl;


6.

 � ������� �������� �� ��������� ���������� ������� ��������.
 ��� ���� ��������� �� �������� ������� ���� �������� ����� - � �������� ������� ��������� �� �����

 */





















