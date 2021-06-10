#include <iostream>
#include <cstdio>
#include <cinttypes>


template <typename T>
class Buff{
    uint8_t m_pos;
    uint8_t m_size;
    T* m_values;

    public:
        Buff(int size): m_pos(0), m_size(size), m_values(NULL) {
            if(size < 256) {
                m_values = new T[size];
            }
            else {
                std::cout << "255 or less" << std::endl;
            }
        }
        ~Buff() {
            delete [] m_values;
        }
        void add(T value) {
            m_values[m_pos++] = value;

            if(m_pos == m_size) {
                m_pos=0;
            }
        }

        void print() {
            for(uint8_t i=0; i<m_pos; i++) {
                std::cout << m_values[i];
                if(i!=m_pos-1)
                    std::cout << " - ";
            }
        }
};

int main()
{
    Buff<int> b(20);

    b.add(5);
    b.add(10);
    b.print();
    return 0;
}

