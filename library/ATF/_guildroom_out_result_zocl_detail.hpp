// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_guildroom_out_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_guildroom_out_result_zoclsize2_ptr _guildroom_out_result_zoclsize2_next(nullptr);
        static info::_guildroom_out_result_zoclsize2_clbk _guildroom_out_result_zoclsize2_user(nullptr);
        
        static int _guildroom_out_result_zoclsize2_wrapper(struct _guildroom_out_result_zocl* _this)
        {
           return _guildroom_out_result_zoclsize2_user(_this, _guildroom_out_result_zoclsize2_next);
        };
        
        static hook_record _guildroom_out_result_zocl_functions[] = {
        {   (LPVOID)0x1400f03b0L,
            (LPVOID *)&_guildroom_out_result_zoclsize2_user,
            (LPVOID *)&_guildroom_out_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_guildroom_out_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_guildroom_out_result_zocl::*)())&_guildroom_out_result_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
