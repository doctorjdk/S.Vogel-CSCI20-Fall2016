#include <iostream>
using namespace std;

class TemperatureConverter {
    public:
        
        void SetTempFromKelvin (double kelvin_);
        void SetTempFromCelsius (double celsius_);
        void SetTempFromFahrenheit (double fahrenheit_);
        
        double GetTempFromKelvin();
        double GetTempAsCelsius();
        double GetTempAsFahrenheit();
        
        TemperatureConverter();
        TemperatureConverter(double kelvin_);
        
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

TemperatureConverter::TemperatureConverter(double kelvin_) {
    degKelvin = kelvin_;
    return;
}



void TemperatureConverter::SetTempFromKelvin(double kelvin_) {
    degKelvin = kelvin_;
    return;
}

void TemperatureConverter::SetTempFromCelsius(double celsius_) {
    degKelvin = celsius_ + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit_) {
    degKelvin = (5*(fahrenheit_ - 32) / 9) + 273.15;
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
    degFahrenheit = ((degCelsius * 9) / 5) + 32; 
    return degFahrenheit;
}



void TemperatureConverter::PrintTemperatures() {
    GetTempFromKelvin();
    GetTempAsCelsius();
    GetTempAsFahrenheit();
    
    
    cout << "Kelvin: " << degKelvin << endl;
    cout << "Celsius: " << degCelsius << endl;
    cout << "Fahrenheit: " << degFahrenheit << endl << endl << endl;
    return;
}



