// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_luxe_tween_Actuate
#include <luxe/tween/Actuate.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_GenericActuator
#include <luxe/tween/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_actuators_IGenericActuator
#include <luxe/tween/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_luxe_tween_easing_IEasing
#include <luxe/tween/easing/IEasing.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84a65199438002d6_15_new,"luxe.tween.actuators.GenericActuator","new",0xd82cf1f3,"luxe.tween.actuators.GenericActuator.new","luxe/tween/actuators/GenericActuator.hx",15,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_62_apply,"luxe.tween.actuators.GenericActuator","apply",0x7dce71c1,"luxe.tween.actuators.GenericActuator.apply","luxe/tween/actuators/GenericActuator.hx",62,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_84_autoVisible,"luxe.tween.actuators.GenericActuator","autoVisible",0xa1098956,"luxe.tween.actuators.GenericActuator.autoVisible","luxe/tween/actuators/GenericActuator.hx",84,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_99_callMethod,"luxe.tween.actuators.GenericActuator","callMethod",0x527f54ec,"luxe.tween.actuators.GenericActuator.callMethod","luxe/tween/actuators/GenericActuator.hx",99,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_132_change,"luxe.tween.actuators.GenericActuator","change",0xbe6e6dbd,"luxe.tween.actuators.GenericActuator.change","luxe/tween/actuators/GenericActuator.hx",132,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_141_complete,"luxe.tween.actuators.GenericActuator","complete",0x22ad4a46,"luxe.tween.actuators.GenericActuator.complete","luxe/tween/actuators/GenericActuator.hx",141,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_165_delay,"luxe.tween.actuators.GenericActuator","delay",0x30b9c3d6,"luxe.tween.actuators.GenericActuator.delay","luxe/tween/actuators/GenericActuator.hx",165,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_179_ease,"luxe.tween.actuators.GenericActuator","ease",0x4930cafb,"luxe.tween.actuators.GenericActuator.ease","luxe/tween/actuators/GenericActuator.hx",179,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_188_move,"luxe.tween.actuators.GenericActuator","move",0x4e85221e,"luxe.tween.actuators.GenericActuator.move","luxe/tween/actuators/GenericActuator.hx",188,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_202_timescale,"luxe.tween.actuators.GenericActuator","timescale",0x804d4530,"luxe.tween.actuators.GenericActuator.timescale","luxe/tween/actuators/GenericActuator.hx",202,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_213_onComplete,"luxe.tween.actuators.GenericActuator","onComplete",0x7b735bc5,"luxe.tween.actuators.GenericActuator.onComplete","luxe/tween/actuators/GenericActuator.hx",213,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_244_onRepeat,"luxe.tween.actuators.GenericActuator","onRepeat",0x890ed767,"luxe.tween.actuators.GenericActuator.onRepeat","luxe/tween/actuators/GenericActuator.hx",244,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_269_onUpdate,"luxe.tween.actuators.GenericActuator","onUpdate",0x0997c615,"luxe.tween.actuators.GenericActuator.onUpdate","luxe/tween/actuators/GenericActuator.hx",269,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_288_pause,"luxe.tween.actuators.GenericActuator","pause",0x16eac349,"luxe.tween.actuators.GenericActuator.pause","luxe/tween/actuators/GenericActuator.hx",288,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_300_reflect,"luxe.tween.actuators.GenericActuator","reflect",0xfe8e6b50,"luxe.tween.actuators.GenericActuator.reflect","luxe/tween/actuators/GenericActuator.hx",300,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_321_repeat,"luxe.tween.actuators.GenericActuator","repeat",0x0d7873a8,"luxe.tween.actuators.GenericActuator.repeat","luxe/tween/actuators/GenericActuator.hx",321,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_336_resume,"luxe.tween.actuators.GenericActuator","resume",0x0f8045fa,"luxe.tween.actuators.GenericActuator.resume","luxe/tween/actuators/GenericActuator.hx",336,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_348_reverse,"luxe.tween.actuators.GenericActuator","reverse",0x30612035,"luxe.tween.actuators.GenericActuator.reverse","luxe/tween/actuators/GenericActuator.hx",348,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_369_smartRotation,"luxe.tween.actuators.GenericActuator","smartRotation",0x6da997ba,"luxe.tween.actuators.GenericActuator.smartRotation","luxe/tween/actuators/GenericActuator.hx",369,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_390_snapping,"luxe.tween.actuators.GenericActuator","snapping",0xc29e7f49,"luxe.tween.actuators.GenericActuator.snapping","luxe/tween/actuators/GenericActuator.hx",390,0x19dc96e0)
HX_LOCAL_STACK_FRAME(_hx_pos_84a65199438002d6_406_stop,"luxe.tween.actuators.GenericActuator","stop",0x52802f0f,"luxe.tween.actuators.GenericActuator.stop","luxe/tween/actuators/GenericActuator.hx",406,0x19dc96e0)
namespace luxe{
namespace tween{
namespace actuators{

void GenericActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_15_new)
HXLINE( 201)		this->timescaled = false;
HXLINE(  42)		this->_autoVisible = true;
HXLINE(  43)		this->_delay = (int)0;
HXLINE(  44)		this->_reflect = false;
HXLINE(  45)		this->_repeat = (int)0;
HXLINE(  46)		this->_reverse = false;
HXLINE(  47)		this->_smartRotation = false;
HXLINE(  48)		this->_snapping = false;
HXLINE(  49)		this->special = false;
HXLINE(  51)		this->target = target;
HXLINE(  52)		this->properties = properties;
HXLINE(  53)		this->duration = duration;
HXLINE(  55)		this->_ease = ::luxe::tween::Actuate_obj::defaultEase;
            	}

Dynamic GenericActuator_obj::__CreateEmpty() { return new GenericActuator_obj; }

void *GenericActuator_obj::_hx_vtable = 0;

Dynamic GenericActuator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GenericActuator_obj > _hx_result = new GenericActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GenericActuator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23aec07f;
}

