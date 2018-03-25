// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_debug_ProfilerDebugView
#define INCLUDED_luxe_debug_ProfilerDebugView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_debug_DebugView
#include <luxe/debug/DebugView.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Debug)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Text)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS2(luxe,debug,DebugView)
HX_DECLARE_CLASS2(luxe,debug,ProfilerDebugView)
HX_DECLARE_CLASS3(luxe,debug,_ProfilerDebugView,ProfilerGraph)
HX_DECLARE_CLASS1(phoenix,Color)

namespace luxe{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES ProfilerDebugView_obj : public  ::luxe::debug::DebugView_obj
{
	public:
		typedef  ::luxe::debug::DebugView_obj super;
		typedef ProfilerDebugView_obj OBJ_;
		ProfilerDebugView_obj();

	public:
		enum { _hx_ClassId = 0x077a695a };

		void __construct( ::luxe::Debug _debug);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.debug.ProfilerDebugView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.debug.ProfilerDebugView"); }
		static hx::ObjectPtr< ProfilerDebugView_obj > __new( ::luxe::Debug _debug);
		static hx::ObjectPtr< ProfilerDebugView_obj > __alloc(hx::Ctx *_hx_ctx, ::luxe::Debug _debug);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProfilerDebugView_obj();

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
		::String __ToString() const { return HX_HCSTRING("ProfilerDebugView","\xcf","\x8d","\xda","\x6e"); }

		static void __boot();
		static  ::haxe::ds::StringMap lists;
		static  ::phoenix::Color color_red;
		static  ::phoenix::Color color_green;
		static  ::phoenix::Color color_normal;
		static void add_offset(::String _id,::String _offset);
		static ::Dynamic add_offset_dyn();

		static void hide_item(::String _id);
		static ::Dynamic hide_item_dyn();

		static void show_item(::String _id);
		static ::Dynamic show_item_dyn();

		static void start(::String _id, ::Dynamic _max);
		static ::Dynamic start_dyn();

		static void end(::String _id);
		static ::Dynamic end_dyn();

		 ::luxe::debug::_ProfilerDebugView::ProfilerGraph memgraph;
		 ::luxe::debug::_ProfilerDebugView::ProfilerGraph memgraph2;
		 ::luxe::debug::_ProfilerDebugView::ProfilerGraph memgraph3;
		 ::luxe::debug::_ProfilerDebugView::ProfilerGraph memgraph4;
		 ::luxe::Text memtext;
		int margin;
		void create();

		Float tickamount;
		Float nexttick;
		Float peak;
		Float minpeak;
		::Array< ::String > _byte_levels;
		void update_graph( ::luxe::debug::_ProfilerDebugView::ProfilerGraph graph,Float val);
		::Dynamic update_graph_dyn();

		void process();

		bool _setup;
		void show();

		void hide();

};

} // end namespace luxe
} // end namespace debug

#endif /* INCLUDED_luxe_debug_ProfilerDebugView */ 
