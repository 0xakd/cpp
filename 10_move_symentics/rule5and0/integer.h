#pragma once
class Integer
{
    int *m_pInt;

public:
    // Default constructor
    Integer();

    // Parameterised constructor
    Integer(int value);

    // Copy constructor
    Integer(const Integer &obj);

    // Move constructor
    Integer(Integer &&obj);

    // Copy Assignment
    Integer &operator=(const Integer &obj);

    // Move Assignment
    Integer &operator=(Integer &&obj);

    int GetValue() const;

    void SetValue(int value);

    ~Integer();
};
