// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_store_dummy_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_store_dummySetDummy2_ptr _store_dummySetDummy2_next(nullptr);
        static info::_store_dummySetDummy2_clbk _store_dummySetDummy2_user(nullptr);
        static info::_store_dummyctor__store_dummy4_ptr _store_dummyctor__store_dummy4_next(nullptr);
        static info::_store_dummyctor__store_dummy4_clbk _store_dummyctor__store_dummy4_user(nullptr);
        
        static bool _store_dummySetDummy2_wrapper(struct _store_dummy* _this, int nType, struct _base_fld* pRec, struct _dummy_position* pDumPos)
        {
           return _store_dummySetDummy2_user(_this, nType, pRec, pDumPos, _store_dummySetDummy2_next);
        };
        static void _store_dummyctor__store_dummy4_wrapper(struct _store_dummy* _this)
        {
           _store_dummyctor__store_dummy4_user(_this, _store_dummyctor__store_dummy4_next);
        };
        
        static hook_record _store_dummy_functions[] = {
        {   (LPVOID)0x140189380L,
            (LPVOID *)&_store_dummySetDummy2_user,
            (LPVOID *)&_store_dummySetDummy2_next,
            (LPVOID)cast_pointer_function(_store_dummySetDummy2_wrapper),
            (LPVOID)cast_pointer_function((bool(_store_dummy::*)(int, struct _base_fld*, struct _dummy_position*))&_store_dummy::SetDummy) },
        {   (LPVOID)0x140189340L,
            (LPVOID *)&_store_dummyctor__store_dummy4_user,
            (LPVOID *)&_store_dummyctor__store_dummy4_next,
            (LPVOID)cast_pointer_function(_store_dummyctor__store_dummy4_wrapper),
            (LPVOID)cast_pointer_function((void(_store_dummy::*)())&_store_dummy::ctor__store_dummy) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
