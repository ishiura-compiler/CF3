#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x9 = 1U;
volatile uint8_t x11 = 28U;
int32_t x12 = INT32_MAX;
volatile int32_t t3 = 3974763;
volatile int8_t x22 = INT8_MAX;
volatile int32_t t5 = 0;
int64_t x26 = INT64_MIN;
int32_t x33 = 157176;
int32_t t9 = -980985106;
uint32_t x50 = UINT32_MAX;
static volatile int32_t x59 = INT32_MIN;
int64_t x62 = INT64_MAX;
int32_t t15 = 56625;
int16_t x67 = INT16_MAX;
static volatile int8_t x69 = INT8_MIN;
int64_t x71 = INT64_MAX;
volatile uint32_t x76 = 1U;
int8_t x79 = INT8_MIN;
int32_t x83 = INT32_MIN;
int32_t t20 = 191577991;
int16_t x88 = INT16_MAX;
int64_t x96 = INT64_MIN;
static volatile int32_t t23 = 2175;
volatile uint16_t x99 = 107U;
int16_t x104 = -1;
int32_t t25 = 328434;
int8_t x105 = 15;
volatile uint32_t x110 = 8037057U;
int32_t x114 = INT32_MIN;
int16_t x118 = -1;
static int64_t x120 = INT64_MAX;
int32_t t29 = -781886836;
int16_t x126 = INT16_MIN;
volatile uint32_t x127 = UINT32_MAX;
uint16_t x128 = 109U;
static int8_t x133 = 11;
int64_t x137 = -30873164696LL;
volatile uint16_t x138 = UINT16_MAX;
volatile int64_t x139 = INT64_MAX;
int32_t x140 = INT32_MIN;
volatile int16_t x144 = INT16_MIN;
volatile int32_t t34 = 90;
int64_t x164 = INT64_MAX;
static int16_t x165 = -1;
static int8_t x170 = INT8_MIN;
int16_t x173 = 0;
int32_t x184 = INT32_MAX;
uint16_t x188 = UINT16_MAX;
static uint8_t x192 = UINT8_MAX;
static uint64_t x194 = 0LLU;
int64_t x201 = -89690404173441LL;
int16_t x208 = 1;
volatile int32_t x214 = 1;
int16_t x215 = INT16_MIN;
int32_t t51 = -115072198;
volatile int8_t x218 = INT8_MIN;
uint64_t x230 = 54861822LLU;
int32_t x232 = -1;
volatile uint8_t x238 = 6U;
static int32_t t57 = -19;
int32_t x246 = -9;
volatile int32_t x258 = -1;
volatile int64_t x261 = 1183986880LL;
volatile uint64_t x271 = 427976708829796LLU;
volatile uint32_t x276 = UINT32_MAX;
int32_t x278 = -1;
static int64_t x279 = INT64_MAX;
volatile int64_t x280 = INT64_MAX;
int32_t t67 = 1;
int32_t t68 = 759114318;
volatile int32_t x288 = -1;
static uint8_t x304 = UINT8_MAX;
int64_t x306 = -63642180799505LL;
int32_t t75 = -1049;
int8_t x313 = -17;
uint64_t x320 = 3108743700LLU;
uint8_t x327 = 24U;
int32_t t79 = 1533;
uint64_t x337 = 40043914061586244LLU;
volatile int32_t t82 = 6160;
int32_t x343 = INT32_MAX;
static uint32_t x344 = 6797569U;
int64_t x347 = INT64_MIN;
static int16_t x351 = INT16_MIN;
static volatile uint64_t x354 = 908218LLU;
static int8_t x356 = -13;
int16_t x362 = INT16_MIN;
static uint16_t x363 = 31U;
int32_t x367 = -10;
uint8_t x369 = 114U;
static int64_t x371 = -1LL;
uint8_t x373 = 1U;
volatile int32_t t92 = 30;
volatile int32_t t93 = 29240;
static int16_t x387 = -1;
volatile int32_t t94 = 1;
int32_t x389 = 1741002;
int8_t x392 = INT8_MIN;
static uint64_t x401 = 2883676LLU;
uint16_t x403 = 1U;
int64_t x404 = INT64_MAX;
static int32_t x406 = INT32_MIN;
static int32_t t99 = 2091347;


