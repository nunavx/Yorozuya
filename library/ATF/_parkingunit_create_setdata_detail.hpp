// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_parkingunit_create_setdata_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_parkingunit_create_setdatactor__parkingunit_create_setdata2_ptr _parkingunit_create_setdatactor__parkingunit_create_setdata2_next(nullptr);
        static info::_parkingunit_create_setdatactor__parkingunit_create_setdata2_clbk _parkingunit_create_setdatactor__parkingunit_create_setdata2_user(nullptr);
        
        static void _parkingunit_create_setdatactor__parkingunit_create_setdata2_wrapper(struct _parkingunit_create_setdata* _this)
        {
           _parkingunit_create_setdatactor__parkingunit_create_setdata2_user(_this, _parkingunit_create_setdatactor__parkingunit_create_setdata2_next);
        };
        
        static hook_record _parkingunit_create_setdata_functions[] = {
        {   (LPVOID)0x1401083e0L,
            (LPVOID *)&_parkingunit_create_setdatactor__parkingunit_create_setdata2_user,
            (LPVOID *)&_parkingunit_create_setdatactor__parkingunit_create_setdata2_next,
            (LPVOID)cast_pointer_function(_parkingunit_create_setdatactor__parkingunit_create_setdata2_wrapper),
            (LPVOID)cast_pointer_function((void(_parkingunit_create_setdata::*)())&_parkingunit_create_setdata::ctor__parkingunit_create_setdata) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
