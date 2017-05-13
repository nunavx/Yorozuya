// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ListHeap_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::ListHeapInitialize2_ptr ListHeapInitialize2_next(nullptr);
        static info::ListHeapInitialize2_clbk ListHeapInitialize2_user(nullptr);
        static info::ListHeapctor_ListHeap4_ptr ListHeapctor_ListHeap4_next(nullptr);
        static info::ListHeapctor_ListHeap4_clbk ListHeapctor_ListHeap4_user(nullptr);
        static info::ListHeapRelease6_ptr ListHeapRelease6_next(nullptr);
        static info::ListHeapRelease6_clbk ListHeapRelease6_user(nullptr);
        static info::ListHeapempty8_ptr ListHeapempty8_next(nullptr);
        static info::ListHeapempty8_clbk ListHeapempty8_user(nullptr);
        static info::ListHeappop10_ptr ListHeappop10_next(nullptr);
        static info::ListHeappop10_clbk ListHeappop10_user(nullptr);
        static info::ListHeappop12_ptr ListHeappop12_next(nullptr);
        static info::ListHeappop12_clbk ListHeappop12_user(nullptr);
        static info::ListHeappush14_ptr ListHeappush14_next(nullptr);
        static info::ListHeappush14_clbk ListHeappush14_user(nullptr);
        static info::ListHeapsize16_ptr ListHeapsize16_next(nullptr);
        static info::ListHeapsize16_clbk ListHeapsize16_user(nullptr);
        static info::ListHeaptop18_ptr ListHeaptop18_next(nullptr);
        static info::ListHeaptop18_clbk ListHeaptop18_user(nullptr);
        static info::ListHeapdtor_ListHeap20_ptr ListHeapdtor_ListHeap20_next(nullptr);
        static info::ListHeapdtor_ListHeap20_clbk ListHeapdtor_ListHeap20_user(nullptr);
        
        static info::ListHeap__CIndexListExctor_CIndexListEx2_ptr ListHeap__CIndexListExctor_CIndexListEx2_next(nullptr);
        static info::ListHeap__CIndexListExctor_CIndexListEx2_clbk ListHeap__CIndexListExctor_CIndexListEx2_user(nullptr);
        static info::ListHeap__CIndexListExPush4_ptr ListHeap__CIndexListExPush4_next(nullptr);
        static info::ListHeap__CIndexListExPush4_clbk ListHeap__CIndexListExPush4_user(nullptr);
        static info::ListHeap__CIndexListExdtor_CIndexListEx6_ptr ListHeap__CIndexListExdtor_CIndexListEx6_next(nullptr);
        static info::ListHeap__CIndexListExdtor_CIndexListEx6_clbk ListHeap__CIndexListExdtor_CIndexListEx6_user(nullptr);
        
        static bool ListHeapInitialize2_wrapper(struct ListHeap<LendItemSheet::Cell>* _this, uint64_t nMaxBuf)
        {
           return ListHeapInitialize2_user(_this, nMaxBuf);
        };
        static void ListHeapctor_ListHeap4_wrapper(struct ListHeap<LendItemSheet::Cell>* _this)
        {
           ListHeapctor_ListHeap4_user(_this);
        };
        static void ListHeapRelease6_wrapper(struct ListHeap<LendItemSheet::Cell>* _this)
        {
           ListHeapRelease6_user(_this);
        };
        static bool ListHeapempty8_wrapper(struct ListHeap<LendItemSheet::Cell>* _this)
        {
           return ListHeapempty8_user(_this);
        };
        static bool ListHeappop10_wrapper(struct ListHeap<LendItemSheet::Cell>* _this, struct LendItemSheet::Cell* data)
        {
           return ListHeappop10_user(_this, data);
        };
        static bool ListHeappop12_wrapper(struct ListHeap<LendItemSheet::Cell>* _this)
        {
           return ListHeappop12_user(_this);
        };
        static bool ListHeappush14_wrapper(struct ListHeap<LendItemSheet::Cell>* _this, struct LendItemSheet::Cell* data)
        {
           return ListHeappush14_user(_this, data);
        };
        static uint64_t ListHeapsize16_wrapper(struct ListHeap<LendItemSheet::Cell>* _this)
        {
           return ListHeapsize16_user(_this);
        };
        static struct LendItemSheet::Cell* ListHeaptop18_wrapper(struct ListHeap<LendItemSheet::Cell>* _this)
        {
           return ListHeaptop18_user(_this);
        };
        static void ListHeapdtor_ListHeap20_wrapper(struct ListHeap<LendItemSheet::Cell>* _this)
        {
           ListHeapdtor_ListHeap20_user(_this);
        };
        
        static void ListHeap__CIndexListExctor_CIndexListEx2_wrapper(struct ListHeap<LendItemSheet::Cell>::CIndexListEx* _this)
        {
           ListHeap__CIndexListExctor_CIndexListEx2_user(_this);
        };
        static bool ListHeap__CIndexListExPush4_wrapper(struct ListHeap<LendItemSheet::Cell>::CIndexListEx* _this, struct CNetIndexList::_index_node* pos, unsigned int dwIndex)
        {
           return ListHeap__CIndexListExPush4_user(_this, pos, dwIndex);
        };
        static void ListHeap__CIndexListExdtor_CIndexListEx6_wrapper(struct ListHeap<LendItemSheet::Cell>::CIndexListEx* _this)
        {
           ListHeap__CIndexListExdtor_CIndexListEx6_user(_this);
        };
        
        static hook_record ListHeap<LendItemSheet::Cell>_functions[] = {
        {   (LPVOID)0x14030fe00L,
            (LPVOID *)&ListHeapInitialize2_user,
            (LPVOID *)&ListHeapInitialize2_next,
            (LPVOID)cast_pointer_function(ListHeapInitialize2_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<LendItemSheet::Cell>::*)(uint64_t))&ListHeap<LendItemSheet::Cell>::Initialize) },
        {   (LPVOID)0x14030ee90L,
            (LPVOID *)&ListHeapctor_ListHeap4_user,
            (LPVOID *)&ListHeapctor_ListHeap4_next,
            (LPVOID)cast_pointer_function(ListHeapctor_ListHeap4_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<LendItemSheet::Cell>::*)())&ListHeap<LendItemSheet::Cell>::ctor_ListHeap) },
        {   (LPVOID)0x140310040L,
            (LPVOID *)&ListHeapRelease6_user,
            (LPVOID *)&ListHeapRelease6_next,
            (LPVOID)cast_pointer_function(ListHeapRelease6_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<LendItemSheet::Cell>::*)())&ListHeap<LendItemSheet::Cell>::Release) },
        {   (LPVOID)0x14030f6c0L,
            (LPVOID *)&ListHeapempty8_user,
            (LPVOID *)&ListHeapempty8_next,
            (LPVOID)cast_pointer_function(ListHeapempty8_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<LendItemSheet::Cell>::*)())&ListHeap<LendItemSheet::Cell>::empty) },
        {   (LPVOID)0x14030f770L,
            (LPVOID *)&ListHeappop10_user,
            (LPVOID *)&ListHeappop10_next,
            (LPVOID)cast_pointer_function(ListHeappop10_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<LendItemSheet::Cell>::*)(struct LendItemSheet::Cell*))&ListHeap<LendItemSheet::Cell>::pop) },
        {   (LPVOID)0x14030fd50L,
            (LPVOID *)&ListHeappop12_user,
            (LPVOID *)&ListHeappop12_next,
            (LPVOID)cast_pointer_function(ListHeappop12_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<LendItemSheet::Cell>::*)())&ListHeap<LendItemSheet::Cell>::pop) },
        {   (LPVOID)0x14030f9e0L,
            (LPVOID *)&ListHeappush14_user,
            (LPVOID *)&ListHeappush14_next,
            (LPVOID)cast_pointer_function(ListHeappush14_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<LendItemSheet::Cell>::*)(struct LendItemSheet::Cell*))&ListHeap<LendItemSheet::Cell>::push) },
        {   (LPVOID)0x14030f6a0L,
            (LPVOID *)&ListHeapsize16_user,
            (LPVOID *)&ListHeapsize16_next,
            (LPVOID)cast_pointer_function(ListHeapsize16_wrapper),
            (LPVOID)cast_pointer_function((uint64_t(ListHeap<LendItemSheet::Cell>::*)())&ListHeap<LendItemSheet::Cell>::size) },
        {   (LPVOID)0x14030f720L,
            (LPVOID *)&ListHeaptop18_user,
            (LPVOID *)&ListHeaptop18_next,
            (LPVOID)cast_pointer_function(ListHeaptop18_wrapper),
            (LPVOID)cast_pointer_function((struct LendItemSheet::Cell*(ListHeap<LendItemSheet::Cell>::*)())&ListHeap<LendItemSheet::Cell>::top) },
        {   (LPVOID)0x14030f270L,
            (LPVOID *)&ListHeapdtor_ListHeap20_user,
            (LPVOID *)&ListHeapdtor_ListHeap20_next,
            (LPVOID)cast_pointer_function(ListHeapdtor_ListHeap20_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<LendItemSheet::Cell>::*)())&ListHeap<LendItemSheet::Cell>::dtor_ListHeap) },
        
        {   (LPVOID)0x14030ef40L,
            (LPVOID *)&ListHeap__CIndexListExctor_CIndexListEx2_user,
            (LPVOID *)&ListHeap__CIndexListExctor_CIndexListEx2_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExctor_CIndexListEx2_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<LendItemSheet::Cell>::CIndexListEx::*)())&ListHeap<LendItemSheet::Cell>::CIndexListEx::ctor_CIndexListEx) },
        {   (LPVOID)0x1403116b0L,
            (LPVOID *)&ListHeap__CIndexListExPush4_user,
            (LPVOID *)&ListHeap__CIndexListExPush4_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExPush4_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<LendItemSheet::Cell>::CIndexListEx::*)(struct CNetIndexList::_index_node*, unsigned int))&ListHeap<LendItemSheet::Cell>::CIndexListEx::Push) },
        {   (LPVOID)0x14030ef90L,
            (LPVOID *)&ListHeap__CIndexListExdtor_CIndexListEx6_user,
            (LPVOID *)&ListHeap__CIndexListExdtor_CIndexListEx6_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExdtor_CIndexListEx6_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<LendItemSheet::Cell>::CIndexListEx::*)())&ListHeap<LendItemSheet::Cell>::CIndexListEx::dtor_CIndexListEx) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
#include "ListHeap_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::ListHeapInitialize2_ptr ListHeapInitialize2_next(nullptr);
        static info::ListHeapInitialize2_clbk ListHeapInitialize2_user(nullptr);
        static info::ListHeapctor_ListHeap4_ptr ListHeapctor_ListHeap4_next(nullptr);
        static info::ListHeapctor_ListHeap4_clbk ListHeapctor_ListHeap4_user(nullptr);
        static info::ListHeapRelease6_ptr ListHeapRelease6_next(nullptr);
        static info::ListHeapRelease6_clbk ListHeapRelease6_user(nullptr);
        static info::ListHeapempty8_ptr ListHeapempty8_next(nullptr);
        static info::ListHeapempty8_clbk ListHeapempty8_user(nullptr);
        static info::ListHeappop10_ptr ListHeappop10_next(nullptr);
        static info::ListHeappop10_clbk ListHeappop10_user(nullptr);
        static info::ListHeappop12_ptr ListHeappop12_next(nullptr);
        static info::ListHeappop12_clbk ListHeappop12_user(nullptr);
        static info::ListHeappop14_ptr ListHeappop14_next(nullptr);
        static info::ListHeappop14_clbk ListHeappop14_user(nullptr);
        static info::ListHeappush16_ptr ListHeappush16_next(nullptr);
        static info::ListHeappush16_clbk ListHeappush16_user(nullptr);
        static info::ListHeapsize18_ptr ListHeapsize18_next(nullptr);
        static info::ListHeapsize18_clbk ListHeapsize18_user(nullptr);
        static info::ListHeaptop20_ptr ListHeaptop20_next(nullptr);
        static info::ListHeaptop20_clbk ListHeaptop20_user(nullptr);
        static info::ListHeapdtor_ListHeap22_ptr ListHeapdtor_ListHeap22_next(nullptr);
        static info::ListHeapdtor_ListHeap22_clbk ListHeapdtor_ListHeap22_user(nullptr);
        
        static info::ListHeap__CIndexListExctor_CIndexListEx2_ptr ListHeap__CIndexListExctor_CIndexListEx2_next(nullptr);
        static info::ListHeap__CIndexListExctor_CIndexListEx2_clbk ListHeap__CIndexListExctor_CIndexListEx2_user(nullptr);
        static info::ListHeap__CIndexListExPush4_ptr ListHeap__CIndexListExPush4_next(nullptr);
        static info::ListHeap__CIndexListExPush4_clbk ListHeap__CIndexListExPush4_user(nullptr);
        static info::ListHeap__CIndexListExdtor_CIndexListEx6_ptr ListHeap__CIndexListExdtor_CIndexListEx6_next(nullptr);
        static info::ListHeap__CIndexListExdtor_CIndexListEx6_clbk ListHeap__CIndexListExdtor_CIndexListEx6_user(nullptr);
        
        static bool ListHeapInitialize2_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this, uint64_t nMaxBuf)
        {
           return ListHeapInitialize2_user(_this, nMaxBuf);
        };
        static void ListHeapctor_ListHeap4_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this)
        {
           ListHeapctor_ListHeap4_user(_this);
        };
        static void ListHeapRelease6_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this)
        {
           ListHeapRelease6_user(_this);
        };
        static bool ListHeapempty8_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this)
        {
           return ListHeapempty8_user(_this);
        };
        static bool ListHeappop10_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this, struct TimeLimitJade::WaitCell* data)
        {
           return ListHeappop10_user(_this, data);
        };
        static struct TimeLimitJade::WaitCell* ListHeappop12_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this, unsigned int dwIndex)
        {
           return ListHeappop12_user(_this, dwIndex);
        };
        static bool ListHeappop14_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this)
        {
           return ListHeappop14_user(_this);
        };
        static bool ListHeappush16_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this, struct TimeLimitJade::WaitCell* data)
        {
           return ListHeappush16_user(_this, data);
        };
        static uint64_t ListHeapsize18_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this)
        {
           return ListHeapsize18_user(_this);
        };
        static struct TimeLimitJade::WaitCell* ListHeaptop20_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this)
        {
           return ListHeaptop20_user(_this);
        };
        static void ListHeapdtor_ListHeap22_wrapper(struct ListHeap<TimeLimitJade::WaitCell>* _this)
        {
           ListHeapdtor_ListHeap22_user(_this);
        };
        
        static void ListHeap__CIndexListExctor_CIndexListEx2_wrapper(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx* _this)
        {
           ListHeap__CIndexListExctor_CIndexListEx2_user(_this);
        };
        static bool ListHeap__CIndexListExPush4_wrapper(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx* _this, struct CNetIndexList::_index_node* pos, unsigned int dwIndex)
        {
           return ListHeap__CIndexListExPush4_user(_this, pos, dwIndex);
        };
        static void ListHeap__CIndexListExdtor_CIndexListEx6_wrapper(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx* _this)
        {
           ListHeap__CIndexListExdtor_CIndexListEx6_user(_this);
        };
        
        static hook_record ListHeap<TimeLimitJade::WaitCell>_functions[] = {
        {   (LPVOID)0x1403fc2d0L,
            (LPVOID *)&ListHeapInitialize2_user,
            (LPVOID *)&ListHeapInitialize2_next,
            (LPVOID)cast_pointer_function(ListHeapInitialize2_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::WaitCell>::*)(uint64_t))&ListHeap<TimeLimitJade::WaitCell>::Initialize) },
        {   (LPVOID)0x1403fb4c0L,
            (LPVOID *)&ListHeapctor_ListHeap4_user,
            (LPVOID *)&ListHeapctor_ListHeap4_next,
            (LPVOID)cast_pointer_function(ListHeapctor_ListHeap4_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::WaitCell>::*)())&ListHeap<TimeLimitJade::WaitCell>::ctor_ListHeap) },
        {   (LPVOID)0x1403fc510L,
            (LPVOID *)&ListHeapRelease6_user,
            (LPVOID *)&ListHeapRelease6_next,
            (LPVOID)cast_pointer_function(ListHeapRelease6_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::WaitCell>::*)())&ListHeap<TimeLimitJade::WaitCell>::Release) },
        {   (LPVOID)0x1403fbb00L,
            (LPVOID *)&ListHeapempty8_user,
            (LPVOID *)&ListHeapempty8_next,
            (LPVOID)cast_pointer_function(ListHeapempty8_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::WaitCell>::*)())&ListHeap<TimeLimitJade::WaitCell>::empty) },
        {   (LPVOID)0x1403fbc70L,
            (LPVOID *)&ListHeappop10_user,
            (LPVOID *)&ListHeappop10_next,
            (LPVOID)cast_pointer_function(ListHeappop10_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::WaitCell>::*)(struct TimeLimitJade::WaitCell*))&ListHeap<TimeLimitJade::WaitCell>::pop) },
        {   (LPVOID)0x1403fbbb0L,
            (LPVOID *)&ListHeappop12_user,
            (LPVOID *)&ListHeappop12_next,
            (LPVOID)cast_pointer_function(ListHeappop12_wrapper),
            (LPVOID)cast_pointer_function((struct TimeLimitJade::WaitCell*(ListHeap<TimeLimitJade::WaitCell>::*)(unsigned int))&ListHeap<TimeLimitJade::WaitCell>::pop) },
        {   (LPVOID)0x1403fc220L,
            (LPVOID *)&ListHeappop14_user,
            (LPVOID *)&ListHeappop14_next,
            (LPVOID)cast_pointer_function(ListHeappop14_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::WaitCell>::*)())&ListHeap<TimeLimitJade::WaitCell>::pop) },
        {   (LPVOID)0x1403fbec0L,
            (LPVOID *)&ListHeappush16_user,
            (LPVOID *)&ListHeappush16_next,
            (LPVOID)cast_pointer_function(ListHeappush16_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::WaitCell>::*)(struct TimeLimitJade::WaitCell*))&ListHeap<TimeLimitJade::WaitCell>::push) },
        {   (LPVOID)0x1403fbae0L,
            (LPVOID *)&ListHeapsize18_user,
            (LPVOID *)&ListHeapsize18_next,
            (LPVOID)cast_pointer_function(ListHeapsize18_wrapper),
            (LPVOID)cast_pointer_function((uint64_t(ListHeap<TimeLimitJade::WaitCell>::*)())&ListHeap<TimeLimitJade::WaitCell>::size) },
        {   (LPVOID)0x1403fbb60L,
            (LPVOID *)&ListHeaptop20_user,
            (LPVOID *)&ListHeaptop20_next,
            (LPVOID)cast_pointer_function(ListHeaptop20_wrapper),
            (LPVOID)cast_pointer_function((struct TimeLimitJade::WaitCell*(ListHeap<TimeLimitJade::WaitCell>::*)())&ListHeap<TimeLimitJade::WaitCell>::top) },
        {   (LPVOID)0x1403fb570L,
            (LPVOID *)&ListHeapdtor_ListHeap22_user,
            (LPVOID *)&ListHeapdtor_ListHeap22_next,
            (LPVOID)cast_pointer_function(ListHeapdtor_ListHeap22_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::WaitCell>::*)())&ListHeap<TimeLimitJade::WaitCell>::dtor_ListHeap) },
        
        {   (LPVOID)0x1403fb6d0L,
            (LPVOID *)&ListHeap__CIndexListExctor_CIndexListEx2_user,
            (LPVOID *)&ListHeap__CIndexListExctor_CIndexListEx2_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExctor_CIndexListEx2_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::WaitCell>::CIndexListEx::*)())&ListHeap<TimeLimitJade::WaitCell>::CIndexListEx::ctor_CIndexListEx) },
        {   (LPVOID)0x1403fd020L,
            (LPVOID *)&ListHeap__CIndexListExPush4_user,
            (LPVOID *)&ListHeap__CIndexListExPush4_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExPush4_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::WaitCell>::CIndexListEx::*)(struct CNetIndexList::_index_node*, unsigned int))&ListHeap<TimeLimitJade::WaitCell>::CIndexListEx::Push) },
        {   (LPVOID)0x1403fb720L,
            (LPVOID *)&ListHeap__CIndexListExdtor_CIndexListEx6_user,
            (LPVOID *)&ListHeap__CIndexListExdtor_CIndexListEx6_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExdtor_CIndexListEx6_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::WaitCell>::CIndexListEx::*)())&ListHeap<TimeLimitJade::WaitCell>::CIndexListEx::dtor_CIndexListEx) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
