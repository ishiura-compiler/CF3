#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 5393U;
int8_t x7 = -22;
static volatile int32_t t1 = 114;
int64_t x16 = 8LL;
static uint64_t x17 = UINT64_MAX;
int16_t x20 = -993;
int32_t x23 = 1;
static volatile uint64_t x24 = UINT64_MAX;
int16_t x25 = -1;
static int8_t x27 = 15;
int16_t x41 = -1;
int8_t x43 = INT8_MIN;
uint16_t x55 = UINT16_MAX;
static int32_t x60 = INT32_MIN;
int64_t x62 = INT64_MIN;
volatile int8_t x64 = -1;
static int32_t x71 = INT32_MIN;
volatile int64_t x78 = -300847145LL;
int16_t x84 = -78;
volatile int32_t t21 = -3;
volatile uint32_t x93 = 10U;
static volatile int32_t x99 = 12;
uint8_t x100 = 22U;
int32_t t24 = 1549686;
uint32_t x101 = UINT32_MAX;
int32_t t25 = -5;
int32_t t28 = 5;
uint16_t x123 = UINT16_MAX;
int32_t x124 = INT32_MIN;
uint8_t x130 = 28U;
int32_t t33 = 1695629;
static uint16_t x139 = 4082U;
static uint64_t x142 = UINT64_MAX;
uint16_t x145 = 29299U;
int8_t x146 = -1;
int8_t x148 = 7;
static volatile uint8_t x155 = UINT8_MAX;
static volatile int32_t t38 = 1;
int8_t x157 = 15;
volatile uint8_t x159 = 6U;
uint16_t x171 = 27U;
static int8_t x176 = -1;
volatile int64_t x180 = INT64_MIN;
uint16_t x184 = 20U;
volatile uint16_t x185 = 4U;
int8_t x190 = INT8_MIN;
uint8_t x193 = UINT8_MAX;
int32_t x195 = INT32_MIN;
volatile int32_t t48 = 0;
int16_t x203 = INT16_MIN;
volatile int32_t t51 = 2;
int32_t t52 = 31;
static uint8_t x215 = 6U;
uint32_t x219 = 290167U;
int64_t x221 = INT64_MIN;
volatile uint64_t x223 = UINT64_MAX;
static uint64_t x226 = UINT64_MAX;
static int32_t t57 = -185;
int64_t x235 = -13174393LL;
static int8_t x236 = INT8_MIN;
volatile int32_t t58 = -3804559;
static volatile int32_t x238 = -63;
static int8_t x241 = INT8_MIN;
int16_t x253 = INT16_MIN;
int32_t x260 = -1;
static uint64_t x261 = 254810520918LLU;
int32_t x264 = INT32_MIN;
int64_t x278 = 429292177346963LL;
int8_t x280 = -1;
int32_t t69 = 2;
int32_t x281 = 73;
volatile int32_t x284 = 0;
static uint64_t x287 = 46289466919997434LLU;
int64_t x290 = -1LL;
int16_t x295 = INT16_MIN;
static uint8_t x298 = 61U;
static int32_t x302 = INT32_MIN;
int64_t x305 = INT64_MAX;
int32_t x307 = INT32_MAX;
int8_t x308 = INT8_MIN;
int64_t x309 = INT64_MIN;
int64_t x315 = INT64_MIN;
int32_t t78 = 17113;
int32_t t79 = 7;
int16_t x326 = INT16_MAX;
volatile int32_t t81 = -1054462;
uint8_t x329 = 1U;
int32_t x331 = -1;
static uint64_t x336 = 23522543354475LLU;
int8_t x345 = -1;
static int16_t x347 = -1;
int64_t x352 = INT64_MIN;
volatile int16_t x354 = INT16_MIN;
uint64_t x356 = UINT64_MAX;
uint32_t x358 = 18512432U;
uint64_t x359 = 81LLU;
volatile uint8_t x361 = UINT8_MAX;
int64_t x362 = -98820410614262LL;
static int16_t x376 = -1;
volatile int32_t t93 = -56886534;
uint8_t x377 = UINT8_MAX;
volatile int32_t x379 = 243;
volatile int8_t x385 = -2;
volatile int32_t x393 = -1;
static uint8_t x398 = 0U;
uint32_t x399 = 61084691U;


