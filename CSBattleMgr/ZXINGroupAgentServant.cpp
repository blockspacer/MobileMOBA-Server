// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `ZXINGroupAgentServant.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//
#include "stdafx.h"
#ifndef _WINDOWS

#include "ZXINGroupAgentServant.h"
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

	const ::std::string __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name = "DoZxinGroupAgentInner";

}

namespace Ice
{
}

IceAsync::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner(::IceInternal::Incoming& in) :
::IceInternal::IncomingAsync(in)
{
}

void
	IceAsync::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner::ice_response(::Ice::Int __ret, const ::ZXIN::GrpAgentPack& resps)
{
	if(__validateResponse(true))
	{
		try
		{
			::IceInternal::BasicStream* __os = __startWriteParams(::Ice::DefaultFormat);
			__os->write(resps);
			__os->write(__ret);
			__endWriteParams(true);
		}
		catch(const ::Ice::Exception& __ex)
		{
			__exception(__ex);
			return;
		}
		__response();
	}
}
::IceProxy::Ice::Object* ::IceProxy::ZXIN::upCast(::IceProxy::ZXIN::ZXINGroupAgentServant* p) { return p; }

void
	::IceProxy::ZXIN::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::ZXIN::ZXINGroupAgentServant>& v)
{
	::Ice::ObjectPrx proxy;
	__is->read(proxy);
	if(!proxy)
	{
		v = 0;
	}
	else
	{
		v = new ::IceProxy::ZXIN::ZXINGroupAgentServant;
		v->__copyFrom(proxy);
	}
}

::Ice::Int
	IceProxy::ZXIN::ZXINGroupAgentServant::DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack& req, ::ZXIN::GrpAgentPack& resps, const ::Ice::Context* __ctx)
{
	::IceInternal::InvocationObserver __observer(this, __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, __ctx);
	int __cnt = 0;
	while(true)
	{
		::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
		try
		{
			__checkTwowayOnly(__ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name);
			__delBase = __getDelegate(false);
			::IceDelegate::ZXIN::ZXINGroupAgentServant* __del = dynamic_cast< ::IceDelegate::ZXIN::ZXINGroupAgentServant*>(__delBase.get());
			return __del->DoZxinGroupAgentInner(req, resps, __ctx, __observer);
		}
		catch(const ::IceInternal::LocalExceptionWrapper& __ex)
		{
			__handleExceptionWrapper(__delBase, __ex, __observer);
		}
		catch(const ::Ice::LocalException& __ex)
		{
			__handleException(__delBase, __ex, true, __cnt, __observer);
		}
	}
}

::Ice::AsyncResultPtr
	IceProxy::ZXIN::ZXINGroupAgentServant::begin_DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack& req, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
	__checkAsyncTwowayOnly(__ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name);
	::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, __del, __cookie);
	try
	{
		__result->__prepare(__ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, ::Ice::Normal, __ctx);
		::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
		__os->write(req);
		__result->__endWriteParams();
		__result->__send(true);
	}
	catch(const ::Ice::LocalException& __ex)
	{
		__result->__exceptionAsync(__ex);
	}
	return __result;
}

::Ice::Int
	IceProxy::ZXIN::ZXINGroupAgentServant::end_DoZxinGroupAgentInner(::ZXIN::GrpAgentPack& resps, const ::Ice::AsyncResultPtr& __result)
{
	::Ice::AsyncResult::__check(__result, this, __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name);
	::Ice::Int __ret;
	bool __ok = __result->__wait();
	try
	{
		if(!__ok)
		{
			try
			{
				__result->__throwUserException();
			}
			catch(const ::Ice::UserException& __ex)
			{
				throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
			}
		}
		::IceInternal::BasicStream* __is = __result->__startReadParams();
		__is->read(resps);
		__is->read(__ret);
		__result->__endReadParams();
		return __ret;
	}
	catch(const ::Ice::LocalException& ex)
	{
		__result->__getObserver().failed(ex.ice_name());
		throw;
	}
}

