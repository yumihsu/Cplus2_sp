// test1.cpp : ���ɮץ]�t 'main' �禡�C�{���|��ӳB�}�l����ε�������C
//

#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int main()
{
    //int target;
    //cout << "�п�J�Ʀr" << endl;
    //cin >> target;
    //for (int start = 2; start <= sqrt(target); start += (start == 2 ? 1 : 2) ){
    //    if (target % start==0) {
    //        cout<<target<<"���O���"<<endl;
    //        break;
    //    }
    //    else
    //    {
    //        cout << target << "�O���" << endl;
    //    }
    //};
    int scope;
    cout << "�п�J�d��" << endl;
    cin >> scope;

    for (int target = 1; target <= scope; target++) {
        bool answer = true;
        for (int start = 2; start <= sqrt(target); start += (start == 2 ? 1 : 2)) {
            if (target % start == 0) {
                answer = false;
                continue;
            }
        }
        if (answer == true) {
            cout << target << "\t";
        }
    }
};

// ����{��: Ctrl + F5 �� [����] > [�Ұʦ�������] �\���
// �����{��: F5 �� [����] > [�Ұʰ���] �\���

// �}�l�ϥΪ�����: 
//   1. �ϥ� [����`��] �����A�s�W/�޲z�ɮ�
//   2. �ϥ� [Team Explorer] �����A�s�u���l�ɱ���
//   3. �ϥ� [��X] �����A�Ѿ\�իؿ�X�P��L�T��
//   4. �ϥ� [���~�M��] �����A�˵����~
//   5. �e�� [�M��] > [�s�W����]�A�إ߷s���{���X�ɮסA�άO�e�� [�M��] > [�s�W�{������]�A�N�{���{���X�ɮ׷s�W�ܱM��
//   6. ����n�A���}�Ҧ��M�׮ɡA�Ыe�� [�ɮ�] > [�}��] > [�M��]�A�M���� .sln �ɮ�
