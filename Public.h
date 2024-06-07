/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_ln8000,
    0x4680df8d,0xcf10,0x4b85,0x8f,0xe7,0xcb,0x0a,0x02,0x79,0x3a,0x4a);
// {4680df8d-cf10-4b85-8fe7-cb0a02793a4a}
