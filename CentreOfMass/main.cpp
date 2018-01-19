#include <iostream>
#include <cmath>
using namespace std;

// // 4_Exercises-SectionA_2/Exercise 7

int main() {
    float m_pi = 139.57;
    int p_lab = 500;
    float m_p = 938.27;
    float E_lab = sqrt(m_pi*m_pi + p_lab*p_lab);
    float E_cm = sqrt(m_pi*m_pi + m_p*m_p + 2*m_p*E_lab);
    float P_cm = (p_lab*m_p)/E_cm;
    cout << " Centre of mass energy = "<< E_cm <<" Mev"<<endl;
    cout << " Momentum is = " << P_cm << " Mev"<<endl;
    return 0;
}
