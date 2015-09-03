#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
uint64_t x5 = UINT64_MAX;
int32_t t4 = 6294315;
int8_t x26 = INT8_MIN;
static uint8_t x27 = UINT8_MAX;
int32_t t6 = -1;
uint16_t x32 = 456U;
int16_t x34 = INT16_MIN;
uint64_t x36 = UINT64_MAX;
int64_t x37 = -1LL;
uint16_t x44 = 22U;
volatile int16_t x46 = -1;
int8_t x51 = INT8_MAX;
uint8_t x54 = 83U;
static uint32_t x56 = 48U;
int8_t x58 = INT8_MAX;
static int32_t x59 = 30088475;
static int8_t x62 = INT8_MIN;
int64_t x63 = 1LL;
int16_t x67 = INT16_MIN;
static int64_t x70 = -1LL;
static int32_t t17 = 15;
int64_t x87 = INT64_MAX;
int16_t x89 = -1;
static int8_t x92 = INT8_MAX;
int8_t x93 = INT8_MIN;
uint16_t x95 = 3201U;
int32_t t23 = 24095208;
static int16_t x97 = 246;
static int32_t t26 = -1481;
uint16_t x111 = 16832U;
uint16_t x112 = UINT16_MAX;
uint64_t x113 = UINT64_MAX;
int8_t x115 = INT8_MIN;
static int64_t x116 = INT64_MIN;
int16_t x117 = INT16_MIN;
static uint16_t x118 = UINT16_MAX;
static uint8_t x119 = 7U;
uint8_t x120 = 26U;
uint8_t x123 = UINT8_MAX;
volatile uint16_t x124 = 26U;
uint64_t x126 = UINT64_MAX;
static uint16_t x144 = 206U;
volatile int16_t x149 = INT16_MAX;
uint64_t x151 = 4023148060535425638LLU;
static int64_t x158 = INT64_MIN;
static volatile int32_t t39 = 1680;
uint32_t x162 = UINT32_MAX;
int8_t x172 = INT8_MIN;
int8_t x176 = -2;
volatile int32_t t43 = -8814;
int32_t x177 = INT32_MIN;
int16_t x178 = INT16_MIN;
uint8_t x181 = 0U;
int32_t x183 = INT32_MAX;
int16_t x185 = -4;
int32_t x191 = -1;
uint64_t x199 = 3092LLU;
int16_t x201 = INT16_MIN;
int16_t x207 = 27;
int32_t t51 = -50013;
int32_t x234 = -1;
static int32_t t58 = 91183;
uint32_t x237 = UINT32_MAX;
volatile int32_t t60 = -5053339;
static int8_t x246 = INT8_MIN;
int8_t x248 = -1;
int64_t x249 = INT64_MIN;
static volatile int64_t x250 = INT64_MIN;
volatile int32_t t62 = -2261114;
int16_t x257 = -15362;
static int16_t x262 = INT16_MIN;
uint32_t x266 = 141U;
int32_t t68 = 7082;
static int16_t x286 = INT16_MAX;
static volatile int8_t x289 = INT8_MIN;
uint16_t x297 = UINT16_MAX;
volatile uint32_t x298 = 40824U;
int16_t x299 = INT16_MIN;
int8_t x302 = 3;
int8_t x304 = -1;
uint16_t x317 = 0U;
int32_t t80 = 879374;
volatile int32_t t82 = 1;
volatile uint16_t x337 = UINT16_MAX;
int32_t t84 = 735626127;
static int16_t x341 = INT16_MIN;
static int32_t x344 = INT32_MAX;
int32_t t85 = -27957;
uint16_t x345 = 8038U;
uint32_t x348 = UINT32_MAX;
volatile int32_t t86 = 13;
int32_t x352 = INT32_MIN;
int32_t t87 = 423;
int32_t t91 = -5;
static int32_t x371 = -1;
int32_t x372 = -193864347;
volatile uint8_t x373 = UINT8_MAX;
uint8_t x378 = 3U;
int32_t x385 = INT32_MAX;
int32_t x395 = INT32_MIN;
volatile uint32_t x399 = 1154089U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int32_t x3 = INT32_MAX;
	volatile uint32_t x4 = 0U;
	int32_t t0 = -10807;

	t0 = ((x1<=x2)>>(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -10353811820LL;
	uint32_t x7 = 9U;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -204089;

	t1 = ((x5<=x6)>>(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 248313110;
	uint8_t x10 = 1U;
	static int8_t x11 = INT8_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 30699;

	t2 = ((x9<=x10)>>(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	static uint64_t x14 = UINT64_MAX;
	static uint64_t x15 = 141081279827LLU;
	volatile int8_t x16 = -1;
	static volatile int32_t t3 = 25529;

	t3 = ((x13<=x14)>>(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 1U;
	static volatile int32_t x20 = -39322681;

	t4 = ((x17<=x18)>>(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 769;
	uint8_t x22 = 3U;
	int64_t x23 = -1LL;
	int8_t x24 = -1;
	int32_t t5 = 63430932;

	t5 = ((x21<=x22)>>(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile int64_t x28 = INT64_MIN;

	t6 = ((x25<=x26)>>(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	volatile uint16_t x30 = 345U;
	int64_t x31 = INT64_MAX;
	int32_t t7 = 11416;

	t7 = ((x29<=x30)>>(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -111;
	int8_t x35 = INT8_MAX;
	volatile int32_t t8 = 1151;

	t8 = ((x33<=x34)>>(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = -297866758759226LL;
	int8_t x39 = 0;
	static uint8_t x40 = 126U;
	int32_t t9 = -6305;

	t9 = ((x37<=x38)>>(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	static int64_t x42 = -1LL;
	uint64_t x43 = 553193685543659845LLU;
	int32_t t10 = 2189;

	t10 = ((x41<=x42)>>(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 0;
	uint8_t x47 = 1U;
	int8_t x48 = -1;
	volatile int32_t t11 = 373553215;

	t11 = ((x45<=x46)>>(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	uint32_t x50 = 0U;
	uint64_t x52 = 1LLU;
	volatile int32_t t12 = -16232581;

	t12 = ((x49<=x50)>>(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int16_t x55 = 10658;
	volatile int32_t t13 = 3;

	t13 = ((x53<=x54)>>(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	int32_t x60 = INT32_MAX;
	int32_t t14 = -16644854;

	t14 = ((x57<=x58)>>(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint64_t x64 = 5787462925510LLU;
	int32_t t15 = -93729;

	t15 = ((x61<=x62)>>(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	static int64_t x66 = 82070014071935LL;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = 157171192;

	t16 = ((x65<=x66)>>(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x71 = -1LL;
	int8_t x72 = -1;

	t17 = ((x69<=x70)>>(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -29;
	volatile int32_t x74 = -1;
	uint16_t x75 = 22605U;
	volatile int8_t x76 = -1;
	int32_t t18 = 4421;

	t18 = ((x73<=x74)>>(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int8_t x78 = -4;
	volatile int64_t x79 = INT64_MIN;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 1;

	t19 = ((x77<=x78)>>(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = 3152463LLU;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = UINT64_MAX;
	int32_t t20 = -2;

	t20 = ((x81<=x82)>>(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int64_t x86 = INT64_MIN;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t21 = 79510;

	t21 = ((x85<=x86)>>(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 2U;
	uint32_t x91 = 281U;
	volatile int32_t t22 = -1;

	t22 = ((x89<=x90)>>(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -29299;
	int8_t x96 = 14;

	t23 = ((x93<=x94)>>(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 1887100132551515960LLU;
	uint64_t x99 = 130882840541LLU;
	int64_t x100 = -9836799102157586LL;
	int32_t t24 = 0;

	t24 = ((x97<=x98)>>(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	uint32_t x102 = UINT32_MAX;
	static int64_t x103 = INT64_MAX;
	static int64_t x104 = 1LL;
	volatile int32_t t25 = 281727;

	t25 = ((x101<=x102)>>(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = UINT64_MAX;
	static int32_t x106 = INT32_MIN;
	volatile uint64_t x107 = 2639116854984989LLU;
	static uint32_t x108 = 61293U;

	t26 = ((x105<=x106)>>(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 40538998U;
	int32_t x110 = 523885;
	int32_t t27 = 333237;

	t27 = ((x109<=x110)>>(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MAX;
	int32_t t28 = 1;

	t28 = ((x113<=x114)>>(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t t29 = 2;

	t29 = ((x117<=x118)>>(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 2U;
	uint64_t x122 = UINT64_MAX;
	static int32_t t30 = -36376343;

	t30 = ((x121<=x122)>>(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	int64_t x127 = 883604LL;
	uint8_t x128 = 2U;
	int32_t t31 = -8839;

	t31 = ((x125<=x126)>>(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = UINT16_MAX;
	int64_t x130 = INT64_MAX;
	int64_t x131 = 1010913056LL;
	int32_t x132 = -1;
	static volatile int32_t t32 = 2;

	t32 = ((x129<=x130)>>(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 13823U;
	int32_t x134 = -1;
	int64_t x135 = INT64_MIN;
	volatile uint8_t x136 = 15U;
	volatile int32_t t33 = 16399672;

	t33 = ((x133<=x134)>>(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MAX;
	int16_t x140 = -10403;
	static volatile int32_t t34 = 86627;

	t34 = ((x137<=x138)>>(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MIN;
	uint8_t x143 = 2U;
	volatile int32_t t35 = -29164762;

	t35 = ((x141<=x142)>>(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	int32_t x147 = INT32_MAX;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 411022;

	t36 = ((x145<=x146)>>(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	static int32_t x152 = -1;
	int32_t t37 = -7432;

	t37 = ((x149<=x150)>>(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -751253172946261082LL;
	int32_t x154 = -178;
	int8_t x155 = INT8_MAX;
	static int8_t x156 = -1;
	int32_t t38 = 860542831;

	t38 = ((x153<=x154)>>(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 0;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = 63;

	t39 = ((x157<=x158)>>(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = -7738;

	t40 = ((x161<=x162)>>(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -23182;
	uint16_t x166 = UINT16_MAX;
	volatile int8_t x167 = INT8_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = -517919319;

	t41 = ((x165<=x166)>>(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	uint64_t x170 = 924841LLU;
	int16_t x171 = -1;
	int32_t t42 = 622147290;

	t42 = ((x169<=x170)>>(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 25285U;
	int8_t x174 = -8;
	int16_t x175 = -1;

	t43 = ((x173<=x174)>>(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x179 = 57U;
	volatile int8_t x180 = -3;
	int32_t t44 = -289;

	t44 = ((x177<=x178)>>(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = 19;
	volatile int16_t x184 = -780;
	volatile int32_t t45 = -4444;

	t45 = ((x181<=x182)>>(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MIN;
	uint16_t x188 = 1U;
	volatile int32_t t46 = -6;

	t46 = ((x185<=x186)>>(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 0U;
	volatile uint64_t x190 = UINT64_MAX;
	int8_t x192 = 49;
	static volatile int32_t t47 = -188818;

	t47 = ((x189<=x190)>>(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = -1;
	int16_t x194 = INT16_MIN;
	static volatile uint64_t x195 = UINT64_MAX;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -5316906;

	t48 = ((x193<=x194)>>(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	int8_t x200 = -19;
	volatile int32_t t49 = 53484;

	t49 = ((x197<=x198)>>(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	static int64_t x203 = 29553709569492142LL;
	int16_t x204 = -1;
	volatile int32_t t50 = -1;

	t50 = ((x201<=x202)>>(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x205 = INT64_MIN;
	volatile int8_t x206 = 1;
	int64_t x208 = INT64_MIN;

	t51 = ((x205<=x206)>>(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	volatile int64_t x210 = -1LL;
	static int32_t x211 = INT32_MAX;
	uint8_t x212 = 10U;
	volatile int32_t t52 = -1;

	t52 = ((x209<=x210)>>(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 4478559700LL;
	int16_t x214 = -336;
	static int64_t x215 = -195966LL;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = 2;

	t53 = ((x213<=x214)>>(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	volatile int32_t x218 = INT32_MIN;
	static int8_t x219 = -1;
	volatile int16_t x220 = 22;
	int32_t t54 = 679689889;

	t54 = ((x217<=x218)>>(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = 3;
	static uint64_t x222 = 328040LLU;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MAX;
	int32_t t55 = 5944617;

	t55 = ((x221<=x222)>>(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -5557;
	volatile int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MAX;
	volatile int64_t x228 = 5LL;
	static volatile int32_t t56 = 38;

	t56 = ((x225<=x226)>>(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 0U;
	int32_t t57 = -5094643;

	t57 = ((x229<=x230)>>(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x235 = INT64_MIN;
	uint32_t x236 = 180U;

	t58 = ((x233<=x234)>>(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MIN;
	static volatile int64_t x239 = INT64_MAX;
	volatile int8_t x240 = INT8_MAX;
	int32_t t59 = -348;

	t59 = ((x237<=x238)>>(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	uint8_t x242 = 2U;
	int8_t x243 = INT8_MIN;
	int32_t x244 = -3126;

	t60 = ((x241<=x242)>>(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	volatile int64_t x247 = INT64_MAX;
	volatile int32_t t61 = -2861;

	t61 = ((x245<=x246)>>(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x251 = -1;
	int32_t x252 = -43771013;

	t62 = ((x249<=x250)>>(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	static volatile uint32_t x254 = 7970U;
	static int64_t x255 = INT64_MAX;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = 1;

	t63 = ((x253<=x254)>>(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MIN;
	int32_t x260 = 45;
	int32_t t64 = -9;

	t64 = ((x257<=x258)>>(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int64_t x263 = -1LL;
	int16_t x264 = -1;
	int32_t t65 = -80;

	t65 = ((x261<=x262)>>(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	int32_t t66 = 7945049;

	t66 = ((x265<=x266)>>(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = 1;
	uint16_t x271 = UINT16_MAX;
	uint16_t x272 = UINT16_MAX;
	int32_t t67 = 9854710;

	t67 = ((x269<=x270)>>(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 93U;
	static int64_t x274 = INT64_MIN;
	volatile int16_t x275 = -3;
	uint32_t x276 = UINT32_MAX;

	t68 = ((x273<=x274)>>(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = -186;
	int16_t x278 = INT16_MIN;
	static uint32_t x279 = 24961U;
	int16_t x280 = -8002;
	volatile int32_t t69 = 187;

	t69 = ((x277<=x278)>>(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -2;
	uint32_t x282 = 1074630926U;
	volatile int8_t x283 = -1;
	int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -6;

	t70 = ((x281<=x282)>>(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	static int32_t x287 = -2315;
	static uint16_t x288 = 126U;
	int32_t t71 = -3733212;

	t71 = ((x285<=x286)>>(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x290 = INT8_MIN;
	int8_t x291 = -31;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = -11;

	t72 = ((x289<=x290)>>(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 3U;
	static int8_t x294 = INT8_MIN;
	volatile int16_t x295 = INT16_MIN;
	volatile int16_t x296 = -5693;
	static int32_t t73 = 70;

	t73 = ((x293<=x294)>>(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x300 = 3414309965LL;
	int32_t t74 = -217215;

	t74 = ((x297<=x298)>>(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = UINT16_MAX;
	int16_t x303 = -104;
	volatile int32_t t75 = 1852306;

	t75 = ((x301<=x302)>>(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 3;
	volatile int8_t x306 = 0;
	uint16_t x307 = 31U;
	volatile uint32_t x308 = 12165U;
	static volatile int32_t t76 = -551;

	t76 = ((x305<=x306)>>(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 7776;
	uint64_t x310 = 8014674931030032LLU;
	static volatile int32_t x311 = -1;
	volatile int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 1184;

	t77 = ((x309<=x310)>>(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	static uint16_t x314 = 894U;
	static volatile int16_t x315 = -19;
	int64_t x316 = -1LL;
	static volatile int32_t t78 = -13153560;

	t78 = ((x313<=x314)>>(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = 2007307652595816413LL;
	volatile int32_t x319 = 378186;
	uint64_t x320 = 885908LLU;
	int32_t t79 = 418;

	t79 = ((x317<=x318)>>(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x321 = 6U;
	static uint16_t x322 = UINT16_MAX;
	volatile int16_t x323 = -2588;
	volatile uint8_t x324 = 1U;

	t80 = ((x321<=x322)>>(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 8037U;
	int16_t x326 = INT16_MIN;
	static int8_t x327 = -3;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 10;

	t81 = ((x325<=x326)>>(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 5U;
	volatile int8_t x330 = -1;
	int32_t x331 = -1;
	volatile uint16_t x332 = UINT16_MAX;

	t82 = ((x329<=x330)>>(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	volatile int16_t x334 = 6821;
	uint8_t x335 = 22U;
	volatile uint64_t x336 = 423806LLU;
	volatile int32_t t83 = -786305;

	t83 = ((x333<=x334)>>(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = INT8_MIN;
	int8_t x339 = 6;
	int16_t x340 = -71;

	t84 = ((x337<=x338)>>(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x342 = 4217372386503LLU;
	int8_t x343 = INT8_MAX;

	t85 = ((x341<=x342)>>(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x346 = 1;
	int8_t x347 = INT8_MIN;

	t86 = ((x345<=x346)>>(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -2198639LL;

	t87 = ((x349<=x350)>>(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	static uint64_t x354 = 260132LLU;
	int32_t x355 = -1;
	int16_t x356 = 112;
	volatile int32_t t88 = 6;

	t88 = ((x353<=x354)>>(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int8_t x358 = -1;
	static uint16_t x359 = 3506U;
	uint16_t x360 = UINT16_MAX;
	static int32_t t89 = 953;

	t89 = ((x357<=x358)>>(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	uint32_t x362 = 141U;
	int8_t x363 = INT8_MIN;
	int8_t x364 = -1;
	int32_t t90 = -132;

	t90 = ((x361<=x362)>>(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MAX;
	static int16_t x367 = INT16_MAX;
	int8_t x368 = INT8_MAX;

	t91 = ((x365<=x366)>>(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int32_t x370 = INT32_MIN;
	static volatile int32_t t92 = 227180492;

	t92 = ((x369<=x370)>>(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	int32_t x376 = -3443519;
	int32_t t93 = -224232;

	t93 = ((x373<=x374)>>(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	int8_t x379 = -30;
	int8_t x380 = -61;
	volatile int32_t t94 = -314921;

	t94 = ((x377<=x378)>>(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 193U;
	int32_t x382 = 49;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 312U;
	int32_t t95 = 3126;

	t95 = ((x381<=x382)>>(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = -8116996130342LL;
	static volatile int32_t x387 = INT32_MIN;
	static uint32_t x388 = UINT32_MAX;
	int32_t t96 = -76721936;

	t96 = ((x385<=x386)>>(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = 25U;
	int8_t x390 = 52;
	static volatile int16_t x391 = -2497;
	int64_t x392 = INT64_MIN;
	int32_t t97 = -180174537;

	t97 = ((x389<=x390)>>(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -3037LL;
	int32_t x394 = INT32_MIN;
	int32_t x396 = -41713;
	int32_t t98 = 190;

	t98 = ((x393<=x394)>>(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 17U;
	static volatile uint16_t x398 = UINT16_MAX;
	static uint64_t x400 = UINT64_MAX;
	int32_t t99 = -462430;

	t99 = ((x397<=x398)>>(x399<x400));

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

