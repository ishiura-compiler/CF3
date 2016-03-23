
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
int32_t x6 = INT32_MIN;
int32_t x8 = 6985;
volatile int16_t x10 = INT16_MAX;
static int32_t x15 = INT32_MIN;
int32_t t5 = -14968;
uint64_t x35 = UINT64_MAX;
int64_t x38 = INT64_MAX;
static uint64_t t9 = 38488323227LLU;
int8_t x44 = -1;
volatile int32_t t10 = 55;
uint32_t x57 = 2319300U;
int16_t x66 = INT16_MIN;
uint32_t t13 = 116799U;
uint8_t x84 = 14U;
int32_t t16 = -16865422;
volatile int64_t x85 = -132429485954461LL;
int64_t x87 = -1LL;
volatile int64_t t17 = 7022553708464LL;
int32_t x102 = -1;
volatile int64_t x105 = -65725610298279LL;
static uint32_t x111 = 199463419U;
static int8_t x133 = INT8_MIN;
int32_t t26 = -24221;
uint16_t x143 = 1205U;
static int32_t t27 = -176648677;
int32_t x148 = -1;
int16_t x152 = INT16_MIN;
volatile int64_t t29 = -986767LL;
volatile uint8_t x153 = 1U;
int8_t x154 = 19;
volatile int32_t t30 = 1;
uint16_t x163 = 101U;
int8_t x174 = INT8_MAX;
static volatile int32_t x178 = INT32_MAX;
uint64_t x182 = UINT64_MAX;
int16_t x187 = -1;
int16_t x190 = -12;
static volatile int16_t x208 = INT16_MIN;
uint16_t x211 = UINT16_MAX;
uint64_t x215 = 4231003418LLU;
uint32_t x220 = UINT32_MAX;
volatile int16_t x225 = -1;
int32_t t46 = -2;
static int32_t t47 = -277374979;
int16_t x249 = -1;
volatile int64_t x251 = INT64_MIN;
volatile uint8_t x252 = 3U;
volatile uint16_t x260 = UINT16_MAX;
int8_t x262 = INT8_MAX;
uint16_t x264 = 0U;
volatile uint64_t t57 = 365495519719957LLU;
int8_t x286 = INT8_MIN;
int16_t x288 = -1;
int32_t t59 = 117182;
volatile uint8_t x291 = 3U;
volatile int8_t x294 = INT8_MAX;
int32_t x303 = -105;
int8_t x311 = -27;
volatile uint32_t t64 = 37U;
int16_t x318 = INT16_MIN;
int64_t x325 = -40LL;
volatile int64_t t67 = -1465869984LL;
volatile int64_t t69 = 22LL;
int8_t x344 = -60;
int8_t x354 = INT8_MIN;
int8_t x359 = -1;
int16_t x362 = -7;
int16_t x376 = 8;
volatile int16_t x381 = INT16_MAX;
static volatile int64_t x387 = INT64_MIN;
uint32_t x389 = 8257U;
int8_t x391 = -2;
uint32_t x393 = UINT32_MAX;
uint32_t t80 = 93U;
volatile int32_t x403 = INT32_MIN;
uint16_t x413 = 2U;
static int32_t t83 = -11735;
volatile int16_t x418 = -97;
uint32_t x428 = 3U;
int32_t t86 = -12;
int8_t x442 = -1;
int32_t x447 = INT32_MIN;
int8_t x483 = -1;
uint64_t x484 = 14598LLU;
int16_t x485 = INT16_MAX;
volatile int8_t x489 = INT8_MIN;
volatile int32_t x491 = 1;
static volatile int32_t t95 = 627;
int32_t x496 = INT32_MAX;
uint64_t x505 = UINT64_MAX;
uint64_t t98 = 669982249771274LLU;
static volatile uint64_t t99 = 68410063031815LLU;
volatile uint64_t x530 = UINT64_MAX;
volatile uint64_t t102 = 2442615946867732LLU;
int8_t x545 = INT8_MAX;
static uint16_t x547 = UINT16_MAX;
int64_t x550 = INT64_MIN;
volatile uint64_t t107 = 373971438463347341LLU;
int8_t x562 = INT8_MIN;
volatile int16_t x563 = INT16_MIN;
uint8_t x574 = 3U;
int32_t x579 = INT32_MIN;
int32_t t112 = 1521;
int16_t x597 = INT16_MIN;
uint64_t x618 = 1758646255369847185LLU;
int16_t x627 = INT16_MAX;
int8_t x628 = 37;
int8_t x629 = INT8_MAX;
int16_t x630 = -175;
int16_t x639 = -1;
int32_t t119 = 75208476;
int8_t x642 = INT8_MIN;
volatile int8_t x643 = INT8_MIN;
int16_t x644 = INT16_MIN;
volatile int32_t t120 = 13532462;
volatile int16_t x661 = INT16_MIN;
uint64_t x670 = UINT64_MAX;
volatile uint64_t t123 = 5750LLU;
volatile int64_t x676 = 56075651LL;
int32_t t124 = -286065;
static int8_t x685 = -1;
volatile int32_t t127 = 731511969;
uint32_t x697 = 0U;
int32_t x706 = INT32_MIN;
int64_t x707 = INT64_MIN;
uint8_t x710 = 0U;
uint8_t x720 = 3U;
uint16_t x724 = UINT16_MAX;
int32_t x729 = 1345;
int16_t x732 = -861;
uint16_t x757 = 15U;
volatile int8_t x760 = INT8_MAX;
int64_t x787 = INT64_MIN;
uint16_t x790 = 0U;
int8_t x797 = INT8_MIN;
static int32_t x799 = -2544;
volatile uint64_t x803 = UINT64_MAX;
static int32_t x804 = 11;
uint16_t x823 = 2U;
int32_t t148 = -1;
int16_t x839 = 76;
int64_t t149 = -77415044LL;
uint16_t x841 = 204U;
volatile int16_t x844 = -106;
volatile uint32_t x845 = 226U;
int8_t x846 = 1;
int8_t x847 = INT8_MIN;
uint64_t x848 = 310064976135LLU;
volatile int32_t t152 = 2;
int32_t x855 = INT32_MAX;
int32_t x865 = -1;
uint32_t x869 = 1276U;
int32_t x878 = -1;
uint8_t x897 = 1U;
int64_t x901 = INT64_MAX;
volatile uint64_t t162 = 6544LLU;
int16_t x911 = INT16_MAX;
int64_t x915 = -1LL;
static int32_t t164 = -51;
uint8_t x926 = UINT8_MAX;
volatile int32_t x928 = INT32_MIN;
int8_t x931 = -1;
volatile int16_t x932 = INT16_MIN;
uint16_t x935 = 15U;
int32_t x938 = -1;
int8_t x953 = -1;
volatile int64_t t172 = 123173186053LL;
int8_t x969 = -1;
static uint8_t x973 = UINT8_MAX;
static volatile int32_t x977 = -1;
int16_t x978 = -1;
int16_t x980 = -1;
volatile int32_t x982 = -1;
static uint16_t x983 = 5U;
volatile int32_t t178 = -1743521;
int32_t x986 = -6419408;
static int64_t x988 = -1690588LL;
static int32_t t179 = -17412277;
int32_t x991 = 533252288;
static uint32_t x994 = 60U;
static uint32_t x1013 = 150U;
int32_t x1016 = INT32_MAX;
uint8_t x1026 = 46U;
int64_t x1027 = -1LL;
static int8_t x1038 = -1;
static int16_t x1043 = INT16_MIN;
volatile int64_t t190 = 35306693178LL;
volatile int16_t x1053 = -128;
static int64_t x1056 = 284633004LL;
static int32_t x1059 = INT32_MIN;
volatile int32_t t192 = 44;
volatile uint32_t t193 = 815293U;
int8_t x1066 = 14;
volatile uint64_t x1068 = 615607305LLU;
int8_t x1078 = 15;
uint32_t t197 = 16867U;
int16_t x1086 = INT16_MAX;


