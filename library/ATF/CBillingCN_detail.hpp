// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CBillingCN_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CBillingCNctor_CBillingCN2_ptr CBillingCNctor_CBillingCN2_next(nullptr);
        static info::CBillingCNctor_CBillingCN2_clbk CBillingCNctor_CBillingCN2_user(nullptr);
        static info::CBillingCNdtor_CBillingCN7_ptr CBillingCNdtor_CBillingCN7_next(nullptr);
        static info::CBillingCNdtor_CBillingCN7_clbk CBillingCNdtor_CBillingCN7_user(nullptr);
        
        static void CBillingCNctor_CBillingCN2_wrapper(struct CBillingCN* _this)
        {
           CBillingCNctor_CBillingCN2_user(_this, CBillingCNctor_CBillingCN2_next);
        };
        static void CBillingCNdtor_CBillingCN7_wrapper(struct CBillingCN* _this)
        {
           CBillingCNdtor_CBillingCN7_user(_this, CBillingCNdtor_CBillingCN7_next);
        };
        
        static hook_record CBillingCN_functions[] = {
        {   (LPVOID)0x140230ce0L,
            (LPVOID *)&CBillingCNctor_CBillingCN2_user,
            (LPVOID *)&CBillingCNctor_CBillingCN2_next,
            (LPVOID)cast_pointer_function(CBillingCNctor_CBillingCN2_wrapper),
            (LPVOID)cast_pointer_function((void(CBillingCN::*)())&CBillingCN::ctor_CBillingCN) },
        {   (LPVOID)0x140230db0L,
            (LPVOID *)&CBillingCNdtor_CBillingCN7_user,
            (LPVOID *)&CBillingCNdtor_CBillingCN7_next,
            (LPVOID)cast_pointer_function(CBillingCNdtor_CBillingCN7_wrapper),
            (LPVOID)cast_pointer_function((void(CBillingCN::*)())&CBillingCN::dtor_CBillingCN) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
