#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    float price;
    string color;

    Car(string brand, string model, int year, float price, string color) {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
        this->color = color;
    }

    void Output() {
        cout << "Бренд: " << this->brand << endl;
        cout << "Модель: " << this->model << endl;
        cout << "Год выпуска: " << this->year << endl;
        cout << "Цена: " << this->price << endl;
        cout << "Цвет: " << this->color << endl;
    }
};

int main() {
    setlocale(LC_ALL, "");

    Car* toyota = new Car("Toyota", "Camry", 2023, 24999.9, "Чёрный");
    toyota->Output();

    return 0;
}