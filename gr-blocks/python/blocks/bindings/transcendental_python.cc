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

#include <gnuradio/blocks/transcendental.h>

void bind_transcendental(py::module& m)
{
    using transcendental    = gr::blocks::transcendental;


    py::class_<transcendental,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<transcendental>>(m, "transcendental")

        .def(py::init(&transcendental::make),
           py::arg("name"), 
           py::arg("type") = "float" 
        )
        ;


} 
