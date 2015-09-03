#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x9 = UINT8_MAX;
int32_t t4 = -15;
uint16_t x33 = 19922U;
volatile uint32_t x38 = 4U;
int64_t x40 = INT64_MIN;
static int8_t x43 = INT8_MIN;
int32_t t13 = -148181641;
volatile int32_t x62 = -55124;
volatile int16_t x63 = INT16_MIN;
uint16_t x66 = UINT16_MAX;
volatile int16_t x67 = 12;
int64_t x72 = 4249991LL;
int16_t x76 = INT16_MAX;
int64_t x77 = -1LL;
volatile int32_t x80 = INT32_MAX;
static int64_t x81 = 9812502247058556LL;
int8_t x82 = 1;
volatile uint32_t x83 = 57915489U;
volatile int32_t x87 = -913;
volatile int32_t t21 = -582796;
int32_t x97 = 962853;
int32_t x100 = INT32_MIN;
static uint8_t x102 = 34U;
uint64_t x104 = UINT64_MAX;
volatile int32_t t25 = -503;
int16_t x106 = 2;
uint64_t x108 = 158565954492214LLU;
static volatile int16_t x109 = INT16_MIN;
int8_t x112 = INT8_MIN;
volatile uint8_t x113 = 126U;
int64_t x115 = -1LL;
static int64_t x117 = INT64_MIN;
int32_t x120 = INT32_MIN;
int32_t x121 = INT32_MAX;
volatile int16_t x122 = -1;
static uint16_t x128 = UINT16_MAX;
int16_t x132 = -1;
volatile uint16_t x133 = 1653U;
uint64_t x150 = 5052569928921301603LLU;
int16_t x152 = INT16_MIN;
static volatile uint8_t x162 = UINT8_MAX;
int8_t x163 = -27;
volatile uint8_t x164 = 16U;
volatile int32_t t40 = -57846598;
volatile int16_t x168 = 3;
static int32_t t42 = 58;
int16_t x173 = INT16_MIN;
int16_t x178 = INT16_MIN;
volatile int32_t t44 = -104;
int32_t t46 = -504860378;
int32_t t47 = -77;
static volatile int16_t x197 = INT16_MAX;
int8_t x198 = INT8_MIN;
int16_t x200 = INT16_MIN;
static int16_t x208 = INT16_MAX;
volatile int8_t x217 = INT8_MAX;
uint32_t x218 = 5763U;
uint32_t x219 = 108051U;
static int32_t x220 = INT32_MAX;
uint32_t x221 = 235003U;
volatile int16_t x222 = 858;
int64_t x227 = 1858399958510LL;
int32_t t56 = -65347;
volatile uint64_t x230 = UINT64_MAX;
volatile int32_t t57 = -2645746;
uint8_t x238 = 1U;
volatile int32_t t59 = 0;
uint32_t x244 = 109U;
uint8_t x246 = UINT8_MAX;
volatile int16_t x247 = -10;
uint64_t x250 = 239LLU;
uint64_t x262 = 2891LLU;
static uint8_t x269 = 42U;
volatile int8_t x277 = INT8_MIN;
uint8_t x279 = UINT8_MAX;
static int32_t x293 = INT32_MIN;
volatile int32_t t73 = -174077486;
int16_t x302 = INT16_MIN;
uint64_t x306 = UINT64_MAX;
uint8_t x313 = 15U;
static volatile int32_t x314 = INT32_MAX;
uint32_t x317 = 1588U;
volatile int16_t x319 = INT16_MAX;
int64_t x320 = 13441LL;
volatile int32_t x329 = 245115934;
uint32_t x331 = 941U;
volatile int32_t t82 = 2;
static int64_t x334 = INT64_MIN;
int32_t t83 = 5;
int8_t x338 = INT8_MIN;
int32_t x342 = INT32_MIN;
static int32_t t85 = -3492222;
uint16_t x346 = 3U;
volatile int8_t x355 = 1;
int32_t t88 = -196;
static int8_t x358 = -20;
uint64_t x360 = UINT64_MAX;
uint32_t x362 = 576112U;
int8_t x368 = -1;
volatile int32_t t91 = -135;
static uint64_t x370 = UINT64_MAX;
static volatile int8_t x372 = -6;
volatile int16_t x375 = -1;
int32_t t96 = 54;
int8_t x392 = -1;
volatile uint16_t x393 = UINT16_MAX;
volatile uint8_t x394 = 7U;
static uint8_t x397 = 117U;
uint8_t x398 = UINT8_MAX;


