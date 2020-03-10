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

#include <gnuradio/blocks/vector_insert.h>

template<typename T>
void bind_vector_insert_template(py::module& m, const char *classname)
{
    using vector_insert      = gr::blocks::vector_insert<T>;

    py::class_<vector_insert, gr::block, gr::basic_block, std::shared_ptr<vector_insert>>(m, classname)
        .def(py::init(&gr::blocks::vector_insert<T>::make),
            py::arg("data"),
            py::arg("periodicity"),
            py::arg("offset") = 0
        )
        .def("rewind", &vector_insert::rewind)
        .def("set_data", &vector_insert::set_data,
            py::arg("set_data")
        )
        ;

} 

void bind_vector_insert(py::module& m)
{
    bind_vector_insert_template<std::uint8_t>(m,"vector_insert_b");
    bind_vector_insert_template<std::int16_t>(m,"vector_insert_s");
    bind_vector_insert_template<std::int32_t>(m,"vector_insert_i");
    bind_vector_insert_template<float>(m,"vector_insert_f");
    bind_vector_insert_template<gr_complex>(m,"vector_insert_c");
} 

