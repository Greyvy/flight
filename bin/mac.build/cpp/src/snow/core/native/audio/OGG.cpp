// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_886b57b7a9067d4f
#define INCLUDED_886b57b7a9067d4f
#include "linc_ogg.h"
#endif
#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_ogg__Ogg_Ogg_helper
#include <ogg/_Ogg/Ogg_helper.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataOGG
#include <snow/core/native/audio/AudioDataOGG.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_OGG
#include <snow/core/native/audio/OGG.h>
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
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e078ddc651cfcb00_137_from_file,"snow.core.native.audio.OGG","from_file",0x14a07c87,"snow.core.native.audio.OGG.from_file","snow/core/native/audio/AudioDataOGG.hx",137,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_e078ddc651cfcb00_148_from_bytes,"snow.core.native.audio.OGG","from_bytes",0xb4cba400,"snow.core.native.audio.OGG.from_bytes","snow/core/native/audio/AudioDataOGG.hx",148,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_e078ddc651cfcb00_158_from_file_handle,"snow.core.native.audio.OGG","from_file_handle",0x7eb5c7a0,"snow.core.native.audio.OGG.from_file_handle","snow/core/native/audio/AudioDataOGG.hx",158,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_e078ddc651cfcb00_249_code,"snow.core.native.audio.OGG","code",0x6aafa917,"snow.core.native.audio.OGG.code","snow/core/native/audio/AudioDataOGG.hx",249,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_e078ddc651cfcb00_274_ogg_read,"snow.core.native.audio.OGG","ogg_read",0x50730970,"snow.core.native.audio.OGG.ogg_read","snow/core/native/audio/AudioDataOGG.hx",274,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_e078ddc651cfcb00_295_ogg_seek,"snow.core.native.audio.OGG","ogg_seek",0x511c4392,"snow.core.native.audio.OGG.ogg_seek","snow/core/native/audio/AudioDataOGG.hx",295,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_e078ddc651cfcb00_310_ogg_tell,"snow.core.native.audio.OGG","ogg_tell",0x51c5804b,"snow.core.native.audio.OGG.ogg_tell","snow/core/native/audio/AudioDataOGG.hx",310,0x186b83e2)
namespace snow{
namespace core{
namespace native{
namespace audio{

void OGG_obj::__construct() { }

Dynamic OGG_obj::__CreateEmpty() { return new OGG_obj; }

void *OGG_obj::_hx_vtable = 0;

Dynamic OGG_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OGG_obj > _hx_result = new OGG_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OGG_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2340be52;
}

 ::snow::types::AudioData OGG_obj::from_file( ::snow::Snow app,::String _path,bool _is_stream){
            	HX_STACKFRAME(&_hx_pos_e078ddc651cfcb00_137_from_file)
HXLINE( 141)		::cpp::Pointer<  SDL_RWops > _handle = app->io->module->file_handle(_path,HX_("rb",b0,63,00,00));
HXLINE( 143)		::cpp::Pointer<  SDL_RWops > tmp = _handle;
HXDLIN( 143)		return ::snow::core::native::audio::OGG_obj::from_file_handle(app,tmp,_path,_is_stream);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OGG_obj,from_file,return )

