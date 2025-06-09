#include <iostream>

using namespace std;

class Area {
    public :
        virtual void printArea(int r) {cout << 3.14 * r * r << endl;}; // ���� �Լ��� �����Ͽ�, �ڽ� Ŭ�������� ������ ����
};
class SmartArea : public Area {
    public :
        void printArea(int r) override {cout << 3.141592 * r * r << endl;}; /* ������(override)�� �Լ���,
                                                                               �θ� Ŭ������ printArea�� ��� */
};

int main() {
    Area *a = new SmartArea(); /* ��ĳ���� (�ڽ� �� �θ� �����ͷ� ��ȯ)
                                  �̷��� �ϸ� ���߿� ����(virtual)�Լ��� ����
                                  �θ� Ŭ������ �����ͷ� �ڽ� Ŭ������ �Լ��� ȣ���� �� ���� */

    a -> printArea(10); /* a�� Area*����, ���� ��ü�� SmartArea
                           printArea�� ���� �Լ��̹Ƿ�, �����δ� �ڽ� Ŭ����(SmartArea)�� printArea�� ȣ��� */
    a -> Area::printArea(10); /* ��������� �θ� Ŭ������ �Լ��� ȣ���ϰڴٴ� ��
                                 Area::printArea(10)�� SmartArea�� �����ǵ� �Լ��� �ƴ϶�,
                                 �θ��� Area�� printArea�� ȣ���մϴ�. */

    delete a;

    return 0;
}
