// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "BASE_HACKSHEILD_PARAM_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_ptr BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_next(nullptr);
        static info::BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_clbk BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_user(nullptr);
        
        static void BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_wrapper(struct BASE_HACKSHEILD_PARAM* _this)
        {
           BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_user(_this, BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_next);
        };
        
        static hook_record BASE_HACKSHEILD_PARAM_functions[] = {
        {   (LPVOID)0x140417930L,
            (LPVOID *)&BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_user,
            (LPVOID *)&BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_next,
            (LPVOID)cast_pointer_function(BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_wrapper),
            (LPVOID)cast_pointer_function((void(BASE_HACKSHEILD_PARAM::*)())&BASE_HACKSHEILD_PARAM::ctor_BASE_HACKSHEILD_PARAM) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
