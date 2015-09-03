#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = INT32_MIN;
volatile int32_t x20 = INT32_MIN;
int32_t x23 = -1;
uint8_t x28 = 117U;
uint8_t x32 = 24U;
static volatile int32_t t8 = -425;
uint32_t x39 = 3570U;
uint32_t x43 = 16887884U;
int16_t x51 = 177;
uint32_t x52 = 1037U;
static int32_t x54 = 10;
volatile uint16_t x64 = UINT16_MAX;
uint16_t x73 = 5U;
volatile uint64_t x89 = UINT64_MAX;
static int32_t x90 = -1;
int32_t x91 = INT32_MIN;
uint8_t x92 = 17U;
uint16_t x100 = UINT16_MAX;
static int16_t x103 = INT16_MIN;
static int32_t x111 = -149561532;
volatile int32_t x115 = INT32_MAX;
static uint64_t x116 = 1LLU;
int32_t x117 = INT32_MIN;
volatile uint64_t x119 = 2710631698LLU;
uint64_t x120 = 0LLU;
static volatile int32_t t29 = 159283449;
int32_t x131 = -1;
int8_t x136 = -62;
volatile int32_t t34 = 0;
int32_t x157 = -1;
static int8_t x164 = 3;
int32_t t41 = -1;
uint8_t x180 = 3U;
int16_t x182 = INT16_MAX;
static int8_t x199 = INT8_MIN;
uint32_t x203 = 3030U;
uint16_t x206 = UINT16_MAX;
volatile int8_t x211 = 0;
int32_t x214 = INT32_MIN;
int16_t x215 = -13449;
uint64_t x222 = 1994034277554LLU;
int32_t x223 = -1;
volatile uint8_t x225 = 0U;
int32_t x228 = 571016;
volatile int8_t x234 = INT8_MAX;
static volatile int64_t x237 = INT64_MIN;
static int16_t x240 = 125;
int32_t t60 = 50057;
int16_t x247 = -14;
int32_t x256 = INT32_MIN;
int16_t x257 = INT16_MIN;
int64_t x263 = INT64_MIN;
static int16_t x264 = INT16_MAX;
int32_t x269 = -1;
int8_t x275 = INT8_MIN;
uint8_t x279 = UINT8_MAX;
int8_t x283 = 1;
int32_t x284 = 242954;
volatile int32_t t70 = 428;
int64_t x285 = INT64_MIN;
int32_t t71 = -924;
uint32_t x289 = 16251U;
volatile int64_t x295 = INT64_MAX;
volatile int16_t x302 = INT16_MIN;
int32_t t75 = 0;
int16_t x308 = 2;
static volatile uint8_t x312 = 1U;
uint32_t x314 = UINT32_MAX;
int8_t x317 = 1;
uint8_t x321 = 41U;
volatile int32_t t80 = -26;
uint64_t x326 = UINT64_MAX;
static int32_t t81 = -314256943;
static volatile int32_t x335 = INT32_MIN;
int32_t t85 = -775;
int32_t x348 = -1;
volatile int64_t x353 = INT64_MAX;
int32_t x356 = INT32_MAX;
volatile int32_t t89 = 0;
int32_t t90 = 1808;
uint64_t x369 = UINT64_MAX;
int64_t x375 = -1LL;
uint8_t x377 = 42U;
uint64_t x381 = UINT64_MAX;
static int8_t x384 = INT8_MIN;
int16_t x392 = INT16_MIN;
static int32_t t98 = -9175;
static volatile int32_t x397 = INT32_MIN;


