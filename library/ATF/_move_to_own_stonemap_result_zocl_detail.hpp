// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_move_to_own_stonemap_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_move_to_own_stonemap_result_zoclsize2_ptr _move_to_own_stonemap_result_zoclsize2_next(nullptr);
        static info::_move_to_own_stonemap_result_zoclsize2_clbk _move_to_own_stonemap_result_zoclsize2_user(nullptr);
        
        static int _move_to_own_stonemap_result_zoclsize2_wrapper(struct _move_to_own_stonemap_result_zocl* _this)
        {
           return _move_to_own_stonemap_result_zoclsize2_user(_this, _move_to_own_stonemap_result_zoclsize2_next);
        };
        
        static hook_record _move_to_own_stonemap_result_zocl_functions[] = {
        {   (LPVOID)0x1400f03c0L,
            (LPVOID *)&_move_to_own_stonemap_result_zoclsize2_user,
            (LPVOID *)&_move_to_own_stonemap_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_move_to_own_stonemap_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_move_to_own_stonemap_result_zocl::*)())&_move_to_own_stonemap_result_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
