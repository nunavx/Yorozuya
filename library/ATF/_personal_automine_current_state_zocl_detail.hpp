// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_personal_automine_current_state_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_ptr _personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_next(nullptr);
        static info::_personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_clbk _personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_user(nullptr);
        static info::_personal_automine_current_state_zoclsize4_ptr _personal_automine_current_state_zoclsize4_next(nullptr);
        static info::_personal_automine_current_state_zoclsize4_clbk _personal_automine_current_state_zoclsize4_user(nullptr);
        
        static void _personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_wrapper(struct _personal_automine_current_state_zocl* _this)
        {
           _personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_user(_this, _personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_next);
        };
        static int _personal_automine_current_state_zoclsize4_wrapper(struct _personal_automine_current_state_zocl* _this)
        {
           return _personal_automine_current_state_zoclsize4_user(_this, _personal_automine_current_state_zoclsize4_next);
        };
        
        static hook_record _personal_automine_current_state_zocl_functions[] = {
        {   (LPVOID)0x1402de3e0L,
            (LPVOID *)&_personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_user,
            (LPVOID *)&_personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_next,
            (LPVOID)cast_pointer_function(_personal_automine_current_state_zoclctor__personal_automine_current_state_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_personal_automine_current_state_zocl::*)())&_personal_automine_current_state_zocl::ctor__personal_automine_current_state_zocl) },
        {   (LPVOID)0x1402de430L,
            (LPVOID *)&_personal_automine_current_state_zoclsize4_user,
            (LPVOID *)&_personal_automine_current_state_zoclsize4_next,
            (LPVOID)cast_pointer_function(_personal_automine_current_state_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_personal_automine_current_state_zocl::*)())&_personal_automine_current_state_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
