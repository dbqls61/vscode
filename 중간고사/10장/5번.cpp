#include <iostream>

using namespace std;

class Area {
    public :
        virtual void printArea(int r) {cout << 3.14 * r * r << endl;}; // 가상 함수로 선언하여, 자식 클래스에서 재정의 가능
};
class SmartArea : public Area {
    public :
        void printArea(int r) override {cout << 3.141592 * r * r << endl;}; /* 재정의(override)된 함수로,
                                                                               부모 클래스의 printArea를 덮어씀 */
};

int main() {
    Area *a = new SmartArea(); /* 업캐스팅 (자식 → 부모 포인터로 변환)
                                  이렇게 하면 나중에 가상(virtual)함수를 통해
                                  부모 클래스의 포인터로 자식 클래스의 함수를 호출할 수 있음 */

    a -> printArea(10); /* a는 Area*지만, 실제 객체는 SmartArea
                           printArea는 가상 함수이므로, 실제로는 자식 클래스(SmartArea)의 printArea가 호출됨 */
    a -> Area::printArea(10); /* 명시적으로 부모 클래스의 함수를 호출하겠다는 뜻
                                 Area::printArea(10)는 SmartArea의 재정의된 함수가 아니라,
                                 부모인 Area의 printArea를 호출합니다. */

    delete a;

    return 0;
}
