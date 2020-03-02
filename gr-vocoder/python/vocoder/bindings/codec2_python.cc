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

#include <gnuradio/vocoder/codec2.h>

void bind_codec2(py::module& m)
{
    using codec2    = gr::vocoder::codec2;


    py::class_<codec2,
        std::shared_ptr<codec2>>(m, "codec2")
        ;

    py::enum_<gr::vocoder::codec2::bit_rate>(m,"bit_rate")
        .value("MODE_3200", gr::vocoder::codec2::MODE_3200) // 0
        .value("MODE_2400", gr::vocoder::codec2::MODE_2400) // 1
        .value("MODE_1600", gr::vocoder::codec2::MODE_1600) // 2
        .value("MODE_1400", gr::vocoder::codec2::MODE_1400) // 3
        .value("MODE_1300", gr::vocoder::codec2::MODE_1300) // 4
        .value("MODE_1200", gr::vocoder::codec2::MODE_1200) // 5
        .value("MODE_700", gr::vocoder::codec2::MODE_700) // 6
        .value("MODE_700B", gr::vocoder::codec2::MODE_700B) // 7
        .value("MODE_700C", gr::vocoder::codec2::MODE_700C) // 8
        .value("MODE_WB", gr::vocoder::codec2::MODE_WB) // 9
        .export_values()
    ;

} 
