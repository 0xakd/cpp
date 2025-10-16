#include <iostream>
#include <string.h>

using namespace std;

class String
{
private:
    char *m_Data;
    uint32_t m_Size;

public:
    String() = default;
    String(const char *string)
    {
        printf("\n Created!");
        m_Size = strlen(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    };

    ~String()
    {
        delete m_Data;
    }
};


class Entity
{
private:
    String m_Name;
public:
    Entity(const String& name)
        :m_Name(name)
    {

    };
    
};

int main(int argc, char const *argv[])
{

    return 0;
}
