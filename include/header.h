#ifndef HEADER_H_
# define HEADER_H_

# include <string>

struct noncopyable
{
  template <typename... Args>
  noncopyable(Args&&...) = delete;
  template <typename... Args>
  noncopyable& operator=(Args&&...) = delete;
  ~noncopyable() = delete;
};

enum class SingleEnum
  {
    Value
  };

template <SingleEnum = SingleEnum::Value>
struct DoNotUseThisDirectly : noncopyable
{
  static const std::string var1;
};

template <SingleEnum E>
const std::string DoNotUseThisDirectly<E>::var1 = "some text";

typedef DoNotUseThisDirectly<> FakeNamespace;

#endif	/* !HEADER_H_ */
