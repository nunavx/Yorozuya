// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_limitedsale_event_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_limitedsale_event_inform_zoclsize2_ptr _limitedsale_event_inform_zoclsize2_next(nullptr);
        static info::_limitedsale_event_inform_zoclsize2_clbk _limitedsale_event_inform_zoclsize2_user(nullptr);
        
        static int _limitedsale_event_inform_zoclsize2_wrapper(struct _limitedsale_event_inform_zocl* _this)
        {
           return _limitedsale_event_inform_zoclsize2_user(_this, _limitedsale_event_inform_zoclsize2_next);
        };
        
        static hook_record _limitedsale_event_inform_zocl_functions[] = {
        {   (LPVOID)0x14030d780L,
            (LPVOID *)&_limitedsale_event_inform_zoclsize2_user,
            (LPVOID *)&_limitedsale_event_inform_zoclsize2_next,
            (LPVOID)cast_pointer_function(_limitedsale_event_inform_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_limitedsale_event_inform_zocl::*)())&_limitedsale_event_inform_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
