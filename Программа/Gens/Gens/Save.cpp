#include <iostream>
#include <fstream>

// ���������, �������������� ��������� ����
struct GameState {
    int level;
    int score;
    bool isPaused;
    // ������ ����������, ������������ ��������� ����
};

// �����, ���������� �� ���������� � �������������� ��������� ����
class SaveStateManager {
public:    
    static void saveState(const GameState& gameState, const std::string& fileName) {
        // ���������� �������� ��������� ���� � ����
    }    
    static GameState loadState(const std::string& fileName) {
        // �������������� ��������� ���� �� �����
    }
};