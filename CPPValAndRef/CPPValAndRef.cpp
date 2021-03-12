#include "pch.h"
#include <iostream>
#include "UnmanagedClass.h"
#include "ManagedReference.h"
#include "ManagedValue.h"

using namespace System;
using namespace std;

int main()
{
    //UnmanagedClass* uc = new UnmanagedClass ("Fred", 37);

    //cout << *uc << endl;

    //delete uc;

    //ManagedReference mr ("Wilma", 31);

    //Console::WriteLine(mr.ToString());

    ManagedValue mv("Barney", 33);

    Console::WriteLine(mv);

    ManagedValue^ mvp = mv;

    mvp->SetAge(50);

    ManagedValue unboxed = (ManagedValue)mvp;

    Console::WriteLine(mv);
    Console::WriteLine(mvp);
    Console::WriteLine(unboxed);

    return 0;
}
