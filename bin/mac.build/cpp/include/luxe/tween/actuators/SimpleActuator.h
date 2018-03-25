// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#define INCLUDED_luxe_tween_actuators_SimpleActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(luxe,tween,actuators,GenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,IGenericActuator)
HX_DECLARE_CLASS3(luxe,tween,actuators,PropertyDetails)
HX_DECLARE_CLASS3(luxe,tween,actuators,SimpleActuator)

namespace luxe{
namespace tween{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES SimpleActuator_obj : public  ::luxe::tween::actuators::GenericActuator_obj
{
	public:
		typedef  ::luxe::tween::actuators::GenericActuator_obj super;
		typedef SimpleActuator_obj OBJ_;
		SimpleActuator_obj();

	public:
		enum { _hx_ClassId = 0x3c2b7630 };

		void __construct( ::Dynamic target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.tween.actuators.SimpleActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.tween.actuators.SimpleActuator"); }
		static hx::ObjectPtr< SimpleActuator_obj > __new( ::Dynamic target,Float duration, ::Dynamic properties);
		static hx::ObjectPtr< SimpleActuator_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleActuator_obj();

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
		::String __ToString() const { return HX_HCSTRING("SimpleActuator","\xab","\xd3","\xf8","\x0c"); }

		static void __boot();
		static ::Array< ::Dynamic> actuators;
		static int actuatorsLength;
		static bool addedEvent;
		static  ::haxe::Timer timer;
		static Float update_timer;
		static Float current_time;
		static void on_internal_update( ::Dynamic _);
		static ::Dynamic on_internal_update_dyn();

		Float timeOffset;
		bool active;
		bool cacheVisible;
		int detailsLength;
		bool initialized;
		bool paused;
		Float pauseTime;
		::Array< ::Dynamic> propertyDetails;
		bool sendChange;
		bool setVisible;
		Float startTime;
		bool toggleVisible;
		bool has_timescaled_starttime;
		::Dynamic autoVisible( ::Dynamic value);

		::Dynamic delay(Float duration);

		 ::Dynamic getField( ::Dynamic target,::String propertyName);
		::Dynamic getField_dyn();

		virtual void initialize();
		::Dynamic initialize_dyn();

		void move();

		::Dynamic onUpdate( ::Dynamic handler,::cpp::VirtualArray parameters);

		void pause();

		void resume();

		void setField( ::Dynamic target,::String propertyName, ::Dynamic value);
		::Dynamic setField_dyn();

		void setProperty( ::luxe::tween::actuators::PropertyDetails details, ::Dynamic value);
		::Dynamic setProperty_dyn();

		void stop( ::Dynamic properties,bool complete,bool sendEvent);

		virtual void update(Float currentTime);
		::Dynamic update_dyn();

};

} // end namespace luxe
} // end namespace tween
} // end namespace actuators

#endif /* INCLUDED_luxe_tween_actuators_SimpleActuator */ 
