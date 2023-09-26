#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int mileage;
    int value;

public:
    Car() : brand("Fiat"), mileage(100), value(20000) {}
    

    Car(const Car& other)
        : brand(other.brand), mileage(other.mileage), value(other.value) {}
    
   
    Car& operator=(const Car& other) {
        if (this != &other) {
            mileage = other.mileage;
            value = other.value;
        }
        return *this;
    }


    bool operator==(const Car& other) const {
        return brand == other.brand;
    }

  
    Car operator-(int miles) const {
        Car result(*this);
        result.mileage -= miles;
        return result;
    }

    //check brand and mileage
    std::string getBrand() const {
        return brand;
    }

    int getMileage() const {
        return mileage;
    }

    
    friend std::istream& operator>>(std::istream& in, Car& car);
    friend std::ostream& operator<<(std::ostream& out, const Car& car);

    
    // Operator (+)
    Car operator+(const Car& other) const {
        Car result;
    
        // Znajdź brand o wyższej wartości
        if (value > other.value) {
            result.brand = brand;
        } else {
            result.brand = other.brand;
        }
    
        // Średnia + 20 procent
        result.value = static_cast<int>(((value + other.value)*0.5)* 1.2);
    
        // Niższy przebieg - 30%
        result.mileage = static_cast<int>(std::min(mileage, other.mileage) * 0.7);
    
        return result;
    }


    
    void operator+=(const Car& other) {
        if (value < other.value) {
            value += 10000;
        }
    }
};


std::istream& operator>>(std::istream& in, Car& car) {
    std::cout << "Enter car brand: ";
    in >> car.brand;
    std::cout << "Enter car mileage: ";
    in >> car.mileage;
    std::cout << "Enter car value: ";
    in >> car.value;
    return in;
}


std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Brand: " << car.brand << ", Mileage: " << car.mileage << " thousand, Value: PLN " << car.value;
    return out;
}

int main() {
    // Tests
    Car car1;
    Car car2;

    std::cin >> car2;

    std::cout << "Car 1: " << car1 << std::endl;
    std::cout << "Car 2: " << car2 << std::endl;

    Car combinedCar = car1 + car2;
    std::cout << "Combined Car (car1 + car2): " << combinedCar << std::endl;

    car1 += car2;
    std::cout << "Car 1 after enriching with Car 2: " << car1 << std::endl;

    return 0;
}
