// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CTraceSnapshot_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CTraceSnapshotctor_CTraceSnapshot1_ptr CTraceSnapshotctor_CTraceSnapshot1_next(nullptr);
        static info::CTraceSnapshotctor_CTraceSnapshot1_clbk CTraceSnapshotctor_CTraceSnapshot1_user(nullptr);
        static info::CTraceSnapshotdtor_CTraceSnapshot2_ptr CTraceSnapshotdtor_CTraceSnapshot2_next(nullptr);
        static info::CTraceSnapshotdtor_CTraceSnapshot2_clbk CTraceSnapshotdtor_CTraceSnapshot2_user(nullptr);
        
        static void CTraceSnapshotctor_CTraceSnapshot1_wrapper(struct CTraceSnapshot* _this)
        {
           CTraceSnapshotctor_CTraceSnapshot1_user(_this, CTraceSnapshotctor_CTraceSnapshot1_next);
        };
        static void CTraceSnapshotdtor_CTraceSnapshot2_wrapper(struct CTraceSnapshot* _this)
        {
           CTraceSnapshotdtor_CTraceSnapshot2_user(_this, CTraceSnapshotdtor_CTraceSnapshot2_next);
        };
        
        static hook_record CTraceSnapshot_functions[] = {
        {   (LPVOID)0x14066db40L,
            (LPVOID *)&CTraceSnapshotctor_CTraceSnapshot1_user,
            (LPVOID *)&CTraceSnapshotctor_CTraceSnapshot1_next,
            (LPVOID)cast_pointer_function(CTraceSnapshotctor_CTraceSnapshot1_wrapper),
            (LPVOID)cast_pointer_function((void(CTraceSnapshot::*)())&CTraceSnapshot::ctor_CTraceSnapshot) },
        {   (LPVOID)0x14066de50L,
            (LPVOID *)&CTraceSnapshotdtor_CTraceSnapshot2_user,
            (LPVOID *)&CTraceSnapshotdtor_CTraceSnapshot2_next,
            (LPVOID)cast_pointer_function(CTraceSnapshotdtor_CTraceSnapshot2_wrapper),
            (LPVOID)cast_pointer_function((void(CTraceSnapshot::*)())&CTraceSnapshot::dtor_CTraceSnapshot) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
