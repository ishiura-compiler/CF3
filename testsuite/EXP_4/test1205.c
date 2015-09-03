#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MIN;
volatile int32_t t1 = 1144;
int32_t x12 = INT32_MIN;
int64_t x16 = -1LL;
volatile int32_t t3 = -114814;
static int32_t x19 = INT32_MAX;
static int8_t x20 = INT8_MIN;
int64_t x22 = INT64_MIN;
int16_t x32 = INT16_MIN;
volatile int32_t x34 = 140;
volatile int32_t t8 = -496997683;
uint16_t x37 = 29381U;
static int8_t x42 = 19;
static int32_t x49 = INT32_MIN;
int8_t x56 = INT8_MIN;
uint16_t x68 = 428U;
volatile int32_t x71 = INT32_MIN;
static volatile int16_t x72 = INT16_MIN;
static volatile int32_t t18 = 147429817;
volatile int32_t t19 = -6;
static int64_t x82 = INT64_MIN;
int32_t t20 = 1006397;
uint64_t x85 = 1793143480437699LLU;
volatile uint64_t x94 = 1128271711566884655LLU;
int8_t x95 = 1;
int32_t t23 = -1;
int32_t x100 = -974;
uint32_t x101 = UINT32_MAX;
static int64_t x107 = INT64_MAX;
int32_t x109 = -28997;
static int8_t x112 = INT8_MAX;
int32_t t27 = -283873;
int8_t x113 = 2;
int32_t x119 = INT32_MAX;
int32_t x122 = -58934;
int8_t x129 = -34;
int64_t x132 = INT64_MIN;
int32_t x133 = -1;
int8_t x134 = INT8_MAX;
uint16_t x136 = 30490U;
uint64_t x137 = 601345LLU;
static volatile int8_t x148 = 7;
int64_t x153 = INT64_MAX;
volatile int32_t t38 = -22411582;
int8_t x160 = INT8_MIN;
int8_t x164 = -1;
int32_t x174 = -393572;
int32_t x178 = -3019;
uint16_t x179 = UINT16_MAX;
int8_t x181 = 6;
static int64_t x190 = -10LL;
volatile int8_t x196 = 6;
volatile int32_t t50 = -4;
static int8_t x209 = INT8_MAX;
int8_t x213 = INT8_MIN;
int16_t x214 = 0;
volatile int64_t x216 = INT64_MIN;
int32_t x219 = 12;
int64_t x228 = -1LL;
int16_t x229 = INT16_MAX;
int64_t x233 = 71LL;
static volatile uint8_t x236 = UINT8_MAX;
static int8_t x239 = -26;
int16_t x243 = INT16_MAX;
static int16_t x247 = 1951;
int32_t t60 = -28;
int32_t x262 = -1;
uint64_t x270 = UINT64_MAX;
int32_t x275 = -1;
uint16_t x279 = 980U;
uint8_t x282 = 21U;
uint64_t x283 = 126464108LLU;
volatile uint16_t x290 = 498U;
uint16_t x295 = 9083U;
static int16_t x299 = 0;
int16_t x305 = INT16_MIN;
uint16_t x310 = 82U;
static int32_t t76 = -6;
static int64_t x315 = -13LL;
static int32_t x316 = INT32_MAX;
volatile int32_t t78 = -632263;
uint32_t x322 = 225519U;
int16_t x324 = 13061;
static volatile uint8_t x325 = UINT8_MAX;
int64_t x327 = INT64_MIN;
uint16_t x331 = 0U;
volatile int32_t t81 = -1;
static uint16_t x335 = UINT16_MAX;
int16_t x336 = 163;
int32_t x350 = 8187;
int32_t x359 = -1;
volatile int32_t t88 = -519;
int64_t x361 = -1LL;
int32_t x363 = INT32_MIN;
uint32_t x369 = 9394U;
volatile uint16_t x372 = UINT16_MAX;
volatile int64_t x374 = 87397184LL;
static int32_t t93 = -320;
volatile int64_t x393 = INT64_MIN;
int64_t x398 = INT64_MIN;
int32_t x400 = INT32_MIN;
int32_t t99 = 442763044;


