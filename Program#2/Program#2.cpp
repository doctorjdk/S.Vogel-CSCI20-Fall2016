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
        void SetMarsWeight(double pounds, double accConstant);
        void SetJupiterWeight(double pounds, double accConstant);
        void SetMoonWeight(double pounds, double accConstant);
        void SetVenusWeight(double pounds, double accConstant);
        void SetUranusWeight(double pounds, double accConstant);
        void SetNeptuneWeight(double pounds, double accConstant);
        void SetMercuryWeight(double pounds, double accConstant);
        void SetSaturnWeight(double pounds, double accConstant);
        void SetPlutoWeight(double pounds, double accConstant);
        
        
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
        double accConstant;
        double userAcc;
        double pounds;
        double userPounds;
        double weightFeltEarth;
        double weightFeltMars;
        double weightFeltJupiter;
        double weightFeltMoon;
        double weightFeltVenus;
        double weightFeltUranus;
        double weightFeltNeptune;
        double weightFeltMercury;
        double weightFeltSaturn;
        double weightFeltPluto;
        
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
    weightFeltEarth = (pounds / accConstant) * EARTH_AG;
    return;
    }

double Weight::GetEarthWeight()  {
    return weightFeltEarth; 
    }


//MARS
void Weight::SetMarsWeight (double pounds, double accConstant) {
    weightFeltMars = (pounds / accConstant) * MARS_AG;
    return;
    }

double Weight::GetMarsWeight() {
    return weightFeltMars;
    }
    

//JUPITER
void Weight::SetJupiterWeight (double pounds, double accConstant) {
    weightFeltJupiter = (pounds / accConstant) * JUPITER_AG;
    return;
    }

double Weight::GetJupiterWeight() {
    return weightFeltJupiter;
    }
    

//MOON
void Weight::SetMoonWeight (double pounds, double accConstant) {
    weightFeltMoon = (pounds / accConstant) * MOON_AG;
    return;
    }

double Weight::GetMoonWeight() {
    return weightFeltMoon;
    }
    
//VENUS
void Weight::SetVenusWeight (double pounds, double accConstant) {
    weightFeltVenus = (pounds / accConstant) * VENUS_AG;
    return;
    }

double Weight::GetVenusWeight() {
    return weightFeltVenus;
    }

//URANUS
void Weight::SetUranusWeight (double pounds, double accConstant) {
    weightFeltUranus = (pounds / accConstant) * URANUS_AG;
    return;
    }
    
double Weight::GetUranusWeight() {
    return weightFeltVenus;
    }
    
//NEPTUNE
void Weight::SetNeptuneWeight(double pounds, double accConstant) {
    weightFeltNeptune = (pounds / accConstant) * NEPTUNE_AG;
    return;
    }

double Weight::GetNeptuneWeight() {
    return weightFeltNeptune;
    }

//MERCURY
void Weight::SetMercuryWeight (double pounds, double accConstant) {
    weightFeltMercury = (pounds / accConstant) * MERCURY_AG;
    return;
    }

double Weight::GetMercuryWeight() {
    return weightFeltMercury;
    }

//SATURN
void Weight::SetSaturnWeight (double pounds, double accConstant) {
    weightFeltSaturn = (pounds / accConstant) * SATURN_AG;
    return;
    }

double Weight::GetSaturnWeight() {
    return weightFeltSaturn;
    }
    
//PLUTO
void Weight::SetPlutoWeight (double pounds, double accConstant) {
    weightFeltPluto = (pounds / accConstant) * PLUTO_AG;
    return;
    }

double Weight::GetPlutoWeight () {
    return weightFeltPluto;
    }


//PRINT
void Weight::Print() {
   
   cout << "Your weight on Earth: ";
   SetEarthWeight(userPounds, userAcc);
   cout << weightFeltEarth << " pounds." << endl; 
   
   cout << "Your weight on the Moon: ";
   SetMoonWeight(userPounds, userAcc);
   cout << weightFeltMoon << " pounds." << endl;
   
   cout << "Your weight on Mercury: ";
   SetMercuryWeight(userPounds, userAcc);
   cout << weightFeltMercury << " pounds." << endl;
   
   cout << "Your weight on Venus: ";
   SetVenusWeight(userPounds, userAcc);
   cout << weightFeltVenus << " pounds." << endl;
   
   cout << "Your weight on Mars: ";
   SetMarsWeight(userPounds, userAcc);
   cout << weightFeltMars << " pounds." << endl;
   
   cout << "Your weight on Jupiter: ";
   SetJupiterWeight(userPounds, userAcc);
   cout << weightFeltJupiter << " pounds...fatty." << endl;
   
   cout << "Your weight on Saturn: ";
   SetSaturnWeight(userPounds, userAcc);
   cout << weightFeltSaturn << " pounds." << endl;
   
   cout << "Your weight on Uranus: ";
   SetUranusWeight(userPounds, userAcc);
   cout << weightFeltUranus << " pounds." << endl;
   
   cout << "Your weight on Neptune: ";
   SetNeptuneWeight(userPounds, userAcc);
   cout << weightFeltNeptune << " pounds." << endl;
   
   cout << "Your weight on Pluto (which is still totally a planet duh): ";
   SetPlutoWeight(userPounds, userAcc);
   cout << weightFeltPluto << " pounds. Somebody needs a cheeseburger." << endl;
    
}




int main() {
    
    Weight user1(156, MOON_AG); 
    user1.Print();
    
}
