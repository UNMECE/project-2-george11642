#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "Student.h"
#include <string>

class Art_Student : public Student {
private:
    std::string art_emphasis; // "Art Studio", "Art History", or "Art Education"

public:
    // Default constructor
    Art_Student();
    
    // Destructor
    virtual ~Art_Student();
    
    // Getter and Setter for art_emphasis
    std::string getArtEmphasis() const;
    void setArtEmphasis(const std::string& emphasis);
    
    // Override writeToFile to include art_emphasis
    virtual void writeToFile(std::ofstream& outfile) const override;
};

#endif // ART_STUDENT_H

