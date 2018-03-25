// Generated by Haxe 3.4.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_PromiseError
#include <snow/api/PromiseError.h>
#endif
#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_627296029ffcdab9_62_new,"snow.api.Promise","new",0xe10ada2e,"snow.api.Promise.new","snow/api/Promise.hx",62,0xcb181004)
HX_DEFINE_STACK_FRAME(_hx_pos_627296029ffcdab9_25_new,"snow.api.Promise","new",0xe10ada2e,"snow.api.Promise.new","snow/api/Promise.hx",25,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_83_then,"snow.api.Promise","then",0x0c6d8d4f,"snow.api.Promise.then","snow/api/Promise.hx",83,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_109_error,"snow.api.Promise","error",0x37116516,"snow.api.Promise.error","snow/api/Promise.hx",109,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_236_toString,"snow.api.Promise","toString",0xf41b7c1e,"snow.api.Promise.toString","snow/api/Promise.hx",236,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_246_add_settle,"snow.api.Promise","add_settle",0xf8fc3b1b,"snow.api.Promise.add_settle","snow/api/Promise.hx",246,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_260_new_linked_promise,"snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",260,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_259_new_linked_promise,"snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",259,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_256_new_linked_promise,"snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",256,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_276_new_linked_resolve,"snow.api.Promise","new_linked_resolve",0xb0536277,"snow.api.Promise.new_linked_resolve","snow/api/Promise.hx",276,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_275_new_linked_resolve,"snow.api.Promise","new_linked_resolve",0xb0536277,"snow.api.Promise.new_linked_resolve","snow/api/Promise.hx",275,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_273_new_linked_resolve,"snow.api.Promise","new_linked_resolve",0xb0536277,"snow.api.Promise.new_linked_resolve","snow/api/Promise.hx",273,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_286_new_linked_reject,"snow.api.Promise","new_linked_reject",0x4d777c34,"snow.api.Promise.new_linked_reject","snow/api/Promise.hx",286,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_285_new_linked_reject,"snow.api.Promise","new_linked_reject",0x4d777c34,"snow.api.Promise.new_linked_reject","snow/api/Promise.hx",285,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_283_new_linked_reject,"snow.api.Promise","new_linked_reject",0x4d777c34,"snow.api.Promise.new_linked_reject","snow/api/Promise.hx",283,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_297_new_linked_resolve_empty,"snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",297,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_296_new_linked_resolve_empty,"snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",296,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_294_new_linked_resolve_empty,"snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",294,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_308_new_linked_reject_empty,"snow.api.Promise","new_linked_reject_empty",0x845a1d02,"snow.api.Promise.new_linked_reject_empty","snow/api/Promise.hx",308,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_307_new_linked_reject_empty,"snow.api.Promise","new_linked_reject_empty",0x845a1d02,"snow.api.Promise.new_linked_reject_empty","snow/api/Promise.hx",307,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_305_new_linked_reject_empty,"snow.api.Promise","new_linked_reject_empty",0x845a1d02,"snow.api.Promise.new_linked_reject_empty","snow/api/Promise.hx",305,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_316_add_fulfill,"snow.api.Promise","add_fulfill",0x885e59b0,"snow.api.Promise.add_fulfill","snow/api/Promise.hx",316,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_323_add_reject,"snow.api.Promise","add_reject",0x8bf952ef,"snow.api.Promise.add_reject","snow/api/Promise.hx",323,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_332_onfulfill,"snow.api.Promise","onfulfill",0x5213e64f,"snow.api.Promise.onfulfill","snow/api/Promise.hx",332,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_349_onreject,"snow.api.Promise","onreject",0x694a7f30,"snow.api.Promise.onreject","snow/api/Promise.hx",349,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_368_onsettle,"snow.api.Promise","onsettle",0xd64d675c,"snow.api.Promise.onsettle","snow/api/Promise.hx",368,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_382_onexception,"snow.api.Promise","onexception",0xf4b49b1e,"snow.api.Promise.onexception","snow/api/Promise.hx",382,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_377_onexception,"snow.api.Promise","onexception",0xf4b49b1e,"snow.api.Promise.onexception","snow/api/Promise.hx",377,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_403_state_string,"snow.api.Promise","state_string",0x9a7c64f1,"snow.api.Promise.state_string","snow/api/Promise.hx",403,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_152_all,"snow.api.Promise","all",0xe10102ef,"snow.api.Promise.all","snow/api/Promise.hx",152,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_166_all,"snow.api.Promise","all",0xe10102ef,"snow.api.Promise.all","snow/api/Promise.hx",166,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_144_all,"snow.api.Promise","all",0xe10102ef,"snow.api.Promise.all","snow/api/Promise.hx",144,0xcb181004)
static const int _hx_array_data_aaf2eb3c_37[] = {
	(int)0,
};
static const int _hx_array_data_aaf2eb3c_38[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_178_all,"snow.api.Promise","all",0xe10102ef,"snow.api.Promise.all","snow/api/Promise.hx",178,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_136_all,"snow.api.Promise","all",0xe10102ef,"snow.api.Promise.all","snow/api/Promise.hx",136,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_194_race,"snow.api.Promise","race",0x0b15ce83,"snow.api.Promise.race","snow/api/Promise.hx",194,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_200_race,"snow.api.Promise","race",0x0b15ce83,"snow.api.Promise.race","snow/api/Promise.hx",200,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_191_race,"snow.api.Promise","race",0x0b15ce83,"snow.api.Promise.race","snow/api/Promise.hx",191,0xcb181004)
static const bool _hx_array_data_aaf2eb3c_45[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_218_reject,"snow.api.Promise","reject",0xa943dc51,"snow.api.Promise.reject","snow/api/Promise.hx",218,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_217_reject,"snow.api.Promise","reject",0xa943dc51,"snow.api.Promise.reject","snow/api/Promise.hx",217,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_228_resolve,"snow.api.Promise","resolve",0xa75b1bba,"snow.api.Promise.resolve","snow/api/Promise.hx",228,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_227_resolve,"snow.api.Promise","resolve",0xa75b1bba,"snow.api.Promise.resolve","snow/api/Promise.hx",227,0xcb181004)
namespace snow{
namespace api{

void Promise_obj::__construct( ::Dynamic func){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::snow::api::Promise,_gthis, ::Dynamic,func) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_62_new)
HXLINE(  71)			func(_gthis->onfulfill_dyn(),_gthis->onreject_dyn());
HXLINE(  74)			::snow::api::Promises_obj::defer(::snow::api::Promises_obj::next_dyn(),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_25_new)
HXLINE(  37)		this->was_caught = false;
HXLINE(  54)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  56)		this->state = (int)0;
HXLINE(  58)		this->reject_reactions = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  59)		this->fulfill_reactions = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  60)		this->settle_reactions = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  62)		::snow::api::Promises_obj::queue( ::Dynamic(new _hx_Closure_0(_gthis,func)));
            	}

