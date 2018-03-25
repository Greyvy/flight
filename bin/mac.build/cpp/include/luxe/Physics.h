// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_Physics
#define INCLUDED_luxe_Physics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Engine)
HX_DECLARE_CLASS1(luxe,Physics)
HX_DECLARE_CLASS1(luxe,PhysicsEngine)
HX_DECLARE_CLASS1(snow,App)
HX_DECLARE_CLASS2(snow,api,Timer)

namespace luxe{


class HXCPP_CLASS_ATTRIBUTES Physics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Physics_obj OBJ_;
		Physics_obj();

	public:
		enum { _hx_ClassId = 0x0b17a371 };

		void __construct( ::luxe::Engine _core);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.Physics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.Physics"); }
		static hx::ObjectPtr< Physics_obj > __new( ::luxe::Engine _core);
		static hx::ObjectPtr< Physics_obj > __alloc(hx::Ctx *_hx_ctx, ::luxe::Engine _core);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Physics_obj();

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
		::String __ToString() const { return HX_HCSTRING("Physics","\xa7","\x60","\xa2","\x8b"); }

		static void __boot();
		static ::String tag_physics;
		 ::luxe::Engine core;
		::Array< ::Dynamic> engines;
		Float step_rate;
		Float step_delta;
		 ::snow::api::Timer timer;
		 ::luxe::Emitter emitter;
		void init();
		::Dynamic init_dyn();

		void reset();
		::Dynamic reset_dyn();

		void fixed_update();
		::Dynamic fixed_update_dyn();

		 ::Dynamic add_engine(hx::Class type, ::Dynamic _data);
		::Dynamic add_engine_dyn();

		void update();
		::Dynamic update_dyn();

		void process();
		::Dynamic process_dyn();

		void render();
		::Dynamic render_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void on(int _event, ::Dynamic _handler);
		::Dynamic on_dyn();

		bool off(int _event, ::Dynamic _handler);
		::Dynamic off_dyn();

		void emit(int _event,Float _float);
		::Dynamic emit_dyn();

		Float set_step_rate(Float _rate);
		::Dynamic set_step_rate_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Physics */ 
