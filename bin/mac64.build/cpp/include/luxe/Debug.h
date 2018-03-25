// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_Debug
#define INCLUDED_luxe_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(luxe,KeyEvent)
HX_DECLARE_CLASS1(luxe,MouseEvent)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,TouchEvent)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,Inspector)
HX_DECLARE_CLASS2(luxe,resource,Resource)
HX_DECLARE_CLASS1(phoenix,Batcher)
HX_DECLARE_CLASS1(phoenix,BitmapFont)
HX_DECLARE_CLASS1(phoenix,Camera)
HX_DECLARE_CLASS1(phoenix,Vector)
HX_DECLARE_CLASS2(phoenix,geometry,Geometry)
HX_DECLARE_CLASS2(phoenix,geometry,QuadGeometry)
HX_DECLARE_CLASS1(snow,App)

namespace luxe{


class HXCPP_CLASS_ATTRIBUTES Debug_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();

	public:
		enum { _hx_ClassId = 0x6791b099 };

		void __construct( ::luxe::Engine _app);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.Debug")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.Debug"); }
		static hx::ObjectPtr< Debug_obj > __new( ::luxe::Engine _app);
		static hx::ObjectPtr< Debug_obj > __alloc(hx::Ctx *_hx_ctx, ::luxe::Engine _app);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a"); }

		static void __boot();
		static ::Array< ::Dynamic> views;
		static ::String debug_batch_tag;
		static ::Array< ::Dynamic> trace_callbacks;
		static bool shut_down;
		static bool tracing;
		static void internal_trace( ::Dynamic _value, ::Dynamic _info);
		static ::Dynamic internal_trace_dyn();

		 ::luxe::Engine app;
		bool visible;
		 ::luxe::debug::Inspector inspector;
		 ::phoenix::geometry::QuadGeometry overlay;
		 ::phoenix::Batcher batcher;
		 ::phoenix::Camera view;
		 ::phoenix::BitmapFont debug_font;
		Float dt_average;
		Float dt_average_accum;
		int dt_average_span;
		int dt_average_count;
		int current_view_index;
		int last_view_index;
		 ::luxe::debug::DebugView current_view;
		 ::phoenix::Vector padding;
		::String profile_path;
		bool profiling;
		 ::Dynamic get_view(::String _name);
		::Dynamic get_view_dyn();

		void start(::String _name, ::Dynamic _max);
		::Dynamic start_dyn();

		void end(::String _name);
		::Dynamic end_dyn();

		void init();
		::Dynamic init_dyn();

		void create_debug_console();
		::Dynamic create_debug_console_dyn();

		void render();
		::Dynamic render_dyn();

		void mouseup( ::luxe::MouseEvent e);
		::Dynamic mouseup_dyn();

		void mousedown( ::luxe::MouseEvent e);
		::Dynamic mousedown_dyn();

		void mousemove( ::luxe::MouseEvent e);
		::Dynamic mousemove_dyn();

		void mousewheel( ::luxe::MouseEvent e);
		::Dynamic mousewheel_dyn();

		void touchup( ::luxe::TouchEvent e);
		::Dynamic touchup_dyn();

		void touchdown( ::luxe::TouchEvent e);
		::Dynamic touchdown_dyn();

		void touchmove( ::luxe::TouchEvent e);
		::Dynamic touchmove_dyn();

		void keyup( ::luxe::KeyEvent e);
		::Dynamic keyup_dyn();

		void keydown( ::luxe::KeyEvent e);
		::Dynamic keydown_dyn();

		void refresh();
		::Dynamic refresh_dyn();

		void switch_view();
		::Dynamic switch_view_dyn();

		bool last_cursor_grab;
		bool set_visible(bool _value);
		::Dynamic set_visible_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void process();
		::Dynamic process_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Debug */ 
