#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
static int64_t x12 = INT64_MIN;
int32_t t2 = -186;
uint16_t x13 = 22566U;
int8_t x25 = INT8_MAX;
int16_t x27 = INT16_MAX;
uint16_t x28 = 4U;
uint8_t x31 = 6U;
volatile uint16_t x36 = 35U;
volatile int32_t t8 = -6244637;
uint16_t x39 = UINT16_MAX;
static uint32_t x42 = 232062305U;
static int32_t x44 = 3707;
volatile int32_t x64 = -1;
uint8_t x66 = 33U;
uint16_t x74 = UINT16_MAX;
int32_t t19 = 581465273;
volatile uint16_t x86 = 1U;
volatile uint16_t x88 = 262U;
volatile int32_t t21 = -189026;
uint8_t x89 = 39U;
int64_t x91 = INT64_MAX;
uint16_t x94 = UINT16_MAX;
static int64_t x98 = 23232675LL;
static int64_t x104 = -14108061120299748LL;
uint8_t x106 = 0U;
volatile uint8_t x111 = 2U;
int32_t t27 = 1426;
volatile int32_t t29 = 781;
uint8_t x121 = 0U;
volatile int8_t x132 = 0;
volatile int32_t t32 = 348;
static int32_t x142 = INT32_MIN;
volatile uint32_t x144 = 3823394U;
int32_t t35 = 108349938;
int32_t x163 = INT32_MIN;
volatile int32_t t41 = 910103762;
int64_t x171 = INT64_MIN;
int8_t x172 = INT8_MAX;
int32_t x173 = INT32_MAX;
static int8_t x178 = INT8_MIN;
static uint16_t x187 = 5U;
int32_t x188 = INT32_MIN;
volatile int8_t x189 = -1;
int8_t x191 = 13;
static volatile int32_t t51 = 13;
static uint8_t x209 = 0U;
int64_t x215 = INT64_MIN;
int32_t x218 = -1;
int64_t x220 = -1LL;
int8_t x231 = INT8_MIN;
int64_t x233 = INT64_MIN;
int32_t x236 = -9684596;
int64_t x242 = 397648681053358LL;
int32_t t60 = -169350194;
uint16_t x246 = 286U;
int64_t x253 = -1LL;
int8_t x255 = -36;
int64_t x263 = INT64_MIN;
int8_t x264 = 0;
static uint32_t x267 = UINT32_MAX;
int32_t x268 = INT32_MIN;
volatile int32_t t66 = -1;
int32_t x292 = 1776;
static int64_t x295 = -1LL;
uint16_t x298 = 26797U;
static uint16_t x300 = 4U;
int32_t t74 = -7477088;
int8_t x304 = 31;
int32_t x308 = INT32_MAX;
int32_t x311 = -1;
volatile int64_t x312 = INT64_MIN;
int32_t t77 = 1;
uint64_t x320 = 3132217LLU;
uint8_t x326 = 3U;
static int32_t t81 = -263761911;
int32_t t83 = 109770;
int32_t x347 = INT32_MAX;
static int64_t x355 = INT64_MIN;
int16_t x358 = INT16_MIN;
static int8_t x361 = INT8_MIN;
volatile int32_t t90 = -1140225;
static uint32_t x366 = 3827358U;
static volatile int16_t x369 = 0;
uint8_t x375 = 15U;
volatile int32_t t94 = 23823;
static volatile int16_t x384 = -1;
uint16_t x388 = 56U;
uint16_t x392 = 105U;
volatile int32_t t99 = 3161;


