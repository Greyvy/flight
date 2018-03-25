// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MethodActuator
#include <luxe/tween/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e655a2d1d515e5b_15_new,"luxe.tween.actuators.MethodActuator","new",0xa2bcbdbb,"luxe.tween.actuators.MethodActuator.new","luxe/tween/actuators/MethodActuator.hx",15,0x77e83972)
HX_LOCAL_STACK_FRAME(_hx_pos_4e655a2d1d515e5b_45_apply,"luxe.tween.actuators.MethodActuator","apply",0xe4bebf89,"luxe.tween.actuators.MethodActuator.apply","luxe/tween/actuators/MethodActuator.hx",45,0x77e83972)
HX_LOCAL_STACK_FRAME(_hx_pos_4e655a2d1d515e5b_50_complete,"luxe.tween.actuators.MethodActuator","complete",0x1b5dc97e,"luxe.tween.actuators.MethodActuator.complete","luxe/tween/actuators/MethodActuator.hx",50,0x77e83972)
HX_LOCAL_STACK_FRAME(_hx_pos_4e655a2d1d515e5b_65_initialize,"luxe.tween.actuators.MethodActuator","initialize",0xefe87555,"luxe.tween.actuators.MethodActuator.initialize","luxe/tween/actuators/MethodActuator.hx",65,0x77e83972)
HX_LOCAL_STACK_FRAME(_hx_pos_4e655a2d1d515e5b_93_update,"luxe.tween.actuators.MethodActuator","update",0x3955238e,"luxe.tween.actuators.MethodActuator.update","luxe/tween/actuators/MethodActuator.hx",93,0x77e83972)
namespace luxe{
namespace tween{
namespace actuators{

void MethodActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_4e655a2d1d515e5b_15_new)
HXLINE(  17)		this->currentParameters = ::cpp::VirtualArray_obj::__new();
HXLINE(  18)		this->tweenProperties =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE(  20)		super::__construct(target,duration,properties);
HXLINE(  22)		if (!(::Reflect_obj::hasField(properties,HX_("start",62,74,0b,84)))) {
HXLINE(  24)			this->properties->__SetField(HX_("start",62,74,0b,84),::cpp::VirtualArray_obj::__new(),hx::paccDynamic);
            		}
HXLINE(  28)		if (!(::Reflect_obj::hasField(properties,HX_("end",db,03,4d,00)))) {
HXLINE(  30)			this->properties->__SetField(HX_("end",db,03,4d,00), ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),hx::paccDynamic)),hx::paccDynamic);
            		}
HXLINE(  34)		{
HXLINE(  34)			int _g1 = (int)0;
HXDLIN(  34)			int _g = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)) );
HXDLIN(  34)			while((_g1 < _g)){
HXLINE(  34)				_g1 = (_g1 + (int)1);
HXDLIN(  34)				int i = (_g1 - (int)1);
HXLINE(  36)				this->currentParameters->push(null());
            			}
            		}
            	}

Dynamic MethodActuator_obj::__CreateEmpty() { return new MethodActuator_obj; }

void *MethodActuator_obj::_hx_vtable = 0;

Dynamic MethodActuator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MethodActuator_obj > _hx_result = new MethodActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MethodActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c2b7630) {
		if (inClassId<=(int)0x23aec07f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23aec07f;
		} else {
			return inClassId==(int)0x3c2b7630;
		}
	} else {
		return inClassId==(int)0x782aa343;
	}
}

void MethodActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_4e655a2d1d515e5b_45_apply)
HXDLIN(  45)		 ::Dynamic method = this->target;
HXDLIN(  45)		::cpp::VirtualArray params = ( (::cpp::VirtualArray)(this->properties->__Field(HX_("end",db,03,4d,00),hx::paccDynamic)) );
HXDLIN(  45)		if (hx::IsNull( params )) {
HXDLIN(  45)			params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXDLIN(  45)		::Reflect_obj::callMethod(method,method,params);
            	}


void MethodActuator_obj::complete(hx::Null< bool >  __o_sendEvent){
bool sendEvent = __o_sendEvent.Default(true);
            	HX_STACKFRAME(&_hx_pos_4e655a2d1d515e5b_50_complete)
HXLINE(  52)		{
HXLINE(  52)			int _g1 = (int)0;
HXDLIN(  52)			int _g = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)) );
HXDLIN(  52)			while((_g1 < _g)){
HXLINE(  52)				_g1 = (_g1 + (int)1);
HXDLIN(  52)				int i = (_g1 - (int)1);
HXLINE(  54)				::cpp::VirtualArray _hx_tmp = this->currentParameters;
HXDLIN(  54)				 ::Dynamic _hx_tmp1 = this->tweenProperties;
HXDLIN(  54)				_hx_tmp->set(i,::Reflect_obj::field(_hx_tmp1,(HX_("param",8d,80,55,bd) + i)));
            			}
            		}
HXLINE(  58)		{
HXLINE(  58)			 ::Dynamic method = this->target;
HXDLIN(  58)			::cpp::VirtualArray params = this->currentParameters;
HXDLIN(  58)			if (hx::IsNull( params )) {
HXLINE(  58)				params = ::cpp::VirtualArray_obj::__new(0);
            			}
HXDLIN(  58)			::Reflect_obj::callMethod(method,method,params);
            		}
