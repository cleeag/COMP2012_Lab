#include <iostream>
#include "Doctor.h"
#include "Patient_with_coronavirus.h"
#include "Patient_with_norovirus.h"
using namespace std;

int main()
{
    Doctor doctor1{"Simon"};
    Patient_with_coronavirus patient1{"Alice", 39, "Wuhan", "2019-nCoV", "Beta"};
    Patient_with_norovirus patient2{"Bob", 62, "Hawaii virus", "II"};

    Doctor doctor2{"Mary"};
    Patient_with_coronavirus patient4{"Lucy", 81, "Tokyo", "2019-nCoV", "Beta"};
    Patient_with_norovirus patient3{"Jack", 27, "Southampton virus", "I"};

    doctor1.responsible_for(&patient1);
    doctor1.responsible_for(&patient2);
    doctor2.responsible_for(&patient3);
    doctor2.responsible_for(&patient4);

    doctor1.print_patient_name_list();

    patient1.print_travel_history();
    patient1.print_virus_info();

    patient2.print_virus_info();

    doctor2.print_patient_name_list();
    patient3.print_virus_info();
    patient4.print_travel_history();
    patient4.print_virus_info();

    return 0;
}