 ::snow::types::AudioData OGG_obj::from_bytes( ::snow::Snow app,::String _path, ::snow::api::buffers::ArrayBufferView _bytes){
            	HX_STACKFRAME(&_hx_pos_e078ddc651cfcb00_148_from_bytes)
HXLINE( 152)		::cpp::Pointer<  SDL_RWops > _handle = app->io->module->file_handle_from_mem(_bytes,_bytes->length);
HXLINE( 154)		::cpp::Pointer<  SDL_RWops > tmp = _handle;
HXDLIN( 154)		return ::snow::core::native::audio::OGG_obj::from_file_handle(app,tmp,_path,false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OGG_obj,from_bytes,return )

 ::snow::types::AudioData OGG_obj::from_file_handle( ::snow::Snow app,::cpp::Pointer<  SDL_RWops > _handle,::String _path,bool _is_stream){
            	HX_GC_STACKFRAME(&_hx_pos_e078ddc651cfcb00_158_from_file_handle)
HXLINE( 160)		if (hx::IsNull( _handle )) {
HXLINE( 160)			return null();
            		}
HXLINE( 162)		::cpp::Pointer<  OggVorbis_File > _ogg_file = linc::ogg::newOggVorbisFile();
HXLINE( 164)		 ::snow::core::native::audio::AudioDataOGG _ogg =  ::snow::core::native::audio::AudioDataOGG_obj::__alloc( HX_CTX ,app,_handle,_ogg_file, ::Dynamic(hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("samples",09,c5,c9,83),null())
            			->setFixed(1,HX_("length",e6,94,07,9f),(int)0)
            			->setFixed(2,HX_("is_stream",75,7b,51,b6),_is_stream)
            			->setFixed(3,HX_("format",37,8f,8e,fd),(int)2)
            			->setFixed(4,HX_("id",db,5b,00,00),_path)
            			->setFixed(5,HX_("rate",e0,52,a4,4b),(int)0)
            			->setFixed(6,HX_("channels",50,aa,ee,6a),(int)0)));
HXLINE( 174)		::cpp::Pointer<  OggVorbis_File > tmp = _ogg_file;
HXDLIN( 174)		int _ogg_result = ::ogg::_Ogg::Ogg_helper_obj::ov_open_callbacks(_ogg,tmp,null(),(int)0, ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("close_fn",af,fa,4c,85),null())
            			->setFixed(1,HX_("tell_fn",d6,61,b7,b0),::snow::core::native::audio::OGG_obj::ogg_tell_dyn())
            			->setFixed(2,HX_("read_fn",d1,5d,da,02),::snow::core::native::audio::OGG_obj::ogg_read_dyn())
            			->setFixed(3,HX_("seek_fn",ef,a4,aa,7e),::snow::core::native::audio::OGG_obj::ogg_seek_dyn())));
HXLINE( 183)		if ((_ogg_result < (int)0)) {
HXLINE( 185)			::cpp::Pointer<  SDL_RWops > tmp1 = _handle;
HXDLIN( 185)			app->io->module->file_close(tmp1);
HXLINE( 187)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 187)			::String _hx_tmp1 = ((HX_("ogg file failed to open!? / result:",a9,86,aa,2b) + _ogg_result) + HX_(" code: ",33,21,e4,f3));
HXDLIN( 187)			::String _hx_tmp2;
HXDLIN( 187)			switch((int)(_ogg_result)){
            				case (int)-138: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_ENOSEEK",e6,e5,a4,86);
            				}
            				break;
            				case (int)-137: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EBADLINK",d2,7b,44,1f);
            				}
            				break;
            				case (int)-136: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EBADPACKET",60,45,2c,cd);
            				}
            				break;
            				case (int)-135: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_ENOTAUDIO",d0,0f,66,49);
            				}
            				break;
            				case (int)-134: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EVERSION",ab,d2,9b,0c);
            				}
            				break;
            				case (int)-133: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EBADHEADER",65,f7,93,e6);
            				}
            				break;
            				case (int)-132: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_ENOTVORBIS",f9,86,3a,ea);
            				}
            				break;
            				case (int)-131: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EINVAL",ef,2c,99,90);
            				}
            				break;
            				case (int)-130: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EIMPL",4d,b1,cf,85);
            				}
            				break;
            				case (int)-129: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EFAULT",b5,f0,cc,cd);
            				}
            				break;
            				case (int)-128: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EREAD",c3,7d,bc,8b);
            				}
            				break;
            				case (int)-3: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_HOLE",98,5a,b5,1a);
            				}
            				break;
            				case (int)-2: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_EOF",44,4a,a7,59);
            				}
            				break;
            				case (int)-1: {
HXLINE( 187)					_hx_tmp2 = HX_("OV_FALSE",2b,d1,eb,13);
            				}
            				break;
            				default:{
HXLINE( 187)					_hx_tmp2 = (HX_("",00,00,00,00) + _ogg_result);
            				}
            			}
