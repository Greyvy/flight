// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_947061036ed10222_314_new,"snow.types.AudioData","new",0x0f60f6d2,"snow.types.AudioData.new","snow/types/Types.hx",314,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_947061036ed10222_356_destroy,"snow.types.AudioData","destroy",0x1bcc746c,"snow.types.AudioData.destroy","snow/types/Types.hx",356,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_947061036ed10222_375_seek,"snow.types.AudioData","seek",0x68c502c6,"snow.types.AudioData.seek","snow/types/Types.hx",375,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_947061036ed10222_377_portion,"snow.types.AudioData","portion",0x7af23859,"snow.types.AudioData.portion","snow/types/Types.hx",377,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_947061036ed10222_379_toString,"snow.types.AudioData","toString",0x9ea70cfa,"snow.types.AudioData.toString","snow/types/Types.hx",379,0x72b41ce7)
namespace snow{
namespace types{

void AudioData_obj::__construct( ::snow::Snow _app, ::Dynamic _options){
            	HX_STACKFRAME(&_hx_pos_947061036ed10222_314_new)
HXLINE( 335)		this->destroyed = false;
HXLINE( 333)		this->is_stream = false;
HXLINE( 331)		this->format = (int)0;
HXLINE( 329)		this->bits_per_sample = (int)16;
HXLINE( 327)		this->channels = (int)1;
HXLINE( 325)		this->length = (int)0;
HXLINE( 323)		this->rate = (int)44100;
HXLINE( 319)		this->id = HX_("AudioData",00,fe,eb,03);
HXLINE( 339)		this->app = _app;
HXLINE( 341)		if (hx::IsNull( ( (::String)(_options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ) )) {
HXLINE( 341)			_options->__SetField(HX_("id",db,5b,00,00),this->id,hx::paccDynamic);
            		}
HXDLIN( 341)		this->id = ( (::String)(_options->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) );
HXLINE( 342)		if (hx::IsNull( _options->__Field(HX_("rate",e0,52,a4,4b),hx::paccDynamic) )) {
HXLINE( 342)			_options->__SetField(HX_("rate",e0,52,a4,4b),this->rate,hx::paccDynamic);
            		}
HXDLIN( 342)		this->rate = ( (int)(_options->__Field(HX_("rate",e0,52,a4,4b),hx::paccDynamic)) );
HXLINE( 343)		if (hx::IsNull( _options->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic) )) {
HXLINE( 343)			_options->__SetField(HX_("length",e6,94,07,9f),this->length,hx::paccDynamic);
            		}
HXDLIN( 343)		this->length = ( (int)(_options->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)) );
HXLINE( 344)		if (hx::IsNull( _options->__Field(HX_("format",37,8f,8e,fd),hx::paccDynamic) )) {
HXLINE( 344)			_options->__SetField(HX_("format",37,8f,8e,fd),this->format,hx::paccDynamic);
            		}
HXDLIN( 344)		this->format = _options->__Field(HX_("format",37,8f,8e,fd),hx::paccDynamic);
HXLINE( 345)		if (hx::IsNull( _options->__Field(HX_("channels",50,aa,ee,6a),hx::paccDynamic) )) {
HXLINE( 345)			_options->__SetField(HX_("channels",50,aa,ee,6a),this->channels,hx::paccDynamic);
            		}
HXDLIN( 345)		this->channels = ( (int)(_options->__Field(HX_("channels",50,aa,ee,6a),hx::paccDynamic)) );
HXLINE( 346)		if (hx::IsNull( _options->__Field(HX_("bits_per_sample",65,66,36,36),hx::paccDynamic) )) {
HXLINE( 346)			_options->__SetField(HX_("bits_per_sample",65,66,36,36),this->bits_per_sample,hx::paccDynamic);
            		}
HXDLIN( 346)		this->bits_per_sample = ( (int)(_options->__Field(HX_("bits_per_sample",65,66,36,36),hx::paccDynamic)) );
HXLINE( 347)		if (hx::IsNull( _options->__Field(HX_("is_stream",75,7b,51,b6),hx::paccDynamic) )) {
HXLINE( 347)			_options->__SetField(HX_("is_stream",75,7b,51,b6),this->is_stream,hx::paccDynamic);
            		}
HXDLIN( 347)		this->is_stream = ( (bool)(_options->__Field(HX_("is_stream",75,7b,51,b6),hx::paccDynamic)) );
HXLINE( 348)		if (hx::IsNull( ( ( ::snow::api::buffers::ArrayBufferView)(_options->__Field(HX_("samples",09,c5,c9,83),hx::paccDynamic)) ) )) {
HXLINE( 348)			_options->__SetField(HX_("samples",09,c5,c9,83),this->samples,hx::paccDynamic);
            		}
HXDLIN( 348)		this->samples = ( ( ::snow::api::buffers::ArrayBufferView)(_options->__Field(HX_("samples",09,c5,c9,83),hx::paccDynamic)) );
HXLINE( 350)		_options = null();
            	}

Dynamic AudioData_obj::__CreateEmpty() { return new AudioData_obj; }

void *AudioData_obj::_hx_vtable = 0;

Dynamic AudioData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioData_obj > _hx_result = new AudioData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AudioData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x491fc56a;
}

void AudioData_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_947061036ed10222_356_destroy)
HXLINE( 358)		if (this->destroyed) {
HXLINE( 358)			return;
            		}
HXLINE( 361)		this->destroyed = true;
HXLINE( 363)		this->id = null();
HXLINE( 365)		if (hx::IsNotNull( this->samples )) {
HXLINE( 366)			this->samples->buffer = null();
            		}