HXLINE(  60)		this->super::complete(sendEvent);
            	}


void MethodActuator_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_4e655a2d1d515e5b_65_initialize)
HXLINE(  67)		 ::luxe::tween::actuators::PropertyDetails details;
HXLINE(  68)		::String propertyName;
HXLINE(  69)		 ::Dynamic start;
HXLINE(  71)		{
HXLINE(  71)			int _g1 = (int)0;
HXDLIN(  71)			int _g = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)) );
HXDLIN(  71)			while((_g1 < _g)){
HXLINE(  71)				_g1 = (_g1 + (int)1);
HXDLIN(  71)				int i = (_g1 - (int)1);
HXLINE(  73)				propertyName = (HX_("param",8d,80,55,bd) + i);
HXLINE(  74)				start =  ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),hx::paccDynamic))->__GetItem(i);
HXLINE(  76)				::Reflect_obj::setField(this->tweenProperties,propertyName,start);
HXLINE(  78)				bool _hx_tmp;
HXDLIN(  78)				if (!(::Std_obj::is(start,hx::ClassOf< ::Float >()))) {
HXLINE(  78)					_hx_tmp = ::Std_obj::is(start,hx::ClassOf< int >());
            				}
            				else {
HXLINE(  78)					_hx_tmp = true;
            				}
HXDLIN(  78)				if (_hx_tmp) {
HXLINE(  80)					 ::Dynamic details1 = this->tweenProperties;
HXDLIN(  80)					details =  ::luxe::tween::actuators::PropertyDetails_obj::__alloc( HX_CTX ,details1,propertyName,start,(( (Float)( ::Dynamic(this->properties->__Field(HX_("end",db,03,4d,00),hx::paccDynamic))->__GetItem(i)) ) - start),null());
HXLINE(  81)					this->propertyDetails->push(details);
            				}
            			}
            		}
HXLINE(  87)		this->detailsLength = this->propertyDetails->length;
HXLINE(  88)		this->initialized = true;
            	}


void MethodActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_4e655a2d1d515e5b_93_update)
HXLINE(  95)		this->super::update(currentTime);
HXLINE(  97)		if (this->active) {
HXLINE(  99)			{
HXLINE(  99)				int _g1 = (int)0;
HXDLIN(  99)				int _g = ( (int)( ::Dynamic(this->properties->__Field(HX_("start",62,74,0b,84),hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)) );
HXDLIN(  99)				while((_g1 < _g)){
HXLINE(  99)					_g1 = (_g1 + (int)1);
HXDLIN(  99)					int i = (_g1 - (int)1);
HXLINE( 101)					::cpp::VirtualArray _hx_tmp = this->currentParameters;
HXDLIN( 101)					 ::Dynamic _hx_tmp1 = this->tweenProperties;
HXDLIN( 101)					_hx_tmp->set(i,::Reflect_obj::field(_hx_tmp1,(HX_("param",8d,80,55,bd) + i)));
            				}
            			}
HXLINE( 105)			{
HXLINE( 105)				 ::Dynamic method = this->target;
HXDLIN( 105)				::cpp::VirtualArray params = this->currentParameters;
HXDLIN( 105)				if (hx::IsNull( params )) {
HXLINE( 105)					params = ::cpp::VirtualArray_obj::__new(0);
            				}
HXDLIN( 105)				::Reflect_obj::callMethod(method,method,params);
            			}
            		}
            	}



hx::ObjectPtr< MethodActuator_obj > MethodActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	hx::ObjectPtr< MethodActuator_obj > __this = new MethodActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

hx::ObjectPtr< MethodActuator_obj > MethodActuator_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	MethodActuator_obj *__this = (MethodActuator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MethodActuator_obj), true, "luxe.tween.actuators.MethodActuator"));
	*(void **)__this = MethodActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

MethodActuator_obj::MethodActuator_obj()
{
}

void MethodActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodActuator);
	HX_MARK_MEMBER_NAME(currentParameters,"currentParameters");
	HX_MARK_MEMBER_NAME(tweenProperties,"tweenProperties");
	 ::luxe::tween::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MethodActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentParameters,"currentParameters");
	HX_VISIT_MEMBER_NAME(tweenProperties,"tweenProperties");
	 ::luxe::tween::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MethodActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { return hx::Val( tweenProperties ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { return hx::Val( currentParameters ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MethodActuator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { tweenProperties=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { currentParameters=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28"));
	outFields->push(HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MethodActuator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(MethodActuator_obj,currentParameters),HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MethodActuator_obj,tweenProperties),HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MethodActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String MethodActuator_obj_sMemberFields[] = {
	HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28"),
	HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void MethodActuator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MethodActuator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class MethodActuator_obj::__mClass;

void MethodActuator_obj::__register()
{
	hx::Object *dummy = new MethodActuator_obj;
	MethodActuator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.MethodActuator","\x49","\xc4","\x0e","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MethodActuator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MethodActuator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MethodActuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MethodActuator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MethodActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MethodActuator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators