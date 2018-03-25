// Generated by Haxe 3.4.5
#ifndef INCLUDED_phoenix_RenderPath
#define INCLUDED_phoenix_RenderPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,RenderPath)
HX_DECLARE_CLASS1(phoenix,Renderer)
HX_DECLARE_CLASS1(phoenix,RendererStats)

namespace phoenix{


class HXCPP_CLASS_ATTRIBUTES RenderPath_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RenderPath_obj OBJ_;
		RenderPath_obj();

	public:
		enum { _hx_ClassId = 0x7f72cfe2 };

		void __construct( ::phoenix::Renderer _renderer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="phoenix.RenderPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"phoenix.RenderPath"); }
		static hx::ObjectPtr< RenderPath_obj > __new( ::phoenix::Renderer _renderer);
		static hx::ObjectPtr< RenderPath_obj > __alloc(hx::Ctx *_hx_ctx, ::phoenix::Renderer _renderer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderPath_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RenderPath","\x3b","\xe4","\x0c","\xde"); }

		 ::phoenix::Renderer renderer;
		void render(::Array< ::Dynamic> _batchers, ::phoenix::RendererStats _stats);
		::Dynamic render_dyn();

};

} // end namespace phoenix

#endif /* INCLUDED_phoenix_RenderPath */ 