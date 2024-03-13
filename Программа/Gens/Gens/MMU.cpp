#include <iostream>
#include <vector>
struct MemoryBlock {
    std::vector<uint8_t> data;
    bool readOnly;
};
class MMU {
private:
    std::vector<MemoryBlock> memory;
public:
    MMU() {
        // ������������� ������ Sega Genesis
        memory.resize(65536); // ����� ����� ������
        // ���������� ������ �������
        // ...
        // ���������� �������� ������ ��� ��������� ������ ��� ������
        // ...
    }
    uint8_t readByte(uint32_t address) {
        // ������ ����� �� ������ �� ������ address
    }
    void writeByte(uint32_t address, uint8_t value) {
        // ������ ����� value � ������ �� ������ address
    }
};