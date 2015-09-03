#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x6 = 10U;
uint64_t t1 = 97244037706220LLU;
uint16_t x20 = 4U;
static uint8_t x22 = 32U;
uint32_t t4 = 4592436U;
static int64_t x28 = -1LL;
int16_t x33 = INT16_MAX;
int64_t x35 = -65468LL;
int16_t x36 = -760;
static uint16_t x44 = 18U;
int64_t x50 = INT64_MIN;
volatile uint64_t t10 = UINT64_MAX;
uint64_t x61 = UINT64_MAX;
int32_t t15 = 1;
static uint8_t x74 = 0U;
int16_t x75 = 0;
uint32_t x82 = 5344U;
int32_t x86 = INT32_MAX;
volatile int16_t x91 = INT16_MAX;
static int64_t t20 = INT64_MIN;
static int32_t x93 = INT32_MAX;
volatile int32_t x98 = INT32_MIN;
int64_t x99 = INT64_MIN;
int16_t x106 = INT16_MAX;
volatile uint64_t t23 = 4051347514963LLU;
static int32_t x115 = 10199;
int32_t x117 = -3;
uint32_t x118 = UINT32_MAX;
volatile uint32_t t27 = 1U;
static volatile int64_t x125 = 6912LL;
int16_t x135 = INT16_MIN;
uint32_t t30 = 10201U;
int8_t x142 = INT8_MIN;
uint8_t x151 = 0U;
int64_t x153 = INT64_MIN;
volatile uint64_t t36 = 99LLU;
volatile uint32_t x161 = 2U;
volatile uint64_t x174 = 173804990290496LLU;
uint8_t x187 = 0U;
uint64_t t43 = 2229894526513095LLU;
volatile uint32_t x195 = 13135U;
int8_t x203 = 0;
static int16_t x206 = INT16_MIN;
volatile int64_t x210 = 2168001041824LL;
volatile int32_t t49 = INT32_MIN;
volatile int64_t x216 = INT64_MIN;
uint64_t t50 = 1759199960461LLU;
int8_t x227 = INT8_MAX;
uint16_t x230 = 3797U;
volatile int32_t x231 = 7073;
int64_t x232 = INT64_MAX;
static int32_t t54 = -73;
static uint64_t x239 = 10864242887LLU;
volatile int64_t t55 = -3336LL;
uint8_t x246 = 2U;
uint64_t x250 = UINT64_MAX;
int64_t x258 = -1LL;
int32_t x261 = 3311;
volatile int32_t x264 = -879045;
int64_t x268 = 220416165760662115LL;
volatile int64_t x274 = INT64_MIN;
int8_t x278 = INT8_MAX;
int32_t x280 = -1;
int64_t x283 = INT64_MAX;
int32_t x287 = INT32_MIN;
int16_t x294 = -1;
uint16_t x296 = 1842U;
int32_t t69 = 2658;
static int16_t x301 = 1;
int32_t t71 = 140790610;
volatile int8_t x315 = INT8_MAX;
volatile int32_t x318 = -160;
int32_t x325 = 125639445;
static volatile uint16_t x334 = UINT16_MAX;
static uint32_t x335 = 13U;
uint64_t x339 = 2958739291525LLU;
uint32_t x347 = 448U;
int32_t t82 = 565;
int64_t x359 = -32146331LL;
static int64_t x374 = INT64_MAX;
uint64_t x375 = 13625256192358916LLU;
int16_t x377 = INT16_MAX;
volatile int64_t x378 = -27113516144160681LL;
uint64_t x381 = UINT64_MAX;
uint64_t x385 = 0LLU;
int16_t x388 = -1;
static volatile int64_t x393 = 30909196737772863LL;
int16_t x395 = 4870;
uint16_t x397 = UINT16_MAX;
uint16_t x399 = 91U;
int32_t t94 = 210704;
volatile int32_t t95 = -1274605;
volatile uint64_t t96 = 576282346760853176LLU;
int8_t x409 = -2;
int64_t x410 = INT64_MIN;
volatile int32_t t97 = -224365125;
int16_t x416 = INT16_MIN;