static ::luxe::tween::actuators::IGenericActuator_obj _hx_luxe_tween_actuators_GenericActuator__hx_luxe_tween_actuators_IGenericActuator= {
	( ::Dynamic (hx::Object::*)( ::Dynamic))&::luxe::tween::actuators::GenericActuator_obj::autoVisible,
	( ::Dynamic (hx::Object::*)(Float))&::luxe::tween::actuators::GenericActuator_obj::delay,
	( ::Dynamic (hx::Object::*)(::Dynamic))&::luxe::tween::actuators::GenericActuator_obj::ease,
	( ::Dynamic (hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::luxe::tween::actuators::GenericActuator_obj::onComplete,
	( ::Dynamic (hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::luxe::tween::actuators::GenericActuator_obj::onRepeat,
	( ::Dynamic (hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::luxe::tween::actuators::GenericActuator_obj::onUpdate,
	( ::Dynamic (hx::Object::*)( ::Dynamic))&::luxe::tween::actuators::GenericActuator_obj::reflect,
	( ::Dynamic (hx::Object::*)( ::Dynamic))&::luxe::tween::actuators::GenericActuator_obj::repeat,
	( ::Dynamic (hx::Object::*)( ::Dynamic))&::luxe::tween::actuators::GenericActuator_obj::reverse,
	( ::Dynamic (hx::Object::*)(hx::Null< bool > ))&::luxe::tween::actuators::GenericActuator_obj::timescale,
	( ::Dynamic (hx::Object::*)( ::Dynamic))&::luxe::tween::actuators::GenericActuator_obj::smartRotation,
	( ::Dynamic (hx::Object::*)( ::Dynamic))&::luxe::tween::actuators::GenericActuator_obj::snapping,
};

void *GenericActuator_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa07369ec: return &_hx_luxe_tween_actuators_GenericActuator__hx_luxe_tween_actuators_IGenericActuator;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void GenericActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_62_apply)
HXDLIN(  62)		int _g = (int)0;
HXDLIN(  62)		::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  62)		while((_g < _g1->length)){
HXDLIN(  62)			::String i = _g1->__get(_g);
HXDLIN(  62)			_g = (_g + (int)1);
HXLINE(  64)			if (::Reflect_obj::hasField(this->target,i)) {
HXLINE(  66)				 ::Dynamic _hx_tmp = this->target;
HXDLIN(  66)				::Reflect_obj::setField(_hx_tmp,i,::Reflect_obj::field(this->properties,i));
            			}
            			else {
HXLINE(  70)				 ::Dynamic _hx_tmp1 = this->target;
HXDLIN(  70)				::Reflect_obj::setProperty(_hx_tmp1,i,::Reflect_obj::field(this->properties,i));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,apply,(void))

::Dynamic GenericActuator_obj::autoVisible( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_84_autoVisible)
HXLINE(  86)		if (hx::IsNull( value )) {
HXLINE(  88)			value = true;
            		}
HXLINE(  92)		this->_autoVisible = value;
HXLINE(  94)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,autoVisible,return )

 ::Dynamic GenericActuator_obj::callMethod( ::Dynamic method,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_99_callMethod)
HXLINE( 101)		if (hx::IsNull( params )) {
HXLINE( 103)			params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 125)		return ::Reflect_obj::callMethod(method,method,params);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,callMethod,return )

void GenericActuator_obj::change(){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_132_change)
HXDLIN( 132)		if (hx::IsNotNull( this->_onUpdate )) {
HXLINE( 134)			 ::Dynamic method = this->_onUpdate;
HXDLIN( 134)			::cpp::VirtualArray params = this->_onUpdateParams;
HXDLIN( 134)			if (hx::IsNull( params )) {
HXLINE( 134)				params = ::cpp::VirtualArray_obj::__new(0);
            			}
HXDLIN( 134)			::Reflect_obj::callMethod(method,method,params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,change,(void))

void GenericActuator_obj::complete(hx::Null< bool >  __o_sendEvent){
bool sendEvent = __o_sendEvent.Default(true);
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_141_complete)
HXLINE( 143)		if (sendEvent) {
HXLINE( 145)			this->change();
HXLINE( 147)			if (hx::IsNotNull( this->_onComplete )) {
HXLINE( 149)				 ::Dynamic method = this->_onComplete;
HXDLIN( 149)				::cpp::VirtualArray params = this->_onCompleteParams;
HXDLIN( 149)				if (hx::IsNull( params )) {
HXLINE( 149)					params = ::cpp::VirtualArray_obj::__new(0);
            				}
HXDLIN( 149)				::Reflect_obj::callMethod(method,method,params);
            			}
            		}
HXLINE( 155)		::luxe::tween::Actuate_obj::unload(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,complete,(void))

::Dynamic GenericActuator_obj::delay(Float duration){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_165_delay)
HXLINE( 167)		this->_delay = duration;
HXLINE( 169)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,delay,return )

::Dynamic GenericActuator_obj::ease(::Dynamic easing){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_179_ease)
HXLINE( 181)		this->_ease = easing;
HXLINE( 183)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,ease,return )

void GenericActuator_obj::move(){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_188_move)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,move,(void))

::Dynamic GenericActuator_obj::timescale(hx::Null< bool >  __o__value){
bool _value = __o__value.Default(true);
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_202_timescale)
HXLINE( 203)		this->timescaled = _value;
HXLINE( 204)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,timescale,return )

