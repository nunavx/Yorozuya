// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_case_sendwebracebosssms
    {
        unsigned int dwWebSendDBID;
        char wszMsg[255];
        char szCharacterName[17];
        unsigned int dwCharactSerial;
        char byRace;
    public:
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_case_sendwebracebosssms, 284>(), "_qry_case_sendwebracebosssms");
END_ATF_NAMESPACE
