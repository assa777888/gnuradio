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

#include <gnuradio/blocks/copy.h>

void bind_copy(py::module& m)
{
    using copy    = gr::blocks::copy;


    py::class_<copy,gr::block, gr::basic_block,
        std::shared_ptr<copy>>(m, "copy")

        .def(py::init(&copy::make),
           py::arg("itemsize") 
        )
        

        .def("set_enabled",&copy::set_enabled,
            py::arg("enable") 
        )
        .def("enabled",&copy::enabled)
        ;


} 
