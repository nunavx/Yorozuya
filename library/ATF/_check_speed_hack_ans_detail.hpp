// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_check_speed_hack_ans_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_check_speed_hack_anssize2_ptr _check_speed_hack_anssize2_next(nullptr);
        static info::_check_speed_hack_anssize2_clbk _check_speed_hack_anssize2_user(nullptr);
        
        static int _check_speed_hack_anssize2_wrapper(struct _check_speed_hack_ans* _this)
        {
           return _check_speed_hack_anssize2_user(_this, _check_speed_hack_anssize2_next);
        };
        
        static hook_record _check_speed_hack_ans_functions[] = {
        {   (LPVOID)0x14047db50L,
            (LPVOID *)&_check_speed_hack_anssize2_user,
            (LPVOID *)&_check_speed_hack_anssize2_next,
            (LPVOID)cast_pointer_function(_check_speed_hack_anssize2_wrapper),
            (LPVOID)cast_pointer_function((int(_check_speed_hack_ans::*)())&_check_speed_hack_ans::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
