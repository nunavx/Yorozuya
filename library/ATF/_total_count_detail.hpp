// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_total_count_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_total_countctor__total_count2_ptr _total_countctor__total_count2_next(nullptr);
        static info::_total_countctor__total_count2_clbk _total_countctor__total_count2_user(nullptr);
        
        static void _total_countctor__total_count2_wrapper(struct _total_count* _this)
        {
           _total_countctor__total_count2_user(_this, _total_countctor__total_count2_next);
        };
        
        static hook_record _total_count_functions[] = {
        {   (LPVOID)0x14047f7f0L,
            (LPVOID *)&_total_countctor__total_count2_user,
            (LPVOID *)&_total_countctor__total_count2_next,
            (LPVOID)cast_pointer_function(_total_countctor__total_count2_wrapper),
            (LPVOID)cast_pointer_function((void(_total_count::*)())&_total_count::ctor__total_count) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
