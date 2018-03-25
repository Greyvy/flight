// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_IO
#include <snow/modules/sdl/IO.h>
#endif
#ifndef INCLUDED_snow_types_Config
#include <snow/types/Config.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6bce894b434f82ad_13_new,"snow.modules.sdl.IO","new",0x0157eefd,"snow.modules.sdl.IO.new","snow/modules/sdl/IO.hx",13,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_15_app_path,"snow.modules.sdl.IO","app_path",0xee336586,"snow.modules.sdl.IO.app_path","snow/modules/sdl/IO.hx",15,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_24_app_path_prefs,"snow.modules.sdl.IO","app_path_prefs",0x96f8dd77,"snow.modules.sdl.IO.app_path_prefs","snow/modules/sdl/IO.hx",24,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_38_file_handle,"snow.modules.sdl.IO","file_handle",0x39bd51e8,"snow.modules.sdl.IO.file_handle","snow/modules/sdl/IO.hx",38,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_44_file_handle_from_mem,"snow.modules.sdl.IO","file_handle_from_mem",0xf3b41df7,"snow.modules.sdl.IO.file_handle_from_mem","snow/modules/sdl/IO.hx",44,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_48_file_read,"snow.modules.sdl.IO","file_read",0x0e4b0996,"snow.modules.sdl.IO.file_read","snow/modules/sdl/IO.hx",48,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_56_file_write,"snow.modules.sdl.IO","file_write",0x5cfc269f,"snow.modules.sdl.IO.file_write","snow/modules/sdl/IO.hx",56,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_64_file_seek,"snow.modules.sdl.IO","file_seek",0x0ef443b8,"snow.modules.sdl.IO.file_seek","snow/modules/sdl/IO.hx",64,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_72_file_tell,"snow.modules.sdl.IO","file_tell",0x0f9d8071,"snow.modules.sdl.IO.file_tell","snow/modules/sdl/IO.hx",72,0xacfd8230)
HX_LOCAL_STACK_FRAME(_hx_pos_6bce894b434f82ad_80_file_close,"snow.modules.sdl.IO","file_close",0xd505d178,"snow.modules.sdl.IO.file_close","snow/modules/sdl/IO.hx",80,0xacfd8230)
namespace snow{
namespace modules{
namespace sdl{

void IO_obj::__construct( ::snow::Snow _app){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_13_new)
HXDLIN(  13)		super::__construct(_app);
            	}

Dynamic IO_obj::__CreateEmpty() { return new IO_obj; }

void *IO_obj::_hx_vtable = 0;

Dynamic IO_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IO_obj > _hx_result = new IO_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IO_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x099883f1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x099883f1;
	} else {
		return inClassId==(int)0x29dc1d4d;
	}
}

::String IO_obj::app_path(){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_15_app_path)
HXLINE(  17)		::String _path = linc::sdl::getBasePath();
HXLINE(  18)		if (hx::IsNull( _path )) {
HXLINE(  18)			_path = HX_("",00,00,00,00);
            		}
HXLINE(  20)		return _path;
            	}


::String IO_obj::app_path_prefs(){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_24_app_path_prefs)
HXLINE(  26)		::Array< ::String > _parts = ::snow::types::Config_obj::app_ident.split(HX_(".",2e,00,00,00));
HXLINE(  27)		::String _appname = ( (::String)(_parts->pop()) );
HXLINE(  28)		::String _org = _parts->join(HX_(".",2e,00,00,00));
HXLINE(  30)		return linc::sdl::getPrefPath(_org,_appname);
            	}


::cpp::Pointer<  SDL_RWops > IO_obj::file_handle(::String _path,::String __o__mode){
::String _mode = __o__mode.Default(HX_HCSTRING("rb","\xb0","\x63","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_38_file_handle)
HXDLIN(  38)		return SDL_RWFromFile(_path,_mode);
            	}


::cpp::Pointer<  SDL_RWops > IO_obj::file_handle_from_mem( ::snow::api::buffers::ArrayBufferView mem,int size){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_44_file_handle_from_mem)
HXDLIN(  44)		return linc::sdl::RWFromMem(mem->buffer,size);
            	}


int IO_obj::file_read(::cpp::Pointer<  SDL_RWops > file, ::snow::api::buffers::ArrayBufferView dest,int size,int maxnum){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_48_file_read)
HXLINE(  50)		if (hx::IsNull( file )) {
HXLINE(  50)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("file was null",02,5b,9a,64)));
            		}
