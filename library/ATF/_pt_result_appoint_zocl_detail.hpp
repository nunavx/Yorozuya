// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_pt_result_appoint_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_pt_result_appoint_zoclctor__pt_result_appoint_zocl2_ptr _pt_result_appoint_zoclctor__pt_result_appoint_zocl2_next(nullptr);
        static info::_pt_result_appoint_zoclctor__pt_result_appoint_zocl2_clbk _pt_result_appoint_zoclctor__pt_result_appoint_zocl2_user(nullptr);
        static info::_pt_result_appoint_zoclsize4_ptr _pt_result_appoint_zoclsize4_next(nullptr);
        static info::_pt_result_appoint_zoclsize4_clbk _pt_result_appoint_zoclsize4_user(nullptr);
        
        static void _pt_result_appoint_zoclctor__pt_result_appoint_zocl2_wrapper(struct _pt_result_appoint_zocl* _this)
        {
           _pt_result_appoint_zoclctor__pt_result_appoint_zocl2_user(_this, _pt_result_appoint_zoclctor__pt_result_appoint_zocl2_next);
        };
        static int _pt_result_appoint_zoclsize4_wrapper(struct _pt_result_appoint_zocl* _this)
        {
           return _pt_result_appoint_zoclsize4_user(_this, _pt_result_appoint_zoclsize4_next);
        };
        
        static hook_record _pt_result_appoint_zocl_functions[] = {
        {   (LPVOID)0x1402bd660L,
            (LPVOID *)&_pt_result_appoint_zoclctor__pt_result_appoint_zocl2_user,
            (LPVOID *)&_pt_result_appoint_zoclctor__pt_result_appoint_zocl2_next,
            (LPVOID)cast_pointer_function(_pt_result_appoint_zoclctor__pt_result_appoint_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_pt_result_appoint_zocl::*)())&_pt_result_appoint_zocl::ctor__pt_result_appoint_zocl) },
        {   (LPVOID)0x1402bd6b0L,
            (LPVOID *)&_pt_result_appoint_zoclsize4_user,
            (LPVOID *)&_pt_result_appoint_zoclsize4_next,
            (LPVOID)cast_pointer_function(_pt_result_appoint_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_pt_result_appoint_zocl::*)())&_pt_result_appoint_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