HXDLIN( 187)			_hx_tmp((HX_("i / audiodataogg / ",da,86,75,7e) + (_hx_tmp1 + _hx_tmp2)),hx::SourceInfo(HX_("AudioDataOGG.hx",ef,97,b4,38),187,HX_("snow.core.native.audio.OGG",c4,70,e0,5d),HX_("from_file_handle",b6,98,c1,23)));
HXLINE( 189)			return null();
            		}
HXLINE( 193)		::cpp::Pointer<  OggVorbis_File > tmp2 = _ogg_file;
HXDLIN( 193)		 vorbis_info* _ogg_info = ov_info(tmp2,(int)-1);
HXLINE( 218)		::cpp::Pointer<  OggVorbis_File > tmp3 = _ogg_file;
HXDLIN( 218)		 cpp::Int64Struct x = ov_pcm_total(tmp3,(int)-1);
HXDLIN( 218)		int _total_pcm_length = _hx_int64_high(x);
HXDLIN( 218)		if ((_total_pcm_length != ((int)_hx_int64_low(x) >> (int)(int)31))) {
HXLINE( 218)			HX_STACK_DO_THROW(HX_("Overflow",62,9f,ed,1a));
            		}
HXDLIN( 218)		int _total_pcm_length1 = _hx_int64_low(x);
HXDLIN( 218)		int _total_pcm_length2 = ((_total_pcm_length1 * _ogg_info->channels) * (int)2);
HXLINE( 220)		_ogg->channels = _ogg_info->channels;
HXLINE( 221)		_ogg->rate = ::Std_obj::_hx_int(_ogg_info->rate);
HXLINE( 222)		_ogg->length = _total_pcm_length2;
HXLINE( 223)		int _bitrate = ::Std_obj::_hx_int(_ogg_info->bitrate_nominal);
HXLINE( 225)		_ogg->seek((int)0);
HXLINE( 227)		::cpp::Pointer<  OggVorbis_File > tmp4 = _ogg_file;
HXDLIN( 227)		 ::Dynamic _comment = linc::ogg::ov_comment(tmp4,(int)-1);
HXLINE( 229)		{
HXLINE( 229)			int _g = (int)0;
HXDLIN( 229)			::Array< ::String > _g1 = ( (::Array< ::String >)(_comment->__Field(HX_("comments",34,99,fa,c0),hx::paccDynamic)) );
HXDLIN( 229)			while((_g < _g1->length)){
HXLINE( 229)				::String c = _g1->__get(_g);
HXDLIN( 229)				_g = (_g + (int)1);
            			}
            		}
HXLINE( 233)		if (!(_is_stream)) {
HXLINE( 235)			 ::snow::api::buffers::ArrayBufferView this1;
HXDLIN( 235)			int _elements = _total_pcm_length2;
HXDLIN( 235)			if ((_elements < (int)0)) {
HXLINE( 235)				_elements = (int)0;
            			}
HXDLIN( 235)			 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,(int)4);
HXDLIN( 235)			int _bytelen = (_elements * _view->bytesPerElement);
HXDLIN( 235)			_view->byteOffset = (int)0;
HXDLIN( 235)			_view->byteLength = _bytelen;
HXDLIN( 235)			::Array< unsigned char > this2 = ::Array_obj< unsigned char >::__new();
HXDLIN( 235)			if ((_bytelen > (int)0)) {
HXLINE( 235)				this2[(_bytelen - (int)1)] = (int)0;
            			}
