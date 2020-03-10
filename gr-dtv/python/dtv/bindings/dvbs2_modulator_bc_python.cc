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

#include <gnuradio/dtv/dvbs2_modulator_bc.h>

void bind_dvbs2_modulator_bc(py::module& m)
{
    using dvbs2_modulator_bc    = gr::dtv::dvbs2_modulator_bc;


    py::class_<dvbs2_modulator_bc,gr::block, gr::basic_block,
        std::shared_ptr<dvbs2_modulator_bc>>(m, "dvbs2_modulator_bc")

        .def(py::init(&dvbs2_modulator_bc::make),
           py::arg("framesize"), 
           py::arg("rate"), 
           py::arg("constellation"), 
           py::arg("interpolation") 
        )
        ;


} 