void f0(void) {
	static uint32_t x1 = 7957476U;
	volatile int16_t x2 = -1;
	static uint32_t x3 = 145489715U;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -7232844;

	t0 = ((x1&(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	static int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -1;

	t1 = ((x5&(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 1413383575948LLU;
	static int32_t t2 = -1013388524;

	t2 = ((x9&(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -10;
	int16_t x14 = INT16_MIN;
	static int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;

	t3 = ((x13&(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MAX;
	volatile int16_t x19 = INT16_MAX;
	static volatile int8_t x20 = INT8_MAX;
	static volatile int32_t t4 = 347325379;

	t4 = ((x17&(x18%x19))==x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile int64_t x23 = INT64_MIN;
	uint64_t x24 = 26LLU;

	t5 = ((x21&(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1776703LL;
	volatile int32_t x27 = INT32_MIN;
	int16_t x28 = -1;
	volatile int32_t t6 = 28232638;

	t6 = ((x25&(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	static volatile uint32_t x31 = 1U;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -108458;

	t7 = ((x29&(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = 184;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -105;

	t8 = ((x33&(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -2;
	static int16_t x38 = INT16_MAX;
	static volatile int16_t x39 = -1;
	static uint32_t x40 = 58161U;

	t9 = ((x37&(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 33490813637597LL;
	int8_t x42 = -1;
	volatile uint32_t x43 = UINT32_MAX;
	volatile uint8_t x44 = 3U;
	static volatile int32_t t10 = -121676;

	t10 = ((x41&(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static uint32_t x46 = 1U;
	volatile int32_t x47 = -1;
	uint16_t x48 = 82U;
	int32_t t11 = 3;

	t11 = ((x45&(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	uint16_t x52 = 19010U;
	int32_t t12 = 1828857;

	t12 = ((x49&(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = UINT8_MAX;
	static int32_t x55 = -1;
	uint16_t x56 = 31216U;
	static volatile int32_t t13 = -8866473;

	t13 = ((x53&(x54%x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 4073537126703149156LL;
	volatile int32_t x58 = -14989486;
	static volatile int16_t x60 = 30;
	static int32_t t14 = 8954;

	t14 = ((x57&(x58%x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 4286U;
	static volatile uint32_t x63 = 30825U;
	int16_t x64 = -1;

	t15 = ((x61&(x62%x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 7859997U;
	int16_t x68 = -1;
	int32_t t16 = 1;

	t16 = ((x65&(x66%x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -84400;

	t17 = ((x69&(x70%x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	static uint8_t x74 = 22U;
	uint8_t x75 = UINT8_MAX;
	volatile int32_t t18 = 16186;

	t18 = ((x73&(x74%x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	uint32_t x78 = 35700192U;
	int32_t x80 = -1;
	int32_t t19 = 154031518;

	t19 = ((x77&(x78%x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MAX;
	int8_t x82 = 7;
	int16_t x84 = -1;

	t20 = ((x81&(x82%x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	static int16_t x87 = -3261;
	int32_t t21 = 60508397;

	t21 = ((x85&(x86%x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MIN;
	static uint16_t x91 = 350U;
	static volatile int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = 3;

	t22 = ((x89&(x90%x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = 7924555;
	int32_t x95 = INT32_MIN;

	t23 = ((x93&(x94%x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MAX;
	uint16_t x98 = UINT16_MAX;
	volatile uint32_t x100 = 1345779U;
	int32_t t24 = 41;

	t24 = ((x97&(x98%x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile int32_t x102 = INT32_MAX;
	volatile int16_t x103 = INT16_MIN;

	t25 = ((x101&(x102%x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MAX;
	int64_t x107 = 21275LL;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 3359;

	t26 = ((x105&(x106%x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int16_t x111 = INT16_MAX;
	int64_t x112 = -1LL;
	int32_t t27 = -244515;

	t27 = ((x109&(x110%x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -7;
	int32_t x115 = INT32_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = -1783879;

	t28 = ((x113&(x114%x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1436;
	int8_t x119 = -1;

	t29 = ((x117&(x118%x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = -2436;
	volatile int32_t t30 = -32238;

	t30 = ((x125&(x126%x127))==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 1230772U;
	int16_t x130 = INT16_MAX;
	int64_t x131 = INT64_MAX;
	int64_t x132 = -1LL;
	volatile int32_t t31 = -17586;

	t31 = ((x129&(x130%x131))==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = INT64_MAX;
	volatile int32_t x135 = 6912662;
	uint16_t x136 = 801U;
	volatile int32_t t32 = 113919004;

	t32 = ((x133&(x134%x135))==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t t33 = 2461;

	t33 = ((x137&(x138%x139))==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = INT8_MIN;
	int32_t x142 = -317;
	uint16_t x143 = 48U;

	t34 = ((x141&(x142%x143))==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 1869U;
	volatile int32_t x146 = -1;
	int8_t x147 = INT8_MAX;
	uint32_t x148 = UINT32_MAX;
	int32_t t35 = -4684;

	t35 = ((x145&(x146%x147))==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = INT16_MAX;
	uint16_t x150 = 20358U;
	volatile int16_t x151 = -214;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t36 = 108043986;

	t36 = ((x149&(x150%x151))==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 24;
	int64_t x154 = -1LL;
	static volatile int32_t x155 = INT32_MAX;
	int32_t x156 = -45422800;
	int32_t t37 = -1412;

	t37 = ((x153&(x154%x155))==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = -1;
	uint32_t x159 = 4U;
	int16_t x160 = INT16_MIN;
	static int32_t t38 = 2;

	t38 = ((x157&(x158%x159))==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x161 = 19290LLU;
	int32_t x162 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	static volatile int32_t t39 = -11313713;

	t39 = ((x161&(x162%x163))==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x166 = 23816U;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -19;
	volatile int32_t t40 = 26505472;

	t40 = ((x165&(x166%x167))==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = -1;
	uint16_t x171 = 43U;
	int64_t x172 = INT64_MAX;
	int32_t t41 = -5;

	t41 = ((x169&(x170%x171))==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x174 = INT16_MIN;
	volatile uint16_t x175 = 2538U;
	uint32_t x176 = 2811U;
	int32_t t42 = 0;

	t42 = ((x173&(x174%x175))==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 0U;
	int8_t x178 = -1;
	static int16_t x179 = 13259;
	int64_t x180 = -1LL;
	volatile int32_t t43 = 6509;

	t43 = ((x177&(x178%x179))==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MIN;
	uint64_t x182 = UINT64_MAX;
	volatile int32_t x183 = INT32_MIN;
	int32_t t44 = -931018767;

	t44 = ((x181&(x182%x183))==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = -2689;
	int32_t x187 = INT32_MIN;
	volatile int32_t t45 = 100380209;

	t45 = ((x185&(x186%x187))==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	volatile int16_t x190 = -1934;
	int32_t x191 = INT32_MIN;
	volatile int32_t t46 = -133;

	t46 = ((x189&(x190%x191))==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	static int16_t x196 = INT16_MIN;
	static int32_t t47 = 16994710;

	t47 = ((x193&(x194%x195))==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x197 = -2272;
	int64_t x198 = INT64_MIN;
	volatile int8_t x199 = 56;
	int16_t x200 = INT16_MAX;
	int32_t t48 = 256123525;

	t48 = ((x197&(x198%x199))==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x202 = 56U;
	int8_t x203 = 1;
	uint16_t x204 = 184U;
	volatile int32_t t49 = 3676;

	t49 = ((x201&(x202%x203))==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = 254088;
	int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MAX;
	static volatile int32_t t50 = 55299;

	t50 = ((x205&(x206%x207))==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 3544208297LLU;
	int8_t x216 = 0;

	t51 = ((x213&(x214%x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	uint8_t x219 = 1U;
	int16_t x220 = INT16_MIN;
	int32_t t52 = 3226191;

	t52 = ((x217&(x218%x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -1062;
	uint64_t x222 = 1972338LLU;
	int16_t x223 = INT16_MIN;
	int32_t x224 = -1;
	volatile int32_t t53 = -113812;

	t53 = ((x221&(x222%x223))==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -1;
	int8_t x226 = INT8_MAX;
	uint32_t x227 = 67U;
	int64_t x228 = 856330643822715192LL;
	volatile int32_t t54 = -1;

	t54 = ((x225&(x226%x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -1;
	uint32_t x231 = 2478U;
	volatile int32_t t55 = 424;

	t55 = ((x229&(x230%x231))==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	uint8_t x234 = 3U;
	uint64_t x235 = 4906773LLU;
	static volatile int32_t x236 = 744611099;
	int32_t t56 = -239881484;

	t56 = ((x233&(x234%x235))==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MAX;
	int64_t x239 = 2LL;
	int64_t x240 = 153LL;

	t57 = ((x237&(x238%x239))==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 0U;
	int16_t x242 = 0;
	static int64_t x243 = INT64_MAX;
	uint32_t x244 = 24314170U;
	volatile int32_t t58 = 1071201525;

	t58 = ((x241&(x242%x243))==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 30U;
	static volatile int64_t x247 = -1LL;
	static uint32_t x248 = UINT32_MAX;
	volatile int32_t t59 = 2426;

	t59 = ((x245&(x246%x247))==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MAX;
	volatile int64_t x251 = INT64_MAX;
	uint16_t x252 = 4U;
	int32_t t60 = -6586;

	t60 = ((x249&(x250%x251))==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x253 = 393289582U;
	uint8_t x254 = 11U;
	volatile int8_t x255 = -1;
	volatile int64_t x256 = -130849254818LL;
	volatile int32_t t61 = 11272;

	t61 = ((x253&(x254%x255))==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = -2407;
	volatile int32_t t62 = 11404940;

	t62 = ((x257&(x258%x259))==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x262 = INT64_MIN;
	int64_t x263 = -289333156835873LL;
	volatile int8_t x264 = -54;
	static volatile int32_t t63 = -1320421;

	t63 = ((x261&(x262%x263))==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x265 = 53047677;
	static uint16_t x266 = UINT16_MAX;
	volatile int8_t x267 = 1;
	int32_t x268 = 0;
	static int32_t t64 = -3832;

	t64 = ((x265&(x266%x267))==x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 977880472568548185LLU;
	int32_t x270 = 6125223;
	int16_t x272 = INT16_MIN;
	int32_t t65 = -29216240;

	t65 = ((x269&(x270%x271))==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = -1;
	uint8_t x274 = 65U;
	uint8_t x275 = 104U;
	volatile int32_t t66 = 15952;

	t66 = ((x273&(x274%x275))==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = -1;

	t67 = ((x277&(x278%x279))==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -1LL;
	int16_t x282 = INT16_MAX;
	int16_t x283 = -919;
	static uint8_t x284 = 1U;

	t68 = ((x281&(x282%x283))==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 959U;
	int32_t x286 = 16643839;
	static volatile int16_t x287 = INT16_MIN;
	int32_t t69 = -1;

	t69 = ((x285&(x286%x287))==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 52531162289155532LLU;
	uint8_t x290 = 116U;
	static volatile int64_t x291 = INT64_MAX;
	uint64_t x292 = 217017LLU;
	volatile int32_t t70 = -382460651;

	t70 = ((x289&(x290%x291))==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x293 = UINT8_MAX;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 2011820362133277624LLU;
	int8_t x296 = -1;
	int32_t t71 = -121780410;

	t71 = ((x293&(x294%x295))==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -9;
	static int16_t x298 = INT16_MAX;
	volatile uint64_t x299 = 2256008440158777591LLU;
	static int64_t x300 = -249LL;
	volatile int32_t t72 = -178762;

	t72 = ((x297&(x298%x299))==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = -1;
	int16_t x302 = -313;
	int16_t x303 = INT16_MAX;
	int32_t t73 = 917;

	t73 = ((x301&(x302%x303))==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -8LL;
	int64_t x307 = INT64_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t74 = 3716560;

	t74 = ((x305&(x306%x307))==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x309 = -25;
	static int8_t x310 = INT8_MIN;
	static uint32_t x311 = UINT32_MAX;
	volatile int16_t x312 = INT16_MAX;

	t75 = ((x309&(x310%x311))==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x314 = 32948U;
	int64_t x315 = -421006LL;
	int16_t x316 = INT16_MIN;
	int32_t t76 = -1;

	t76 = ((x313&(x314%x315))==x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MAX;
	uint32_t x318 = UINT32_MAX;
	volatile int32_t x319 = 8054712;
	int32_t t77 = -154554;

	t77 = ((x317&(x318%x319))==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x321 = -20428998;
	static volatile int8_t x322 = INT8_MIN;
	uint16_t x323 = UINT16_MAX;
	uint8_t x324 = 22U;
	int32_t t78 = 19245;

	t78 = ((x321&(x322%x323))==x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	int16_t x328 = -14535;

	t79 = ((x325&(x326%x327))==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -1;
	uint32_t x330 = 9809U;
	int64_t x331 = INT64_MIN;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t80 = -31;

	t80 = ((x329&(x330%x331))==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MAX;
	volatile int32_t x334 = INT32_MIN;
	static int8_t x335 = INT8_MIN;
	static uint32_t x336 = 98U;
	int32_t t81 = 661;

	t81 = ((x333&(x334%x335))==x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x338 = UINT32_MAX;
	volatile int8_t x339 = -1;
	volatile uint64_t x340 = UINT64_MAX;

	t82 = ((x337&(x338%x339))==x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = -73289142;
	uint32_t x342 = UINT32_MAX;
	volatile int32_t t83 = 2;

	t83 = ((x341&(x342%x343))==x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	static int64_t x346 = INT64_MIN;
	int32_t x348 = INT32_MAX;
	volatile int32_t t84 = 18;

	t84 = ((x345&(x346%x347))==x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x349 = -756510LL;
	int16_t x350 = -1;
	int64_t x352 = INT64_MAX;
	volatile int32_t t85 = -88;

	t85 = ((x349&(x350%x351))==x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x353 = INT8_MIN;
	static int64_t x355 = -346563225823981LL;
	static volatile int32_t t86 = -15;

	t86 = ((x353&(x354%x355))==x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x357 = 721U;
	int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MAX;
	int32_t x360 = 1;
	int32_t t87 = 84299370;

	t87 = ((x357&(x358%x359))==x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -1;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t88 = 640;

	t88 = ((x361&(x362%x363))==x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MIN;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t89 = 152160;

	t89 = ((x365&(x366%x367))==x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x370 = UINT64_MAX;
	int8_t x372 = 25;
	volatile int32_t t90 = -267;

	t90 = ((x369&(x370%x371))==x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = INT32_MAX;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t91 = -456070;

	t91 = ((x373&(x374%x375))==x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = UINT8_MAX;
	static int8_t x380 = -5;

	t92 = ((x377&(x378%x379))==x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = INT32_MIN;
	volatile uint16_t x382 = UINT16_MAX;
	int8_t x383 = 30;
	volatile int8_t x384 = -1;

	t93 = ((x381&(x382%x383))==x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x385 = 1113;
	uint8_t x386 = 4U;
	int16_t x388 = -8636;

	t94 = ((x385&(x386%x387))==x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x390 = -1LL;
	int64_t x391 = 663413920232985LL;
	static volatile int32_t t95 = 3787784;

	t95 = ((x389&(x390%x391))==x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = 1003359747LLU;
	static volatile int32_t x394 = 28001;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = 124838597601790LL;
	volatile int32_t t96 = 1976505;

	t96 = ((x393&(x394%x395))==x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = 0U;
	volatile int32_t x398 = INT32_MIN;
	volatile uint32_t x399 = UINT32_MAX;
	static int8_t x400 = 1;
	volatile int32_t t97 = 848;

	t97 = ((x397&(x398%x399))==x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x402 = -390927693186LL;
	int32_t t98 = 1621401;

	t98 = ((x401&(x402%x403))==x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x405 = -23;
	uint16_t x407 = UINT16_MAX;
	int64_t x408 = -1LL;

	t99 = ((x405&(x406%x407))==x408);

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

