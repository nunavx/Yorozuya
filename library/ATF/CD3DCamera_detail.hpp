// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CD3DCamera_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CD3DCameractor_CD3DCamera1_ptr CD3DCameractor_CD3DCamera1_next(nullptr);
        static info::CD3DCameractor_CD3DCamera1_clbk CD3DCameractor_CD3DCamera1_user(nullptr);
        static info::CD3DCameraSetProjParams2_ptr CD3DCameraSetProjParams2_next(nullptr);
        static info::CD3DCameraSetProjParams2_clbk CD3DCameraSetProjParams2_user(nullptr);
        static info::CD3DCameraSetViewParams3_ptr CD3DCameraSetViewParams3_next(nullptr);
        static info::CD3DCameraSetViewParams3_clbk CD3DCameraSetViewParams3_user(nullptr);
        
        static int64_t CD3DCameractor_CD3DCamera1_wrapper(struct CD3DCamera* _this)
        {
           return CD3DCameractor_CD3DCamera1_user(_this, CD3DCameractor_CD3DCamera1_next);
        };
        static void CD3DCameraSetProjParams2_wrapper(struct CD3DCamera* _this, float arg_0, float arg_1, float arg_2, float arg_3)
        {
           CD3DCameraSetProjParams2_user(_this, arg_0, arg_1, arg_2, arg_3, CD3DCameraSetProjParams2_next);
        };
        static void CD3DCameraSetViewParams3_wrapper(struct CD3DCamera* _this, struct D3DXVECTOR3* arg_0, struct D3DXVECTOR3* arg_1, struct D3DXVECTOR3* arg_2)
        {
           CD3DCameraSetViewParams3_user(_this, arg_0, arg_1, arg_2, CD3DCameraSetViewParams3_next);
        };
        
        static hook_record CD3DCamera_functions[] = {
        {   (LPVOID)0x14052c940L,
            (LPVOID *)&CD3DCameractor_CD3DCamera1_user,
            (LPVOID *)&CD3DCameractor_CD3DCamera1_next,
            (LPVOID)cast_pointer_function(CD3DCameractor_CD3DCamera1_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CD3DCamera::*)())&CD3DCamera::ctor_CD3DCamera) },
        {   (LPVOID)0x14052c8f0L,
            (LPVOID *)&CD3DCameraSetProjParams2_user,
            (LPVOID *)&CD3DCameraSetProjParams2_next,
            (LPVOID)cast_pointer_function(CD3DCameraSetProjParams2_wrapper),
            (LPVOID)cast_pointer_function((void(CD3DCamera::*)(float, float, float, float))&CD3DCamera::SetProjParams) },
        {   (LPVOID)0x14052c7a0L,
            (LPVOID *)&CD3DCameraSetViewParams3_user,
            (LPVOID *)&CD3DCameraSetViewParams3_next,
            (LPVOID)cast_pointer_function(CD3DCameraSetViewParams3_wrapper),
            (LPVOID)cast_pointer_function((void(CD3DCamera::*)(struct D3DXVECTOR3*, struct D3DXVECTOR3*, struct D3DXVECTOR3*))&CD3DCamera::SetViewParams) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