Dynamic Promise_obj::__CreateEmpty() { return new Promise_obj; }

void *Promise_obj::_hx_vtable = 0;

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Promise_obj > _hx_result = new Promise_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Promise_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x79374d4c;
}

 ::snow::api::Promise Promise_obj::then( ::Dynamic on_fulfilled, ::Dynamic on_rejected){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_83_then)
HXDLIN(  83)		int _g = this->state;
HXDLIN(  83)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  86)				this->add_fulfill(on_fulfilled);
HXLINE(  87)				this->add_reject(on_rejected);
HXLINE(  88)				return this->new_linked_promise();
            			}
            			break;
            			case (int)1: {
HXLINE(  92)				::snow::api::Promises_obj::defer(on_fulfilled,this->result);
HXLINE(  93)				return ::snow::api::Promise_obj::resolve(this->result);
            			}
            			break;
            			case (int)2: {
HXLINE(  97)				::snow::api::Promises_obj::defer(on_rejected,this->result);
HXLINE(  98)				return ::snow::api::Promise_obj::reject(this->result);
            			}
            			break;
            		}
HXLINE(  83)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Promise_obj,then,return )

 ::snow::api::Promise Promise_obj::error( ::Dynamic on_rejected){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_109_error)
HXDLIN( 109)		int _g = this->state;
HXDLIN( 109)		switch((int)(_g)){
            			case (int)0: {
HXLINE( 112)				this->add_reject(on_rejected);
HXLINE( 113)				return this->new_linked_resolve_empty();
            			}
            			break;
            			case (int)1: {
HXLINE( 117)				return ::snow::api::Promise_obj::resolve(this->result);
            			}
            			break;
            			case (int)2: {
HXLINE( 121)				::snow::api::Promises_obj::defer(on_rejected,this->result);
HXLINE( 122)				return ::snow::api::Promise_obj::reject(this->result);
            			}
            			break;
            		}
