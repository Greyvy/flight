// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_luxe_tween_IComponentPath
#include <luxe/tween/IComponentPath.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_MotionPathActuator
#include <luxe/tween/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyDetails
#include <luxe/tween/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_PropertyPathDetails
#include <luxe/tween/actuators/PropertyPathDetails.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_SimpleActuator
#include <luxe/tween/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f4263de086ab1b0_15_new,"luxe.tween.actuators.MotionPathActuator","new",0x32176455,"luxe.tween.actuators.MotionPathActuator.new","luxe/tween/actuators/MotionPathActuator.hx",15,0xdb065698)
HX_LOCAL_STACK_FRAME(_hx_pos_6f4263de086ab1b0_22_apply,"luxe.tween.actuators.MotionPathActuator","apply",0xfd03c0a3,"luxe.tween.actuators.MotionPathActuator.apply","luxe/tween/actuators/MotionPathActuator.hx",22,0xdb065698)
HX_LOCAL_STACK_FRAME(_hx_pos_6f4263de086ab1b0_39_initialize,"luxe.tween.actuators.MotionPathActuator","initialize",0x7e2735fb,"luxe.tween.actuators.MotionPathActuator.initialize","luxe/tween/actuators/MotionPathActuator.hx",39,0xdb065698)
HX_LOCAL_STACK_FRAME(_hx_pos_6f4263de086ab1b0_79_update,"luxe.tween.actuators.MotionPathActuator","update",0x5d711934,"luxe.tween.actuators.MotionPathActuator.update","luxe/tween/actuators/MotionPathActuator.hx",79,0xdb065698)
namespace luxe{
namespace tween{
namespace actuators{

void MotionPathActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_6f4263de086ab1b0_15_new)
HXDLIN(  15)		super::__construct(target,duration,properties);
            	}

Dynamic MotionPathActuator_obj::__CreateEmpty() { return new MotionPathActuator_obj; }

void *MotionPathActuator_obj::_hx_vtable = 0;

Dynamic MotionPathActuator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MotionPathActuator_obj > _hx_result = new MotionPathActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MotionPathActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23aec07f) {
		if (inClassId<=(int)0x0b658479) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b658479;
		} else {
			return inClassId==(int)0x23aec07f;
		}
	} else {
		return inClassId==(int)0x3c2b7630;
	}
}

void MotionPathActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_6f4263de086ab1b0_22_apply)
HXDLIN(  22)		int _g = (int)0;
HXDLIN(  22)		::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  22)		while((_g < _g1->length)){
HXDLIN(  22)			::String propertyName = _g1->__get(_g);
HXDLIN(  22)			_g = (_g + (int)1);
HXLINE(  24)			if (::Reflect_obj::hasField(this->target,propertyName)) {
HXLINE(  26)				 ::Dynamic _hx_tmp = this->target;
HXDLIN(  26)				::Reflect_obj::setField(_hx_tmp,propertyName,::luxe::tween::IComponentPath_obj::get_end(::Reflect_obj::field(this->properties,propertyName)));
            			}
            			else {
HXLINE(  30)				 ::Dynamic _hx_tmp1 = this->target;
HXDLIN(  30)				::Reflect_obj::setProperty(_hx_tmp1,propertyName,::luxe::tween::IComponentPath_obj::get_end(::Reflect_obj::field(this->properties,propertyName)));
            			}
            		}
            	}


void MotionPathActuator_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_6f4263de086ab1b0_39_initialize)
HXLINE(  41)		 ::luxe::tween::actuators::PropertyPathDetails details;
HXLINE(  42)		::Dynamic path;
HXLINE(  44)		{
HXLINE(  44)			int _g = (int)0;
HXDLIN(  44)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				::String propertyName = _g1->__get(_g);
HXDLIN(  44)				_g = (_g + (int)1);
HXLINE(  46)				path = ::Reflect_obj::field(this->properties,propertyName);
HXLINE(  48)				if (hx::IsNotNull( path )) {
HXLINE(  50)					bool isField = true;
HXLINE(  52)					if (::Reflect_obj::hasField(this->target,propertyName)) {
HXLINE(  54)						path->__SetField(HX_("start",62,74,0b,84),( (Float)(::Reflect_obj::field(this->target,propertyName)) ),hx::paccDynamic);
            					}
            					else {
HXLINE(  58)						isField = false;
HXLINE(  59)						path->__SetField(HX_("start",62,74,0b,84),( (Float)(::Reflect_obj::getProperty(this->target,propertyName)) ),hx::paccDynamic);
            					}
HXLINE(  64)					details =  ::luxe::tween::actuators::PropertyPathDetails_obj::__alloc( HX_CTX ,this->target,propertyName,path,isField);
HXLINE(  65)					this->propertyDetails->push(details);
            				}
            			}
            		}
