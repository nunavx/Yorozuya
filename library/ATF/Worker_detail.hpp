// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "Worker_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::WorkerInitialize2_ptr WorkerInitialize2_next(nullptr);
        static info::WorkerInitialize2_clbk WorkerInitialize2_user(nullptr);
        static info::WorkerStart4_ptr WorkerStart4_next(nullptr);
        static info::WorkerStart4_clbk WorkerStart4_user(nullptr);
        static info::WorkerStop6_ptr WorkerStop6_next(nullptr);
        static info::WorkerStop6_clbk WorkerStop6_user(nullptr);
        static info::Workerctor_Worker8_ptr Workerctor_Worker8_next(nullptr);
        static info::Workerctor_Worker8_clbk Workerctor_Worker8_user(nullptr);
        static info::Workers_loop13_ptr Workers_loop13_next(nullptr);
        static info::Workers_loop13_clbk Workers_loop13_user(nullptr);
        static info::Workerdtor_Worker15_ptr Workerdtor_Worker15_next(nullptr);
        static info::Workerdtor_Worker15_clbk Workerdtor_Worker15_user(nullptr);
        
        static bool WorkerInitialize2_wrapper(struct Worker* _this, int nLoop, int nTerm)
        {
           return WorkerInitialize2_user(_this, nLoop, nTerm, WorkerInitialize2_next);
        };
        static void WorkerStart4_wrapper(struct Worker* _this)
        {
           WorkerStart4_user(_this, WorkerStart4_next);
        };
        static void WorkerStop6_wrapper(struct Worker* _this)
        {
           WorkerStop6_user(_this, WorkerStop6_next);
        };
        static void Workerctor_Worker8_wrapper(struct Worker* _this, char* pWorkerName, int nMaxTskNum, int nMaxTskBufSize)
        {
           Workerctor_Worker8_user(_this, pWorkerName, nMaxTskNum, nMaxTskBufSize, Workerctor_Worker8_next);
        };
        static void Workers_loop13_wrapper(void* pArg)
        {
           Workers_loop13_user(pArg, Workers_loop13_next);
        };
        static void Workerdtor_Worker15_wrapper(struct Worker* _this)
        {
           Workerdtor_Worker15_user(_this, Workerdtor_Worker15_next);
        };
        
        static hook_record Worker_functions[] = {
        {   (LPVOID)0x1403182f0L,
            (LPVOID *)&WorkerInitialize2_user,
            (LPVOID *)&WorkerInitialize2_next,
            (LPVOID)cast_pointer_function(WorkerInitialize2_wrapper),
            (LPVOID)cast_pointer_function((bool(Worker::*)(int, int))&Worker::Initialize) },
        {   (LPVOID)0x140318550L,
            (LPVOID *)&WorkerStart4_user,
            (LPVOID *)&WorkerStart4_next,
            (LPVOID)cast_pointer_function(WorkerStart4_wrapper),
            (LPVOID)cast_pointer_function((void(Worker::*)())&Worker::Start) },
        {   (LPVOID)0x1403185a0L,
            (LPVOID *)&WorkerStop6_user,
            (LPVOID *)&WorkerStop6_next,
            (LPVOID)cast_pointer_function(WorkerStop6_wrapper),
            (LPVOID)cast_pointer_function((void(Worker::*)())&Worker::Stop) },
        {   (LPVOID)0x140318200L,
            (LPVOID *)&Workerctor_Worker8_user,
            (LPVOID *)&Workerctor_Worker8_next,
            (LPVOID)cast_pointer_function(Workerctor_Worker8_wrapper),
            (LPVOID)cast_pointer_function((void(Worker::*)(char*, int, int))&Worker::ctor_Worker) },
        {   (LPVOID)0x140318450L,
            (LPVOID *)&Workers_loop13_user,
            (LPVOID *)&Workers_loop13_next,
            (LPVOID)cast_pointer_function(Workers_loop13_wrapper),
            (LPVOID)cast_pointer_function((void(*)(void*))&Worker::s_loop) },
        {   (LPVOID)0x1403182a0L,
            (LPVOID *)&Workerdtor_Worker15_user,
            (LPVOID *)&Workerdtor_Worker15_next,
            (LPVOID)cast_pointer_function(Workerdtor_Worker15_wrapper),
            (LPVOID)cast_pointer_function((void(Worker::*)())&Worker::dtor_Worker) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
