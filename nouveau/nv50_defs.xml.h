#ifndef NV50_DEFS_XML
#define NV50_DEFS_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://github.com/envytools/envytools/
git clone https://github.com/envytools/envytools.git

The rules-ng-ng source files this header was generated from are:
- /home/michael/src/envytools/rnndb/root.xml                     (    514 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/copyright.xml                (   6452 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv_mmio.xml                  (   7086 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nvchipsets.xml               (   4092 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pmc.xml                  (  11084 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pbus.xml                 (  19828 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv50_defs.xml                (  16877 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv50_vm.xml           (   9860 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv_vga.xml           (  13113 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pci.xml                  (  17502 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv01_pfifo.xml          (  10607 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv04_pfifo.xml          (  24125 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv50_pfifo.xml          (  23242 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nvc0_pfifo.xml          (  26418 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_vm.xml           (   8573 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nv40_pclock.xml           (   1171 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nv50_pclock.xml           (  16532 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nva3_pclock.xml           (   4463 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv10_pvideo.xml      (    451 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/ptimer.xml               (   2287 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv10_pcounter.xml            (   5914 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv40_pcounter.xml            (   9692 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pmpeg.xml           (  12766 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pvpe.xml            (    704 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/mpeg_fifo.xml       (   2622 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv_object.xml           (  14664 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pme.xml             (   5124 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv17_ptv.xml         (    458 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pnvio.xml                 (  32034 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/pvp1.xml            (   2111 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/pvp2.xml            (   1618 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/xtensa.xml          (   5386 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/ptherm.xml                (  32292 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pfuse.xml                (    803 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/punits.xml               (   4193 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pvld.xml            (  13233 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/falcon.xml                   (  16884 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/falcon_crypt.xml             (   3446 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pvdec.xml           (  14115 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pppp.xml            (   8830 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv_defs.xml                  (   4399 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp3/pcrypt3.xml         (   1003 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv84_punk089.xml             (    449 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv03_prmvio.xml      (    654 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv01_pdma.xml         (   5345 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv03_pfb.xml          (   4511 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv10_pfb.xml          (  25274 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv_pfb.xml            (   1135 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pffb.xml         (   2707 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pstraps.xml               (   8077 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/pcrypt2.xml         (   3578 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/pbsp.xml            (  10624 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/pcopy.xml               (   7843 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nva3_pcodec.xml      (    448 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nva3_pkfuse.xml      (    447 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/pdaemon.xml               (  17194 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pbfb.xml         (   2898 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/pibus.xml                (   8356 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/pm/nvc0_pclock.xml           (   7279 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pp2p.xml         (   1946 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pxbar.xml        (   1156 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nvc0_pmfb.xml         (   3631 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nvc0_pcounter.xml            (  12613 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/pvcomp.xml              (   8682 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/pvenc.xml               (   1233 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nvd9_punk1c3.xml     (    978 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pmedia.xml                (    432 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/nv01_paudio.xml              (   1863 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/extdev/ad1848.xml            (   5260 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv01_pgraph.xml        (  14241 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv01_2d.xml            (  36779 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv03_pgraph.xml        (   4011 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv04_pgraph.xml        (  11363 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_pgraph.xml        (  54643 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/pgraph.xml (  23719 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/ctxctl.xml (  12648 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/gpc.xml    (   7276 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/tpc.xml    (  15311 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/ppc.xml    (   1170 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_pgraph/rop.xml    (   2143 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv03_pdma.xml          (   2293 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv01_pfb.xml         (   4033 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv03_pcrtc.xml       (   1114 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/memory/nv01_pram.xml         (   1241 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/pchipid.xml               (    494 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv01_pdac.xml        (   4639 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/io/peeprom.xml               (    703 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv03_pramdac.xml     (   4455 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv50_pdisplay.xml    (  38497 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/bus/prm.xml                  (   5098 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/display/nv_evo.xml           (  10560 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nv_objects.xml          (   1054 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv_m2mf.xml            (   2701 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_m2mf.xml          (   2788 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv04_dvd.xml           (   3005 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv03_3d.xml            (   5214 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv04_3d.xml            (  17770 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv_3ddefs.xml          (  16394 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv10_3d.xml            (  18441 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv20_3d.xml            (  21106 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv30-40_3d.xml         (  32461 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_2d.xml            (  11441 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_3d.xml            (  65928 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_compute.xml       (  14047 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_3d.xml            (  59735 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nve4_p2mf.xml          (   2378 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_compute.xml       (  11150 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nve4_compute.xml       (  10179 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/me_fifo.xml         (   1690 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/vp1_fifo.xml        (    675 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vp2/crypt2_fifo.xml     (   2077 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/fifo/nve4_copy.xml           (   3928 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nv50_texture.xml       (   8648 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/graph/nvc0_shaders.xml       (   7409 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/vdec/vpe/mpeg_cmd.xml        (   7682 bytes, from 2014-01-29 23:36:47)
- /home/michael/src/envytools/rnndb/extdev/adt7473.xml           (  11411 bytes, from 2014-01-29 23:36:47)

Copyright (C) 2006-2014 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#define NV50_VSTATUS_IDLE					0x00000000
#define NV50_VSTATUS_BUSY					0x00000001
#define NV50_VSTATUS_UNK2					0x00000002
#define NV50_VSTATUS_WAITING					0x00000003
#define NV50_VSTATUS_BLOCKED					0x00000005
#define NV50_VSTATUS_FAULTED					0x00000006
#define NV50_VSTATUS_PAUSED					0x00000007
#define NV50_SURFACE_FORMAT_BITMAP				0x0000001c
#define NV50_SURFACE_FORMAT_UNK1D				0x0000001d
#define NV50_SURFACE_FORMAT_RGBA32_FLOAT			0x000000c0
#define NV50_SURFACE_FORMAT_RGBA32_SINT				0x000000c1
#define NV50_SURFACE_FORMAT_RGBA32_UINT				0x000000c2
#define NV50_SURFACE_FORMAT_RGBX32_FLOAT			0x000000c3
#define NV50_SURFACE_FORMAT_RGBX32_SINT				0x000000c4
#define NV50_SURFACE_FORMAT_RGBX32_UINT				0x000000c5
#define NV50_SURFACE_FORMAT_RGBA16_UNORM			0x000000c6
#define NV50_SURFACE_FORMAT_RGBA16_SNORM			0x000000c7
#define NV50_SURFACE_FORMAT_RGBA16_SINT				0x000000c8
#define NV50_SURFACE_FORMAT_RGBA16_UINT				0x000000c9
#define NV50_SURFACE_FORMAT_RGBA16_FLOAT			0x000000ca
#define NV50_SURFACE_FORMAT_RG32_FLOAT				0x000000cb
#define NV50_SURFACE_FORMAT_RG32_SINT				0x000000cc
#define NV50_SURFACE_FORMAT_RG32_UINT				0x000000cd
#define NV50_SURFACE_FORMAT_RGBX16_FLOAT			0x000000ce
#define NV50_SURFACE_FORMAT_BGRA8_UNORM				0x000000cf
#define NV50_SURFACE_FORMAT_BGRA8_SRGB				0x000000d0
#define NV50_SURFACE_FORMAT_RGB10_A2_UNORM			0x000000d1
#define NV50_SURFACE_FORMAT_RGB10_A2_UINT			0x000000d2
#define NV50_SURFACE_FORMAT_RGBA8_UNORM				0x000000d5
#define NV50_SURFACE_FORMAT_RGBA8_SRGB				0x000000d6
#define NV50_SURFACE_FORMAT_RGBA8_SNORM				0x000000d7
#define NV50_SURFACE_FORMAT_RGBA8_SINT				0x000000d8
#define NV50_SURFACE_FORMAT_RGBA8_UINT				0x000000d9
#define NV50_SURFACE_FORMAT_RG16_UNORM				0x000000da
#define NV50_SURFACE_FORMAT_RG16_SNORM				0x000000db
#define NV50_SURFACE_FORMAT_RG16_SINT				0x000000dc
#define NV50_SURFACE_FORMAT_RG16_UINT				0x000000dd
#define NV50_SURFACE_FORMAT_RG16_FLOAT				0x000000de
#define NV50_SURFACE_FORMAT_BGR10_A2_UNORM			0x000000df
#define NV50_SURFACE_FORMAT_R11G11B10_FLOAT			0x000000e0
#define NV50_SURFACE_FORMAT_R32_SINT				0x000000e3
#define NV50_SURFACE_FORMAT_R32_UINT				0x000000e4
#define NV50_SURFACE_FORMAT_R32_FLOAT				0x000000e5
#define NV50_SURFACE_FORMAT_BGRX8_UNORM				0x000000e6
#define NV50_SURFACE_FORMAT_BGRX8_SRGB				0x000000e7
#define NV50_SURFACE_FORMAT_B5G6R5_UNORM			0x000000e8
#define NV50_SURFACE_FORMAT_BGR5_A1_UNORM			0x000000e9
#define NV50_SURFACE_FORMAT_RG8_UNORM				0x000000ea
#define NV50_SURFACE_FORMAT_RG8_SNORM				0x000000eb
#define NV50_SURFACE_FORMAT_RG8_SINT				0x000000ec
#define NV50_SURFACE_FORMAT_RG8_UINT				0x000000ed
#define NV50_SURFACE_FORMAT_R16_UNORM				0x000000ee
#define NV50_SURFACE_FORMAT_R16_SNORM				0x000000ef
#define NV50_SURFACE_FORMAT_R16_SINT				0x000000f0
#define NV50_SURFACE_FORMAT_R16_UINT				0x000000f1
#define NV50_SURFACE_FORMAT_R16_FLOAT				0x000000f2
#define NV50_SURFACE_FORMAT_R8_UNORM				0x000000f3
#define NV50_SURFACE_FORMAT_R8_SNORM				0x000000f4
#define NV50_SURFACE_FORMAT_R8_SINT				0x000000f5
#define NV50_SURFACE_FORMAT_R8_UINT				0x000000f6
#define NV50_SURFACE_FORMAT_A8_UNORM				0x000000f7
#define NV50_SURFACE_FORMAT_BGR5_X1_UNORM			0x000000f8
#define NV50_SURFACE_FORMAT_RGBX8_UNORM				0x000000f9
#define NV50_SURFACE_FORMAT_RGBX8_SRGB				0x000000fa
#define NV50_SURFACE_FORMAT_BGR5_X1_UNORM_UNKFB			0x000000fb
#define NV50_SURFACE_FORMAT_BGR5_X1_UNORM_UNKFC			0x000000fc
#define NV50_SURFACE_FORMAT_BGRX8_UNORM_UNKFD			0x000000fd
#define NV50_SURFACE_FORMAT_BGRX8_UNORM_UNKFE			0x000000fe
#define NV50_SURFACE_FORMAT_Y32_UINT_UNKFF			0x000000ff
#define NV50_ZETA_FORMAT_Z32_FLOAT				0x0000000a
#define NV50_ZETA_FORMAT_Z16_UNORM				0x00000013
#define NV50_ZETA_FORMAT_S8_Z24_UNORM				0x00000014
#define NV50_ZETA_FORMAT_Z24_X8_UNORM				0x00000015
#define NV50_ZETA_FORMAT_Z24_S8_UNORM				0x00000016
#define NV50_ZETA_FORMAT_Z24_C8_UNORM				0x00000018
#define NV50_ZETA_FORMAT_Z32_S8_X24_FLOAT			0x00000019
#define NV50_ZETA_FORMAT_Z24_X8_S8_C8_X16_UNORM			0x0000001d
#define NV50_ZETA_FORMAT_Z32_X8_C8_X16_FLOAT			0x0000001e
#define NV50_ZETA_FORMAT_Z32_S8_C8_X16_FLOAT			0x0000001f
#define NVE4_IMAGE_FORMAT_RGBA32_FLOAT				0x00000002
#define NVE4_IMAGE_FORMAT_RGBA32_SINT				0x00000003
#define NVE4_IMAGE_FORMAT_RGBA32_UINT				0x00000004
#define NVE4_IMAGE_FORMAT_RGBA16_UNORM				0x00000008
#define NVE4_IMAGE_FORMAT_RGBA16_SNORM				0x00000009
#define NVE4_IMAGE_FORMAT_RGBA16_SINT				0x0000000a
#define NVE4_IMAGE_FORMAT_RGBA16_UINT				0x0000000b
#define NVE4_IMAGE_FORMAT_RGBA16_FLOAT				0x0000000c
#define NVE4_IMAGE_FORMAT_RG32_FLOAT				0x0000000d
#define NVE4_IMAGE_FORMAT_RG32_SINT				0x0000000e
#define NVE4_IMAGE_FORMAT_RG32_UINT				0x0000000f
#define NVE4_IMAGE_FORMAT_RGB10_A2_UNORM			0x00000013
#define NVE4_IMAGE_FORMAT_RGB10_A2_UINT				0x00000015
#define NVE4_IMAGE_FORMAT_RGBA8_UNORM				0x00000018
#define NVE4_IMAGE_FORMAT_RGBA8_SNORM				0x0000001a
#define NVE4_IMAGE_FORMAT_RGBA8_SINT				0x0000001b
#define NVE4_IMAGE_FORMAT_RGBA8_UINT				0x0000001c
#define NVE4_IMAGE_FORMAT_RG16_UNORM				0x0000001d
#define NVE4_IMAGE_FORMAT_RG16_SNORM				0x0000001e
#define NVE4_IMAGE_FORMAT_RG16_SINT				0x0000001f
#define NVE4_IMAGE_FORMAT_RG16_UINT				0x00000020
#define NVE4_IMAGE_FORMAT_RG16_FLOAT				0x00000021
#define NVE4_IMAGE_FORMAT_R11G11B10_FLOAT			0x00000024
#define NVE4_IMAGE_FORMAT_R32_SINT				0x00000027
#define NVE4_IMAGE_FORMAT_R32_UINT				0x00000028
#define NVE4_IMAGE_FORMAT_R32_FLOAT				0x00000029
#define NVE4_IMAGE_FORMAT_RG8_UNORM				0x0000002e
#define NVE4_IMAGE_FORMAT_RG8_SNORM				0x0000002f
#define NVE4_IMAGE_FORMAT_RG8_SINT				0x00000030
#define NVE4_IMAGE_FORMAT_RG8_UINT				0x00000031
#define NVE4_IMAGE_FORMAT_R16_UNORM				0x00000032
#define NVE4_IMAGE_FORMAT_R16_SNORM				0x00000033
#define NVE4_IMAGE_FORMAT_R16_SINT				0x00000034
#define NVE4_IMAGE_FORMAT_R16_UINT				0x00000035
#define NVE4_IMAGE_FORMAT_R16_FLOAT				0x00000036
#define NVE4_IMAGE_FORMAT_R8_UNORM				0x00000037
#define NVE4_IMAGE_FORMAT_R8_SNORM				0x00000038
#define NVE4_IMAGE_FORMAT_R8_SINT				0x00000039
#define NVE4_IMAGE_FORMAT_R8_UINT				0x0000003a
#define NV50_PGRAPH_DATA_ERROR_INVALID_OPERATION		0x00000003
#define NV50_PGRAPH_DATA_ERROR_INVALID_VALUE			0x00000004
#define NV50_PGRAPH_DATA_ERROR_INVALID_ENUM			0x00000005
#define NV50_PGRAPH_DATA_ERROR_INVALID_OBJECT			0x00000008
#define NV50_PGRAPH_DATA_ERROR_READ_ONLY_OBJECT			0x00000009
#define NV50_PGRAPH_DATA_ERROR_SUPERVISOR_OBJECT		0x0000000a
#define NV50_PGRAPH_DATA_ERROR_INVALID_ADDRESS_ALIGNMENT	0x0000000b
#define NV50_PGRAPH_DATA_ERROR_INVALID_BITFIELD			0x0000000c
#define NV50_PGRAPH_DATA_ERROR_BEGIN_END_ACTIVE			0x0000000d
#define NV50_PGRAPH_DATA_ERROR_SEMANTIC_COLOR_BACK_OVER_LIMIT	0x0000000e
#define NV50_PGRAPH_DATA_ERROR_VIEWPORT_ID_NEEDS_GP		0x0000000f
#define NV50_PGRAPH_DATA_ERROR_RT_DOUBLE_BIND			0x00000010
#define NV50_PGRAPH_DATA_ERROR_RT_TYPES_MISMATCH		0x00000011
#define NV50_PGRAPH_DATA_ERROR_RT_LINEAR_WITH_ZETA		0x00000012
#define NV50_PGRAPH_DATA_ERROR_FP_TOO_FEW_REGS			0x00000015
#define NV50_PGRAPH_DATA_ERROR_ZETA_FORMAT_CSAA_MISMATCH	0x00000016
#define NV50_PGRAPH_DATA_ERROR_RT_LINEAR_WITH_MSAA		0x00000017
#define NV50_PGRAPH_DATA_ERROR_FP_INTERPOLANT_START_OVER_LIMIT	0x00000018
#define NV50_PGRAPH_DATA_ERROR_SEMANTIC_LAYER_OVER_LIMIT	0x00000019
#define NV50_PGRAPH_DATA_ERROR_RT_INVALID_ALIGNMENT		0x0000001a
#define NV50_PGRAPH_DATA_ERROR_SAMPLER_OVER_LIMIT		0x0000001b
#define NV50_PGRAPH_DATA_ERROR_TEXTURE_OVER_LIMIT		0x0000001c
#define NV50_PGRAPH_DATA_ERROR_GP_TOO_MANY_OUTPUTS		0x0000001e
#define NV50_PGRAPH_DATA_ERROR_RT_BPP128_WITH_MS8		0x0000001f
#define NV50_PGRAPH_DATA_ERROR_Z_OUT_OF_BOUNDS			0x00000021
#define NV50_PGRAPH_DATA_ERROR_XY_OUT_OF_BOUNDS			0x00000023
#define NV50_PGRAPH_DATA_ERROR_VP_ZERO_INPUTS			0x00000024
#define NV50_PGRAPH_DATA_ERROR_CP_MORE_PARAMS_THAN_SHARED	0x00000027
#define NV50_PGRAPH_DATA_ERROR_CP_NO_REG_SPACE_STRIPED		0x00000028
#define NV50_PGRAPH_DATA_ERROR_CP_NO_REG_SPACE_PACKED		0x00000029
#define NV50_PGRAPH_DATA_ERROR_CP_NOT_ENOUGH_WARPS		0x0000002a
#define NV50_PGRAPH_DATA_ERROR_CP_BLOCK_SIZE_MISMATCH		0x0000002b
#define NV50_PGRAPH_DATA_ERROR_CP_NOT_ENOUGH_LOCAL_WARPS	0x0000002c
#define NV50_PGRAPH_DATA_ERROR_CP_NOT_ENOUGH_STACK_WARPS	0x0000002d
#define NV50_PGRAPH_DATA_ERROR_CP_NO_BLOCKDIM_LATCH		0x0000002e
#define NV50_PGRAPH_DATA_ERROR_ENG2D_FORMAT_MISMATCH		0x00000031
#define NV50_PGRAPH_DATA_ERROR_ENG2D_OPERATION_ILLEGAL_FOR_DST_FORMAT	0x00000033
#define NV50_PGRAPH_DATA_ERROR_ENG2D_FORMAT_MISMATCH_B		0x00000034
#define NV50_PGRAPH_DATA_ERROR_PRIMITIVE_ID_NEEDS_GP		0x0000003f
#define NV50_PGRAPH_DATA_ERROR_SEMANTIC_VIEWPORT_OVER_LIMIT	0x00000044
#define NV50_PGRAPH_DATA_ERROR_SEMANTIC_COLOR_FRONT_OVER_LIMIT	0x00000045
#define NV50_PGRAPH_DATA_ERROR_LAYER_ID_NEEDS_GP		0x00000046
#define NV50_PGRAPH_DATA_ERROR_SEMANTIC_CLIP_OVER_LIMIT		0x00000047
#define NV50_PGRAPH_DATA_ERROR_SEMANTIC_PTSZ_OVER_LIMIT		0x00000048
#define NV50_PGRAPH_DATA_ERROR_RT_LINEAR_WITH_ZETA_NVC0		0x00000098
#define NV50_PGRAPH_DATA_ERROR_ENG2D_UNALIGNED_PITCH_NVC0	0x000000a5
#define NV50_QUERY__SIZE					0x00000010
#define NV50_QUERY_COUNTER					0x00000000

#define NV50_QUERY_RES						0x00000004

#define NV50_QUERY_TIME						0x00000008


#endif /* NV50_DEFS_XML */
