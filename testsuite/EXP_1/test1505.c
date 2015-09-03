#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = INT16_MIN;
static int16_t x9 = INT16_MAX;
int32_t x19 = -1;
volatile int32_t x20 = INT32_MIN;
int32_t t4 = 0;
volatile int64_t x26 = -1LL;
int32_t t6 = 0;
int8_t x32 = 0;
volatile int32_t x33 = INT32_MAX;
static volatile uint8_t x43 = 4U;
static volatile int32_t t10 = -1298776;
int32_t x53 = -240274;
static volatile uint16_t x56 = UINT16_MAX;
volatile int32_t t13 = -4;
volatile uint16_t x64 = 18906U;
static volatile uint64_t x69 = 358173329LLU;
volatile int32_t t17 = -502789378;
int32_t x76 = INT32_MIN;
uint64_t x78 = 3091908172649208LLU;
uint32_t x82 = 309U;
int32_t t20 = 42370759;
static int16_t x86 = INT16_MIN;
int32_t t21 = 8;
static uint32_t x94 = 7U;
static int16_t x97 = -1;
static int64_t x106 = INT64_MIN;
static int32_t t28 = -16028759;
volatile int32_t t29 = 2965547;
int64_t x122 = -1LL;
volatile int64_t x123 = 38947066929LL;
int32_t t30 = 770;
int8_t x135 = INT8_MIN;
int8_t x144 = INT8_MIN;
static volatile int32_t t35 = 31;
int16_t x147 = 777;
int32_t t36 = -286919887;
static uint64_t x149 = UINT64_MAX;
int8_t x152 = -1;
volatile int32_t t37 = -70324722;
uint8_t x155 = UINT8_MAX;
uint64_t x156 = 746114910541905399LLU;
static int32_t x158 = INT32_MAX;
int8_t x164 = INT8_MAX;
volatile int32_t t40 = 36;
int8_t x169 = -2;
int32_t t42 = -5235;
uint16_t x176 = UINT16_MAX;
int8_t x178 = -4;
int64_t x186 = INT64_MAX;
int64_t x200 = 323556LL;
static int32_t t49 = 30033535;
volatile int32_t x201 = 0;
uint16_t x204 = 547U;
static volatile int32_t x205 = INT32_MIN;
volatile int32_t x209 = -1;
volatile int16_t x212 = INT16_MIN;
int16_t x221 = INT16_MAX;
volatile int32_t t56 = 926587;
uint8_t x232 = UINT8_MAX;
int32_t t57 = 264;
static int64_t x236 = -1LL;
static volatile int8_t x240 = -1;
int8_t x244 = -1;
volatile int32_t t60 = 10795;
int64_t x252 = -405661586652LL;
uint32_t x256 = 1U;
volatile int8_t x257 = INT8_MAX;
int64_t x262 = -1LL;
int8_t x265 = -20;
uint8_t x268 = 12U;
volatile int32_t t66 = 512696443;
int64_t x272 = INT64_MIN;
static int32_t x279 = 25928882;
uint16_t x280 = 3U;
int8_t x282 = INT8_MIN;
uint16_t x283 = 355U;
int64_t x290 = INT64_MIN;
static volatile int16_t x292 = INT16_MIN;
int32_t x296 = INT32_MAX;
volatile int32_t t73 = -20138;
static int16_t x300 = INT16_MAX;
volatile int32_t x303 = 36529;
int32_t x305 = INT32_MAX;
static uint64_t x307 = 105501LLU;
volatile int32_t t76 = -1;
int16_t x312 = 1785;
int32_t x315 = INT32_MAX;
int8_t x333 = -1;
int16_t x336 = -2745;
uint32_t x344 = UINT32_MAX;
int64_t x361 = 3LL;
int32_t x364 = 4804;
int32_t x370 = INT32_MIN;
int16_t x373 = 1675;
static int8_t x377 = -1;
int64_t x380 = INT64_MIN;
static volatile int32_t t94 = 3;
int16_t x381 = -1;
int32_t x386 = -1;
static int32_t x387 = -1;
volatile int32_t t96 = -389;
int64_t x392 = 8500004LL;
int8_t x395 = -1;
int64_t x396 = INT64_MAX;


