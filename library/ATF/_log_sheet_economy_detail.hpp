// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_log_sheet_economy_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_log_sheet_economysize2_ptr _log_sheet_economysize2_next(nullptr);
        static info::_log_sheet_economysize2_clbk _log_sheet_economysize2_user(nullptr);
        
        static int _log_sheet_economysize2_wrapper(struct _log_sheet_economy* _this)
        {
           return _log_sheet_economysize2_user(_this, _log_sheet_economysize2_next);
        };
        
        static hook_record _log_sheet_economy_functions[] = {
        {   (LPVOID)0x1402a5ce0L,
            (LPVOID *)&_log_sheet_economysize2_user,
            (LPVOID *)&_log_sheet_economysize2_next,
            (LPVOID)cast_pointer_function(_log_sheet_economysize2_wrapper),
            (LPVOID)cast_pointer_function((int(_log_sheet_economy::*)())&_log_sheet_economy::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
