#include <iostream>
using namespace std;

class TemperatureConverter {
    public:
        
        void SetTempFromKelvin (double input);
        void SetTempFromCelsius (double input);
        void SetTempFromFahrenheit (double input);
        
        double GetTempFromKelvin();
        double GetTempAsCelsius();
        double GetTempAsFahrenheit();
        
        TemperatureConverter();
        TemperatureConverter(double input);
        
        void PrintTemperatures();
    
    private: 
        double degKelvin;
        double degCelsius;
        double degFahrenheit;

};

TemperatureConverter::TemperatureConverter() {
    degKelvin = 0.0;
    return;
}

TemperatureConverter::TemperatureConverter(double input) {
    degKelvin = input;
    return;
}



void TemperatureConverter::SetTempFromKelvin(double input) {
    degKelvin = input;
    return;
}

void TemperatureConverter::SetTempFromCelsius(double input) {
    degKelvin = input + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double input) {
    degKelvin = (5*(input - 32) / 9) + 273.15;
    return;
}



double TemperatureConverter::GetTempFromKelvin() {
    return degKelvin;    
}

double TemperatureConverter::GetTempAsCelsius() {
    GetTempFromKelvin();
    degCelsius = degKelvin - 273.15;
    return degCelsius;
}

double TemperatureConverter::GetTempAsFahrenheit() {
    GetTempAsCelsius();
    degFahrenheit = (degCelsius * 9) / 5 + 32; 
    return degFahrenheit;
}



void TemperatureConverter::PrintTemperatures() {

    cout << "Kelvin: " << GetTempFromKelvin() << endl;
    cout << "Celsius: " << GetTempAsCelsius() << endl;
    cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl << endl << endl;
    return;
}




