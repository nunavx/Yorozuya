// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_monster_create_setdata_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_monster_create_setdatactor__monster_create_setdata2_ptr _monster_create_setdatactor__monster_create_setdata2_next(nullptr);
        static info::_monster_create_setdatactor__monster_create_setdata2_clbk _monster_create_setdatactor__monster_create_setdata2_user(nullptr);
        
        static void _monster_create_setdatactor__monster_create_setdata2_wrapper(struct _monster_create_setdata* _this)
        {
           _monster_create_setdatactor__monster_create_setdata2_user(_this, _monster_create_setdatactor__monster_create_setdata2_next);
        };
        
        static hook_record _monster_create_setdata_functions[] = {
        {   (LPVOID)0x14014c340L,
            (LPVOID *)&_monster_create_setdatactor__monster_create_setdata2_user,
            (LPVOID *)&_monster_create_setdatactor__monster_create_setdata2_next,
            (LPVOID)cast_pointer_function(_monster_create_setdatactor__monster_create_setdata2_wrapper),
            (LPVOID)cast_pointer_function((void(_monster_create_setdata::*)())&_monster_create_setdata::ctor__monster_create_setdata) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
