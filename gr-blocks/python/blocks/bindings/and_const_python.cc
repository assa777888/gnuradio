/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/and_const.h>

template<typename T>
void bind_and_const_template(py::module& m, const char *classname)
{
    using and_const      = gr::blocks::and_const<T>;

    py::class_<and_const, gr::sync_block, gr::block, gr::basic_block, std::shared_ptr<and_const>>(m, classname)
        .def(py::init(&gr::blocks::and_const<T>::make),
            py::arg("k"))
            
        .def("k",&and_const::k)
        .def("set_k",&and_const::set_k, py::arg("k"))
        ;
} 

void bind_and_const(py::module& m)
{
    bind_and_const_template<std::uint8_t>(m,"and_const_bb");
    bind_and_const_template<std::int16_t>(m,"and_const_ss");
    bind_and_const_template<std::int32_t>(m,"and_const_ii");
} 