void f0(void) {
	int64_t x1 = -4134215539LL;
	volatile int8_t x2 = INT8_MIN;
	uint16_t x3 = UINT16_MAX;
	uint32_t x4 = 321682U;
	static int32_t t0 = 229911;

	t0 = ((x1&(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 4132494217770731LLU;
	int64_t x7 = 137346743LL;
	static uint64_t x8 = UINT64_MAX;
	int32_t t1 = -1038377580;

	t1 = ((x5&(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	uint32_t x11 = UINT32_MAX;
	uint32_t x12 = 139U;
	volatile int32_t t2 = 109877;

	t2 = ((x9&(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint8_t x14 = UINT8_MAX;
	static int16_t x15 = INT16_MIN;
	volatile int64_t x16 = 46LL;
	volatile int32_t t3 = -214498;

	t3 = ((x13&(x14<x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 37616547749420LL;
	int8_t x18 = -1;
	static volatile int8_t x19 = INT8_MIN;
	volatile int32_t x20 = INT32_MIN;

	t4 = ((x17&(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int16_t x22 = INT16_MAX;
	int8_t x23 = 0;
	static int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -5975;

	t5 = ((x21&(x22<x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int16_t x26 = INT16_MAX;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MAX;
	int32_t t6 = 71;

	t6 = ((x25&(x26<x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -1;
	int64_t x30 = INT64_MAX;
	static uint32_t x31 = 79373U;
	static int64_t x32 = -259392241525LL;
	static int32_t t7 = -770;

	t7 = ((x29&(x30<x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	int8_t x36 = 8;
	volatile int32_t t8 = -9;

	t8 = ((x33&(x34<x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint16_t x39 = UINT16_MAX;
	static volatile int32_t t9 = 34988;

	t9 = ((x37&(x38<x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x41 = 119U;
	int8_t x42 = -1;
	volatile uint64_t x44 = 6169004176931231LLU;
	int32_t t10 = -79138;

	t10 = ((x41&(x42<x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile uint16_t x46 = UINT16_MAX;
	static int16_t x47 = INT16_MAX;
	int64_t x48 = -140515424LL;
	volatile int32_t t11 = 417806;

	t11 = ((x45&(x46<x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1346514691U;
	int32_t x50 = -143;
	volatile int32_t x51 = 0;
	uint16_t x52 = 5949U;
	volatile int32_t t12 = 516603267;

	t12 = ((x49&(x50<x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1197;
	volatile int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	volatile uint64_t x56 = UINT64_MAX;

	t13 = ((x53&(x54<x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MAX;
	volatile int8_t x59 = INT8_MIN;
	volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -115202;

	t14 = ((x57&(x58<x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = 15912749879070LL;
	int8_t x64 = -1;
	static int32_t t15 = -116662508;

	t15 = ((x61&(x62<x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 984277LL;
	int32_t x68 = 3365;
	volatile int32_t t16 = 171;

	t16 = ((x65&(x66<x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 6U;
	static uint8_t x70 = 8U;
	int16_t x71 = -358;
	int32_t t17 = 61101422;

	t17 = ((x69&(x70<x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = -300;
	uint8_t x75 = 14U;
	volatile int32_t t18 = -244129803;

	t18 = ((x73&(x74<x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	int32_t t19 = 690;

	t19 = ((x77&(x78<x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x84 = 9U;
	static volatile int32_t t20 = -40996;

	t20 = ((x81&(x82<x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MAX;
	int32_t x88 = 167189245;

	t21 = ((x85&(x86<x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -9;
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MAX;
	volatile int16_t x92 = INT16_MAX;
	int32_t t22 = -365;

	t22 = ((x89&(x90<x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int32_t x94 = -32;
	int8_t x95 = INT8_MIN;
	uint32_t x96 = 66985U;
	int32_t t23 = 111;

	t23 = ((x93&(x94<x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MAX;
	volatile int64_t x99 = -1LL;
	int32_t t24 = 8073;

	t24 = ((x97&(x98<x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x103 = UINT8_MAX;

	t25 = ((x101&(x102<x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1182;
	int64_t x107 = INT64_MAX;
	static volatile int32_t t26 = 666;

	t26 = ((x105&(x106<x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	static volatile int32_t t27 = 786088;

	t27 = ((x109&(x110<x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 62U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -25081;

	t28 = ((x113&(x114<x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x118 = -1LL;
	static int32_t x119 = -1;
	int32_t t29 = -1640;

	t29 = ((x117&(x118<x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x123 = 86U;
	uint16_t x124 = 68U;
	volatile int32_t t30 = 3726045;

	t30 = ((x121&(x122<x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = -1563;
	int16_t x126 = INT16_MAX;
	int32_t x127 = -115352;
	int32_t t31 = 0;

	t31 = ((x125&(x126<x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MIN;
	volatile int32_t t32 = -6848157;

	t32 = ((x129&(x130<x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	volatile int64_t x135 = 4433324857LL;
	static uint32_t x136 = UINT32_MAX;
	int32_t t33 = 0;

	t33 = ((x133&(x134<x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 1;
	volatile uint64_t x138 = 325083940LLU;
	static int64_t x139 = INT64_MIN;
	static volatile uint16_t x140 = UINT16_MAX;
	int32_t t34 = -564;

	t34 = ((x137&(x138<x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 1602753555707LLU;
	int32_t x142 = INT32_MIN;
	uint16_t x143 = 238U;
	uint32_t x144 = 26U;
	int32_t t35 = 126863578;

	t35 = ((x141&(x142<x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MAX;
	int8_t x148 = -1;
	static volatile int32_t t36 = -14116;

	t36 = ((x145&(x146<x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 1U;
	uint16_t x151 = 2U;
	int32_t t37 = 63301;

	t37 = ((x149&(x150<x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	volatile int8_t x154 = INT8_MAX;
	volatile int64_t x155 = 16965368LL;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = -5;

	t38 = ((x153&(x154<x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = -3;
	int32_t x158 = INT32_MIN;
	static int32_t x159 = INT32_MIN;
	int64_t x160 = -1LL;
	static volatile int32_t t39 = 171762873;

	t39 = ((x157&(x158<x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 331488U;

	t40 = ((x161&(x162<x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	static int32_t x167 = -1;
	int32_t t41 = 102;

	t41 = ((x165&(x166<x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int64_t x170 = -1LL;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = UINT64_MAX;

	t42 = ((x169&(x170<x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	static int8_t x176 = INT8_MAX;
	int32_t t43 = 614032402;

	t43 = ((x173&(x174<x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	int64_t x179 = -144LL;
	int8_t x180 = 4;

	t44 = ((x177&(x178<x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	uint16_t x182 = UINT16_MAX;
	uint8_t x183 = 8U;
	int8_t x184 = 0;
	int32_t t45 = -30;

	t45 = ((x181&(x182<x183))==x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int16_t x186 = 0;
	uint8_t x187 = 1U;
	int8_t x188 = INT8_MIN;

	t46 = ((x185&(x186<x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = 7320437861725006LLU;
	int64_t x191 = INT64_MIN;
	int16_t x192 = -1;

	t47 = ((x189&(x190<x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int64_t x194 = -1LL;
	volatile uint32_t x195 = 314842U;
	int8_t x196 = -1;
	int32_t t48 = -110972;

	t48 = ((x193&(x194<x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x199 = 68LLU;
	int32_t t49 = -448209;

	t49 = ((x197&(x198<x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 7497U;
	uint32_t x202 = 646434U;
	uint32_t x203 = 39U;
	uint16_t x204 = UINT16_MAX;
	int32_t t50 = -53349778;

	t50 = ((x201&(x202<x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int64_t x206 = INT64_MAX;
	volatile uint64_t x207 = UINT64_MAX;
	int32_t t51 = 3;

	t51 = ((x205&(x206<x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MAX;
	int64_t x211 = -1LL;
	volatile uint64_t x212 = UINT64_MAX;
	static int32_t t52 = -932;

	t52 = ((x209&(x210<x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int16_t x214 = 0;
	int64_t x215 = -1LL;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = 0;

	t53 = ((x213&(x214<x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t t54 = -1037;

	t54 = ((x217&(x218<x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x223 = -1;
	int32_t x224 = INT32_MAX;
	int32_t t55 = -2;

	t55 = ((x221&(x222<x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	uint8_t x228 = 1U;

	t56 = ((x225&(x226<x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 177U;
	int16_t x231 = 0;
	uint16_t x232 = UINT16_MAX;

	t57 = ((x229&(x230<x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -10899;
	int64_t x234 = INT64_MIN;
	static int64_t x235 = -88639850458506891LL;
	uint16_t x236 = 28U;
	volatile int32_t t58 = -805669936;

	t58 = ((x233&(x234<x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = 130;
	int64_t x239 = -1LL;
	uint32_t x240 = 155128U;

	t59 = ((x237&(x238<x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	volatile int32_t x242 = -53141497;
	static uint32_t x243 = 0U;
	volatile int32_t t60 = -927294;

	t60 = ((x241&(x242<x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MAX;
	volatile uint32_t x248 = 301420985U;
	volatile int32_t t61 = 158523;

	t61 = ((x245&(x246<x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 978;
	uint16_t x251 = 126U;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = -89;

	t62 = ((x249&(x250<x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 0;
	int8_t x256 = INT8_MIN;
	int32_t t63 = 0;

	t63 = ((x253&(x254<x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	volatile int64_t x258 = INT64_MAX;
	uint32_t x259 = 316451U;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 56;

	t64 = ((x257&(x258<x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 154U;
	static int8_t x263 = -3;
	static int16_t x264 = INT16_MAX;
	volatile int32_t t65 = -378;

	t65 = ((x261&(x262<x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = 149;
	static int32_t x266 = -1;
	uint64_t x267 = 17777176362393LLU;
	volatile int8_t x268 = 3;
	int32_t t66 = 1;

	t66 = ((x265&(x266<x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x270 = 881108640402642LLU;
	static volatile int64_t x271 = -84211154705814LL;
	int8_t x272 = -1;
	static int32_t t67 = 2437;

	t67 = ((x269&(x270<x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MAX;
	int8_t x274 = 0;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 50852233;

	t68 = ((x273&(x274<x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x278 = INT64_MAX;
	int8_t x280 = -59;
	int32_t t69 = -46;

	t69 = ((x277&(x278<x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -1;
	int32_t x282 = 350875277;
	int8_t x283 = -1;
	int64_t x284 = -165934LL;
	int32_t t70 = 1933;

	t70 = ((x281&(x282<x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 0;
	static int64_t x286 = INT64_MIN;
	uint64_t x287 = 348256LLU;
	uint16_t x288 = 212U;
	int32_t t71 = -87;

	t71 = ((x285&(x286<x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 419665811153092629LLU;
	uint16_t x290 = 17549U;
	int8_t x291 = INT8_MIN;
	uint32_t x292 = 96825682U;
	volatile int32_t t72 = 895835;

	t72 = ((x289&(x290<x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x294 = UINT64_MAX;
	int64_t x295 = -97109759793868667LL;
	int8_t x296 = 0;

	t73 = ((x293&(x294<x295))==x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 90U;
	static uint8_t x299 = 47U;
	int16_t x300 = INT16_MAX;
	static volatile int32_t t74 = 1166;

	t74 = ((x297&(x298<x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x303 = INT64_MAX;
	volatile uint16_t x304 = UINT16_MAX;
	int32_t t75 = -167468;

	t75 = ((x301&(x302<x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 7524536U;
	int16_t x307 = -6676;
	volatile int16_t x308 = 57;
	static volatile int32_t t76 = 0;

	t76 = ((x305&(x306<x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -17743LL;
	int32_t x310 = -250712;
	int64_t x311 = -1LL;
	static int32_t x312 = 71;
	int32_t t77 = 5;

	t77 = ((x309&(x310<x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x315 = UINT64_MAX;
	static uint8_t x316 = 2U;
	int32_t t78 = 1086;

	t78 = ((x313&(x314<x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MIN;
	int32_t t79 = -834868665;

	t79 = ((x317&(x318<x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 906U;
	static int64_t x322 = 8283376LL;
	int64_t x323 = INT64_MAX;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = -1954;

	t80 = ((x321&(x322<x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	int16_t x326 = -1;
	uint32_t x327 = UINT32_MAX;
	volatile uint16_t x328 = 2925U;
	int32_t t81 = 4;

	t81 = ((x325&(x326<x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = -1;
	uint32_t x332 = 3U;

	t82 = ((x329&(x330<x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int8_t x335 = 28;
	static volatile int8_t x336 = INT8_MAX;

	t83 = ((x333&(x334<x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 1801607025620625326LLU;
	volatile int32_t t84 = 716;

	t84 = ((x337&(x338<x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	int64_t x343 = -1139LL;
	static int64_t x344 = INT64_MIN;

	t85 = ((x341&(x342<x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	static volatile uint64_t x347 = UINT64_MAX;
	uint32_t x348 = UINT32_MAX;
	int32_t t86 = -45068807;

	t86 = ((x345&(x346<x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -20;
	volatile uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 0U;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 9;

	t87 = ((x349&(x350<x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	uint8_t x354 = 29U;
	int8_t x356 = -12;

	t88 = ((x353&(x354<x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int64_t x359 = 44395524LL;
	int32_t t89 = -16007;

	t89 = ((x357&(x358<x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int8_t x363 = -1;
	volatile int16_t x364 = -7;
	int32_t t90 = -35;

	t90 = ((x361&(x362<x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1025957526124954757LL;
	int32_t x366 = -1;
	int8_t x367 = INT8_MIN;

	t91 = ((x365&(x366<x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int32_t x371 = -3;
	int32_t t92 = -182851938;

	t92 = ((x369&(x370<x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	static int32_t x374 = -1;
	uint8_t x376 = 99U;
	int32_t t93 = 2430;

	t93 = ((x373&(x374<x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x377 = INT8_MIN;
	static int64_t x378 = 27LL;
	uint16_t x379 = 15U;
	static int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -8;

	t94 = ((x377&(x378<x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -5;
	volatile uint32_t x382 = 494703797U;
	volatile uint16_t x383 = UINT16_MAX;
	int64_t x384 = -1LL;
	static int32_t t95 = 244;

	t95 = ((x381&(x382<x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 134699435390522LLU;
	uint32_t x386 = 24U;
	static int8_t x387 = 1;
	static int8_t x388 = -4;

	t96 = ((x385&(x386<x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	static int8_t x390 = -1;
	int8_t x391 = -9;
	static volatile int32_t t97 = 16564847;

	t97 = ((x389&(x390<x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x395 = -18;
	int64_t x396 = INT64_MIN;
	int32_t t98 = 33078039;

	t98 = ((x393&(x394<x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x399 = -454824711;
	uint16_t x400 = 14166U;
	int32_t t99 = -715663;

	t99 = ((x397&(x398<x399))==x400);

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

