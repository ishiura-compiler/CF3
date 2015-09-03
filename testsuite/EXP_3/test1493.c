#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = UINT32_MAX;
int64_t x8 = INT64_MIN;
uint32_t x9 = 2832681U;
volatile uint32_t x14 = UINT32_MAX;
volatile int16_t x16 = INT16_MIN;
int32_t x18 = -1;
int64_t x20 = -56112LL;
int32_t t4 = -87329;
uint32_t x22 = 57U;
uint32_t x23 = 50603121U;
int64_t x24 = INT64_MAX;
static int16_t x27 = INT16_MIN;
static uint32_t t8 = 75U;
int32_t t9 = -54378379;
volatile uint32_t x47 = 7U;
int64_t x57 = -3154363750066757LL;
int64_t t14 = 4LL;
int32_t x62 = 11642;
volatile uint16_t x64 = 370U;
volatile int32_t t15 = -4;
uint8_t x71 = 1U;
volatile int8_t x72 = INT8_MIN;
uint32_t t17 = 116164135U;
volatile uint16_t x83 = UINT16_MAX;
volatile int8_t x85 = -1;
uint32_t x86 = 6U;
int16_t x88 = INT16_MIN;
int8_t x90 = 0;
volatile int8_t x95 = -60;
int64_t x97 = INT64_MIN;
int64_t x98 = -1LL;
int64_t x104 = 1LL;
volatile uint8_t x106 = 3U;
static int8_t x107 = INT8_MAX;
static int32_t t26 = 4;
int8_t x114 = INT8_MIN;
uint8_t x123 = 82U;
static volatile int64_t t30 = -23468260556634826LL;
int16_t x128 = -1;
static int64_t x130 = 1244787LL;
uint32_t x131 = 524547766U;
uint8_t x132 = 0U;
volatile int64_t t33 = 197016811LL;
int8_t x139 = INT8_MIN;
volatile int64_t x140 = INT64_MAX;
int32_t x146 = -9490913;
uint8_t x154 = UINT8_MAX;
uint64_t x157 = UINT64_MAX;
int64_t x162 = 100LL;
int64_t x164 = 140327276454358LL;
int8_t x169 = INT8_MAX;
int32_t x173 = INT32_MIN;
uint16_t x177 = 109U;
static uint8_t x191 = 3U;
int64_t x195 = INT64_MIN;
int64_t x197 = INT64_MIN;
uint64_t x202 = 873868566LLU;
static uint8_t x203 = 3U;
uint64_t t50 = 13491250843742LLU;
static uint8_t x208 = 1U;
uint8_t x214 = 62U;
int64_t x220 = -118LL;
static int8_t x228 = INT8_MIN;
int32_t x232 = -1;
int64_t t59 = -10302067537044352LL;
static uint32_t x242 = 1328981198U;
volatile int16_t x244 = INT16_MIN;
static uint32_t x248 = 1661U;
int64_t x249 = -95903850LL;
int64_t x253 = 0LL;
static int8_t x256 = INT8_MAX;
int64_t t64 = -570LL;
volatile int64_t t66 = -287LL;
int32_t t67 = 120;
uint16_t x273 = UINT16_MAX;
int32_t x277 = -1;
int8_t x280 = -1;
int8_t x295 = 9;
volatile int8_t x296 = INT8_MIN;
int16_t x303 = INT16_MIN;
int32_t x310 = INT32_MIN;
int32_t t77 = 179;
volatile int32_t x315 = INT32_MAX;
int16_t x319 = -1;
int8_t x324 = -9;
int32_t x327 = INT32_MIN;
volatile int32_t t81 = -7542;
uint32_t x331 = 126U;
int16_t x332 = -1;
int32_t t82 = 5339718;
uint8_t x335 = UINT8_MAX;
int16_t x336 = -121;
int32_t t83 = -831;
static uint16_t x341 = 8U;
int32_t x344 = INT32_MIN;
static int64_t x346 = -1LL;
int32_t x353 = -1;
int64_t x358 = INT64_MIN;
uint32_t x359 = 64219993U;
int32_t x363 = INT32_MAX;
int16_t x364 = INT16_MAX;
volatile int64_t t90 = 10454989699LL;
int8_t x384 = 29;
volatile int32_t x385 = INT32_MIN;
int64_t x390 = INT64_MAX;
uint16_t x391 = 35U;
volatile int32_t x393 = 81255;
int32_t x394 = -7320;
uint64_t x396 = 12520LLU;
volatile int32_t t98 = -7;
int32_t x397 = INT32_MIN;
int16_t x398 = -13;
uint32_t x400 = 794168U;
static int32_t t99 = 1713;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x3 = -1;
	uint32_t x4 = 60U;
	volatile uint32_t t0 = 1549356U;

	t0 = ((x1&x2)&(x3<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int32_t x6 = INT32_MIN;
	static int32_t x7 = INT32_MAX;
	volatile int32_t t1 = 111684696;

	t1 = ((x5&x6)&(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = UINT32_MAX;
	static volatile uint64_t x11 = 342520225583281703LLU;
	static int8_t x12 = INT8_MIN;
	volatile uint32_t t2 = 3U;

	t2 = ((x9&x10)&(x11<x12));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1LL;
	int64_t x15 = -115426359LL;
	static int64_t t3 = -18591008163856002LL;

	t3 = ((x13&x14)&(x15<x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile uint32_t x19 = 583237U;

	t4 = ((x17&x18)&(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint32_t t5 = 610541U;

	t5 = ((x21&x22)&(x23<x24));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static int32_t x26 = -197;
	int8_t x28 = -1;
	volatile int32_t t6 = -1611;

	t6 = ((x25&x26)&(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 1244912693626154218LLU;
	int16_t x31 = INT16_MIN;
	static int16_t x32 = INT16_MAX;
	uint64_t t7 = 399724752135LLU;

	t7 = ((x29&x30)&(x31<x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 5638U;
	uint32_t x34 = UINT32_MAX;
	uint64_t x35 = 2220120651LLU;
	uint8_t x36 = UINT8_MAX;

	t8 = ((x33&x34)&(x35<x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile uint16_t x38 = 482U;
	uint8_t x39 = UINT8_MAX;
	int8_t x40 = INT8_MAX;

	t9 = ((x37&x38)&(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	uint64_t x42 = 56628328028LLU;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = INT32_MAX;
	volatile uint64_t t10 = 3882LLU;

	t10 = ((x41&x42)&(x43<x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 28258LLU;
	static int8_t x46 = INT8_MIN;
	static int8_t x48 = -5;
	uint64_t t11 = 3427022975331LLU;

	t11 = ((x45&x46)&(x47<x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 903U;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	volatile uint64_t t12 = 3218945353740606LLU;

	t12 = ((x49&x50)&(x51<x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MAX;
	volatile int64_t t13 = -52248384179LL;

	t13 = ((x53&x54)&(x55<x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	volatile uint8_t x60 = 1U;

	t14 = ((x57&x58)&(x59<x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint16_t x63 = 147U;

	t15 = ((x61&x62)&(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 1941U;
	int32_t x66 = 1;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = -2;
	int32_t t16 = -419755157;

	t16 = ((x65&x66)&(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 2053;
	volatile uint32_t x70 = UINT32_MAX;

	t17 = ((x69&x70)&(x71<x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 249U;
	uint64_t x74 = UINT64_MAX;
	static uint64_t x75 = 345LLU;
	static int16_t x76 = INT16_MIN;
	volatile uint64_t t18 = 986677631779148225LLU;

	t18 = ((x73&x74)&(x75<x76));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 0U;
	uint32_t x78 = 143580U;
	uint32_t x79 = 232U;
	int8_t x80 = INT8_MIN;
	uint32_t t19 = 50553U;

	t19 = ((x77&x78)&(x79<x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	int8_t x82 = -3;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t20 = -65;

	t20 = ((x81&x82)&(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = INT32_MIN;
	uint32_t t21 = 9341U;

	t21 = ((x85&x86)&(x87<x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	static int16_t x91 = -108;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = 139;

	t22 = ((x89&x90)&(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 0U;
	static volatile uint64_t x94 = 1719341LLU;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t23 = 266038751260931LLU;

	t23 = ((x93&x94)&(x95<x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x99 = 440LLU;
	volatile int64_t x100 = -65959151LL;
	volatile int64_t t24 = 119431800LL;

	t24 = ((x97&x98)&(x99<x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -17596257991715761LL;
	uint32_t x102 = 234568U;
	static uint32_t x103 = 0U;
	int64_t t25 = -113LL;

	t25 = ((x101&x102)&(x103<x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 19U;
	int32_t x108 = INT32_MIN;

	t26 = ((x105&x106)&(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int64_t x110 = -1LL;
	static int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	int64_t t27 = 5752812587089LL;

	t27 = ((x109&x110)&(x111<x112));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int8_t x115 = 20;
	int16_t x116 = 17;
	int32_t t28 = 24;

	t28 = ((x113&x114)&(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -7;
	int16_t x118 = 491;
	uint8_t x119 = UINT8_MAX;
	uint8_t x120 = 14U;
	volatile int32_t t29 = 134657759;

	t29 = ((x117&x118)&(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	volatile int64_t x122 = INT64_MIN;
	volatile uint64_t x124 = 25785020362302LLU;

	t30 = ((x121&x122)&(x123<x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int32_t x126 = -1;
	int16_t x127 = INT16_MIN;
	volatile int64_t t31 = 176546483209LL;

	t31 = ((x125&x126)&(x127<x128));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	volatile int64_t t32 = -41376287883870LL;

	t32 = ((x129&x130)&(x131<x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	static int16_t x134 = 442;
	volatile int8_t x135 = 0;
	int16_t x136 = -1;

	t33 = ((x133&x134)&(x135<x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = 0U;
	int64_t t34 = -11014516420LL;

	t34 = ((x137&x138)&(x139<x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	volatile int16_t x144 = -16101;
	volatile uint32_t t35 = 1108894410U;

	t35 = ((x141&x142)&(x143<x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static int32_t x147 = INT32_MIN;
	volatile int64_t x148 = INT64_MIN;
	static int32_t t36 = 0;

	t36 = ((x145&x146)&(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	uint64_t x151 = 3745966634LLU;
	static uint64_t x152 = 229990434752LLU;
	static int64_t t37 = -78475946LL;

	t37 = ((x149&x150)&(x151<x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	int8_t x155 = INT8_MIN;
	volatile int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -135791;

	t38 = ((x153&x154)&(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	int8_t x159 = 32;
	static int8_t x160 = -5;
	volatile uint64_t t39 = 63946874119LLU;

	t39 = ((x157&x158)&(x159<x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 0U;
	static int8_t x163 = -1;
	int64_t t40 = 135906099388LL;

	t40 = ((x161&x162)&(x163<x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	volatile int16_t x166 = -1;
	int16_t x167 = INT16_MIN;
	uint8_t x168 = 13U;
	volatile int32_t t41 = 197686;

	t41 = ((x165&x166)&(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = -1;
	int64_t x171 = INT64_MIN;
	static int8_t x172 = 1;
	volatile int32_t t42 = 157051004;

	t42 = ((x169&x170)&(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = 0;
	int32_t x176 = -130532412;
	volatile uint32_t t43 = 3U;

	t43 = ((x173&x174)&(x175<x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MAX;
	static int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = -21206300;

	t44 = ((x177&x178)&(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1187;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -15600223;
	uint64_t t45 = 421125809LLU;

	t45 = ((x181&x182)&(x183<x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MAX;
	uint16_t x188 = 364U;
	int32_t t46 = 3;

	t46 = ((x185&x186)&(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	volatile uint8_t x190 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	int64_t t47 = 2122268705848597160LL;

	t47 = ((x189&x190)&(x191<x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	uint64_t x194 = 363886160202948LLU;
	uint16_t x196 = 23635U;
	uint64_t t48 = 79592LLU;

	t48 = ((x193&x194)&(x195<x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = 7185LL;
	volatile int64_t x199 = -222LL;
	int64_t x200 = INT64_MAX;
	int64_t t49 = 362385021503035364LL;

	t49 = ((x197&x198)&(x199<x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -7;
	static int8_t x204 = -1;

	t50 = ((x201&x202)&(x203<x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	volatile uint64_t x207 = UINT64_MAX;
	volatile int64_t t51 = 3041323LL;

	t51 = ((x205&x206)&(x207<x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	int32_t x212 = 4774;
	int32_t t52 = 3425823;

	t52 = ((x209&x210)&(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -1LL;
	static volatile uint64_t x215 = 636514LLU;
	int16_t x216 = -486;
	volatile int64_t t53 = 1LL;

	t53 = ((x213&x214)&(x215<x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile uint16_t x218 = UINT16_MAX;
	int64_t x219 = INT64_MIN;
	static int32_t t54 = 229912802;

	t54 = ((x217&x218)&(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	int16_t x222 = -1;
	int16_t x223 = INT16_MIN;
	static int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = -358802527;

	t55 = ((x221&x222)&(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	static int32_t x226 = -21945;
	static volatile uint64_t x227 = UINT64_MAX;
	volatile int64_t t56 = 1512366857855455LL;

	t56 = ((x225&x226)&(x227<x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	uint64_t x230 = 3283258801LLU;
	volatile uint32_t x231 = 3605719U;
	static uint64_t t57 = 75519096206LLU;

	t57 = ((x229&x230)&(x231<x232));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = INT8_MIN;
	int16_t x234 = 14727;
	int64_t x235 = -1LL;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = -11;

	t58 = ((x233&x234)&(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 27732LL;
	static int64_t x238 = -2775295682LL;
	static volatile int8_t x239 = INT8_MAX;
	int64_t x240 = INT64_MIN;

	t59 = ((x237&x238)&(x239<x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int64_t x243 = INT64_MIN;
	volatile uint32_t t60 = 22U;

	t60 = ((x241&x242)&(x243<x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 49LLU;
	static int8_t x246 = INT8_MAX;
	uint32_t x247 = 3676U;
	volatile uint64_t t61 = 788092LLU;

	t61 = ((x245&x246)&(x247<x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MAX;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = 4489681U;
	volatile int64_t t62 = -68793137LL;

	t62 = ((x249&x250)&(x251<x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x254 = INT32_MIN;
	static uint64_t x255 = UINT64_MAX;
	int64_t t63 = 0LL;

	t63 = ((x253&x254)&(x255<x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MAX;
	static int16_t x260 = INT16_MIN;

	t64 = ((x257&x258)&(x259<x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	static volatile int8_t x262 = INT8_MIN;
	static uint32_t x263 = UINT32_MAX;
	int64_t x264 = INT64_MIN;
	static int32_t t65 = 90;

	t65 = ((x261&x262)&(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MAX;
	static int16_t x268 = -1;

	t66 = ((x265&x266)&(x267<x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 148;
	int32_t x270 = INT32_MAX;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = -1;

	t67 = ((x269&x270)&(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	static int32_t t68 = -4889616;

	t68 = ((x273&x274)&(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 639318U;
	volatile int32_t t69 = 6475273;

	t69 = ((x277&x278)&(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 2;
	static int8_t x282 = -1;
	static uint8_t x283 = UINT8_MAX;
	int8_t x284 = -1;
	static volatile int32_t t70 = 1;

	t70 = ((x281&x282)&(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = INT8_MAX;
	static int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	static volatile int64_t t71 = -148259545403LL;

	t71 = ((x285&x286)&(x287<x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	static int32_t x290 = INT32_MIN;
	volatile uint8_t x291 = 1U;
	uint16_t x292 = 4U;
	volatile uint64_t t72 = 6589LLU;

	t72 = ((x289&x290)&(x291<x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = -1LL;
	int64_t t73 = 988410LL;

	t73 = ((x293&x294)&(x295<x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = 0LLU;
	int64_t x298 = -121301056552274LL;
	static uint32_t x299 = 91572U;
	uint16_t x300 = 18U;
	static uint64_t t74 = 2142814475629112676LLU;

	t74 = ((x297&x298)&(x299<x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MAX;
	volatile int32_t x302 = INT32_MIN;
	static int8_t x304 = -1;
	int64_t t75 = -21605822LL;

	t75 = ((x301&x302)&(x303<x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 79764190LLU;
	uint16_t x306 = 17U;
	volatile uint64_t x307 = UINT64_MAX;
	volatile int64_t x308 = 3241351899LL;
	volatile uint64_t t76 = 38LLU;

	t76 = ((x305&x306)&(x307<x308));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 96;
	static int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;

	t77 = ((x309&x310)&(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 1U;
	static volatile int32_t x314 = -1;
	volatile int32_t x316 = INT32_MIN;
	static int32_t t78 = -150872;

	t78 = ((x313&x314)&(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 1U;
	int8_t x318 = INT8_MAX;
	static int64_t x320 = INT64_MIN;
	static int32_t t79 = 123391468;

	t79 = ((x317&x318)&(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	static volatile int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	static volatile int32_t t80 = 5401;

	t80 = ((x321&x322)&(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	volatile int8_t x326 = -1;
	int64_t x328 = INT64_MAX;

	t81 = ((x325&x326)&(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;

	t82 = ((x329&x330)&(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = -20;

	t83 = ((x333&x334)&(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 2975U;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = 88578018U;
	int32_t t84 = -5023;

	t84 = ((x337&x338)&(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x342 = 14111;
	int8_t x343 = INT8_MIN;
	static volatile int32_t t85 = -180;

	t85 = ((x341&x342)&(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int32_t x347 = 102135;
	volatile int64_t x348 = INT64_MIN;
	uint64_t t86 = 715738609337949LLU;

	t86 = ((x345&x346)&(x347<x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	static int8_t x350 = -1;
	int32_t x351 = INT32_MIN;
	volatile int16_t x352 = INT16_MAX;
	static volatile int32_t t87 = 358072893;

	t87 = ((x349&x350)&(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	volatile int16_t x355 = INT16_MIN;
	volatile int32_t x356 = -1;
	volatile int32_t t88 = -7650;

	t88 = ((x353&x354)&(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 3856537817LLU;
	volatile int32_t x360 = INT32_MAX;
	static uint64_t t89 = 1745466252LLU;

	t89 = ((x357&x358)&(x359<x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	static int64_t x362 = 27LL;

	t90 = ((x361&x362)&(x363<x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x365 = 28;
	uint64_t x366 = 19333LLU;
	static uint64_t x367 = 7LLU;
	static int8_t x368 = -1;
	uint64_t t91 = 40088610LLU;

	t91 = ((x365&x366)&(x367<x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = -45;
	volatile int64_t x372 = -1LL;
	int32_t t92 = 18;

	t92 = ((x369&x370)&(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x373 = 1861694396033LL;
	static volatile int64_t x374 = INT64_MIN;
	int32_t x375 = 663972260;
	int32_t x376 = 104105067;
	int64_t t93 = -12LL;

	t93 = ((x373&x374)&(x375<x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int32_t x378 = -216;
	int32_t x379 = 20299732;
	uint64_t x380 = 1756183299664402855LLU;
	int32_t t94 = -405145;

	t94 = ((x377&x378)&(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	static int8_t x382 = 1;
	int32_t x383 = INT32_MIN;
	volatile int32_t t95 = 101325176;

	t95 = ((x381&x382)&(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = 49U;
	uint8_t x387 = 0U;
	int8_t x388 = INT8_MIN;
	volatile uint32_t t96 = 10U;

	t96 = ((x385&x386)&(x387<x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 28658U;
	int8_t x392 = -1;
	volatile int64_t t97 = -3719659LL;

	t97 = ((x389&x390)&(x391<x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x395 = INT8_MAX;

	t98 = ((x393&x394)&(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x399 = -96;

	t99 = ((x397&x398)&(x399<x400));

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

