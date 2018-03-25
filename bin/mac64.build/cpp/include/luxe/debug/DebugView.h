// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_debug_DebugView
#define INCLUDED_luxe_debug_DebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(snow,types,WindowEvent)

namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES DebugView_obj : public  ::luxe::Objects_obj
{
	public:
		typedef  ::luxe::Objects_obj super;
		typedef DebugView_obj OBJ_;
		DebugView_obj();

	public:
		enum { _hx_ClassId = 0x5fb4b7fb };

		void __construct( ::luxe::Debug _debug);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.debug.DebugView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.debug.DebugView"); }
		static hx::ObjectPtr< DebugView_obj > __new( ::luxe::Debug _debug);
		static hx::ObjectPtr< DebugView_obj > __alloc(hx::Ctx *_hx_ctx, ::luxe::Debug _debug);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebugView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DebugView","\x38","\xb6","\x6d","\xd3"); }

		 ::luxe::Debug debug;
		bool visible;
		virtual void refresh();
		::Dynamic refresh_dyn();

		virtual void process();
		::Dynamic process_dyn();

		void ontouchdown( ::luxe::TouchEvent e);
		::Dynamic ontouchdown_dyn();

		void ontouchup( ::luxe::TouchEvent e);
		::Dynamic ontouchup_dyn();

		void ontouchmove( ::luxe::TouchEvent e);
		::Dynamic ontouchmove_dyn();

		void onmousedown( ::luxe::MouseEvent e);
		::Dynamic onmousedown_dyn();

		void onmouseup( ::luxe::MouseEvent e);
		::Dynamic onmouseup_dyn();

		void onmousemove( ::luxe::MouseEvent e);
		::Dynamic onmousemove_dyn();

		virtual void onmousewheel( ::luxe::MouseEvent e);
		::Dynamic onmousewheel_dyn();

		virtual void onkeydown( ::luxe::KeyEvent e);
		::Dynamic onkeydown_dyn();

		void onkeyup( ::luxe::KeyEvent e);
		::Dynamic onkeyup_dyn();

		virtual void onwindowsized( ::snow::types::WindowEvent e);
		::Dynamic onwindowsized_dyn();

		virtual void create();
		::Dynamic create_dyn();

		virtual void show();
		::Dynamic show_dyn();

		virtual void hide();
		::Dynamic hide_dyn();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_DebugView */ 