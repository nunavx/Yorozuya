// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_mon_block_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_mon_blockSelectDummyIndex2_ptr _mon_blockSelectDummyIndex2_next(nullptr);
        static info::_mon_blockSelectDummyIndex2_clbk _mon_blockSelectDummyIndex2_user(nullptr);
        static info::_mon_blockSetBlock4_ptr _mon_blockSetBlock4_next(nullptr);
        static info::_mon_blockSetBlock4_clbk _mon_blockSetBlock4_user(nullptr);
        static info::_mon_blockSetRotateBlock6_ptr _mon_blockSetRotateBlock6_next(nullptr);
        static info::_mon_blockSetRotateBlock6_clbk _mon_blockSetRotateBlock6_user(nullptr);
        
        static int _mon_blockSelectDummyIndex2_wrapper(struct _mon_block* _this)
        {
           return _mon_blockSelectDummyIndex2_user(_this, _mon_blockSelectDummyIndex2_next);
        };
        static bool _mon_blockSetBlock4_wrapper(struct _mon_block* _this, struct _mon_block_fld* pBlkRec, struct CMapData* pMap, struct _dummy_position** ppDumPos)
        {
           return _mon_blockSetBlock4_user(_this, pBlkRec, pMap, ppDumPos, _mon_blockSetBlock4_next);
        };
        static void _mon_blockSetRotateBlock6_wrapper(struct _mon_block* _this, bool rhs)
        {
           _mon_blockSetRotateBlock6_user(_this, rhs, _mon_blockSetRotateBlock6_next);
        };
        
        static hook_record _mon_block_functions[] = {
        {   (LPVOID)0x140189fc0L,
            (LPVOID *)&_mon_blockSelectDummyIndex2_user,
            (LPVOID *)&_mon_blockSelectDummyIndex2_next,
            (LPVOID)cast_pointer_function(_mon_blockSelectDummyIndex2_wrapper),
            (LPVOID)cast_pointer_function((int(_mon_block::*)())&_mon_block::SelectDummyIndex) },
        {   (LPVOID)0x140189e60L,
            (LPVOID *)&_mon_blockSetBlock4_user,
            (LPVOID *)&_mon_blockSetBlock4_next,
            (LPVOID)cast_pointer_function(_mon_blockSetBlock4_wrapper),
            (LPVOID)cast_pointer_function((bool(_mon_block::*)(struct _mon_block_fld*, struct CMapData*, struct _dummy_position**))&_mon_block::SetBlock) },
        {   (LPVOID)0x140189140L,
            (LPVOID *)&_mon_blockSetRotateBlock6_user,
            (LPVOID *)&_mon_blockSetRotateBlock6_next,
            (LPVOID)cast_pointer_function(_mon_blockSetRotateBlock6_wrapper),
            (LPVOID)cast_pointer_function((void(_mon_block::*)(bool))&_mon_block::SetRotateBlock) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
