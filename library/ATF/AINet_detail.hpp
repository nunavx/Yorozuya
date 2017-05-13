// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "AINet_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::AINetctor_AINet2_ptr AINetctor_AINet2_next(nullptr);
        static info::AINetctor_AINet2_clbk AINetctor_AINet2_user(nullptr);
        static info::AINetdtor_AINet7_ptr AINetdtor_AINet7_next(nullptr);
        static info::AINetdtor_AINet7_clbk AINetdtor_AINet7_user(nullptr);
        
        static void AINetctor_AINet2_wrapper(struct AINet* _this, char* pstrAgent, unsigned int dwAccessType, char* pstrProxyName, char* pstrProxyBypass, unsigned int dwFlags)
        {
           AINetctor_AINet2_user(_this, pstrAgent, dwAccessType, pstrProxyName, pstrProxyBypass, dwFlags, AINetctor_AINet2_next);
        };
        static void AINetdtor_AINet7_wrapper(struct AINet* _this)
        {
           AINetdtor_AINet7_user(_this, AINetdtor_AINet7_next);
        };
        
        static hook_record AINet_functions[] = {
        {   (LPVOID)0x140432290L,
            (LPVOID *)&AINetctor_AINet2_user,
            (LPVOID *)&AINetctor_AINet2_next,
            (LPVOID)cast_pointer_function(AINetctor_AINet2_wrapper),
            (LPVOID)cast_pointer_function((void(AINet::*)(char*, unsigned int, char*, char*, unsigned int))&AINet::ctor_AINet) },
        {   (LPVOID)0x140432310L,
            (LPVOID *)&AINetdtor_AINet7_user,
            (LPVOID *)&AINetdtor_AINet7_next,
            (LPVOID)cast_pointer_function(AINetdtor_AINet7_wrapper),
            (LPVOID)cast_pointer_function((void(AINet::*)())&AINet::dtor_AINet) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