void f0(void) {
	uint64_t x1 = 174709866LLU;
	int8_t x2 = -1;
	static uint8_t x3 = 5U;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 3;

	t0 = (x1<(x2-(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x6 = UINT64_MAX;
	int8_t x8 = INT8_MAX;

	t1 = (x5<(x6-(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 7245349LL;
	volatile int16_t x10 = INT16_MIN;
	uint32_t x11 = 6U;
	int32_t t2 = 20971192;

	t2 = (x9<(x10-(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = -1LL;
	int16_t x15 = INT16_MIN;

	t3 = (x13<(x14-(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 6U;
	int8_t x18 = INT8_MIN;
	int32_t t4 = 2568;

	t4 = (x17<(x18-(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int32_t x23 = INT32_MIN;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = -9;

	t5 = (x21<(x22-(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int16_t x26 = -1;
	int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = -2;

	t6 = (x25<(x26-(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MAX;
	int64_t x31 = 239660474689014LL;
	volatile int32_t t7 = -785;

	t7 = (x29<(x30-(x31==x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	static volatile int16_t x35 = 0;
	int32_t x36 = INT32_MIN;

	t8 = (x33<(x34-(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = -1;
	int8_t x39 = INT8_MIN;
	int16_t x40 = -1;
	int32_t t9 = -2216;

	t9 = (x37<(x38-(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x43 = 3153LLU;
	int16_t x44 = INT16_MIN;
	static int32_t t10 = 3499116;

	t10 = (x41<(x42-(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	static uint32_t x47 = 5U;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -283649922;

	t11 = (x45<(x46-(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = INT64_MAX;
	int32_t x51 = INT32_MIN;
	static int32_t x52 = -1;
	int32_t t12 = -898174320;

	t12 = (x49<(x50-(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 4U;
	uint8_t x54 = 30U;
	volatile int32_t x55 = -3779;
	int32_t t13 = 4180590;

	t13 = (x53<(x54-(x55==x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = INT16_MIN;
	static int8_t x59 = INT8_MIN;
	volatile int32_t x60 = INT32_MIN;
	static volatile int32_t t14 = 12483;

	t14 = (x57<(x58-(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	static uint32_t x63 = 2U;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -85112073;

	t15 = (x61<(x62-(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	volatile int32_t x66 = 246439;
	uint16_t x67 = 0U;
	static volatile int32_t t16 = -9843;

	t16 = (x65<(x66-(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 6U;
	int64_t x70 = 5802040735677LL;
	static volatile int32_t t17 = -6;

	t17 = (x69<(x70-(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	int64_t x76 = 85486629885832736LL;

	t18 = (x73<(x74-(x75==x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 22U;
	int8_t x78 = -1;
	int8_t x79 = -12;
	int32_t x80 = -10;

	t19 = (x77<(x78-(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 154U;
	int8_t x83 = INT8_MAX;
	int16_t x84 = 72;

	t20 = (x81<(x82-(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MAX;
	static uint8_t x87 = 102U;
	volatile int32_t x88 = 802580817;
	static volatile int32_t t21 = 734;

	t21 = (x85<(x86-(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x90 = 1823211741U;
	volatile int8_t x91 = 1;
	int32_t x92 = INT32_MAX;
	static int32_t t22 = 1;

	t22 = (x89<(x90-(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = 111;
	static int8_t x96 = INT8_MIN;

	t23 = (x93<(x94-(x95==x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = INT16_MIN;
	int32_t x99 = INT32_MIN;
	int32_t t24 = 13216;

	t24 = (x97<(x98-(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MAX;
	static uint16_t x103 = UINT16_MAX;
	uint16_t x104 = 82U;
	int32_t t25 = -2177862;

	t25 = (x101<(x102-(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int32_t x106 = INT32_MAX;
	uint32_t x108 = 1237757918U;
	static int32_t t26 = 94864;

	t26 = (x105<(x106-(x107==x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MIN;

	t27 = (x109<(x110-(x111==x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	uint32_t x116 = 93589296U;
	static volatile int32_t t28 = -3798452;

	t28 = (x113<(x114-(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	int64_t x118 = 1LL;
	static int32_t x120 = -102995;
	int32_t t29 = 13947356;

	t29 = (x117<(x118-(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -4;
	int64_t x123 = INT64_MIN;
	int64_t x124 = -12096923030673517LL;
	static int32_t t30 = 1986;

	t30 = (x121<(x122-(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = 232;
	int64_t x126 = INT64_MAX;
	volatile int8_t x127 = -1;
	int32_t x128 = -1;
	int32_t t31 = 544;

	t31 = (x125<(x126-(x127==x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x130 = -1LL;
	uint8_t x131 = 1U;
	static int32_t t32 = 2231;

	t32 = (x129<(x130-(x131==x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x135 = 16119887U;
	int32_t t33 = 8556144;

	t33 = (x133<(x134-(x135==x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	volatile int16_t x139 = INT16_MAX;
	volatile uint16_t x140 = 55U;
	volatile int32_t t34 = 202974903;

	t34 = (x137<(x138-(x139==x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	volatile int32_t x142 = -31;
	volatile int32_t x143 = -23849453;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 92;

	t35 = (x141<(x142-(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -2682;
	uint8_t x146 = UINT8_MAX;
	int8_t x147 = INT8_MIN;
	int32_t t36 = -3253;

	t36 = (x145<(x146-(x147==x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int8_t x150 = 3;
	volatile uint8_t x151 = UINT8_MAX;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 0;

	t37 = (x149<(x150-(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x154 = 18415243467194LLU;
	volatile int16_t x155 = 3069;
	int16_t x156 = -1;

	t38 = (x153<(x154-(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 3;
	int16_t x158 = INT16_MAX;
	int16_t x159 = 0;
	volatile int32_t t39 = -25;

	t39 = (x157<(x158-(x159==x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	volatile int8_t x162 = INT8_MIN;
	uint64_t x163 = 96556LLU;
	volatile int32_t t40 = -401033431;

	t40 = (x161<(x162-(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	volatile int64_t x170 = -267228LL;
	uint64_t x171 = 554338464201885050LLU;
	static volatile int16_t x172 = INT16_MIN;
	volatile int32_t t41 = 91;

	t41 = (x169<(x170-(x171==x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = INT16_MAX;
	volatile int64_t x175 = -1LL;
	uint32_t x176 = 138U;
	volatile int32_t t42 = -7178;

	t42 = (x173<(x174-(x175==x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MAX;
	int8_t x180 = -1;
	int32_t t43 = -56066697;

	t43 = (x177<(x178-(x179==x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x182 = 8386946148LL;
	uint32_t x183 = UINT32_MAX;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t44 = 5100;

	t44 = (x181<(x182-(x183==x184)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	static int16_t x186 = -1;
	int32_t x187 = -151;
	int64_t x188 = INT64_MAX;
	int32_t t45 = 2;

	t45 = (x185<(x186-(x187==x188)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = -1;
	int32_t t46 = -5701460;

	t46 = (x189<(x190-(x191==x192)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = INT64_MIN;
	static int32_t x194 = 15;
	static int32_t x195 = 6065;
	static volatile int32_t t47 = -7783359;

	t47 = (x193<(x194-(x195==x196)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	volatile int64_t x198 = -1LL;
	static int16_t x199 = -157;
	volatile uint16_t x200 = 7U;
	int32_t t48 = -8212;

	t48 = (x197<(x198-(x199==x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -84;
	int32_t x202 = -215;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t49 = -1839518;

	t49 = (x201<(x202-(x203==x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -4221488370655276LL;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = 3U;
	int32_t x208 = INT32_MAX;

	t50 = (x205<(x206-(x207==x208)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x210 = -15;
	int32_t x211 = INT32_MAX;
	static volatile uint64_t x212 = 1626113432LLU;
	volatile int32_t t51 = 111369055;

	t51 = (x209<(x210-(x211==x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x215 = -1;
	int32_t t52 = -417820330;

	t52 = (x213<(x214-(x215==x216)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = -6536853;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t53 = -288684;

	t53 = (x217<(x218-(x219==x220)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x221 = UINT64_MAX;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = 13466U;
	static int32_t t54 = 29751;

	t54 = (x221<(x222-(x223==x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = 6233990930377022LLU;
	static int32_t x226 = INT32_MAX;
	static volatile uint64_t x227 = UINT64_MAX;
	static int32_t t55 = 3;

	t55 = (x225<(x226-(x227==x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = -107468629247592729LL;
	static int32_t t56 = 81;

	t56 = (x229<(x230-(x231==x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x234 = 2U;
	int16_t x235 = 11277;
	volatile int32_t t57 = -460;

	t57 = (x233<(x234-(x235==x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	volatile int16_t x238 = INT16_MAX;
	uint16_t x240 = 26U;
	int32_t t58 = -2881;

	t58 = (x237<(x238-(x239==x240)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MAX;
	int8_t x242 = -3;
	volatile int32_t x244 = INT32_MAX;
	static int32_t t59 = -1;

	t59 = (x241<(x242-(x243==x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = 4167684356636463254LLU;
	static uint64_t x246 = UINT64_MAX;
	static uint64_t x248 = UINT64_MAX;

	t60 = (x245<(x246-(x247==x248)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x249 = 0U;
	int16_t x250 = INT16_MIN;
	int32_t x251 = 992;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t61 = -8216;

	t61 = (x249<(x250-(x251==x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = -12634475;
	volatile uint16_t x255 = UINT16_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t62 = 63815;

	t62 = (x253<(x254-(x255==x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = -933993362939247277LL;
	int32_t x259 = -1;
	volatile uint32_t x260 = 0U;
	int32_t t63 = 19;

	t63 = (x257<(x258-(x259==x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = 17579653;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t x264 = -1;
	static volatile int32_t t64 = -1;

	t64 = (x261<(x262-(x263==x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 18634083LLU;
	int32_t x266 = -1;
	volatile uint16_t x267 = UINT16_MAX;
	int64_t x268 = 582967732774LL;
	volatile int32_t t65 = -2392877;

	t65 = (x265<(x266-(x267==x268)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	int8_t x271 = 0;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t66 = 191023;

	t66 = (x269<(x270-(x271==x272)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = UINT16_MAX;
	static int8_t x274 = -1;
	int32_t x276 = INT32_MIN;
	volatile int32_t t67 = 0;

	t67 = (x273<(x274-(x275==x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = UINT32_MAX;
	static int64_t x278 = -21601LL;
	int64_t x280 = INT64_MIN;
	static volatile int32_t t68 = 5;

	t68 = (x277<(x278-(x279==x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = 3323535548LLU;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t69 = 278489;

	t69 = (x281<(x282-(x283==x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = 25454;
	static uint64_t x286 = 169482676423231LLU;
	int32_t x287 = INT32_MIN;
	volatile int32_t x288 = -1526;
	static volatile int32_t t70 = -6;

	t70 = (x285<(x286-(x287==x288)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x289 = 0U;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t71 = -976;

	t71 = (x289<(x290-(x291==x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 67831961LLU;
	uint8_t x294 = 7U;
	int8_t x296 = -1;
	static volatile int32_t t72 = 6878871;

	t72 = (x293<(x294-(x295==x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t73 = -10979;

	t73 = (x297<(x298-(x299==x300)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = 0U;
	int8_t x302 = INT8_MIN;
	uint16_t x303 = 46U;
	int32_t x304 = -1;
	int32_t t74 = 18595;

	t74 = (x301<(x302-(x303==x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x306 = -15;
	static uint64_t x307 = 306046438970LLU;
	int16_t x308 = -1;
	volatile int32_t t75 = -90;

	t75 = (x305<(x306-(x307==x308)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	int8_t x311 = -10;
	uint8_t x312 = 13U;

	t76 = (x309<(x310-(x311==x312)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x313 = 18;
	int64_t x314 = INT64_MIN;
	static int32_t t77 = 1;

	t77 = (x313<(x314-(x315==x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 49U;
	int64_t x318 = -12597873219213LL;
	uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MAX;

	t78 = (x317<(x318-(x319==x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x321 = 8207275044537LLU;
	static uint32_t x323 = 390970260U;
	volatile int32_t t79 = -2;

	t79 = (x321<(x322-(x323==x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x326 = INT16_MIN;
	int16_t x328 = INT16_MAX;
	volatile int32_t t80 = -1020230;

	t80 = (x325<(x326-(x327==x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = -203292462;
	volatile uint32_t x332 = 498735900U;

	t81 = (x329<(x330-(x331==x332)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 18U;
	volatile uint32_t x334 = UINT32_MAX;
	volatile int32_t t82 = 37384;

	t82 = (x333<(x334-(x335==x336)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	static int8_t x340 = -1;
	int32_t t83 = -7491675;

	t83 = (x337<(x338-(x339==x340)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x342 = 16550740LL;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MAX;
	int32_t t84 = 679844;

	t84 = (x341<(x342-(x343==x344)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MIN;
	volatile int32_t x346 = -5346;
	static uint64_t x347 = 0LLU;
	static int64_t x348 = INT64_MAX;
	int32_t t85 = -919;

	t85 = (x345<(x346-(x347==x348)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = 49;
	uint16_t x351 = 504U;
	uint32_t x352 = UINT32_MAX;
	int32_t t86 = 58573405;

	t86 = (x349<(x350-(x351==x352)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x353 = INT8_MIN;
	volatile uint8_t x354 = 31U;
	int64_t x355 = INT64_MIN;
	volatile int32_t x356 = INT32_MIN;
	int32_t t87 = 13;

	t87 = (x353<(x354-(x355==x356)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x357 = INT64_MIN;
	uint32_t x358 = UINT32_MAX;
	int16_t x360 = INT16_MAX;

	t88 = (x357<(x358-(x359==x360)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x362 = -47;
	int8_t x364 = INT8_MIN;
	static int32_t t89 = -15934;

	t89 = (x361<(x362-(x363==x364)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x365 = -220LL;
	int8_t x366 = -1;
	uint32_t x367 = 14U;
	volatile int8_t x368 = -1;
	static volatile int32_t t90 = 2;

	t90 = (x365<(x366-(x367==x368)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x370 = INT16_MAX;
	static int64_t x371 = -1LL;
	static int32_t t91 = -11078694;

	t91 = (x369<(x370-(x371==x372)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 1;
	int64_t x375 = INT64_MIN;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t92 = -1;

	t92 = (x373<(x374-(x375==x376)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -1;
	int32_t x378 = -1;
	volatile int8_t x379 = -1;
	int8_t x380 = 5;

	t93 = (x377<(x378-(x379==x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = 29LLU;
	int8_t x382 = INT8_MIN;
	int32_t x383 = -4835;
	static volatile uint64_t x384 = 4865LLU;
	int32_t t94 = 163318;

	t94 = (x381<(x382-(x383==x384)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -55;
	static volatile uint8_t x386 = UINT8_MAX;
	int8_t x387 = -1;
	int8_t x388 = 9;
	static int32_t t95 = 12;

	t95 = (x385<(x386-(x387==x388)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x389 = 15;
	int16_t x390 = -1;
	static int8_t x391 = -1;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t96 = 2698899;

	t96 = (x389<(x390-(x391==x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x394 = INT16_MIN;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MIN;
	static int32_t t97 = -304390079;

	t97 = (x393<(x394-(x395==x396)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = INT64_MIN;
	static volatile int64_t x399 = -1LL;
	int32_t t98 = -386;

	t98 = (x397<(x398-(x399==x400)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = 0;
	uint32_t x403 = 107435168U;
	int32_t x404 = INT32_MAX;

	t99 = (x401<(x402-(x403==x404)));

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

