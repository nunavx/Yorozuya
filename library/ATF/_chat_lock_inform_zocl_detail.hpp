// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_chat_lock_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_chat_lock_inform_zoclsize2_ptr _chat_lock_inform_zoclsize2_next(nullptr);
        static info::_chat_lock_inform_zoclsize2_clbk _chat_lock_inform_zoclsize2_user(nullptr);
        
        static int _chat_lock_inform_zoclsize2_wrapper(struct _chat_lock_inform_zocl* _this)
        {
           return _chat_lock_inform_zoclsize2_user(_this, _chat_lock_inform_zoclsize2_next);
        };
        
        static hook_record _chat_lock_inform_zocl_functions[] = {
        {   (LPVOID)0x14011f1f0L,
            (LPVOID *)&_chat_lock_inform_zoclsize2_user,
            (LPVOID *)&_chat_lock_inform_zoclsize2_next,
            (LPVOID)cast_pointer_function(_chat_lock_inform_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_chat_lock_inform_zocl::*)())&_chat_lock_inform_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