void f0(void) {
    	int16_t x1 = 1469;
	uint16_t x2 = 4090U;
	volatile int64_t x3 = -1396453LL;
	uint64_t x4 = 13147492LLU;
	int32_t t0 = -4229487;

    t0 = ((x1*x2)|(x3==x4));

    if (t0 != 6008210) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x7 = 220143LLU;
	volatile int32_t t1 = INT32_MIN;

    t1 = ((x5*x6)|(x7==x8));

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int32_t x11 = 166784011;
	static volatile uint8_t x12 = 0U;
	int32_t t2 = 184520;

    t2 = ((x9*x10)|(x11==x12));

    if (t2 != -4194176) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 9562U;
	uint8_t x14 = 12U;
	static volatile int8_t x16 = -1;
	int32_t t3 = 127;

    t3 = ((x13*x14)|(x15==x16));

    if (t3 != 114744) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -714;
	int64_t x18 = -2128758927677LL;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -24LL;

    t4 = ((x17*x18)|(x19==x20));

    if (t4 != 1519933874361378LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	uint8_t x22 = 7U;
	int64_t x23 = INT64_MIN;
	uint64_t x24 = UINT64_MAX;

    t5 = ((x21*x22)|(x23==x24));

    if (t5 != -7) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = 731003;
	uint8_t x26 = UINT8_MAX;
	uint64_t x27 = 308647462641752LLU;
	volatile int32_t x28 = -1;
	static int32_t t6 = 434717910;

    t6 = ((x25*x26)|(x27==x28));

    if (t6 != 186405765) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	uint8_t x30 = 115U;
	volatile uint16_t x31 = 8935U;
	uint8_t x32 = 9U;
	volatile int32_t t7 = -1855;

    t7 = ((x29*x30)|(x31==x32));

    if (t7 != -115) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -1;
	static int8_t x34 = 25;
	int64_t x36 = 116241889664838LL;
	int32_t t8 = -3;

    t8 = ((x33*x34)|(x35==x36));

    if (t8 != -25) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 3359686807523703LLU;
	int8_t x39 = 15;
	volatile int64_t x40 = INT64_MIN;

    t9 = ((x37*x38)|(x39==x40));

    if (t9 != 9220012350047252105LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 92U;
	int16_t x42 = INT16_MAX;
	volatile int16_t x43 = INT16_MAX;

    t10 = ((x41*x42)|(x43==x44));

    if (t10 != 3014564) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 26U;
	volatile uint64_t x50 = UINT64_MAX;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = INT64_MIN;
	uint64_t t11 = 4297LLU;

    t11 = ((x49*x50)|(x51==x52));

    if (t11 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = 34932208;
	static volatile int8_t x60 = INT8_MIN;
	static volatile uint32_t t12 = 61594870U;

    t12 = ((x57*x58)|(x59==x60));

    if (t12 != 1310588928U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x65 = UINT32_MAX;
	static uint64_t x67 = 1240018023179993LLU;
	uint8_t x68 = 46U;

    t13 = ((x65*x66)|(x67==x68));

    if (t13 != 32768U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x73 = -1;
	int64_t x74 = -1LL;
	uint64_t x75 = 17207374945789586LLU;
	static int32_t x76 = -1425;
	volatile int64_t t14 = -124860659LL;

    t14 = ((x73*x74)|(x75==x76));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = INT16_MIN;
	uint32_t x78 = 193718U;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -1LL;
	uint32_t t15 = 107217483U;

    t15 = ((x77*x78)|(x79==x80));

    if (t15 != 2242183168U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x81 = 4093U;
	uint16_t x82 = 56U;
	int64_t x83 = -1LL;

    t16 = ((x81*x82)|(x83==x84));

    if (t16 != 229208) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x86 = INT8_MAX;
	uint8_t x88 = 1U;

    t17 = ((x85*x86)|(x87==x88));

    if (t17 != -16818544716216547LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = 390178940;
	int32_t x90 = -1;
	uint32_t x91 = 256423866U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t18 = -516450;

    t18 = ((x89*x90)|(x91==x92));

    if (t18 != -390178940) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x101 = 1;
	volatile int16_t x103 = INT16_MIN;
	int32_t x104 = 2939;
	static volatile int32_t t19 = 12067028;

    t19 = ((x101*x102)|(x103==x104));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x106 = -1LL;
	int64_t x107 = -49734171518335114LL;
	int16_t x108 = -1;
	static int64_t t20 = -33779621824023927LL;

    t20 = ((x105*x106)|(x107==x108));

    if (t20 != 65725610298279LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = 5;
	uint8_t x110 = UINT8_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t21 = 2828965;

    t21 = ((x109*x110)|(x111==x112));

    if (t21 != 1275) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = UINT64_MAX;
	static int32_t x115 = INT32_MIN;
	volatile int64_t x116 = 884153489023LL;
	volatile uint64_t t22 = 85901243400LLU;

    t22 = ((x113*x114)|(x115==x116));

    if (t22 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint16_t x117 = 5U;
	uint16_t x118 = 1830U;
	volatile int32_t x119 = -67;
	volatile uint64_t x120 = 10391624LLU;
	static int32_t t23 = 3735068;

    t23 = ((x117*x118)|(x119==x120));

    if (t23 != 9150) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x125 = 2U;
	static uint64_t x126 = 32995004LLU;
	static uint64_t x127 = 30033061LLU;
	uint16_t x128 = 123U;
	uint64_t t24 = 8255343518327708313LLU;

    t24 = ((x125*x126)|(x127==x128));

    if (t24 != 65990008LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x129 = -1;
	uint32_t x130 = 11128U;
	static int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	uint32_t t25 = 434U;

    t25 = ((x129*x130)|(x131==x132));

    if (t25 != 4294956168U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x134 = -5;
	uint32_t x135 = 84142U;
	uint32_t x136 = 79U;

    t26 = ((x133*x134)|(x135==x136));

    if (t26 != 640) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	int16_t x144 = 2;

    t27 = ((x141*x142)|(x143==x144));

    if (t27 != 16384) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x145 = 0U;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MIN;
	uint64_t t28 = 3546845508960LLU;

    t28 = ((x145*x146)|(x147==x148));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x149 = -1LL;
	volatile uint8_t x150 = UINT8_MAX;
	int8_t x151 = -1;

    t29 = ((x149*x150)|(x151==x152));

    if (t29 != -255LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x155 = -3;
	uint8_t x156 = UINT8_MAX;

    t30 = ((x153*x154)|(x155==x156));

    if (t30 != 19) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x161 = 48899;
	volatile uint8_t x162 = 94U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t31 = -31968;

    t31 = ((x161*x162)|(x163==x164));

    if (t31 != 4596506) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x165 = UINT64_MAX;
	int8_t x166 = -1;
	int64_t x167 = -1LL;
	uint32_t x168 = 30418U;
	volatile uint64_t t32 = 7440194547730410LLU;

    t32 = ((x165*x166)|(x167==x168));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x169 = INT16_MIN;
	uint32_t x170 = 896U;
	volatile int8_t x171 = INT8_MIN;
	uint16_t x172 = 39U;
	static uint32_t t33 = 500242U;

    t33 = ((x169*x170)|(x171==x172));

    if (t33 != 4265607168U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint32_t x173 = UINT32_MAX;
	int8_t x175 = -1;
	volatile int32_t x176 = -2989;
	static uint32_t t34 = 52718231U;

    t34 = ((x173*x174)|(x175==x176));

    if (t34 != 4294967169U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x177 = UINT32_MAX;
	static int8_t x179 = -1;
	volatile int64_t x180 = -2061244335608286275LL;
	uint32_t t35 = 20U;

    t35 = ((x177*x178)|(x179==x180));

    if (t35 != 2147483649U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x181 = INT32_MIN;
	uint64_t x183 = UINT64_MAX;
	static uint32_t x184 = 0U;
	volatile uint64_t t36 = 225LLU;

    t36 = ((x181*x182)|(x183==x184));

    if (t36 != 2147483648LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x185 = UINT8_MAX;
	uint16_t x186 = UINT16_MAX;
	int32_t x188 = -1;
	int32_t t37 = -221;

    t37 = ((x185*x186)|(x187==x188));

    if (t37 != 16711425) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x189 = UINT64_MAX;
	uint16_t x191 = UINT16_MAX;
	static uint8_t x192 = 0U;
	uint64_t t38 = 9827533LLU;

    t38 = ((x189*x190)|(x191==x192));

    if (t38 != 12LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x193 = 57LLU;
	int8_t x194 = INT8_MIN;
	static int16_t x195 = 3292;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t39 = 134006761797850893LLU;

    t39 = ((x193*x194)|(x195==x196));

    if (t39 != 18446744073709544320LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x197 = 4379141422258045014LLU;
	uint64_t x198 = 2636992825LLU;
	int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MAX;
	volatile uint64_t t40 = 993960562132LLU;

    t40 = ((x197*x198)|(x199==x200));

    if (t40 != 8541578274045626662LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x205 = 1;
	static int8_t x206 = INT8_MIN;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t t41 = -19744988;

    t41 = ((x205*x206)|(x207==x208));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x209 = INT16_MIN;
	static int16_t x210 = -1;
	int32_t x212 = INT32_MIN;
	volatile int32_t t42 = 146072;

    t42 = ((x209*x210)|(x211==x212));

    if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x213 = 2LLU;
	static int8_t x214 = INT8_MIN;
	static int32_t x216 = -63;
	volatile uint64_t t43 = 984941LLU;

    t43 = ((x213*x214)|(x215==x216));

    if (t43 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x217 = 54193419260357432LLU;
	int8_t x218 = -1;
	uint16_t x219 = 237U;
	uint64_t t44 = 93088972774729100LLU;

    t44 = ((x217*x218)|(x219==x220));

    if (t44 != 18392550654449194184LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x221 = 384269U;
	int32_t x222 = 12703994;
	int16_t x223 = INT16_MIN;
	static int64_t x224 = 7577707577577LL;
	volatile uint32_t t45 = 1865624571U;

    t45 = ((x221*x222)|(x223==x224));

    if (t45 != 2668222130U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x226 = -19;
	volatile uint16_t x227 = 70U;
	uint16_t x228 = 3947U;

    t46 = ((x225*x226)|(x227==x228));

    if (t46 != 19) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x229 = 24;
	static volatile int32_t x230 = -92417;
	volatile int16_t x231 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;

    t47 = ((x229*x230)|(x231==x232));

    if (t47 != -2218008) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x233 = -1;
	static volatile int32_t x234 = -3492;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	volatile int32_t t48 = -614016;

    t48 = ((x233*x234)|(x235==x236));

    if (t48 != 3492) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x237 = -9LL;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	int32_t x240 = -49;
	static volatile int64_t t49 = 114429LL;

    t49 = ((x237*x238)|(x239==x240));

    if (t49 != 1152LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = UINT16_MAX;
	int8_t x242 = 0;
	int32_t x243 = -44666280;
	static volatile uint64_t x244 = UINT64_MAX;
	int32_t t50 = 0;

    t50 = ((x241*x242)|(x243==x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x245 = UINT32_MAX;
	static uint16_t x246 = 23852U;
	int16_t x247 = -3607;
	int16_t x248 = INT16_MIN;
	volatile uint32_t t51 = 447U;

    t51 = ((x245*x246)|(x247==x248));

    if (t51 != 4294943444U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x250 = UINT8_MAX;
	volatile int32_t t52 = 20;

    t52 = ((x249*x250)|(x251==x252));

    if (t52 != -255) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x257 = -1;
	uint8_t x258 = 9U;
	static volatile int8_t x259 = INT8_MIN;
	static int32_t t53 = -77;

    t53 = ((x257*x258)|(x259==x260));

    if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x261 = -282LL;
	static volatile uint8_t x263 = 31U;
	volatile int64_t t54 = 12LL;

    t54 = ((x261*x262)|(x263==x264));

    if (t54 != -35814LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = -17037234920991859LL;
	int64_t x268 = -2845LL;
	int32_t t55 = 2;

    t55 = ((x265*x266)|(x267==x268));

    if (t55 != -8355840) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = INT16_MAX;
	static uint8_t x270 = 0U;
	uint8_t x271 = 12U;
	static volatile int64_t x272 = INT64_MAX;
	volatile int32_t t56 = -76181459;

    t56 = ((x269*x270)|(x271==x272));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x273 = 41528526393455591LLU;
	uint16_t x274 = UINT16_MAX;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = -3;

    t57 = ((x273*x274)|(x275==x276));

    if (t57 != 9900598359808068633LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x281 = INT8_MIN;
	volatile int8_t x282 = INT8_MAX;
	int8_t x283 = 4;
	uint64_t x284 = UINT64_MAX;
	int32_t t58 = -540862;

    t58 = ((x281*x282)|(x283==x284));

    if (t58 != -16256) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x285 = INT8_MIN;
	int8_t x287 = -1;

    t59 = ((x285*x286)|(x287==x288));

    if (t59 != 16385) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x289 = 7;
	static int32_t x290 = 1;
	static int32_t x292 = INT32_MIN;
	static volatile int32_t t60 = -38;

    t60 = ((x289*x290)|(x291==x292));

    if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x293 = 497836037LLU;
	static volatile int32_t x295 = -1;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t61 = 23975LLU;

    t61 = ((x293*x294)|(x295==x296));

    if (t61 != 63225176699LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x297 = UINT16_MAX;
	uint8_t x298 = 1U;
	static uint16_t x299 = 20U;
	volatile int32_t x300 = -1;
	static volatile int32_t t62 = 91205;

    t62 = ((x297*x298)|(x299==x300));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x301 = 25U;
	volatile uint8_t x302 = UINT8_MAX;
	int8_t x304 = 7;
	int32_t t63 = -64458;

    t63 = ((x301*x302)|(x303==x304));

    if (t63 != 6375) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x309 = 26420U;
	int32_t x310 = -5147;
	static uint8_t x312 = 98U;

    t64 = ((x309*x310)|(x311==x312));

    if (t64 != 4158983556U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x317 = 6565;
	uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MAX;
	int32_t t65 = -203;

    t65 = ((x317*x318)|(x319==x320));

    if (t65 != -215121920) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x321 = 0U;
	uint64_t x322 = 1LLU;
	uint32_t x323 = 5U;
	volatile uint8_t x324 = 52U;
	volatile uint64_t t66 = 57311LLU;

    t66 = ((x321*x322)|(x323==x324));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x326 = -23;
	static int64_t x327 = -2314599356LL;
	int8_t x328 = -1;

    t67 = ((x325*x326)|(x327==x328));

    if (t67 != 920LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x329 = 2435;
	int64_t x330 = -258626484746112LL;
	uint64_t x331 = UINT64_MAX;
	uint8_t x332 = 49U;
	volatile int64_t t68 = 6360187982LL;

    t68 = ((x329*x330)|(x331==x332));

    if (t68 != -629755490356782720LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x337 = -1LL;
	volatile int16_t x338 = INT16_MAX;
	int16_t x339 = -1;
	int64_t x340 = INT64_MAX;

    t69 = ((x337*x338)|(x339==x340));

    if (t69 != -32767LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x341 = 2275938539LL;
	uint8_t x342 = 0U;
	static int8_t x343 = -1;
	int64_t t70 = 20187LL;

    t70 = ((x341*x342)|(x343==x344));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x345 = 0;
	int64_t x346 = INT64_MAX;
	uint8_t x347 = 6U;
	int8_t x348 = -1;
	volatile int64_t t71 = -1428118036552467LL;

    t71 = ((x345*x346)|(x347==x348));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x353 = 104487;
	static uint16_t x355 = UINT16_MAX;
	static int32_t x356 = -1;
	static int32_t t72 = 1;

    t72 = ((x353*x354)|(x355==x356));

    if (t72 != -13374336) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x357 = INT16_MAX;
	int8_t x358 = -1;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t73 = 7;

    t73 = ((x357*x358)|(x359==x360));

    if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x361 = 0;
	int64_t x363 = INT64_MIN;
	static int8_t x364 = -1;
	int32_t t74 = -37628;

    t74 = ((x361*x362)|(x363==x364));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x373 = UINT8_MAX;
	uint8_t x374 = 1U;
	int32_t x375 = INT32_MIN;
	volatile int32_t t75 = 1;

    t75 = ((x373*x374)|(x375==x376));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x377 = 3;
	int32_t x378 = 80229557;
	int8_t x379 = -1;
	static int8_t x380 = INT8_MIN;
	static int32_t t76 = -14776;

    t76 = ((x377*x378)|(x379==x380));

    if (t76 != 240688671) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x382 = 117U;
	uint32_t x383 = 2U;
	uint16_t x384 = 1U;
	volatile int32_t t77 = -646304;

    t77 = ((x381*x382)|(x383==x384));

    if (t77 != 3833739) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x385 = INT8_MIN;
	uint8_t x386 = 3U;
	int8_t x388 = INT8_MIN;
	volatile int32_t t78 = -2;

    t78 = ((x385*x386)|(x387==x388));

    if (t78 != -384) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x390 = INT8_MIN;
	volatile uint32_t x392 = 74U;
	static volatile uint32_t t79 = 15218395U;

    t79 = ((x389*x390)|(x391==x392));

    if (t79 != 4293910400U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x394 = INT8_MIN;
	static int16_t x395 = -12;
	int32_t x396 = 16015;

    t80 = ((x393*x394)|(x395==x396));

    if (t80 != 128U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	volatile int32_t t81 = -30629185;

    t81 = ((x397*x398)|(x399==x400));

    if (t81 != 16711425) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x401 = INT16_MIN;
	static int16_t x402 = INT16_MAX;
	uint32_t x404 = 319665209U;
	static volatile int32_t t82 = -289882;

    t82 = ((x401*x402)|(x403==x404));

    if (t82 != -1073709056) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x414 = INT8_MAX;
	uint64_t x415 = 404111235069099LLU;
	volatile int16_t x416 = -23;

    t83 = ((x413*x414)|(x415==x416));

    if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x417 = INT8_MIN;
	int32_t x419 = INT32_MIN;
	volatile uint16_t x420 = 0U;
	int32_t t84 = -2016347;

    t84 = ((x417*x418)|(x419==x420));

    if (t84 != 12416) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x425 = INT16_MIN;
	uint64_t x426 = 69259688955LLU;
	uint64_t x427 = 5000216018750317LLU;
	static uint64_t t85 = 3726931869639LLU;

    t85 = ((x425*x426)|(x427==x428));

    if (t85 != 18444474572221874176LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x437 = INT16_MAX;
	static int16_t x438 = INT16_MIN;
	int16_t x439 = -1;
	static uint32_t x440 = 1585936U;

    t86 = ((x437*x438)|(x439==x440));

    if (t86 != -1073709056) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x441 = -318LL;
	int64_t x443 = INT64_MIN;
	int8_t x444 = INT8_MAX;
	int64_t t87 = -2123757451LL;

    t87 = ((x441*x442)|(x443==x444));

    if (t87 != 318LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x445 = 6035905477200894433LLU;
	volatile int64_t x446 = INT64_MAX;
	volatile int64_t x448 = -5738982348463LL;
	static volatile uint64_t t88 = 328925810119LLU;

    t88 = ((x445*x446)|(x447==x448));

    if (t88 != 3187466559653881375LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x449 = -1;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = INT32_MIN;
	int16_t x452 = INT16_MIN;
	volatile uint32_t t89 = 2U;

    t89 = ((x449*x450)|(x451==x452));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x457 = 4721U;
	int8_t x458 = INT8_MAX;
	uint64_t x459 = 93113LLU;
	int64_t x460 = INT64_MIN;
	volatile uint32_t t90 = 3418U;

    t90 = ((x457*x458)|(x459==x460));

    if (t90 != 599567U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x461 = -1;
	static uint32_t x462 = 0U;
	volatile uint32_t x463 = 7U;
	int8_t x464 = 29;
	volatile uint32_t t91 = 12U;

    t91 = ((x461*x462)|(x463==x464));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x469 = -1;
	uint32_t x470 = 921764052U;
	volatile uint16_t x471 = 190U;
	static uint16_t x472 = 54U;
	uint32_t t92 = 1223747037U;

    t92 = ((x469*x470)|(x471==x472));

    if (t92 != 3373203244U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x481 = INT16_MIN;
	static int16_t x482 = INT16_MIN;
	volatile int32_t t93 = 1;

    t93 = ((x481*x482)|(x483==x484));

    if (t93 != 1073741824) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x486 = 12636U;
	int8_t x487 = INT8_MIN;
	int64_t x488 = 3960LL;
	volatile uint32_t t94 = 2U;

    t94 = ((x485*x486)|(x487==x488));

    if (t94 != 414043812U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x490 = -1;
	uint32_t x492 = UINT32_MAX;

    t95 = ((x489*x490)|(x491==x492));

    if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x493 = UINT8_MAX;
	static int32_t x494 = -11;
	int8_t x495 = -1;
	volatile int32_t t96 = -21989943;

    t96 = ((x493*x494)|(x495==x496));

    if (t96 != -2805) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x501 = -1;
	static int8_t x502 = 5;
	static int32_t x503 = -251628;
	static volatile int8_t x504 = 0;
	static volatile int32_t t97 = 15313887;

    t97 = ((x501*x502)|(x503==x504));

    if (t97 != -5) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x506 = UINT16_MAX;
	int64_t x507 = -192974928834910LL;
	int64_t x508 = INT64_MIN;

    t98 = ((x505*x506)|(x507==x508));

    if (t98 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x513 = UINT64_MAX;
	uint16_t x514 = UINT16_MAX;
	int16_t x515 = -5;
	uint64_t x516 = UINT64_MAX;

    t99 = ((x513*x514)|(x515==x516));

    if (t99 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x517 = 122U;
	uint8_t x518 = 6U;
	int64_t x519 = INT64_MAX;
	int16_t x520 = 26;
	int32_t t100 = -274;

    t100 = ((x517*x518)|(x519==x520));

    if (t100 != 732) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x521 = UINT8_MAX;
	int64_t x522 = 574112LL;
	volatile uint32_t x523 = 11032835U;
	int64_t x524 = INT64_MAX;
	static volatile int64_t t101 = -4018386LL;

    t101 = ((x521*x522)|(x523==x524));

    if (t101 != 146398560LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	uint8_t x532 = UINT8_MAX;

    t102 = ((x529*x530)|(x531==x532));

    if (t102 != 32768LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x533 = UINT32_MAX;
	int16_t x534 = -3401;
	uint64_t x535 = 1LLU;
	int8_t x536 = INT8_MAX;
	static volatile uint32_t t103 = 25U;

    t103 = ((x533*x534)|(x535==x536));

    if (t103 != 3401U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x537 = 18U;
	int64_t x538 = -1LL;
	int32_t x539 = 2;
	volatile int64_t x540 = -191955660133LL;
	static int64_t t104 = -440104069LL;

    t104 = ((x537*x538)|(x539==x540));

    if (t104 != -18LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x546 = 7073U;
	uint32_t x548 = 5476U;
	static volatile uint32_t t105 = 30485136U;

    t105 = ((x545*x546)|(x547==x548));

    if (t105 != 898271U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x549 = 15412022014395LLU;
	int16_t x551 = INT16_MIN;
	int64_t x552 = INT64_MAX;
	static uint64_t t106 = 746153LLU;

    t106 = ((x549*x550)|(x551==x552));

    if (t106 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x557 = -23976115;
	uint64_t x558 = 92059768008095LLU;
	static int64_t x559 = INT64_MIN;
	int32_t x560 = -1;

    t107 = ((x557*x558)|(x559==x560));

    if (t107 != 6373704209739542995LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x561 = -1;
	uint8_t x564 = 0U;
	volatile int32_t t108 = -326;

    t108 = ((x561*x562)|(x563==x564));

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x569 = INT8_MAX;
	volatile uint64_t x570 = 31235448509828636LLU;
	volatile uint8_t x571 = 63U;
	uint8_t x572 = UINT8_MAX;
	volatile uint64_t t109 = 1574605016226173LLU;

    t109 = ((x569*x570)|(x571==x572));

    if (t109 != 3966901960748236772LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x573 = 75400427626313LLU;
	int16_t x575 = -1;
	volatile uint8_t x576 = 1U;
	uint64_t t110 = 1427842763795976386LLU;

    t110 = ((x573*x574)|(x575==x576));

    if (t110 != 226201282878939LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x577 = INT8_MAX;
	volatile int16_t x578 = 8;
	volatile int16_t x580 = INT16_MIN;
	volatile int32_t t111 = 5202473;

    t111 = ((x577*x578)|(x579==x580));

    if (t111 != 1016) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x593 = INT16_MIN;
	int16_t x594 = -1;
	int64_t x595 = -2222314824462451LL;
	int16_t x596 = INT16_MAX;

    t112 = ((x593*x594)|(x595==x596));

    if (t112 != 32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x598 = -1;
	static int32_t x599 = -1;
	int16_t x600 = -1;
	int32_t t113 = -16;

    t113 = ((x597*x598)|(x599==x600));

    if (t113 != 32769) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x613 = 3398065U;
	int32_t x614 = 143060;
	int16_t x615 = -1;
	int16_t x616 = 8702;
	volatile uint32_t t114 = 1159984U;

    t114 = ((x613*x614)|(x615==x616));

    if (t114 != 795874452U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x617 = 0;
	int16_t x619 = INT16_MAX;
	int64_t x620 = 38LL;
	uint64_t t115 = 257421194225LLU;

    t115 = ((x617*x618)|(x619==x620));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x625 = 843539LLU;
	int16_t x626 = INT16_MAX;
	volatile uint64_t t116 = 2234992978790903LLU;

    t116 = ((x625*x626)|(x627==x628));

    if (t116 != 27640242413LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x631 = INT64_MIN;
	int64_t x632 = -351579031642528581LL;
	volatile int32_t t117 = 1012853;

    t117 = ((x629*x630)|(x631==x632));

    if (t117 != -22225) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x633 = -127;
	int8_t x634 = -1;
	int8_t x635 = INT8_MIN;
	static int32_t x636 = -96;
	int32_t t118 = 124691624;

    t118 = ((x633*x634)|(x635==x636));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x637 = INT8_MIN;
	int32_t x638 = -1;
	int8_t x640 = INT8_MIN;

    t119 = ((x637*x638)|(x639==x640));

    if (t119 != 128) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x641 = 7U;

    t120 = ((x641*x642)|(x643==x644));

    if (t120 != -896) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x645 = INT32_MIN;
	uint64_t x646 = 141706941034086162LLU;
	volatile int8_t x647 = INT8_MAX;
	volatile uint32_t x648 = 15177U;
	uint64_t t121 = 41918964626259096LLU;

    t121 = ((x645*x646)|(x647==x648));

    if (t121 != 15761015910153846784LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x662 = -34;
	uint16_t x663 = 7868U;
	volatile uint8_t x664 = 5U;
	int32_t t122 = -440;

    t122 = ((x661*x662)|(x663==x664));

    if (t122 != 1114112) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x669 = UINT16_MAX;
	static int8_t x671 = 43;
	int64_t x672 = -237427395021LL;

    t123 = ((x669*x670)|(x671==x672));

    if (t123 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = 5;
	uint8_t x675 = UINT8_MAX;

    t124 = ((x673*x674)|(x675==x676));

    if (t124 != -163840) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x677 = -7;
	int32_t x678 = -461980;
	volatile uint8_t x679 = 6U;
	int32_t x680 = INT32_MIN;
	int32_t t125 = 0;

    t125 = ((x677*x678)|(x679==x680));

    if (t125 != 3233860) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x686 = UINT32_MAX;
	uint64_t x687 = UINT64_MAX;
	static uint16_t x688 = 3982U;
	static uint32_t t126 = 22U;

    t126 = ((x685*x686)|(x687==x688));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x693 = 59;
	volatile int8_t x694 = INT8_MIN;
	static int64_t x695 = -32729081959279105LL;
	static volatile int64_t x696 = INT64_MIN;

    t127 = ((x693*x694)|(x695==x696));

    if (t127 != -7552) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x698 = INT64_MIN;
	static volatile int8_t x699 = INT8_MIN;
	int8_t x700 = INT8_MAX;
	volatile int64_t t128 = -2702335LL;

    t128 = ((x697*x698)|(x699==x700));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x705 = 252076LL;
	int32_t x708 = 1411382;
	int64_t t129 = -375864723614LL;

    t129 = ((x705*x706)|(x707==x708));

    if (t129 != -541329088053248LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x709 = INT32_MAX;
	uint32_t x711 = UINT32_MAX;
	static int16_t x712 = -1;
	int32_t t130 = 623871;

    t130 = ((x709*x710)|(x711==x712));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x713 = 7;
	uint32_t x714 = 414968551U;
	static int64_t x715 = -1LL;
	int8_t x716 = 0;
	uint32_t t131 = 27674U;

    t131 = ((x713*x714)|(x715==x716));

    if (t131 != 2904779857U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	uint32_t x718 = 489040576U;
	uint64_t x719 = 21705LLU;
	static volatile uint32_t t132 = 2197120U;

    t132 = ((x717*x718)|(x719==x720));

    if (t132 != 228185408U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x721 = 71904247U;
	uint8_t x722 = 18U;
	int32_t x723 = INT32_MIN;
	uint32_t t133 = 11U;

    t133 = ((x721*x722)|(x723==x724));

    if (t133 != 1294276446U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x730 = UINT64_MAX;
	static volatile uint8_t x731 = 33U;
	volatile uint64_t t134 = 9699946LLU;

    t134 = ((x729*x730)|(x731==x732));

    if (t134 != 18446744073709550271LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x737 = INT8_MIN;
	int16_t x738 = 88;
	static int8_t x739 = -1;
	int64_t x740 = 45210LL;
	volatile int32_t t135 = -34;

    t135 = ((x737*x738)|(x739==x740));

    if (t135 != -11264) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x749 = 457285LLU;
	static int64_t x750 = -1LL;
	volatile int8_t x751 = INT8_MIN;
	int64_t x752 = -7840402955LL;
	static uint64_t t136 = 975154648LLU;

    t136 = ((x749*x750)|(x751==x752));

    if (t136 != 18446744073709094331LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x753 = -7;
	int8_t x754 = 3;
	volatile uint64_t x755 = UINT64_MAX;
	int8_t x756 = -1;
	volatile int32_t t137 = 242421837;

    t137 = ((x753*x754)|(x755==x756));

    if (t137 != -21) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x758 = 6;
	uint64_t x759 = 866059LLU;
	int32_t t138 = -286661;

    t138 = ((x757*x758)|(x759==x760));

    if (t138 != 90) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x785 = 0U;
	volatile int16_t x786 = INT16_MIN;
	int64_t x788 = -1LL;
	static volatile int32_t t139 = -765449;

    t139 = ((x785*x786)|(x787==x788));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x789 = UINT8_MAX;
	uint64_t x791 = UINT64_MAX;
	static volatile int16_t x792 = INT16_MAX;
	static int32_t t140 = -3;

    t140 = ((x789*x790)|(x791==x792));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x798 = 27272U;
	volatile int32_t x800 = INT32_MIN;
	int32_t t141 = -9272969;

    t141 = ((x797*x798)|(x799==x800));

    if (t141 != -3490816) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x801 = -387;
	static volatile int8_t x802 = -1;
	volatile int32_t t142 = -96850308;

    t142 = ((x801*x802)|(x803==x804));

    if (t142 != 387) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x805 = -1;
	volatile uint32_t x806 = 54133U;
	int64_t x807 = INT64_MIN;
	uint8_t x808 = UINT8_MAX;
	volatile uint32_t t143 = 36609567U;

    t143 = ((x805*x806)|(x807==x808));

    if (t143 != 4294913163U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x813 = -1;
	int64_t x814 = -1LL;
	int8_t x815 = -1;
	uint16_t x816 = 13U;
	static int64_t t144 = -13795LL;

    t144 = ((x813*x814)|(x815==x816));

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x817 = 5U;
	int8_t x818 = INT8_MIN;
	volatile int8_t x819 = INT8_MAX;
	int64_t x820 = INT64_MIN;
	int32_t t145 = -4447;

    t145 = ((x817*x818)|(x819==x820));

    if (t145 != -640) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x821 = 3U;
	int8_t x822 = 3;
	uint32_t x824 = 37825U;
	volatile int32_t t146 = -7;

    t146 = ((x821*x822)|(x823==x824));

    if (t146 != 9) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x825 = UINT8_MAX;
	volatile int16_t x826 = INT16_MIN;
	int64_t x827 = INT64_MAX;
	int64_t x828 = INT64_MIN;
	static volatile int32_t t147 = -16162;

    t147 = ((x825*x826)|(x827==x828));

    if (t147 != -8355840) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x833 = 18;
	int8_t x834 = INT8_MIN;
	static int64_t x835 = INT64_MAX;
	int64_t x836 = -294595977LL;

    t148 = ((x833*x834)|(x835==x836));

    if (t148 != -2304) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x837 = INT32_MAX;
	int64_t x838 = -1LL;
	volatile int32_t x840 = INT32_MIN;

    t149 = ((x837*x838)|(x839==x840));

    if (t149 != -2147483647LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x842 = UINT16_MAX;
	volatile uint64_t x843 = UINT64_MAX;
	volatile int32_t t150 = 4535275;

    t150 = ((x841*x842)|(x843==x844));

    if (t150 != 13369140) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t t151 = 120697U;

    t151 = ((x845*x846)|(x847==x848));

    if (t151 != 226U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x849 = INT8_MAX;
	volatile int8_t x850 = 8;
	int32_t x851 = -1;
	int8_t x852 = INT8_MIN;

    t152 = ((x849*x850)|(x851==x852));

    if (t152 != 1016) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x853 = INT8_MIN;
	uint16_t x854 = 1U;
	static volatile int32_t x856 = INT32_MAX;
	int32_t t153 = 8;

    t153 = ((x853*x854)|(x855==x856));

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x866 = UINT32_MAX;
	uint8_t x867 = UINT8_MAX;
	int16_t x868 = -1;
	uint32_t t154 = 23U;

    t154 = ((x865*x866)|(x867==x868));

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x870 = -117;
	int8_t x871 = 0;
	int8_t x872 = INT8_MIN;
	volatile uint32_t t155 = 6164U;

    t155 = ((x869*x870)|(x871==x872));

    if (t155 != 4294818004U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x873 = 3U;
	static int8_t x874 = -1;
	uint32_t x875 = UINT32_MAX;
	static uint32_t x876 = 1568261311U;
	volatile int32_t t156 = 98129;

    t156 = ((x873*x874)|(x875==x876));

    if (t156 != -3) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x877 = 3091184606LLU;
	int16_t x879 = INT16_MAX;
	static volatile uint32_t x880 = UINT32_MAX;
	volatile uint64_t t157 = 414773830LLU;

    t157 = ((x877*x878)|(x879==x880));

    if (t157 != 18446744070618367010LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x881 = 23U;
	int32_t x882 = -1;
	int16_t x883 = INT16_MIN;
	int8_t x884 = INT8_MAX;
	int32_t t158 = -79222;

    t158 = ((x881*x882)|(x883==x884));

    if (t158 != -23) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x885 = 60822961772294516LLU;
	int64_t x886 = 14LL;
	int32_t x887 = -93610131;
	uint16_t x888 = UINT16_MAX;
	uint64_t t159 = 1697824559237510024LLU;

    t159 = ((x885*x886)|(x887==x888));

    if (t159 != 851521464812123224LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x898 = INT64_MIN;
	int32_t x899 = INT32_MIN;
	volatile int64_t x900 = INT64_MIN;
	int64_t t160 = INT64_MIN;

    t160 = ((x897*x898)|(x899==x900));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x902 = 1U;
	uint16_t x903 = UINT16_MAX;
	int64_t x904 = INT64_MIN;
	int64_t t161 = INT64_MAX;

    t161 = ((x901*x902)|(x903==x904));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x905 = INT64_MAX;
	uint64_t x906 = 37908LLU;
	int32_t x907 = -1;
	int64_t x908 = -1LL;

    t162 = ((x905*x906)|(x907==x908));

    if (t162 != 18446744073709513709LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x909 = UINT32_MAX;
	static uint8_t x910 = 3U;
	int8_t x912 = INT8_MIN;
	volatile uint32_t t163 = 163625207U;

    t163 = ((x909*x910)|(x911==x912));

    if (t163 != 4294967293U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x913 = -20;
	static uint16_t x914 = UINT16_MAX;
	int32_t x916 = -1;

    t164 = ((x913*x914)|(x915==x916));

    if (t164 != -1310699) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x921 = INT8_MIN;
	volatile int64_t x922 = -441254LL;
	uint8_t x923 = 45U;
	volatile uint8_t x924 = 24U;
	volatile int64_t t165 = -231251093468LL;

    t165 = ((x921*x922)|(x923==x924));

    if (t165 != 56480512LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x925 = UINT32_MAX;
	int32_t x927 = INT32_MAX;
	uint32_t t166 = 209772U;

    t166 = ((x925*x926)|(x927==x928));

    if (t166 != 4294967041U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x929 = 16255U;
	int32_t x930 = -6;
	static volatile int32_t t167 = 4528115;

    t167 = ((x929*x930)|(x931==x932));

    if (t167 != -97530) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x933 = -1;
	static volatile uint8_t x934 = 2U;
	int32_t x936 = -5;
	volatile int32_t t168 = 3379187;

    t168 = ((x933*x934)|(x935==x936));

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x937 = INT8_MAX;
	int64_t x939 = -41210895932608LL;
	static int32_t x940 = INT32_MIN;
	int32_t t169 = -128835;

    t169 = ((x937*x938)|(x939==x940));

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x945 = 0U;
	uint64_t x946 = 3314LLU;
	static int16_t x947 = 759;
	uint16_t x948 = UINT16_MAX;
	uint64_t t170 = 1756776618LLU;

    t170 = ((x945*x946)|(x947==x948));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x954 = -1LL;
	int64_t x955 = INT64_MIN;
	int16_t x956 = 197;
	int64_t t171 = 2692769LL;

    t171 = ((x953*x954)|(x955==x956));

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x957 = -1;
	static int64_t x958 = -50024LL;
	uint16_t x959 = UINT16_MAX;
	int8_t x960 = INT8_MIN;

    t172 = ((x957*x958)|(x959==x960));

    if (t172 != 50024LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x961 = UINT8_MAX;
	static volatile int8_t x962 = -1;
	uint32_t x963 = 403502385U;
	uint8_t x964 = 1U;
	int32_t t173 = -19233;

    t173 = ((x961*x962)|(x963==x964));

    if (t173 != -255) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x965 = -1;
	int16_t x966 = 129;
	int8_t x967 = INT8_MAX;
	static uint64_t x968 = 35527775LLU;
	volatile int32_t t174 = -703;

    t174 = ((x965*x966)|(x967==x968));

    if (t174 != -129) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x970 = -13698;
	int32_t x971 = INT32_MIN;
	uint16_t x972 = UINT16_MAX;
	static volatile int32_t t175 = 309;

    t175 = ((x969*x970)|(x971==x972));

    if (t175 != 13698) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x974 = -1;
	uint8_t x975 = 1U;
	int64_t x976 = INT64_MIN;
	static volatile int32_t t176 = 17661;

    t176 = ((x973*x974)|(x975==x976));

    if (t176 != -255) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x979 = -1;
	volatile int32_t t177 = -60975777;

    t177 = ((x977*x978)|(x979==x980));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x981 = -1;
	int64_t x984 = INT64_MIN;

    t178 = ((x981*x982)|(x983==x984));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x985 = 4U;
	int64_t x987 = INT64_MAX;

    t179 = ((x985*x986)|(x987==x988));

    if (t179 != -25677632) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x989 = -15;
	uint16_t x990 = UINT16_MAX;
	static int8_t x992 = INT8_MIN;
	volatile int32_t t180 = 1048543;

    t180 = ((x989*x990)|(x991==x992));

    if (t180 != -983025) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x993 = -1LL;
	uint16_t x995 = 4U;
	uint16_t x996 = UINT16_MAX;
	static int64_t t181 = 2947903220841097257LL;

    t181 = ((x993*x994)|(x995==x996));

    if (t181 != -60LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x1009 = INT8_MAX;
	int8_t x1010 = -1;
	volatile int16_t x1011 = INT16_MAX;
	volatile uint64_t x1012 = UINT64_MAX;
	volatile int32_t t182 = -1;

    t182 = ((x1009*x1010)|(x1011==x1012));

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x1014 = UINT64_MAX;
	static int32_t x1015 = -1;
	uint64_t t183 = 15LLU;

    t183 = ((x1013*x1014)|(x1015==x1016));

    if (t183 != 18446744073709551466LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1021 = UINT32_MAX;
	static int16_t x1022 = 31;
	static int64_t x1023 = INT64_MIN;
	static int8_t x1024 = INT8_MAX;
	static volatile uint32_t t184 = 2200U;

    t184 = ((x1021*x1022)|(x1023==x1024));

    if (t184 != 4294967265U) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x1025 = 56335;
	static uint16_t x1028 = UINT16_MAX;
	int32_t t185 = 6027;

    t185 = ((x1025*x1026)|(x1027==x1028));

    if (t185 != 2591410) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1029 = -4;
	uint32_t x1030 = 62912U;
	int64_t x1031 = 21323919LL;
	uint64_t x1032 = 16926317404LLU;
	volatile uint32_t t186 = 147202151U;

    t186 = ((x1029*x1030)|(x1031==x1032));

    if (t186 != 4294715648U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1037 = INT32_MAX;
	static int64_t x1039 = -35155510681184239LL;
	uint64_t x1040 = UINT64_MAX;
	volatile int32_t t187 = 179;

    t187 = ((x1037*x1038)|(x1039==x1040));

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1041 = 37;
	uint64_t x1042 = 354782LLU;
	static volatile uint8_t x1044 = 36U;
	uint64_t t188 = 13081573055438LLU;

    t188 = ((x1041*x1042)|(x1043==x1044));

    if (t188 != 13126934LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1045 = 95U;
	uint32_t x1046 = 1U;
	static int16_t x1047 = INT16_MIN;
	int8_t x1048 = INT8_MIN;
	uint32_t t189 = 1061182U;

    t189 = ((x1045*x1046)|(x1047==x1048));

    if (t189 != 95U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1049 = -73434417196112LL;
	static uint16_t x1050 = 1U;
	int16_t x1051 = -1;
	volatile int32_t x1052 = -1;

    t190 = ((x1049*x1050)|(x1051==x1052));

    if (t190 != -73434417196111LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1054 = -2;
	int8_t x1055 = -1;
	static int32_t t191 = -21;

    t191 = ((x1053*x1054)|(x1055==x1056));

    if (t191 != 256) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1057 = 7;
	uint8_t x1058 = UINT8_MAX;
	static volatile int64_t x1060 = INT64_MAX;

    t192 = ((x1057*x1058)|(x1059==x1060));

    if (t192 != 1785) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1061 = UINT32_MAX;
	int16_t x1062 = INT16_MIN;
	uint32_t x1063 = 6U;
	static int8_t x1064 = INT8_MAX;

    t193 = ((x1061*x1062)|(x1063==x1064));

    if (t193 != 32768U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1065 = UINT64_MAX;
	int32_t x1067 = INT32_MIN;
	volatile uint64_t t194 = 11585934LLU;

    t194 = ((x1065*x1066)|(x1067==x1068));

    if (t194 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x1073 = UINT16_MAX;
	uint8_t x1074 = 14U;
	int8_t x1075 = 46;
	static int16_t x1076 = INT16_MIN;
	volatile int32_t t195 = -683694208;

    t195 = ((x1073*x1074)|(x1075==x1076));

    if (t195 != 917490) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1077 = -67488951013LL;
	volatile int32_t x1079 = -1;
	static volatile uint64_t x1080 = 115592679578022LLU;
	int64_t t196 = 210864649991557899LL;

    t196 = ((x1077*x1078)|(x1079==x1080));

    if (t196 != -1012334265195LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1081 = 16542526U;
	uint8_t x1082 = UINT8_MAX;
	int16_t x1083 = INT16_MIN;
	uint32_t x1084 = 1640U;

    t197 = ((x1081*x1082)|(x1083==x1084));

    if (t197 != 4218344130U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1085 = INT16_MIN;
	int64_t x1087 = -1LL;
	int16_t x1088 = INT16_MIN;
	volatile int32_t t198 = -66535;

    t198 = ((x1085*x1086)|(x1087==x1088));

    if (t198 != -1073709056) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1093 = -1;
	int8_t x1094 = 1;
	volatile uint64_t x1095 = UINT64_MAX;
	static uint16_t x1096 = 0U;
	volatile int32_t t199 = 5206966;

    t199 = ((x1093*x1094)|(x1095==x1096));

    if (t199 != -1) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

