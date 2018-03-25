// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_debug_TraceDebugView
#define INCLUDED_luxe_debug_TraceDebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,TraceDebugView)
HX_DECLARE_CLASS2(snow,types,WindowEvent)

namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES TraceDebugView_obj : public  ::luxe::debug::DebugView_obj
{
	public:
		typedef  ::luxe::debug::DebugView_obj super;
		typedef TraceDebugView_obj OBJ_;
		TraceDebugView_obj();

	public:
		enum { _hx_ClassId = 0x463efe90 };

		void __construct( ::luxe::Debug _debug);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.debug.TraceDebugView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.debug.TraceDebugView"); }
		static hx::ObjectPtr< TraceDebugView_obj > __new( ::luxe::Debug _debug);
		static hx::ObjectPtr< TraceDebugView_obj > __alloc(hx::Ctx *_hx_ctx, ::luxe::Debug _debug);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TraceDebugView_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TraceDebugView","\x33","\x43","\xf2","\x60"); }

		::Array< ::String > logged;
		 ::luxe::Text lines;
		int max_lines;
		void on_trace( ::Dynamic v, ::Dynamic inf);
		::Dynamic on_trace_dyn();

		void create();

		void onwindowsized( ::snow::types::WindowEvent e);

		void add_line(::String _t);
		::Dynamic add_line_dyn();

		int _last_logged_length;
		void refresh_lines();
		::Dynamic refresh_lines_dyn();

		void refresh();

		void process();

		void show();

		void hide();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_TraceDebugView */ 