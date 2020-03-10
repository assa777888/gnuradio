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

#include <gnuradio/digital/correlate_access_code_ff_ts.h>

void bind_correlate_access_code_ff_ts(py::module& m)
{
    using correlate_access_code_ff_ts    = gr::digital::correlate_access_code_ff_ts;


    py::class_<correlate_access_code_ff_ts,gr::block, gr::basic_block,
        std::shared_ptr<correlate_access_code_ff_ts>>(m, "correlate_access_code_ff_ts")

        .def(py::init(&correlate_access_code_ff_ts::make),
           py::arg("access_code"), 
           py::arg("threshold"), 
           py::arg("tag_name") 
        )
        

        .def("set_access_code",&correlate_access_code_ff_ts::set_access_code,
            py::arg("access_code") 
        )
        .def("access_code",&correlate_access_code_ff_ts::access_code)
        ;


} 