HXLINE( 109)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

::String Promise_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_236_toString)
HXDLIN( 236)		::String _hx_tmp = ((HX_("Promise { state:",53,a9,1a,7e) + this->state_string()) + HX_(", result:",c9,a8,23,d3));
HXDLIN( 236)		return ((_hx_tmp + ::Std_obj::string(this->result)) + HX_(" }",5d,1c,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,toString,return )

void Promise_obj::add_settle( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_246_add_settle)
HXDLIN( 246)		if ((this->state == (int)0)) {
HXLINE( 247)			this->settle_reactions->push(f);
            		}
            		else {
HXLINE( 249)			::snow::api::Promises_obj::defer(f,this->result);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_settle,(void))

 ::snow::api::Promise Promise_obj::new_linked_promise(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::snow::api::Promise,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic r){
            			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::snow::api::Promise,_gthis, ::Dynamic,f, ::Dynamic,r) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_260_new_linked_promise)
HXLINE( 260)				if ((_gthis->state == (int)1)) {
HXLINE( 261)					f(_gthis->result);
            				}
            				else {
HXLINE( 263)					r(_gthis->result);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_259_new_linked_promise)
HXLINE( 259)			_gthis->add_settle( ::Dynamic(new _hx_Closure_0(_gthis,f,r)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_256_new_linked_promise)
HXDLIN( 256)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 258)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_promise,return )

 ::snow::api::Promise Promise_obj::new_linked_resolve(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::snow::api::Promise,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic r){
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            			void _hx_run( ::Dynamic val){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_276_new_linked_resolve)
HXLINE( 276)				f(val);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_275_new_linked_resolve)
HXLINE( 275)			_gthis->add_settle( ::Dynamic(new _hx_Closure_0(f)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_273_new_linked_resolve)
HXDLIN( 273)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 274)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_resolve,return )

 ::snow::api::Promise Promise_obj::new_linked_reject(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::snow::api::Promise,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic r){
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,r) HXARGC(1)
            			void _hx_run( ::Dynamic val){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_286_new_linked_reject)
HXLINE( 286)				r(val);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_285_new_linked_reject)
HXLINE( 285)			_gthis->add_settle( ::Dynamic(new _hx_Closure_0(r)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_283_new_linked_reject)
HXDLIN( 283)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 284)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_reject,return )

 ::snow::api::Promise Promise_obj::new_linked_resolve_empty(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::snow::api::Promise,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic r){
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_297_new_linked_resolve_empty)
HXLINE( 297)				f();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_296_new_linked_resolve_empty)
HXLINE( 296)			_gthis->add_settle( ::Dynamic(new _hx_Closure_0(f)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_294_new_linked_resolve_empty)
HXDLIN( 294)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 295)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_resolve_empty,return )

 ::snow::api::Promise Promise_obj::new_linked_reject_empty(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::snow::api::Promise,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic r){
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,r) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_308_new_linked_reject_empty)
HXLINE( 308)				r();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_307_new_linked_reject_empty)
HXLINE( 307)			_gthis->add_settle( ::Dynamic(new _hx_Closure_0(r)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_305_new_linked_reject_empty)
HXDLIN( 305)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 306)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_reject_empty,return )

void Promise_obj::add_fulfill( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_316_add_fulfill)
HXDLIN( 316)		if (hx::IsNotNull( f )) {
HXLINE( 317)			this->fulfill_reactions->push(f);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_fulfill,(void))

void Promise_obj::add_reject( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_323_add_reject)
HXDLIN( 323)		if (hx::IsNotNull( f )) {
HXLINE( 324)			this->was_caught = true;
HXLINE( 325)			this->reject_reactions->push(f);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_reject,(void))

void Promise_obj::onfulfill( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_332_onfulfill)
HXLINE( 336)		this->state = (int)1;
HXLINE( 337)		this->result = val;
HXLINE( 339)		while((this->fulfill_reactions->get_length() > (int)0)){
HXLINE( 340)			 ::Dynamic fn = this->fulfill_reactions->shift();
HXLINE( 341)			fn(this->result);
            		}
HXLINE( 344)		this->onsettle();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onfulfill,(void))

