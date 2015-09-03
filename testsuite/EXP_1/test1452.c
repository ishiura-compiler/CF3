#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
int32_t t0 = 17709945;
uint32_t x7 = 327579U;
int64_t x8 = INT64_MIN;
int32_t x9 = INT32_MAX;
int8_t x12 = -1;
int32_t t2 = -76352;
uint64_t x13 = 47841475LLU;
static int64_t x20 = INT64_MIN;
static int8_t x26 = INT8_MIN;
int32_t t7 = 1009;
volatile int8_t x34 = INT8_MIN;
int32_t x35 = INT32_MAX;
volatile int32_t t8 = 205;
static volatile int16_t x42 = INT16_MIN;
volatile int32_t t10 = 12;
int16_t x46 = -959;
volatile int32_t x55 = INT32_MIN;
static int32_t t13 = -8155;
int32_t x79 = INT32_MAX;
static volatile int32_t t19 = 127653266;
volatile int8_t x82 = -2;
static int16_t x83 = 3;
int32_t x84 = INT32_MIN;
volatile int64_t x85 = -1LL;
int16_t x86 = INT16_MIN;
static int8_t x88 = -1;
int8_t x91 = INT8_MAX;
int32_t t23 = 16767;
int32_t x101 = 1031743;
int16_t x102 = 3122;
int16_t x111 = -14745;
uint16_t x112 = 3U;
uint32_t x113 = 4327256U;
int8_t x116 = 1;
int16_t x117 = INT16_MAX;
static uint64_t x122 = UINT64_MAX;
volatile uint8_t x135 = 25U;
volatile int32_t t33 = 49122;
int32_t x137 = INT32_MIN;
static int8_t x139 = -60;
static volatile int16_t x141 = INT16_MIN;
int32_t x142 = -6;
int32_t t35 = 669196827;
int32_t t36 = 557;
int16_t x151 = -1;
uint32_t x152 = UINT32_MAX;
static int32_t t37 = -2680413;
volatile uint64_t x154 = 58841LLU;
int8_t x156 = INT8_MAX;
volatile int32_t t39 = 1;
int64_t x162 = -1LL;
int8_t x164 = 1;
static volatile uint64_t x165 = UINT64_MAX;
volatile int16_t x167 = -1;
uint16_t x168 = 13U;
static volatile uint16_t x171 = UINT16_MAX;
int8_t x173 = INT8_MAX;
int32_t t43 = 2020950;
int16_t x178 = -1;
int32_t t44 = -2791290;
uint16_t x181 = UINT16_MAX;
int64_t x190 = INT64_MIN;
int32_t t49 = -2229778;
volatile int8_t x201 = 0;
volatile int32_t t50 = -806679;
int32_t x205 = 3737826;
uint32_t x206 = 177087U;
static int8_t x207 = -54;
static uint64_t x212 = 258914151LLU;
volatile int32_t t52 = -24372;
uint16_t x219 = 6U;
static int32_t t54 = -3497;
uint16_t x221 = UINT16_MAX;
uint8_t x225 = UINT8_MAX;
int16_t x228 = -100;
int32_t t56 = -2678394;
static int32_t t57 = -5977;
static int64_t x240 = INT64_MIN;
int32_t t60 = -1451;
int32_t t61 = -753548;
uint16_t x251 = UINT16_MAX;
uint16_t x262 = UINT16_MAX;
int16_t x264 = INT16_MIN;
int32_t t65 = 5760414;
int32_t x266 = 41226942;
volatile int64_t x274 = INT64_MIN;
uint64_t x279 = 4797LLU;
int32_t x284 = INT32_MAX;
volatile int32_t t70 = -27998684;
volatile uint32_t x285 = 1439U;
uint64_t x296 = UINT64_MAX;
static volatile int8_t x302 = 7;
int32_t x304 = INT32_MIN;
static volatile int32_t t75 = 13;
uint16_t x306 = UINT16_MAX;
int32_t t77 = -128600083;
volatile int16_t x313 = INT16_MIN;
int16_t x318 = 10;
volatile int16_t x320 = 85;
volatile int16_t x321 = INT16_MIN;
int8_t x324 = INT8_MIN;
int16_t x327 = INT16_MAX;
volatile int32_t t81 = 61169081;
int16_t x332 = INT16_MIN;
volatile uint8_t x333 = 9U;
int16_t x335 = 221;
int32_t t83 = 171582439;
int16_t x342 = -1;
static int32_t t85 = 0;
int32_t x346 = INT32_MIN;
int32_t t86 = -470021;
uint8_t x350 = UINT8_MAX;
int16_t x354 = -1;
static int32_t t88 = 7;
int16_t x357 = INT16_MIN;
int32_t x359 = 1067;
int64_t x363 = INT64_MIN;
static uint8_t x365 = 21U;
int16_t x366 = -8123;
uint16_t x367 = 26552U;
static int64_t x375 = 366986470414073180LL;
volatile int32_t x377 = -56511073;
volatile int8_t x378 = INT8_MIN;
int64_t x379 = INT64_MAX;
static uint8_t x383 = 2U;
volatile int16_t x386 = -144;
int16_t x387 = -1;
int32_t t97 = -15137416;
uint16_t x393 = 17785U;
uint16_t x398 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = 436239790932701990LL;
	int32_t x3 = INT32_MAX;

	t0 = (((x1<x2)==x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 4663U;
	static int64_t x6 = INT64_MIN;
	volatile int32_t t1 = -5;

	t1 = (((x5<x6)==x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	static volatile uint64_t x11 = 23163958LLU;

	t2 = (((x9<x10)==x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 14430615LLU;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -3;
	int32_t t3 = 13;

	t3 = (((x13<x14)==x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 50587;
	volatile int64_t x18 = -2254393263254125634LL;
	uint8_t x19 = UINT8_MAX;
	volatile int32_t t4 = -594;

	t4 = (((x17<x18)==x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 1U;
	int8_t x22 = -1;
	int8_t x23 = INT8_MAX;
	int8_t x24 = 3;
	volatile int32_t t5 = -5893;

	t5 = (((x21<x22)==x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 16U;
	int32_t x27 = 3189177;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = -3858951;

	t6 = (((x25<x26)==x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = -464;
	static volatile uint16_t x31 = 1959U;
	static int32_t x32 = INT32_MIN;

	t7 = (((x29<x30)==x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x36 = INT64_MIN;

	t8 = (((x33<x34)==x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 12290U;
	uint64_t x38 = UINT64_MAX;
	volatile int64_t x39 = INT64_MAX;
	uint16_t x40 = 170U;
	volatile int32_t t9 = 18190;

	t9 = (((x37<x38)==x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int32_t x43 = -1;
	volatile uint16_t x44 = UINT16_MAX;

	t10 = (((x41<x42)==x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile int64_t x47 = INT64_MAX;
	uint64_t x48 = 5251LLU;
	static int32_t t11 = 109136;

	t11 = (((x45<x46)==x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 0U;
	int32_t x50 = INT32_MIN;
	static volatile int64_t x51 = -368LL;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -40;

	t12 = (((x49<x50)==x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 20U;
	int8_t x54 = INT8_MIN;
	int32_t x56 = INT32_MIN;

	t13 = (((x53<x54)==x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MAX;
	int8_t x59 = -1;
	uint16_t x60 = 3U;
	static int32_t t14 = 41046;

	t14 = (((x57<x58)==x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	int8_t x62 = 4;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = 29809U;
	volatile int32_t t15 = -171;

	t15 = (((x61<x62)==x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = 234;
	static volatile int32_t x68 = -1;
	int32_t t16 = 319679217;

	t16 = (((x65<x66)==x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 3U;
	int32_t x70 = 1477;
	static int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t17 = -637274;

	t17 = (((x69<x70)==x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -9;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MAX;
	static volatile int32_t x76 = INT32_MIN;
	int32_t t18 = 15923;

	t18 = (((x73<x74)==x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 12162;
	int32_t x78 = INT32_MIN;
	int16_t x80 = -393;

	t19 = (((x77<x78)==x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 216525727610LL;
	volatile int32_t t20 = -92799854;

	t20 = (((x81<x82)==x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x87 = UINT32_MAX;
	static int32_t t21 = 3;

	t21 = (((x85<x86)==x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -582636;

	t22 = (((x89<x90)==x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 7391682U;
	uint32_t x94 = 1679411482U;
	static int64_t x95 = -1LL;
	static int16_t x96 = INT16_MIN;

	t23 = (((x93<x94)==x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 30U;
	int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	uint8_t x100 = UINT8_MAX;
	static int32_t t24 = 3017100;

	t24 = (((x97<x98)==x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x103 = INT64_MAX;
	int16_t x104 = -1;
	volatile int32_t t25 = 61;

	t25 = (((x101<x102)==x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	uint16_t x106 = 4852U;
	int8_t x107 = INT8_MIN;
	int64_t x108 = -1LL;
	int32_t t26 = 1948742;

	t26 = (((x105<x106)==x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MIN;
	int32_t t27 = -1;

	t27 = (((x109<x110)==x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	volatile int8_t x115 = INT8_MIN;
	int32_t t28 = 7;

	t28 = (((x113<x114)==x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 1U;
	int8_t x119 = INT8_MIN;
	volatile int8_t x120 = -1;
	int32_t t29 = 1654;

	t29 = (((x117<x118)==x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = 1;
	volatile int32_t t30 = 23038;

	t30 = (((x121<x122)==x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 0;
	int64_t x126 = INT64_MIN;
	static int64_t x127 = -1LL;
	uint8_t x128 = 1U;
	static volatile int32_t t31 = 4139560;

	t31 = (((x125<x126)==x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MIN;
	volatile int8_t x132 = -1;
	int32_t t32 = -1;

	t32 = (((x129<x130)==x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 53U;
	volatile int32_t x134 = 0;
	uint8_t x136 = 1U;

	t33 = (((x133<x134)==x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1LL;
	int8_t x140 = INT8_MAX;
	int32_t t34 = 1;

	t34 = (((x137<x138)==x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x143 = 144634702695306728LLU;
	static int64_t x144 = INT64_MIN;

	t35 = (((x141<x142)==x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	uint16_t x146 = 804U;
	uint64_t x147 = 16205LLU;
	static int32_t x148 = INT32_MAX;

	t36 = (((x145<x146)==x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	int64_t x150 = 0LL;

	t37 = (((x149<x150)==x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	volatile int32_t x155 = INT32_MAX;
	int32_t t38 = -52;

	t38 = (((x153<x154)==x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	volatile uint64_t x158 = 57379708951LLU;
	static int64_t x159 = INT64_MIN;
	int8_t x160 = -1;

	t39 = (((x157<x158)==x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 1440U;
	int8_t x163 = -1;
	volatile int32_t t40 = -527792;

	t40 = (((x161<x162)==x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -1;
	volatile int32_t t41 = -27691;

	t41 = (((x165<x166)==x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	int32_t x172 = INT32_MAX;
	volatile int32_t t42 = 39;

	t42 = (((x169<x170)==x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MIN;
	static int32_t x175 = -1;
	uint16_t x176 = UINT16_MAX;

	t43 = (((x173<x174)==x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 1;
	uint8_t x179 = UINT8_MAX;
	volatile int16_t x180 = INT16_MIN;

	t44 = (((x177<x178)==x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = -1;
	int64_t x183 = -1176213733749829355LL;
	int64_t x184 = 2744109672966507LL;
	volatile int32_t t45 = 926;

	t45 = (((x181<x182)==x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 0;
	uint8_t x186 = 4U;
	uint32_t x187 = UINT32_MAX;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = -144;

	t46 = (((x185<x186)==x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -3;

	t47 = (((x189<x190)==x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 17420U;
	volatile int64_t x194 = -962LL;
	static int8_t x195 = -9;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -11;

	t48 = (((x193<x194)==x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	volatile uint64_t x198 = 184298LLU;
	int16_t x199 = -6;
	int64_t x200 = -5LL;

	t49 = (((x197<x198)==x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x202 = UINT8_MAX;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MAX;

	t50 = (((x201<x202)==x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x208 = INT8_MIN;
	int32_t t51 = -8513120;

	t51 = (((x205<x206)==x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 2;
	volatile uint16_t x210 = 2U;
	int16_t x211 = INT16_MIN;

	t52 = (((x209<x210)==x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MAX;
	static int8_t x215 = INT8_MIN;
	int64_t x216 = -3951047848LL;
	volatile int32_t t53 = -11;

	t53 = (((x213<x214)==x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -23533;
	int32_t x218 = -1;
	static volatile uint8_t x220 = UINT8_MAX;

	t54 = (((x217<x218)==x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x222 = INT8_MIN;
	volatile int32_t x223 = INT32_MIN;
	static int32_t x224 = INT32_MIN;
	static int32_t t55 = -43170040;

	t55 = (((x221<x222)==x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = 568629491;
	uint64_t x227 = 4770407580LLU;

	t56 = (((x225<x226)==x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int64_t x230 = 1LL;
	int64_t x231 = INT64_MAX;
	static uint64_t x232 = 2215934326LLU;

	t57 = (((x229<x230)==x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 60U;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	static uint8_t x236 = 5U;
	int32_t t58 = -322095109;

	t58 = (((x233<x234)==x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MAX;
	static uint32_t x239 = 660993720U;
	int32_t t59 = 505803191;

	t59 = (((x237<x238)==x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -1;
	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MIN;

	t60 = (((x241<x242)==x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	volatile int64_t x247 = INT64_MIN;
	volatile uint32_t x248 = UINT32_MAX;

	t61 = (((x245<x246)==x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -390999084;
	int32_t x250 = 191;
	uint32_t x252 = UINT32_MAX;
	int32_t t62 = 80696261;

	t62 = (((x249<x250)==x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 1168725;

	t63 = (((x253<x254)==x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	static uint8_t x258 = 2U;
	uint16_t x259 = 918U;
	int8_t x260 = 0;
	volatile int32_t t64 = 8699709;

	t64 = (((x257<x258)==x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	int16_t x263 = INT16_MIN;

	t65 = (((x261<x262)==x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = UINT64_MAX;
	uint64_t x267 = 6LLU;
	int16_t x268 = -1;
	int32_t t66 = -14582;

	t66 = (((x265<x266)==x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = 586;
	volatile int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = 7U;
	volatile int32_t t67 = -10686;

	t67 = (((x269<x270)==x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 110392U;
	int32_t x275 = INT32_MIN;
	volatile int8_t x276 = INT8_MAX;
	int32_t t68 = 53649;

	t68 = (((x273<x274)==x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -23;
	int16_t x278 = 13;
	uint16_t x280 = 551U;
	volatile int32_t t69 = -1;

	t69 = (((x277<x278)==x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	int16_t x282 = 2;
	volatile int16_t x283 = INT16_MIN;

	t70 = (((x281<x282)==x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x286 = INT16_MIN;
	static int16_t x287 = 0;
	static int64_t x288 = INT64_MAX;
	int32_t t71 = -54681621;

	t71 = (((x285<x286)==x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -3;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = -1;
	volatile uint64_t x292 = UINT64_MAX;
	int32_t t72 = 9537372;

	t72 = (((x289<x290)==x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MAX;
	volatile int64_t x294 = 0LL;
	static volatile int32_t x295 = INT32_MIN;
	int32_t t73 = 8;

	t73 = (((x293<x294)==x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = -1;
	static int64_t x299 = INT64_MAX;
	uint8_t x300 = UINT8_MAX;
	int32_t t74 = 2;

	t74 = (((x297<x298)==x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = UINT8_MAX;
	int8_t x303 = INT8_MIN;

	t75 = (((x301<x302)==x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x307 = 10U;
	uint32_t x308 = 1979873019U;
	static int32_t t76 = -18419101;

	t76 = (((x305<x306)==x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -366;
	int8_t x310 = INT8_MIN;
	static volatile uint8_t x311 = 6U;
	uint16_t x312 = UINT16_MAX;

	t77 = (((x309<x310)==x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -1;
	static int16_t x315 = INT16_MAX;
	volatile int16_t x316 = 2767;
	volatile int32_t t78 = 4;

	t78 = (((x313<x314)==x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	static volatile int32_t t79 = -3776;

	t79 = (((x317<x318)==x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -1;
	volatile uint8_t x323 = UINT8_MAX;
	volatile int32_t t80 = -1220;

	t80 = (((x321<x322)==x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int8_t x326 = -1;
	volatile int8_t x328 = INT8_MIN;

	t81 = (((x325<x326)==x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	uint32_t x330 = UINT32_MAX;
	int8_t x331 = 1;
	int32_t t82 = 1783;

	t82 = (((x329<x330)==x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MIN;
	int64_t x336 = 244LL;

	t83 = (((x333<x334)==x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -1;
	int16_t x338 = 452;
	static int8_t x339 = INT8_MIN;
	static volatile uint16_t x340 = 53U;
	volatile int32_t t84 = -168732017;

	t84 = (((x337<x338)==x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = UINT8_MAX;
	static uint32_t x343 = 9279U;
	volatile int16_t x344 = INT16_MAX;

	t85 = (((x341<x342)==x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile uint64_t x347 = 49LLU;
	volatile uint16_t x348 = UINT16_MAX;

	t86 = (((x345<x346)==x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 107953938359629LLU;
	static int32_t x351 = -1;
	int16_t x352 = -1;
	int32_t t87 = -1;

	t87 = (((x349<x350)==x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = 1;
	int32_t x355 = 5;
	volatile int16_t x356 = INT16_MAX;

	t88 = (((x353<x354)==x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = 1U;
	volatile int8_t x360 = INT8_MAX;
	int32_t t89 = -7;

	t89 = (((x357<x358)==x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = -8;
	volatile int16_t x362 = 152;
	int16_t x364 = INT16_MIN;
	static int32_t t90 = -3190166;

	t90 = (((x361<x362)==x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x368 = 6U;
	static int32_t t91 = -134396865;

	t91 = (((x365<x366)==x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -1043174LL;
	volatile int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -112;

	t92 = (((x369<x370)==x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = 4;
	int32_t x374 = 10176458;
	uint8_t x376 = 118U;
	int32_t t93 = -326;

	t93 = (((x373<x374)==x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x380 = 235U;
	int32_t t94 = 4;

	t94 = (((x377<x378)==x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = -1;
	volatile uint32_t x382 = 469U;
	int64_t x384 = -20976761881355LL;
	volatile int32_t t95 = 559;

	t95 = (((x381<x382)==x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = 141U;
	uint8_t x388 = 7U;
	volatile int32_t t96 = 158144;

	t96 = (((x385<x386)==x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = INT16_MAX;
	int64_t x391 = -1LL;
	static int64_t x392 = INT64_MIN;

	t97 = (((x389<x390)==x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = 3618;

	t98 = (((x393<x394)==x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 11523;
	int32_t x399 = -100652;
	uint64_t x400 = 1433575686012479123LLU;
	int32_t t99 = -4092;

	t99 = (((x397<x398)==x399)<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

