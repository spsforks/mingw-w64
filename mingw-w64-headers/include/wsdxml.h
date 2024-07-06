/*** Autogenerated by WIDL 9.11 from include/wsdxml.idl - Do not edit ***/

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

#ifndef __wsdxml_h__
#define __wsdxml_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IWSDXMLContext_FWD_DEFINED__
#define __IWSDXMLContext_FWD_DEFINED__
typedef interface IWSDXMLContext IWSDXMLContext;
#ifdef __cplusplus
interface IWSDXMLContext;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef __IWSDXMLContext_FWD_DEFINED__
#define __IWSDXMLContext_FWD_DEFINED__
typedef interface IWSDXMLContext IWSDXMLContext;
#ifdef __cplusplus
interface IWSDXMLContext;
#endif /* __cplusplus */
#endif

enum {
    OpNone = 0,
    OpEndOfTable = 1,
    OpBeginElement_ = 2,
    OpBeginAnyElement = 3,
    OpEndElement = 4,
    OpElement_ = 5,
    OpAnyElement = 6,
    OpAnyElements = 7,
    OpAnyText = 8,
    OpAttribute_ = 9,
    OpBeginChoice = 10,
    OpEndChoice = 11,
    OpBeginSequence = 12,
    OpEndSequence = 13,
    OpBeginAll = 14,
    OpEndAll = 15,
    OpAnything = 16,
    OpAnyNumber = 17,
    OpOneOrMore = 18,
    OpOptional = 19,
    OpFormatBool_ = 20,
    OpFormatInt8_ = 21,
    OpFormatInt16_ = 22,
    OpFormatInt32_ = 23,
    OpFormatInt64_ = 24,
    OpFormatUInt8_ = 25,
    OpFormatUInt16_ = 26,
    OpFormatUInt32_ = 27,
    OpFormatUInt64_ = 28,
    OpFormatUnicodeString_ = 29,
    OpFormatDom_ = 30,
    OpFormatStruct_ = 31,
    OpFormatUri_ = 32,
    OpFormatUuidUri_ = 33,
    OpFormatName_ = 34,
    OpFormatListInsertTail_ = 35,
    OpFormatType_ = 36,
    OpFormatDynamicType_ = 37,
    OpFormatLookupType_ = 38,
    OpFormatDuration_ = 39,
    OpFormatDateTime_ = 40,
    OpFormatFloat_ = 41,
    OpFormatDouble_ = 42,
    OpProcess_ = 43,
    OpQualifiedAttribute_ = 44,
    OpFormatXMLDeclaration_ = 45,
    OpFormatMax = 46
};
typedef struct _WSDXML_NAMESPACE WSDXML_NAMESPACE;
typedef const WSDXML_NAMESPACE *PCWSDXML_NAMESPACE;
typedef struct _WSDXML_NAME WSDXML_NAME;
typedef struct _WSDXML_TYPE WSDXML_TYPE;
typedef const WSDXML_TYPE *PCWSDXML_TYPE;
typedef struct _WSDXML_PREFIX_MAPPING WSDXML_PREFIX_MAPPING;
typedef struct _WSDXML_ATTRIBUTE WSDXML_ATTRIBUTE;
typedef struct _WSDXML_NODE WSDXML_NODE;
typedef struct _WSDXML_ELEMENT WSDXML_ELEMENT;
typedef struct _WSDXML_TEXT WSDXML_TEXT;
typedef struct _WSDXML_ELEMENT_LIST WSDXML_ELEMENT_LIST;
typedef struct _WSD_DATETIME {
    WINBOOL isPositive;
    ULONG year;
    UCHAR month;
    UCHAR day;
    UCHAR hour;
    UCHAR minute;
    UCHAR second;
    UINT millisecond;
    WINBOOL TZIsLocal;
    WINBOOL TZIsPositive;
    UCHAR TZHour;
    UCHAR TZMinute;
} WSD_DATETIME;
typedef struct _WSD_DURATION {
    WINBOOL isPositive;
    ULONG year;
    ULONG month;
    ULONG day;
    ULONG hour;
    ULONG minute;
    ULONG second;
    ULONG millisecond;
} WSD_DURATION;

#define WSDXML_TYPE_ENCODING(tidx,lno) ((((DWORD) lno) << 28) | tidx)
#define WSDXML_NAMESPACE_ENCODING(nsidx, lno) ((((WORD) lno) << 12) | nsidx)
#define WSDXML_NAME_ENCODING(nidx, nsenc) ((((DWORD) nsenc) << 16) | nidx)

#define OFFSET(type,field) ((DWORD_PTR) (&((type *)0)->field))
#define BYTE0(n) (BYTE) (((DWORD) n) & 0xff)
#define BYTE1(n) (BYTE) ((((DWORD) n) >> 8) & 0xff)
#define BYTE2(n) (BYTE) ((((DWORD) n) >> 16) & 0xff)
#define BYTE3(n) (BYTE)((((DWORD) n) >> 24) & 0xff)
#define BYTES(n) BYTE0(n), BYTE1(n), BYTE2(n), BYTE3(n)

#define OpAttribute(name) OpAttribute_, BYTES(name)
#define OpBeginElement(name) OpBeginElement_, BYTES(name)
#define OpElement(name) OpElement_, BYTES(name)
#define OpFormatBool(type,field,isptr) OpFormatBool_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatDateTime(type,field) OpFormatDateTime_, BYTES(OFFSET(type,field))
#define OpFormatDom(type,field) OpFormatDom_, BYTES(OFFSET(type,field))
#define OpFormatDouble(type,field,isptr) OpFormatDouble_, BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatDuration(type,field) OpFormatDuration_, BYTES(OFFSET(type,field))
#define OpFormatDynamicType(name,type,field) OpFormatDynamicType_, BYTES(name),BYTES(OFFSET(type,field))
#define OpFormatFloat(type,field,isptr) OpFormatFloat_, BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatInt8(type,field,isptr) OpFormatInt8_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatInt16(type,field,isptr) OpFormatInt16_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatInt32(type,field,isptr) OpFormatInt32_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatInt64(type,field,isptr) OpFormatInt64_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatListInsertTail(s,type,field) OpFormatListInsertTail_,BYTES(sizeof(s)),BYTES(OFFSET(type,field))
#define OpFormatLookupType(uriField,type,field) OpFormatLookupType_, BYTES(OFFSET(type,uriField)),BYTES(OFFSET(type,field))
#define OpFormatName(type,field) OpFormatName_, BYTES(OFFSET(type,field))
#define OpFormatPointerToStruct(sType) OpFormatStruct_, BYTES(sizeof(sType)),BYTES(0)
#define OpFormatStruct(sType,type,field) OpFormatStruct_, BYTES(sizeof(sType)),BYTES(OFFSET(type,field))
#define OpFormatType(table,type,field) OpFormatType_, BYTES(table),BYTES(OFFSET(type,field))
#define OpFormatUInt8(type,field,isptr) OpFormatUInt8_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatUInt16(type,field,isptr) OpFormatUInt16_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatUInt32(type,field,isptr) OpFormatUInt32_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatUInt64(type,field,isptr) OpFormatUInt64_, BYTES(isptr), BYTES(OFFSET(type,field))
#define OpFormatUnicodeString(type,field) OpFormatUnicodeString_, BYTES(OFFSET(type,field))
#define OpFormatUri(type,field) OpFormatUri_, BYTES(OFFSET(type,field))
#define OpFormatUuidUri(type,field,isptr) OpFormatUuidUri_, BYTES(isptr),BYTES(OFFSET(type,field))
#define OpFormatXMLDeclaration(type,field) OpFormatXMLDeclaration_, BYTES(OFFSET(type,field))
#define OpProcess(type,field) OpProcess_, BYTES(OFFSET(type,field))
#define OpQualifiedAttribute(name) OpQualifiedAttribute_, BYTES(name)
/*****************************************************************************
 * IWSDXMLContext interface
 */
#ifndef __IWSDXMLContext_INTERFACE_DEFINED__
#define __IWSDXMLContext_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDXMLContext, 0x75d8f3ee, 0x3e5a, 0x43b4, 0xa1,0x5a, 0xbc,0xf6,0x88,0x74,0x60,0xc0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("75d8f3ee-3e5a-43b4-a15a-bcf6887460c0")
IWSDXMLContext : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AddNamespace(
        LPCWSTR pszUri,
        LPCWSTR pszSuggestedPrefix,
        WSDXML_NAMESPACE **ppNamespace) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddNameToNamespace(
        LPCWSTR pszUri,
        LPCWSTR pszName,
        WSDXML_NAME **ppName) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetNamespaces(
        const PCWSDXML_NAMESPACE *pNamespaces,
        WORD wNamespacesCount,
        BYTE bLayerNumber) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetTypes(
        const PCWSDXML_TYPE *pTypes,
        DWORD dwTypesCount,
        BYTE bLayerNumber) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDXMLContext, 0x75d8f3ee, 0x3e5a, 0x43b4, 0xa1,0x5a, 0xbc,0xf6,0x88,0x74,0x60,0xc0)
