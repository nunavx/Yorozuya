// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_notice_move_limit_map_msg_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_ptr _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_next(nullptr);
        static info::_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_clbk _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_user(nullptr);
        
        static void _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_wrapper(struct _notice_move_limit_map_msg_zocl* _this)
        {
           _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_user(_this, _notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_next);
        };
        
        static hook_record _notice_move_limit_map_msg_zocl_functions[] = {
        {   (LPVOID)0x1403a7100L,
            (LPVOID *)&_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_user,
            (LPVOID *)&_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_next,
            (LPVOID)cast_pointer_function(_notice_move_limit_map_msg_zoclctor__notice_move_limit_map_msg_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_notice_move_limit_map_msg_zocl::*)())&_notice_move_limit_map_msg_zocl::ctor__notice_move_limit_map_msg_zocl) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
