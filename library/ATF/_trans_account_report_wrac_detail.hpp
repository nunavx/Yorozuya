// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_trans_account_report_wrac_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_trans_account_report_wracsize2_ptr _trans_account_report_wracsize2_next(nullptr);
        static info::_trans_account_report_wracsize2_clbk _trans_account_report_wracsize2_user(nullptr);
        
        static int _trans_account_report_wracsize2_wrapper(struct _trans_account_report_wrac* _this)
        {
           return _trans_account_report_wracsize2_user(_this, _trans_account_report_wracsize2_next);
        };
        
        static hook_record _trans_account_report_wrac_functions[] = {
        {   (LPVOID)0x140207e00L,
            (LPVOID *)&_trans_account_report_wracsize2_user,
            (LPVOID *)&_trans_account_report_wracsize2_next,
            (LPVOID)cast_pointer_function(_trans_account_report_wracsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_trans_account_report_wrac::*)())&_trans_account_report_wrac::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
