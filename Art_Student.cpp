#include "Art_Student.h"
#include <fstream>

// Default constructor
Art_Student::Art_Student() : Student(), art_emphasis("Art Studio") {
}

// Destructor
Art_Student::~Art_Student() {
    // No additional dynamic memory to delete
}

// Getter for art_emphasis
std::string Art_Student::getArtEmphasis() const {
    return art_emphasis;
}

// Setter for art_emphasis
void Art_Student::setArtEmphasis(const std::string& emphasis) {
    art_emphasis = emphasis;
}

// Override writeToFile to include art_emphasis
void Art_Student::writeToFile(std::ofstream& outfile) const {
    Student::writeToFile(outfile);
    outfile << "Art Emphasis: " << art_emphasis << std::endl;
    outfile << "---" << std::endl;
}

