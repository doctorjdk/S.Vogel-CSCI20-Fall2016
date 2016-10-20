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
        double earthPounds;
        
};
//CONSTRUCTOR
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
    earthPounds = (pounds / accConstant) * EARTH_AG;
    return;
    }

double Weight::GetEarthWeight()  {
    return earthPounds; 
    }


//MARS
double Weight::GetMarsWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * MARS_AG;
    return userPounds;
    }


//JUPITER
double Weight::GetJupiterWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * JUPITER_AG;
    return userPounds;
    }


//MOON
double Weight::GetMoonWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * MOON_AG;
    return userPounds;
    }

    
//VENUS
double Weight::GetVenusWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * VENUS_AG;
    return userPounds;
    }


//URANUS
double Weight::GetUranusWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * URANUS_AG;
    return userPounds;
    }
    
    
//NEPTUNE
double Weight::GetNeptuneWeight() {
    userPounds = (GetEarthWeight() / EARTH_AG) * NEPTUNE_AG;
    return userPounds;
    }


//MERCURY
double Weight::GetMercuryWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * MERCURY_AG;
    return userPounds;
    }


//SATURN
double Weight::GetSaturnWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * SATURN_AG;
    return userPounds;
    }

    
//PLUTO
double Weight::GetPlutoWeight () {
    userPounds = (GetEarthWeight() / EARTH_AG) * PLUTO_AG;
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
    user1.SetEarthWeight(150, EARTH_AG);
    user1.Print();
    
}