void f0(void) {
	static uint32_t x5 = 77673U;
	static int8_t x7 = INT8_MIN;
	static int32_t x8 = INT32_MAX;
	uint32_t t0 = 923664308U;

	t0 = ((x5*(x6<x7))+x8);

	if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 2004LLU;
	int32_t x10 = INT32_MIN;
	static int32_t x11 = INT32_MIN;
	volatile int16_t x12 = 1;

	t1 = ((x9*(x10<x11))+x12);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -27007019LL;
	uint8_t x14 = 8U;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	static volatile int64_t t2 = -37629299745858263LL;

	t2 = ((x13*(x14<x15))+x16);

	if (t2 != -27007147LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	uint16_t x18 = 7748U;
	volatile int64_t x19 = INT64_MAX;
	int32_t t3 = -913234301;

	t3 = ((x17*(x18<x19))+x20);

	if (t3 != -124) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 244436287U;
	int32_t x23 = -1;
	int32_t x24 = 46087;

	t4 = ((x21*(x22<x23))+x24);

	if (t4 != 46087U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 500U;
	volatile int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MIN;
	int64_t t5 = 77LL;

	t5 = ((x25*(x26<x27))+x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x34 = 18845U;
	int32_t t6 = 1;

	t6 = ((x33*(x34<x35))+x36);

	if (t6 != -760) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 264367448693LLU;
	int64_t x38 = -600LL;
	int32_t x39 = INT32_MIN;
	static uint16_t x40 = 93U;
	volatile uint64_t t7 = 1399594251322LLU;

	t7 = ((x37*(x38<x39))+x40);

	if (t7 != 93LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 15883U;
	int16_t x42 = INT16_MIN;
	static volatile int64_t x43 = 39590143874LL;
	int32_t t8 = -1;

	t8 = ((x41*(x42<x43))+x44);

	if (t8 != 15901) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 9605304U;
	static volatile int16_t x46 = INT16_MIN;
	int16_t x47 = -1;
	volatile int8_t x48 = INT8_MIN;
	static uint32_t t9 = 32026U;

	t9 = ((x45*(x46<x47))+x48);

	if (t9 != 9605176U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = -1;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;

	t10 = ((x49*(x50<x51))+x52);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = INT8_MAX;
	static volatile uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 26U;
	int8_t x56 = INT8_MAX;
	static volatile int32_t t11 = -184706447;

	t11 = ((x53*(x54<x55))+x56);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	static int64_t x59 = INT64_MIN;
	uint8_t x60 = 115U;
	volatile int32_t t12 = -1;

	t12 = ((x57*(x58<x59))+x60);

	if (t12 != 115) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x62 = UINT32_MAX;
	uint16_t x63 = 4834U;
	int64_t x64 = INT64_MIN;
	static volatile uint64_t t13 = 50499395906LLU;

	t13 = ((x61*(x62<x63))+x64);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x65 = 40U;
	uint16_t x66 = 1U;
	int8_t x67 = INT8_MIN;
	int16_t x68 = 0;
	volatile int32_t t14 = -7638;

	t14 = ((x65*(x66<x67))+x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = INT8_MIN;
	uint16_t x70 = 1U;
	static int32_t x71 = 1;
	int16_t x72 = -1;

	t15 = ((x69*(x70<x71))+x72);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 2676150922972069547LLU;
	volatile uint64_t x76 = 108105467166LLU;
	static volatile uint64_t t16 = 6173390921937541839LLU;

	t16 = ((x73*(x74<x75))+x76);

	if (t16 != 108105467166LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 117U;
	int16_t x78 = INT16_MIN;
	int16_t x79 = -359;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t17 = 37134075814243590LLU;

	t17 = ((x77*(x78<x79))+x80);

	if (t17 != 116LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 2U;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = UINT16_MAX;
	volatile uint32_t t18 = 111U;

	t18 = ((x81*(x82<x83))+x84);

	if (t18 != 65537U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 7129LL;
	int32_t x87 = 728168;
	int8_t x88 = INT8_MAX;
	static volatile int64_t t19 = 139171395LL;

	t19 = ((x85*(x86<x87))+x88);

	if (t19 != 127LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	static uint32_t x90 = UINT32_MAX;
	int64_t x92 = INT64_MIN;

	t20 = ((x89*(x90<x91))+x92);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x94 = UINT8_MAX;
	volatile int16_t x95 = -1;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = 17827796;

	t21 = ((x93*(x94<x95))+x96);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = -1;
	int64_t x100 = 165675341148402LL;
	int64_t t22 = 873318532335881LL;

	t22 = ((x97*(x98<x99))+x100);

	if (t22 != 165675341148402LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 15919291701LLU;
	uint16_t x107 = 2U;
	volatile int32_t x108 = INT32_MIN;

	t23 = ((x105*(x106<x107))+x108);

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = -1;
	int32_t x111 = INT32_MIN;
	static int64_t x112 = INT64_MAX;
	static uint64_t t24 = 138041302603274166LLU;

	t24 = ((x109*(x110<x111))+x112);

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	uint16_t x116 = 1277U;
	int32_t t25 = 495;

	t25 = ((x113*(x114<x115))+x116);

	if (t25 != -31491) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x119 = 13755U;
	static int32_t x120 = INT32_MAX;
	int32_t t26 = INT32_MAX;

	t26 = ((x117*(x118<x119))+x120);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 103177U;
	uint32_t x122 = UINT32_MAX;
	int64_t x123 = -165012772252861377LL;
	volatile int8_t x124 = INT8_MAX;

	t27 = ((x121*(x122<x123))+x124);

	if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x126 = INT64_MIN;
	volatile int16_t x127 = INT16_MAX;
	volatile int32_t x128 = -52372;
	volatile int64_t t28 = -30607086LL;

	t28 = ((x125*(x126<x127))+x128);

	if (t28 != -45460LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 119U;
	uint64_t x130 = UINT64_MAX;
	static int8_t x131 = INT8_MAX;
	static volatile int64_t x132 = 3274662210249241LL;
	volatile int64_t t29 = -448839973LL;

	t29 = ((x129*(x130<x131))+x132);

	if (t29 != 3274662210249241LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = 1LL;
	uint16_t x136 = UINT16_MAX;

	t30 = ((x133*(x134<x135))+x136);

	if (t30 != 65535U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	static uint8_t x138 = UINT8_MAX;
	uint32_t x139 = 70211311U;
	static int16_t x140 = INT16_MAX;
	volatile int32_t t31 = 2975437;

	t31 = ((x137*(x138<x139))+x140);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 52283U;
	uint64_t x143 = 1577829016326125687LLU;
	uint32_t x144 = 710298371U;
	uint32_t t32 = 5U;

	t32 = ((x141*(x142<x143))+x144);

	if (t32 != 710298371U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MAX;
	int64_t x146 = -224438LL;
	static volatile uint8_t x147 = 3U;
	int16_t x148 = 262;
	int32_t t33 = 8639287;

	t33 = ((x145*(x146<x147))+x148);

	if (t33 != 389) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x150 = 369U;
	volatile int8_t x152 = -1;
	int64_t t34 = 74LL;

	t34 = ((x149*(x150<x151))+x152);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x154 = UINT32_MAX;
	int32_t x155 = -29;
	int16_t x156 = INT16_MIN;
	int64_t t35 = -1423969008LL;

	t35 = ((x153*(x154<x155))+x156);

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x157 = UINT64_MAX;
	uint8_t x158 = UINT8_MAX;
	volatile int64_t x159 = 177286LL;
	int8_t x160 = -1;

	t36 = ((x157*(x158<x159))+x160);

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x162 = INT16_MIN;
	static volatile int8_t x163 = INT8_MAX;
	int32_t x164 = -1;
	volatile uint32_t t37 = 8108U;

	t37 = ((x161*(x162<x163))+x164);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = INT32_MIN;
	int8_t x166 = 0;
	int32_t x167 = -1;
	int16_t x168 = INT16_MIN;
	int32_t t38 = 88;

	t38 = ((x165*(x166<x167))+x168);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 13856U;
	int32_t x171 = INT32_MIN;
	static int64_t x172 = -4188425LL;
	int64_t t39 = -15LL;

	t39 = ((x169*(x170<x171))+x172);

	if (t39 != -4221193LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x173 = UINT16_MAX;
	uint32_t x175 = 145U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t40 = 234331;

	t40 = ((x173*(x174<x175))+x176);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 78753570;
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MAX;
	volatile int32_t t41 = -2;

	t41 = ((x177*(x178<x179))+x180);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -6;
	int64_t x182 = INT64_MAX;
	volatile uint64_t x183 = 8160011019LLU;
	int64_t x184 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = ((x181*(x182<x183))+x184);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x185 = -1;
	volatile int64_t x186 = -36739911160640LL;
	uint64_t x188 = 1638579737LLU;

	t43 = ((x185*(x186<x187))+x188);

	if (t43 != 1638579736LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = INT16_MAX;
	volatile int8_t x190 = -1;
	static uint8_t x191 = 96U;
	volatile uint16_t x192 = 0U;
	static int32_t t44 = -10575;

	t44 = ((x189*(x190<x191))+x192);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 73U;
	uint16_t x194 = UINT16_MAX;
	int32_t x196 = -1;
	int32_t t45 = 40;

	t45 = ((x193*(x194<x195))+x196);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 0;
	int8_t x198 = -1;
	static volatile uint64_t x199 = 2364738LLU;
	uint16_t x200 = 417U;
	int32_t t46 = 98219;

	t46 = ((x197*(x198<x199))+x200);

	if (t46 != 417) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x202 = 1U;
	uint32_t x204 = 101533U;
	volatile int64_t t47 = 26645219047LL;

	t47 = ((x201*(x202<x203))+x204);

	if (t47 != 101533LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 0;
	volatile int16_t x207 = INT16_MAX;
	int32_t x208 = 1;
	int32_t t48 = 9;

	t48 = ((x205*(x206<x207))+x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x209 = -1;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;

	t49 = ((x209*(x210<x211))+x212);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x213 = 18318360216968891LLU;
	volatile int64_t x214 = -1945155168407295978LL;
	uint32_t x215 = 116U;

	t50 = ((x213*(x214<x215))+x216);

	if (t50 != 9241690397071744699LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = 161LLU;
	volatile uint32_t x218 = UINT32_MAX;
	volatile uint8_t x219 = 51U;
	int64_t x220 = -1LL;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x217*(x218<x219))+x220);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x225 = 115U;
	int16_t x226 = INT16_MAX;
	uint16_t x228 = 226U;
	volatile uint32_t t52 = 19U;

	t52 = ((x225*(x226<x227))+x228);

	if (t52 != 226U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -1;
	static volatile int64_t t53 = -42899260479LL;

	t53 = ((x229*(x230<x231))+x232);

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = 9;
	volatile uint8_t x234 = 0U;
	int32_t x235 = 18;
	static uint8_t x236 = 56U;

	t54 = ((x233*(x234<x235))+x236);

	if (t54 != 65) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MIN;
	int16_t x240 = -1;

	t55 = ((x237*(x238<x239))+x240);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MAX;
	uint32_t x243 = 12449U;
	int16_t x244 = 55;
	int32_t t56 = 0;

	t56 = ((x241*(x242<x243))+x244);

	if (t56 != 55) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x245 = 6057;
	int64_t x247 = INT64_MIN;
	static uint32_t x248 = 6U;
	uint32_t t57 = 4U;

	t57 = ((x245*(x246<x247))+x248);

	if (t57 != 6U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = INT64_MIN;
	int32_t x251 = INT32_MIN;
	uint32_t x252 = 14369U;
	static int64_t t58 = -2832935957276684731LL;

	t58 = ((x249*(x250<x251))+x252);

	if (t58 != 14369LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = -1LL;
	volatile uint16_t x254 = UINT16_MAX;
	int64_t x255 = INT64_MIN;
	static int16_t x256 = 31;
	int64_t t59 = 4LL;

	t59 = ((x253*(x254<x255))+x256);

	if (t59 != 31LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 1157679850022LLU;
	uint16_t x259 = 0U;
	int64_t x260 = -2707392678LL;
	uint64_t t60 = 379715062905LLU;

	t60 = ((x257*(x258<x259))+x260);

	if (t60 != 1154972457344LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MAX;
	int32_t t61 = 198398;

	t61 = ((x261*(x262<x263))+x264);

	if (t61 != -875734) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x265 = 117U;
	int8_t x266 = INT8_MIN;
	static volatile int8_t x267 = INT8_MIN;
	volatile int64_t t62 = -265861893258119LL;

	t62 = ((x265*(x266<x267))+x268);

	if (t62 != 220416165760662115LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 8U;
	volatile uint32_t x270 = 710U;
	static volatile int32_t x271 = INT32_MAX;
	int64_t x272 = INT64_MIN;
	int64_t t63 = 149450501957LL;

	t63 = ((x269*(x270<x271))+x272);

	if (t63 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x273 = -1LL;
	uint32_t x275 = 962519U;
	uint64_t x276 = UINT64_MAX;
	static uint64_t t64 = 2082772661010LLU;

	t64 = ((x273*(x274<x275))+x276);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MAX;
	int64_t x279 = INT64_MIN;
	static int32_t t65 = 5805;

	t65 = ((x277*(x278<x279))+x280);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = INT64_MAX;
	int32_t x282 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	volatile int64_t t66 = -1232287698225652LL;

	t66 = ((x281*(x282<x283))+x284);

	if (t66 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = 42319501290LL;
	int64_t x286 = -14LL;
	uint64_t x288 = 223953399285LLU;
	volatile uint64_t t67 = 3LLU;

	t67 = ((x285*(x286<x287))+x288);

	if (t67 != 223953399285LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	static int16_t x290 = -63;
	int64_t x291 = INT64_MIN;
	volatile int32_t x292 = INT32_MIN;
	int64_t t68 = 25732978LL;

	t68 = ((x289*(x290<x291))+x292);

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MIN;
	static int32_t x295 = INT32_MIN;

	t69 = ((x293*(x294<x295))+x296);

	if (t69 != 1842) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x297 = 42U;
	static int8_t x298 = INT8_MIN;
	int64_t x299 = -1LL;
	static uint16_t x300 = 2U;
	static int32_t t70 = -29110781;

	t70 = ((x297*(x298<x299))+x300);

	if (t70 != 44) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x302 = 63;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = UINT16_MAX;

	t71 = ((x301*(x302<x303))+x304);

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	volatile int16_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = UINT16_MAX;
	static volatile int32_t t72 = -3;

	t72 = ((x305*(x306<x307))+x308);

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = -25;
	static int32_t x311 = INT32_MIN;
	uint16_t x312 = 1U;
	volatile int64_t t73 = 13910LL;

	t73 = ((x309*(x310<x311))+x312);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MAX;
	static uint8_t x316 = 34U;
	int64_t t74 = -17729LL;

	t74 = ((x313*(x314<x315))+x316);

	if (t74 != 34LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x317 = UINT16_MAX;
	uint32_t x319 = 0U;
	int32_t x320 = -48;
	int32_t t75 = 26880937;

	t75 = ((x317*(x318<x319))+x320);

	if (t75 != -48) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = 3;
	int8_t x322 = INT8_MIN;
	volatile int16_t x323 = INT16_MIN;
	int64_t x324 = 16609888490723LL;
	static int64_t t76 = 793275LL;

	t76 = ((x321*(x322<x323))+x324);

	if (t76 != 16609888490723LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x326 = 10U;
	int64_t x327 = 39LL;
	int16_t x328 = INT16_MIN;
	volatile int32_t t77 = -235;

	t77 = ((x325*(x326<x327))+x328);

	if (t77 != 125606677) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -4;
	volatile uint8_t x330 = 7U;
	int8_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	int32_t t78 = -903272109;

	t78 = ((x329*(x330<x331))+x332);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x333 = 115075994U;
	static uint16_t x336 = 114U;
	uint32_t t79 = 479490U;

	t79 = ((x333*(x334<x335))+x336);

	if (t79 != 114U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	static uint64_t x338 = 18934LLU;
	uint64_t x340 = 14943374928875LLU;
	uint64_t t80 = 11LLU;

	t80 = ((x337*(x338<x339))+x340);

	if (t80 != 9223386980229704683LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = -10242424951580631LL;
	int32_t x342 = INT32_MAX;
	volatile uint32_t x343 = 118301U;
	uint32_t x344 = 53159U;
	int64_t t81 = 410LL;

	t81 = ((x341*(x342<x343))+x344);

	if (t81 != 53159LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x345 = -1;
	uint8_t x346 = 5U;
	int8_t x348 = -3;

	t82 = ((x345*(x346<x347))+x348);

	if (t82 != -4) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x349 = UINT64_MAX;
	static uint16_t x350 = 1623U;
	static int8_t x351 = 0;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t83 = 1023069825553076766LLU;

	t83 = ((x349*(x350<x351))+x352);

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x353 = 1295U;
	int16_t x354 = -2;
	int64_t x355 = INT64_MAX;
	volatile int16_t x356 = INT16_MIN;
	int32_t t84 = -1405;

	t84 = ((x353*(x354<x355))+x356);

	if (t84 != -31473) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = -1;
	int16_t x358 = 1;
	uint8_t x360 = 4U;
	volatile int32_t t85 = -99336627;

	t85 = ((x357*(x358<x359))+x360);

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MIN;
	volatile uint64_t x362 = UINT64_MAX;
	uint32_t x363 = 96U;
	uint16_t x364 = 283U;
	volatile int32_t t86 = 12882;

	t86 = ((x361*(x362<x363))+x364);

	if (t86 != 283) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MAX;
	volatile int16_t x371 = INT16_MIN;
	volatile uint64_t x372 = 80877895LLU;
	volatile uint64_t t87 = 487LLU;

	t87 = ((x369*(x370<x371))+x372);

	if (t87 != 80877895LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = 112U;
	static int32_t x376 = -695020;
	static int32_t t88 = -42265;

	t88 = ((x373*(x374<x375))+x376);

	if (t88 != -695020) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x379 = INT16_MIN;
	uint64_t x380 = 260872313979726700LLU;
	static uint64_t t89 = 1881959LLU;

	t89 = ((x377*(x378<x379))+x380);

	if (t89 != 260872313979759467LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x382 = -1;
	int32_t x383 = -1;
	int64_t x384 = -1LL;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x381*(x382<x383))+x384);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x385*(x386<x387))+x388);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x389 = INT16_MIN;
	int16_t x390 = 5;
	volatile uint16_t x391 = 1536U;
	int16_t x392 = INT16_MIN;
	int32_t t92 = 10360;

	t92 = ((x389*(x390<x391))+x392);

	if (t92 != -65536) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x394 = INT64_MIN;
	uint8_t x396 = UINT8_MAX;
	volatile int64_t t93 = -5823129814318LL;

	t93 = ((x393*(x394<x395))+x396);

	if (t93 != 30909196737773118LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x398 = 10994;
	int8_t x400 = -1;

	t94 = ((x397*(x398<x399))+x400);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 1U;
	static uint64_t x402 = 430512300441743LLU;
	static uint16_t x403 = 4U;
	int16_t x404 = -1;

	t95 = ((x401*(x402<x403))+x404);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = 0;
	volatile int64_t x406 = -1LL;
	volatile int16_t x407 = INT16_MIN;
	static uint64_t x408 = 8327328980976321144LLU;

	t96 = ((x405*(x406<x407))+x408);

	if (t96 != 8327328980976321144LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x411 = INT64_MIN;
	int8_t x412 = 7;

	t97 = ((x409*(x410<x411))+x412);

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = -12733052;
	int8_t x414 = -4;
	uint64_t x415 = 3337LLU;
	volatile int32_t t98 = 593;

	t98 = ((x413*(x414<x415))+x416);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x417 = -1LL;
	uint32_t x418 = 16645432U;
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MIN;
	int64_t t99 = 2874061253692LL;

	t99 = ((x417*(x418<x419))+x420);

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

