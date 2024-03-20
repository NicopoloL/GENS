/**
 * @brief Содержит объявление класса CheatCodeManager для управления чит-кодами в эмуляторе GENS v2.11.
 */

#include <iostream>
#include <string>
#include <map>

/**
 * @class CheatCodeManager
 * @brief Класс для управления чит-кодами и их эмуляцией.
 */
class CheatCodeManager {
private:
    std::map<std::string, bool> cheatCodes; /**< Отображение для хранения активных чит-кодов.*/

public:
    /**
     * @brief Добавляет чит-код в менеджер.
     * @param code Чит-код для добавления.
     */
    void addCheatCode(const std::string& code);

    /**
     * @brief Удаляет чит-код из менеджера.
     * @param code Чит-код для удаления.
     */
    void removeCheatCode(const std::string& code);

    /**
     * @brief Проверяет, активирован ли чит-код.
     * @param code Проверить чит-код.
     * @return True, если чит-код активирован, False в противном случае.
     */
    bool isCheatCodeActivated(const std::string& code);

    /**
     * @brief Активирует чит-код.
     * @param code Код чита для активации.
     */
    void activateCheatCode(const std::string& code);

    /**
     * @brief Отключает чит-код.
     * @param code Чит-код для деактивации.
     */
    void deactivateCheatCode(const std::string& code);
};
