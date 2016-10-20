#include <iostream>
#include <string>
using namespace std;

double LB_KILO = 2.20462;
double EARTH_AG = 9.807;
double MARS_AG = 3.711;
double JUPITER_AG = 24.79;
double MOON_AG = 1.622;
double VENUS_AG = 8.87;
double URANUS_AG = 8.69;
double NEPTUNE_AG = 11.15;
double MERCURY_AG = 3.7;
double SATURN_AG = 10.44;
double PLUTO_AG = 0.62;

class Weight {
    public: 
        
        void SetEarthWeight(double pounds, double accConstant);
        void SetMarsWeight(double pounds);
        void SetJupiterWeight(double pounds);
        void SetMoonWeight(double pounds);
        void SetVenusWeight(double pounds);
        void SetUranusWeight(double pounds);
        void SetNeptuneWeight(double pounds);
        void SetMercuryWeight(double pounds);
        void SetSaturnWeight(double pounds);
        void SetPlutoWeight(double pounds);
        
        
        double GetEarthWeight();
        double GetMarsWeight();
        double GetJupiterWeight();
        double GetMoonWeight();
        double GetVenusWeight();
        double GetUranusWeight();
        double GetNeptuneWeight();
        double GetMercuryWeight();
        double GetSaturnWeight();
        double GetPlutoWeight();
        
        void Print();
        
        Weight();
        Weight(double pounds, double accConstant);
       
    private:  
        double userAcc;
        double userPounds;
        
};
//CONSTRUCTORS
Weight::Weight() {
    userPounds = 0.0;
    userAcc = 1.0;
    return;
    }

Weight::Weight(double pounds, double accConstant) {
    userPounds = pounds;
    userAcc = accConstant;
    return;
    }


//EARTH 
void Weight::SetEarthWeight(double pounds, double accConstant) {
    userPounds = (pounds / accConstant) * EARTH_AG;
    return;
    }

double Weight::GetEarthWeight()  {
    return userPounds; 
    }


//MARS
void Weight::SetMarsWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * MARS_AG;
    return;
    }

double Weight::GetMarsWeight() {
    return userPounds;
    }
    

//JUPITER
void Weight::SetJupiterWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * JUPITER_AG;
    return;
    }

double Weight::GetJupiterWeight() {
    return userPounds;
    }
    

//MOON
void Weight::SetMoonWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * MOON_AG;
    return;
    }

double Weight::GetMoonWeight() {
    return userPounds;
    }
    
//VENUS
void Weight::SetVenusWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * VENUS_AG;
    return;
    }

double Weight::GetVenusWeight() {
    return userPounds;
    }

//URANUS
void Weight::SetUranusWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * URANUS_AG;
    return;
    }
    
double Weight::GetUranusWeight() {
    return userPounds;
    }
    
//NEPTUNE
void Weight::SetNeptuneWeight(double userPounds) {
    userPounds = (userPounds / EARTH_AG) * NEPTUNE_AG;
    return;
    }

double Weight::GetNeptuneWeight() {
    return userPounds;
    }

//MERCURY
void Weight::SetMercuryWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * MERCURY_AG;
    return;
    }

double Weight::GetMercuryWeight() {
    return userPounds;
    }

//SATURN
void Weight::SetSaturnWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * SATURN_AG;
    return;
    }

double Weight::GetSaturnWeight() {
    return userPounds;
    }
    
//PLUTO
void Weight::SetPlutoWeight (double userPounds) {
    userPounds = (userPounds / EARTH_AG) * PLUTO_AG;
    return;
    }

double Weight::GetPlutoWeight () {
    return userPounds;
    }


//PRINT
void Weight::Print() {
   
   cout << "Your weight on Earth: ";
   cout << GetEarthWeight() << " pounds." << endl; 
   
   cout << "Your weight on the Moon: ";
   cout << GetMoonWeight() << " pounds." << endl;
   
   cout << "Your weight on Mercury: ";
   cout << GetMercuryWeight() << " pounds." << endl;
   
   cout << "Your weight on Venus: ";
   cout << GetVenusWeight() << " pounds." << endl;
   
   cout << "Your weight on Mars: ";
   cout << GetMarsWeight() << " pounds." << endl;
   
   cout << "Your weight on Jupiter: ";
   cout << GetJupiterWeight() << " pounds...fatty." << endl;
   
   cout << "Your weight on Saturn: ";
   cout << GetSaturnWeight() << " pounds." << endl;
   
   cout << "Your weight on Uranus: ";
   cout << GetUranusWeight() << " pounds." << endl;
   
   cout << "Your weight on Neptune: ";
   cout << GetNeptuneWeight() << " pounds." << endl;
   
   cout << "Your weight on Pluto (which is still totally a planet duh): ";
   cout << GetPlutoWeight() << " pounds. Somebody needs a cheeseburger." << endl;
    
}




int main() {
    
    Weight user1;
    user1.SetEarthWeight(150, MARS_AG);
    user1.Print();
    
}
