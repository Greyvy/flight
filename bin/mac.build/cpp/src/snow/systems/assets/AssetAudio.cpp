// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetAudio
#include <snow/systems/assets/AssetAudio.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_systems_audio_Audio
#include <snow/systems/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_43b93c095e135f12_187_new,"snow.systems.assets.AssetAudio","new",0x7e0f49ee,"snow.systems.assets.AssetAudio.new","snow/systems/assets/Asset.hx",187,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_206_reload,"snow.systems.assets.AssetAudio","reload",0xe5b1c68b,"snow.systems.assets.AssetAudio.reload","snow/systems/assets/Asset.hx",206,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_201_reload,"snow.systems.assets.AssetAudio","reload",0xe5b1c68b,"snow.systems.assets.AssetAudio.reload","snow/systems/assets/Asset.hx",201,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_197_reload,"snow.systems.assets.AssetAudio","reload",0xe5b1c68b,"snow.systems.assets.AssetAudio.reload","snow/systems/assets/Asset.hx",197,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_216_destroy,"snow.systems.assets.AssetAudio","destroy",0xdad88588,"snow.systems.assets.AssetAudio.destroy","snow/systems/assets/Asset.hx",216,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_232_reload_from_bytes,"snow.systems.assets.AssetAudio","reload_from_bytes",0x62612d0a,"snow.systems.assets.AssetAudio.reload_from_bytes","snow/systems/assets/Asset.hx",232,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_228_reload_from_bytes,"snow.systems.assets.AssetAudio","reload_from_bytes",0x62612d0a,"snow.systems.assets.AssetAudio.reload_from_bytes","snow/systems/assets/Asset.hx",228,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_224_reload_from_bytes,"snow.systems.assets.AssetAudio","reload_from_bytes",0x62612d0a,"snow.systems.assets.AssetAudio.reload_from_bytes","snow/systems/assets/Asset.hx",224,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_265_set_audio,"snow.systems.assets.AssetAudio","set_audio",0x007ed947,"snow.systems.assets.AssetAudio.set_audio","snow/systems/assets/Asset.hx",265,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_243_load,"snow.systems.assets.AssetAudio","load",0xce067cd8,"snow.systems.assets.AssetAudio.load","snow/systems/assets/Asset.hx",243,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_43b93c095e135f12_252_load_from_bytes,"snow.systems.assets.AssetAudio","load_from_bytes",0x51102fdd,"snow.systems.assets.AssetAudio.load_from_bytes","snow/systems/assets/Asset.hx",252,0x7a5509c3)
namespace snow{
namespace systems{
namespace assets{

void AssetAudio_obj::__construct( ::snow::systems::assets::Assets _system,::String _id, ::snow::types::AudioData _audio){
            	HX_STACKFRAME(&_hx_pos_43b93c095e135f12_187_new)
HXLINE( 189)		super::__construct(_system,_id,(int)5);
HXLINE( 190)		this->set_audio(_audio);
            	}

Dynamic AssetAudio_obj::__CreateEmpty() { return new AssetAudio_obj; }

void *AssetAudio_obj::_hx_vtable = 0;

Dynamic AssetAudio_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetAudio_obj > _hx_result = new AssetAudio_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AssetAudio_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06a9943e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06a9943e;
	} else {
		return inClassId==(int)0x3efde4b0;
	}
}

 ::snow::api::Promise AssetAudio_obj::reload( ::Dynamic __o__is_stream){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1, ::Dynamic,_is_stream, ::snow::systems::assets::AssetAudio,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic resolve, ::Dynamic reject){
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::snow::systems::assets::AssetAudio,_gthis, ::Dynamic,resolve) HXARGC(1)
            			void _hx_run( ::snow::types::AudioData _audio){
            				HX_STACKFRAME(&_hx_pos_43b93c095e135f12_206_reload)
HXLINE( 207)				_gthis->set_audio(_audio);
HXLINE( 208)				resolve(_gthis);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_43b93c095e135f12_201_reload)
HXLINE( 203)			 ::snow::modules::openal::Audio _gthis1 = _gthis->_hx_system->app->audio->module;
HXDLIN( 203)			::String _load = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,_gthis->_hx_system->root)->init(1,_gthis->id));
HXDLIN( 203)			 ::snow::api::Promise _load1 = _gthis1->data_from_load(_load,_is_stream,null());
HXLINE( 205)			_load1->then( ::Dynamic(new _hx_Closure_0(_gthis,resolve)),null())->error(reject);
            		}
            		HX_END_LOCAL_FUNC2((void))

 ::Dynamic _is_stream = __o__is_stream.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_43b93c095e135f12_197_reload)
HXDLIN( 197)		 ::snow::systems::assets::AssetAudio _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 199)		this->loaded = false;
HXLINE( 201)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_is_stream,_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetAudio_obj,reload,return )

