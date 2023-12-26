#include <iostream>
#include <map>
#include "Experience.hpp"
using namespace std;

//empty

void checkIfGraduatedHS(bool &graduatedHS, int& hsGPA );
void checkIfInCollege(bool &inCollege, int &collegeGPA);
void checkIfGraduatedCollege(bool& graduatedCollege, int& collegeGPA);


int main() {
    bool inCollege = false;
    bool graduatedCollege = false;
    bool graduatedHS = false;
    bool relevantMajor = false;
    int hsGPA = false;
    int collegeGPA = false;
    std::string order[3];

    std::vector<Experience> relevant;
    std::vector<Experience> irrelevant;


    std::map<std::string, int> formatMap;


    checkIfGraduatedCollege(graduatedCollege, collegeGPA);
    if (!graduatedCollege) {
        checkIfInCollege(inCollege, collegeGPA);
        checkIfGraduatedHS(graduatedHS, hsGPA);
    }
}

void checkIfGraduatedCollege(bool& graduatedCollege, int& collegeGPA) {
    cin >> graduatedCollege;
    if (graduatedCollege) {
        cin >> collegeGPA;
    }
}

void checkIfInCollege(bool& inCollege, int& collegeGPA){
    cin >> inCollege;
    if (inCollege){
        cin >> collegeGPA;
    }
}

void checkIfGraduatedHS(bool &graduatedHS, int& hsGPA ){
    cin >> graduatedHS;
    if (graduatedHS)
        cin >> hsGPA;
}




