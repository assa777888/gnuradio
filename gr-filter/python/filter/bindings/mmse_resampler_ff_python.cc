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

#include <gnuradio/filter/mmse_resampler_ff.h>

void bind_mmse_resampler_ff(py::module& m)
{
    using mmse_resampler_ff    = gr::filter::mmse_resampler_ff;


    py::class_<mmse_resampler_ff,gr::block, gr::basic_block,
        std::shared_ptr<mmse_resampler_ff>>(m, "mmse_resampler_ff")

        .def(py::init(&mmse_resampler_ff::make),
           py::arg("phase_shift"), 
           py::arg("resamp_ratio") 
        )
        

        .def("mu",&mmse_resampler_ff::mu)
        .def("resamp_ratio",&mmse_resampler_ff::resamp_ratio)
        .def("set_mu",&mmse_resampler_ff::set_mu,
            py::arg("mu") 
        )
        .def("set_resamp_ratio",&mmse_resampler_ff::set_resamp_ratio,
            py::arg("resamp_ratio") 
        )
        ;


} 
