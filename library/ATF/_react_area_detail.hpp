// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_react_area_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_react_areactor__react_area2_ptr _react_areactor__react_area2_next(nullptr);
        static info::_react_areactor__react_area2_clbk _react_areactor__react_area2_user(nullptr);
        static info::_react_areacopy4_ptr _react_areacopy4_next(nullptr);
        static info::_react_areacopy4_clbk _react_areacopy4_user(nullptr);
        
        static void _react_areactor__react_area2_wrapper(struct _react_area* _this)
        {
           _react_areactor__react_area2_user(_this, _react_areactor__react_area2_next);
        };
        static void _react_areacopy4_wrapper(struct _react_area* _this, struct _react_area* pObj)
        {
           _react_areacopy4_user(_this, pObj, _react_areacopy4_next);
        };
        
        static hook_record _react_area_functions[] = {
        {   (LPVOID)0x14027a340L,
            (LPVOID *)&_react_areactor__react_area2_user,
            (LPVOID *)&_react_areactor__react_area2_next,
            (LPVOID)cast_pointer_function(_react_areactor__react_area2_wrapper),
            (LPVOID)cast_pointer_function((void(_react_area::*)())&_react_area::ctor__react_area) },
        {   (LPVOID)0x14027a390L,
            (LPVOID *)&_react_areacopy4_user,
            (LPVOID *)&_react_areacopy4_next,
            (LPVOID)cast_pointer_function(_react_areacopy4_wrapper),
            (LPVOID)cast_pointer_function((void(_react_area::*)(struct _react_area*))&_react_area::copy) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
