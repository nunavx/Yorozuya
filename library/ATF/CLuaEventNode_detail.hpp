// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLuaEventNode_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CLuaEventNodector_CLuaEventNode2_ptr CLuaEventNodector_CLuaEventNode2_next(nullptr);
        static info::CLuaEventNodector_CLuaEventNode2_clbk CLuaEventNodector_CLuaEventNode2_user(nullptr);
        static info::CLuaEventNodeGetCallFunName4_ptr CLuaEventNodeGetCallFunName4_next(nullptr);
        static info::CLuaEventNodeGetCallFunName4_clbk CLuaEventNodeGetCallFunName4_user(nullptr);
        static info::CLuaEventNodeGetName6_ptr CLuaEventNodeGetName6_next(nullptr);
        static info::CLuaEventNodeGetName6_clbk CLuaEventNodeGetName6_user(nullptr);
        static info::CLuaEventNodeGetNextLoopTime8_ptr CLuaEventNodeGetNextLoopTime8_next(nullptr);
        static info::CLuaEventNodeGetNextLoopTime8_clbk CLuaEventNodeGetNextLoopTime8_user(nullptr);
        static info::CLuaEventNodeGetScript10_ptr CLuaEventNodeGetScript10_next(nullptr);
        static info::CLuaEventNodeGetScript10_clbk CLuaEventNodeGetScript10_user(nullptr);
        static info::CLuaEventNodeGetTimeTerm12_ptr CLuaEventNodeGetTimeTerm12_next(nullptr);
        static info::CLuaEventNodeGetTimeTerm12_clbk CLuaEventNodeGetTimeTerm12_user(nullptr);
        static info::CLuaEventNodeInit14_ptr CLuaEventNodeInit14_next(nullptr);
        static info::CLuaEventNodeInit14_clbk CLuaEventNodeInit14_user(nullptr);
        static info::CLuaEventNodeIsCallFun16_ptr CLuaEventNodeIsCallFun16_next(nullptr);
        static info::CLuaEventNodeIsCallFun16_clbk CLuaEventNodeIsCallFun16_user(nullptr);
        static info::CLuaEventNodeSetCallFun18_ptr CLuaEventNodeSetCallFun18_next(nullptr);
        static info::CLuaEventNodeSetCallFun18_clbk CLuaEventNodeSetCallFun18_user(nullptr);
        static info::CLuaEventNodeSetName20_ptr CLuaEventNodeSetName20_next(nullptr);
        static info::CLuaEventNodeSetName20_clbk CLuaEventNodeSetName20_user(nullptr);
        static info::CLuaEventNodeSetNextLoopTime22_ptr CLuaEventNodeSetNextLoopTime22_next(nullptr);
        static info::CLuaEventNodeSetNextLoopTime22_clbk CLuaEventNodeSetNextLoopTime22_user(nullptr);
        static info::CLuaEventNodeSetScript24_ptr CLuaEventNodeSetScript24_next(nullptr);
        static info::CLuaEventNodeSetScript24_clbk CLuaEventNodeSetScript24_user(nullptr);
        static info::CLuaEventNodedtor_CLuaEventNode28_ptr CLuaEventNodedtor_CLuaEventNode28_next(nullptr);
        static info::CLuaEventNodedtor_CLuaEventNode28_clbk CLuaEventNodedtor_CLuaEventNode28_user(nullptr);
        
        static info::CLuaEventNode___Statector__State2_ptr CLuaEventNode___Statector__State2_next(nullptr);
        static info::CLuaEventNode___Statector__State2_clbk CLuaEventNode___Statector__State2_user(nullptr);
        
        static void CLuaEventNodector_CLuaEventNode2_wrapper(struct CLuaEventNode* _this)
        {
           CLuaEventNodector_CLuaEventNode2_user(_this, CLuaEventNodector_CLuaEventNode2_next);
        };
        static char* CLuaEventNodeGetCallFunName4_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetCallFunName4_user(_this, CLuaEventNodeGetCallFunName4_next);
        };
        static char* CLuaEventNodeGetName6_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetName6_user(_this, CLuaEventNodeGetName6_next);
        };
        static unsigned int CLuaEventNodeGetNextLoopTime8_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetNextLoopTime8_user(_this, CLuaEventNodeGetNextLoopTime8_next);
        };
        static struct CLuaScript* CLuaEventNodeGetScript10_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetScript10_user(_this, CLuaEventNodeGetScript10_next);
        };
        static unsigned int CLuaEventNodeGetTimeTerm12_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeGetTimeTerm12_user(_this, CLuaEventNodeGetTimeTerm12_next);
        };
        static void CLuaEventNodeInit14_wrapper(struct CLuaEventNode* _this)
        {
           CLuaEventNodeInit14_user(_this, CLuaEventNodeInit14_next);
        };
        static bool CLuaEventNodeIsCallFun16_wrapper(struct CLuaEventNode* _this)
        {
           return CLuaEventNodeIsCallFun16_user(_this, CLuaEventNodeIsCallFun16_next);
        };
        static void CLuaEventNodeSetCallFun18_wrapper(struct CLuaEventNode* _this, char* strCallFunName, unsigned int dwTime)
        {
           CLuaEventNodeSetCallFun18_user(_this, strCallFunName, dwTime, CLuaEventNodeSetCallFun18_next);
        };
        static void CLuaEventNodeSetName20_wrapper(struct CLuaEventNode* _this, char* strName)
        {
           CLuaEventNodeSetName20_user(_this, strName, CLuaEventNodeSetName20_next);
        };
        static void CLuaEventNodeSetNextLoopTime22_wrapper(struct CLuaEventNode* _this, unsigned int dwNextLoopTime)
        {
           CLuaEventNodeSetNextLoopTime22_user(_this, dwNextLoopTime, CLuaEventNodeSetNextLoopTime22_next);
        };
        static void CLuaEventNodeSetScript24_wrapper(struct CLuaEventNode* _this, struct CLuaScript* pParentScript)
        {
           CLuaEventNodeSetScript24_user(_this, pParentScript, CLuaEventNodeSetScript24_next);
        };
        static void CLuaEventNodedtor_CLuaEventNode28_wrapper(struct CLuaEventNode* _this)
        {
           CLuaEventNodedtor_CLuaEventNode28_user(_this, CLuaEventNodedtor_CLuaEventNode28_next);
        };
        
        static void CLuaEventNode___Statector__State2_wrapper(struct CLuaEventNode::_State* _this)
        {
           CLuaEventNode___Statector__State2_user(_this, CLuaEventNode___Statector__State2_next);
        };
        
        static hook_record CLuaEventNode_functions[] = {
        {   (LPVOID)0x1404043d0L,
            (LPVOID *)&CLuaEventNodector_CLuaEventNode2_user,
            (LPVOID *)&CLuaEventNodector_CLuaEventNode2_next,
            (LPVOID)cast_pointer_function(CLuaEventNodector_CLuaEventNode2_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::*)())&CLuaEventNode::ctor_CLuaEventNode) },
        {   (LPVOID)0x140403b60L,
            (LPVOID *)&CLuaEventNodeGetCallFunName4_user,
            (LPVOID *)&CLuaEventNodeGetCallFunName4_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeGetCallFunName4_wrapper),
            (LPVOID)cast_pointer_function((char*(CLuaEventNode::*)())&CLuaEventNode::GetCallFunName) },
        {   (LPVOID)0x140403ae0L,
            (LPVOID *)&CLuaEventNodeGetName6_user,
            (LPVOID *)&CLuaEventNodeGetName6_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeGetName6_wrapper),
            (LPVOID)cast_pointer_function((char*(CLuaEventNode::*)())&CLuaEventNode::GetName) },
        {   (LPVOID)0x140403bb0L,
            (LPVOID *)&CLuaEventNodeGetNextLoopTime8_user,
            (LPVOID *)&CLuaEventNodeGetNextLoopTime8_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeGetNextLoopTime8_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CLuaEventNode::*)())&CLuaEventNode::GetNextLoopTime) },
        {   (LPVOID)0x140403b40L,
            (LPVOID *)&CLuaEventNodeGetScript10_user,
            (LPVOID *)&CLuaEventNodeGetScript10_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeGetScript10_wrapper),
            (LPVOID)cast_pointer_function((struct CLuaScript*(CLuaEventNode::*)())&CLuaEventNode::GetScript) },
        {   (LPVOID)0x140403b90L,
            (LPVOID *)&CLuaEventNodeGetTimeTerm12_user,
            (LPVOID *)&CLuaEventNodeGetTimeTerm12_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeGetTimeTerm12_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CLuaEventNode::*)())&CLuaEventNode::GetTimeTerm) },
        {   (LPVOID)0x140403af0L,
            (LPVOID *)&CLuaEventNodeInit14_user,
            (LPVOID *)&CLuaEventNodeInit14_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeInit14_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::*)())&CLuaEventNode::Init) },
        {   (LPVOID)0x140403b20L,
            (LPVOID *)&CLuaEventNodeIsCallFun16_user,
            (LPVOID *)&CLuaEventNodeIsCallFun16_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeIsCallFun16_wrapper),
            (LPVOID)cast_pointer_function((bool(CLuaEventNode::*)())&CLuaEventNode::IsCallFun) },
        {   (LPVOID)0x1404033c0L,
            (LPVOID *)&CLuaEventNodeSetCallFun18_user,
            (LPVOID *)&CLuaEventNodeSetCallFun18_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeSetCallFun18_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(char*, unsigned int))&CLuaEventNode::SetCallFun) },
        {   (LPVOID)0x140406730L,
            (LPVOID *)&CLuaEventNodeSetName20_user,
            (LPVOID *)&CLuaEventNodeSetName20_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeSetName20_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(char*))&CLuaEventNode::SetName) },
        {   (LPVOID)0x140403bd0L,
            (LPVOID *)&CLuaEventNodeSetNextLoopTime22_user,
            (LPVOID *)&CLuaEventNodeSetNextLoopTime22_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeSetNextLoopTime22_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(unsigned int))&CLuaEventNode::SetNextLoopTime) },
        {   (LPVOID)0x140403470L,
            (LPVOID *)&CLuaEventNodeSetScript24_user,
            (LPVOID *)&CLuaEventNodeSetScript24_next,
            (LPVOID)cast_pointer_function(CLuaEventNodeSetScript24_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::*)(struct CLuaScript*))&CLuaEventNode::SetScript) },
        {   (LPVOID)0x140404160L,
            (LPVOID *)&CLuaEventNodedtor_CLuaEventNode28_user,
            (LPVOID *)&CLuaEventNodedtor_CLuaEventNode28_next,
            (LPVOID)cast_pointer_function(CLuaEventNodedtor_CLuaEventNode28_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::*)())&CLuaEventNode::dtor_CLuaEventNode) },
        
        {   (LPVOID)0x1404046c0L,
            (LPVOID *)&CLuaEventNode___Statector__State2_user,
            (LPVOID *)&CLuaEventNode___Statector__State2_next,
            (LPVOID)cast_pointer_function(CLuaEventNode___Statector__State2_wrapper),
            (LPVOID)cast_pointer_function((void(CLuaEventNode::_State::*)())&CLuaEventNode::_State::ctor__State) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