HXDLIN( 235)			_view->buffer = this2;
HXDLIN( 235)			_view->length = _elements;
HXDLIN( 235)			this1 = _view;
HXDLIN( 235)			_ogg->samples = this1;
HXLINE( 236)			_ogg->portion(_ogg->samples,(int)0,_total_pcm_length2,::Array_obj< int >::__new(0));
            		}
HXLINE( 241)		return _ogg;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OGG_obj,from_file_handle,return )

::String OGG_obj::code(int _code){
            	HX_STACKFRAME(&_hx_pos_e078ddc651cfcb00_249_code)
HXDLIN( 249)		switch((int)(_code)){
            			case (int)-138: {
HXLINE( 256)				return HX_("OV_ENOSEEK",e6,e5,a4,86);
            			}
            			break;
            			case (int)-137: {
HXLINE( 251)				return HX_("OV_EBADLINK",d2,7b,44,1f);
            			}
            			break;
            			case (int)-136: {
HXLINE( 252)				return HX_("OV_EBADPACKET",60,45,2c,cd);
            			}
            			break;
            			case (int)-135: {
HXLINE( 257)				return HX_("OV_ENOTAUDIO",d0,0f,66,49);
            			}
            			break;
            			case (int)-134: {
HXLINE( 261)				return HX_("OV_EVERSION",ab,d2,9b,0c);
            			}
            			break;
            			case (int)-133: {
HXLINE( 250)				return HX_("OV_EBADHEADER",65,f7,93,e6);
            			}
            			break;
            			case (int)-132: {
HXLINE( 258)				return HX_("OV_ENOTVORBIS",f9,86,3a,ea);
            			}
            			break;
            			case (int)-131: {
HXLINE( 255)				return HX_("OV_EINVAL",ef,2c,99,90);
            			}
            			break;
            			case (int)-130: {
HXLINE( 254)				return HX_("OV_EIMPL",4d,b1,cf,85);
            			}
            			break;
            			case (int)-129: {
HXLINE( 253)				return HX_("OV_EFAULT",b5,f0,cc,cd);
            			}
            			break;
            			case (int)-128: {
HXLINE( 260)				return HX_("OV_EREAD",c3,7d,bc,8b);
            			}
            			break;
            			case (int)-3: {
HXLINE( 263)				return HX_("OV_HOLE",98,5a,b5,1a);
            			}
            			break;
            			case (int)-2: {
HXLINE( 259)				return HX_("OV_EOF",44,4a,a7,59);
            			}
            			break;
            			case (int)-1: {
HXLINE( 262)				return HX_("OV_FALSE",2b,d1,eb,13);
            			}
            			break;
            			default:{
HXLINE( 264)				return (HX_("",00,00,00,00) + _code);
            			}
            		}
HXLINE( 249)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OGG_obj,code,return )