void AssetAudio_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_43b93c095e135f12_216_destroy)
HXLINE( 218)		this->audio->destroy();
HXLINE( 219)		this->set_audio(null());
            	}


 ::snow::api::Promise AssetAudio_obj::reload_from_bytes( ::snow::api::buffers::ArrayBufferView _bytes, ::Dynamic _format){
            		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_1, ::snow::systems::assets::AssetAudio,_gthis, ::snow::api::buffers::ArrayBufferView,_bytes, ::Dynamic,_format) HXARGC(2)
            		void _hx_run( ::Dynamic resolve, ::Dynamic reject){
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::snow::systems::assets::AssetAudio,_gthis, ::Dynamic,resolve) HXARGC(1)
            			void _hx_run( ::snow::types::AudioData _audio){
            				HX_STACKFRAME(&_hx_pos_43b93c095e135f12_232_reload_from_bytes)
HXLINE( 233)				_gthis->set_audio(_audio);
HXLINE( 234)				resolve(_gthis);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_43b93c095e135f12_228_reload_from_bytes)
HXLINE( 230)			 ::snow::api::Promise _load = _gthis->_hx_system->app->audio->module->data_from_bytes(_gthis->id,_bytes,_format);
HXLINE( 232)			_load->then( ::Dynamic(new _hx_Closure_0(_gthis,resolve)),null())->error(reject);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_43b93c095e135f12_224_reload_from_bytes)
HXDLIN( 224)		 ::snow::systems::assets::AssetAudio _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 226)		this->loaded = false;
HXLINE( 228)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis,_bytes,_format)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetAudio_obj,reload_from_bytes,return )

 ::snow::types::AudioData AssetAudio_obj::set_audio( ::snow::types::AudioData _audio){
            	HX_STACKFRAME(&_hx_pos_43b93c095e135f12_265_set_audio)
HXLINE( 267)		this->loaded = hx::IsNotNull( _audio );
HXLINE( 268)		return (this->audio = _audio);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetAudio_obj,set_audio,return )

 ::snow::api::Promise AssetAudio_obj::load( ::snow::systems::assets::Assets _system,::String _id, ::Dynamic __o__is_stream){
 ::Dynamic _is_stream = __o__is_stream.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_43b93c095e135f12_243_load)
HXLINE( 245)		if (hx::IsNull( _id )) {
HXLINE( 245)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("_id was null",c4,57,88,c5)));
            		}
HXLINE( 246)		if (hx::IsNull( _system )) {
HXLINE( 246)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("_system was null",b0,ae,ad,1a)));
            		}
HXLINE( 248)		return  ::snow::systems::assets::AssetAudio_obj::__alloc( HX_CTX ,_system,_id,null())->reload(_is_stream);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetAudio_obj,load,return )

 ::snow::api::Promise AssetAudio_obj::load_from_bytes( ::snow::systems::assets::Assets _system,::String _id, ::snow::api::buffers::ArrayBufferView _bytes, ::Dynamic _format){
            	HX_GC_STACKFRAME(&_hx_pos_43b93c095e135f12_252_load_from_bytes)
HXLINE( 254)		if (hx::IsNull( _id )) {
HXLINE( 254)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("_id was null",c4,57,88,c5)));
            		}
HXLINE( 255)		if (hx::IsNull( _bytes )) {
HXLINE( 255)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("_bytes was null",d2,33,d5,32)));
            		}
HXLINE( 256)		if (hx::IsNull( _system )) {
HXLINE( 256)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("_system was null",b0,ae,ad,1a)));
            		}
HXLINE( 258)		return  ::snow::systems::assets::AssetAudio_obj::__alloc( HX_CTX ,_system,_id,null())->reload_from_bytes(_bytes,_format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AssetAudio_obj,load_from_bytes,return )


hx::ObjectPtr< AssetAudio_obj > AssetAudio_obj::__new( ::snow::systems::assets::Assets _system,::String _id, ::snow::types::AudioData _audio) {
	hx::ObjectPtr< AssetAudio_obj > __this = new AssetAudio_obj();
	__this->__construct(_system,_id,_audio);
	return __this;
}

hx::ObjectPtr< AssetAudio_obj > AssetAudio_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::systems::assets::Assets _system,::String _id, ::snow::types::AudioData _audio) {
	AssetAudio_obj *__this = (AssetAudio_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetAudio_obj), true, "snow.systems.assets.AssetAudio"));
	*(void **)__this = AssetAudio_obj::_hx_vtable;
	__this->__construct(_system,_id,_audio);
	return __this;
}

AssetAudio_obj::AssetAudio_obj()
{
}

void AssetAudio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetAudio);
	HX_MARK_MEMBER_NAME(audio,"audio");
	 ::snow::systems::assets::Asset_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetAudio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	 ::snow::systems::assets::Asset_obj::__Visit(HX_VISIT_ARG);
}

hx::Val AssetAudio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return hx::Val( audio ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return hx::Val( reload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_audio") ) { return hx::Val( set_audio_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"reload_from_bytes") ) { return hx::Val( reload_from_bytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetAudio_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"load_from_bytes") ) { outValue = load_from_bytes_dyn(); return true; }
	}
	return false;
}

hx::Val AssetAudio_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_audio(inValue.Cast<  ::snow::types::AudioData >()) );audio=inValue.Cast<  ::snow::types::AudioData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetAudio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AssetAudio_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::types::AudioData*/ ,(int)offsetof(AssetAudio_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AssetAudio_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetAudio_obj_sMemberFields[] = {
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reload_from_bytes","\xfc","\x56","\x51","\xe1"),
	HX_HCSTRING("set_audio","\x39","\xc1","\x7a","\x4e"),
	::String(null()) };

static void AssetAudio_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetAudio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetAudio_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetAudio_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetAudio_obj::__mClass;

static ::String AssetAudio_obj_sStaticFields[] = {
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("load_from_bytes","\x4f","\x99","\xbd","\xfa"),
	::String(null())
};

void AssetAudio_obj::__register()
{
	hx::Object *dummy = new AssetAudio_obj;
	AssetAudio_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.systems.assets.AssetAudio","\xfc","\x7a","\x94","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetAudio_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetAudio_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AssetAudio_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetAudio_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetAudio_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetAudio_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetAudio_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetAudio_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace systems
} // end namespace assets