// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_chat_message_receipt_udp_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_chat_message_receipt_udpctor__chat_message_receipt_udp2_ptr _chat_message_receipt_udpctor__chat_message_receipt_udp2_next(nullptr);
        static info::_chat_message_receipt_udpctor__chat_message_receipt_udp2_clbk _chat_message_receipt_udpctor__chat_message_receipt_udp2_user(nullptr);
        static info::_chat_message_receipt_udpsize4_ptr _chat_message_receipt_udpsize4_next(nullptr);
        static info::_chat_message_receipt_udpsize4_clbk _chat_message_receipt_udpsize4_user(nullptr);
        
        static void _chat_message_receipt_udpctor__chat_message_receipt_udp2_wrapper(struct _chat_message_receipt_udp* _this)
        {
           _chat_message_receipt_udpctor__chat_message_receipt_udp2_user(_this, _chat_message_receipt_udpctor__chat_message_receipt_udp2_next);
        };
        static int _chat_message_receipt_udpsize4_wrapper(struct _chat_message_receipt_udp* _this)
        {
           return _chat_message_receipt_udpsize4_user(_this, _chat_message_receipt_udpsize4_next);
        };
        
        static hook_record _chat_message_receipt_udp_functions[] = {
        {   (LPVOID)0x140094e90L,
            (LPVOID *)&_chat_message_receipt_udpctor__chat_message_receipt_udp2_user,
            (LPVOID *)&_chat_message_receipt_udpctor__chat_message_receipt_udp2_next,
            (LPVOID)cast_pointer_function(_chat_message_receipt_udpctor__chat_message_receipt_udp2_wrapper),
            (LPVOID)cast_pointer_function((void(_chat_message_receipt_udp::*)())&_chat_message_receipt_udp::ctor__chat_message_receipt_udp) },
        {   (LPVOID)0x140094eb0L,
            (LPVOID *)&_chat_message_receipt_udpsize4_user,
            (LPVOID *)&_chat_message_receipt_udpsize4_next,
            (LPVOID)cast_pointer_function(_chat_message_receipt_udpsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_chat_message_receipt_udp::*)())&_chat_message_receipt_udp::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
