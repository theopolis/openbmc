#include "bic_fw.h"
#include "bic_bios.h"
#include "bic_me.h"
#include "bic_cpld.h"

// Register BIC FW and BL components
BicFwComponent bicfw1("slot1", "bic", 1);
BicFwBlComponent bicfwbl1("slot1", "bicbl", 1);

// Register the BIOS components
//BiosComponent bios1("slot1", "bios", 1);
//BiosComponent bios2("slot2", "bios", 2);
//BiosComponent bios3("slot3", "bios", 3);
//BiosComponent bios4("slot4", "bios", 4);

// Register the ME components
MeComponent me1("slot1", "me", 1);

// Register CPLD components
CpldComponent cpld1("slot1", "cpld", 1);
