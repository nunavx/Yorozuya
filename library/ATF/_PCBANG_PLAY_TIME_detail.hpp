// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_PCBANG_PLAY_TIME_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_PCBANG_PLAY_TIMEInit2_ptr _PCBANG_PLAY_TIMEInit2_next(nullptr);
        static info::_PCBANG_PLAY_TIMEInit2_clbk _PCBANG_PLAY_TIMEInit2_user(nullptr);
        
        static void _PCBANG_PLAY_TIMEInit2_wrapper(struct _PCBANG_PLAY_TIME* _this)
        {
           _PCBANG_PLAY_TIMEInit2_user(_this, _PCBANG_PLAY_TIMEInit2_next);
        };
        
        static hook_record _PCBANG_PLAY_TIME_functions[] = {
        {   (LPVOID)0x140077da0L,
            (LPVOID *)&_PCBANG_PLAY_TIMEInit2_user,
            (LPVOID *)&_PCBANG_PLAY_TIMEInit2_next,
            (LPVOID)cast_pointer_function(_PCBANG_PLAY_TIMEInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_PCBANG_PLAY_TIME::*)())&_PCBANG_PLAY_TIME::Init) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
