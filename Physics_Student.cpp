#include "Physics_Student.h"
#include <fstream>

// Default constructor
Physics_Student::Physics_Student() : Student(), concentration("Biophysics") {
}

// Destructor
Physics_Student::~Physics_Student() {
    // No additional dynamic memory to delete
}

// Getter for concentration
std::string Physics_Student::getConcentration() const {
    return concentration;
}

// Setter for concentration
void Physics_Student::setConcentration(const std::string& conc) {
    concentration = conc;
}

// Override writeToFile to include concentration
void Physics_Student::writeToFile(std::ofstream& outfile) const {
    Student::writeToFile(outfile);
    outfile << "Concentration: " << concentration << std::endl;
    outfile << "---" << std::endl;
}

