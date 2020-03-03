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

#include <gnuradio/dtv/dvbt_map.h>

void bind_dvbt_map(py::module& m)
{
    using dvbt_map    = gr::dtv::dvbt_map;


    py::class_<dvbt_map,gr::block,
        std::shared_ptr<dvbt_map>>(m, "dvbt_map")

        .def(py::init(&dvbt_map::make),
           py::arg("nsize"), 
           py::arg("constellation"), 
           py::arg("hierarchy"), 
           py::arg("transmission"), 
           py::arg("gain") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<dvbt_map> p){
            return p->to_basic_block();
        })
        ;


} 