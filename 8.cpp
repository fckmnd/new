/*
1.

pOne — вказівник на ціле число. не ініціалізований.
vTwo — це ціле число, не ініціалізоване.
pThree — вказівник на ціле число, ініціалізований адресою змінної vTwo (& бере адресу змінної vTwo і присвоює її pThree)


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

потрібно ініціалізувати змінну інт і вже потім ініцілізувати вказівник
    int myInt;
    int *pInt = &myInt;  
    *pInt = 9;           
    cout << "The value at pInt: " << *pInt << endl;


6.

 в прикладі програми ми вказівнику присвоюємо числове значення.
 щоб було правильно то значення повинно бути присвоєно змінній - а вказівник повинен вказувати на змінну

 */





















