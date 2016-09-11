#include <iostream>
#include <string>
using namespace std;

struct MonsterStruct {
    string monsterName;
    string monsterHead;
    string monsterEyes;
    string monsterEars;
    string monsterNose;
    string monsterMouth;
    }
    OneMonster, TwoMonster, ThreeMonster, userMonster;
    
int main () {
    
    MonsterStruct OneMonster;
    
    OneMonster.monsterName = "OneMonster";
    OneMonster.monsterHead = "Zombus";
    OneMonster.monsterEyes = "Spiritem";
    OneMonster.monsterEars = "Vegitas";
    OneMonster.monsterNose = "None";
    OneMonster.monsterMouth = "Wackus";
    
    cout << OneMonster.monsterName << ": ";
    cout << OneMonster.monsterHead << ", ";
    cout << OneMonster.monsterEyes << ", ";
    cout << OneMonster.monsterEars << ", ";
    cout << OneMonster.monsterNose << ", ";
    cout << OneMonster.monsterMouth;
    cout << endl << endl; 
    
    
    
    MonsterStruct TwoMonster;
    
    TwoMonster = OneMonster;
    TwoMonster.monsterName = "TwoMonster";
    
    cout << TwoMonster.monsterName << ": ";
    cout << TwoMonster.monsterHead << ", ";
    cout << TwoMonster.monsterEyes << ", ";
    cout << TwoMonster.monsterEars << ", ";
    cout << TwoMonster.monsterNose << ", ";
    cout << TwoMonster.monsterMouth;
    cout << endl << endl;
    
    
    
    MonsterStruct ThreeMonster; 
    
    ThreeMonster.monsterName = "Loretta";
    ThreeMonster.monsterHead = TwoMonster.monsterEyes;
    ThreeMonster.monsterEyes = OneMonster.monsterEars;
    ThreeMonster.monsterEars = TwoMonster.monsterMouth;
    ThreeMonster.monsterNose = OneMonster.monsterHead;
    ThreeMonster.monsterMouth = OneMonster.monsterEyes;
    
    cout << ThreeMonster.monsterName << ": ";
    cout << ThreeMonster.monsterHead << ", ";
    cout << ThreeMonster.monsterEyes << ", ";
    cout << ThreeMonster.monsterEars << ", ";
    cout << ThreeMonster.monsterNose << ", ";
    cout << ThreeMonster.monsterMouth;
    cout << endl << endl;
    
    
    
    
    MonsterStruct userMonster;
    
    cout << "Monster Name: ";
    getline (cin, userMonster.monsterName);
    cout << "Head: ";
    cin >> userMonster.monsterHead;
    cout << "Eyes: ";
    cin >> userMonster.monsterEyes;
    cout << "Ears: ";
    cin >> userMonster.monsterEars; 
    cout << "Nose: ";
    cin >> userMonster.monsterNose;
    cout << "Mouth: ";
    cin >> userMonster.monsterMouth;
    
    
    
    
}    


