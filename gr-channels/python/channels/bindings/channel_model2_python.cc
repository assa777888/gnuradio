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

#include <gnuradio/channels/channel_model2.h>

void bind_channel_model2(py::module& m)
{
    using channel_model2    = gr::channels::channel_model2;


    py::class_<channel_model2,gr::hier_block2,
        std::shared_ptr<channel_model2>>(m, "channel_model2")

        .def(py::init(&channel_model2::make),
           py::arg("noise_voltage") = 0., 
           py::arg("epsilon") = 1., 
           py::arg("taps") = std::vector<gr_complex>(1, 1), 
           py::arg("noise_seed") = 0, 
           py::arg("block_tags") = false 
        )
        

        .def("set_noise_voltage",&channel_model2::set_noise_voltage,
            py::arg("noise_voltage") 
        )
        .def("set_taps",&channel_model2::set_taps,
            py::arg("taps") 
        )
        .def("set_timing_offset",&channel_model2::set_timing_offset,
            py::arg("epsilon") 
        )
        .def("noise_voltage",&channel_model2::noise_voltage)
        .def("taps",&channel_model2::taps)
        .def("timing_offset",&channel_model2::timing_offset)
        ;


} 
