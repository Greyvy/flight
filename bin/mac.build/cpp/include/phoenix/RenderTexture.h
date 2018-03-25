// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix_RenderTexture
#define INCLUDED_phoenix_RenderTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_phoenix_Texture
#include <phoenix/Texture.h>
#endif
#ifndef INCLUDED_phoenix_RenderTarget
#include <phoenix/RenderTarget.h>
#endif
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS1(phoenix,RenderTarget)
HX_DECLARE_CLASS1(phoenix,RenderTexture)
HX_DECLARE_CLASS1(phoenix,Texture)

namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES RenderTexture_obj : public  ::phoenix::Texture_obj
{
	public:
		typedef  ::phoenix::Texture_obj super;
		typedef RenderTexture_obj OBJ_;
		RenderTexture_obj();

	public:
		enum { _hx_ClassId = 0x2e393a96 };

		void __construct( ::Dynamic _options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="phoenix.RenderTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"phoenix.RenderTexture"); }
		static hx::ObjectPtr< RenderTexture_obj > __new( ::Dynamic _options);
		static hx::ObjectPtr< RenderTexture_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic _options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTexture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("RenderTexture","\x05","\x8c","\xbe","\xe2"); }

		 ::opengl::GLObject framebuffer;
		 ::opengl::GLObject renderbuffer;
		Float viewport_scale;
		void clear();

		void bindBuffer();
		::Dynamic bindBuffer_dyn();

		void unbindBuffer( ::opengl::GLObject _other);
		::Dynamic unbindBuffer_dyn();

		void bindRenderBuffer();
		::Dynamic bindRenderBuffer_dyn();

		void unbindRenderBuffer( ::opengl::GLObject _other);
		::Dynamic unbindRenderBuffer_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderTexture */ 