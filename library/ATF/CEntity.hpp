// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CIndexBuffer.hpp>
#include <CVertexBuffer.hpp>
#include <_ANI_OBJECT.hpp>
#include <_ENTITY_FILE_HEADER.hpp>
#include <_ENTITY_M_GROUP.hpp>
#include <_R3MATERIAL.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct  CEntity
    {
        int mIsUseMemory;
        int mIsEntityLoad;
        int mIsAlpha;
        _ENTITY_FILE_HEADER mHeader;
        unsigned int mVetexBufferSize;
        float (*mOrgUV)[2];
        unsigned int mMapColor;
        unsigned int mFlag;
        _R3MATERIAL *mMat;
        CVertexBuffer mStaticVertexBuffer;
        CIndexBuffer mStaticIndexedBuffer;
        unsigned int mTextureSize;
        int mMatGroupNum;
        _ENTITY_M_GROUP *mMatGroup;
        int mObjectNum;
        _ANI_OBJECT *mObject;
        char *mTrack;
        int mStartTexID;
        int mTexNum;
        unsigned int mVertexNum;
        void *mIndependencyTex;
        float mStartTime;
        float mBBMin[3];
        float mBBMax[3];
        float mAddFrame;
        float mFrame;
    public:
        void AddFlag(uint32_t arg_0);
        int64_t DrawEntity(float** arg_0, uint32_t arg_1, float arg_2);
        int64_t DrawEntityVS(struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2);
        void DrawOneMatGroup(struct _ENTITY_M_GROUP* arg_0);
        void DrawOneMatGroupVS(struct _ENTITY_M_GROUP* arg_0);
        void GetAnimationMatrix(float** arg_0, struct _ANI_OBJECT* arg_1, float arg_2);
        struct _ENTITY_M_GROUP* GetMatGroup();
        int64_t GetMatGroupNum();
        int64_t GetMatNum();
        struct _ANI_OBJECT* GetObjectA();
        struct CIndexBuffer* GetStaticIndexedBuffer();
        struct CVertexBuffer* GetStaticVertexBuffer();
        int64_t GetUsedVertexBufferSize();
        int64_t IsAlpha();
        int64_t IsEnableShaderID(uint32_t arg_0);
        int64_t IsFirstAlpha();
        int64_t LoadEntity(char* arg_0, uint32_t arg_1);
        int64_t OnceDrawEntity(float** arg_0, uint32_t arg_1);
        void PrepareAnimation();
        void ReleaseEntity();
        void ReleaseTexMem();
        void RestoreTexMem();
        void SetMapColor(uint32_t arg_0);
        void SetMaterialAndLight(uint32_t arg_0);
        void SetVertexShaderID(struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2);
        ~CEntity();
        int64_t dtor_CEntity();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