HXLINE(  71)		this->detailsLength = this->propertyDetails->length;
HXLINE(  72)		this->initialized = true;
            	}


void MotionPathActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_6f4263de086ab1b0_79_update)
HXDLIN(  79)		if (!(this->paused)) {
HXLINE(  81)			 ::luxe::tween::actuators::PropertyPathDetails details;
HXLINE(  82)			Float easing;
HXLINE(  84)			Float tweenPosition = ((Float)(currentTime - this->timeOffset) / (Float)this->duration);
HXLINE(  86)			if ((tweenPosition > (int)1)) {
HXLINE(  88)				tweenPosition = (int)1;
            			}
HXLINE(  92)			if (!(this->initialized)) {
HXLINE(  94)				this->initialize();
            			}
HXLINE(  98)			if (!(this->special)) {
HXLINE( 100)				easing = ::luxe::tween::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
HXLINE( 102)				{
HXLINE( 102)					int _g = (int)0;
HXDLIN( 102)					::Array< ::Dynamic> _g1 = this->propertyDetails;
HXDLIN( 102)					while((_g < _g1->length)){
HXLINE( 102)						 ::luxe::tween::actuators::PropertyDetails details1 = _g1->__get(_g).StaticCast<  ::luxe::tween::actuators::PropertyDetails >();
HXDLIN( 102)						_g = (_g + (int)1);
HXLINE( 104)						if (details1->isField) {
HXLINE( 106)							 ::Dynamic details2 = details1->target;
HXDLIN( 106)							::String details3 = details1->propertyName;
HXDLIN( 106)							::Reflect_obj::setField(details2,details3,::luxe::tween::IComponentPath_obj::calculate(hx::TCast<  ::luxe::tween::actuators::PropertyPathDetails >::cast(details1)->path,easing));
            						}
            						else {
HXLINE( 110)							 ::Dynamic details4 = details1->target;
HXDLIN( 110)							::String details5 = details1->propertyName;
HXDLIN( 110)							::Reflect_obj::setProperty(details4,details5,::luxe::tween::IComponentPath_obj::calculate(hx::TCast<  ::luxe::tween::actuators::PropertyPathDetails >::cast(details1)->path,easing));
            						}
            					}
            				}
            			}
            			else {
HXLINE( 118)				if (!(this->_reverse)) {
HXLINE( 120)					easing = ::luxe::tween::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
            				}
            				else {
HXLINE( 124)					::Dynamic easing1 = this->_ease;
HXDLIN( 124)					easing = ::luxe::tween::easing::IEasing_obj::calculate(easing1,((int)1 - tweenPosition));
            				}
HXLINE( 128)				Float endValue;
HXLINE( 130)				{
HXLINE( 130)					int _g2 = (int)0;
HXDLIN( 130)					::Array< ::Dynamic> _g11 = this->propertyDetails;
HXDLIN( 130)					while((_g2 < _g11->length)){
HXLINE( 130)						 ::luxe::tween::actuators::PropertyDetails details6 = _g11->__get(_g2).StaticCast<  ::luxe::tween::actuators::PropertyDetails >();
HXDLIN( 130)						_g2 = (_g2 + (int)1);
HXLINE( 132)						if (!(this->_snapping)) {
HXLINE( 134)							if (details6->isField) {
HXLINE( 136)								 ::Dynamic details7 = details6->target;
HXDLIN( 136)								::String details8 = details6->propertyName;
HXDLIN( 136)								::Reflect_obj::setField(details7,details8,::luxe::tween::IComponentPath_obj::calculate(hx::TCast<  ::luxe::tween::actuators::PropertyPathDetails >::cast(details6)->path,easing));
            							}
            							else {
HXLINE( 140)								 ::Dynamic details9 = details6->target;
HXDLIN( 140)								::String details10 = details6->propertyName;
HXDLIN( 140)								::Reflect_obj::setProperty(details9,details10,::luxe::tween::IComponentPath_obj::calculate(hx::TCast<  ::luxe::tween::actuators::PropertyPathDetails >::cast(details6)->path,easing));
            							}
            						}
            						else {
HXLINE( 146)							if (details6->isField) {
HXLINE( 148)								 ::Dynamic details11 = details6->target;
HXDLIN( 148)								::String details12 = details6->propertyName;
HXDLIN( 148)								::Reflect_obj::setField(details11,details12,::Math_obj::round(::luxe::tween::IComponentPath_obj::calculate(hx::TCast<  ::luxe::tween::actuators::PropertyPathDetails >::cast(details6)->path,easing)));
            							}
            							else {
HXLINE( 152)								 ::Dynamic details13 = details6->target;
HXDLIN( 152)								::String details14 = details6->propertyName;
HXDLIN( 152)								::Reflect_obj::setProperty(details13,details14,::Math_obj::round(::luxe::tween::IComponentPath_obj::calculate(hx::TCast<  ::luxe::tween::actuators::PropertyPathDetails >::cast(details6)->path,easing)));
            							}
            						}
            					}
            				}
            			}
HXLINE( 163)			if ((tweenPosition == (int)1)) {
HXLINE( 165)				if ((this->_repeat == (int)0)) {
HXLINE( 167)					this->active = false;
HXLINE( 169)					bool _hx_tmp;
HXDLIN( 169)					if (this->toggleVisible) {
HXLINE( 169)						 ::Dynamic target = this->target;
HXDLIN( 169)						 ::Dynamic value = null();
HXDLIN( 169)						if (::Reflect_obj::hasField(target,HX_("alpha",5e,a7,96,21))) {
HXLINE( 169)							value = ::Reflect_obj::field(target,HX_("alpha",5e,a7,96,21));
            						}
            						else {
HXLINE( 169)							value = ::Reflect_obj::getProperty(target,HX_("alpha",5e,a7,96,21));
            						}
HXDLIN( 169)						_hx_tmp = hx::IsEq( value,(int)0 );
            					}
            					else {
HXLINE( 169)						_hx_tmp = false;
            					}
HXDLIN( 169)					if (_hx_tmp) {
HXLINE( 171)						 ::Dynamic target1 = this->target;
HXDLIN( 171)						if (::Reflect_obj::hasField(target1,HX_("visible",72,78,24,a3))) {
HXLINE( 171)							::Reflect_obj::setField(target1,HX_("visible",72,78,24,a3),false);
            						}
            						else {
HXLINE( 171)							::Reflect_obj::setProperty(target1,HX_("visible",72,78,24,a3),false);
            						}
            					}
HXLINE( 175)					this->complete(true);
HXLINE( 176)					return;
            				}
            				else {
HXLINE( 180)					if (this->_reflect) {
HXLINE( 182)						this->_reverse = !(this->_reverse);
            					}
HXLINE( 186)					this->startTime = currentTime;
HXLINE( 187)					this->timeOffset = (this->startTime + this->_delay);
HXLINE( 189)					if ((this->_repeat > (int)0)) {
HXLINE( 191)						this->_repeat--;
            					}
            				}
            			}
HXLINE( 199)			if (this->sendChange) {
HXLINE( 201)				this->change();
            			}
            		}
            	}



hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	hx::ObjectPtr< MotionPathActuator_obj > __this = new MotionPathActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	MotionPathActuator_obj *__this = (MotionPathActuator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MotionPathActuator_obj), true, "luxe.tween.actuators.MotionPathActuator"));
	*(void **)__this = MotionPathActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

MotionPathActuator_obj::MotionPathActuator_obj()
{
}

hx::Val MotionPathActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MotionPathActuator_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MotionPathActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String MotionPathActuator_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void MotionPathActuator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MotionPathActuator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class MotionPathActuator_obj::__mClass;

void MotionPathActuator_obj::__register()
{
	hx::Object *dummy = new MotionPathActuator_obj;
	MotionPathActuator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.MotionPathActuator","\xe3","\x95","\x77","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MotionPathActuator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MotionPathActuator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MotionPathActuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MotionPathActuator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MotionPathActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MotionPathActuator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators