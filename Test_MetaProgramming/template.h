#ifndef TEMPLATE_H
#define TEMPLATE_H

template <unsigned N>
struct factorial{
    static const unsigned value = N * factorial<N - 1>::value;
};
template<>
struct factorial<0>{
    static const unsigned value = 1;
};

#endif // TEMPLATE_H
