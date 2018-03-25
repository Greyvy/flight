// Generated by Haxe 3.4.5
#ifndef INCLUDED_luxe_Events
#define INCLUDED_luxe_Events

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(luxe,Events)
HX_DECLARE_CLASS2(luxe,_Events,EventObject)

namespace luxe{


class HXCPP_CLASS_ATTRIBUTES Events_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Events_obj OBJ_;
		Events_obj();

	public:
		enum { _hx_ClassId = 0x2ad967af };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="luxe.Events")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"luxe.Events"); }
		static hx::ObjectPtr< Events_obj > __new();
		static hx::ObjectPtr< Events_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Events_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Events","\x39","\xc3","\xfe","\xca"); }

		::Array< ::Dynamic> event_queue;
		 ::haxe::ds::StringMap event_connections;
		 ::haxe::ds::StringMap event_slots;
		 ::haxe::ds::StringMap event_filters;
		 ::haxe::ds::StringMap event_schedules;
		int event_queue_count;
		void destroy();
		::Dynamic destroy_dyn();

		void clear();
		::Dynamic clear_dyn();

		bool does_filter_event(::String _filter,::String _event);
		::Dynamic does_filter_event_dyn();

		::String listen(::String _event_name, ::Dynamic _listener);
		::Dynamic listen_dyn();

		bool unlisten(::String event_id);
		::Dynamic unlisten_dyn();

		::String queue(::String event_name, ::Dynamic properties);
		::Dynamic queue_dyn();

		bool dequeue(::String event_id);
		::Dynamic dequeue_dyn();

		void process();
		::Dynamic process_dyn();

		bool fire(::String _event_name, ::Dynamic _properties, ::Dynamic _tag);
		::Dynamic fire_dyn();

		::String schedule(Float time,::String event_name, ::Dynamic properties);
		::Dynamic schedule_dyn();

		bool unschedule(::String schedule_id);
		::Dynamic unschedule_dyn();

		 ::Dynamic tag_properties( ::Dynamic _properties,::String _name,int _count);
		::Dynamic tag_properties_dyn();

};

} // end namespace luxe

#endif /* INCLUDED_luxe_Events */ 
