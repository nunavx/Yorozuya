// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_result_csi_buy_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_result_csi_buy_zoclctor__result_csi_buy_zocl2_ptr _result_csi_buy_zoclctor__result_csi_buy_zocl2_next(nullptr);
        static info::_result_csi_buy_zoclctor__result_csi_buy_zocl2_clbk _result_csi_buy_zoclctor__result_csi_buy_zocl2_user(nullptr);
        static info::_result_csi_buy_zoclsize4_ptr _result_csi_buy_zoclsize4_next(nullptr);
        static info::_result_csi_buy_zoclsize4_clbk _result_csi_buy_zoclsize4_user(nullptr);
        
        static void _result_csi_buy_zoclctor__result_csi_buy_zocl2_wrapper(struct _result_csi_buy_zocl* _this)
        {
           _result_csi_buy_zoclctor__result_csi_buy_zocl2_user(_this, _result_csi_buy_zoclctor__result_csi_buy_zocl2_next);
        };
        static int _result_csi_buy_zoclsize4_wrapper(struct _result_csi_buy_zocl* _this)
        {
           return _result_csi_buy_zoclsize4_user(_this, _result_csi_buy_zoclsize4_next);
        };
        
        static hook_record _result_csi_buy_zocl_functions[] = {
        {   (LPVOID)0x1402f2fb0L,
            (LPVOID *)&_result_csi_buy_zoclctor__result_csi_buy_zocl2_user,
            (LPVOID *)&_result_csi_buy_zoclctor__result_csi_buy_zocl2_next,
            (LPVOID)cast_pointer_function(_result_csi_buy_zoclctor__result_csi_buy_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_result_csi_buy_zocl::*)())&_result_csi_buy_zocl::ctor__result_csi_buy_zocl) },
        {   (LPVOID)0x1402f2fe0L,
            (LPVOID *)&_result_csi_buy_zoclsize4_user,
            (LPVOID *)&_result_csi_buy_zoclsize4_next,
            (LPVOID)cast_pointer_function(_result_csi_buy_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_result_csi_buy_zocl::*)())&_result_csi_buy_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