::Dynamic GenericActuator_obj::onComplete( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_213_onComplete)
HXLINE( 215)		this->_onComplete = handler;
HXLINE( 217)		if (hx::IsNull( parameters )) {
HXLINE( 219)			this->_onCompleteParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 223)			this->_onCompleteParams = parameters;
            		}
HXLINE( 227)		if ((this->duration == (int)0)) {
HXLINE( 229)			this->complete(null());
            		}
HXLINE( 233)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onComplete,return )

::Dynamic GenericActuator_obj::onRepeat( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_244_onRepeat)
HXLINE( 246)		this->_onRepeat = handler;
HXLINE( 248)		if (hx::IsNull( parameters )) {
HXLINE( 250)			this->_onRepeatParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 254)			this->_onRepeatParams = parameters;
            		}
HXLINE( 258)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onRepeat,return )

::Dynamic GenericActuator_obj::onUpdate( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_269_onUpdate)
HXLINE( 271)		this->_onUpdate = handler;
HXLINE( 273)		if (hx::IsNull( parameters )) {
HXLINE( 275)			this->_onUpdateParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 279)			this->_onUpdateParams = parameters;
            		}
HXLINE( 283)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onUpdate,return )

void GenericActuator_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_288_pause)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,pause,(void))

::Dynamic GenericActuator_obj::reflect( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_300_reflect)
HXLINE( 302)		if (hx::IsNull( value )) {
HXLINE( 304)			value = true;
            		}