void f0(void) {
	int8_t x1 = -8;
	int64_t x3 = -1LL;
	uint32_t x4 = 160U;
	int32_t t0 = 1;

	t0 = ((x1<x2)*(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int8_t x6 = INT8_MIN;
	uint8_t x8 = 0U;

	t1 = ((x5<x6)*(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static uint32_t x10 = 3427U;
	int16_t x11 = INT16_MIN;
	int16_t x12 = -1;
	int32_t t2 = -41;

	t2 = ((x9<x10)*(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 9U;
	volatile int16_t x14 = -1;
	int64_t x15 = INT64_MIN;
	int32_t t3 = -4003;

	t3 = ((x13<x14)*(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 93989;
	static int32_t x19 = 39;
	volatile int32_t t4 = 135738272;

	t4 = ((x17<x18)*(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int32_t x22 = INT32_MAX;
	volatile int32_t t5 = -19000;

	t5 = ((x21<x22)*(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	uint8_t x28 = 17U;
	static int32_t t6 = -15883;

	t6 = ((x25<x26)*(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int32_t x30 = -1;
	static uint64_t x31 = 216477771542428LLU;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = -2219298;

	t7 = ((x29<x30)*(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -326705;
	static uint64_t x34 = 5LLU;
	int32_t x35 = -1;
	volatile int64_t x36 = 381577LL;
	int32_t t8 = -1;

	t8 = ((x33<x34)*(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = -1681179;
	int16_t x39 = 51;
	static volatile uint8_t x40 = 7U;
	int32_t t9 = 75694085;

	t9 = ((x37<x38)*(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MAX;
	int64_t x44 = 1914028076LL;
	volatile int32_t t10 = 55;

	t10 = ((x41<x42)*(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	static int64_t x47 = INT64_MIN;
	static int16_t x48 = -1;
	int32_t t11 = 80;

	t11 = ((x45<x46)*(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 48398417834976878LLU;
	int8_t x50 = -1;
	static uint32_t x51 = 639U;
	uint64_t x52 = 55034731622370231LLU;
	int32_t t12 = -466;

	t12 = ((x49<x50)*(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -37;
	uint16_t x54 = UINT16_MAX;
	static int32_t x56 = INT32_MIN;
	int32_t t13 = 323955;

	t13 = ((x53<x54)*(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	int32_t x58 = INT32_MAX;
	static uint16_t x59 = 4009U;
	int32_t t14 = -37717108;

	t14 = ((x57<x58)*(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -189809285056LL;
	uint16_t x63 = 3U;
	int32_t t15 = 4;

	t15 = ((x61<x62)*(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 60426948823LLU;
	static int32_t x66 = INT32_MIN;
	volatile int32_t x67 = INT32_MIN;
	uint8_t x68 = 0U;
	volatile int32_t t16 = 1;

	t16 = ((x65<x66)*(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile int8_t x70 = INT8_MIN;
	int16_t x72 = 99;
	int32_t t17 = -54981363;

	t17 = ((x69<x70)*(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	static uint8_t x74 = 7U;
	uint16_t x75 = UINT16_MAX;
	static volatile int32_t x76 = INT32_MAX;
	static int32_t t18 = 10;

	t18 = ((x73<x74)*(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -26;
	static int32_t x79 = 5690;
	int16_t x80 = INT16_MAX;
	int32_t t19 = -7;

	t19 = ((x77<x78)*(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -144;
	int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	int32_t t20 = -8;

	t20 = ((x81<x82)*(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -1;
	uint64_t x86 = 4863LLU;
	int64_t x87 = 72LL;
	int32_t x88 = -1;

	t21 = ((x85<x86)*(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = 2311634LLU;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 1;

	t22 = ((x89<x90)*(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 3U;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -12;

	t23 = ((x93<x94)*(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	static uint16_t x98 = UINT16_MAX;

	t24 = ((x97<x98)*(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = -2158;
	int16_t x104 = 8093;

	t25 = ((x101<x102)*(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = UINT8_MAX;
	volatile int16_t x106 = INT16_MAX;
	static int16_t x107 = INT16_MIN;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -343;

	t26 = ((x105<x106)*(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	uint32_t x110 = 6U;
	int64_t x111 = INT64_MAX;
	volatile int32_t x112 = -30859533;
	volatile int32_t t27 = -4188048;

	t27 = ((x109<x110)*(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 67U;
	volatile int8_t x114 = INT8_MAX;
	uint32_t x115 = 1307349021U;
	static uint8_t x116 = 1U;

	t28 = ((x113<x114)*(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 2U;
	uint16_t x118 = 7969U;
	uint8_t x119 = 11U;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -1212;

	t29 = ((x117<x118)*(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 7926676LL;
	uint64_t x122 = UINT64_MAX;
	volatile int32_t t30 = 11;

	t30 = ((x121<x122)*(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 229392007U;
	int16_t x126 = -1;
	static uint64_t x127 = 386207LLU;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 1528;

	t31 = ((x125<x126)*(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 1;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = 71902U;
	static volatile int32_t t32 = -879;

	t32 = ((x129<x130)*(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	static uint16_t x134 = 16U;
	int16_t x135 = 8;
	uint8_t x136 = 82U;

	t33 = ((x133<x134)*(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 3U;
	static uint16_t x138 = 1728U;
	static uint8_t x140 = 11U;
	volatile int32_t t34 = 1142;

	t34 = ((x137<x138)*(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x143 = 1369U;
	uint8_t x144 = 1U;
	int32_t t35 = 2;

	t35 = ((x141<x142)*(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x147 = UINT64_MAX;
	volatile int32_t t36 = 361;

	t36 = ((x145<x146)*(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 14;
	int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MAX;
	volatile int8_t x152 = -1;
	static int32_t t37 = -128610327;

	t37 = ((x149<x150)*(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	int64_t x154 = INT64_MIN;
	static int64_t x156 = INT64_MIN;

	t38 = ((x153<x154)*(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = INT64_MAX;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = -81693403;

	t39 = ((x157<x158)*(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static uint16_t x162 = UINT16_MAX;
	static int16_t x163 = INT16_MIN;
	int32_t x164 = -32396553;
	volatile int32_t t40 = 34864302;

	t40 = ((x161<x162)*(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int16_t x166 = INT16_MIN;
	static uint64_t x167 = 146053347959085LLU;
	int32_t x168 = -1;
	volatile int32_t t41 = 129;

	t41 = ((x165<x166)*(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 34;
	uint64_t x170 = 59014555LLU;
	volatile int8_t x172 = 13;
	volatile int32_t t42 = -1;

	t42 = ((x169<x170)*(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 1354477379489LL;
	int64_t x174 = INT64_MIN;
	static int16_t x175 = -1;
	volatile int32_t t43 = 25;

	t43 = ((x173<x174)*(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	static int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MAX;
	volatile int32_t t44 = 212;

	t44 = ((x177<x178)*(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	static int16_t x182 = 1816;
	int64_t x183 = 10565846076289LL;
	int32_t t45 = 52410633;

	t45 = ((x181<x182)*(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = 68190878951858258LLU;
	volatile uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 1U;
	int32_t t46 = 3818;

	t46 = ((x185<x186)*(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x191 = 11U;
	int8_t x192 = INT8_MIN;
	static int32_t t47 = -17928431;

	t47 = ((x189<x190)*(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -1;
	volatile int8_t x196 = INT8_MIN;

	t48 = ((x193<x194)*(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	uint32_t x198 = 21U;
	volatile int64_t x199 = 3LL;
	static int64_t x200 = INT64_MIN;
	static int32_t t49 = 469059068;

	t49 = ((x197<x198)*(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MAX;
	int8_t x202 = INT8_MIN;
	volatile uint16_t x204 = UINT16_MAX;
	int32_t t50 = -537631013;

	t50 = ((x201<x202)*(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	static uint16_t x206 = UINT16_MAX;
	int32_t x207 = 226;
	static int32_t x208 = INT32_MIN;

	t51 = ((x205<x206)*(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = -1;
	uint8_t x211 = 12U;
	int64_t x212 = -25LL;

	t52 = ((x209<x210)*(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	volatile uint32_t x214 = UINT32_MAX;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 56628;

	t53 = ((x213<x214)*(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	volatile int32_t x218 = -19295;
	uint8_t x220 = 0U;
	static int32_t t54 = 76987518;

	t54 = ((x217<x218)*(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x222 = UINT16_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t55 = -69975;

	t55 = ((x221<x222)*(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	uint32_t x227 = 16U;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 8733314;

	t56 = ((x225<x226)*(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = 9314328;
	uint64_t x230 = UINT64_MAX;
	uint64_t x231 = 1476086788543010LLU;
	int64_t x232 = 29846332298048017LL;

	t57 = ((x229<x230)*(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 6;
	int8_t x234 = -1;

	t58 = ((x233<x234)*(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	volatile uint64_t x239 = 27LLU;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -269596405;

	t59 = ((x237<x238)*(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 29U;
	static uint64_t x244 = 15476888323370LLU;
	int32_t t60 = 117502435;

	t60 = ((x241<x242)*(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = 51322004169165LL;
	uint64_t x246 = UINT64_MAX;
	uint32_t x247 = 266U;
	volatile int32_t x248 = -1;
	volatile int32_t t61 = -251740;

	t61 = ((x245<x246)*(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = -2;
	static int16_t x251 = -217;
	static int16_t x252 = INT16_MIN;
	int32_t t62 = -335221969;

	t62 = ((x249<x250)*(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = 69;
	volatile int64_t x255 = 224901LL;
	static volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = 194690555;

	t63 = ((x253<x254)*(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	volatile uint8_t x258 = UINT8_MAX;
	int64_t x259 = INT64_MAX;
	int32_t t64 = -53673;

	t64 = ((x257<x258)*(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	static int8_t x263 = INT8_MIN;
	volatile int32_t t65 = 740;

	t65 = ((x261<x262)*(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = 80U;
	volatile int32_t x267 = INT32_MAX;
	int8_t x268 = 9;
	volatile int32_t t66 = -654546;

	t66 = ((x265<x266)*(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = UINT64_MAX;
	static uint32_t x271 = 25U;
	static uint64_t x272 = 3135LLU;
	volatile int32_t t67 = -64274;

	t67 = ((x269<x270)*(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	static int32_t x274 = INT32_MIN;
	int16_t x275 = -128;
	int16_t x276 = -6446;
	volatile int32_t t68 = 455;

	t68 = ((x273<x274)*(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int32_t x279 = INT32_MAX;

	t69 = ((x277<x278)*(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -3;
	int8_t x283 = INT8_MIN;
	static int32_t t70 = -3;

	t70 = ((x281<x282)*(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -490948198LL;
	int16_t x286 = -1;
	uint16_t x288 = 0U;
	volatile int32_t t71 = -806;

	t71 = ((x285<x286)*(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 1U;
	int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t72 = -208345;

	t72 = ((x289<x290)*(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -427056;
	volatile int16_t x294 = 1;
	static uint8_t x296 = 22U;
	static volatile int32_t t73 = -1;

	t73 = ((x293<x294)*(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 72U;
	volatile int64_t x299 = -369485466LL;
	volatile int64_t x300 = INT64_MIN;
	int32_t t74 = -5772610;

	t74 = ((x297<x298)*(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	uint16_t x303 = 16743U;
	static uint32_t x304 = 552720022U;
	static volatile int32_t t75 = 2;

	t75 = ((x301<x302)*(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x306 = 62U;
	volatile int32_t t76 = 1377;

	t76 = ((x305<x306)*(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 6U;
	uint8_t x311 = 12U;
	uint8_t x312 = UINT8_MAX;
	static int32_t t77 = -451898;

	t77 = ((x309<x310)*(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = UINT16_MAX;
	int8_t x314 = 0;
	uint64_t x316 = 26937468LLU;

	t78 = ((x313<x314)*(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static volatile int64_t x318 = 37734203LL;
	static int32_t x319 = 6227782;
	uint64_t x320 = 28091129091107LLU;

	t79 = ((x317<x318)*(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x321 = 1096011261473LLU;
	static int8_t x322 = INT8_MAX;
	volatile uint64_t x323 = 782045042497656783LLU;
	uint8_t x324 = UINT8_MAX;
	static int32_t t80 = 6394581;

	t80 = ((x321<x322)*(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 9;
	volatile int8_t x327 = 30;
	uint8_t x328 = 18U;

	t81 = ((x325<x326)*(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = UINT32_MAX;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 108348;

	t82 = ((x329<x330)*(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 7323;
	volatile int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MIN;
	static volatile int32_t t83 = 15;

	t83 = ((x333<x334)*(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = -1LL;
	volatile int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 889254;

	t84 = ((x337<x338)*(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 3U;
	static uint32_t x342 = 106755U;
	volatile int32_t x343 = -14793;
	uint8_t x344 = 73U;
	int32_t t85 = -2598419;

	t85 = ((x341<x342)*(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 12;
	int32_t x348 = 13;
	int32_t t86 = -1423478;

	t86 = ((x345<x346)*(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -22605292107454LL;
	int16_t x350 = INT16_MIN;
	static uint8_t x351 = 44U;
	int32_t t87 = 213;

	t87 = ((x349<x350)*(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 3;
	uint64_t x355 = 1513157201918LLU;
	int32_t t88 = 9967;

	t88 = ((x353<x354)*(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 0U;
	int32_t x360 = INT32_MAX;
	int32_t t89 = 1;

	t89 = ((x357<x358)*(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x363 = INT16_MAX;
	uint16_t x364 = 228U;
	volatile int32_t t90 = 5011;

	t90 = ((x361<x362)*(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	static int32_t x366 = INT32_MAX;
	int16_t x367 = -1;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t91 = -4030;

	t91 = ((x365<x366)*(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 30;
	int8_t x370 = INT8_MIN;
	int8_t x371 = 0;
	uint16_t x372 = 2U;
	volatile int32_t t92 = -63;

	t92 = ((x369<x370)*(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	int16_t x374 = -182;
	uint8_t x375 = UINT8_MAX;

	t93 = ((x373<x374)*(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = -10;
	uint64_t x380 = 152736210859231457LLU;
	int32_t t94 = 34;

	t94 = ((x377<x378)*(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static volatile uint32_t x382 = 34133U;
	int8_t x383 = 1;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 211554;

	t95 = ((x381<x382)*(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = -436654;
	uint8_t x387 = UINT8_MAX;
	static int64_t x388 = INT64_MIN;
	int32_t t96 = 89694;

	t96 = ((x385<x386)*(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = 790636295;
	int8_t x390 = INT8_MIN;
	int64_t x391 = 2463571437LL;
	volatile uint32_t x392 = 15U;
	static volatile int32_t t97 = -3902;

	t97 = ((x389<x390)*(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MAX;
	int64_t x395 = 11919LL;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t98 = -3798053;

	t98 = ((x393<x394)*(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	int32_t t99 = -6243;

	t99 = ((x397<x398)*(x399<=x400));

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

