// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "Player_TL_Status_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::Player_TL_StatusGetTLStatus2_ptr Player_TL_StatusGetTLStatus2_next(nullptr);
        static info::Player_TL_StatusGetTLStatus2_clbk Player_TL_StatusGetTLStatus2_user(nullptr);
        
        static char Player_TL_StatusGetTLStatus2_wrapper(struct Player_TL_Status* _this)
        {
           return Player_TL_StatusGetTLStatus2_user(_this, Player_TL_StatusGetTLStatus2_next);
        };
        
        static hook_record Player_TL_Status_functions[] = {
        {   (LPVOID)0x1403947c0L,
            (LPVOID *)&Player_TL_StatusGetTLStatus2_user,
            (LPVOID *)&Player_TL_StatusGetTLStatus2_next,
            (LPVOID)cast_pointer_function(Player_TL_StatusGetTLStatus2_wrapper),
            (LPVOID)cast_pointer_function((char(Player_TL_Status::*)())&Player_TL_Status::GetTLStatus) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