int OGG_obj::ogg_read( ::snow::core::native::audio::AudioDataOGG _ogg,int size,int nmemb,::Array< unsigned char > data){
            	HX_GC_STACKFRAME(&_hx_pos_e078ddc651cfcb00_274_ogg_read)
HXLINE( 276)		int _total = (size * nmemb);
HXLINE( 277)		int _byteLength = data->length;
HXDLIN( 277)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,(int)4);
HXDLIN( 277)		int _bytes_per_elem = _view->bytesPerElement;
HXDLIN( 277)		if ((hx::Mod((int)0,_bytes_per_elem) != (int)0)) {
HXLINE( 277)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            		}
HXDLIN( 277)		int _src_bytelen = data->length;
HXDLIN( 277)		int _new_range = _byteLength;
HXDLIN( 277)		if ((_new_range > _src_bytelen)) {
HXLINE( 277)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            		}
HXDLIN( 277)		_view->buffer = data;
HXDLIN( 277)		_view->byteOffset = (int)0;
HXDLIN( 277)		_view->byteLength = _byteLength;
HXDLIN( 277)		_view->length = ::Std_obj::_hx_int(((Float)_byteLength / (Float)_bytes_per_elem));
HXDLIN( 277)		 ::snow::api::buffers::ArrayBufferView _buffer = _view;
HXLINE( 281)		::cpp::Pointer<  SDL_RWops > tmp = _ogg->handle;
HXDLIN( 281)		int _file_size = _ogg->app->io->module->file_size(tmp);
HXLINE( 282)		::cpp::Pointer<  SDL_RWops > tmp1 = _ogg->handle;
HXDLIN( 282)		int _file_cur = _ogg->app->io->module->file_tell(tmp1);
HXLINE( 283)		int _read_size = ::Std_obj::_hx_int(::Math_obj::min((_file_size - _file_cur),_total));
HXLINE( 285)		::cpp::Pointer<  SDL_RWops > tmp2 = _ogg->handle;
HXDLIN( 285)		int _read_n = _ogg->app->io->module->file_read(tmp2,_buffer,_read_size,(int)1);
HXLINE( 286)		int _read = (_read_n * _read_size);
HXLINE( 290)		return _read;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OGG_obj,ogg_read,return )

void OGG_obj::ogg_seek( ::snow::core::native::audio::AudioDataOGG _ogg,int offset,int whence){
            	HX_STACKFRAME(&_hx_pos_e078ddc651cfcb00_295_ogg_seek)
HXLINE( 299)		int _w;
HXDLIN( 299)		switch((int)(whence)){
            			case (int)0: {
HXLINE( 299)				_w = (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE( 299)				_w = (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE( 299)				_w = (int)2;
            			}
            			break;
            		}
HXLINE( 305)		::cpp::Pointer<  SDL_RWops > tmp = _ogg->handle;
HXDLIN( 305)		_ogg->app->io->module->file_seek(tmp,offset,_w);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OGG_obj,ogg_seek,(void))

int OGG_obj::ogg_tell( ::snow::core::native::audio::AudioDataOGG _ogg){
            	HX_STACKFRAME(&_hx_pos_e078ddc651cfcb00_310_ogg_tell)
HXLINE( 312)		::cpp::Pointer<  SDL_RWops > tmp = _ogg->handle;
HXDLIN( 312)		int res = _ogg->app->io->module->file_tell(tmp);
HXLINE( 316)		return res;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OGG_obj,ogg_tell,return )


OGG_obj::OGG_obj()
{
}

bool OGG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { outValue = code_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ogg_read") ) { outValue = ogg_read_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ogg_seek") ) { outValue = ogg_seek_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ogg_tell") ) { outValue = ogg_tell_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_file") ) { outValue = from_file_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"from_bytes") ) { outValue = from_bytes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"from_file_handle") ) { outValue = from_file_handle_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *OGG_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *OGG_obj_sStaticStorageInfo = 0;
#endif

static void OGG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OGG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OGG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OGG_obj::__mClass,"__mClass");
};

#endif

hx::Class OGG_obj::__mClass;

static ::String OGG_obj_sStaticFields[] = {
	HX_HCSTRING("from_file","\xb1","\x64","\x28","\x18"),
	HX_HCSTRING("from_bytes","\x96","\xe0","\x2e","\xc8"),
	HX_HCSTRING("from_file_handle","\xb6","\x98","\xc1","\x23"),
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("ogg_read","\x86","\xd4","\x7c","\xb5"),
	HX_HCSTRING("ogg_seek","\xa8","\x0e","\x26","\xb6"),
	HX_HCSTRING("ogg_tell","\x61","\x4b","\xcf","\xb6"),
	::String(null())
};

void OGG_obj::__register()
{
	hx::Object *dummy = new OGG_obj;
	OGG_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.core.native.audio.OGG","\xc4","\x70","\xe0","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OGG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OGG_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(OGG_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OGG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OGG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OGG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OGG_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio
