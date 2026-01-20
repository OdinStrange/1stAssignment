#include <iostream>
using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion) 
{
    *p_HPPotion = count;
    *p_MPPotion = count;

}

int main()
{
    const int SIZE = 8;//변경 불가로 만드는 게 const라고 알고 있는데 왜 상수를 만드는 키워드가 되는 걸까요?
    int stat[SIZE] = { 0 };

    while (1) 
    {
        cout << "HP와 MP를 입력해주세요: ";
        cin >> stat[0] >> stat[1];

        if (stat[0] > 50 && stat[1] > 50) 
        {
            break;
        }
        cout << "HP나 MP의 값이 너무 작습니다. 다시 입력해주세요." << endl;
    }

    while (1) {
        cout << "공격력과 방어력, 힘, 민첩, 지능, 운을 입력해주세요: ";
        cin >> stat[2] >> stat[3] >> stat[4] >> stat[5] >> stat[6] >> stat[7];

        if (stat[2] > 0 && stat[3] > 0 && stat[4] > 0 && stat[5] > 0 && stat[6] > 0 && stat[7] > 0) {
            break;
        }
        cout << "공격력이나 방어력, 힘, 민첩, 지능, 운의 값이 너무 작습니다. 다시 입력해주세요." << endl;
    }

    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;
    int Level = 1;

    setPotion(5, &HPPotion, &MPPotion);

    cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl;
    cout << "=============================================" << endl;
    cout << "<스탯 관리 시스템>" << endl;
    // ... (메뉴 출력)

    while (1) {
        cout << "번호를 선택해주세요: 1. HP UP 2. MP UP 3. 공격력 UP 4. 방어력 UP 5. 힘 6. 민첩 7. 지능 8. 운 9. 현재 능력치 10. Level Up 0. 나가기" << endl;
        cin >> choice;

        if (choice == 0) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        switch (choice)
        {
        case 1:
            if (HPPotion <= 0) 
            {
                cout << "포션이 부족합니다." << endl;
                continue;
            }
            stat[0] += 20;
            HPPotion--;
            cout << "* HP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 HP: " << stat[0] << endl;
            cout << "남은 포션 수: " << HPPotion << endl;
            break;
        case 2:
            if (MPPotion <= 0) {
                cout << "포션이 부족합니다." << endl;
                continue;
            }
            stat[1] += 20;
            MPPotion--;
            cout << "* MP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 MP: " << stat[1] << endl;
            cout << "남은 포션 수: " << MPPotion << endl;
            break;
        case 3:
            stat[2] += stat[2];
            cout << "* 공격력이 2배로 증가되었습니다." << endl;
            cout << "현재 공격력: " << stat[2] << endl;
            break;
        case 4:
            stat[3] += stat[3];
            cout << "* 방어력이 2배로 증가되었습니다." << endl;
            cout << "현재 방어력: " << stat[3] << endl;
            break;
        case 5:
            stat[4] += stat[4];
            cout << "* 힘이 2배로 증가되었습니다." << endl;
            cout << "현재 힘: " << stat[4] << endl;
            break;
        case 6:
            stat[5] += stat[5];
            cout << "* 민첩이 2배로 증가되었습니다." << endl;
            cout << "현재 민첩: " << stat[5] << endl;
            break;
        case 7:
            stat[6] += stat[6];
            cout << "* 지능이 2배로 증가되었습니다." << endl;
            cout << "현재 지능: " << stat[6] << endl;
            break;
        case 8:
            stat[7] += stat[7];
            cout << "* 운이 2배로 증가되었습니다." << endl;
            cout << "현재 운: " << stat[7] << endl;
            break;
        case 9:
            cout << "* 현재 능력치입니다" << endl;
            cout << "현재 능력치: " <<  endl;
            cout << "현재 HP: " << stat[0] << endl;
            cout << "현재 MP: " << stat[1] << endl;
            cout << "현재 공격력: " << stat[2] << endl;
            cout << "현재 방어력: " << stat[3] << endl;
            cout << "현재 힘: " << stat[4] << endl;
            cout << "현재 민첩: " << stat[5] << endl;
            cout << "현재 지능: " << stat[6] << endl;
            cout << "현재 운: " << stat[7] << endl;
            cout << "현재 레벨: " << Level << endl;
            cout << "현재 HP: " << stat[0] << endl;
            break;
        case 10:
            HPPotion++;
            MPPotion++;
            Level++;
            cout << "* 레벨이 1 증가하였습니다." << endl;
            cout << "현재 레벨: " << Level << "현재 포션 개수" << "HP포션:" << HPPotion << "MP포션:" << MPPotion << endl;
            break;
        default://잘 모릅니다
            cout << "다시 입력해주세요." << endl;
            break;
        }
    }
    return 0;
}