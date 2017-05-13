// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "COreCuttingTable_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::COreCuttingTablector_COreCuttingTable2_ptr COreCuttingTablector_COreCuttingTable2_next(nullptr);
        static info::COreCuttingTablector_COreCuttingTable2_clbk COreCuttingTablector_COreCuttingTable2_user(nullptr);
        static info::COreCuttingTableGetOreIndexFromRate4_ptr COreCuttingTableGetOreIndexFromRate4_next(nullptr);
        static info::COreCuttingTableGetOreIndexFromRate4_clbk COreCuttingTableGetOreIndexFromRate4_user(nullptr);
        static info::COreCuttingTableIndexing6_ptr COreCuttingTableIndexing6_next(nullptr);
        static info::COreCuttingTableIndexing6_clbk COreCuttingTableIndexing6_user(nullptr);
        static info::COreCuttingTableReadRecord8_ptr COreCuttingTableReadRecord8_next(nullptr);
        static info::COreCuttingTableReadRecord8_clbk COreCuttingTableReadRecord8_user(nullptr);
        static info::COreCuttingTabledtor_COreCuttingTable13_ptr COreCuttingTabledtor_COreCuttingTable13_next(nullptr);
        static info::COreCuttingTabledtor_COreCuttingTable13_clbk COreCuttingTabledtor_COreCuttingTable13_user(nullptr);
        
        static info::COreCuttingTable___ore_cut_listctor__ore_cut_list2_ptr COreCuttingTable___ore_cut_listctor__ore_cut_list2_next(nullptr);
        static info::COreCuttingTable___ore_cut_listctor__ore_cut_list2_clbk COreCuttingTable___ore_cut_listctor__ore_cut_list2_user(nullptr);
        
        static void COreCuttingTablector_COreCuttingTable2_wrapper(struct COreCuttingTable* _this)
        {
           COreCuttingTablector_COreCuttingTable2_user(_this, COreCuttingTablector_COreCuttingTable2_next);
        };
        static unsigned int COreCuttingTableGetOreIndexFromRate4_wrapper(struct COreCuttingTable* _this, unsigned int dwOreIndex, unsigned int dwRate)
        {
           return COreCuttingTableGetOreIndexFromRate4_user(_this, dwOreIndex, dwRate, COreCuttingTableGetOreIndexFromRate4_next);
        };
        static bool COreCuttingTableIndexing6_wrapper(struct COreCuttingTable* _this, struct CRecordData* pOreRec, struct CRecordData* pResRec, char* pszErrMsg)
        {
           return COreCuttingTableIndexing6_user(_this, pOreRec, pResRec, pszErrMsg, COreCuttingTableIndexing6_next);
        };
        static bool COreCuttingTableReadRecord8_wrapper(struct COreCuttingTable* _this, char* szFile, struct CRecordData* pOreRec, struct CRecordData* pResRec, char* pszErrMsg)
        {
           return COreCuttingTableReadRecord8_user(_this, szFile, pOreRec, pResRec, pszErrMsg, COreCuttingTableReadRecord8_next);
        };
        static void COreCuttingTabledtor_COreCuttingTable13_wrapper(struct COreCuttingTable* _this)
        {
           COreCuttingTabledtor_COreCuttingTable13_user(_this, COreCuttingTabledtor_COreCuttingTable13_next);
        };
        
        static void COreCuttingTable___ore_cut_listctor__ore_cut_list2_wrapper(struct COreCuttingTable::_ore_cut_list* _this)
        {
           COreCuttingTable___ore_cut_listctor__ore_cut_list2_user(_this, COreCuttingTable___ore_cut_listctor__ore_cut_list2_next);
        };
        
        static hook_record COreCuttingTable_functions[] = {
        {   (LPVOID)0x140202a10L,
            (LPVOID *)&COreCuttingTablector_COreCuttingTable2_user,
            (LPVOID *)&COreCuttingTablector_COreCuttingTable2_next,
            (LPVOID)cast_pointer_function(COreCuttingTablector_COreCuttingTable2_wrapper),
            (LPVOID)cast_pointer_function((void(COreCuttingTable::*)())&COreCuttingTable::ctor_COreCuttingTable) },
        {   (LPVOID)0x1400d3f50L,
            (LPVOID *)&COreCuttingTableGetOreIndexFromRate4_user,
            (LPVOID *)&COreCuttingTableGetOreIndexFromRate4_next,
            (LPVOID)cast_pointer_function(COreCuttingTableGetOreIndexFromRate4_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(COreCuttingTable::*)(unsigned int, unsigned int))&COreCuttingTable::GetOreIndexFromRate) },
        {   (LPVOID)0x140204580L,
            (LPVOID *)&COreCuttingTableIndexing6_user,
            (LPVOID *)&COreCuttingTableIndexing6_next,
            (LPVOID)cast_pointer_function(COreCuttingTableIndexing6_wrapper),
            (LPVOID)cast_pointer_function((bool(COreCuttingTable::*)(struct CRecordData*, struct CRecordData*, char*))&COreCuttingTable::Indexing) },
        {   (LPVOID)0x140204360L,
            (LPVOID *)&COreCuttingTableReadRecord8_user,
            (LPVOID *)&COreCuttingTableReadRecord8_next,
            (LPVOID)cast_pointer_function(COreCuttingTableReadRecord8_wrapper),
            (LPVOID)cast_pointer_function((bool(COreCuttingTable::*)(char*, struct CRecordData*, struct CRecordData*, char*))&COreCuttingTable::ReadRecord) },
        {   (LPVOID)0x140202aa0L,
            (LPVOID *)&COreCuttingTabledtor_COreCuttingTable13_user,
            (LPVOID *)&COreCuttingTabledtor_COreCuttingTable13_next,
            (LPVOID)cast_pointer_function(COreCuttingTabledtor_COreCuttingTable13_wrapper),
            (LPVOID)cast_pointer_function((void(COreCuttingTable::*)())&COreCuttingTable::dtor_COreCuttingTable) },
        
        {   (LPVOID)0x140204550L,
            (LPVOID *)&COreCuttingTable___ore_cut_listctor__ore_cut_list2_user,
            (LPVOID *)&COreCuttingTable___ore_cut_listctor__ore_cut_list2_next,
            (LPVOID)cast_pointer_function(COreCuttingTable___ore_cut_listctor__ore_cut_list2_wrapper),
            (LPVOID)cast_pointer_function((void(COreCuttingTable::_ore_cut_list::*)())&COreCuttingTable::_ore_cut_list::ctor__ore_cut_list) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
