// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_unit_download_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_unit_download_result_zoclctor__unit_download_result_zocl2_ptr _unit_download_result_zoclctor__unit_download_result_zocl2_next(nullptr);
        static info::_unit_download_result_zoclctor__unit_download_result_zocl2_clbk _unit_download_result_zoclctor__unit_download_result_zocl2_user(nullptr);
        static info::_unit_download_result_zoclsize4_ptr _unit_download_result_zoclsize4_next(nullptr);
        static info::_unit_download_result_zoclsize4_clbk _unit_download_result_zoclsize4_user(nullptr);
        
        static info::_unit_download_result_zocl___listctor__list2_ptr _unit_download_result_zocl___listctor__list2_next(nullptr);
        static info::_unit_download_result_zocl___listctor__list2_clbk _unit_download_result_zocl___listctor__list2_user(nullptr);
        
        static void _unit_download_result_zoclctor__unit_download_result_zocl2_wrapper(struct _unit_download_result_zocl* _this)
        {
           _unit_download_result_zoclctor__unit_download_result_zocl2_user(_this, _unit_download_result_zoclctor__unit_download_result_zocl2_next);
        };
        static int _unit_download_result_zoclsize4_wrapper(struct _unit_download_result_zocl* _this)
        {
           return _unit_download_result_zoclsize4_user(_this, _unit_download_result_zoclsize4_next);
        };
        
        static void _unit_download_result_zocl___listctor__list2_wrapper(struct _unit_download_result_zocl::_list* _this)
        {
           _unit_download_result_zocl___listctor__list2_user(_this, _unit_download_result_zocl___listctor__list2_next);
        };
        
        static hook_record _unit_download_result_zocl_functions[] = {
        {   (LPVOID)0x1400ef730L,
            (LPVOID *)&_unit_download_result_zoclctor__unit_download_result_zocl2_user,
            (LPVOID *)&_unit_download_result_zoclctor__unit_download_result_zocl2_next,
            (LPVOID)cast_pointer_function(_unit_download_result_zoclctor__unit_download_result_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_unit_download_result_zocl::*)())&_unit_download_result_zocl::ctor__unit_download_result_zocl) },
        {   (LPVOID)0x1400ef7a0L,
            (LPVOID *)&_unit_download_result_zoclsize4_user,
            (LPVOID *)&_unit_download_result_zoclsize4_next,
            (LPVOID)cast_pointer_function(_unit_download_result_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_unit_download_result_zocl::*)())&_unit_download_result_zocl::size) },
        
        {   (LPVOID)0x1400ef7f0L,
            (LPVOID *)&_unit_download_result_zocl___listctor__list2_user,
            (LPVOID *)&_unit_download_result_zocl___listctor__list2_next,
            (LPVOID)cast_pointer_function(_unit_download_result_zocl___listctor__list2_wrapper),
            (LPVOID)cast_pointer_function((void(_unit_download_result_zocl::_list::*)())&_unit_download_result_zocl::_list::ctor__list) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
