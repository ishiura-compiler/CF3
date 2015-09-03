#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
int16_t x6 = INT16_MIN;
volatile int32_t t1 = 23103955;
int32_t x10 = -1;
static int32_t x12 = INT32_MIN;
int8_t x15 = INT8_MAX;
int16_t x16 = INT16_MIN;
volatile int32_t t4 = 2607;
int8_t x22 = 39;
int16_t x29 = INT16_MIN;
uint8_t x32 = 5U;
int32_t x34 = INT32_MIN;
int32_t x36 = 987;
volatile int32_t t8 = 24902;
int8_t x37 = INT8_MIN;
static volatile int32_t t9 = -36;
volatile uint16_t x41 = 5401U;
int64_t x44 = -3408155472LL;
int8_t x45 = INT8_MIN;
volatile int16_t x48 = 0;
int64_t x51 = INT64_MIN;
static uint8_t x54 = UINT8_MAX;
int64_t x55 = -184855LL;
volatile int16_t x57 = -1;
static volatile int32_t t15 = 3022;
int64_t x67 = INT64_MIN;
int32_t x68 = -3;
volatile int32_t t18 = 4839544;
int16_t x80 = -1322;
static int16_t x82 = INT16_MIN;
int32_t x83 = -8963;
volatile int16_t x84 = INT16_MIN;
int32_t t20 = -1417044;
volatile int8_t x91 = -2;
int32_t t22 = 188;
int64_t x95 = -1LL;
volatile int32_t t24 = -2;
int32_t t25 = 3513;
uint64_t x110 = UINT64_MAX;
int32_t x111 = INT32_MIN;
volatile int32_t x117 = INT32_MIN;
uint16_t x130 = 2U;
int32_t t32 = -143873;
int32_t x134 = INT32_MAX;
uint16_t x140 = UINT16_MAX;
static uint16_t x146 = 2881U;
volatile int32_t t36 = 4741;
int16_t x152 = INT16_MAX;
volatile int8_t x155 = INT8_MAX;
volatile uint32_t x156 = 338778U;
uint8_t x175 = UINT8_MAX;
volatile int8_t x182 = INT8_MIN;
int64_t x188 = INT64_MAX;
int64_t x197 = -1304036302312LL;
int32_t x211 = 119045;
static int32_t x212 = 0;
int32_t x214 = INT32_MIN;
volatile int32_t t53 = -245126;
volatile int32_t t56 = -7501667;
uint16_t x229 = 3211U;
int32_t t59 = 10;
static volatile int8_t x241 = INT8_MIN;
int64_t x244 = 32203880LL;
int8_t x245 = 0;
int64_t x248 = INT64_MIN;
int16_t x249 = -1;
volatile int32_t t62 = -44921208;
uint64_t x254 = 3204403151097LLU;
volatile int32_t t63 = -81127;
int32_t t64 = 32442478;
static uint64_t x263 = 13618LLU;
int16_t x264 = INT16_MAX;
uint64_t x268 = 416797726645LLU;
uint8_t x269 = 0U;
static int64_t x281 = -1LL;
static volatile int16_t x282 = INT16_MAX;
int16_t x288 = INT16_MIN;
static volatile int16_t x289 = INT16_MIN;
int16_t x292 = 0;
int16_t x296 = INT16_MIN;
static int64_t x297 = INT64_MIN;
volatile int32_t x302 = INT32_MIN;
volatile int32_t t75 = 57972;
volatile int32_t x306 = INT32_MIN;
int32_t x318 = -62933;
volatile int16_t x320 = 3131;
int32_t t79 = 59198633;
uint16_t x322 = UINT16_MAX;
int32_t x323 = 247676;
uint8_t x325 = 30U;
int16_t x327 = INT16_MIN;
uint32_t x334 = 521635666U;
int16_t x341 = INT16_MIN;
int16_t x345 = INT16_MAX;
int32_t t86 = 35213;
int32_t t89 = -36347;
volatile uint16_t x366 = UINT16_MAX;
volatile int32_t t92 = -2;
uint8_t x377 = 1U;
uint8_t x380 = 0U;
static int64_t x384 = -1LL;
static int64_t x392 = -1LL;
volatile int64_t x400 = INT64_MIN;
volatile int32_t t99 = 120050;


void f0(void) {
	static volatile int16_t x2 = INT16_MIN;
	int16_t x3 = -10;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 8201008;

	t0 = (((x1&x2)^x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 5631U;
	uint64_t x7 = 415LLU;
	static uint64_t x8 = UINT64_MAX;

	t1 = (((x5&x6)^x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	int32_t x11 = INT32_MIN;
	volatile int32_t t2 = -1559;

	t2 = (((x9&x10)^x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	uint8_t x14 = 7U;
	static int32_t t3 = 11048639;

	t3 = (((x13&x14)^x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	int32_t x18 = INT32_MIN;
	volatile int8_t x19 = -1;
	volatile int32_t x20 = -539;

	t4 = (((x17&x18)^x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 7U;
	int8_t x23 = 20;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 4;

	t5 = (((x21&x22)^x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	static volatile int8_t x26 = -1;
	int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -10090575;

	t6 = (((x25&x26)^x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = 827U;
	uint16_t x31 = 1299U;
	volatile int32_t t7 = 4404439;

	t7 = (((x29&x30)^x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2U;
	int64_t x35 = INT64_MIN;

	t8 = (((x33&x34)^x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	uint64_t x39 = UINT64_MAX;
	volatile int64_t x40 = INT64_MIN;

	t9 = (((x37&x38)^x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = 430305;
	int16_t x43 = -310;
	int32_t t10 = 5518;

	t10 = (((x41&x42)^x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	uint8_t x47 = 1U;
	volatile int32_t t11 = 13936948;

	t11 = (((x45&x46)^x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -8499;
	static uint16_t x50 = 29U;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 3840;

	t12 = (((x49&x50)^x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 368LLU;
	volatile int64_t x56 = -1LL;
	volatile int32_t t13 = -437;

	t13 = (((x53&x54)^x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = 35U;
	static int32_t x59 = -1;
	int64_t x60 = -995846450959LL;
	volatile int32_t t14 = 722;

	t14 = (((x57&x58)^x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	volatile int8_t x62 = INT8_MAX;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = INT8_MAX;

	t15 = (((x61&x62)^x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -2;
	volatile int32_t x66 = INT32_MIN;
	volatile int32_t t16 = 538;

	t16 = (((x65&x66)^x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = 6;
	static int8_t x71 = -1;
	uint32_t x72 = 289620695U;
	int32_t t17 = 336274440;

	t17 = (((x69&x70)^x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x73 = 2349U;
	uint8_t x74 = UINT8_MAX;
	uint32_t x75 = 383907U;
	static int8_t x76 = INT8_MIN;

	t18 = (((x73&x74)^x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -1;
	int16_t x79 = 13046;
	int32_t t19 = 24;

	t19 = (((x77&x78)^x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;

	t20 = (((x81&x82)^x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -18LL;
	int8_t x86 = -4;
	uint8_t x87 = UINT8_MAX;
	static uint64_t x88 = 856068606LLU;
	volatile int32_t t21 = -12486066;

	t21 = (((x85&x86)^x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	int64_t x92 = -1LL;

	t22 = (((x89&x90)^x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int64_t x94 = INT64_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 48382;

	t23 = (((x93&x94)^x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 2299218367633491LLU;
	int16_t x98 = 19;
	volatile int32_t x99 = INT32_MAX;
	int8_t x100 = 1;

	t24 = (((x97&x98)^x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 8U;
	int32_t x102 = INT32_MIN;
	uint32_t x103 = 1494574259U;
	volatile int8_t x104 = INT8_MIN;

	t25 = (((x101&x102)^x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 0LL;
	volatile int16_t x106 = -5;
	static int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MAX;
	volatile int32_t t26 = -1600;

	t26 = (((x105&x106)^x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x112 = -1LL;
	static int32_t t27 = 237;

	t27 = (((x109&x110)^x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int16_t x114 = INT16_MIN;
	uint32_t x115 = 1U;
	int32_t x116 = -63829866;
	int32_t t28 = 127;

	t28 = (((x113&x114)^x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = 10;
	volatile int64_t x119 = INT64_MIN;
	int32_t x120 = -230;
	int32_t t29 = 772;

	t29 = (((x117&x118)^x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x122 = UINT16_MAX;
	volatile uint16_t x123 = UINT16_MAX;
	static uint64_t x124 = UINT64_MAX;
	static volatile int32_t t30 = -24;

	t30 = (((x121&x122)^x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MAX;
	int8_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	static int64_t x128 = INT64_MIN;
	volatile int32_t t31 = 14991;

	t31 = (((x125&x126)^x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	volatile int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MAX;

	t32 = (((x129&x130)^x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -13579445LL;
	int16_t x135 = -1;
	static int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 62841;

	t33 = (((x133&x134)^x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	int16_t x138 = -1;
	int16_t x139 = 2;
	volatile int32_t t34 = 698277706;

	t34 = (((x137&x138)^x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 3LLU;
	int64_t x142 = -59767697014LL;
	uint32_t x143 = 648150U;
	uint32_t x144 = UINT32_MAX;
	static volatile int32_t t35 = -112231;

	t35 = (((x141&x142)^x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int32_t x147 = 1978941;
	int64_t x148 = INT64_MIN;

	t36 = (((x145&x146)^x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = 209311840;
	static volatile int8_t x150 = -1;
	uint16_t x151 = UINT16_MAX;
	volatile int32_t t37 = 421;

	t37 = (((x149&x150)^x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 2799U;
	static uint32_t x154 = UINT32_MAX;
	volatile int32_t t38 = -10597;

	t38 = (((x153&x154)^x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	static uint16_t x159 = 889U;
	uint16_t x160 = 27U;
	int32_t t39 = -69;

	t39 = (((x157&x158)^x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MAX;
	static int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	int32_t x164 = -122266767;
	int32_t t40 = -14306992;

	t40 = (((x161&x162)^x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -59;
	int32_t x166 = -506654422;
	int16_t x167 = 200;
	volatile uint64_t x168 = UINT64_MAX;
	static int32_t t41 = -5418;

	t41 = (((x165&x166)^x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = -1;
	static volatile int16_t x170 = -7;
	uint32_t x171 = 163378519U;
	volatile int64_t x172 = 160177770036906293LL;
	volatile int32_t t42 = 0;

	t42 = (((x169&x170)^x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 31416607LL;
	uint64_t x174 = UINT64_MAX;
	uint16_t x176 = 29807U;
	int32_t t43 = 0;

	t43 = (((x173&x174)^x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 14229823U;
	static uint16_t x178 = 1375U;
	int64_t x179 = -5LL;
	static volatile int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = 30951;

	t44 = (((x177&x178)^x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int16_t x183 = INT16_MAX;
	uint32_t x184 = 251871607U;
	static volatile int32_t t45 = 4417;

	t45 = (((x181&x182)^x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -7824;
	volatile uint32_t x186 = 29412U;
	int16_t x187 = INT16_MIN;
	volatile int32_t t46 = 36145;

	t46 = (((x185&x186)^x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint64_t x190 = 33304LLU;
	int8_t x191 = INT8_MIN;
	int32_t x192 = -1;
	volatile int32_t t47 = 1597741;

	t47 = (((x189&x190)^x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = UINT32_MAX;
	int16_t x194 = -1;
	static volatile int16_t x195 = 1016;
	int16_t x196 = -2172;
	static volatile int32_t t48 = 31401599;

	t48 = (((x193&x194)^x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 49546000021434LLU;
	volatile int64_t x199 = -91014296LL;
	uint8_t x200 = 104U;
	volatile int32_t t49 = 501641740;

	t49 = (((x197&x198)^x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -1LL;
	int8_t x202 = -1;
	uint32_t x203 = 1939538U;
	int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = 9320390;

	t50 = (((x201&x202)^x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -64;
	int8_t x206 = 1;
	uint64_t x207 = 6LLU;
	volatile uint64_t x208 = UINT64_MAX;
	static int32_t t51 = -51197421;

	t51 = (((x205&x206)^x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	uint32_t x210 = 1965U;
	int32_t t52 = -2861;

	t52 = (((x209&x210)^x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int64_t x215 = INT64_MIN;
	int8_t x216 = INT8_MAX;

	t53 = (((x213&x214)^x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 55U;
	uint32_t x218 = 1U;
	int64_t x219 = -1LL;
	volatile int64_t x220 = INT64_MAX;
	int32_t t54 = 32395;

	t54 = (((x217&x218)^x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 1;
	uint64_t x222 = UINT64_MAX;
	uint32_t x223 = UINT32_MAX;
	static uint16_t x224 = 334U;
	volatile int32_t t55 = -7763371;

	t55 = (((x221&x222)^x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = -146386675LL;
	int32_t x227 = -1;
	uint16_t x228 = 11U;

	t56 = (((x225&x226)^x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -1LL;
	static int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t57 = -630755780;

	t57 = (((x229&x230)^x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MAX;
	volatile int16_t x234 = INT16_MIN;
	uint32_t x235 = 1U;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -31449560;

	t58 = (((x233&x234)^x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = -26;
	static int64_t x239 = INT64_MIN;
	static volatile int64_t x240 = -1LL;

	t59 = (((x237&x238)^x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x242 = -1;
	int32_t x243 = 3695;
	static volatile int32_t t60 = 516733828;

	t60 = (((x241&x242)^x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = 45U;
	int32_t x247 = -89427;
	static volatile int32_t t61 = 29656553;

	t61 = (((x245&x246)^x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	volatile int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;

	t62 = (((x249&x250)^x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MIN;

	t63 = (((x253&x254)^x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x258 = 221136995;
	int32_t x259 = INT32_MIN;
	volatile int16_t x260 = INT16_MIN;

	t64 = (((x257&x258)^x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -260;
	static volatile int32_t x262 = INT32_MIN;
	volatile int32_t t65 = -97223;

	t65 = (((x261&x262)^x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static int32_t x266 = INT32_MIN;
	int8_t x267 = 0;
	static volatile int32_t t66 = -744;

	t66 = (((x265&x266)^x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MAX;
	uint8_t x272 = 0U;
	volatile int32_t t67 = -428;

	t67 = (((x269&x270)^x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 2;
	volatile uint32_t x274 = UINT32_MAX;
	uint64_t x275 = 306520326960LLU;
	volatile int8_t x276 = INT8_MAX;
	int32_t t68 = -388525345;

	t68 = (((x273&x274)^x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int64_t x278 = -2839764158039708748LL;
	int64_t x279 = INT64_MIN;
	int16_t x280 = -1;
	static int32_t t69 = 3;

	t69 = (((x277&x278)^x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x283 = 27318344LLU;
	uint16_t x284 = 7U;
	volatile int32_t t70 = 0;

	t70 = (((x281&x282)^x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = 5132946;
	volatile int32_t t71 = -31;

	t71 = (((x285&x286)^x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x290 = 0LL;
	static int16_t x291 = INT16_MIN;
	volatile int32_t t72 = 188500321;

	t72 = (((x289&x290)^x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 291LLU;
	int64_t x294 = -1LL;
	int32_t x295 = 14845;
	int32_t t73 = -269168016;

	t73 = (((x293&x294)^x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -1;
	volatile int16_t x299 = -1;
	int64_t x300 = 29360LL;
	static int32_t t74 = -154805;

	t74 = (((x297&x298)^x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1105489;
	int64_t x303 = INT64_MIN;
	volatile int8_t x304 = INT8_MAX;

	t75 = (((x301&x302)^x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x305 = INT32_MIN;
	static uint64_t x307 = UINT64_MAX;
	int64_t x308 = 582LL;
	int32_t t76 = 2;

	t76 = (((x305&x306)^x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int32_t x310 = INT32_MIN;
	int8_t x311 = -1;
	int8_t x312 = -1;
	int32_t t77 = -1;

	t77 = (((x309&x310)^x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	volatile int8_t x314 = -1;
	int32_t x315 = -43;
	volatile int8_t x316 = INT8_MAX;
	int32_t t78 = -387014;

	t78 = (((x313&x314)^x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 530343057799542835LLU;
	int16_t x319 = INT16_MAX;

	t79 = (((x317&x318)^x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	volatile int8_t x324 = -1;
	int32_t t80 = -347;

	t80 = (((x321&x322)^x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x326 = -1;
	uint32_t x328 = 320478782U;
	volatile int32_t t81 = -1632757;

	t81 = (((x325&x326)^x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint64_t x330 = 56LLU;
	int16_t x331 = 4;
	volatile uint32_t x332 = 279133597U;
	int32_t t82 = -55972825;

	t82 = (((x329&x330)^x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	uint16_t x335 = 161U;
	static volatile int64_t x336 = -1LL;
	int32_t t83 = 1545;

	t83 = (((x333&x334)^x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -56;
	uint8_t x338 = 0U;
	uint64_t x339 = 830LLU;
	static int16_t x340 = -1;
	int32_t t84 = 8019046;

	t84 = (((x337&x338)^x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x342 = -1LL;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = -333;
	volatile int32_t t85 = -63;

	t85 = (((x341&x342)^x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MAX;
	int16_t x347 = INT16_MAX;
	volatile uint64_t x348 = UINT64_MAX;

	t86 = (((x345&x346)^x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -579;
	volatile uint32_t x350 = UINT32_MAX;
	int8_t x351 = 0;
	static uint8_t x352 = 3U;
	static volatile int32_t t87 = -1976;

	t87 = (((x349&x350)^x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MAX;
	uint16_t x355 = 6086U;
	uint32_t x356 = 6907U;
	int32_t t88 = 15;

	t88 = (((x353&x354)^x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	static int32_t x358 = 4369;
	static volatile int8_t x359 = 15;
	int64_t x360 = -1LL;

	t89 = (((x357&x358)^x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 6559178U;
	volatile int32_t x362 = INT32_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;
	int32_t t90 = -46;

	t90 = (((x361&x362)^x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	int32_t x367 = -1;
	static uint64_t x368 = 8110681351893197LLU;
	volatile int32_t t91 = 3;

	t91 = (((x365&x366)^x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = -1LL;
	uint32_t x371 = 27578458U;
	uint16_t x372 = UINT16_MAX;

	t92 = (((x369&x370)^x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 523791660U;
	static int16_t x374 = INT16_MAX;
	static volatile int8_t x375 = INT8_MIN;
	static uint8_t x376 = 3U;
	int32_t t93 = 5108129;

	t93 = (((x373&x374)^x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MIN;
	int32_t t94 = -5;

	t94 = (((x377&x378)^x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	volatile uint16_t x382 = UINT16_MAX;
	int16_t x383 = -1;
	volatile int32_t t95 = 3;

	t95 = (((x381&x382)^x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = -151;

	t96 = (((x385&x386)^x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 32U;
	int16_t x390 = 1880;
	static volatile int64_t x391 = INT64_MIN;
	int32_t t97 = 12;

	t97 = (((x389&x390)^x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MAX;
	uint64_t x394 = 54LLU;
	int64_t x395 = -19906LL;
	uint64_t x396 = UINT64_MAX;
	static int32_t t98 = -164608767;

	t98 = (((x393&x394)^x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 208;
	int8_t x398 = INT8_MIN;
	static uint64_t x399 = UINT64_MAX;

	t99 = (((x397&x398)^x399)<=x400);

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

