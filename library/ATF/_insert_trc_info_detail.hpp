// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_insert_trc_info_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_insert_trc_infosize2_ptr _insert_trc_infosize2_next(nullptr);
        static info::_insert_trc_infosize2_clbk _insert_trc_infosize2_user(nullptr);
        
        static int _insert_trc_infosize2_wrapper(struct _insert_trc_info* _this)
        {
           return _insert_trc_infosize2_user(_this, _insert_trc_infosize2_next);
        };
        
        static hook_record _insert_trc_info_functions[] = {
        {   (LPVOID)0x1402d9c00L,
            (LPVOID *)&_insert_trc_infosize2_user,
            (LPVOID *)&_insert_trc_infosize2_next,
            (LPVOID)cast_pointer_function(_insert_trc_infosize2_wrapper),
            (LPVOID)cast_pointer_function((int(_insert_trc_info::*)())&_insert_trc_info::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