HXLINE( 369)		this->samples = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioData_obj,destroy,(void))

bool AudioData_obj::seek(int _to){
            	HX_STACKFRAME(&_hx_pos_947061036ed10222_375_seek)
HXDLIN( 375)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioData_obj,seek,return )

::Array< int > AudioData_obj::portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,::Array< int > _into_result){
            	HX_STACKFRAME(&_hx_pos_947061036ed10222_377_portion)
HXDLIN( 377)		return _into_result;
            	}


HX_DEFINE_DYNAMIC_FUNC4(AudioData_obj,portion,return )

::String AudioData_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_947061036ed10222_379_toString)
HXDLIN( 379)		::String _hx_tmp = ((((((((HX_("{ \"AudioData\":true, \"id\":",38,dd,4d,75) + this->id) + HX_(", \"rate\":",66,fe,2c,a9)) + this->rate) + HX_(", \"length\":",6c,95,5c,53)) + this->length) + HX_(", \"channels\":",d6,80,37,56)) + this->channels) + HX_(", \"format\":\"",85,b7,c1,0b));
HXDLIN( 379)		 ::Dynamic this1 = this->format;
HXDLIN( 379)		::String _hx_tmp1;
HXDLIN( 379)		if (hx::IsNull( this1 )) {
HXDLIN( 379)			_hx_tmp1 = (HX_("",00,00,00,00) + this1);
            		}
            		else {
HXDLIN( 379)			 ::Dynamic _hx_switch_0 = this1;
            			if (  (_hx_switch_0==(int)0) ){
HXDLIN( 379)				_hx_tmp1 = HX_("af_unknown",f0,be,9a,03);
HXDLIN( 379)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==(int)1) ){
HXDLIN( 379)				_hx_tmp1 = HX_("af_custom",0b,db,9b,65);
HXDLIN( 379)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==(int)2) ){
HXDLIN( 379)				_hx_tmp1 = HX_("af_ogg",b5,04,9d,c2);
HXDLIN( 379)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==(int)3) ){
HXDLIN( 379)				_hx_tmp1 = HX_("af_wav",92,11,a3,c2);
HXDLIN( 379)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==(int)4) ){
HXDLIN( 379)				_hx_tmp1 = HX_("af_pcm",80,c3,9d,c2);
HXDLIN( 379)				goto _hx_goto_4;
            			}
            			/* default */{
HXDLIN( 379)				_hx_tmp1 = (HX_("",00,00,00,00) + this1);
            			}
            			_hx_goto_4:;
            		}
HXDLIN( 379)		::String _hx_tmp2 = ((_hx_tmp + _hx_tmp1) + HX_("\", \"is_stream\":",c1,eb,f0,bc));
HXDLIN( 379)		return ((_hx_tmp2 + ::Std_obj::string(this->is_stream)) + HX_(" }",5d,1c,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioData_obj,toString,return )


hx::ObjectPtr< AudioData_obj > AudioData_obj::__new( ::snow::Snow _app, ::Dynamic _options) {
	hx::ObjectPtr< AudioData_obj > __this = new AudioData_obj();
	__this->__construct(_app,_options);
	return __this;
}

hx::ObjectPtr< AudioData_obj > AudioData_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app, ::Dynamic _options) {
	AudioData_obj *__this = (AudioData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioData_obj), true, "snow.types.AudioData"));
	*(void **)__this = AudioData_obj::_hx_vtable;
	__this->__construct(_app,_options);
	return __this;
}

AudioData_obj::AudioData_obj()
{
}

void AudioData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioData);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(bits_per_sample,"bits_per_sample");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(is_stream,"is_stream");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_END_CLASS();
}

void AudioData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(bits_per_sample,"bits_per_sample");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(is_stream,"is_stream");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
}

hx::Val AudioData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return hx::Val( app ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return hx::Val( rate ); }
		if (HX_FIELD_EQ(inName,"seek") ) { return hx::Val( seek_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"format") ) { return hx::Val( format ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { return hx::Val( samples ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"portion") ) { return hx::Val( portion_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return hx::Val( channels ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { return hx::Val( is_stream ); }
		if (HX_FIELD_EQ(inName,"destroyed") ) { return hx::Val( destroyed ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bits_per_sample") ) { return hx::Val( bits_per_sample ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AudioData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast<  ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast<  ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"is_stream") ) { is_stream=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bits_per_sample") ) { bits_per_sample=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"));
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AudioData_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(AudioData_obj,app),HX_HCSTRING("app","\xa1","\xfc","\x49","\x00")},
	{hx::fsString,(int)offsetof(AudioData_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(AudioData_obj,samples),HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83")},
	{hx::fsInt,(int)offsetof(AudioData_obj,rate),HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsInt,(int)offsetof(AudioData_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(AudioData_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsInt,(int)offsetof(AudioData_obj,bits_per_sample),HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioData_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsBool,(int)offsetof(AudioData_obj,is_stream),HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6")},
	{hx::fsBool,(int)offsetof(AudioData_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AudioData_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioData_obj_sMemberFields[] = {
	HX_HCSTRING("app","\xa1","\xfc","\x49","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"),
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("bits_per_sample","\x65","\x66","\x36","\x36"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("is_stream","\x75","\x7b","\x51","\xb6"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("portion","\xe7","\xf0","\xab","\x83"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void AudioData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioData_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioData_obj::__mClass;

void AudioData_obj::__register()
{
	hx::Object *dummy = new AudioData_obj;
	AudioData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.types.AudioData","\xe0","\xe5","\x0c","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AudioData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace types
