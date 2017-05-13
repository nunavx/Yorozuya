// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "LendItemSheet_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::LendItemSheetCheckTime2_ptr LendItemSheetCheckTime2_next(nullptr);
        static info::LendItemSheetCheckTime2_clbk LendItemSheetCheckTime2_user(nullptr);
        static info::LendItemSheetDeleteLink4_ptr LendItemSheetDeleteLink4_next(nullptr);
        static info::LendItemSheetDeleteLink4_clbk LendItemSheetDeleteLink4_user(nullptr);
        static info::LendItemSheetInitialzie6_ptr LendItemSheetInitialzie6_next(nullptr);
        static info::LendItemSheetInitialzie6_clbk LendItemSheetInitialzie6_user(nullptr);
        static info::LendItemSheetInsertLink8_ptr LendItemSheetInsertLink8_next(nullptr);
        static info::LendItemSheetInsertLink8_clbk LendItemSheetInsertLink8_user(nullptr);
        static info::LendItemSheetctor_LendItemSheet10_ptr LendItemSheetctor_LendItemSheet10_next(nullptr);
        static info::LendItemSheetctor_LendItemSheet10_clbk LendItemSheetctor_LendItemSheet10_user(nullptr);
        static info::LendItemSheetRelease12_ptr LendItemSheetRelease12_next(nullptr);
        static info::LendItemSheetRelease12_clbk LendItemSheetRelease12_user(nullptr);
        static info::LendItemSheetdtor_LendItemSheet16_ptr LendItemSheetdtor_LendItemSheet16_next(nullptr);
        static info::LendItemSheetdtor_LendItemSheet16_clbk LendItemSheetdtor_LendItemSheet16_user(nullptr);
        
        static info::LendItemSheet__Cellctor_Cell2_ptr LendItemSheet__Cellctor_Cell2_next(nullptr);
        static info::LendItemSheet__Cellctor_Cell2_clbk LendItemSheet__Cellctor_Cell2_user(nullptr);
        static info::LendItemSheet__Cellctor_Cell4_ptr LendItemSheet__Cellctor_Cell4_next(nullptr);
        static info::LendItemSheet__Cellctor_Cell4_clbk LendItemSheet__Cellctor_Cell4_user(nullptr);
        
        static int LendItemSheetCheckTime2_wrapper(struct LendItemSheet* _this)
        {
           return LendItemSheetCheckTime2_user(_this, LendItemSheetCheckTime2_next);
        };
        static bool LendItemSheetDeleteLink4_wrapper(struct LendItemSheet* _this, char byStorageCode, struct _STORAGE_LIST::_db_con* pItem)
        {
           return LendItemSheetDeleteLink4_user(_this, byStorageCode, pItem, LendItemSheetDeleteLink4_next);
        };
        static bool LendItemSheetInitialzie6_wrapper(struct LendItemSheet* _this)
        {
           return LendItemSheetInitialzie6_user(_this, LendItemSheetInitialzie6_next);
        };
        static bool LendItemSheetInsertLink8_wrapper(struct LendItemSheet* _this, char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return LendItemSheetInsertLink8_user(_this, byStorageCode, pkItem, LendItemSheetInsertLink8_next);
        };
        static void LendItemSheetctor_LendItemSheet10_wrapper(struct LendItemSheet* _this, struct CPlayer* p)
        {
           LendItemSheetctor_LendItemSheet10_user(_this, p, LendItemSheetctor_LendItemSheet10_next);
        };
        static void LendItemSheetRelease12_wrapper(struct LendItemSheet* _this)
        {
           LendItemSheetRelease12_user(_this, LendItemSheetRelease12_next);
        };
        static void LendItemSheetdtor_LendItemSheet16_wrapper(struct LendItemSheet* _this)
        {
           LendItemSheetdtor_LendItemSheet16_user(_this, LendItemSheetdtor_LendItemSheet16_next);
        };
        
        static void LendItemSheet__Cellctor_Cell2_wrapper(struct LendItemSheet::Cell* _this, char byStCode, struct _STORAGE_LIST::_db_con* pItem)
        {
           LendItemSheet__Cellctor_Cell2_user(_this, byStCode, pItem, LendItemSheet__Cellctor_Cell2_next);
        };
        static void LendItemSheet__Cellctor_Cell4_wrapper(struct LendItemSheet::Cell* _this)
        {
           LendItemSheet__Cellctor_Cell4_user(_this, LendItemSheet__Cellctor_Cell4_next);
        };
        
        static hook_record LendItemSheet_functions[] = {
        {   (LPVOID)0x14030d790L,
            (LPVOID *)&LendItemSheetCheckTime2_user,
            (LPVOID *)&LendItemSheetCheckTime2_next,
            (LPVOID)cast_pointer_function(LendItemSheetCheckTime2_wrapper),
            (LPVOID)cast_pointer_function((int(LendItemSheet::*)())&LendItemSheet::CheckTime) },
        {   (LPVOID)0x14030f080L,
            (LPVOID *)&LendItemSheetDeleteLink4_user,
            (LPVOID *)&LendItemSheetDeleteLink4_next,
            (LPVOID)cast_pointer_function(LendItemSheetDeleteLink4_wrapper),
            (LPVOID)cast_pointer_function((bool(LendItemSheet::*)(char, struct _STORAGE_LIST::_db_con*))&LendItemSheet::DeleteLink) },
        {   (LPVOID)0x14030ee40L,
            (LPVOID *)&LendItemSheetInitialzie6_user,
            (LPVOID *)&LendItemSheetInitialzie6_next,
            (LPVOID)cast_pointer_function(LendItemSheetInitialzie6_wrapper),
            (LPVOID)cast_pointer_function((bool(LendItemSheet::*)())&LendItemSheet::Initialzie) },
        {   (LPVOID)0x14030efd0L,
            (LPVOID *)&LendItemSheetInsertLink8_user,
            (LPVOID *)&LendItemSheetInsertLink8_next,
            (LPVOID)cast_pointer_function(LendItemSheetInsertLink8_wrapper),
            (LPVOID)cast_pointer_function((bool(LendItemSheet::*)(char, struct _STORAGE_LIST::_db_con*))&LendItemSheet::InsertLink) },
        {   (LPVOID)0x14030edd0L,
            (LPVOID *)&LendItemSheetctor_LendItemSheet10_user,
            (LPVOID *)&LendItemSheetctor_LendItemSheet10_next,
            (LPVOID)cast_pointer_function(LendItemSheetctor_LendItemSheet10_wrapper),
            (LPVOID)cast_pointer_function((void(LendItemSheet::*)(struct CPlayer*))&LendItemSheet::ctor_LendItemSheet) },
        {   (LPVOID)0x14030f160L,
            (LPVOID *)&LendItemSheetRelease12_user,
            (LPVOID *)&LendItemSheetRelease12_next,
            (LPVOID)cast_pointer_function(LendItemSheetRelease12_wrapper),
            (LPVOID)cast_pointer_function((void(LendItemSheet::*)())&LendItemSheet::Release) },
        {   (LPVOID)0x14030f220L,
            (LPVOID *)&LendItemSheetdtor_LendItemSheet16_user,
            (LPVOID *)&LendItemSheetdtor_LendItemSheet16_next,
            (LPVOID)cast_pointer_function(LendItemSheetdtor_LendItemSheet16_wrapper),
            (LPVOID)cast_pointer_function((void(LendItemSheet::*)())&LendItemSheet::dtor_LendItemSheet) },
        
        {   (LPVOID)0x14030f040L,
            (LPVOID *)&LendItemSheet__Cellctor_Cell2_user,
            (LPVOID *)&LendItemSheet__Cellctor_Cell2_next,
            (LPVOID)cast_pointer_function(LendItemSheet__Cellctor_Cell2_wrapper),
            (LPVOID)cast_pointer_function((void(LendItemSheet::Cell::*)(char, struct _STORAGE_LIST::_db_con*))&LendItemSheet::Cell::ctor_Cell) },
        {   (LPVOID)0x14030fff0L,
            (LPVOID *)&LendItemSheet__Cellctor_Cell4_user,
            (LPVOID *)&LendItemSheet__Cellctor_Cell4_next,
            (LPVOID)cast_pointer_function(LendItemSheet__Cellctor_Cell4_wrapper),
            (LPVOID)cast_pointer_function((void(LendItemSheet::Cell::*)())&LendItemSheet::Cell::ctor_Cell) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