const ::std::string&
	IceProxy::ZXIN::ZXINGroupAgentServant::ice_staticId()
{
	return ::ZXIN::ZXINGroupAgentServant::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
	IceProxy::ZXIN::ZXINGroupAgentServant::__createDelegateM()
{
	return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::ZXIN::ZXINGroupAgentServant);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
	IceProxy::ZXIN::ZXINGroupAgentServant::__createDelegateD()
{
	return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::ZXIN::ZXINGroupAgentServant);
}

::IceProxy::Ice::Object*
	IceProxy::ZXIN::ZXINGroupAgentServant::__newInstance() const
{
	return new ZXINGroupAgentServant;
}

::Ice::Int
	IceDelegateM::ZXIN::ZXINGroupAgentServant::DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack& req, ::ZXIN::GrpAgentPack& resps, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
	::IceInternal::Outgoing __og(__handler.get(), __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, ::Ice::Normal, __context, __observer);
	try
	{
		::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
		__os->write(req);
		__og.endWriteParams();
	}
	catch(const ::Ice::LocalException& __ex)
	{
		__og.abort(__ex);
	}
	bool __ok = __og.invoke();
	::Ice::Int __ret;
	try
	{
		if(!__ok)
		{
			try
			{
				__og.throwUserException();
			}
			catch(const ::Ice::UserException& __ex)
			{
				::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
				throw __uue;
			}
		}
		::IceInternal::BasicStream* __is = __og.startReadParams();
		__is->read(resps);
		__is->read(__ret);
		__og.endReadParams();
		return __ret;
	}
	catch(const ::Ice::LocalException& __ex)
	{
		throw ::IceInternal::LocalExceptionWrapper(__ex, false);
	}
}

::Ice::Int
	IceDelegateD::ZXIN::ZXINGroupAgentServant::DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack&, ::ZXIN::GrpAgentPack&, const ::Ice::Context*, ::IceInternal::InvocationObserver&)
{
	throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
	return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Object* ZXIN::upCast(::ZXIN::ZXINGroupAgentServant* p) { return p; }

namespace
{
	const ::std::string __ZXIN__ZXINGroupAgentServant_ids[2] =
	{
		"::Ice::Object",
		"::ZXIN::ZXINGroupAgentServant"
	};

}

bool
	ZXIN::ZXINGroupAgentServant::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
	return ::std::binary_search(__ZXIN__ZXINGroupAgentServant_ids, __ZXIN__ZXINGroupAgentServant_ids + 2, _s);
}

::std::vector< ::std::string>
	ZXIN::ZXINGroupAgentServant::ice_ids(const ::Ice::Current&) const
{
	return ::std::vector< ::std::string>(&__ZXIN__ZXINGroupAgentServant_ids[0], &__ZXIN__ZXINGroupAgentServant_ids[2]);
}

const ::std::string&
	ZXIN::ZXINGroupAgentServant::ice_id(const ::Ice::Current&) const
{
	return __ZXIN__ZXINGroupAgentServant_ids[1];
}

const ::std::string&
	ZXIN::ZXINGroupAgentServant::ice_staticId()
{
	return __ZXIN__ZXINGroupAgentServant_ids[1];
}

::Ice::DispatchStatus
	ZXIN::ZXINGroupAgentServant::___DoZxinGroupAgentInner(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
	__checkMode(::Ice::Normal, __current.mode);
	::IceInternal::BasicStream* __is = __inS.startReadParams();
	::ZXIN::GrpAgentPack req;
	__is->read(req);
	__inS.endReadParams();
	::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInnerPtr __cb = new IceAsync::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner(__inS);
	try
	{
		DoZxinGroupAgentInner_async(__cb, req, __current);
	}
	catch(const ::std::exception& __ex)
	{
		__cb->ice_exception(__ex);
	}
	catch(...)
	{
		__cb->ice_exception();
	}
	return ::Ice::DispatchAsync;
}

