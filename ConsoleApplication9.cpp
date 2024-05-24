/*
«ј¬ƒјЌЌя 1

#include <iostream>

int main() {
    int a = 10;
    int& ref = a;
    int* ptr = &a;
       return 0;
}


«ј¬ƒјЌЌя 2

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

ми оголосили константу €к 6 ≥ намагаЇмось ≥њ зм≥нити - що не в≥рно
адресу зм≥нноњ також ми не можемо зм≥нити

«ј¬ƒјЌЌя 3

21 ≥ 23 р€дки  комп≥л€тор показав €к помилки


«ј¬ƒјЌЌя 4

int* ptr = new int(1);
delete ptr;

п≥сл€ видаленн€ вказ≥вника в≥н становитьс€ блукаючим

«ј¬ƒјЌЌя 5

int* ptr = new int(1);
delete ptr;
ptr = nullptr;

«ј¬ƒјЌЌя 6

void memoryLeak() {
int* leak = new int(1);

    std::cout << "Value: " << *leak << std::endl;
}
int main() {
    for (int i = 0; i < 100; ++i) {
        memoryLeak();
    }

«ј¬ƒјЌЌя 7


п≥сл€ р€дку 53 треба додати delete leak щоб уникнути витоку пам€т≥



«ј¬ƒјЌЌя 8

комп≥л€тор не визначив помилок, але наск≥льки € зрозум≥ла тут Ї проблема з вит≥ком пам€т≥
треба зв≥льн€ти пам€ть п≥сл€ використанн€ обьЇкт≥в

€кщо можна буде розг€лунти цю вправу б≥льш детально на уроц≥, будь ласка

*/
