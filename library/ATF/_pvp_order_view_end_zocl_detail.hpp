// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_pvp_order_view_end_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_pvp_order_view_end_zoclsize2_ptr _pvp_order_view_end_zoclsize2_next(nullptr);
        static info::_pvp_order_view_end_zoclsize2_clbk _pvp_order_view_end_zoclsize2_user(nullptr);
        
        static int _pvp_order_view_end_zoclsize2_wrapper(struct _pvp_order_view_end_zocl* _this)
        {
           return _pvp_order_view_end_zoclsize2_user(_this, _pvp_order_view_end_zoclsize2_next);
        };
        
        static hook_record _pvp_order_view_end_zocl_functions[] = {
        {   (LPVOID)0x1403f8690L,
            (LPVOID *)&_pvp_order_view_end_zoclsize2_user,
            (LPVOID *)&_pvp_order_view_end_zoclsize2_next,
            (LPVOID)cast_pointer_function(_pvp_order_view_end_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_pvp_order_view_end_zocl::*)())&_pvp_order_view_end_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