HXLINE(  52)		::cpp::Pointer<  SDL_RWops > tmp = file;
HXDLIN(  52)		return linc::sdl::RWread(tmp,dest->buffer,size,maxnum);
            	}


int IO_obj::file_write(::cpp::Pointer<  SDL_RWops > file, ::snow::api::buffers::ArrayBufferView src,int size,int num){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_56_file_write)
HXLINE(  58)		if (hx::IsNull( file )) {
HXLINE(  58)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("file was null",02,5b,9a,64)));
            		}
HXLINE(  60)		::cpp::Pointer<  SDL_RWops > tmp = file;
HXDLIN(  60)		return linc::sdl::RWwrite(tmp,src->buffer,size,num);
            	}


int IO_obj::file_seek(::cpp::Pointer<  SDL_RWops > file,int offset,int whence){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_64_file_seek)
HXLINE(  66)		if (hx::IsNull( file )) {
HXLINE(  66)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("file was null",02,5b,9a,64)));
            		}
HXLINE(  68)		::cpp::Pointer<  SDL_RWops > tmp = file;
HXDLIN(  68)		return linc::sdl::RWseek(tmp,offset,whence);
            	}


int IO_obj::file_tell(::cpp::Pointer<  SDL_RWops > file){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_72_file_tell)
HXLINE(  74)		if (hx::IsNull( file )) {
HXLINE(  74)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("file was null",02,5b,9a,64)));
            		}
HXLINE(  76)		::cpp::Pointer<  SDL_RWops > tmp = file;
HXDLIN(  76)		return linc::sdl::RWtell(tmp);
            	}


int IO_obj::file_close(::cpp::Pointer<  SDL_RWops > file){
            	HX_STACKFRAME(&_hx_pos_6bce894b434f82ad_80_file_close)
HXLINE(  82)		if (hx::IsNull( file )) {
HXLINE(  82)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("file was null",02,5b,9a,64)));
            		}
HXLINE(  84)		::cpp::Pointer<  SDL_RWops > tmp = file;
HXDLIN(  84)		return linc::sdl::RWclose(tmp);
            	}



hx::ObjectPtr< IO_obj > IO_obj::__new( ::snow::Snow _app) {
	hx::ObjectPtr< IO_obj > __this = new IO_obj();
	__this->__construct(_app);
	return __this;
}

hx::ObjectPtr< IO_obj > IO_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app) {
	IO_obj *__this = (IO_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IO_obj), true, "snow.modules.sdl.IO"));
	*(void **)__this = IO_obj::_hx_vtable;
	__this->__construct(_app);
	return __this;
}

IO_obj::IO_obj()
{
}

hx::Val IO_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"app_path") ) { return hx::Val( app_path_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"file_read") ) { return hx::Val( file_read_dyn() ); }
		if (HX_FIELD_EQ(inName,"file_seek") ) { return hx::Val( file_seek_dyn() ); }
		if (HX_FIELD_EQ(inName,"file_tell") ) { return hx::Val( file_tell_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"file_write") ) { return hx::Val( file_write_dyn() ); }
		if (HX_FIELD_EQ(inName,"file_close") ) { return hx::Val( file_close_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_handle") ) { return hx::Val( file_handle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"app_path_prefs") ) { return hx::Val( app_path_prefs_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"file_handle_from_mem") ) { return hx::Val( file_handle_from_mem_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IO_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *IO_obj_sStaticStorageInfo = 0;
#endif

static ::String IO_obj_sMemberFields[] = {
	HX_HCSTRING("app_path","\x43","\x9d","\xdc","\xa2"),
	HX_HCSTRING("app_path_prefs","\xf4","\x00","\x3e","\x80"),
	HX_HCSTRING("file_handle","\x4b","\xce","\x5d","\xec"),
	HX_HCSTRING("file_handle_from_mem","\x34","\x7d","\xf0","\x5b"),
	HX_HCSTRING("file_read","\x39","\x97","\xb2","\x6d"),
	HX_HCSTRING("file_write","\x9c","\x87","\x30","\x78"),
	HX_HCSTRING("file_seek","\x5b","\xd1","\x5b","\x6e"),
	HX_HCSTRING("file_tell","\x14","\x0e","\x05","\x6f"),
	HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"),
	::String(null()) };

static void IO_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IO_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IO_obj::__mClass,"__mClass");
};

#endif

hx::Class IO_obj::__mClass;

void IO_obj::__register()
{
	hx::Object *dummy = new IO_obj;
	IO_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.modules.sdl.IO","\x8b","\xac","\xa3","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IO_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IO_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IO_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IO_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IO_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IO_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace modules
} // end namespace sdl
