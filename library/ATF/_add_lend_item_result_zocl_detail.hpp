// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_add_lend_item_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_add_lend_item_result_zoclsize2_ptr _add_lend_item_result_zoclsize2_next(nullptr);
        static info::_add_lend_item_result_zoclsize2_clbk _add_lend_item_result_zoclsize2_user(nullptr);
        
        static int _add_lend_item_result_zoclsize2_wrapper(struct _add_lend_item_result_zocl* _this)
        {
           return _add_lend_item_result_zoclsize2_user(_this, _add_lend_item_result_zoclsize2_next);
        };
        
        static hook_record _add_lend_item_result_zocl_functions[] = {
        {   (LPVOID)0x1403fea30L,
            (LPVOID *)&_add_lend_item_result_zoclsize2_user,
            (LPVOID *)&_add_lend_item_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_add_lend_item_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_add_lend_item_result_zocl::*)())&_add_lend_item_result_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
