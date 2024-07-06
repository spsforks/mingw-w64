/*** Autogenerated by WIDL 9.11 from include/napservermanagement.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __napservermanagement_h__
#define __napservermanagement_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __INapServerManagement_FWD_DEFINED__
#define __INapServerManagement_FWD_DEFINED__
typedef interface INapServerManagement INapServerManagement;
#ifdef __cplusplus
interface INapServerManagement;
#endif /* __cplusplus */
#endif

#ifndef __INapServerInfo_FWD_DEFINED__
#define __INapServerInfo_FWD_DEFINED__
typedef interface INapServerInfo INapServerInfo;
#ifdef __cplusplus
interface INapServerInfo;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <naptypes.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#ifndef __INapServerInfo_FWD_DEFINED__
#define __INapServerInfo_FWD_DEFINED__
typedef interface INapServerInfo INapServerInfo;
#ifdef __cplusplus
interface INapServerInfo;
#endif /* __cplusplus */
#endif

#ifndef __INapServerManagement_FWD_DEFINED__
#define __INapServerManagement_FWD_DEFINED__
typedef interface INapServerManagement INapServerManagement;
#ifdef __cplusplus
interface INapServerManagement;
#endif /* __cplusplus */
#endif

EXTERN_C const CLSID CLSID_NapServerManagement;
EXTERN_C const CLSID CLSID_NapServerInfo;
/*****************************************************************************
 * INapServerManagement interface
 */
#ifndef __INapServerManagement_INTERFACE_DEFINED__
#define __INapServerManagement_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapServerManagement, 0x9de543e7, 0x0f23, 0x47e0, 0xa8,0xbc, 0x97,0x1a,0x89,0x4f,0x86,0xd4);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9de543e7-0f23-47e0-a8bc-971a894f86d4")
INapServerManagement : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE RegisterSystemHealthValidator(
        const NapComponentRegistrationInfo *validator,
        const CLSID *validatorClsid) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnregisterSystemHealthValidator(
        SystemHealthEntityId id) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFailureCategoryMappings(
        SystemHealthEntityId id,
        const FailureCategoryMapping mapping) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapServerManagement, 0x9de543e7, 0x0f23, 0x47e0, 0xa8,0xbc, 0x97,0x1a,0x89,0x4f,0x86,0xd4)
#endif
#else
typedef struct INapServerManagementVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapServerManagement *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapServerManagement *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapServerManagement *This);

    /*** INapServerManagement methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterSystemHealthValidator)(
        INapServerManagement *This,
        const NapComponentRegistrationInfo *validator,
        const CLSID *validatorClsid);

    HRESULT (STDMETHODCALLTYPE *UnregisterSystemHealthValidator)(
        INapServerManagement *This,
        SystemHealthEntityId id);

    HRESULT (STDMETHODCALLTYPE *SetFailureCategoryMappings)(
        INapServerManagement *This,
        SystemHealthEntityId id,
        const FailureCategoryMapping mapping);

    END_INTERFACE
} INapServerManagementVtbl;

interface INapServerManagement {
    CONST_VTBL INapServerManagementVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapServerManagement_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapServerManagement_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapServerManagement_Release(This) (This)->lpVtbl->Release(This)
/*** INapServerManagement methods ***/
#define INapServerManagement_RegisterSystemHealthValidator(This,validator,validatorClsid) (This)->lpVtbl->RegisterSystemHealthValidator(This,validator,validatorClsid)
#define INapServerManagement_UnregisterSystemHealthValidator(This,id) (This)->lpVtbl->UnregisterSystemHealthValidator(This,id)
#define INapServerManagement_SetFailureCategoryMappings(This,id,mapping) (This)->lpVtbl->SetFailureCategoryMappings(This,id,mapping)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapServerManagement_QueryInterface(INapServerManagement* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapServerManagement_AddRef(INapServerManagement* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapServerManagement_Release(INapServerManagement* This) {
    return This->lpVtbl->Release(This);
}
/*** INapServerManagement methods ***/
static __WIDL_INLINE HRESULT INapServerManagement_RegisterSystemHealthValidator(INapServerManagement* This,const NapComponentRegistrationInfo *validator,const CLSID *validatorClsid) {
    return This->lpVtbl->RegisterSystemHealthValidator(This,validator,validatorClsid);
}
static __WIDL_INLINE HRESULT INapServerManagement_UnregisterSystemHealthValidator(INapServerManagement* This,SystemHealthEntityId id) {
    return This->lpVtbl->UnregisterSystemHealthValidator(This,id);
}
static __WIDL_INLINE HRESULT INapServerManagement_SetFailureCategoryMappings(INapServerManagement* This,SystemHealthEntityId id,const FailureCategoryMapping mapping) {
    return This->lpVtbl->SetFailureCategoryMappings(This,id,mapping);
}
#endif
#endif

#endif


#endif  /* __INapServerManagement_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapServerInfo interface
 */
#ifndef __INapServerInfo_INTERFACE_DEFINED__
#define __INapServerInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapServerInfo, 0x599f9021, 0x5643, 0x4965, 0x99,0x49, 0xe8,0x89,0x75,0xef,0xff,0x0e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("599f9021-5643-4965-9949-e88975efff0e")
INapServerInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetNapServerInfo(
        CountedString **serverName,
        CountedString **serverDescription,
        CountedString **protocolVersion) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRegisteredSystemHealthValidators(
        SystemHealthEntityCount *count,
        NapComponentRegistrationInfo **validators,
        CLSID **validatorClsids) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFailureCategoryMappings(
        SystemHealthEntityId id,
        FailureCategoryMapping *mapping) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapServerInfo, 0x599f9021, 0x5643, 0x4965, 0x99,0x49, 0xe8,0x89,0x75,0xef,0xff,0x0e)
#endif
#else
typedef struct INapServerInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapServerInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapServerInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapServerInfo *This);

    /*** INapServerInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNapServerInfo)(
        INapServerInfo *This,
        CountedString **serverName,
        CountedString **serverDescription,
        CountedString **protocolVersion);

    HRESULT (STDMETHODCALLTYPE *GetRegisteredSystemHealthValidators)(
        INapServerInfo *This,
        SystemHealthEntityCount *count,
        NapComponentRegistrationInfo **validators,
        CLSID **validatorClsids);

    HRESULT (STDMETHODCALLTYPE *GetFailureCategoryMappings)(
        INapServerInfo *This,
        SystemHealthEntityId id,
        FailureCategoryMapping *mapping);

    END_INTERFACE
} INapServerInfoVtbl;

interface INapServerInfo {
    CONST_VTBL INapServerInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapServerInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapServerInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapServerInfo_Release(This) (This)->lpVtbl->Release(This)
/*** INapServerInfo methods ***/
#define INapServerInfo_GetNapServerInfo(This,serverName,serverDescription,protocolVersion) (This)->lpVtbl->GetNapServerInfo(This,serverName,serverDescription,protocolVersion)
#define INapServerInfo_GetRegisteredSystemHealthValidators(This,count,validators,validatorClsids) (This)->lpVtbl->GetRegisteredSystemHealthValidators(This,count,validators,validatorClsids)
#define INapServerInfo_GetFailureCategoryMappings(This,id,mapping) (This)->lpVtbl->GetFailureCategoryMappings(This,id,mapping)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapServerInfo_QueryInterface(INapServerInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapServerInfo_AddRef(INapServerInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapServerInfo_Release(INapServerInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** INapServerInfo methods ***/
static __WIDL_INLINE HRESULT INapServerInfo_GetNapServerInfo(INapServerInfo* This,CountedString **serverName,CountedString **serverDescription,CountedString **protocolVersion) {
    return This->lpVtbl->GetNapServerInfo(This,serverName,serverDescription,protocolVersion);
}
static __WIDL_INLINE HRESULT INapServerInfo_GetRegisteredSystemHealthValidators(INapServerInfo* This,SystemHealthEntityCount *count,NapComponentRegistrationInfo **validators,CLSID **validatorClsids) {
    return This->lpVtbl->GetRegisteredSystemHealthValidators(This,count,validators,validatorClsids);
}
static __WIDL_INLINE HRESULT INapServerInfo_GetFailureCategoryMappings(INapServerInfo* This,SystemHealthEntityId id,FailureCategoryMapping *mapping) {
    return This->lpVtbl->GetFailureCategoryMappings(This,id,mapping);
}
#endif
#endif

#endif


#endif  /* __INapServerInfo_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __napservermanagement_h__ */