namespace
{
	const ::std::string __ZXIN__ZXINGroupAgentServant_all[] =
	{
		"DoZxinGroupAgentInner",
		"ice_id",
		"ice_ids",
		"ice_isA",
		"ice_ping"
	};

}

::Ice::DispatchStatus
	ZXIN::ZXINGroupAgentServant::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
	::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__ZXIN__ZXINGroupAgentServant_all, __ZXIN__ZXINGroupAgentServant_all + 5, current.operation);
	if(r.first == r.second)
	{
		throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
	}

	switch(r.first - __ZXIN__ZXINGroupAgentServant_all)
	{
	case 0:
		{
			return ___DoZxinGroupAgentInner(in, current);
		}
	case 1:
		{
			return ___ice_id(in, current);
		}
	case 2:
		{
			return ___ice_ids(in, current);
		}
	case 3:
		{
			return ___ice_isA(in, current);
		}
	case 4:
		{
			return ___ice_ping(in, current);
		}
	}

	assert(false);
	throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
	ZXIN::ZXINGroupAgentServant::__writeImpl(::IceInternal::BasicStream* __os) const
{
	__os->startWriteSlice(ice_staticId(), -1, true);
	__os->endWriteSlice();
}

void
	ZXIN::ZXINGroupAgentServant::__readImpl(::IceInternal::BasicStream* __is)
{
	__is->startReadSlice();
	__is->endReadSlice();
}

void 
	ZXIN::__patch(ZXINGroupAgentServantPtr& handle, const ::Ice::ObjectPtr& v)
{
	handle = ::ZXIN::ZXINGroupAgentServantPtr::dynamicCast(v);
	if(v && !handle)
	{
		IceInternal::Ex::throwUOE(::ZXIN::ZXINGroupAgentServant::ice_staticId(), v);
	}
}
#else

#include "ZXINGroupAgentServant.h"
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

	const ::std::string __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name = "DoZxinGroupAgentInner";

}

namespace Ice
{
}

IceAsync::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner(::IceInternal::Incoming& in) :
::IceInternal::IncomingAsync(in)
{
}

void
	IceAsync::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner::ice_response(::Ice::Int __ret, const ::ZXIN::GrpAgentPack& resps)
{
	if(__validateResponse(true))
	{
		try
		{
			::IceInternal::BasicStream* __os = __startWriteParams(::Ice::DefaultFormat);
			__os->write(resps);
			__os->write(__ret);
			__endWriteParams(true);
		}
		catch(const ::Ice::Exception& __ex)
		{
			__exception(__ex);
			return;
		}
		__response();
	}
}
::IceProxy::Ice::Object* ::IceProxy::ZXIN::upCast(::IceProxy::ZXIN::ZXINGroupAgentServant* p) { return p; }

void
	::IceProxy::ZXIN::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::ZXIN::ZXINGroupAgentServant>& v)
{
	::Ice::ObjectPrx proxy;
	__is->read(proxy);
	if(!proxy)
	{
		v = 0;
	}
	else
	{
		v = new ::IceProxy::ZXIN::ZXINGroupAgentServant;
		v->__copyFrom(proxy);
	}
}

::Ice::Int
	IceProxy::ZXIN::ZXINGroupAgentServant::DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack& req, ::ZXIN::GrpAgentPack& resps, const ::Ice::Context* __ctx)
{
	::IceInternal::InvocationObserver __observer(this, __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, __ctx);
	int __cnt = 0;
	while(true)
	{
		::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
		try
		{
			__checkTwowayOnly(__ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name);
			__delBase = __getDelegate(false);
			::IceDelegate::ZXIN::ZXINGroupAgentServant* __del = dynamic_cast< ::IceDelegate::ZXIN::ZXINGroupAgentServant*>(__delBase.get());
			return __del->DoZxinGroupAgentInner(req, resps, __ctx, __observer);
		}
		catch(const ::IceInternal::LocalExceptionWrapper& __ex)
		{
			__handleExceptionWrapper(__delBase, __ex, __observer);
		}
		catch(const ::Ice::LocalException& __ex)
		{
			__handleException(__delBase, __ex, true, __cnt, __observer);
		}
	}
}

