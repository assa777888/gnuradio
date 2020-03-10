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

#include <gnuradio/filter/iir_filter_ccc.h>

void bind_iir_filter_ccc(py::module& m)
{
    using iir_filter_ccc    = gr::filter::iir_filter_ccc;


    py::class_<iir_filter_ccc,gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<iir_filter_ccc>>(m, "iir_filter_ccc")

        .def(py::init(&iir_filter_ccc::make),
           py::arg("fftaps"), 
           py::arg("fbtaps"), 
           py::arg("oldstyle") = true 
        )
        

        .def("set_taps",&iir_filter_ccc::set_taps,
            py::arg("fftaps"), 
            py::arg("fbtaps") 
        )
        ;


} 
