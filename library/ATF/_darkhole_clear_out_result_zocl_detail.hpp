// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_darkhole_clear_out_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_darkhole_clear_out_result_zoclsize2_ptr _darkhole_clear_out_result_zoclsize2_next(nullptr);
        static info::_darkhole_clear_out_result_zoclsize2_clbk _darkhole_clear_out_result_zoclsize2_user(nullptr);
        
        static int _darkhole_clear_out_result_zoclsize2_wrapper(struct _darkhole_clear_out_result_zocl* _this)
        {
           return _darkhole_clear_out_result_zoclsize2_user(_this, _darkhole_clear_out_result_zoclsize2_next);
        };
        
        static hook_record _darkhole_clear_out_result_zocl_functions[] = {
        {   (LPVOID)0x1400efa00L,
            (LPVOID *)&_darkhole_clear_out_result_zoclsize2_user,
            (LPVOID *)&_darkhole_clear_out_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_darkhole_clear_out_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_darkhole_clear_out_result_zocl::*)())&_darkhole_clear_out_result_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