::Ice::AsyncResultPtr
	IceProxy::ZXIN::ZXINGroupAgentServant::begin_DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack& req, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
	__checkAsyncTwowayOnly(__ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name);
	::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, __del, __cookie);
	try
	{
		__result->__prepare(__ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, ::Ice::Normal, __ctx);
		::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
		__os->write(req);
		__result->__endWriteParams();
		__result->__send(true);
	}
	catch(const ::Ice::LocalException& __ex)
	{
		__result->__exceptionAsync(__ex);
	}
	return __result;
}

::Ice::Int
	IceProxy::ZXIN::ZXINGroupAgentServant::end_DoZxinGroupAgentInner(::ZXIN::GrpAgentPack& resps, const ::Ice::AsyncResultPtr& __result)
{
	::Ice::AsyncResult::__check(__result, this, __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name);
	::Ice::Int __ret;
	bool __ok = __result->__wait();
	try
	{
		if(!__ok)
		{
			try
			{
				__result->__throwUserException();
			}
			catch(const ::Ice::UserException& __ex)
			{
				throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
			}
		}
		::IceInternal::BasicStream* __is = __result->__startReadParams();
		__is->read(resps);
		__is->read(__ret);
		__result->__endReadParams();
		return __ret;
	}
	catch(const ::Ice::LocalException& ex)
	{
		__result->__getObserver().failed(ex.ice_name());
		throw;
	}
}

const ::std::string&
	IceProxy::ZXIN::ZXINGroupAgentServant::ice_staticId()
{
	return ::ZXIN::ZXINGroupAgentServant::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
	IceProxy::ZXIN::ZXINGroupAgentServant::__createDelegateM()
{
	return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::ZXIN::ZXINGroupAgentServant);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
	IceProxy::ZXIN::ZXINGroupAgentServant::__createDelegateD()
{
	return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::ZXIN::ZXINGroupAgentServant);
}

::IceProxy::Ice::Object*
	IceProxy::ZXIN::ZXINGroupAgentServant::__newInstance() const
{
	return new ZXINGroupAgentServant;
}

::Ice::Int
	IceDelegateM::ZXIN::ZXINGroupAgentServant::DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack& req, ::ZXIN::GrpAgentPack& resps, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
	::IceInternal::Outgoing __og(__handler.get(), __ZXIN__ZXINGroupAgentServant__DoZxinGroupAgentInner_name, ::Ice::Normal, __context, __observer);
	try
	{
		::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
		__os->write(req);
		__og.endWriteParams();
	}
	catch(const ::Ice::LocalException& __ex)
	{
		__og.abort(__ex);
	}
	bool __ok = __og.invoke();
	::Ice::Int __ret;
	try
	{
		if(!__ok)
		{
			try
			{
				__og.throwUserException();
			}
			catch(const ::Ice::UserException& __ex)
			{
				::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
				throw __uue;
			}
		}
		::IceInternal::BasicStream* __is = __og.startReadParams();
		__is->read(resps);
		__is->read(__ret);
		__og.endReadParams();
		return __ret;
	}
	catch(const ::Ice::LocalException& __ex)
	{
		throw ::IceInternal::LocalExceptionWrapper(__ex, false);
	}
}