void Promise_obj::onreject( ::Dynamic reason){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_349_onreject)
HXLINE( 353)		this->state = (int)2;
HXLINE( 354)		this->result = reason;
HXLINE( 356)		while((this->reject_reactions->get_length() > (int)0)){
HXLINE( 357)			 ::Dynamic fn = this->reject_reactions->shift();
HXLINE( 358)			fn(this->result);
            		}
HXLINE( 361)		this->onsettle();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onreject,(void))

void Promise_obj::onsettle(){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_368_onsettle)
HXDLIN( 368)		while((this->settle_reactions->get_length() > (int)0)){
HXLINE( 369)			 ::Dynamic fn = this->settle_reactions->shift();
HXLINE( 370)			fn(this->result);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,onsettle,(void))

void Promise_obj::onexception( ::Dynamic err){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::snow::api::Promise,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_382_onexception)
HXLINE( 382)			if (!(_gthis->was_caught)) {
HXLINE( 383)				if ((_gthis->state == (int)2)) {
HXLINE( 384)					HX_STACK_DO_THROW(::snow::api::PromiseError_obj::UnhandledPromiseRejection(_gthis->toString()));
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_377_onexception)
HXDLIN( 377)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 381)		this->add_settle( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 395)		if ((this->state == (int)0)) {
HXLINE( 396)			this->onreject(err);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onexception,(void))

::String Promise_obj::state_string(){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_403_state_string)
HXDLIN( 403)		int _g = this->state;
HXDLIN( 403)		switch((int)(_g)){
            			case (int)0: {
HXLINE( 404)				return HX_("pending",57,98,ec,2b);
            			}
            			break;
            			case (int)1: {
HXLINE( 405)				return HX_("fulfilled",9f,25,7b,40);
            			}
            			break;
            			case (int)2: {
HXLINE( 406)				return HX_("rejected",7e,ff,83,ab);
            			}
            			break;
            		}
HXLINE( 403)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,state_string,return )

 ::snow::api::Promise Promise_obj::all(::Array< ::Dynamic> list){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_3,::Array< ::Dynamic>,list) HXARGC(2)
            		void _hx_run( ::Dynamic ok, ::Dynamic no){
            			HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_hx_Closure_0,::Array< int >,current,::cpp::VirtualArray,fulfill_result,int,total, ::Dynamic,ok,::Array< int >,all_state) HXARGC(2)
            			void _hx_run(int index, ::Dynamic val){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_152_all)
HXLINE( 154)				if ((all_state->__get((int)0) != (int)0)) {
HXLINE( 154)					return;
            				}
HXLINE( 156)				current[(int)0]++;
HXLINE( 157)				fulfill_result->set(index,val);
HXLINE( 159)				if ((total == current->__get((int)0))) {
HXLINE( 160)					all_state[(int)0] = (int)1;
HXLINE( 161)					ok(fulfill_result);
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_1,::cpp::VirtualArray,reject_result, ::Dynamic,no,::Array< int >,all_state) HXARGC(1)
            			void _hx_run( ::Dynamic val1){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_166_all)
HXLINE( 168)				if ((all_state->__get((int)0) != (int)0)) {
HXLINE( 168)					return;
            				}
