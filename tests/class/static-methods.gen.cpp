// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include "static-methods.gen.hpp"

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <type_traits>

namespace reflang
{


const int Class<MyClass>::FieldCount;
const int Class<MyClass>::StaticFieldCount;
const int Class<MyClass>::MethodCount;
const int Class<MyClass>::StaticMethodCount;

int Class<MyClass>::GetFieldCount() const
{
	return FieldCount;
}

Reference Class<MyClass>::GetField(const Reference& r, const std::string& name) const
{
	throw Exception("Invalid name passed to GetField().");
}

int Class<MyClass>::GetStaticFieldCount() const
{
	return StaticFieldCount;
}

Reference Class<MyClass>::GetStaticField(const std::string& name) const
{
	throw Exception("Invalid name passed to GetStaticField().");
}

int Class<MyClass>::GetMethodCount() const
{
	return MethodCount;
}

std::vector<std::unique_ptr<IMethod>> Class<MyClass>::GetMethod(const std::string& name) const
{
	std::vector<std::unique_ptr<IMethod>> results;

	return results;
}

int Class<MyClass>::GetStaticMethodCount() const
{
	return StaticMethodCount;
}

std::vector<std::unique_ptr<IFunction>> Class<MyClass>::GetStaticMethod(
		const std::string& name) const
{
	std::vector<std::unique_ptr<IFunction>> results;
	if (name == "Method0")
	{
		results.push_back(std::make_unique<Function<decltype(MyClass::Method0), MyClass::Method0>>());
	}
	else if (name == "Method1")
	{
		results.push_back(std::make_unique<Function<decltype(MyClass::Method1), MyClass::Method1>>());
	}
	else if (name == "RMethod0")
	{
		results.push_back(std::make_unique<Function<decltype(MyClass::RMethod0), MyClass::RMethod0>>());
	}
	else if (name == "RMethod1")
	{
		results.push_back(std::make_unique<Function<decltype(MyClass::RMethod1), MyClass::RMethod1>>());
	}

	return results;
}

static const std::string MyClass_name = "MyClass";

const std::string& Class<MyClass>::GetName() const
{
	return MyClass_name;
}

// MyClass static methods definitions.

int Function<void(), MyClass::Method0>::GetParameterCount() const
{
	return 0;
}

static const std::string MyClass__Method0_name = "MyClass::Method0";

const std::string& Function<void(), MyClass::Method0>::GetName() const
{
	return MyClass__Method0_name;
}

Object Function<void(), MyClass::Method0>::Invoke(const std::vector<Object>& args)
{
	if (args.size() != 0)
	{
		throw Exception("Invoke(): bad argument count.");
	}

	MyClass::Method0();
	return Object();
}

namespace
{
	// Object to auto-register MyClass::Method0.
	struct MyClass__Method0_registrar
	{
		MyClass__Method0_registrar()
		{
			::reflang::registry::internal::Register(
					std::make_unique<Function<void(), MyClass::Method0>>());
		}
	} MyClass__Method0_instance;
}

int Function<void(int), MyClass::Method1>::GetParameterCount() const
{
	return 1;
}

static const std::string MyClass__Method1_name = "MyClass::Method1";

const std::string& Function<void(int), MyClass::Method1>::GetName() const
{
	return MyClass__Method1_name;
}

Object Function<void(int), MyClass::Method1>::Invoke(const std::vector<Object>& args)
{
	if (args.size() != 1)
	{
		throw Exception("Invoke(): bad argument count.");
	}

	MyClass::Method1(args[0].GetT<std::decay_t<int>>());
	return Object();
}

namespace
{
	// Object to auto-register MyClass::Method1.
	struct MyClass__Method1_registrar
	{
		MyClass__Method1_registrar()
		{
			::reflang::registry::internal::Register(
					std::make_unique<Function<void(int), MyClass::Method1>>());
		}
	} MyClass__Method1_instance;
}

int Function<bool(), MyClass::RMethod0>::GetParameterCount() const
{
	return 0;
}

static const std::string MyClass__RMethod0_name = "MyClass::RMethod0";

const std::string& Function<bool(), MyClass::RMethod0>::GetName() const
{
	return MyClass__RMethod0_name;
}

Object Function<bool(), MyClass::RMethod0>::Invoke(const std::vector<Object>& args)
{
	if (args.size() != 0)
	{
		throw Exception("Invoke(): bad argument count.");
	}

	return Object(MyClass::RMethod0());
}

namespace
{
	// Object to auto-register MyClass::RMethod0.
	struct MyClass__RMethod0_registrar
	{
		MyClass__RMethod0_registrar()
		{
			::reflang::registry::internal::Register(
					std::make_unique<Function<bool(), MyClass::RMethod0>>());
		}
	} MyClass__RMethod0_instance;
}

int Function<bool(bool, int), MyClass::RMethod1>::GetParameterCount() const
{
	return 2;
}

static const std::string MyClass__RMethod1_name = "MyClass::RMethod1";

const std::string& Function<bool(bool, int), MyClass::RMethod1>::GetName() const
{
	return MyClass__RMethod1_name;
}

Object Function<bool(bool, int), MyClass::RMethod1>::Invoke(const std::vector<Object>& args)
{
	if (args.size() != 2)
	{
		throw Exception("Invoke(): bad argument count.");
	}

	return Object(MyClass::RMethod1(args[0].GetT<std::decay_t<bool>>(), args[1].GetT<std::decay_t<int>>()));
}

namespace
{
	// Object to auto-register MyClass::RMethod1.
	struct MyClass__RMethod1_registrar
	{
		MyClass__RMethod1_registrar()
		{
			::reflang::registry::internal::Register(
					std::make_unique<Function<bool(bool, int), MyClass::RMethod1>>());
		}
	} MyClass__RMethod1_instance;
}
// End of MyClass static methods definitions.


namespace
{
	// Object to auto-register MyClass.
	struct MyClass_registrar
	{
		MyClass_registrar()
		{
			::reflang::registry::internal::Register(
					std::make_unique<Class<MyClass>>());
		}
	} MyClass_instance;
}

}  // namespace reflang
