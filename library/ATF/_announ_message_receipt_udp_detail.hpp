// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_announ_message_receipt_udp_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_announ_message_receipt_udpctor__announ_message_receipt_udp2_ptr _announ_message_receipt_udpctor__announ_message_receipt_udp2_next(nullptr);
        static info::_announ_message_receipt_udpctor__announ_message_receipt_udp2_clbk _announ_message_receipt_udpctor__announ_message_receipt_udp2_user(nullptr);
        static info::_announ_message_receipt_udpsize4_ptr _announ_message_receipt_udpsize4_next(nullptr);
        static info::_announ_message_receipt_udpsize4_clbk _announ_message_receipt_udpsize4_user(nullptr);
        
        static void _announ_message_receipt_udpctor__announ_message_receipt_udp2_wrapper(struct _announ_message_receipt_udp* _this)
        {
           _announ_message_receipt_udpctor__announ_message_receipt_udp2_user(_this, _announ_message_receipt_udpctor__announ_message_receipt_udp2_next);
        };
        static int _announ_message_receipt_udpsize4_wrapper(struct _announ_message_receipt_udp* _this)
        {
           return _announ_message_receipt_udpsize4_user(_this, _announ_message_receipt_udpsize4_next);
        };
        
        static hook_record _announ_message_receipt_udp_functions[] = {
        {   (LPVOID)0x140094fe0L,
            (LPVOID *)&_announ_message_receipt_udpctor__announ_message_receipt_udp2_user,
            (LPVOID *)&_announ_message_receipt_udpctor__announ_message_receipt_udp2_next,
            (LPVOID)cast_pointer_function(_announ_message_receipt_udpctor__announ_message_receipt_udp2_wrapper),
            (LPVOID)cast_pointer_function((void(_announ_message_receipt_udp::*)())&_announ_message_receipt_udp::ctor__announ_message_receipt_udp) },
        {   (LPVOID)0x140095000L,
            (LPVOID *)&_announ_message_receipt_udpsize4_user,
            (LPVOID *)&_announ_message_receipt_udpsize4_next,
            (LPVOID)cast_pointer_function(_announ_message_receipt_udpsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_announ_message_receipt_udp::*)())&_announ_message_receipt_udp::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
