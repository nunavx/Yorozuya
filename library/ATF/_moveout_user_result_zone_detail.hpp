// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_moveout_user_result_zone_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_moveout_user_result_zonesize2_ptr _moveout_user_result_zonesize2_next(nullptr);
        static info::_moveout_user_result_zonesize2_clbk _moveout_user_result_zonesize2_user(nullptr);
        
        static int _moveout_user_result_zonesize2_wrapper(struct _moveout_user_result_zone* _this)
        {
           return _moveout_user_result_zonesize2_user(_this, _moveout_user_result_zonesize2_next);
        };
        
        static hook_record _moveout_user_result_zone_functions[] = {
        {   (LPVOID)0x14011fbd0L,
            (LPVOID *)&_moveout_user_result_zonesize2_user,
            (LPVOID *)&_moveout_user_result_zonesize2_next,
            (LPVOID)cast_pointer_function(_moveout_user_result_zonesize2_wrapper),
            (LPVOID)cast_pointer_function((int(_moveout_user_result_zone::*)())&_moveout_user_result_zone::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
