// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_SYN_HEADER_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_SYN_HEADERctor__SYN_HEADER2_ptr _SYN_HEADERctor__SYN_HEADER2_next(nullptr);
        static info::_SYN_HEADERctor__SYN_HEADER2_clbk _SYN_HEADERctor__SYN_HEADER2_user(nullptr);
        
        static void _SYN_HEADERctor__SYN_HEADER2_wrapper(struct _SYN_HEADER* _this)
        {
           _SYN_HEADERctor__SYN_HEADER2_user(_this, _SYN_HEADERctor__SYN_HEADER2_next);
        };
        
        static hook_record _SYN_HEADER_functions[] = {
        {   (LPVOID)0x14043ed80L,
            (LPVOID *)&_SYN_HEADERctor__SYN_HEADER2_user,
            (LPVOID *)&_SYN_HEADERctor__SYN_HEADER2_next,
            (LPVOID)cast_pointer_function(_SYN_HEADERctor__SYN_HEADER2_wrapper),
            (LPVOID)cast_pointer_function((void(_SYN_HEADER::*)())&_SYN_HEADER::ctor__SYN_HEADER) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