HXLINE( 308)		this->_reflect = value;
HXLINE( 309)		this->special = true;
HXLINE( 311)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reflect,return )

::Dynamic GenericActuator_obj::repeat( ::Dynamic times){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_321_repeat)
HXLINE( 323)		if (hx::IsNull( times )) {
HXLINE( 325)			times = (int)-1;
            		}
HXLINE( 329)		this->_repeat = times;
HXLINE( 331)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,repeat,return )

void GenericActuator_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_336_resume)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,resume,(void))

::Dynamic GenericActuator_obj::reverse( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_348_reverse)
HXLINE( 350)		if (hx::IsNull( value )) {
HXLINE( 352)			value = true;
            		}
HXLINE( 356)		this->_reverse = value;
HXLINE( 357)		this->special = true;
HXLINE( 359)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reverse,return )

::Dynamic GenericActuator_obj::smartRotation( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_369_smartRotation)
HXLINE( 371)		if (hx::IsNull( value )) {
HXLINE( 373)			value = true;
            		}
HXLINE( 377)		this->_smartRotation = value;
HXLINE( 378)		this->special = true;
HXLINE( 380)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,smartRotation,return )

::Dynamic GenericActuator_obj::snapping( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_390_snapping)
HXLINE( 392)		if (hx::IsNull( value )) {
HXLINE( 394)			value = true;
            		}
HXLINE( 398)		this->_snapping = value;
HXLINE( 399)		this->special = true;
HXLINE( 401)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,snapping,return )

void GenericActuator_obj::stop( ::Dynamic properties,bool complete,bool sendEvent){
            	HX_STACKFRAME(&_hx_pos_84a65199438002d6_406_stop)
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericActuator_obj,stop,(void))


hx::ObjectPtr< GenericActuator_obj > GenericActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	hx::ObjectPtr< GenericActuator_obj > __this = new GenericActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

hx::ObjectPtr< GenericActuator_obj > GenericActuator_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	GenericActuator_obj *__this = (GenericActuator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GenericActuator_obj), true, "luxe.tween.actuators.GenericActuator"));
	*(void **)__this = GenericActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

GenericActuator_obj::GenericActuator_obj()
{
}

void GenericActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericActuator);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_MARK_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_MARK_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_MARK_MEMBER_NAME(_reflect,"_reflect");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_reverse,"_reverse");
	HX_MARK_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	HX_MARK_MEMBER_NAME(special,"special");
	HX_MARK_MEMBER_NAME(timescaled,"timescaled");
	HX_MARK_END_CLASS();
}

void GenericActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_VISIT_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_VISIT_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_VISIT_MEMBER_NAME(_reflect,"_reflect");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_reverse,"_reverse");
	HX_VISIT_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	HX_VISIT_MEMBER_NAME(special,"special");
	HX_VISIT_MEMBER_NAME(timescaled,"timescaled");
}

hx::Val GenericActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease_dyn() ); }
		if (HX_FIELD_EQ(inName,"move") ) { return hx::Val( move_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return hx::Val( _ease ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
		if (HX_FIELD_EQ(inName,"delay") ) { return hx::Val( delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"_delay") ) { return hx::Val( _delay ); }
		if (HX_FIELD_EQ(inName,"change") ) { return hx::Val( change_dyn() ); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return hx::Val( repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return hx::Val( resume_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { return hx::Val( _repeat ); }
		if (HX_FIELD_EQ(inName,"special") ) { return hx::Val( special ); }
		if (HX_FIELD_EQ(inName,"reflect") ) { return hx::Val( reflect_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return hx::Val( reverse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"_reflect") ) { return hx::Val( _reflect ); }
		if (HX_FIELD_EQ(inName,"_reverse") ) { return hx::Val( _reverse ); }
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRepeat") ) { return hx::Val( onRepeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return hx::Val( onUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"snapping") ) { return hx::Val( snapping_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { return hx::Val( _onRepeat ); }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return hx::Val( _onUpdate ); }
		if (HX_FIELD_EQ(inName,"_snapping") ) { return hx::Val( _snapping ); }
		if (HX_FIELD_EQ(inName,"timescale") ) { return hx::Val( timescale_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"callMethod") ) { return hx::Val( callMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"timescaled") ) { return hx::Val( timescaled ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return hx::Val( _onComplete ); }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return hx::Val( autoVisible_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { return hx::Val( _autoVisible ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"smartRotation") ) { return hx::Val( smartRotation_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { return hx::Val( _smartRotation ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { return hx::Val( _onRepeatParams ); }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { return hx::Val( _onUpdateParams ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { return hx::Val( _onCompleteParams ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GenericActuator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reflect") ) { _reflect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reverse") ) { _reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { _onRepeat=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timescaled") ) { timescaled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { _autoVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { _smartRotation=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { _onRepeatParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { _onUpdateParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { _onCompleteParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("_autoVisible","\xc4","\xca","\x11","\xef"));
	outFields->push(HX_HCSTRING("_delay","\xc4","\x1e","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"));
	outFields->push(HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"));
	outFields->push(HX_HCSTRING("_onCompleteParams","\xbd","\x3c","\xab","\x59"));
	outFields->push(HX_HCSTRING("_onRepeat","\x39","\x85","\xbf","\x2d"));
	outFields->push(HX_HCSTRING("_onRepeatParams","\x5f","\x25","\x08","\x92"));
	outFields->push(HX_HCSTRING("_onUpdate","\xe7","\x73","\x48","\xae"));
	outFields->push(HX_HCSTRING("_onUpdateParams","\x8d","\x4a","\x8e","\x60"));
	outFields->push(HX_HCSTRING("_reflect","\xbe","\xdd","\xe1","\x22"));
	outFields->push(HX_HCSTRING("_repeat","\xfa","\xa8","\xf3","\x74"));
	outFields->push(HX_HCSTRING("_reverse","\xa3","\x92","\xb4","\x54"));
	outFields->push(HX_HCSTRING("_smartRotation","\xa8","\x90","\x57","\x7f"));
	outFields->push(HX_HCSTRING("_snapping","\x1b","\x2d","\x4f","\x67"));
	outFields->push(HX_HCSTRING("special","\x39","\x7a","\x55","\xdf"));
	outFields->push(HX_HCSTRING("timescaled","\x67","\xbe","\x5a","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GenericActuator_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GenericActuator_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsString,(int)offsetof(GenericActuator_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_autoVisible),HX_HCSTRING("_autoVisible","\xc4","\xca","\x11","\xef")},
	{hx::fsFloat,(int)offsetof(GenericActuator_obj,_delay),HX_HCSTRING("_delay","\xc4","\x1e","\x0e","\xd3")},
	{hx::fsObject /*::luxe::tween::easing::IEasing*/ ,(int)offsetof(GenericActuator_obj,_ease),HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onComplete),HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onCompleteParams),HX_HCSTRING("_onCompleteParams","\xbd","\x3c","\xab","\x59")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onRepeat),HX_HCSTRING("_onRepeat","\x39","\x85","\xbf","\x2d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onRepeatParams),HX_HCSTRING("_onRepeatParams","\x5f","\x25","\x08","\x92")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onUpdate),HX_HCSTRING("_onUpdate","\xe7","\x73","\x48","\xae")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onUpdateParams),HX_HCSTRING("_onUpdateParams","\x8d","\x4a","\x8e","\x60")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_reflect),HX_HCSTRING("_reflect","\xbe","\xdd","\xe1","\x22")},
	{hx::fsInt,(int)offsetof(GenericActuator_obj,_repeat),HX_HCSTRING("_repeat","\xfa","\xa8","\xf3","\x74")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_reverse),HX_HCSTRING("_reverse","\xa3","\x92","\xb4","\x54")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_smartRotation),HX_HCSTRING("_smartRotation","\xa8","\x90","\x57","\x7f")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_snapping),HX_HCSTRING("_snapping","\x1b","\x2d","\x4f","\x67")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,special),HX_HCSTRING("special","\x39","\x7a","\x55","\xdf")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,timescaled),HX_HCSTRING("timescaled","\x67","\xbe","\x5a","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GenericActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericActuator_obj_sMemberFields[] = {
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("_autoVisible","\xc4","\xca","\x11","\xef"),
	HX_HCSTRING("_delay","\xc4","\x1e","\x0e","\xd3"),
	HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"),
	HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"),
	HX_HCSTRING("_onCompleteParams","\xbd","\x3c","\xab","\x59"),
	HX_HCSTRING("_onRepeat","\x39","\x85","\xbf","\x2d"),
	HX_HCSTRING("_onRepeatParams","\x5f","\x25","\x08","\x92"),
	HX_HCSTRING("_onUpdate","\xe7","\x73","\x48","\xae"),
	HX_HCSTRING("_onUpdateParams","\x8d","\x4a","\x8e","\x60"),
	HX_HCSTRING("_reflect","\xbe","\xdd","\xe1","\x22"),
	HX_HCSTRING("_repeat","\xfa","\xa8","\xf3","\x74"),
	HX_HCSTRING("_reverse","\xa3","\x92","\xb4","\x54"),
	HX_HCSTRING("_smartRotation","\xa8","\x90","\x57","\x7f"),
	HX_HCSTRING("_snapping","\x1b","\x2d","\x4f","\x67"),
	HX_HCSTRING("special","\x39","\x7a","\x55","\xdf"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("autoVisible","\xc3","\x1c","\x08","\x89"),
	HX_HCSTRING("callMethod","\x1f","\xce","\x8a","\x34"),
	HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("timescaled","\x67","\xbe","\x5a","\xa5"),
	HX_HCSTRING("timescale","\x5d","\x33","\x92","\x9a"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onRepeat","\xda","\x8d","\x29","\xe6"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("smartRotation","\x67","\xa0","\x05","\x41"),
	HX_HCSTRING("snapping","\xbc","\x35","\xb9","\x1f"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	::String(null()) };

static void GenericActuator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GenericActuator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericActuator_obj::__mClass;

void GenericActuator_obj::__register()
{
	hx::Object *dummy = new GenericActuator_obj;
	GenericActuator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("luxe.tween.actuators.GenericActuator","\x81","\x7c","\xd2","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GenericActuator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GenericActuator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericActuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GenericActuator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericActuator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace luxe
} // end namespace tween
} // end namespace actuators