#endif
#else
typedef struct IWSDXMLContextVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDXMLContext *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDXMLContext *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDXMLContext *This);

    /*** IWSDXMLContext methods ***/
    HRESULT (STDMETHODCALLTYPE *AddNamespace)(
        IWSDXMLContext *This,
        LPCWSTR pszUri,
        LPCWSTR pszSuggestedPrefix,
        WSDXML_NAMESPACE **ppNamespace);

    HRESULT (STDMETHODCALLTYPE *AddNameToNamespace)(
        IWSDXMLContext *This,
        LPCWSTR pszUri,
        LPCWSTR pszName,
        WSDXML_NAME **ppName);

    HRESULT (STDMETHODCALLTYPE *SetNamespaces)(
        IWSDXMLContext *This,
        const PCWSDXML_NAMESPACE *pNamespaces,
        WORD wNamespacesCount,
        BYTE bLayerNumber);

    HRESULT (STDMETHODCALLTYPE *SetTypes)(
        IWSDXMLContext *This,
        const PCWSDXML_TYPE *pTypes,
        DWORD dwTypesCount,
        BYTE bLayerNumber);

    END_INTERFACE
} IWSDXMLContextVtbl;

interface IWSDXMLContext {
    CONST_VTBL IWSDXMLContextVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDXMLContext_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDXMLContext_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDXMLContext_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDXMLContext methods ***/
#define IWSDXMLContext_AddNamespace(This,pszUri,pszSuggestedPrefix,ppNamespace) (This)->lpVtbl->AddNamespace(This,pszUri,pszSuggestedPrefix,ppNamespace)
#define IWSDXMLContext_AddNameToNamespace(This,pszUri,pszName,ppName) (This)->lpVtbl->AddNameToNamespace(This,pszUri,pszName,ppName)
#define IWSDXMLContext_SetNamespaces(This,pNamespaces,wNamespacesCount,bLayerNumber) (This)->lpVtbl->SetNamespaces(This,pNamespaces,wNamespacesCount,bLayerNumber)
#define IWSDXMLContext_SetTypes(This,pTypes,dwTypesCount,bLayerNumber) (This)->lpVtbl->SetTypes(This,pTypes,dwTypesCount,bLayerNumber)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWSDXMLContext_QueryInterface(IWSDXMLContext* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWSDXMLContext_AddRef(IWSDXMLContext* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWSDXMLContext_Release(IWSDXMLContext* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDXMLContext methods ***/
static __WIDL_INLINE HRESULT IWSDXMLContext_AddNamespace(IWSDXMLContext* This,LPCWSTR pszUri,LPCWSTR pszSuggestedPrefix,WSDXML_NAMESPACE **ppNamespace) {
    return This->lpVtbl->AddNamespace(This,pszUri,pszSuggestedPrefix,ppNamespace);
}
static __WIDL_INLINE HRESULT IWSDXMLContext_AddNameToNamespace(IWSDXMLContext* This,LPCWSTR pszUri,LPCWSTR pszName,WSDXML_NAME **ppName) {
    return This->lpVtbl->AddNameToNamespace(This,pszUri,pszName,ppName);
}
static __WIDL_INLINE HRESULT IWSDXMLContext_SetNamespaces(IWSDXMLContext* This,const PCWSDXML_NAMESPACE *pNamespaces,WORD wNamespacesCount,BYTE bLayerNumber) {
    return This->lpVtbl->SetNamespaces(This,pNamespaces,wNamespacesCount,bLayerNumber);
}
static __WIDL_INLINE HRESULT IWSDXMLContext_SetTypes(IWSDXMLContext* This,const PCWSDXML_TYPE *pTypes,DWORD dwTypesCount,BYTE bLayerNumber) {
    return This->lpVtbl->SetTypes(This,pTypes,dwTypesCount,bLayerNumber);
}
#endif
#endif

#endif


#endif  /* __IWSDXMLContext_INTERFACE_DEFINED__ */

HRESULT WINAPI WSDXMLGetNameFromBuiltinNamespace(LPCWSTR pszNamespace, LPCWSTR pszName, WSDXML_NAME **ppName);
HRESULT WINAPI WSDXMLCreateContext(IWSDXMLContext **ppContext);
#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wsdxml_h__ */