::Ice::Int
	IceDelegateD::ZXIN::ZXINGroupAgentServant::DoZxinGroupAgentInner(const ::ZXIN::GrpAgentPack&, ::ZXIN::GrpAgentPack&, const ::Ice::Context*, ::IceInternal::InvocationObserver&)
{
	throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
	return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Object* ZXIN::upCast(::ZXIN::ZXINGroupAgentServant* p) { return p; }

namespace
{
	const ::std::string __ZXIN__ZXINGroupAgentServant_ids[2] =
	{
		"::Ice::Object",
		"::ZXIN::ZXINGroupAgentServant"
	};

}

bool
	ZXIN::ZXINGroupAgentServant::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
	return ::std::binary_search(__ZXIN__ZXINGroupAgentServant_ids, __ZXIN__ZXINGroupAgentServant_ids + 2, _s);
}

::std::vector< ::std::string>
	ZXIN::ZXINGroupAgentServant::ice_ids(const ::Ice::Current&) const
{
	return ::std::vector< ::std::string>(&__ZXIN__ZXINGroupAgentServant_ids[0], &__ZXIN__ZXINGroupAgentServant_ids[2]);
}

const ::std::string&
	ZXIN::ZXINGroupAgentServant::ice_id(const ::Ice::Current&) const
{
	return __ZXIN__ZXINGroupAgentServant_ids[1];
}

const ::std::string&
	ZXIN::ZXINGroupAgentServant::ice_staticId()
{
	return __ZXIN__ZXINGroupAgentServant_ids[1];
}

::Ice::DispatchStatus
	ZXIN::ZXINGroupAgentServant::___DoZxinGroupAgentInner(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
	__checkMode(::Ice::Normal, __current.mode);
	::IceInternal::BasicStream* __is = __inS.startReadParams();
	::ZXIN::GrpAgentPack req;
	__is->read(req);
	__inS.endReadParams();
	::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInnerPtr __cb = new IceAsync::ZXIN::AMD_ZXINGroupAgentServant_DoZxinGroupAgentInner(__inS);
	try
	{
		DoZxinGroupAgentInner_async(__cb, req, __current);
	}
	catch(const ::std::exception& __ex)
	{
		__cb->ice_exception(__ex);
	}
	catch(...)
	{
		__cb->ice_exception();
	}
	return ::Ice::DispatchAsync;
}

namespace
{
	const ::std::string __ZXIN__ZXINGroupAgentServant_all[] =
	{
		"DoZxinGroupAgentInner",
		"ice_id",
		"ice_ids",
		"ice_isA",
		"ice_ping"
	};

}

::Ice::DispatchStatus
	ZXIN::ZXINGroupAgentServant::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
	::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__ZXIN__ZXINGroupAgentServant_all, __ZXIN__ZXINGroupAgentServant_all + 5, current.operation);
	if(r.first == r.second)
	{
		throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
	}

	switch(r.first - __ZXIN__ZXINGroupAgentServant_all)
	{
	case 0:
		{
			return ___DoZxinGroupAgentInner(in, current);
		}
	case 1:
		{
			return ___ice_id(in, current);
		}
	case 2:
		{
			return ___ice_ids(in, current);
		}
	case 3:
		{
			return ___ice_isA(in, current);
		}
	case 4:
		{
			return ___ice_ping(in, current);
		}
	}

	assert(false);
	throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
	ZXIN::ZXINGroupAgentServant::__writeImpl(::IceInternal::BasicStream* __os) const
{
	__os->startWriteSlice(ice_staticId(), -1, true);
	__os->endWriteSlice();
}

void
	ZXIN::ZXINGroupAgentServant::__readImpl(::IceInternal::BasicStream* __is)
{
	__is->startReadSlice();
	__is->endReadSlice();
}

void 
	ZXIN::__patch(ZXINGroupAgentServantPtr& handle, const ::Ice::ObjectPtr& v)
{
	handle = ::ZXIN::ZXINGroupAgentServantPtr::dynamicCast(v);
	if(v && !handle)
	{
		IceInternal::Ex::throwUOE(::ZXIN::ZXINGroupAgentServant::ice_staticId(), v);
	}
}

#endif

