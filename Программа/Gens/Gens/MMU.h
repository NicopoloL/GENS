#include <iostream>
#include <vector>
/**
 * @brief Структура MemoryBlock для хранения данных и информации о доступности для записи.
 */
struct MemoryBlock {
    std::vector<uint8_t> data; ///< Вектор данных
    bool readOnly; ///< Флаг доступности только для чтения
};

/**
 * @brief Класс MMU (Memory Management Unit) для управления памятью Sega Genesis.
 */
class MMU {
private:
    std::vector<MemoryBlock> memory; ///< Вектор блоков памяти

public:
    /**
     * @brief Конструктор класса MMU. Инициализирует память Sega Genesis.
     */
    MMU() {
        // Инициализация памяти Sega Genesis
        memory.resize(65536); // Общий объем памяти
        // Заполнение памяти данными
        // ...
        // Назначение регионов памяти как доступных только для чтения
        // ...
    }

    /**
     * @brief Метод для чтения байта из памяти по заданному адресу.
     * @param address Адрес, по которому происходит чтение.
     * @return Прочитанный байт.
     */
    uint8_t readByte(uint32_t address) {
        // Чтение байта из памяти по адресу address
    }

    /**
     * @brief Метод для записи байта в память по заданному адресу.
     * @param address Адрес, по которому происходит запись.
     * @param value Значение байта для записи.
     */
    void writeByte(uint32_t address, uint8_t value) {
        // Запись байта value в память по адресу address
    }
};
