// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLuaEventMgr_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CLuaEventMgrAttachEvent2_ptr CLuaEventMgrAttachEvent2_next(nullptr);
        static info::CLuaEventMgrAttachEvent2_clbk CLuaEventMgrAttachEvent2_user(nullptr);
        static info::CLuaEventMgrctor_CLuaEventMgr4_ptr CLuaEventMgrctor_CLuaEventMgr4_next(nullptr);
        static info::CLuaEventMgrctor_CLuaEventMgr4_clbk CLuaEventMgrctor_CLuaEventMgr4_user(nullptr);
        static info::CLuaEventMgrDestroy6_ptr CLuaEventMgrDestroy6_next(nullptr);
        static info::CLuaEventMgrDestroy6_clbk CLuaEventMgrDestroy6_user(nullptr);
        static info::CLuaEventMgrDettachEvent8_ptr CLuaEventMgrDettachEvent8_next(nullptr);
        static info::CLuaEventMgrDettachEvent8_clbk CLuaEventMgrDettachEvent8_user(nullptr);
        static info::CLuaEventMgrInitSDM10_ptr CLuaEventMgrInitSDM10_next(nullptr);
        static info::CLuaEventMgrInitSDM10_clbk CLuaEventMgrInitSDM10_user(nullptr);
        static info::CLuaEventMgrInstance12_ptr CLuaEventMgrInstance12_next(nullptr);
        static info::CLuaEventMgrInstance12_clbk CLuaEventMgrInstance12_user(nullptr);
        static info::CLuaEventMgrLoop14_ptr CLuaEventMgrLoop14_next(nullptr);
        static info::CLuaEventMgrLoop14_clbk CLuaEventMgrLoop14_user(nullptr);
        static info::CLuaEventMgrNewEvent16_ptr CLuaEventMgrNewEvent16_next(nullptr);
        static info::CLuaEventMgrNewEvent16_clbk CLuaEventMgrNewEvent16_user(nullptr);
        static info::CLuaEventMgrRemoveEvent18_ptr CLuaEventMgrRemoveEvent18_next(nullptr);
        static info::CLuaEventMgrRemoveEvent18_clbk CLuaEventMgrRemoveEvent18_user(nullptr);
        static info::CLuaEventMgrSearchEvent20_ptr CLuaEventMgrSearchEvent20_next(nullptr);
        static info::CLuaEventMgrSearchEvent20_clbk CLuaEventMgrSearchEvent20_user(nullptr);
        static info::CLuaEventMgrdtor_CLuaEventMgr24_ptr CLuaEventMgrdtor_CLuaEventMgr24_next(nullptr);
        static info::CLuaEventMgrdtor_CLuaEventMgr24_clbk CLuaEventMgrdtor_CLuaEventMgr24_user(nullptr);
        
        static bool CLuaEventMgrAttachEvent2_wrapper(struct CLuaEventMgr* _this, struct CLuaEventNode* pEvent)
        {
           return CLuaEventMgrAttachEvent2_user(_this, pEvent, CLuaEventMgrAttachEvent2_next);
        };
        static void CLuaEventMgrctor_CLuaEventMgr4_wrapper(struct CLuaEventMgr* _this)
        {
           CLuaEventMgrctor_CLuaEventMgr4_user(_this, CLuaEventMgrctor_CLuaEventMgr4_next);
        };
        static void CLuaEventMgrDestroy6_wrapper()
        {
           CLuaEventMgrDestroy6_user(CLuaEventMgrDestroy6_next);
        };
        static bool CLuaEventMgrDettachEvent8_wrapper(struct CLuaEventMgr* _this, struct CLuaEventNode* pEvent)
        {
           return CLuaEventMgrDettachEvent8_user(_this, pEvent, CLuaEventMgrDettachEvent8_next);
        };
        static bool CLuaEventMgrInitSDM10_wrapper(struct CLuaEventMgr* _this)
        {
           return CLuaEventMgrInitSDM10_user(_this, CLuaEventMgrInitSDM10_next);
        };
        static struct CLuaEventMgr* CLuaEventMgrInstance12_wrapper()
        {
           return CLuaEventMgrInstance12_user(CLuaEventMgrInstance12_next);
        };
        static void CLuaEventMgrLoop14_wrapper(struct CLuaEventMgr* _this)
        {
           CLuaEventMgrLoop14_user(_this, CLuaEventMgrLoop14_next);
        };
        static struct CLuaEventNode* CLuaEventMgrNewEvent16_wrapper(struct CLuaEventMgr* _this)
        {
           return CLuaEventMgrNewEvent16_user(_this, CLuaEventMgrNewEvent16_next);
        };
        static void CLuaEventMgrRemoveEvent18_wrapper(struct CLuaEventMgr* _this, struct CLuaEventNode* pEvent)
        {
           CLuaEventMgrRemoveEvent18_user(_this, pEvent, CLuaEventMgrRemoveEvent18_next);
        };
        static struct CLuaEventNode* CLuaEventMgrSearchEvent20_wrapper(struct CLuaEventMgr* _this, char* strFileName)
        {
           return CLuaEventMgrSearchEvent20_user(_this, strFileName, CLuaEventMgrSearchEvent20_next);
        };
        static void CLuaEventMgrdtor_CLuaEventMgr24_wrapper(struct CLuaEventMgr* _this)
        {
           CLuaEventMgrdtor_CLuaEventMgr24_user(_this, CLuaEventMgrdtor_CLuaEventMgr24_next);
        };
        
        static hook_record CLuaEventMgr_functions[] = {
        {   (LPVOID)0x140403690L,
            (LPVOID *)&CLuaEventMgrAttachEvent2_user,
            (LPVOID *)&CLuaEventMgrAttachEvent2_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrAttachEvent2_wrapper),
            (LPVOID)cast_pointer_function((bool(CLuaEventMgr::*)(struct CLuaEventNode*))&CLuaEventMgr::AttachEvent) },
        {   (LPVOID)0x1404034a0L,
            (LPVOID *)&CLuaEventMgrctor_CLuaEventMgr4_user,
            (LPVOID *)&CLuaEventMgrctor_CLuaEventMgr4_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrctor_CLuaEventMgr4_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)())&CLuaEventMgr::ctor_CLuaEventMgr) },
        {   (LPVOID)0x1402034f0L,
            (LPVOID *)&CLuaEventMgrDestroy6_user,
            (LPVOID *)&CLuaEventMgrDestroy6_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrDestroy6_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CLuaEventMgr::Destroy) },
        {   (LPVOID)0x1404037c0L,
            (LPVOID *)&CLuaEventMgrDettachEvent8_user,
            (LPVOID *)&CLuaEventMgrDettachEvent8_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrDettachEvent8_wrapper),
            (LPVOID)cast_pointer_function((bool(CLuaEventMgr::*)(struct CLuaEventNode*))&CLuaEventMgr::DettachEvent) },
        {   (LPVOID)0x140403570L,
            (LPVOID *)&CLuaEventMgrInitSDM10_user,
            (LPVOID *)&CLuaEventMgrInitSDM10_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrInitSDM10_wrapper),
            (LPVOID)cast_pointer_function((bool(CLuaEventMgr::*)())&CLuaEventMgr::InitSDM) },
        {   (LPVOID)0x140401010L,
            (LPVOID *)&CLuaEventMgrInstance12_user,
            (LPVOID *)&CLuaEventMgrInstance12_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrInstance12_wrapper),
            (LPVOID)cast_pointer_function((struct CLuaEventMgr*(*)())&CLuaEventMgr::Instance) },
        {   (LPVOID)0x140403820L,
            (LPVOID *)&CLuaEventMgrLoop14_user,
            (LPVOID *)&CLuaEventMgrLoop14_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrLoop14_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)())&CLuaEventMgr::Loop) },
        {   (LPVOID)0x140403580L,
            (LPVOID *)&CLuaEventMgrNewEvent16_user,
            (LPVOID *)&CLuaEventMgrNewEvent16_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrNewEvent16_wrapper),
            (LPVOID)cast_pointer_function((struct CLuaEventNode*(CLuaEventMgr::*)())&CLuaEventMgr::NewEvent) },
        {   (LPVOID)0x140403610L,
            (LPVOID *)&CLuaEventMgrRemoveEvent18_user,
            (LPVOID *)&CLuaEventMgrRemoveEvent18_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrRemoveEvent18_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)(struct CLuaEventNode*))&CLuaEventMgr::RemoveEvent) },
        {   (LPVOID)0x140403700L,
            (LPVOID *)&CLuaEventMgrSearchEvent20_user,
            (LPVOID *)&CLuaEventMgrSearchEvent20_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrSearchEvent20_wrapper),
            (LPVOID)cast_pointer_function((struct CLuaEventNode*(CLuaEventMgr::*)(char*))&CLuaEventMgr::SearchEvent) },
        {   (LPVOID)0x140403530L,
            (LPVOID *)&CLuaEventMgrdtor_CLuaEventMgr24_user,
            (LPVOID *)&CLuaEventMgrdtor_CLuaEventMgr24_next,
            (LPVOID)cast_pointer_function(CLuaEventMgrdtor_CLuaEventMgr24_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventMgr::*)())&CLuaEventMgr::dtor_CLuaEventMgr) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
