// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_enter_lobby_report_wrac_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_enter_lobby_report_wracsize2_ptr _enter_lobby_report_wracsize2_next(nullptr);
        static info::_enter_lobby_report_wracsize2_clbk _enter_lobby_report_wracsize2_user(nullptr);
        
        static int _enter_lobby_report_wracsize2_wrapper(struct _enter_lobby_report_wrac* _this)
        {
           return _enter_lobby_report_wracsize2_user(_this, _enter_lobby_report_wracsize2_next);
        };
        
        static hook_record _enter_lobby_report_wrac_functions[] = {
        {   (LPVOID)0x14011fbc0L,
            (LPVOID *)&_enter_lobby_report_wracsize2_user,
            (LPVOID *)&_enter_lobby_report_wracsize2_next,
            (LPVOID)cast_pointer_function(_enter_lobby_report_wracsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_enter_lobby_report_wrac::*)())&_enter_lobby_report_wrac::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