HXLINE( 170)				all_state[(int)0] = (int)2;
HXLINE( 171)				reject_result->set((int)0,val1);
HXLINE( 172)				no(reject_result->__get((int)0));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_144_all)
HXLINE( 146)			::Array< int > current = ::Array_obj< int >::fromData( _hx_array_data_aaf2eb3c_37,1);
HXLINE( 147)			int total = list->length;
HXLINE( 148)			::cpp::VirtualArray fulfill_result = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 149)			::cpp::VirtualArray reject_result = ::cpp::VirtualArray_obj::__new(1)->init(0,null());
HXLINE( 150)			::Array< int > all_state = ::Array_obj< int >::fromData( _hx_array_data_aaf2eb3c_38,1);
HXLINE( 152)			 ::Dynamic single_ok =  ::Dynamic(new _hx_Closure_0(current,fulfill_result,total,ok,all_state));
HXLINE( 166)			 ::Dynamic single_err =  ::Dynamic(new _hx_Closure_1(reject_result,no,all_state));
HXLINE( 176)			int index1 = (int)0;
HXLINE( 177)			{
HXLINE( 177)				int _g1 = (int)0;
HXDLIN( 177)				while((_g1 < list->length)){
            					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_2, ::Dynamic,f,int,a1) HXARGC(1)
            					void _hx_run( ::Dynamic a2){
            						HX_STACKFRAME(&_hx_pos_627296029ffcdab9_178_all)
HXLINE( 178)						f(a1,a2);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 177)					 ::snow::api::Promise promise = list->__get(_g1).StaticCast<  ::snow::api::Promise >();
HXDLIN( 177)					_g1 = (_g1 + (int)1);
HXLINE( 178)					 ::Dynamic f = single_ok;
HXDLIN( 178)					int a1 = index1;
HXDLIN( 178)					promise->then( ::Dynamic(new _hx_Closure_2(f,a1)),null())->error(single_err);
HXLINE( 179)					index1 = (index1 + (int)1);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_136_all)
HXLINE( 139)		{
HXLINE( 139)			int _g = (int)0;
HXDLIN( 139)			while((_g < list->length)){
HXLINE( 139)				 ::snow::api::Promise item = list->__get(_g).StaticCast<  ::snow::api::Promise >();
HXDLIN( 139)				_g = (_g + (int)1);
HXLINE( 140)				if (hx::IsNull( item )) {
HXLINE( 140)					HX_STACK_DO_THROW(HX_("Promise.all handed an array with null items within it",07,3d,bc,23));
            				}
            			}
            		}
HXLINE( 144)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_3(list)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,all,return )

 ::snow::api::Promise Promise_obj::race(::Array< ::Dynamic> list){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,list) HXARGC(2)
            		void _hx_run( ::Dynamic ok, ::Dynamic no){
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::Array< bool >,settled, ::Dynamic,ok) HXARGC(1)
            			void _hx_run( ::Dynamic val){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_194_race)
HXLINE( 195)				if (settled->__get((int)0)) {
HXLINE( 195)					return;
            				}
HXLINE( 196)				settled[(int)0] = true;
HXLINE( 197)				ok(val);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1,::Array< bool >,settled, ::Dynamic,no) HXARGC(1)
            			void _hx_run( ::Dynamic val1){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_200_race)
HXLINE( 201)				if (settled->__get((int)0)) {
HXLINE( 201)					return;
            				}
HXLINE( 202)				settled[(int)0] = true;
HXLINE( 203)				no(val1);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_191_race)
HXLINE( 193)			::Array< bool > settled = ::Array_obj< bool >::fromData( _hx_array_data_aaf2eb3c_45,1);
HXLINE( 194)			 ::Dynamic single_ok =  ::Dynamic(new _hx_Closure_0(settled,ok));
HXLINE( 200)			 ::Dynamic single_err =  ::Dynamic(new _hx_Closure_1(settled,no));
HXLINE( 206)			{
HXLINE( 206)				int _g = (int)0;
HXDLIN( 206)				while((_g < list->length)){
HXLINE( 206)					 ::snow::api::Promise promise = list->__get(_g).StaticCast<  ::snow::api::Promise >();
HXDLIN( 206)					_g = (_g + (int)1);
HXLINE( 207)					promise->then(single_ok,null())->error(single_err);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_191_race)
HXDLIN( 191)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_2(list)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,race,return )

 ::snow::api::Promise Promise_obj::reject( ::Dynamic reason){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,reason) HXARGC(2)
            		void _hx_run( ::Dynamic ok, ::Dynamic no){
            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_218_reject)
HXLINE( 218)			no(reason);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_217_reject)
HXDLIN( 217)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(reason)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,reject,return )

 ::snow::api::Promise Promise_obj::resolve( ::Dynamic val){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,val) HXARGC(2)
            		void _hx_run( ::Dynamic ok, ::Dynamic no){
            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_228_resolve)
HXLINE( 228)			ok(val);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_227_resolve)
HXDLIN( 227)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(val)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,resolve,return )


hx::ObjectPtr< Promise_obj > Promise_obj::__new( ::Dynamic func) {
	hx::ObjectPtr< Promise_obj > __this = new Promise_obj();
	__this->__construct(func);
	return __this;
}

hx::ObjectPtr< Promise_obj > Promise_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic func) {
	Promise_obj *__this = (Promise_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Promise_obj), true, "snow.api.Promise"));
	*(void **)__this = Promise_obj::_hx_vtable;
	__this->__construct(func);
	return __this;
}

Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_MARK_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_MARK_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_MARK_MEMBER_NAME(was_caught,"was_caught");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_VISIT_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_VISIT_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_VISIT_MEMBER_NAME(was_caught,"was_caught");
}

