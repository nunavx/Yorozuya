// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_unmannedtrader_continue_item_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_unmannedtrader_continue_item_inform_zoclsize2_ptr _unmannedtrader_continue_item_inform_zoclsize2_next(nullptr);
        static info::_unmannedtrader_continue_item_inform_zoclsize2_clbk _unmannedtrader_continue_item_inform_zoclsize2_user(nullptr);
        
        static int _unmannedtrader_continue_item_inform_zoclsize2_wrapper(struct _unmannedtrader_continue_item_inform_zocl* _this)
        {
           return _unmannedtrader_continue_item_inform_zoclsize2_user(_this, _unmannedtrader_continue_item_inform_zoclsize2_next);
        };
        
        static hook_record _unmannedtrader_continue_item_inform_zocl_functions[] = {
        {   (LPVOID)0x140360230L,
            (LPVOID *)&_unmannedtrader_continue_item_inform_zoclsize2_user,
            (LPVOID *)&_unmannedtrader_continue_item_inform_zoclsize2_next,
            (LPVOID)cast_pointer_function(_unmannedtrader_continue_item_inform_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_unmannedtrader_continue_item_inform_zocl::*)())&_unmannedtrader_continue_item_inform_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
