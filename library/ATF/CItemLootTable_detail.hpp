// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CItemLootTable_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CItemLootTablector_CItemLootTable2_ptr CItemLootTablector_CItemLootTable2_next(nullptr);
        static info::CItemLootTablector_CItemLootTable2_clbk CItemLootTablector_CItemLootTable2_user(nullptr);
        static info::CItemLootTableIndexing4_ptr CItemLootTableIndexing4_next(nullptr);
        static info::CItemLootTableIndexing4_clbk CItemLootTableIndexing4_user(nullptr);
        static info::CItemLootTableReadRecord6_ptr CItemLootTableReadRecord6_next(nullptr);
        static info::CItemLootTableReadRecord6_clbk CItemLootTableReadRecord6_user(nullptr);
        static info::CItemLootTabledtor_CItemLootTable11_ptr CItemLootTabledtor_CItemLootTable11_next(nullptr);
        static info::CItemLootTabledtor_CItemLootTable11_clbk CItemLootTabledtor_CItemLootTable11_user(nullptr);
        
        static void CItemLootTablector_CItemLootTable2_wrapper(struct CItemLootTable* _this)
        {
           CItemLootTablector_CItemLootTable2_user(_this, CItemLootTablector_CItemLootTable2_next);
        };
        static bool CItemLootTableIndexing4_wrapper(struct CItemLootTable* _this, struct CRecordData* pItemRec, char* pszErrMsg)
        {
           return CItemLootTableIndexing4_user(_this, pItemRec, pszErrMsg, CItemLootTableIndexing4_next);
        };
        static bool CItemLootTableReadRecord6_wrapper(struct CItemLootTable* _this, char* szFile, struct CRecordData* pItemRec, char* pszErrMsg)
        {
           return CItemLootTableReadRecord6_user(_this, szFile, pItemRec, pszErrMsg, CItemLootTableReadRecord6_next);
        };
        static void CItemLootTabledtor_CItemLootTable11_wrapper(struct CItemLootTable* _this)
        {
           CItemLootTabledtor_CItemLootTable11_user(_this, CItemLootTabledtor_CItemLootTable11_next);
        };
        
        static hook_record CItemLootTable_functions[] = {
        {   (LPVOID)0x1402024d0L,
            (LPVOID *)&CItemLootTablector_CItemLootTable2_user,
            (LPVOID *)&CItemLootTablector_CItemLootTable2_next,
            (LPVOID)cast_pointer_function(CItemLootTablector_CItemLootTable2_wrapper),
            (LPVOID)cast_pointer_function((void(CItemLootTable::*)())&CItemLootTable::ctor_CItemLootTable) },
        {   (LPVOID)0x140203f20L,
            (LPVOID *)&CItemLootTableIndexing4_user,
            (LPVOID *)&CItemLootTableIndexing4_next,
            (LPVOID)cast_pointer_function(CItemLootTableIndexing4_wrapper),
            (LPVOID)cast_pointer_function((bool(CItemLootTable::*)(struct CRecordData*, char*))&CItemLootTable::Indexing) },
        {   (LPVOID)0x140203900L,
            (LPVOID *)&CItemLootTableReadRecord6_user,
            (LPVOID *)&CItemLootTableReadRecord6_next,
            (LPVOID)cast_pointer_function(CItemLootTableReadRecord6_wrapper),
            (LPVOID)cast_pointer_function((bool(CItemLootTable::*)(char*, struct CRecordData*, char*))&CItemLootTable::ReadRecord) },
        {   (LPVOID)0x1402027a0L,
            (LPVOID *)&CItemLootTabledtor_CItemLootTable11_user,
            (LPVOID *)&CItemLootTabledtor_CItemLootTable11_next,
            (LPVOID)cast_pointer_function(CItemLootTabledtor_CItemLootTable11_wrapper),
            (LPVOID)cast_pointer_function((void(CItemLootTable::*)())&CItemLootTable::dtor_CItemLootTable) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
