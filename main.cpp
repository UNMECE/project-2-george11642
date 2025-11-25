#include <iostream>
#include <vector>
#include <fstream>
#include "Art_Student.h"
#include "Physics_Student.h"

int main() {
    // Create vector for Art_Student pointers
    std::vector<Art_Student*> art_students;
    
    // Create 5 Art_Student objects and store them in the vector
    art_students.push_back(new Art_Student);
    art_students[0]->setName("Alice", "Smith");
    art_students[0]->setGPA("3.9");
    art_students[0]->setDegreeLevel("Undergraduate");
    art_students[0]->setEnrolledYear(2021);
    art_students[0]->setEnrolledSemester("Fall");
    art_students[0]->setGraduationYear(2025);
    art_students[0]->setGraduationSemester("Spring");
    art_students[0]->setArtEmphasis("Art Studio");
    
    art_students.push_back(new Art_Student);
    art_students[1]->setName("Bob", "Johnson");
    art_students[1]->setGPA(3.7);
    art_students[1]->setDegreeLevel("Graduate");
    art_students[1]->setEnrolledYear(2023);
    art_students[1]->setEnrolledSemester("Spring");
    art_students[1]->setGraduationYear(2025);
    art_students[1]->setGraduationSemester("Fall");
    art_students[1]->setArtEmphasis("Art History");
    
    art_students.push_back(new Art_Student);
    art_students[2]->setName("Carol", "Williams");
    art_students[2]->setGPA("3.8");
    art_students[2]->setDegreeLevel("Undergraduate");
    art_students[2]->setEnrolledYear(2022);
    art_students[2]->setEnrolledSemester("Fall");
    art_students[2]->setGraduationYear(2026);
    art_students[2]->setGraduationSemester("Spring");
    art_students[2]->setArtEmphasis("Art Education");
    
    art_students.push_back(new Art_Student);
    art_students[3]->setName("David", "Brown");
    art_students[3]->setGPA(3.5);
    art_students[3]->setDegreeLevel("Undergraduate");
    art_students[3]->setEnrolledYear(2020);
    art_students[3]->setEnrolledSemester("Fall");
    art_students[3]->setGraduationYear(2024);
    art_students[3]->setGraduationSemester("Spring");
    art_students[3]->setArtEmphasis("Art Studio");
    
    art_students.push_back(new Art_Student);
    art_students[4]->setName("Eve", "Davis");
    art_students[4]->setGPA("4.0");
    art_students[4]->setDegreeLevel("Graduate");
    art_students[4]->setEnrolledYear(2024);
    art_students[4]->setEnrolledSemester("Spring");
    art_students[4]->setGraduationYear(2026);
    art_students[4]->setGraduationSemester("Spring");
    art_students[4]->setArtEmphasis("Art History");
    
    // Create vector for Physics_Student pointers
    std::vector<Physics_Student*> physics_students;
    
    // Create 5 Physics_Student objects and store them in the vector
    physics_students.push_back(new Physics_Student);
    physics_students[0]->setName("Frank", "Miller");
    physics_students[0]->setGPA("3.8");
    physics_students[0]->setDegreeLevel("Undergraduate");
    physics_students[0]->setEnrolledYear(2021);
    physics_students[0]->setEnrolledSemester("Fall");
    physics_students[0]->setGraduationYear(2025);
    physics_students[0]->setGraduationSemester("Spring");
    physics_students[0]->setConcentration("Biophysics");
    
    physics_students.push_back(new Physics_Student);
    physics_students[1]->setName("Grace", "Wilson");
    physics_students[1]->setGPA(3.9);
    physics_students[1]->setDegreeLevel("Graduate");
    physics_students[1]->setEnrolledYear(2023);
    physics_students[1]->setEnrolledSemester("Fall");
    physics_students[1]->setGraduationYear(2025);
    physics_students[1]->setGraduationSemester("Fall");
    physics_students[1]->setConcentration("Earth and Planetary Sciences");
    
    physics_students.push_back(new Physics_Student);
    physics_students[2]->setName("Henry", "Moore");
    physics_students[2]->setGPA("3.6");
    physics_students[2]->setDegreeLevel("Undergraduate");
    physics_students[2]->setEnrolledYear(2022);
    physics_students[2]->setEnrolledSemester("Spring");
    physics_students[2]->setGraduationYear(2026);
    physics_students[2]->setGraduationSemester("Spring");
    physics_students[2]->setConcentration("Biophysics");
    
    physics_students.push_back(new Physics_Student);
    physics_students[3]->setName("Iris", "Taylor");
    physics_students[3]->setGPA(3.7);
    physics_students[3]->setDegreeLevel("Graduate");
    physics_students[3]->setEnrolledYear(2024);
    physics_students[3]->setEnrolledSemester("Spring");
    physics_students[3]->setGraduationYear(2026);
    physics_students[3]->setGraduationSemester("Spring");
    physics_students[3]->setConcentration("Earth and Planetary Sciences");
    
    physics_students.push_back(new Physics_Student);
    physics_students[4]->setName("Jack", "Anderson");
    physics_students[4]->setGPA("3.85");
    physics_students[4]->setDegreeLevel("Undergraduate");
    physics_students[4]->setEnrolledYear(2020);
    physics_students[4]->setEnrolledSemester("Fall");
    physics_students[4]->setGraduationYear(2024);
    physics_students[4]->setGraduationSemester("Spring");
    physics_students[4]->setConcentration("Biophysics");
    
    // Open file for writing
    std::ofstream outfile("student_info.dat", std::ios::out);
    
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not open file student_info.dat for writing." << std::endl;
        return 1;
    }
    
    // Write Art_Student information
    outfile << "=== ART STUDENTS ===" << std::endl;
    for (int i = 0; i < art_students.size(); i++) {
        art_students[i]->writeToFile(outfile);
    }
    
    // Write Physics_Student information
    outfile << std::endl << "=== PHYSICS STUDENTS ===" << std::endl;
    for (int i = 0; i < physics_students.size(); i++) {
        physics_students[i]->writeToFile(outfile);
    }
    
    // Close the file
    outfile.close();
    
    // Clean up dynamically allocated memory
    for (int i = 0; i < art_students.size(); i++) {
        delete art_students[i];
    }
    
    for (int i = 0; i < physics_students.size(); i++) {
        delete physics_students[i];
    }
    
    std::cout << "Student information has been written to student_info.dat" << std::endl;
    
    return 0;
}

