// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_keeper_create_setdata_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_keeper_create_setdatactor__keeper_create_setdata2_ptr _keeper_create_setdatactor__keeper_create_setdata2_next(nullptr);
        static info::_keeper_create_setdatactor__keeper_create_setdata2_clbk _keeper_create_setdatactor__keeper_create_setdata2_user(nullptr);
        
        static void _keeper_create_setdatactor__keeper_create_setdata2_wrapper(struct _keeper_create_setdata* _this)
        {
           _keeper_create_setdatactor__keeper_create_setdata2_user(_this, _keeper_create_setdatactor__keeper_create_setdata2_next);
        };
        
        static hook_record _keeper_create_setdata_functions[] = {
        {   (LPVOID)0x140284a90L,
            (LPVOID *)&_keeper_create_setdatactor__keeper_create_setdata2_user,
            (LPVOID *)&_keeper_create_setdatactor__keeper_create_setdata2_next,
            (LPVOID)cast_pointer_function(_keeper_create_setdatactor__keeper_create_setdata2_wrapper),
            (LPVOID)cast_pointer_function((void(_keeper_create_setdata::*)())&_keeper_create_setdata::ctor__keeper_create_setdata) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
