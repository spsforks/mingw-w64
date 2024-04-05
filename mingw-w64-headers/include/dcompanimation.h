/*** Autogenerated by WIDL 9.5 from include/dcompanimation.idl - Do not edit ***/

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

#ifndef __dcompanimation_h__
#define __dcompanimation_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IDCompositionAnimation_FWD_DEFINED__
#define __IDCompositionAnimation_FWD_DEFINED__
typedef interface IDCompositionAnimation IDCompositionAnimation;
#ifdef __cplusplus
interface IDCompositionAnimation;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <wtypes.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IDCompositionAnimation interface
 */
#ifndef __IDCompositionAnimation_INTERFACE_DEFINED__
#define __IDCompositionAnimation_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDCompositionAnimation, 0xcbfd91d9, 0x51b2, 0x45e4, 0xb3,0xde, 0xd1,0x9c,0xcf,0xb8,0x63,0xc5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cbfd91d9-51b2-45e4-b3de-d19ccfb863c5")
IDCompositionAnimation : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAbsoluteBeginTime(
        LARGE_INTEGER a) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddCubic(
        double a,
        float b,
        float c,
        float d,
        float e) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddSinusoidal(
        double a,
        float b,
        float c,
        float d,
        float e) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddRepeat(
        double a,
        double b) = 0;

    virtual HRESULT STDMETHODCALLTYPE End(
        double a,
        float b) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDCompositionAnimation, 0xcbfd91d9, 0x51b2, 0x45e4, 0xb3,0xde, 0xd1,0x9c,0xcf,0xb8,0x63,0xc5)
#endif
#else
typedef struct IDCompositionAnimationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDCompositionAnimation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDCompositionAnimation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDCompositionAnimation *This);

    /*** IDCompositionAnimation methods ***/
    HRESULT (STDMETHODCALLTYPE *Reset)(
        IDCompositionAnimation *This);

    HRESULT (STDMETHODCALLTYPE *SetAbsoluteBeginTime)(
        IDCompositionAnimation *This,
        LARGE_INTEGER a);

    HRESULT (STDMETHODCALLTYPE *AddCubic)(
        IDCompositionAnimation *This,
        double a,
        float b,
        float c,
        float d,
        float e);

    HRESULT (STDMETHODCALLTYPE *AddSinusoidal)(
        IDCompositionAnimation *This,
        double a,
        float b,
        float c,
        float d,
        float e);

    HRESULT (STDMETHODCALLTYPE *AddRepeat)(
        IDCompositionAnimation *This,
        double a,
        double b);

    HRESULT (STDMETHODCALLTYPE *End)(
        IDCompositionAnimation *This,
        double a,
        float b);

    END_INTERFACE
} IDCompositionAnimationVtbl;

interface IDCompositionAnimation {
    CONST_VTBL IDCompositionAnimationVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDCompositionAnimation_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDCompositionAnimation_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDCompositionAnimation_Release(This) (This)->lpVtbl->Release(This)
/*** IDCompositionAnimation methods ***/
#define IDCompositionAnimation_Reset(This) (This)->lpVtbl->Reset(This)
#define IDCompositionAnimation_SetAbsoluteBeginTime(This,a) (This)->lpVtbl->SetAbsoluteBeginTime(This,a)
#define IDCompositionAnimation_AddCubic(This,a,b,c,d,e) (This)->lpVtbl->AddCubic(This,a,b,c,d,e)
#define IDCompositionAnimation_AddSinusoidal(This,a,b,c,d,e) (This)->lpVtbl->AddSinusoidal(This,a,b,c,d,e)
#define IDCompositionAnimation_AddRepeat(This,a,b) (This)->lpVtbl->AddRepeat(This,a,b)
#define IDCompositionAnimation_End(This,a,b) (This)->lpVtbl->End(This,a,b)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IDCompositionAnimation_QueryInterface(IDCompositionAnimation* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IDCompositionAnimation_AddRef(IDCompositionAnimation* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IDCompositionAnimation_Release(IDCompositionAnimation* This) {
    return This->lpVtbl->Release(This);
}
/*** IDCompositionAnimation methods ***/
static __WIDL_INLINE HRESULT IDCompositionAnimation_Reset(IDCompositionAnimation* This) {
    return This->lpVtbl->Reset(This);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_SetAbsoluteBeginTime(IDCompositionAnimation* This,LARGE_INTEGER a) {
    return This->lpVtbl->SetAbsoluteBeginTime(This,a);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_AddCubic(IDCompositionAnimation* This,double a,float b,float c,float d,float e) {
    return This->lpVtbl->AddCubic(This,a,b,c,d,e);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_AddSinusoidal(IDCompositionAnimation* This,double a,float b,float c,float d,float e) {
    return This->lpVtbl->AddSinusoidal(This,a,b,c,d,e);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_AddRepeat(IDCompositionAnimation* This,double a,double b) {
    return This->lpVtbl->AddRepeat(This,a,b);
}
static __WIDL_INLINE HRESULT IDCompositionAnimation_End(IDCompositionAnimation* This,double a,float b) {
    return This->lpVtbl->End(This,a,b);
}
#endif
#endif

#endif


#endif  /* __IDCompositionAnimation_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dcompanimation_h__ */
