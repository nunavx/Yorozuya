// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_nuclear_explosion_success_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_ptr _nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_next(nullptr);
        static info::_nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_clbk _nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_user(nullptr);
        static info::_nuclear_explosion_success_zoclsize4_ptr _nuclear_explosion_success_zoclsize4_next(nullptr);
        static info::_nuclear_explosion_success_zoclsize4_clbk _nuclear_explosion_success_zoclsize4_user(nullptr);
        
        static void _nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_wrapper(struct _nuclear_explosion_success_zocl* _this)
        {
           _nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_user(_this, _nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_next);
        };
        static int _nuclear_explosion_success_zoclsize4_wrapper(struct _nuclear_explosion_success_zocl* _this)
        {
           return _nuclear_explosion_success_zoclsize4_user(_this, _nuclear_explosion_success_zoclsize4_next);
        };
        
        static hook_record _nuclear_explosion_success_zocl_functions[] = {
        {   (LPVOID)0x14013e6e0L,
            (LPVOID *)&_nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_user,
            (LPVOID *)&_nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_next,
            (LPVOID)cast_pointer_function(_nuclear_explosion_success_zoclctor__nuclear_explosion_success_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_nuclear_explosion_success_zocl::*)())&_nuclear_explosion_success_zocl::ctor__nuclear_explosion_success_zocl) },
        {   (LPVOID)0x14013e730L,
            (LPVOID *)&_nuclear_explosion_success_zoclsize4_user,
            (LPVOID *)&_nuclear_explosion_success_zoclsize4_next,
            (LPVOID)cast_pointer_function(_nuclear_explosion_success_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_nuclear_explosion_success_zocl::*)())&_nuclear_explosion_success_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