#include "ListHeap_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::ListHeapInitialize2_ptr ListHeapInitialize2_next(nullptr);
        static info::ListHeapInitialize2_clbk ListHeapInitialize2_user(nullptr);
        static info::ListHeapctor_ListHeap4_ptr ListHeapctor_ListHeap4_next(nullptr);
        static info::ListHeapctor_ListHeap4_clbk ListHeapctor_ListHeap4_user(nullptr);
        static info::ListHeapRelease6_ptr ListHeapRelease6_next(nullptr);
        static info::ListHeapRelease6_clbk ListHeapRelease6_user(nullptr);
        static info::ListHeapempty8_ptr ListHeapempty8_next(nullptr);
        static info::ListHeapempty8_clbk ListHeapempty8_user(nullptr);
        static info::ListHeappop10_ptr ListHeappop10_next(nullptr);
        static info::ListHeappop10_clbk ListHeappop10_user(nullptr);
        static info::ListHeappop12_ptr ListHeappop12_next(nullptr);
        static info::ListHeappop12_clbk ListHeappop12_user(nullptr);
        static info::ListHeappush14_ptr ListHeappush14_next(nullptr);
        static info::ListHeappush14_clbk ListHeappush14_user(nullptr);
        static info::ListHeapsize16_ptr ListHeapsize16_next(nullptr);
        static info::ListHeapsize16_clbk ListHeapsize16_user(nullptr);
        static info::ListHeaptop18_ptr ListHeaptop18_next(nullptr);
        static info::ListHeaptop18_clbk ListHeaptop18_user(nullptr);
        static info::ListHeapdtor_ListHeap20_ptr ListHeapdtor_ListHeap20_next(nullptr);
        static info::ListHeapdtor_ListHeap20_clbk ListHeapdtor_ListHeap20_user(nullptr);
        
        static info::ListHeap__CIndexListExctor_CIndexListEx2_ptr ListHeap__CIndexListExctor_CIndexListEx2_next(nullptr);
        static info::ListHeap__CIndexListExctor_CIndexListEx2_clbk ListHeap__CIndexListExctor_CIndexListEx2_user(nullptr);
        static info::ListHeap__CIndexListExPush4_ptr ListHeap__CIndexListExPush4_next(nullptr);
        static info::ListHeap__CIndexListExPush4_clbk ListHeap__CIndexListExPush4_user(nullptr);
        static info::ListHeap__CIndexListExdtor_CIndexListEx6_ptr ListHeap__CIndexListExdtor_CIndexListEx6_next(nullptr);
        static info::ListHeap__CIndexListExdtor_CIndexListEx6_clbk ListHeap__CIndexListExdtor_CIndexListEx6_user(nullptr);
        
        static bool ListHeapInitialize2_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this, uint64_t nMaxBuf)
        {
           return ListHeapInitialize2_user(_this, nMaxBuf);
        };
        static void ListHeapctor_ListHeap4_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this)
        {
           ListHeapctor_ListHeap4_user(_this);
        };
        static void ListHeapRelease6_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this)
        {
           ListHeapRelease6_user(_this);
        };
        static bool ListHeapempty8_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this)
        {
           return ListHeapempty8_user(_this);
        };
        static bool ListHeappop10_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this, struct TimeLimitJade::UseCell* data)
        {
           return ListHeappop10_user(_this, data);
        };
        static bool ListHeappop12_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this)
        {
           return ListHeappop12_user(_this);
        };
        static bool ListHeappush14_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this, struct TimeLimitJade::UseCell* data)
        {
           return ListHeappush14_user(_this, data);
        };
        static uint64_t ListHeapsize16_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this)
        {
           return ListHeapsize16_user(_this);
        };
        static struct TimeLimitJade::UseCell* ListHeaptop18_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this)
        {
           return ListHeaptop18_user(_this);
        };
        static void ListHeapdtor_ListHeap20_wrapper(struct ListHeap<TimeLimitJade::UseCell>* _this)
        {
           ListHeapdtor_ListHeap20_user(_this);
        };
        
        static void ListHeap__CIndexListExctor_CIndexListEx2_wrapper(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx* _this)
        {
           ListHeap__CIndexListExctor_CIndexListEx2_user(_this);
        };
        static bool ListHeap__CIndexListExPush4_wrapper(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx* _this, struct CNetIndexList::_index_node* pos, unsigned int dwIndex)
        {
           return ListHeap__CIndexListExPush4_user(_this, pos, dwIndex);
        };
        static void ListHeap__CIndexListExdtor_CIndexListEx6_wrapper(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx* _this)
        {
           ListHeap__CIndexListExdtor_CIndexListEx6_user(_this);
        };
        
        static hook_record ListHeap<TimeLimitJade::UseCell>_functions[] = {
        {   (LPVOID)0x1403fcd10L,
            (LPVOID *)&ListHeapInitialize2_user,
            (LPVOID *)&ListHeapInitialize2_next,
            (LPVOID)cast_pointer_function(ListHeapInitialize2_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::UseCell>::*)(uint64_t))&ListHeap<TimeLimitJade::UseCell>::Initialize) },
        {   (LPVOID)0x1403fb620L,
            (LPVOID *)&ListHeapctor_ListHeap4_user,
            (LPVOID *)&ListHeapctor_ListHeap4_next,
            (LPVOID)cast_pointer_function(ListHeapctor_ListHeap4_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::UseCell>::*)())&ListHeap<TimeLimitJade::UseCell>::ctor_ListHeap) },
        {   (LPVOID)0x1403fcf50L,
            (LPVOID *)&ListHeapRelease6_user,
            (LPVOID *)&ListHeapRelease6_next,
            (LPVOID)cast_pointer_function(ListHeapRelease6_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::UseCell>::*)())&ListHeap<TimeLimitJade::UseCell>::Release) },
        {   (LPVOID)0x1403fc600L,
            (LPVOID *)&ListHeapempty8_user,
            (LPVOID *)&ListHeapempty8_next,
            (LPVOID)cast_pointer_function(ListHeapempty8_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::UseCell>::*)())&ListHeap<TimeLimitJade::UseCell>::empty) },
        {   (LPVOID)0x1403fc6b0L,
            (LPVOID *)&ListHeappop10_user,
            (LPVOID *)&ListHeappop10_next,
            (LPVOID)cast_pointer_function(ListHeappop10_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::UseCell>::*)(struct TimeLimitJade::UseCell*))&ListHeap<TimeLimitJade::UseCell>::pop) },
        {   (LPVOID)0x1403fcc60L,
            (LPVOID *)&ListHeappop12_user,
            (LPVOID *)&ListHeappop12_next,
            (LPVOID)cast_pointer_function(ListHeappop12_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::UseCell>::*)())&ListHeap<TimeLimitJade::UseCell>::pop) },
        {   (LPVOID)0x1403fc900L,
            (LPVOID *)&ListHeappush14_user,
            (LPVOID *)&ListHeappush14_next,
            (LPVOID)cast_pointer_function(ListHeappush14_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::UseCell>::*)(struct TimeLimitJade::UseCell*))&ListHeap<TimeLimitJade::UseCell>::push) },
        {   (LPVOID)0x1403fc5e0L,
            (LPVOID *)&ListHeapsize16_user,
            (LPVOID *)&ListHeapsize16_next,
            (LPVOID)cast_pointer_function(ListHeapsize16_wrapper),
            (LPVOID)cast_pointer_function((uint64_t(ListHeap<TimeLimitJade::UseCell>::*)())&ListHeap<TimeLimitJade::UseCell>::size) },
        {   (LPVOID)0x1403fc660L,
            (LPVOID *)&ListHeaptop18_user,
            (LPVOID *)&ListHeaptop18_next,
            (LPVOID)cast_pointer_function(ListHeaptop18_wrapper),
            (LPVOID)cast_pointer_function((struct TimeLimitJade::UseCell*(ListHeap<TimeLimitJade::UseCell>::*)())&ListHeap<TimeLimitJade::UseCell>::top) },
        {   (LPVOID)0x1403fb970L,
            (LPVOID *)&ListHeapdtor_ListHeap20_user,
            (LPVOID *)&ListHeapdtor_ListHeap20_next,
            (LPVOID)cast_pointer_function(ListHeapdtor_ListHeap20_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::UseCell>::*)())&ListHeap<TimeLimitJade::UseCell>::dtor_ListHeap) },
        
        {   (LPVOID)0x1403fb760L,
            (LPVOID *)&ListHeap__CIndexListExctor_CIndexListEx2_user,
            (LPVOID *)&ListHeap__CIndexListExctor_CIndexListEx2_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExctor_CIndexListEx2_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::UseCell>::CIndexListEx::*)())&ListHeap<TimeLimitJade::UseCell>::CIndexListEx::ctor_CIndexListEx) },
        {   (LPVOID)0x1403fd1b0L,
            (LPVOID *)&ListHeap__CIndexListExPush4_user,
            (LPVOID *)&ListHeap__CIndexListExPush4_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExPush4_wrapper),
            (LPVOID)cast_pointer_function((bool(ListHeap<TimeLimitJade::UseCell>::CIndexListEx::*)(struct CNetIndexList::_index_node*, unsigned int))&ListHeap<TimeLimitJade::UseCell>::CIndexListEx::Push) },
        {   (LPVOID)0x1403fb7b0L,
            (LPVOID *)&ListHeap__CIndexListExdtor_CIndexListEx6_user,
            (LPVOID *)&ListHeap__CIndexListExdtor_CIndexListEx6_next,
            (LPVOID)cast_pointer_function(ListHeap__CIndexListExdtor_CIndexListEx6_wrapper),
            (LPVOID)cast_pointer_function((void(ListHeap<TimeLimitJade::UseCell>::CIndexListEx::*)())&ListHeap<TimeLimitJade::UseCell>::CIndexListEx::dtor_CIndexListEx) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
