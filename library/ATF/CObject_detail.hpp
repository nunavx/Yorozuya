// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CObject_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CObjectIsKindOf1_ptr CObjectIsKindOf1_next(nullptr);
        static info::CObjectIsKindOf1_clbk CObjectIsKindOf1_user(nullptr);
        static info::CObjectSerialize2_ptr CObjectSerialize2_next(nullptr);
        static info::CObjectSerialize2_clbk CObjectSerialize2_user(nullptr);
        
        static int64_t CObjectIsKindOf1_wrapper(struct CObject* _this, struct CRuntimeClass* arg_0)
        {
           return CObjectIsKindOf1_user(_this, arg_0, CObjectIsKindOf1_next);
        };
        static void CObjectSerialize2_wrapper(struct CObject* _this, struct CArchive* arg_0)
        {
           CObjectSerialize2_user(_this, arg_0, CObjectSerialize2_next);
        };
        
        static hook_record CObject_functions[] = {
        {   (LPVOID)0x1404dc210L,
            (LPVOID *)&CObjectIsKindOf1_user,
            (LPVOID *)&CObjectIsKindOf1_next,
            (LPVOID)cast_pointer_function(CObjectIsKindOf1_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CObject::*)(struct CRuntimeClass*))&CObject::IsKindOf) },
        {   (LPVOID)0x1404dbb8cL,
            (LPVOID *)&CObjectSerialize2_user,
            (LPVOID *)&CObjectSerialize2_next,
            (LPVOID)cast_pointer_function(CObjectSerialize2_wrapper),
            (LPVOID)cast_pointer_function((void(CObject::*)(struct CArchive*))&CObject::Serialize) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
