// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRadarItemMgr_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CRadarItemMgrctor_CRadarItemMgr2_ptr CRadarItemMgrctor_CRadarItemMgr2_next(nullptr);
        static info::CRadarItemMgrctor_CRadarItemMgr2_clbk CRadarItemMgrctor_CRadarItemMgr2_user(nullptr);
        static info::CRadarItemMgrCalcDelay4_ptr CRadarItemMgrCalcDelay4_next(nullptr);
        static info::CRadarItemMgrCalcDelay4_clbk CRadarItemMgrCalcDelay4_user(nullptr);
        static info::CRadarItemMgrGetDelayTime6_ptr CRadarItemMgrGetDelayTime6_next(nullptr);
        static info::CRadarItemMgrGetDelayTime6_clbk CRadarItemMgrGetDelayTime6_user(nullptr);
        static info::CRadarItemMgrGetStartTime8_ptr CRadarItemMgrGetStartTime8_next(nullptr);
        static info::CRadarItemMgrGetStartTime8_clbk CRadarItemMgrGetStartTime8_user(nullptr);
        static info::CRadarItemMgrInit10_ptr CRadarItemMgrInit10_next(nullptr);
        static info::CRadarItemMgrInit10_clbk CRadarItemMgrInit10_user(nullptr);
        static info::CRadarItemMgrInit12_ptr CRadarItemMgrInit12_next(nullptr);
        static info::CRadarItemMgrInit12_clbk CRadarItemMgrInit12_user(nullptr);
        static info::CRadarItemMgrIsRadarUse14_ptr CRadarItemMgrIsRadarUse14_next(nullptr);
        static info::CRadarItemMgrIsRadarUse14_clbk CRadarItemMgrIsRadarUse14_user(nullptr);
        static info::CRadarItemMgrIsUpdate16_ptr CRadarItemMgrIsUpdate16_next(nullptr);
        static info::CRadarItemMgrIsUpdate16_clbk CRadarItemMgrIsUpdate16_user(nullptr);
        static info::CRadarItemMgrIsUse18_ptr CRadarItemMgrIsUse18_next(nullptr);
        static info::CRadarItemMgrIsUse18_clbk CRadarItemMgrIsUse18_user(nullptr);
        static info::CRadarItemMgrRadarProc20_ptr CRadarItemMgrRadarProc20_next(nullptr);
        static info::CRadarItemMgrRadarProc20_clbk CRadarItemMgrRadarProc20_user(nullptr);
        static info::CRadarItemMgrResetFlags22_ptr CRadarItemMgrResetFlags22_next(nullptr);
        static info::CRadarItemMgrResetFlags22_clbk CRadarItemMgrResetFlags22_user(nullptr);
        static info::CRadarItemMgrResetUpdate24_ptr CRadarItemMgrResetUpdate24_next(nullptr);
        static info::CRadarItemMgrResetUpdate24_clbk CRadarItemMgrResetUpdate24_user(nullptr);
        static info::CRadarItemMgrSetUseRadar26_ptr CRadarItemMgrSetUseRadar26_next(nullptr);
        static info::CRadarItemMgrSetUseRadar26_clbk CRadarItemMgrSetUseRadar26_user(nullptr);
        static info::CRadarItemMgrdtor_CRadarItemMgr28_ptr CRadarItemMgrdtor_CRadarItemMgr28_next(nullptr);
        static info::CRadarItemMgrdtor_CRadarItemMgr28_clbk CRadarItemMgrdtor_CRadarItemMgr28_user(nullptr);
        
        static void CRadarItemMgrctor_CRadarItemMgr2_wrapper(struct CRadarItemMgr* _this)
        {
           CRadarItemMgrctor_CRadarItemMgr2_user(_this, CRadarItemMgrctor_CRadarItemMgr2_next);
        };
        static unsigned int CRadarItemMgrCalcDelay4_wrapper(struct CRadarItemMgr* _this)
        {
           return CRadarItemMgrCalcDelay4_user(_this, CRadarItemMgrCalcDelay4_next);
        };
        static unsigned int CRadarItemMgrGetDelayTime6_wrapper(struct CRadarItemMgr* _this)
        {
           return CRadarItemMgrGetDelayTime6_user(_this, CRadarItemMgrGetDelayTime6_next);
        };
        static unsigned int CRadarItemMgrGetStartTime8_wrapper(struct CRadarItemMgr* _this)
        {
           return CRadarItemMgrGetStartTime8_user(_this, CRadarItemMgrGetStartTime8_next);
        };
        static void CRadarItemMgrInit10_wrapper(struct CRadarItemMgr* _this, unsigned int dwDelayTime)
        {
           CRadarItemMgrInit10_user(_this, dwDelayTime, CRadarItemMgrInit10_next);
        };
        static void CRadarItemMgrInit12_wrapper(struct CRadarItemMgr* _this)
        {
           CRadarItemMgrInit12_user(_this, CRadarItemMgrInit12_next);
        };
        static bool CRadarItemMgrIsRadarUse14_wrapper(struct CRadarItemMgr* _this)
        {
           return CRadarItemMgrIsRadarUse14_user(_this, CRadarItemMgrIsRadarUse14_next);
        };
        static bool CRadarItemMgrIsUpdate16_wrapper(struct CRadarItemMgr* _this)
        {
           return CRadarItemMgrIsUpdate16_user(_this, CRadarItemMgrIsUpdate16_next);
        };
        static bool CRadarItemMgrIsUse18_wrapper(struct CRadarItemMgr* _this)
        {
           return CRadarItemMgrIsUse18_user(_this, CRadarItemMgrIsUse18_next);
        };
        static bool CRadarItemMgrRadarProc20_wrapper(struct CRadarItemMgr* _this, struct _RadarItem_fld* pRadarFld)
        {
           return CRadarItemMgrRadarProc20_user(_this, pRadarFld, CRadarItemMgrRadarProc20_next);
        };
        static void CRadarItemMgrResetFlags22_wrapper(struct CRadarItemMgr* _this)
        {
           CRadarItemMgrResetFlags22_user(_this, CRadarItemMgrResetFlags22_next);
        };
        static void CRadarItemMgrResetUpdate24_wrapper(struct CRadarItemMgr* _this)
        {
           CRadarItemMgrResetUpdate24_user(_this, CRadarItemMgrResetUpdate24_next);
        };
        static void CRadarItemMgrSetUseRadar26_wrapper(struct CRadarItemMgr* _this, char** strRadarCode, struct CPlayer* pMaster, unsigned int dwDurTime, unsigned int dwDelayTime)
        {
           CRadarItemMgrSetUseRadar26_user(_this, strRadarCode, pMaster, dwDurTime, dwDelayTime, CRadarItemMgrSetUseRadar26_next);
        };
        static void CRadarItemMgrdtor_CRadarItemMgr28_wrapper(struct CRadarItemMgr* _this)
        {
           CRadarItemMgrdtor_CRadarItemMgr28_user(_this, CRadarItemMgrdtor_CRadarItemMgr28_next);
        };
        
        static hook_record CRadarItemMgr_functions[] = {
        {   (LPVOID)0x1402e49c0L,
            (LPVOID *)&CRadarItemMgrctor_CRadarItemMgr2_user,
            (LPVOID *)&CRadarItemMgrctor_CRadarItemMgr2_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrctor_CRadarItemMgr2_wrapper),
            (LPVOID)cast_pointer_function((void(CRadarItemMgr::*)())&CRadarItemMgr::ctor_CRadarItemMgr) },
        {   (LPVOID)0x1402e5410L,
            (LPVOID *)&CRadarItemMgrCalcDelay4_user,
            (LPVOID *)&CRadarItemMgrCalcDelay4_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrCalcDelay4_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CRadarItemMgr::*)())&CRadarItemMgr::CalcDelay) },
        {   (LPVOID)0x1402e54c0L,
            (LPVOID *)&CRadarItemMgrGetDelayTime6_user,
            (LPVOID *)&CRadarItemMgrGetDelayTime6_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrGetDelayTime6_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CRadarItemMgr::*)())&CRadarItemMgr::GetDelayTime) },
        {   (LPVOID)0x1402e54e0L,
            (LPVOID *)&CRadarItemMgrGetStartTime8_user,
            (LPVOID *)&CRadarItemMgrGetStartTime8_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrGetStartTime8_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CRadarItemMgr::*)())&CRadarItemMgr::GetStartTime) },
        {   (LPVOID)0x1402e4b00L,
            (LPVOID *)&CRadarItemMgrInit10_user,
            (LPVOID *)&CRadarItemMgrInit10_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrInit10_wrapper),
            (LPVOID)cast_pointer_function((void(CRadarItemMgr::*)(unsigned int))&CRadarItemMgr::Init) },
        {   (LPVOID)0x1402e4a20L,
            (LPVOID *)&CRadarItemMgrInit12_user,
            (LPVOID *)&CRadarItemMgrInit12_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrInit12_wrapper),
            (LPVOID)cast_pointer_function((void(CRadarItemMgr::*)())&CRadarItemMgr::Init) },
        {   (LPVOID)0x1402e4d00L,
            (LPVOID *)&CRadarItemMgrIsRadarUse14_user,
            (LPVOID *)&CRadarItemMgrIsRadarUse14_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrIsRadarUse14_wrapper),
            (LPVOID)cast_pointer_function((bool(CRadarItemMgr::*)())&CRadarItemMgr::IsRadarUse) },
        {   (LPVOID)0x1402e4db0L,
            (LPVOID *)&CRadarItemMgrIsUpdate16_user,
            (LPVOID *)&CRadarItemMgrIsUpdate16_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrIsUpdate16_wrapper),
            (LPVOID)cast_pointer_function((bool(CRadarItemMgr::*)())&CRadarItemMgr::IsUpdate) },
        {   (LPVOID)0x1402e4d90L,
            (LPVOID *)&CRadarItemMgrIsUse18_user,
            (LPVOID *)&CRadarItemMgrIsUse18_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrIsUse18_wrapper),
            (LPVOID)cast_pointer_function((bool(CRadarItemMgr::*)())&CRadarItemMgr::IsUse) },
        {   (LPVOID)0x1402e4e30L,
            (LPVOID *)&CRadarItemMgrRadarProc20_user,
            (LPVOID *)&CRadarItemMgrRadarProc20_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrRadarProc20_wrapper),
            (LPVOID)cast_pointer_function((bool(CRadarItemMgr::*)(struct _RadarItem_fld*))&CRadarItemMgr::RadarProc) },
        {   (LPVOID)0x1402e4dd0L,
            (LPVOID *)&CRadarItemMgrResetFlags22_user,
            (LPVOID *)&CRadarItemMgrResetFlags22_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrResetFlags22_wrapper),
            (LPVOID)cast_pointer_function((void(CRadarItemMgr::*)())&CRadarItemMgr::ResetFlags) },
        {   (LPVOID)0x1402e4e10L,
            (LPVOID *)&CRadarItemMgrResetUpdate24_user,
            (LPVOID *)&CRadarItemMgrResetUpdate24_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrResetUpdate24_wrapper),
            (LPVOID)cast_pointer_function((void(CRadarItemMgr::*)())&CRadarItemMgr::ResetUpdate) },
        {   (LPVOID)0x1402e4c20L,
            (LPVOID *)&CRadarItemMgrSetUseRadar26_user,
            (LPVOID *)&CRadarItemMgrSetUseRadar26_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrSetUseRadar26_wrapper),
            (LPVOID)cast_pointer_function((void(CRadarItemMgr::*)(char**, struct CPlayer*, unsigned int, unsigned int))&CRadarItemMgr::SetUseRadar) },
        {   (LPVOID)0x1402e4a10L,
            (LPVOID *)&CRadarItemMgrdtor_CRadarItemMgr28_user,
            (LPVOID *)&CRadarItemMgrdtor_CRadarItemMgr28_next,
            (LPVOID)cast_pointer_function(CRadarItemMgrdtor_CRadarItemMgr28_wrapper),
            (LPVOID)cast_pointer_function((void(CRadarItemMgr::*)())&CRadarItemMgr::dtor_CRadarItemMgr) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
