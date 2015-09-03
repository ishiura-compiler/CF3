#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = UINT32_MAX;
volatile int16_t x13 = -6178;
int64_t x15 = -1491LL;
volatile uint16_t x21 = 2U;
uint64_t x32 = 594206614756390110LLU;
int32_t x33 = INT32_MIN;
int64_t x34 = INT64_MIN;
int32_t x35 = -1;
uint64_t x37 = 355018532137534438LLU;
int8_t x40 = INT8_MIN;
int8_t x42 = -6;
volatile uint8_t x49 = UINT8_MAX;
static volatile uint16_t x62 = 1U;
uint64_t t12 = 500995254LLU;
int8_t x65 = INT8_MIN;
volatile uint64_t x66 = 201011LLU;
uint8_t x69 = UINT8_MAX;
uint32_t x72 = 76860U;
volatile int16_t x73 = INT16_MIN;
volatile int8_t x75 = INT8_MIN;
uint64_t t15 = 103878LLU;
volatile int32_t t17 = -259484;
int8_t x85 = 13;
int8_t x90 = INT8_MIN;
volatile uint32_t t20 = 1U;
int8_t x97 = 1;
volatile int32_t x98 = -1;
uint32_t t23 = 1U;
int16_t x117 = INT16_MAX;
int32_t x123 = -29;
int8_t x126 = 1;
volatile int32_t x127 = INT32_MIN;
volatile int64_t x138 = -11LL;
int64_t x145 = -69809459LL;
uint64_t x149 = 77LLU;
int32_t x151 = -344;
static uint8_t x153 = 37U;
uint32_t x154 = 8313U;
int8_t x155 = -1;
volatile int64_t x157 = -1LL;
int16_t x166 = 7;
volatile int16_t x171 = -1;
volatile uint16_t x172 = 1U;
int32_t t37 = -128;
int64_t x174 = INT64_MIN;
int16_t x185 = INT16_MIN;
int64_t x188 = -113LL;
int16_t x193 = -1;
int8_t x206 = -1;
uint32_t x209 = 0U;
int64_t x213 = -2039822601710037LL;
volatile uint16_t x215 = UINT16_MAX;
uint32_t x216 = 5364U;
int8_t x219 = INT8_MAX;
static int64_t x220 = INT64_MIN;
int64_t x224 = 1LL;
static int64_t t47 = -136196190LL;
int8_t x233 = -1;
static uint8_t x234 = UINT8_MAX;
int32_t x245 = -799318536;
uint64_t t53 = 160LLU;
uint32_t x260 = 223U;
volatile uint64_t x261 = UINT64_MAX;
static volatile uint16_t x267 = 26973U;
static int8_t x268 = INT8_MIN;
int64_t t56 = -1460220LL;
uint8_t x273 = 0U;
volatile uint16_t x290 = 1921U;
int8_t x293 = 2;
int32_t t62 = -6767;
volatile int16_t x302 = INT16_MIN;
int8_t x306 = -1;
volatile int16_t x319 = INT16_MIN;
volatile int32_t x323 = -109;
uint8_t x328 = UINT8_MAX;
volatile uint64_t t69 = 24885495991783LLU;
uint16_t x333 = UINT16_MAX;
volatile int8_t x334 = INT8_MIN;
int64_t x336 = INT64_MIN;
uint8_t x344 = UINT8_MAX;
volatile uint32_t x349 = 1031U;
static int8_t x360 = INT8_MIN;
int16_t x361 = INT16_MIN;
uint8_t x364 = UINT8_MAX;
static uint32_t x382 = 656116U;
volatile uint32_t t80 = 149454683U;
uint32_t x385 = 11077888U;
int8_t x387 = INT8_MIN;
static uint32_t x389 = UINT32_MAX;
volatile uint32_t t82 = 58360U;
int8_t x397 = 35;
int16_t x404 = INT16_MAX;
static int32_t t84 = -6641570;
uint8_t x416 = 125U;
int32_t t85 = 0;
uint32_t x418 = UINT32_MAX;
int64_t t87 = 3597437028LL;
uint64_t x426 = 6669098918148LLU;
volatile uint64_t t88 = 20LLU;
volatile uint32_t t89 = 75616U;
int32_t x440 = -1;
int64_t x443 = -4146LL;
static uint32_t x458 = UINT32_MAX;
static uint64_t x460 = 246993089967287LLU;
uint32_t x464 = UINT32_MAX;
int64_t x468 = INT64_MAX;
int64_t x477 = -1LL;


