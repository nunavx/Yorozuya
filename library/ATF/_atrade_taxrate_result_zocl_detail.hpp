// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_atrade_taxrate_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_atrade_taxrate_result_zoclsize2_ptr _atrade_taxrate_result_zoclsize2_next(nullptr);
        static info::_atrade_taxrate_result_zoclsize2_clbk _atrade_taxrate_result_zoclsize2_user(nullptr);
        
        static int _atrade_taxrate_result_zoclsize2_wrapper(struct _atrade_taxrate_result_zocl* _this)
        {
           return _atrade_taxrate_result_zoclsize2_user(_this, _atrade_taxrate_result_zoclsize2_next);
        };
        
        static hook_record _atrade_taxrate_result_zocl_functions[] = {
        {   (LPVOID)0x1402d9990L,
            (LPVOID *)&_atrade_taxrate_result_zoclsize2_user,
            (LPVOID *)&_atrade_taxrate_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_atrade_taxrate_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_atrade_taxrate_result_zocl::*)())&_atrade_taxrate_result_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
