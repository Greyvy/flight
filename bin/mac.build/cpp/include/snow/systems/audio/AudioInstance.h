// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_systems_audio_AudioInstance
#define INCLUDED_snow_systems_audio_AudioInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,systems,audio,AudioInstance)
HX_DECLARE_CLASS3(snow,systems,audio,AudioSource)

namespace snow{
namespace systems{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES AudioInstance_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AudioInstance_obj OBJ_;
		AudioInstance_obj();

	public:
		enum { _hx_ClassId = 0x36661e32 };

		void __construct( ::snow::systems::audio::AudioSource _source, ::Dynamic _handle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="snow.systems.audio.AudioInstance")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"snow.systems.audio.AudioInstance"); }
		static hx::ObjectPtr< AudioInstance_obj > __new( ::snow::systems::audio::AudioSource _source, ::Dynamic _handle);
		static hx::ObjectPtr< AudioInstance_obj > __alloc(hx::Ctx *_hx_ctx, ::snow::systems::audio::AudioSource _source, ::Dynamic _handle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioInstance_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AudioInstance","\x6b","\x6a","\x09","\xa2"); }

		 ::snow::systems::audio::AudioSource source;
		 ::Dynamic handle;
		bool destroyed;
		void tick();
		::Dynamic tick_dyn();

		bool has_ended();
		::Dynamic has_ended_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		::Array< int > data_get( ::snow::api::buffers::ArrayBufferView _into,int _start,int _length,::Array< int > _into_result);
		::Dynamic data_get_dyn();

		bool data_seek(int _to_samples);
		::Dynamic data_seek_dyn();

};

} // end namespace snow
} // end namespace systems
} // end namespace audio

#endif /* INCLUDED_snow_systems_audio_AudioInstance */ 