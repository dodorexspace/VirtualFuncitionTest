// VirtualFuncitionTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CDog.h"
#include "CMada.h"
#include "CCat.h"
#include <cassert>
#include "CEuglena.h"

int main()
{
    //CDog dog(99);



    //CDog* pDog = &dog;
    //CAnimal* pAni = &dog;

    //CAnimal aAnimal = dog; //slicing. and Maing real Animal.
    //CAnimal* pAnimal = &dog; // pAnimal RTTI = CDog
    //// pAnimal->AnyVirtual();   // CDog::AnyVirtual() is Running

    CEuglena ugl;

    CPlant* pPl;
    CAnimal* pAn;

    pPl = &ugl;
    pAn = &ugl;

    //ugl.Photosynthesis();
    //ugl.Move();

    pPl->Photosynthesis();
    pAn->Move();

    //ugl.CAnimal::nHelth = 1;
    //ugl.CPlant::nHelth;

 




    //CAnimal* pA = .....;

    //for ()
    //{
    //    pA->Breath();
    //    pA->Kick();



    //}
    //
    //CDog* p =  dynamic_cast<CDog*>(pAnimal);
    //if (p != nullptr)
    //{
    //    ((CDog*)pAnimal)->;
    //}

    //CCat* p = dynamic_cast<CCat*>(pAnimal);
    //if (p != nullptr)
    //{
    //    ((CDog*)pAnimal)->발끍기();
    //}





    //CDog* pDog2 = dynamic_cast<CDog*>(&aAnimal); //down casting
    //assert(pDog2 != nullptr);

    //CAnimal* pA = dynamic_cast<CCat*>(pAnimal);
    ////assert(pA != nullptr);




    //pDog2->Speak();
    //pDog->Speak();

    //pDog->OpenEye();

    //if (pDog->IsLiving() == true)
    //{
    //    cout << "CDog:: I am living now" << endl;
    //}

    //CMada theMada;

    //if (theMada.IsLiving() == true)
    //{
    //    cout << "CMada:: I am living now" << endl;
    //}

    
    //theMada.IsLiving();

    //if (pDog->IsLiving() == true)
    //{
    //    cout << "CDog:: I am living now" << endl;
    //}


    ////only animal's method
    //pDog->OpenEye();

    //// nomal method
    //pAni->KeepsHome();
    //pDog->KeepsHome();

    //pDog->Walk();

    //// virtual method
    //pAni->Speak();
    //pDog->Speak();


    //((CAnimal * )pDog)->Speak();
    //pDog->Speak();




    //pDog->KeepsHome();


    //pDog->Speak();
    //pDog->KeepsHome();



    cout << endl << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
