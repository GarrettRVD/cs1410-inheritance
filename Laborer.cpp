//
// Created by GRees on 10/22/2017.
//

#include "Laborer.h"

void Foreman::setData()
{
    Laborer::setData();

    cout << "\nEnter quotas: ";
    cin >> quotas;
}

void Foreman::getData()
{
    Laborer::getData();

    cout << "\nQuotas: " << quotas;
}