hx::Val Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return hx::Val( then_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return hx::Val( result ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"onreject") ) { return hx::Val( onreject_dyn() ); }
		if (HX_FIELD_EQ(inName,"onsettle") ) { return hx::Val( onsettle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onfulfill") ) { return hx::Val( onfulfill_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { return hx::Val( was_caught ); }
		if (HX_FIELD_EQ(inName,"add_settle") ) { return hx::Val( add_settle_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_reject") ) { return hx::Val( add_reject_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"add_fulfill") ) { return hx::Val( add_fulfill_dyn() ); }
		if (HX_FIELD_EQ(inName,"onexception") ) { return hx::Val( onexception_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"state_string") ) { return hx::Val( state_string_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { return hx::Val( reject_reactions ); }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { return hx::Val( settle_reactions ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { return hx::Val( fulfill_reactions ); }
		if (HX_FIELD_EQ(inName,"new_linked_reject") ) { return hx::Val( new_linked_reject_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"new_linked_promise") ) { return hx::Val( new_linked_promise_dyn() ); }
		if (HX_FIELD_EQ(inName,"new_linked_resolve") ) { return hx::Val( new_linked_resolve_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"new_linked_reject_empty") ) { return hx::Val( new_linked_reject_empty_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"new_linked_resolve_empty") ) { return hx::Val( new_linked_resolve_empty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Promise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = all_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"race") ) { outValue = race_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reject") ) { outValue = reject_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
	}
	return false;
}

hx::Val Promise_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { was_caught=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { reject_reactions=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { settle_reactions=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { fulfill_reactions=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	outFields->push(HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0"));
	outFields->push(HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b"));
	outFields->push(HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb"));
	outFields->push(HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Promise_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Promise_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Promise_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,reject_reactions),HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,fulfill_reactions),HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,settle_reactions),HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(Promise_obj,was_caught),HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Promise_obj_sStaticStorageInfo = 0;
#endif

static ::String Promise_obj_sMemberFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("reject_reactions","\x8a","\xa6","\x76","\xb0"),
	HX_HCSTRING("fulfill_reactions","\xab","\x55","\x22","\x9b"),
	HX_HCSTRING("settle_reactions","\xb6","\xfd","\x65","\xeb"),
	HX_HCSTRING("was_caught","\x12","\x4f","\x0e","\x2d"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("add_settle","\x29","\x4f","\x38","\x78"),
	HX_HCSTRING("new_linked_promise","\x34","\xef","\x80","\xc1"),
	HX_HCSTRING("new_linked_resolve","\x85","\x34","\xf7","\x30"),
	HX_HCSTRING("new_linked_reject","\xe6","\x25","\x68","\x7f"),
	HX_HCSTRING("new_linked_resolve_empty","\x13","\x68","\xbe","\x26"),
	HX_HCSTRING("new_linked_reject_empty","\x34","\x18","\x9c","\x5f"),
	HX_HCSTRING("add_fulfill","\xe2","\xd1","\xb3","\x5d"),
	HX_HCSTRING("add_reject","\xfd","\x66","\x35","\x0b"),
	HX_HCSTRING("onfulfill","\x01","\x8e","\xaa","\xd6"),
	HX_HCSTRING("onreject","\xbe","\xd3","\x9d","\xad"),
	HX_HCSTRING("onsettle","\xea","\xbb","\xa0","\x1a"),
	HX_HCSTRING("onexception","\x50","\x13","\x0a","\xca"),
	HX_HCSTRING("state_string","\x7f","\x18","\xf0","\x6f"),
	::String(null()) };

static void Promise_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Promise_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_obj::__mClass;

static ::String Promise_obj_sStaticFields[] = {
	HX_HCSTRING("all","\x21","\xf9","\x49","\x00"),
	HX_HCSTRING("race","\x11","\x44","\xa4","\x4b"),
	HX_HCSTRING("reject","\x5f","\x51","\x85","\x02"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null())
};

void Promise_obj::__register()
{
	hx::Object *dummy = new Promise_obj;
	Promise_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("snow.api.Promise","\x3c","\xeb","\xf2","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Promise_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Promise_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Promise_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Promise_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace api
