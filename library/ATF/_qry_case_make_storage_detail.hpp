// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_make_storage_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_qry_case_make_storagector__qry_case_make_storage2_ptr _qry_case_make_storagector__qry_case_make_storage2_next(nullptr);
        static info::_qry_case_make_storagector__qry_case_make_storage2_clbk _qry_case_make_storagector__qry_case_make_storage2_user(nullptr);
        static info::_qry_case_make_storagesize4_ptr _qry_case_make_storagesize4_next(nullptr);
        static info::_qry_case_make_storagesize4_clbk _qry_case_make_storagesize4_user(nullptr);
        
        static void _qry_case_make_storagector__qry_case_make_storage2_wrapper(struct _qry_case_make_storage* _this)
        {
           _qry_case_make_storagector__qry_case_make_storage2_user(_this, _qry_case_make_storagector__qry_case_make_storage2_next);
        };
        static int _qry_case_make_storagesize4_wrapper(struct _qry_case_make_storage* _this)
        {
           return _qry_case_make_storagesize4_user(_this, _qry_case_make_storagesize4_next);
        };
        
        static hook_record _qry_case_make_storage_functions[] = {
        {   (LPVOID)0x1402e1c10L,
            (LPVOID *)&_qry_case_make_storagector__qry_case_make_storage2_user,
            (LPVOID *)&_qry_case_make_storagector__qry_case_make_storage2_next,
            (LPVOID)cast_pointer_function(_qry_case_make_storagector__qry_case_make_storage2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_case_make_storage::*)())&_qry_case_make_storage::ctor__qry_case_make_storage) },
        {   (LPVOID)0x1402e1c30L,
            (LPVOID *)&_qry_case_make_storagesize4_user,
            (LPVOID *)&_qry_case_make_storagesize4_next,
            (LPVOID)cast_pointer_function(_qry_case_make_storagesize4_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_make_storage::*)())&_qry_case_make_storage::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
