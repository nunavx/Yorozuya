// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_event_participant_classrefine_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_event_participant_classrefineIsChanged2_ptr _event_participant_classrefineIsChanged2_next(nullptr);
        static info::_event_participant_classrefineIsChanged2_clbk _event_participant_classrefineIsChanged2_user(nullptr);
        static info::_event_participant_classrefinesize4_ptr _event_participant_classrefinesize4_next(nullptr);
        static info::_event_participant_classrefinesize4_clbk _event_participant_classrefinesize4_user(nullptr);
        
        static bool _event_participant_classrefineIsChanged2_wrapper(struct _event_participant_classrefine* _this)
        {
           return _event_participant_classrefineIsChanged2_user(_this, _event_participant_classrefineIsChanged2_next);
        };
        static int _event_participant_classrefinesize4_wrapper(struct _event_participant_classrefine* _this)
        {
           return _event_participant_classrefinesize4_user(_this, _event_participant_classrefinesize4_next);
        };
        
        static hook_record _event_participant_classrefine_functions[] = {
        {   (LPVOID)0x140329680L,
            (LPVOID *)&_event_participant_classrefineIsChanged2_user,
            (LPVOID *)&_event_participant_classrefineIsChanged2_next,
            (LPVOID)cast_pointer_function(_event_participant_classrefineIsChanged2_wrapper),
            (LPVOID)cast_pointer_function((bool(_event_participant_classrefine::*)())&_event_participant_classrefine::IsChanged) },
        {   (LPVOID)0x1401bfec0L,
            (LPVOID *)&_event_participant_classrefinesize4_user,
            (LPVOID *)&_event_participant_classrefinesize4_next,
            (LPVOID)cast_pointer_function(_event_participant_classrefinesize4_wrapper),
            (LPVOID)cast_pointer_function((int(_event_participant_classrefine::*)())&_event_participant_classrefine::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
