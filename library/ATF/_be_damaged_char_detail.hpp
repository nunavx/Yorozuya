// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_be_damaged_char_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_be_damaged_charctor__be_damaged_char2_ptr _be_damaged_charctor__be_damaged_char2_next(nullptr);
        static info::_be_damaged_charctor__be_damaged_char2_clbk _be_damaged_charctor__be_damaged_char2_user(nullptr);
        
        static void _be_damaged_charctor__be_damaged_char2_wrapper(struct _be_damaged_char* _this)
        {
           _be_damaged_charctor__be_damaged_char2_user(_this, _be_damaged_charctor__be_damaged_char2_next);
        };
        
        static hook_record _be_damaged_char_functions[] = {
        {   (LPVOID)0x14013e400L,
            (LPVOID *)&_be_damaged_charctor__be_damaged_char2_user,
            (LPVOID *)&_be_damaged_charctor__be_damaged_char2_next,
            (LPVOID)cast_pointer_function(_be_damaged_charctor__be_damaged_char2_wrapper),
            (LPVOID)cast_pointer_function((void(_be_damaged_char::*)())&_be_damaged_char::ctor__be_damaged_char) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
