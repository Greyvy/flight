// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_modules_sdl_Runtime
#define INCLUDED_snow_modules_sdl_Runtime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,core,Runtime)
HX_DECLARE_CLASS3(snow,core,native,Runtime)
HX_DECLARE_CLASS3(snow,modules,sdl,Runtime)
HX_DECLARE_CLASS2(snow,types,ModState)

namespace snow{
namespace modules{
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES Runtime_obj : public  ::snow::core::native::Runtime_obj
{
	public:
		typedef  ::snow::core::native::Runtime_obj super;
		typedef Runtime_obj OBJ_;
		Runtime_obj();

	public:
		enum { _hx_ClassId = 0x68031e41 };

		void __construct( ::snow::Snow _app);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="snow.modules.sdl.Runtime")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"snow.modules.sdl.Runtime"); }
		static hx::ObjectPtr< Runtime_obj > __new( ::snow::Snow _app);
		static hx::ObjectPtr< Runtime_obj > __alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Runtime_obj();

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
		::String __ToString() const { return HX_HCSTRING("Runtime","\xb8","\xdc","\xb1","\xbc"); }

		static void __boot();
		static Float timestamp_start;
		static Float timestamp();
		static ::Dynamic timestamp_dyn();

		 SDL_GLContext gl;
		::cpp::Pointer<  SDL_Window > window;
		bool auto_swap;
		 ::haxe::ds::IntMap gamepads;
		 ::haxe::ds::IntMap joysticks;
		void ready();

		bool run();

		void shutdown( ::Dynamic _immediate);

		bool window_grab(bool enable);

		void window_swap();
		::Dynamic window_swap_dyn();

		bool window_fullscreen(bool enable, ::Dynamic true_fullscreen);

		int window_width();

		int window_height();

		 ::Dynamic _size;
		Float window_dpr;
		Float window_device_pixel_ratio();

		bool run_loop();
		::Dynamic run_loop_dyn();

		void loop(int _);
		::Dynamic loop_dyn();

		int event_watch( ::Dynamic _, cpp::Struct<SDL_Event> e);
		::Dynamic event_watch_dyn();

		void handle_window_ev( cpp::Struct<SDL_Event> e);
		::Dynamic handle_window_ev_dyn();

		int window_w;
		int window_h;
		int to_pixels(Float _value);
		::Dynamic to_pixels_dyn();

		void create_window();
		::Dynamic create_window_dyn();

		bool create_render_context(::cpp::Pointer<  SDL_Window > _window);
		::Dynamic create_render_context_dyn();

		void post_render_context(::cpp::Pointer<  SDL_Window > _window);
		::Dynamic post_render_context_dyn();

		void apply_GL_attr( ::Dynamic render);
		::Dynamic apply_GL_attr_dyn();

		int window_flags( ::Dynamic config);
		::Dynamic window_flags_dyn();

		 ::Dynamic update_window_config(::cpp::Pointer<  SDL_Window > _window, ::Dynamic config);
		::Dynamic update_window_config_dyn();

		 ::Dynamic update_render_config(::cpp::Pointer<  SDL_Window > _window, ::Dynamic render);
		::Dynamic update_render_config_dyn();

		void handle_input_ev( cpp::Struct<SDL_Event> e);
		::Dynamic handle_input_ev_dyn();

		 ::snow::types::ModState to_key_mod(int mod_value);
		::Dynamic to_key_mod_dyn();

};

} // end namespace snow
} // end namespace modules
} // end namespace sdl

#endif /* INCLUDED_snow_modules_sdl_Runtime */ 