void f0(void) {
	volatile uint32_t x1 = 2266U;
	static volatile uint32_t x2 = 491562U;
	int64_t x3 = -37558702223853LL;
	int8_t x4 = 1;
	volatile int32_t t0 = -472737809;

	t0 = ((x1&(x2<=x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	static int32_t t1 = -673987044;

	t1 = ((x5&(x6<=x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	int32_t x11 = 13547;
	int64_t x12 = INT64_MAX;
	int32_t t2 = 7;

	t2 = ((x9&(x10<=x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	int8_t x14 = -1;
	static int64_t x15 = 678LL;
	int8_t x16 = -5;
	volatile int32_t t3 = -743;

	t3 = ((x13&(x14<=x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint8_t x18 = 1U;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = 30780;

	t4 = ((x17&(x18<=x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 424U;
	volatile int8_t x22 = -32;
	uint16_t x24 = 2894U;
	volatile int32_t t5 = -1014;

	t5 = ((x21&(x22<=x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 770U;
	int8_t x26 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;
	volatile int32_t t6 = -1;

	t6 = ((x25&(x26<=x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 13447484U;
	int16_t x30 = -1;
	static uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = -119858589;

	t7 = ((x29&(x30<=x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int64_t x34 = INT64_MIN;
	static int8_t x35 = INT8_MIN;
	static int16_t x36 = -1;

	t8 = ((x33&(x34<=x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	static volatile int64_t x38 = -4037222874890LL;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -3160263;

	t9 = ((x37&(x38<=x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 384;
	volatile int32_t x42 = 123842483;
	int16_t x44 = INT16_MAX;
	static int32_t t10 = 58;

	t10 = ((x41&(x42<=x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 1;
	int8_t x46 = 0;
	int32_t x47 = -781328773;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -14010722;

	t11 = ((x45&(x46<=x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint16_t x50 = UINT16_MAX;
	static int32_t t12 = -5;

	t12 = ((x49&(x50<=x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int8_t x55 = -1;
	uint16_t x56 = 5U;
	int32_t t13 = 0;

	t13 = ((x53&(x54<=x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 12U;
	int16_t x58 = INT16_MAX;
	int64_t x59 = -835464983890LL;
	static int64_t x60 = -1LL;
	volatile int32_t t14 = -547;

	t14 = ((x57&(x58<=x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int64_t x62 = 39082506750325LL;
	uint32_t x63 = 385632U;
	int32_t t15 = -415793120;

	t15 = ((x61&(x62<=x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = 42;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	int64_t x68 = -7069933055LL;
	int32_t t16 = -1888164;

	t16 = ((x65&(x66<=x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 20090919LLU;
	int8_t x70 = -7;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MAX;
	static int32_t t17 = 3;

	t17 = ((x69&(x70<=x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x74 = UINT16_MAX;
	volatile uint32_t x75 = 3305U;
	int16_t x76 = -1;
	static volatile int32_t t18 = 1360236;

	t18 = ((x73&(x74<=x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 2798U;
	static int8_t x78 = -1;
	volatile uint16_t x79 = 1U;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -451427866;

	t19 = ((x77&(x78<=x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 0U;
	uint8_t x82 = 1U;
	volatile uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MAX;
	int32_t t20 = -575631;

	t20 = ((x81&(x82<=x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 15U;
	int16_t x86 = 970;
	volatile int32_t x87 = INT32_MIN;
	int64_t x88 = 23719345294419LL;
	static int32_t t21 = -920696722;

	t21 = ((x85&(x86<=x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t t22 = 46103;

	t22 = ((x89&(x90<=x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	volatile uint32_t x94 = 2109458952U;
	uint64_t x95 = UINT64_MAX;
	volatile uint16_t x96 = 12U;
	int32_t t23 = 1;

	t23 = ((x93&(x94<=x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	int64_t x98 = -1LL;
	volatile int8_t x99 = -10;
	static volatile int32_t t24 = -1;

	t24 = ((x97&(x98<=x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint8_t x102 = 40U;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 1793;

	t25 = ((x101&(x102<=x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	static int64_t x106 = -1LL;
	volatile uint64_t x107 = UINT64_MAX;
	static volatile int64_t x108 = INT64_MAX;
	int32_t t26 = 3040629;

	t26 = ((x105&(x106<=x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 61LL;
	static int64_t x110 = 0LL;
	int64_t x112 = INT64_MAX;
	static int32_t t27 = 2219578;

	t27 = ((x109&(x110<=x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	int32_t x114 = -1;
	volatile int32_t t28 = 332682918;

	t28 = ((x113&(x114<=x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = UINT32_MAX;

	t29 = ((x117&(x118<=x119))==x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	volatile int16_t x122 = -11;
	static uint16_t x123 = 2U;
	volatile uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = -28458;

	t30 = ((x121&(x122<=x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint32_t x126 = UINT32_MAX;
	uint64_t x127 = UINT64_MAX;
	static volatile int16_t x128 = INT16_MAX;
	int32_t t31 = 6534192;

	t31 = ((x125&(x126<=x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x130 = UINT64_MAX;
	volatile uint16_t x132 = UINT16_MAX;
	int32_t t32 = 54476;

	t32 = ((x129&(x130<=x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = 4026248117407229882LL;
	int64_t x135 = INT64_MAX;
	int32_t t33 = -54386948;

	t33 = ((x133&(x134<=x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint8_t x138 = 1U;
	int64_t x139 = -1LL;
	volatile int64_t x140 = INT64_MIN;

	t34 = ((x137&(x138<=x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 17U;
	uint8_t x142 = 120U;
	static volatile uint32_t x143 = 2U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 18;

	t35 = ((x141&(x142<=x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MIN;
	uint64_t x147 = 7623LLU;
	static uint64_t x148 = 95LLU;
	volatile int32_t t36 = 656613;

	t36 = ((x145&(x146<=x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	uint64_t x150 = 955977199979421LLU;
	int16_t x151 = INT16_MIN;
	int8_t x152 = -1;
	static int32_t t37 = -6610;

	t37 = ((x149&(x150<=x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 86256U;
	static volatile int32_t t38 = -142203;

	t38 = ((x153&(x154<=x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x158 = INT64_MAX;
	int64_t x159 = -1LL;
	volatile int16_t x160 = INT16_MIN;
	static int32_t t39 = -557730703;

	t39 = ((x157&(x158<=x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	static int64_t x162 = INT64_MIN;
	volatile int32_t x163 = -1;
	int32_t t40 = -219;

	t40 = ((x161&(x162<=x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = 57U;
	int16_t x168 = INT16_MIN;

	t41 = ((x165&(x166<=x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 7U;
	static int16_t x170 = INT16_MIN;
	static uint16_t x171 = UINT16_MAX;
	static int16_t x172 = 1960;
	volatile int32_t t42 = 1;

	t42 = ((x169&(x170<=x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 1U;
	uint8_t x174 = 3U;
	int8_t x175 = 49;
	int16_t x176 = -1;
	volatile int32_t t43 = -1;

	t43 = ((x173&(x174<=x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = 489832LL;
	volatile uint16_t x179 = 1587U;
	int32_t t44 = -2385732;

	t44 = ((x177&(x178<=x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 91030295436LLU;
	volatile int64_t x183 = -2LL;
	uint32_t x184 = 904U;
	int32_t t45 = 0;

	t45 = ((x181&(x182<=x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	static int32_t x186 = INT32_MIN;
	static int64_t x187 = 1LL;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 251500949;

	t46 = ((x185&(x186<=x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 59986571781LLU;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = INT16_MIN;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -456;

	t47 = ((x189&(x190<=x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	static int8_t x194 = 0;
	int32_t x195 = -1;
	static uint16_t x196 = 188U;
	volatile int32_t t48 = 2500420;

	t48 = ((x193&(x194<=x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 60584;
	uint16_t x198 = 2842U;
	uint16_t x200 = 269U;
	static volatile int32_t t49 = 95502057;

	t49 = ((x197&(x198<=x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -1LL;
	uint32_t x202 = 692440892U;
	volatile uint64_t x204 = 1439863624LLU;
	int32_t t50 = 47390762;

	t50 = ((x201&(x202<=x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	uint16_t x207 = 21764U;
	int64_t x208 = -2643LL;
	static int32_t t51 = 50498992;

	t51 = ((x205&(x206<=x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MAX;
	static int64_t x212 = INT64_MIN;
	int32_t t52 = 11029419;

	t52 = ((x209&(x210<=x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t53 = 127696;

	t53 = ((x213&(x214<=x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 1119U;
	uint16_t x218 = 31U;
	static int32_t x219 = INT32_MIN;
	uint16_t x220 = 2U;
	int32_t t54 = 24163105;

	t54 = ((x217&(x218<=x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 3LLU;
	static uint8_t x224 = 14U;
	volatile int32_t t55 = -1074;

	t55 = ((x221&(x222<=x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x226 = 13U;
	int8_t x227 = INT8_MIN;
	volatile int32_t t56 = 4105042;

	t56 = ((x225&(x226<=x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	static int16_t x230 = -10323;
	static volatile uint64_t x231 = 17275134875698754LLU;
	int64_t x232 = -1LL;
	volatile int32_t t57 = 12609;

	t57 = ((x229&(x230<=x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -27;
	volatile int8_t x235 = 46;
	int32_t x236 = -238395188;
	int32_t t58 = -1007;

	t58 = ((x233&(x234<=x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = -1;
	int16_t x239 = INT16_MIN;
	volatile int32_t t59 = -421071;

	t59 = ((x237&(x238<=x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 0;
	int64_t x242 = -2LL;
	uint16_t x243 = 0U;
	static int32_t x244 = -23863;

	t60 = ((x241&(x242<=x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 5U;
	int8_t x248 = INT8_MAX;
	volatile int32_t t61 = -204522;

	t61 = ((x245&(x246<=x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;
	int32_t t62 = 584936;

	t62 = ((x249&(x250<=x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = UINT64_MAX;
	static int16_t x254 = -1;
	int8_t x255 = -1;
	int32_t t63 = 180599;

	t63 = ((x253&(x254<=x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MIN;
	uint8_t x259 = 30U;
	int8_t x260 = 0;
	static volatile int32_t t64 = -1;

	t64 = ((x257&(x258<=x259))==x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x262 = 1U;
	volatile int32_t t65 = -26;

	t65 = ((x261&(x262<=x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 273025U;
	static int16_t x266 = 99;
	int32_t x267 = -85;
	volatile int8_t x268 = INT8_MAX;
	int32_t t66 = 22583636;

	t66 = ((x265&(x266<=x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = -979118;

	t67 = ((x269&(x270<=x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x273 = INT32_MIN;
	volatile int64_t x274 = -428666LL;
	uint32_t x276 = 148803U;
	int32_t t68 = 19500;

	t68 = ((x273&(x274<=x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 13U;
	int32_t x278 = -3;
	uint32_t x280 = 17303U;
	volatile int32_t t69 = 98580063;

	t69 = ((x277&(x278<=x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x282 = INT16_MIN;

	t70 = ((x281&(x282<=x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = -2595412;
	uint64_t x287 = 3802609309788643LLU;
	int64_t x288 = -1LL;

	t71 = ((x285&(x286<=x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x290 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = INT64_MAX;
	int32_t t72 = -135940;

	t72 = ((x289&(x290<=x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	int16_t x296 = -1;
	static volatile int32_t t73 = -3741;

	t73 = ((x293&(x294<=x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -14;
	static int64_t x298 = INT64_MIN;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t74 = 921499;

	t74 = ((x297&(x298<=x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 110U;
	static int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MAX;

	t75 = ((x301&(x302<=x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 0U;
	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	volatile int32_t t76 = 105875168;

	t76 = ((x305&(x306<=x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	static volatile int16_t x310 = 1182;
	static int8_t x311 = 6;
	int32_t t77 = 1;

	t77 = ((x309&(x310<=x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = UINT16_MAX;
	static volatile int32_t t78 = 24415;

	t78 = ((x313&(x314<=x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = -1;
	static int16_t x319 = 0;
	int64_t x320 = -3260080451LL;
	int32_t t79 = 329302870;

	t79 = ((x317&(x318<=x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = 31U;
	int8_t x323 = INT8_MIN;
	int8_t x324 = -48;

	t80 = ((x321&(x322<=x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	int32_t x327 = INT32_MIN;
	static uint32_t x328 = UINT32_MAX;

	t81 = ((x325&(x326<=x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x329 = INT64_MIN;
	int8_t x330 = 1;
	static uint16_t x331 = 45U;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -262665216;

	t82 = ((x329&(x330<=x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = UINT64_MAX;
	int32_t x334 = -206114;
	int8_t x336 = 36;
	static int32_t t83 = 75;

	t83 = ((x333&(x334<=x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = -1;
	volatile int64_t x338 = -42977551LL;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = UINT32_MAX;
	int32_t t84 = -4;

	t84 = ((x337&(x338<=x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MAX;
	int16_t x342 = INT16_MIN;
	int8_t x343 = 0;
	uint32_t x344 = UINT32_MAX;

	t85 = ((x341&(x342<=x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	int16_t x346 = -11;
	int16_t x347 = -1;
	int32_t t86 = -76167489;

	t86 = ((x345&(x346<=x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	uint64_t x350 = 4363201LLU;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = 60U;
	volatile int32_t t87 = -19;

	t87 = ((x349&(x350<=x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x354 = 2806253U;
	int16_t x355 = 215;
	int32_t t88 = 18;

	t88 = ((x353&(x354<=x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	int16_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MIN;

	t89 = ((x357&(x358<=x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 91U;
	int32_t x362 = INT32_MIN;
	int32_t x363 = -1;
	int64_t x364 = -7804321639LL;

	t90 = ((x361&(x362<=x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = -1;
	int32_t x367 = -194;
	int16_t x368 = INT16_MAX;
	static int32_t t91 = -518812;

	t91 = ((x365&(x366<=x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	volatile int64_t x372 = -1LL;
	volatile int32_t t92 = 1000799958;

	t92 = ((x369&(x370<=x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = -223;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 63821;

	t93 = ((x373&(x374<=x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = 4334624526240172209LLU;
	uint8_t x379 = UINT8_MAX;
	uint32_t x380 = 983U;
	int32_t t94 = 517;

	t94 = ((x377&(x378<=x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	int16_t x383 = -8136;
	volatile int32_t t95 = 1;

	t95 = ((x381&(x382<=x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = 65U;
	int32_t x386 = 12612734;
	int32_t x387 = INT32_MIN;
	static int32_t x388 = 62;
	volatile int32_t t96 = -66652;

	t96 = ((x385&(x386<=x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int64_t x390 = -1LL;
	int32_t x391 = INT32_MIN;
	int32_t t97 = 5;

	t97 = ((x389&(x390<=x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = 9U;
	static int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MAX;
	uint16_t x396 = 272U;

	t98 = ((x393&(x394<=x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MAX;
	int32_t x399 = INT32_MIN;
	volatile int16_t x400 = -1;
	int32_t t99 = 1;

	t99 = ((x397&(x398<=x399))==x400);

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