void f0(void) {
	uint64_t x1 = 1936814276549390LLU;
	volatile int16_t x3 = -1;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -25571;

	t0 = ((x1&(x2^x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 75U;
	static int16_t x6 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -38;

	t1 = ((x5&(x6^x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int64_t x10 = 1949LL;
	volatile int16_t x11 = INT16_MIN;

	t2 = ((x9&(x10^x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 1571U;
	volatile uint64_t x15 = 235336774LLU;
	uint16_t x16 = 9U;
	int32_t t3 = 129322;

	t3 = ((x13&(x14^x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	volatile int32_t x18 = 101799493;
	int64_t x19 = 33346874402644363LL;
	uint32_t x20 = 14U;
	int32_t t4 = -6341;

	t4 = ((x17&(x18^x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = 2820025U;
	volatile int16_t x23 = 62;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = 0;

	t5 = ((x21&(x22^x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	volatile int32_t t6 = -32694;

	t6 = ((x25&(x26^x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -884LL;
	int64_t x30 = INT64_MAX;
	uint8_t x32 = 0U;
	volatile int32_t t7 = -8;

	t7 = ((x29&(x30^x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = -1;
	static uint8_t x35 = 15U;

	t8 = ((x33&(x34^x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	volatile uint32_t x38 = UINT32_MAX;
	uint16_t x40 = 458U;
	volatile int32_t t9 = 10997;

	t9 = ((x37&(x38^x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint32_t x43 = UINT32_MAX;
	int32_t t10 = 14;

	t10 = ((x41&(x42^x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	int32_t x46 = 5;
	static int64_t x47 = -1LL;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -4074;

	t11 = ((x45&(x46^x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	static int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t12 = 1323;

	t12 = ((x49&(x50^x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = UINT64_MAX;
	static int64_t x54 = INT64_MIN;
	static int16_t x55 = INT16_MIN;
	int32_t x56 = -1;
	int32_t t13 = 1938;

	t13 = ((x53&(x54^x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -110LL;
	static volatile int16_t x58 = -1;
	uint8_t x59 = 3U;
	static volatile uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 2;

	t14 = ((x57&(x58^x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -14269;
	int64_t x62 = -2380575728468508452LL;
	int32_t x63 = -1;
	static int32_t t15 = 2123193;

	t15 = ((x61&(x62^x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	volatile uint16_t x67 = UINT16_MAX;
	uint8_t x68 = 0U;
	int32_t t16 = 169;

	t16 = ((x65&(x66^x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = UINT8_MAX;
	volatile int8_t x71 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = 83689506;

	t17 = ((x69&(x70^x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	static int32_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = -172524;

	t18 = ((x73&(x74^x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 8;
	int64_t x78 = 83141448888LL;
	int16_t x79 = INT16_MIN;
	volatile uint32_t x80 = 2U;

	t19 = ((x77&(x78^x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int64_t x83 = 229012768862942LL;
	uint16_t x84 = 113U;
	static volatile int32_t t20 = 107451268;

	t20 = ((x81&(x82^x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	static int32_t x87 = INT32_MIN;

	t21 = ((x85&(x86^x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = -5420;
	volatile int16_t x92 = 5124;
	volatile int32_t t22 = 33;

	t22 = ((x89&(x90^x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -39;
	volatile uint64_t x95 = 44721962033LLU;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 204537;

	t23 = ((x93&(x94^x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	static uint64_t x99 = 316301426690LLU;
	int32_t x100 = -68521407;
	int32_t t24 = -30818;

	t24 = ((x97&(x98^x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = 407U;
	uint16_t x103 = UINT16_MAX;
	int32_t t25 = 58;

	t25 = ((x101&(x102^x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1941;
	int32_t x107 = -1;
	int8_t x108 = -1;
	static int32_t t26 = 1;

	t26 = ((x105&(x106^x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 3862109133LLU;
	int64_t x110 = 149769980820708694LL;
	int64_t x112 = INT64_MAX;

	t27 = ((x109&(x110^x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	static volatile uint64_t x114 = UINT64_MAX;
	static int64_t x115 = -1LL;
	static volatile int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -4790115;

	t28 = ((x113&(x114^x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = 1;
	uint32_t x120 = 238U;

	t29 = ((x117&(x118^x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	volatile int8_t x123 = 0;
	int16_t x124 = -1;
	int32_t t30 = -11100;

	t30 = ((x121&(x122^x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 203466948U;
	static uint64_t x126 = 51225797LLU;
	volatile int32_t x127 = INT32_MIN;
	volatile int64_t x128 = 16LL;
	int32_t t31 = -340165774;

	t31 = ((x125&(x126^x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 259LLU;
	int16_t x130 = INT16_MAX;
	static uint8_t x131 = UINT8_MAX;

	t32 = ((x129&(x130^x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 37U;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = -141425;

	t33 = ((x133&(x134^x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 69U;
	static uint16_t x138 = UINT16_MAX;
	int16_t x139 = -1;
	int32_t x140 = 45773862;
	volatile int32_t t34 = -220189;

	t34 = ((x137&(x138^x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	uint64_t x143 = UINT64_MAX;

	t35 = ((x141&(x142^x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x146 = 37073034047326LLU;
	static int64_t x147 = INT64_MIN;
	int32_t x148 = -1;
	volatile int32_t t36 = 19;

	t36 = ((x145&(x146^x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	volatile uint16_t x151 = UINT16_MAX;
	int64_t x152 = -1LL;
	int32_t t37 = 38;

	t37 = ((x149&(x150^x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -4010477201854LL;
	int16_t x154 = -129;
	uint64_t x155 = 14LLU;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -38;

	t38 = ((x153&(x154^x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint16_t x158 = 8U;
	uint64_t x159 = 107192147LLU;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 6;

	t39 = ((x157&(x158^x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x162 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = -34;

	t40 = ((x161&(x162^x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 0U;
	volatile int16_t x166 = 275;
	int32_t x167 = 1;
	volatile uint8_t x168 = UINT8_MAX;

	t41 = ((x165&(x166^x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	volatile int32_t x170 = INT32_MIN;
	int32_t t42 = -81826;

	t42 = ((x169&(x170^x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	static int16_t x176 = -1;
	volatile int32_t t43 = 350945256;

	t43 = ((x173&(x174^x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	uint8_t x179 = UINT8_MAX;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 0;

	t44 = ((x177&(x178^x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 5764;
	volatile int32_t x182 = INT32_MIN;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t x184 = -1;
	int32_t t45 = 40096;

	t45 = ((x181&(x182^x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -34836;
	static uint64_t x186 = 1655541LLU;
	volatile int32_t t46 = -3731291;

	t46 = ((x185&(x186^x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x190 = -205;
	static uint8_t x192 = 0U;
	int32_t t47 = 1021423;

	t47 = ((x189&(x190^x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = UINT32_MAX;
	uint8_t x194 = 6U;
	int16_t x195 = INT16_MIN;
	static volatile int32_t x196 = INT32_MIN;
	int32_t t48 = 3;

	t48 = ((x193&(x194^x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MAX;
	int64_t x198 = INT64_MIN;
	static int32_t x199 = -1;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 1593584;

	t49 = ((x197&(x198^x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 70906LLU;
	int64_t x202 = -1LL;
	volatile int32_t x203 = -1;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -63;

	t50 = ((x201&(x202^x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	static volatile uint64_t x208 = 3882662900518264133LLU;

	t51 = ((x205&(x206^x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = INT64_MAX;
	static uint16_t x211 = 10U;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t52 = 32560;

	t52 = ((x209&(x210^x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	static uint8_t x214 = 15U;
	uint32_t x216 = 1121U;
	int32_t t53 = 995151;

	t53 = ((x213&(x214^x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	int32_t x219 = -3080;
	int32_t t54 = 24;

	t54 = ((x217&(x218^x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 82U;
	uint8_t x222 = 1U;
	uint16_t x223 = UINT16_MAX;
	volatile int64_t x224 = -1LL;
	static volatile int32_t t55 = -105859;

	t55 = ((x221&(x222^x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int32_t x226 = 31615;
	int8_t x227 = INT8_MIN;
	static volatile int16_t x228 = INT16_MIN;
	int32_t t56 = -94;

	t56 = ((x225&(x226^x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = 570U;
	volatile int8_t x232 = -1;
	static int32_t t57 = 151499;

	t57 = ((x229&(x230^x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 37558535715442LLU;
	uint64_t x235 = 106990LLU;
	int32_t t58 = 4;

	t58 = ((x233&(x234^x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -16;
	int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -189;

	t59 = ((x237&(x238^x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -4009591445529521LL;
	static int64_t x243 = -1LL;
	uint64_t x244 = 401913328LLU;

	t60 = ((x241&(x242^x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 15U;
	uint16_t x247 = 2345U;
	volatile uint64_t x248 = 4074732960684975LLU;
	static volatile int32_t t61 = -8246223;

	t61 = ((x245&(x246^x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -15627;
	volatile int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	int8_t x252 = 52;
	int32_t t62 = -8640197;

	t62 = ((x249&(x250^x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	int64_t x256 = INT64_MAX;
	int32_t t63 = 639475230;

	t63 = ((x253&(x254^x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	static int64_t x258 = -752162LL;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = 7U;
	volatile int32_t t64 = 104;

	t64 = ((x257&(x258^x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = UINT8_MAX;
	volatile int32_t t65 = 1;

	t65 = ((x261&(x262^x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 2240LLU;
	uint8_t x266 = 18U;

	t66 = ((x265&(x266^x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 230785899;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MAX;
	int8_t x272 = -1;
	int32_t t67 = 101825;

	t67 = ((x269&(x270^x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 4000176905603753298LL;
	int32_t x274 = INT32_MIN;
	int8_t x275 = 4;
	int16_t x276 = -1;
	int32_t t68 = 4;

	t68 = ((x273&(x274^x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 65U;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	int16_t x280 = 1;
	volatile int32_t t69 = 9958437;

	t69 = ((x277&(x278^x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = 2860;
	uint8_t x282 = 4U;
	uint32_t x283 = 93U;
	volatile int16_t x284 = 2;
	int32_t t70 = -450;

	t70 = ((x281&(x282^x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = INT32_MAX;
	uint64_t x286 = 4026646748LLU;
	uint64_t x287 = 62604053585508887LLU;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 482;

	t71 = ((x285&(x286^x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MAX;
	static int16_t x290 = INT16_MIN;
	uint8_t x291 = 0U;
	int32_t t72 = -3593;

	t72 = ((x289&(x290^x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static int64_t x294 = INT64_MAX;
	int8_t x296 = -1;
	volatile int32_t t73 = -422;

	t73 = ((x293&(x294^x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = -1;
	volatile int64_t x299 = INT64_MIN;

	t74 = ((x297&(x298^x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	int8_t x302 = -1;
	int32_t x303 = -1;
	static int32_t t75 = 28;

	t75 = ((x301&(x302^x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	static uint32_t x306 = 3861807U;
	uint64_t x307 = 6983LLU;
	volatile int32_t t76 = 35;

	t76 = ((x305&(x306^x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -3;
	int16_t x310 = INT16_MAX;

	t77 = ((x309&(x310^x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static volatile uint64_t x314 = 627521865LLU;
	int64_t x315 = -20602997378357554LL;
	int64_t x316 = -1590LL;
	static volatile int32_t t78 = -1;

	t78 = ((x313&(x314^x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 0;
	uint16_t x318 = UINT16_MAX;
	static uint8_t x319 = UINT8_MAX;
	int32_t t79 = -30;

	t79 = ((x317&(x318^x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = UINT64_MAX;
	static uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 7305946U;
	volatile int32_t t80 = 1;

	t80 = ((x321&(x322^x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MAX;
	uint16_t x328 = 5380U;

	t81 = ((x325&(x326^x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 1;
	volatile uint16_t x330 = 1290U;
	int8_t x331 = -23;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t82 = 55915272;

	t82 = ((x329&(x330^x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MAX;
	static uint64_t x335 = UINT64_MAX;
	volatile int8_t x336 = INT8_MAX;

	t83 = ((x333&(x334^x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 364U;
	int32_t x338 = INT32_MIN;
	volatile int32_t x339 = INT32_MIN;
	static int64_t x340 = INT64_MAX;
	int32_t t84 = 44439640;

	t84 = ((x337&(x338^x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = UINT16_MAX;
	int32_t x342 = -163930643;
	int32_t x343 = 7598782;
	int8_t x344 = INT8_MAX;
	int32_t t85 = -1;

	t85 = ((x341&(x342^x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 42U;
	int32_t x346 = -1;
	uint16_t x348 = 22U;
	int32_t t86 = -72112468;

	t86 = ((x345&(x346^x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -3;
	static volatile uint64_t x350 = 4436195189LLU;
	static int32_t x351 = INT32_MIN;
	uint16_t x352 = 16882U;
	volatile int32_t t87 = 2675;

	t87 = ((x349&(x350^x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 481U;
	uint16_t x354 = UINT16_MAX;
	volatile int16_t x356 = 3;
	volatile int32_t t88 = -57484463;

	t88 = ((x353&(x354^x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	static int16_t x359 = INT16_MIN;
	static uint32_t x360 = 56U;
	int32_t t89 = -45363;

	t89 = ((x357&(x358^x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = -1LL;
	uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MAX;

	t90 = ((x361&(x362^x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t91 = -9;

	t91 = ((x365&(x366^x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t92 = -19310;

	t92 = ((x369&(x370^x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint32_t x376 = 56927768U;
	int32_t t93 = -21161;

	t93 = ((x373&(x374^x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = -219LL;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;

	t94 = ((x377&(x378^x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MAX;
	uint16_t x382 = 60U;
	int32_t x383 = INT32_MAX;
	volatile int32_t t95 = 634726113;

	t95 = ((x381&(x382^x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 4;
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MAX;
	int32_t t96 = 147366695;

	t96 = ((x385&(x386^x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	uint16_t x390 = UINT16_MAX;
	static uint8_t x391 = 14U;
	int32_t t97 = 1;

	t97 = ((x389&(x390^x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	uint64_t x394 = 368451220221088LLU;
	static int16_t x395 = INT16_MAX;
	volatile uint32_t x396 = 1920U;
	volatile int32_t t98 = 489069438;

	t98 = ((x393&(x394^x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	static volatile uint64_t x398 = 4583227LLU;
	volatile int32_t x399 = -23753273;
	int8_t x400 = INT8_MAX;

	t99 = ((x397&(x398^x399))<x400);

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

