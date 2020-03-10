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

#include <gnuradio/dtv/dvbt2_framemapper_cc.h>

void bind_dvbt2_framemapper_cc(py::module& m)
{
    using dvbt2_framemapper_cc    = gr::dtv::dvbt2_framemapper_cc;


    py::class_<dvbt2_framemapper_cc,gr::block, gr::basic_block,
        std::shared_ptr<dvbt2_framemapper_cc>>(m, "dvbt2_framemapper_cc")

        .def(py::init(&dvbt2_framemapper_cc::make),
           py::arg("framesize"), 
           py::arg("rate"), 
           py::arg("constellation"), 
           py::arg("rotation"), 
           py::arg("fecblocks"), 
           py::arg("tiblocks"), 
           py::arg("carriermode"), 
           py::arg("fftsize"), 
           py::arg("guardinterval"), 
           py::arg("l1constellation"), 
           py::arg("pilotpattern"), 
           py::arg("t2frames"), 
           py::arg("numdatasyms"), 
           py::arg("paprmode"), 
           py::arg("version"), 
           py::arg("preamble"), 
           py::arg("inputmode"), 
           py::arg("reservedbiasbits"), 
           py::arg("l1scrambled"), 
           py::arg("inband") 
        )
        ;


} 
