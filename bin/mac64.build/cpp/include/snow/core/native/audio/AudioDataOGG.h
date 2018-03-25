// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_core_native_audio_AudioDataOGG
#define INCLUDED_snow_core_native_audio_AudioDataOGG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif
#ifndef INCLUDED_886b57b7a9067d4f
#define INCLUDED_886b57b7a9067d4f
#include "linc_ogg.h"
#endif
#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,core,native,audio,AudioDataOGG)
HX_DECLARE_CLASS2(snow,types,AudioData)

namespace snow{
namespace core{
namespace native{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES AudioDataOGG_obj : public  ::snow::types::AudioData_obj
{
	public:
		typedef  ::snow::types::AudioData_obj super;
		typedef AudioDataOGG_obj OBJ_;
		AudioDataOGG_obj();

	public:
		enum { _hx_ClassId = 0x09d58bc8 };

		void __construct( ::snow::Snow _app,::cpp::Pointer<  SDL_RWops > _handle,::cpp::Pointer<  OggVorbis_File > _oggfile, ::Dynamic _opt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="snow.core.native.audio.AudioDataOGG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"snow.core.native.audio.AudioDataOGG"); }
		static hx::ObjectPtr< AudioDataOGG_obj > __new( ::snow::Snow _app,::cpp::Pointer<  SDL_RWops > _handle,::cpp::Pointer<  OggVorbis_File > _oggfile, ::Dynamic _opt);
		static hx::ObjectPtr< AudioDataOGG_obj > __alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app,::cpp::Pointer<  SDL_RWops > _handle,::cpp::Pointer<  OggVorbis_File > _oggfile, ::Dynamic _opt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioDataOGG_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AudioDataOGG","\x2f","\xf2","\x62","\xe5"); }

		::cpp::Pointer<  SDL_RWops > handle;
		::cpp::Pointer<  OggVorbis_File > oggfile;
		void destroy();

		bool seek(int _to);

		::Array< int > portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,::Array< int > _into_result);

};

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio

#endif /* INCLUDED_snow_core_native_audio_AudioDataOGG */ 
