// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRecordData_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CRecordDatactor_CRecordData2_ptr CRecordDatactor_CRecordData2_next(nullptr);
        static info::CRecordDatactor_CRecordData2_clbk CRecordDatactor_CRecordData2_user(nullptr);
        static info::CRecordDataFileSize4_ptr CRecordDataFileSize4_next(nullptr);
        static info::CRecordDataFileSize4_clbk CRecordDataFileSize4_user(nullptr);
        static info::CRecordDataGetRecord6_ptr CRecordDataGetRecord6_next(nullptr);
        static info::CRecordDataGetRecord6_clbk CRecordDataGetRecord6_user(nullptr);
        static info::CRecordDataGetRecord8_ptr CRecordDataGetRecord8_next(nullptr);
        static info::CRecordDataGetRecord8_clbk CRecordDataGetRecord8_user(nullptr);
        static info::CRecordDataGetRecord10_ptr CRecordDataGetRecord10_next(nullptr);
        static info::CRecordDataGetRecord10_clbk CRecordDataGetRecord10_user(nullptr);
        static info::CRecordDataGetRecordByHash12_ptr CRecordDataGetRecordByHash12_next(nullptr);
        static info::CRecordDataGetRecordByHash12_clbk CRecordDataGetRecordByHash12_user(nullptr);
        static info::CRecordDataGetRecordNum14_ptr CRecordDataGetRecordNum14_next(nullptr);
        static info::CRecordDataGetRecordNum14_clbk CRecordDataGetRecordNum14_user(nullptr);
        static info::CRecordDataIsTableOpen16_ptr CRecordDataIsTableOpen16_next(nullptr);
        static info::CRecordDataIsTableOpen16_clbk CRecordDataIsTableOpen16_user(nullptr);
        static info::CRecordDataLoadRecordData18_ptr CRecordDataLoadRecordData18_next(nullptr);
        static info::CRecordDataLoadRecordData18_clbk CRecordDataLoadRecordData18_user(nullptr);
        static info::CRecordDataLoadRecordHeader20_ptr CRecordDataLoadRecordHeader20_next(nullptr);
        static info::CRecordDataLoadRecordHeader20_clbk CRecordDataLoadRecordHeader20_user(nullptr);
        static info::CRecordDataMakeHash22_ptr CRecordDataMakeHash22_next(nullptr);
        static info::CRecordDataMakeHash22_clbk CRecordDataMakeHash22_user(nullptr);
        static info::CRecordDataMakeHashTable24_ptr CRecordDataMakeHashTable24_next(nullptr);
        static info::CRecordDataMakeHashTable24_clbk CRecordDataMakeHashTable24_user(nullptr);
        static info::CRecordDataReadRecord26_ptr CRecordDataReadRecord26_next(nullptr);
        static info::CRecordDataReadRecord26_clbk CRecordDataReadRecord26_user(nullptr);
        static info::CRecordDataReadRecord_Ex28_ptr CRecordDataReadRecord_Ex28_next(nullptr);
        static info::CRecordDataReadRecord_Ex28_clbk CRecordDataReadRecord_Ex28_user(nullptr);
        static info::CRecordDatadtor_CRecordData34_ptr CRecordDatadtor_CRecordData34_next(nullptr);
        static info::CRecordDatadtor_CRecordData34_clbk CRecordDatadtor_CRecordData34_user(nullptr);
        
        static void CRecordDatactor_CRecordData2_wrapper(struct CRecordData* _this)
        {
           CRecordDatactor_CRecordData2_user(_this, CRecordDatactor_CRecordData2_next);
        };
        static unsigned int CRecordDataFileSize4_wrapper(struct CRecordData* _this, char* szFile)
        {
           return CRecordDataFileSize4_user(_this, szFile, CRecordDataFileSize4_next);
        };
        static struct _base_fld* CRecordDataGetRecord6_wrapper(struct CRecordData* _this, char* szRecordCode)
        {
           return CRecordDataGetRecord6_user(_this, szRecordCode, CRecordDataGetRecord6_next);
        };
        static struct _base_fld* CRecordDataGetRecord8_wrapper(struct CRecordData* _this, char* szRecordCode, int nCompareLen)
        {
           return CRecordDataGetRecord8_user(_this, szRecordCode, nCompareLen, CRecordDataGetRecord8_next);
        };
        static struct _base_fld* CRecordDataGetRecord10_wrapper(struct CRecordData* _this, int n)
        {
           return CRecordDataGetRecord10_user(_this, n, CRecordDataGetRecord10_next);
        };
        static struct _base_fld* CRecordDataGetRecordByHash12_wrapper(struct CRecordData* _this, char* szRecordCode, int offset, int len)
        {
           return CRecordDataGetRecordByHash12_user(_this, szRecordCode, offset, len, CRecordDataGetRecordByHash12_next);
        };
        static int CRecordDataGetRecordNum14_wrapper(struct CRecordData* _this)
        {
           return CRecordDataGetRecordNum14_user(_this, CRecordDataGetRecordNum14_next);
        };
        static bool CRecordDataIsTableOpen16_wrapper(struct CRecordData* _this)
        {
           return CRecordDataIsTableOpen16_user(_this, CRecordDataIsTableOpen16_next);
        };
        static bool CRecordDataLoadRecordData18_wrapper(struct CRecordData* _this, void* hFile, char* pszErrMsg)
        {
           return CRecordDataLoadRecordData18_user(_this, hFile, pszErrMsg, CRecordDataLoadRecordData18_next);
        };
        static bool CRecordDataLoadRecordHeader20_wrapper(struct CRecordData* _this, void* hFile, char* pszErrMsg)
        {
           return CRecordDataLoadRecordHeader20_user(_this, hFile, pszErrMsg, CRecordDataLoadRecordHeader20_next);
        };
        static unsigned int CRecordDataMakeHash22_wrapper(char* p, int len)
        {
           return CRecordDataMakeHash22_user(p, len, CRecordDataMakeHash22_next);
        };
        static bool CRecordDataMakeHashTable24_wrapper(struct CRecordData* _this, int offset, int len, char* pszErrMsg)
        {
           return CRecordDataMakeHashTable24_user(_this, offset, len, pszErrMsg, CRecordDataMakeHashTable24_next);
        };
        static bool CRecordDataReadRecord26_wrapper(struct CRecordData* _this, char* szFile, unsigned int dwStructSize, char* pszErrMsg)
        {
           return CRecordDataReadRecord26_user(_this, szFile, dwStructSize, pszErrMsg, CRecordDataReadRecord26_next);
        };
        static bool CRecordDataReadRecord_Ex28_wrapper(struct CRecordData* _this, char* szFile1, char* szFile2, unsigned int dwStructSize, char* pszErrMsg)
        {
           return CRecordDataReadRecord_Ex28_user(_this, szFile1, szFile2, dwStructSize, pszErrMsg, CRecordDataReadRecord_Ex28_next);
        };
        static void CRecordDatadtor_CRecordData34_wrapper(struct CRecordData* _this)
        {
           CRecordDatadtor_CRecordData34_user(_this, CRecordDatadtor_CRecordData34_next);
        };
        
        static hook_record CRecordData_functions[] = {
        {   (LPVOID)0x14007f490L,
            (LPVOID *)&CRecordDatactor_CRecordData2_user,
            (LPVOID *)&CRecordDatactor_CRecordData2_next,
            (LPVOID)cast_pointer_function(CRecordDatactor_CRecordData2_wrapper),
            (LPVOID)cast_pointer_function((void(CRecordData::*)())&CRecordData::ctor_CRecordData) },
        {   (LPVOID)0x1400441c0L,
            (LPVOID *)&CRecordDataFileSize4_user,
            (LPVOID *)&CRecordDataFileSize4_next,
            (LPVOID)cast_pointer_function(CRecordDataFileSize4_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CRecordData::*)(char*))&CRecordData::FileSize) },
        {   (LPVOID)0x140044b60L,
            (LPVOID *)&CRecordDataGetRecord6_user,
            (LPVOID *)&CRecordDataGetRecord6_next,
            (LPVOID)cast_pointer_function(CRecordDataGetRecord6_wrapper),
            (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(char*))&CRecordData::GetRecord) },
        {   (LPVOID)0x14008f410L,
            (LPVOID *)&CRecordDataGetRecord8_user,
            (LPVOID *)&CRecordDataGetRecord8_next,
            (LPVOID)cast_pointer_function(CRecordDataGetRecord8_wrapper),
            (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(char*, int))&CRecordData::GetRecord) },
        {   (LPVOID)0x1400347c0L,
            (LPVOID *)&CRecordDataGetRecord10_user,
            (LPVOID *)&CRecordDataGetRecord10_next,
            (LPVOID)cast_pointer_function(CRecordDataGetRecord10_wrapper),
            (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(int))&CRecordData::GetRecord) },
        {   (LPVOID)0x14008f2f0L,
            (LPVOID *)&CRecordDataGetRecordByHash12_user,
            (LPVOID *)&CRecordDataGetRecordByHash12_next,
            (LPVOID)cast_pointer_function(CRecordDataGetRecordByHash12_wrapper),
            (LPVOID)cast_pointer_function((struct _base_fld*(CRecordData::*)(char*, int, int))&CRecordData::GetRecordByHash) },
        {   (LPVOID)0x140044b00L,
            (LPVOID *)&CRecordDataGetRecordNum14_user,
            (LPVOID *)&CRecordDataGetRecordNum14_next,
            (LPVOID)cast_pointer_function(CRecordDataGetRecordNum14_wrapper),
            (LPVOID)cast_pointer_function((int(CRecordData::*)())&CRecordData::GetRecordNum) },
        {   (LPVOID)0x140204b60L,
            (LPVOID *)&CRecordDataIsTableOpen16_user,
            (LPVOID *)&CRecordDataIsTableOpen16_next,
            (LPVOID)cast_pointer_function(CRecordDataIsTableOpen16_wrapper),
            (LPVOID)cast_pointer_function((bool(CRecordData::*)())&CRecordData::IsTableOpen) },
        {   (LPVOID)0x140044770L,
            (LPVOID *)&CRecordDataLoadRecordData18_user,
            (LPVOID *)&CRecordDataLoadRecordData18_next,
            (LPVOID)cast_pointer_function(CRecordDataLoadRecordData18_wrapper),
            (LPVOID)cast_pointer_function((bool(CRecordData::*)(void*, char*))&CRecordData::LoadRecordData) },
        {   (LPVOID)0x140044450L,
            (LPVOID *)&CRecordDataLoadRecordHeader20_user,
            (LPVOID *)&CRecordDataLoadRecordHeader20_next,
            (LPVOID)cast_pointer_function(CRecordDataLoadRecordHeader20_wrapper),
            (LPVOID)cast_pointer_function((bool(CRecordData::*)(void*, char*))&CRecordData::LoadRecordHeader) },
        {   (LPVOID)0x1400442b0L,
            (LPVOID *)&CRecordDataMakeHash22_user,
            (LPVOID *)&CRecordDataMakeHash22_next,
            (LPVOID)cast_pointer_function(CRecordDataMakeHash22_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(*)(char*, int))&CRecordData::MakeHash) },
        {   (LPVOID)0x140044020L,
            (LPVOID *)&CRecordDataMakeHashTable24_user,
            (LPVOID *)&CRecordDataMakeHashTable24_next,
            (LPVOID)cast_pointer_function(CRecordDataMakeHashTable24_wrapper),
            (LPVOID)cast_pointer_function((bool(CRecordData::*)(int, int, char*))&CRecordData::MakeHashTable) },
        {   (LPVOID)0x140043d60L,
            (LPVOID *)&CRecordDataReadRecord26_user,
            (LPVOID *)&CRecordDataReadRecord26_next,
            (LPVOID)cast_pointer_function(CRecordDataReadRecord26_wrapper),
            (LPVOID)cast_pointer_function((bool(CRecordData::*)(char*, unsigned int, char*))&CRecordData::ReadRecord) },
        {   (LPVOID)0x1402af040L,
            (LPVOID *)&CRecordDataReadRecord_Ex28_user,
            (LPVOID *)&CRecordDataReadRecord_Ex28_next,
            (LPVOID)cast_pointer_function(CRecordDataReadRecord_Ex28_wrapper),
            (LPVOID)cast_pointer_function((bool(CRecordData::*)(char*, char*, unsigned int, char*))&CRecordData::ReadRecord_Ex) },
        {   (LPVOID)0x14007f550L,
            (LPVOID *)&CRecordDatadtor_CRecordData34_user,
            (LPVOID *)&CRecordDatadtor_CRecordData34_next,
            (LPVOID)cast_pointer_function(CRecordDatadtor_CRecordData34_wrapper),
            (LPVOID)cast_pointer_function((void(CRecordData::*)())&CRecordData::dtor_CRecordData) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
