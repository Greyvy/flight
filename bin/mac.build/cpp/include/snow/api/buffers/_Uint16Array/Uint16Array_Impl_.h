// Generated by Haxe 3.4.5
#ifndef INCLUDED_snow_api_buffers__Uint16Array_Uint16Array_Impl_
#define INCLUDED_snow_api_buffers__Uint16Array_Uint16Array_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS4(snow,api,buffers,_Uint16Array,Uint16Array_Impl_)

namespace snow{
namespace api{
namespace buffers{
namespace _Uint16Array{


class HXCPP_CLASS_ATTRIBUTES Uint16Array_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uint16Array_Impl__obj OBJ_;
		Uint16Array_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0c494ca3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="snow.api.buffers._Uint16Array.Uint16Array_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"snow.api.buffers._Uint16Array.Uint16Array_Impl_"); }

		hx::ObjectPtr< Uint16Array_Impl__obj > __new() {
			hx::ObjectPtr< Uint16Array_Impl__obj > __this = new Uint16Array_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Uint16Array_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Uint16Array_Impl__obj *__this = (Uint16Array_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uint16Array_Impl__obj), false, "snow.api.buffers._Uint16Array.Uint16Array_Impl_"));
			*(void **)__this = Uint16Array_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uint16Array_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uint16Array_Impl_","\x1a","\x24","\x06","\x8a"); }

		static void __boot();
		static int BYTES_PER_ELEMENT;
		static  ::snow::api::buffers::ArrayBufferView _new(int _elements);
		static ::Dynamic _new_dyn();

		static  ::snow::api::buffers::ArrayBufferView fromArray(::cpp::VirtualArray _array);
		static ::Dynamic fromArray_dyn();

		static  ::snow::api::buffers::ArrayBufferView fromView( ::snow::api::buffers::ArrayBufferView _view);
		static ::Dynamic fromView_dyn();

		static  ::snow::api::buffers::ArrayBufferView fromBuffer(::Array< unsigned char > _buffer,int _byteOffset,int _byteLength);
		static ::Dynamic fromBuffer_dyn();

		static  ::snow::api::buffers::ArrayBufferView subarray( ::snow::api::buffers::ArrayBufferView this1,int begin, ::Dynamic end);
		static ::Dynamic subarray_dyn();

		static  ::snow::api::buffers::ArrayBufferView fromBytes( ::haxe::io::Bytes _bytes, ::Dynamic _byteOffset, ::Dynamic _byteLength);
		static ::Dynamic fromBytes_dyn();

		static  ::haxe::io::Bytes toBytes( ::snow::api::buffers::ArrayBufferView this1);
		static ::Dynamic toBytes_dyn();

		static int get_length( ::snow::api::buffers::ArrayBufferView this1);
		static ::Dynamic get_length_dyn();

		static ::String toString( ::snow::api::buffers::ArrayBufferView this1);
		static ::Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _Uint16Array

#endif /* INCLUDED_snow_api_buffers__Uint16Array_Uint16Array_Impl_ */ 