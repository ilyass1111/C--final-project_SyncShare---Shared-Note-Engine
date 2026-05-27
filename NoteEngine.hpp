#ifndef NOTE_ENGINE_HPP
#define NOTE_ENGINE_HPP

#include <iostream>
#include <string>
#include <memory>
#include <vector>

// Base class
class BaseNote {
public:
    std::string title;
    std::string content;
    virtual ~BaseNote() = default;

    friend std::ostream& operator<<(std::ostream& os, const BaseNote& n) {
        return os << n.title << " : " << n.content;
    }
};

// Derived class (Inheritance requirement)
class SecureNote : public BaseNote {
public:
    std::string encryptionKey = "PROTECTED";
};

// Template function (Requirement)
template <typename T>
void logNoteAction(const T& note) {
    std::cout << "[LOG]: Processing note: " << note.title << std::endl;
}

#endif