void f0(void) {
	uint16_t x1 = 856U;
	static uint32_t x2 = UINT32_MAX;
	uint64_t x4 = 84652LLU;
	int32_t t0 = -1802;

	t0 = (((x1<x2)|x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 3U;
	uint8_t x6 = UINT8_MAX;
	volatile uint8_t x7 = 55U;
	int8_t x8 = 1;
	static int32_t t1 = 400488;

	t1 = (((x5<x6)|x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 0;
	volatile uint64_t x11 = 94271919LLU;
	int8_t x12 = -1;
	volatile int32_t t2 = 502854785;

	t2 = (((x9<x10)|x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	int32_t x14 = INT32_MAX;
	int64_t x15 = -41396020781LL;
	volatile int8_t x16 = -1;
	volatile int32_t t3 = 311706997;

	t3 = (((x13<x14)|x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 41LL;
	static uint64_t x18 = UINT64_MAX;

	t4 = (((x17<x18)|x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = -1;
	int64_t x23 = INT64_MIN;
	uint64_t x24 = 61544205979984687LLU;
	int32_t t5 = -174392571;

	t5 = (((x21<x22)|x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x27 = -23;
	uint32_t x28 = UINT32_MAX;

	t6 = (((x25<x26)|x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile int16_t x30 = INT16_MIN;
	int16_t x31 = 13733;
	int32_t t7 = -3;

	t7 = (((x29<x30)|x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 1583U;
	volatile uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -52189;

	t8 = (((x33<x34)|x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MIN;
	int64_t x39 = INT64_MAX;
	volatile int64_t x40 = INT64_MAX;
	int32_t t9 = 22;

	t9 = (((x37<x38)|x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = INT8_MIN;
	static volatile int32_t x44 = INT32_MAX;

	t10 = (((x41<x42)|x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 24275U;
	int32_t x46 = INT32_MAX;
	static int16_t x47 = INT16_MIN;
	volatile int8_t x48 = -4;
	int32_t t11 = -1;

	t11 = (((x45<x46)|x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = 153U;
	static int8_t x52 = -4;
	static int32_t t12 = -954924511;

	t12 = (((x49<x50)|x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = 21;

	t13 = (((x53<x54)|x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 729U;
	int16_t x58 = INT16_MIN;
	int32_t x59 = 1173;
	uint8_t x60 = 27U;
	int32_t t14 = 3981;

	t14 = (((x57<x58)|x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 6;
	volatile uint16_t x62 = 47U;
	uint64_t x63 = UINT64_MAX;
	volatile int32_t t15 = -3;

	t15 = (((x61<x62)|x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint8_t x66 = 63U;
	volatile int32_t x67 = -1;
	int8_t x68 = 46;
	volatile int32_t t16 = -488;

	t16 = (((x65<x66)|x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = UINT16_MAX;
	static int8_t x71 = -1;
	int32_t x72 = INT32_MAX;

	t17 = (((x69<x70)|x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MAX;
	uint64_t x74 = UINT64_MAX;
	static int32_t x75 = INT32_MAX;
	static volatile int32_t t18 = 5498;

	t18 = (((x73<x74)|x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static volatile int8_t x79 = INT8_MAX;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 103119;

	t19 = (((x77<x78)|x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	uint16_t x83 = 242U;
	int16_t x84 = INT16_MAX;

	t20 = (((x81<x82)|x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static int16_t x87 = -1;
	int64_t x88 = 1386945LL;

	t21 = (((x85<x86)|x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = 3;
	int8_t x90 = 0;
	volatile uint16_t x91 = 24U;
	int32_t x92 = -455;
	static int32_t t22 = -510755387;

	t22 = (((x89<x90)|x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 1;

	t23 = (((x93<x94)|x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -52839003;

	t24 = (((x97<x98)|x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 0LL;
	static int16_t x102 = INT16_MIN;
	uint16_t x103 = 63U;
	int16_t x104 = 24;
	int32_t t25 = -1;

	t25 = (((x101<x102)|x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 129527820799LL;
	static uint8_t x107 = UINT8_MAX;
	static uint32_t x108 = 7714598U;
	volatile int32_t t26 = -343695;

	t26 = (((x105<x106)|x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -744320064;
	uint8_t x110 = 22U;
	int64_t x111 = INT64_MAX;
	uint32_t x112 = UINT32_MAX;
	int32_t t27 = 4;

	t27 = (((x109<x110)|x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = -2972;
	int16_t x115 = 13;
	uint8_t x116 = UINT8_MAX;

	t28 = (((x113<x114)|x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	int16_t x120 = 101;

	t29 = (((x117<x118)|x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	volatile int16_t x124 = INT16_MAX;

	t30 = (((x121<x122)|x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 63LLU;
	volatile uint16_t x126 = 102U;
	volatile int32_t x127 = 358;
	int32_t x128 = -1;
	int32_t t31 = 94;

	t31 = (((x125<x126)|x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 9U;
	static int64_t x130 = 901LL;
	int8_t x131 = 1;
	int64_t x132 = INT64_MIN;
	int32_t t32 = 61245674;

	t32 = (((x129<x130)|x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	int16_t x134 = -6084;
	volatile int16_t x136 = -2;
	int32_t t33 = 1584932;

	t33 = (((x133<x134)|x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 3218678034555LLU;
	int32_t x138 = INT32_MIN;
	int16_t x139 = 1;
	static int64_t x140 = -1LL;
	int32_t t34 = 160440974;

	t34 = (((x137<x138)|x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 1041388483782483321LL;
	int8_t x142 = 0;
	int16_t x143 = -1;

	t35 = (((x141<x142)|x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t x146 = -1;
	int16_t x148 = INT16_MIN;

	t36 = (((x145<x146)|x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x150 = UINT32_MAX;
	uint64_t x151 = 1144865197344226966LLU;

	t37 = (((x149<x150)|x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 47U;
	static int32_t x154 = -1376;
	volatile int32_t t38 = 52;

	t38 = (((x153<x154)|x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 32U;
	int8_t x159 = INT8_MIN;
	static volatile int64_t x160 = INT64_MAX;
	volatile int32_t t39 = -1;

	t39 = (((x157<x158)|x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MAX;
	int32_t x162 = -263818211;
	uint32_t x163 = 26109U;

	t40 = (((x161<x162)|x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 179904U;
	uint32_t x166 = 1U;
	int64_t x167 = INT64_MIN;
	volatile int8_t x168 = -1;
	volatile int32_t t41 = 741457;

	t41 = (((x165<x166)|x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = INT32_MIN;
	static int16_t x171 = -1;
	int32_t x172 = -1;

	t42 = (((x169<x170)|x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int32_t x174 = 236952;
	int32_t x175 = INT32_MAX;
	volatile int32_t t43 = 47061614;

	t43 = (((x173<x174)|x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = 0;
	volatile int32_t t44 = 115289;

	t44 = (((x177<x178)|x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MIN;
	volatile int64_t x182 = -52306LL;
	int8_t x183 = INT8_MAX;
	int32_t x184 = -71267050;
	int32_t t45 = 82;

	t45 = (((x181<x182)|x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = UINT32_MAX;
	int64_t x187 = INT64_MIN;
	int8_t x188 = -1;
	static int32_t t46 = -2625587;

	t46 = (((x185<x186)|x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 14113;
	int32_t x190 = 91112296;
	int16_t x191 = -1;
	int32_t x192 = -9296;
	int32_t t47 = 6046504;

	t47 = (((x189<x190)|x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = 188U;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = 276;
	static uint16_t x196 = 22U;
	volatile int32_t t48 = -3521906;

	t48 = (((x193<x194)|x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -1LL;
	volatile int32_t x198 = INT32_MIN;
	int16_t x199 = -8624;

	t49 = (((x197<x198)|x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = 814268U;
	volatile uint16_t x203 = 35U;
	int32_t t50 = 32098;

	t50 = (((x201<x202)|x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	static uint64_t x208 = UINT64_MAX;
	static volatile int32_t t51 = -31;

	t51 = (((x205<x206)|x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -60LL;
	int16_t x211 = 1;
	volatile int32_t t52 = -26777;

	t52 = (((x209<x210)|x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -1;
	volatile int16_t x214 = -1;
	uint32_t x215 = 17281U;
	int64_t x216 = 19639LL;
	volatile int32_t t53 = -6130;

	t53 = (((x213<x214)|x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 2LLU;
	int64_t x218 = 1462334271LL;
	uint64_t x219 = 9714887158LLU;
	uint32_t x220 = UINT32_MAX;
	int32_t t54 = 3957;

	t54 = (((x217<x218)|x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = 238;
	static int8_t x223 = -1;
	uint8_t x224 = 1U;
	int32_t t55 = 1;

	t55 = (((x221<x222)|x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x225 = UINT16_MAX;
	volatile uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 488843LLU;
	uint64_t x228 = 4LLU;

	t56 = (((x225<x226)|x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 19;
	int8_t x230 = -1;
	static int64_t x231 = INT64_MIN;

	t57 = (((x229<x230)|x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MAX;
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = 6624;

	t58 = (((x233<x234)|x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 50U;
	int16_t x238 = -1;
	uint16_t x239 = 27437U;
	static int32_t t59 = 513538;

	t59 = (((x237<x238)|x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = INT64_MIN;
	int64_t x243 = INT64_MAX;

	t60 = (((x241<x242)|x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	static int64_t x246 = 9716855LL;
	int32_t x247 = -1;
	static int32_t x248 = -2817926;
	volatile int32_t t61 = -598;

	t61 = (((x245<x246)|x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -24;
	uint16_t x250 = 1U;
	int16_t x251 = INT16_MIN;
	int32_t t62 = -1306;

	t62 = (((x249<x250)|x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	uint16_t x254 = UINT16_MAX;
	int16_t x255 = -11;
	int32_t t63 = 0;

	t63 = (((x253<x254)|x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x258 = INT16_MAX;
	static int64_t x259 = -1LL;
	int32_t x260 = 45156;
	int32_t t64 = 5818890;

	t64 = (((x257<x258)|x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int16_t x263 = -1;
	static volatile int8_t x264 = INT8_MIN;
	static volatile int32_t t65 = -4;

	t65 = (((x261<x262)|x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = INT32_MIN;
	uint32_t x267 = 92U;

	t66 = (((x265<x266)|x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 828;
	static int64_t x270 = -1LL;
	volatile int64_t x271 = 274798350764846LL;
	volatile int32_t t67 = -7;

	t67 = (((x269<x270)|x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -1;
	uint16_t x274 = 1U;
	uint8_t x275 = UINT8_MAX;
	int8_t x276 = -4;
	int32_t t68 = 5247;

	t68 = (((x273<x274)|x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -2;
	uint64_t x278 = 2LLU;
	int32_t t69 = -228265;

	t69 = (((x277<x278)|x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 47U;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -118;

	t70 = (((x281<x282)|x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	int16_t x286 = 0;
	uint8_t x287 = 1U;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -966135;

	t71 = (((x285<x286)|x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int8_t x291 = 26;
	volatile int32_t t72 = -7645285;

	t72 = (((x289<x290)|x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MAX;

	t73 = (((x293<x294)|x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 256151892U;
	static int32_t x298 = INT32_MIN;
	int8_t x299 = 0;
	static volatile int32_t t74 = 0;

	t74 = (((x297<x298)|x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	volatile int8_t x302 = INT8_MIN;
	int64_t x304 = -9875425019LL;
	static volatile int32_t t75 = -16021652;

	t75 = (((x301<x302)|x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	int8_t x308 = INT8_MAX;

	t76 = (((x305<x306)|x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -22;
	static int64_t x310 = -16799523583067609LL;
	static int8_t x311 = -1;
	volatile int32_t t77 = 12;

	t77 = (((x309<x310)|x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	uint16_t x316 = 373U;
	static volatile int32_t t78 = -97797546;

	t78 = (((x313<x314)|x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x317 = UINT64_MAX;
	static int16_t x318 = INT16_MAX;
	uint8_t x319 = UINT8_MAX;
	static uint32_t x320 = 22U;
	volatile int32_t t79 = 1977;

	t79 = (((x317<x318)|x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 2U;
	int64_t x322 = -2411913028LL;
	uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 938530U;
	int32_t t80 = 6086;

	t80 = (((x321<x322)|x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 8U;
	volatile int16_t x326 = INT16_MIN;
	uint64_t x327 = 6634LLU;
	uint64_t x328 = UINT64_MAX;
	int32_t t81 = 127082;

	t81 = (((x325<x326)|x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 15U;
	static uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 1752660222U;
	static int64_t x332 = -1LL;
	static int32_t t82 = 1633829;

	t82 = (((x329<x330)|x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = -1LL;
	int32_t x335 = -5;
	volatile int32_t t83 = -119;

	t83 = (((x333<x334)|x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	static int8_t x338 = INT8_MIN;
	static uint16_t x339 = 15U;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -29;

	t84 = (((x337<x338)|x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	volatile int32_t x342 = 10079;
	int64_t x343 = 214LL;
	int32_t t85 = 24902806;

	t85 = (((x341<x342)|x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 96;
	static int64_t x346 = 21334682LL;
	int32_t x347 = INT32_MAX;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = -822261;

	t86 = (((x345<x346)|x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	uint8_t x350 = 9U;
	uint32_t x351 = UINT32_MAX;
	uint16_t x352 = 13U;
	int32_t t87 = -1;

	t87 = (((x349<x350)|x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = UINT16_MAX;
	int16_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	static int64_t x356 = INT64_MAX;
	volatile int32_t t88 = 2898063;

	t88 = (((x353<x354)|x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	static int64_t x358 = INT64_MAX;
	static int8_t x359 = INT8_MIN;
	uint64_t x360 = UINT64_MAX;
	static volatile int32_t t89 = -32506;

	t89 = (((x357<x358)|x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x362 = INT16_MIN;
	int8_t x363 = -1;
	int32_t t90 = -42;

	t90 = (((x361<x362)|x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MAX;
	int32_t x366 = -1;
	int16_t x367 = -1;
	int16_t x368 = 1843;
	volatile int32_t t91 = -7632;

	t91 = (((x365<x366)|x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = 5U;
	static int16_t x371 = -1;
	volatile uint32_t x372 = 146736858U;
	static volatile int32_t t92 = 3139608;

	t92 = (((x369<x370)|x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = 652U;
	uint16_t x375 = UINT16_MAX;
	static uint32_t x376 = 0U;
	static int32_t t93 = 0;

	t93 = (((x373<x374)|x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -1;
	static volatile int16_t x379 = -1;

	t94 = (((x377<x378)|x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MIN;
	int16_t x383 = -1;
	uint32_t x384 = 939865U;
	volatile int32_t t95 = 846748849;

	t95 = (((x381<x382)|x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	volatile uint16_t x388 = 998U;

	t96 = (((x385<x386)|x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1749083136966LL;
	int8_t x390 = 1;
	volatile int32_t x391 = -1;
	volatile int32_t t97 = -1;

	t97 = (((x389<x390)|x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	volatile int8_t x394 = -1;
	static int32_t t98 = -216372234;

	t98 = (((x393<x394)|x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	static int64_t x398 = INT64_MIN;
	int8_t x399 = -15;
	volatile int64_t x400 = INT64_MIN;
	int32_t t99 = 22;

	t99 = (((x397<x398)|x399)<=x400);

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

