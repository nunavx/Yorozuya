// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_PVP_RANK_REFRESH_USER_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_PVP_RANK_REFRESH_USERInit2_ptr _PVP_RANK_REFRESH_USERInit2_next(nullptr);
        static info::_PVP_RANK_REFRESH_USERInit2_clbk _PVP_RANK_REFRESH_USERInit2_user(nullptr);
        static info::_PVP_RANK_REFRESH_USERIsFilled4_ptr _PVP_RANK_REFRESH_USERIsFilled4_next(nullptr);
        static info::_PVP_RANK_REFRESH_USERIsFilled4_clbk _PVP_RANK_REFRESH_USERIsFilled4_user(nullptr);
        static info::_PVP_RANK_REFRESH_USERSetData6_ptr _PVP_RANK_REFRESH_USERSetData6_next(nullptr);
        static info::_PVP_RANK_REFRESH_USERSetData6_clbk _PVP_RANK_REFRESH_USERSetData6_user(nullptr);
        
        static void _PVP_RANK_REFRESH_USERInit2_wrapper(struct _PVP_RANK_REFRESH_USER* _this)
        {
           _PVP_RANK_REFRESH_USERInit2_user(_this, _PVP_RANK_REFRESH_USERInit2_next);
        };
        static bool _PVP_RANK_REFRESH_USERIsFilled4_wrapper(struct _PVP_RANK_REFRESH_USER* _this)
        {
           return _PVP_RANK_REFRESH_USERIsFilled4_user(_this, _PVP_RANK_REFRESH_USERIsFilled4_next);
        };
        static void _PVP_RANK_REFRESH_USERSetData6_wrapper(struct _PVP_RANK_REFRESH_USER* _this, unsigned int dwSerialP, char byLvP, char byRaceP)
        {
           _PVP_RANK_REFRESH_USERSetData6_user(_this, dwSerialP, byLvP, byRaceP, _PVP_RANK_REFRESH_USERSetData6_next);
        };
        
        static hook_record _PVP_RANK_REFRESH_USER_functions[] = {
        {   (LPVOID)0x140336aa0L,
            (LPVOID *)&_PVP_RANK_REFRESH_USERInit2_user,
            (LPVOID *)&_PVP_RANK_REFRESH_USERInit2_next,
            (LPVOID)cast_pointer_function(_PVP_RANK_REFRESH_USERInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_PVP_RANK_REFRESH_USER::*)())&_PVP_RANK_REFRESH_USER::Init) },
        {   (LPVOID)0x140336ac0L,
            (LPVOID *)&_PVP_RANK_REFRESH_USERIsFilled4_user,
            (LPVOID *)&_PVP_RANK_REFRESH_USERIsFilled4_next,
            (LPVOID)cast_pointer_function(_PVP_RANK_REFRESH_USERIsFilled4_wrapper),
            (LPVOID)cast_pointer_function((bool(_PVP_RANK_REFRESH_USER::*)())&_PVP_RANK_REFRESH_USER::IsFilled) },
        {   (LPVOID)0x140336ae0L,
            (LPVOID *)&_PVP_RANK_REFRESH_USERSetData6_user,
            (LPVOID *)&_PVP_RANK_REFRESH_USERSetData6_next,
            (LPVOID)cast_pointer_function(_PVP_RANK_REFRESH_USERSetData6_wrapper),
            (LPVOID)cast_pointer_function((void(_PVP_RANK_REFRESH_USER::*)(unsigned int, char, char))&_PVP_RANK_REFRESH_USER::SetData) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
