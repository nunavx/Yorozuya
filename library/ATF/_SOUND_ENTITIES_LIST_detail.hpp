// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_SOUND_ENTITIES_LIST_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_SOUND_ENTITIES_LISTGetBoxIntensity1_ptr _SOUND_ENTITIES_LISTGetBoxIntensity1_next(nullptr);
        static info::_SOUND_ENTITIES_LISTGetBoxIntensity1_clbk _SOUND_ENTITIES_LISTGetBoxIntensity1_user(nullptr);
        static info::_SOUND_ENTITIES_LISTGetPan2_ptr _SOUND_ENTITIES_LISTGetPan2_next(nullptr);
        static info::_SOUND_ENTITIES_LISTGetPan2_clbk _SOUND_ENTITIES_LISTGetPan2_user(nullptr);
        static info::_SOUND_ENTITIES_LISTGetVolume3_ptr _SOUND_ENTITIES_LISTGetVolume3_next(nullptr);
        static info::_SOUND_ENTITIES_LISTGetVolume3_clbk _SOUND_ENTITIES_LISTGetVolume3_user(nullptr);
        
        static float _SOUND_ENTITIES_LISTGetBoxIntensity1_wrapper(struct _SOUND_ENTITIES_LIST* _this, float* arg_0)
        {
           return _SOUND_ENTITIES_LISTGetBoxIntensity1_user(_this, arg_0, _SOUND_ENTITIES_LISTGetBoxIntensity1_next);
        };
        static float _SOUND_ENTITIES_LISTGetPan2_wrapper(struct _SOUND_ENTITIES_LIST* _this, float* arg_0)
        {
           return _SOUND_ENTITIES_LISTGetPan2_user(_this, arg_0, _SOUND_ENTITIES_LISTGetPan2_next);
        };
        static float _SOUND_ENTITIES_LISTGetVolume3_wrapper(struct _SOUND_ENTITIES_LIST* _this, float* arg_0)
        {
           return _SOUND_ENTITIES_LISTGetVolume3_user(_this, arg_0, _SOUND_ENTITIES_LISTGetVolume3_next);
        };
        
        static hook_record _SOUND_ENTITIES_LIST_functions[] = {
        {   (LPVOID)0x140520540L,
            (LPVOID *)&_SOUND_ENTITIES_LISTGetBoxIntensity1_user,
            (LPVOID *)&_SOUND_ENTITIES_LISTGetBoxIntensity1_next,
            (LPVOID)cast_pointer_function(_SOUND_ENTITIES_LISTGetBoxIntensity1_wrapper),
            (LPVOID)cast_pointer_function((float(_SOUND_ENTITIES_LIST::*)(float*))&_SOUND_ENTITIES_LIST::GetBoxIntensity) },
        {   (LPVOID)0x1405203f0L,
            (LPVOID *)&_SOUND_ENTITIES_LISTGetPan2_user,
            (LPVOID *)&_SOUND_ENTITIES_LISTGetPan2_next,
            (LPVOID)cast_pointer_function(_SOUND_ENTITIES_LISTGetPan2_wrapper),
            (LPVOID)cast_pointer_function((float(_SOUND_ENTITIES_LIST::*)(float*))&_SOUND_ENTITIES_LIST::GetPan) },
        {   (LPVOID)0x140520360L,
            (LPVOID *)&_SOUND_ENTITIES_LISTGetVolume3_user,
            (LPVOID *)&_SOUND_ENTITIES_LISTGetVolume3_next,
            (LPVOID)cast_pointer_function(_SOUND_ENTITIES_LISTGetVolume3_wrapper),
            (LPVOID)cast_pointer_function((float(_SOUND_ENTITIES_LIST::*)(float*))&_SOUND_ENTITIES_LIST::GetVolume) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