void f0(void) {
	volatile uint64_t x1 = 32522LLU;
	static int16_t x2 = INT16_MIN;
	volatile uint16_t x3 = 645U;
	int32_t x4 = INT32_MAX;
	static volatile uint64_t t0 = 63430145LLU;

	t0 = ((x1-x2)+(x3<x4));

	if (t0 != 65291LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int64_t x6 = 2134434974952LL;
	int32_t x7 = INT32_MIN;
	static uint32_t x8 = UINT32_MAX;
	int64_t t1 = 10289LL;

	t1 = ((x5-x6)+(x7<x8));

	if (t1 != -2134434974824LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1U;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	static uint32_t t2 = 487856U;

	t2 = ((x9-x10)+(x11<x12));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = 93080877706LL;
	static int32_t x16 = INT32_MIN;
	volatile int64_t t3 = 215746728363992LL;

	t3 = ((x13-x14)+(x15<x16));

	if (t3 != -93080883884LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x22 = 2426904U;
	uint32_t x23 = 81835U;
	int64_t x24 = INT64_MAX;
	uint32_t t4 = 4587U;

	t4 = ((x21-x22)+(x23<x24));

	if (t4 != 4292540395U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	static int64_t x26 = -81277838251LL;
	static int32_t x27 = -2053264;
	static uint16_t x28 = 20U;
	volatile int64_t t5 = -7463597LL;

	t5 = ((x25-x26)+(x27<x28));

	if (t5 != 81277838251LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 2U;
	uint64_t x30 = UINT64_MAX;
	int8_t x31 = -1;
	uint64_t t6 = 232530098LLU;

	t6 = ((x29-x30)+(x31<x32));

	if (t6 != 3LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x36 = 3U;
	volatile int64_t t7 = -48809667LL;

	t7 = ((x33-x34)+(x35<x36));

	if (t7 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 235U;
	static int8_t x39 = INT8_MIN;
	uint64_t t8 = 28493194659977390LLU;

	t8 = ((x37-x38)+(x39<x40));

	if (t8 != 355018532137534203LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 89U;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = UINT16_MAX;
	int32_t t9 = 396693;

	t9 = ((x41-x42)+(x43<x44));

	if (t9 != 96) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = -1;
	int8_t x46 = INT8_MIN;
	static int64_t x47 = -1LL;
	static uint64_t x48 = 4372589610781LLU;
	int32_t t10 = -28007;

	t10 = ((x45-x46)+(x47<x48));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = INT64_MAX;
	static volatile uint16_t x51 = 12U;
	static volatile int16_t x52 = -153;
	int64_t t11 = -7100603692213LL;

	t11 = ((x49-x50)+(x51<x52));

	if (t11 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x61 = UINT64_MAX;
	static int64_t x63 = 113167048LL;
	static int64_t x64 = INT64_MIN;

	t12 = ((x61-x62)+(x63<x64));

	if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x67 = UINT32_MAX;
	volatile int64_t x68 = INT64_MIN;
	volatile uint64_t t13 = 76957216188132LLU;

	t13 = ((x65-x66)+(x67<x68));

	if (t13 != 18446744073709350477LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = 939573830LL;
	volatile int8_t x71 = INT8_MAX;
	int64_t t14 = 197LL;

	t14 = ((x69-x70)+(x71<x72));

	if (t14 != -939573574LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x74 = UINT64_MAX;
	int32_t x76 = -1054521371;

	t15 = ((x73-x74)+(x75<x76));

	if (t15 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = UINT16_MAX;
	static volatile int16_t x78 = -1;
	int16_t x79 = INT16_MAX;
	int8_t x80 = 28;
	static int32_t t16 = 395;

	t16 = ((x77-x78)+(x79<x80));

	if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = 45;
	int32_t x82 = -1;
	uint64_t x83 = UINT64_MAX;
	uint32_t x84 = UINT32_MAX;

	t17 = ((x81-x82)+(x83<x84));

	if (t17 != 46) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x86 = -1;
	static int8_t x87 = INT8_MIN;
	volatile uint8_t x88 = UINT8_MAX;
	int32_t t18 = 155275;

	t18 = ((x85-x86)+(x87<x88));

	if (t18 != 15) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	static uint64_t x91 = 6713517043LLU;
	int8_t x92 = INT8_MIN;
	static int32_t t19 = -1543;

	t19 = ((x89-x90)+(x91<x92));

	if (t19 != 65664) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 1163647817U;
	uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MAX;
	int16_t x96 = -1;

	t20 = ((x93-x94)+(x95<x96));

	if (t20 != 1163582282U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x99 = INT16_MAX;
	uint16_t x100 = 13U;
	volatile int32_t t21 = 23;

	t21 = ((x97-x98)+(x99<x100));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 19249U;
	uint8_t x102 = 2U;
	static uint32_t x103 = UINT32_MAX;
	volatile int8_t x104 = INT8_MIN;
	int32_t t22 = -6619;

	t22 = ((x101-x102)+(x103<x104));

	if (t22 != 19247) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MAX;
	int8_t x107 = INT8_MIN;
	int64_t x108 = -1924468553604234130LL;

	t23 = ((x105-x106)+(x107<x108));

	if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x118 = 995122723LLU;
	volatile int8_t x119 = INT8_MAX;
	static volatile int16_t x120 = INT16_MAX;
	static volatile uint64_t t24 = 1767178LLU;

	t24 = ((x117-x118)+(x119<x120));

	if (t24 != 18446744072714461661LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -1815;
	static int16_t x122 = INT16_MAX;
	static int8_t x124 = 15;
	volatile int32_t t25 = -73876144;

	t25 = ((x121-x122)+(x123<x124));

	if (t25 != -34581) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = 5292770;
	uint32_t x128 = UINT32_MAX;
	int32_t t26 = -805;

	t26 = ((x125-x126)+(x127<x128));

	if (t26 != 5292770) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x129 = 25044451U;
	static int16_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	static uint32_t x132 = 31811U;
	static volatile uint32_t t27 = 18448U;

	t27 = ((x129-x130)+(x131<x132));

	if (t27 != 25044452U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	volatile int16_t x134 = INT16_MIN;
	static volatile int8_t x135 = INT8_MIN;
	int8_t x136 = -2;
	static volatile int32_t t28 = -60;

	t28 = ((x133-x134)+(x135<x136));

	if (t28 != 32641) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MAX;
	int64_t x139 = INT64_MAX;
	uint32_t x140 = UINT32_MAX;
	int64_t t29 = 386797340942085885LL;

	t29 = ((x137-x138)+(x139<x140));

	if (t29 != 138LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int16_t x142 = INT16_MAX;
	static int8_t x143 = 0;
	uint64_t x144 = 183819510094017947LLU;
	uint64_t t30 = 2088004661LLU;

	t30 = ((x141-x142)+(x143<x144));

	if (t30 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x146 = 52;
	int32_t x147 = INT32_MIN;
	static int8_t x148 = 2;
	int64_t t31 = 7428LL;

	t31 = ((x145-x146)+(x147<x148));

	if (t31 != -69809510LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x150 = 391129U;
	volatile uint16_t x152 = 2U;
	static uint64_t t32 = 2137LLU;

	t32 = ((x149-x150)+(x151<x152));

	if (t32 != 18446744073709160565LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x156 = -1LL;
	volatile uint32_t t33 = 5U;

	t33 = ((x153-x154)+(x155<x156));

	if (t33 != 4294959020U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MAX;
	int32_t x160 = -1;
	uint64_t t34 = 1318791272586263424LLU;

	t34 = ((x157-x158)+(x159<x160));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x161 = INT16_MAX;
	uint16_t x162 = 1857U;
	int64_t x163 = 60890116LL;
	int64_t x164 = -1LL;
	static int32_t t35 = 0;

	t35 = ((x161-x162)+(x163<x164));

	if (t35 != 30910) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	volatile uint64_t x167 = UINT64_MAX;
	int64_t x168 = -1LL;
	static volatile int64_t t36 = 0LL;

	t36 = ((x165-x166)+(x167<x168));

	if (t36 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x169 = INT16_MIN;
	int32_t x170 = INT32_MIN;

	t37 = ((x169-x170)+(x171<x172));

	if (t37 != 2147450881) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 129134978758617138LLU;
	int32_t x175 = INT32_MAX;
	int32_t x176 = 9759;
	volatile uint64_t t38 = 17909867LLU;

	t38 = ((x173-x174)+(x175<x176));

	if (t38 != 9352507015613392946LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x177 = UINT16_MAX;
	int16_t x178 = INT16_MAX;
	int32_t x179 = INT32_MIN;
	int16_t x180 = INT16_MIN;
	volatile int32_t t39 = -460;

	t39 = ((x177-x178)+(x179<x180));

	if (t39 != 32769) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = UINT16_MAX;
	static int16_t x182 = INT16_MAX;
	uint16_t x183 = 1U;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t40 = -32;

	t40 = ((x181-x182)+(x183<x184));

	if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x186 = 24U;
	volatile uint64_t x187 = UINT64_MAX;
	static int32_t t41 = -686679;

	t41 = ((x185-x186)+(x187<x188));

	if (t41 != -32792) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x194 = -5234;
	uint32_t x195 = UINT32_MAX;
	uint8_t x196 = 105U;
	volatile int32_t t42 = 1704;

	t42 = ((x193-x194)+(x195<x196));

	if (t42 != 5233) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MIN;
	volatile int32_t x207 = 381;
	static uint8_t x208 = UINT8_MAX;
	volatile int32_t t43 = 14;

	t43 = ((x205-x206)+(x207<x208));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x210 = -1;
	int32_t x211 = -1;
	static int64_t x212 = INT64_MAX;
	volatile uint32_t t44 = 3884610U;

	t44 = ((x209-x210)+(x211<x212));

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x214 = 379146541;
	volatile int64_t t45 = 9932LL;

	t45 = ((x213-x214)+(x215<x216));

	if (t45 != -2039822980856578LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = UINT16_MAX;
	volatile int8_t x218 = INT8_MIN;
	int32_t t46 = -9;

	t46 = ((x217-x218)+(x219<x220));

	if (t46 != 65663) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = 30301099LL;
	int16_t x223 = 1;

	t47 = ((x221-x222)+(x223<x224));

	if (t47 != -30268332LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 19138358634025741LLU;
	uint32_t x226 = 25665U;
	int32_t x227 = INT32_MIN;
	static int64_t x228 = -1LL;
	volatile uint64_t t48 = 328237954333756844LLU;

	t48 = ((x225-x226)+(x227<x228));

	if (t48 != 19138358634000077LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x235 = -1;
	int16_t x236 = INT16_MAX;
	volatile int32_t t49 = -22;

	t49 = ((x233-x234)+(x235<x236));

	if (t49 != -255) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x237 = -10611;
	int8_t x238 = 4;
	int64_t x239 = -1LL;
	volatile uint64_t x240 = 45483138871LLU;
	int32_t t50 = -244889;

	t50 = ((x237-x238)+(x239<x240));

	if (t50 != -10615) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x246 = -11242964;
	volatile uint64_t x247 = 16054244779701LLU;
	int32_t x248 = INT32_MIN;
	volatile int32_t t51 = -2;

	t51 = ((x245-x246)+(x247<x248));

	if (t51 != -788075571) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	int8_t x251 = -1;
	uint32_t x252 = 1U;
	static int64_t t52 = -48617LL;

	t52 = ((x249-x250)+(x251<x252));

	if (t52 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = 16806725970606835LLU;
	int64_t x254 = -1LL;
	static volatile int32_t x255 = -1;
	uint8_t x256 = 47U;

	t53 = ((x253-x254)+(x255<x256));

	if (t53 != 16806725970606837LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = -4;
	uint8_t x259 = 1U;
	volatile int32_t t54 = 373422418;

	t54 = ((x257-x258)+(x259<x260));

	if (t54 != 260) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x262 = -4;
	int8_t x263 = INT8_MAX;
	static int16_t x264 = INT16_MIN;
	volatile uint64_t t55 = 158901247880864336LLU;

	t55 = ((x261-x262)+(x263<x264));

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = -9023;
	int64_t x266 = -1LL;

	t56 = ((x265-x266)+(x267<x268));

	if (t56 != -9022LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x269 = -1;
	int32_t x270 = INT32_MIN;
	int64_t x271 = 32835782750781115LL;
	volatile int16_t x272 = 625;
	int32_t t57 = INT32_MAX;

	t57 = ((x269-x270)+(x271<x272));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x274 = -1LL;
	uint16_t x275 = 93U;
	static int64_t x276 = -1763071301273858LL;
	int64_t t58 = -1224383904LL;

	t58 = ((x273-x274)+(x275<x276));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x281 = -1;
	volatile uint8_t x282 = UINT8_MAX;
	volatile uint32_t x283 = UINT32_MAX;
	int8_t x284 = 3;
	int32_t t59 = 6341;

	t59 = ((x281-x282)+(x283<x284));

	if (t59 != -256) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile uint8_t x286 = 1U;
	static int64_t x287 = INT64_MAX;
	int32_t x288 = INT32_MIN;
	int32_t t60 = 12262634;

	t60 = ((x285-x286)+(x287<x288));

	if (t60 != -32769) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x289 = INT16_MAX;
	int64_t x291 = INT64_MIN;
	static int32_t x292 = -1;
	volatile int32_t t61 = 47983;

	t61 = ((x289-x290)+(x291<x292));

	if (t61 != 30847) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x294 = -1;
	volatile int32_t x295 = INT32_MIN;
	uint16_t x296 = 1U;

	t62 = ((x293-x294)+(x295<x296));

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x297 = INT8_MAX;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = 2350487;
	volatile int16_t x300 = -1;
	volatile uint64_t t63 = 185906099923LLU;

	t63 = ((x297-x298)+(x299<x300));

	if (t63 != 128LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x301 = 15U;
	int16_t x303 = -10;
	uint32_t x304 = UINT32_MAX;
	int32_t t64 = -29859311;

	t64 = ((x301-x302)+(x303<x304));

	if (t64 != 32784) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = -1;
	volatile uint16_t x307 = 1149U;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t65 = -888172;

	t65 = ((x305-x306)+(x307<x308));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	static int8_t x315 = -1;
	static int32_t x316 = -423603;
	static volatile int64_t t66 = 88057805380LL;

	t66 = ((x313-x314)+(x315<x316));

	if (t66 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t67 = 10811;

	t67 = ((x317-x318)+(x319<x320));

	if (t67 != -2147483520) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x321 = INT8_MIN;
	static int32_t x322 = -1;
	int16_t x324 = 218;
	volatile int32_t t68 = 14125062;

	t68 = ((x321-x322)+(x323<x324));

	if (t68 != -126) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x325 = 5167664634729537562LLU;
	uint16_t x326 = 3U;
	volatile int32_t x327 = INT32_MIN;

	t69 = ((x325-x326)+(x327<x328));

	if (t69 != 5167664634729537560LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = -1;
	int16_t x330 = INT16_MAX;
	static uint8_t x331 = 35U;
	uint8_t x332 = 12U;
	volatile int32_t t70 = 654205;

	t70 = ((x329-x330)+(x331<x332));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x335 = 35861377U;
	int32_t t71 = 612;

	t71 = ((x333-x334)+(x335<x336));

	if (t71 != 65663) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = 1;
	uint64_t x338 = UINT64_MAX;
	volatile int8_t x339 = INT8_MIN;
	uint32_t x340 = UINT32_MAX;
	uint64_t t72 = 0LLU;

	t72 = ((x337-x338)+(x339<x340));

	if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x341 = INT64_MIN;
	uint64_t x342 = 296910820405LLU;
	uint8_t x343 = 14U;
	volatile uint64_t t73 = 295590604002077LLU;

	t73 = ((x341-x342)+(x343<x344));

	if (t73 != 9223371739943955404LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x350 = 824U;
	static int16_t x351 = INT16_MAX;
	static int32_t x352 = INT32_MIN;
	volatile uint32_t t74 = 152198843U;

	t74 = ((x349-x350)+(x351<x352));

	if (t74 != 207U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = -1;
	int8_t x359 = INT8_MIN;
	uint32_t t75 = 32U;

	t75 = ((x357-x358)+(x359<x360));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x362 = -1;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t t76 = 15118265;

	t76 = ((x361-x362)+(x363<x364));

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	int64_t x372 = -1LL;
	volatile int64_t t77 = 20LL;

	t77 = ((x369-x370)+(x371<x372));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = INT16_MIN;
	volatile int16_t x374 = -2;
	uint64_t x375 = UINT64_MAX;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t78 = -101089401;

	t78 = ((x373-x374)+(x375<x376));

	if (t78 != -32766) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x377 = -1;
	int16_t x378 = INT16_MAX;
	uint32_t x379 = UINT32_MAX;
	static int8_t x380 = -1;
	int32_t t79 = -1053894193;

	t79 = ((x377-x378)+(x379<x380));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x381 = 378776130U;
	static volatile int32_t x383 = -1;
	int64_t x384 = INT64_MIN;

	t80 = ((x381-x382)+(x383<x384));

	if (t80 != 378120014U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x386 = 0U;
	int64_t x388 = -1LL;
	uint32_t t81 = 837U;

	t81 = ((x385-x386)+(x387<x388));

	if (t81 != 11077889U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x390 = 1;
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = 15;

	t82 = ((x389-x390)+(x391<x392));

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x398 = 525038784444145LL;
	int32_t x399 = INT32_MIN;
	int16_t x400 = -1;
	volatile int64_t t83 = -1812LL;

	t83 = ((x397-x398)+(x399<x400));

	if (t83 != -525038784444109LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x401 = INT16_MAX;
	int16_t x402 = 1;
	volatile int32_t x403 = 7364732;

	t84 = ((x401-x402)+(x403<x404));

	if (t84 != 32766) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = -414;
	uint8_t x414 = UINT8_MAX;
	int64_t x415 = -1LL;

	t85 = ((x413-x414)+(x415<x416));

	if (t85 != -668) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x417 = INT32_MIN;
	static int64_t x419 = INT64_MAX;
	int64_t x420 = -1LL;
	volatile uint32_t t86 = 245818033U;

	t86 = ((x417-x418)+(x419<x420));

	if (t86 != 2147483649U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x421 = UINT16_MAX;
	int64_t x422 = -390141171319529189LL;
	int64_t x423 = -1LL;
	uint32_t x424 = 2761503U;

	t87 = ((x421-x422)+(x423<x424));

	if (t87 != 390141171319594725LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x425 = 0U;
	int64_t x427 = -1LL;
	volatile int8_t x428 = INT8_MIN;

	t88 = ((x425-x426)+(x427<x428));

	if (t88 != 18446737404610633468LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x429 = UINT32_MAX;
	uint8_t x430 = UINT8_MAX;
	volatile int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;

	t89 = ((x429-x430)+(x431<x432));

	if (t89 != 4294967040U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x437 = INT16_MIN;
	int8_t x438 = -1;
	int32_t x439 = INT32_MIN;
	volatile int32_t t90 = -1;

	t90 = ((x437-x438)+(x439<x440));

	if (t90 != -32766) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x441 = 330;
	uint32_t x442 = 244U;
	int64_t x444 = -1LL;
	uint32_t t91 = 477258U;

	t91 = ((x441-x442)+(x443<x444));

	if (t91 != 87U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x445 = INT8_MIN;
	uint64_t x446 = 534865785811243807LLU;
	volatile int16_t x447 = 2310;
	uint16_t x448 = 6502U;
	uint64_t t92 = 137535289823LLU;

	t92 = ((x445-x446)+(x447<x448));

	if (t92 != 17911878287898307682LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = -1LL;
	uint32_t x450 = UINT32_MAX;
	uint32_t x451 = 1482U;
	int16_t x452 = 0;
	int64_t t93 = -845LL;

	t93 = ((x449-x450)+(x451<x452));

	if (t93 != -4294967296LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x453 = 20U;
	volatile int8_t x454 = INT8_MIN;
	static int16_t x455 = -6686;
	uint32_t x456 = UINT32_MAX;
	static int32_t t94 = -763448724;

	t94 = ((x453-x454)+(x455<x456));

	if (t94 != 149) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x457 = 15U;
	int16_t x459 = INT16_MAX;
	volatile uint32_t t95 = 572U;

	t95 = ((x457-x458)+(x459<x460));

	if (t95 != 17U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x461 = 742007LLU;
	uint16_t x462 = UINT16_MAX;
	volatile uint64_t x463 = UINT64_MAX;
	static uint64_t t96 = 725262353330659LLU;

	t96 = ((x461-x462)+(x463<x464));

	if (t96 != 676472LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x465 = INT64_MAX;
	int8_t x466 = INT8_MAX;
	static volatile int8_t x467 = INT8_MIN;
	static int64_t t97 = -52LL;

	t97 = ((x465-x466)+(x467<x468));

	if (t97 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x469 = 1;
	volatile uint32_t x470 = UINT32_MAX;
	int16_t x471 = 1;
	int16_t x472 = INT16_MIN;
	volatile uint32_t t98 = 11U;

	t98 = ((x469-x470)+(x471<x472));

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x478 = INT64_MIN;
	volatile int16_t x479 = -1;
	int8_t x480 = -1;
	int64_t t99 = INT64_MAX;

	t99 = ((x477-x478)+(x479<x480));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

