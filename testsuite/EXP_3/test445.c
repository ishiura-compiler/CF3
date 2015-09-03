#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = 31;
volatile int32_t x14 = INT32_MIN;
volatile int32_t x16 = -1;
int32_t t1 = -8;
static int32_t t2 = 950897675;
volatile int32_t t5 = -347333;
static int64_t x35 = -1LL;
int64_t x50 = -1LL;
volatile int32_t t9 = -1035104;
uint8_t x59 = 111U;
uint64_t t11 = 11479827765852LLU;
static int32_t t12 = 9199921;
volatile int64_t x69 = INT64_MIN;
int32_t x75 = -1;
static volatile int16_t x83 = INT16_MIN;
int16_t x85 = INT16_MAX;
uint32_t x87 = UINT32_MAX;
int8_t x95 = -1;
static int64_t x98 = -1LL;
uint32_t x102 = UINT32_MAX;
int64_t x110 = -1828541754LL;
int16_t x129 = 33;
int8_t x130 = -6;
volatile int64_t x133 = INT64_MIN;
volatile uint32_t x137 = 2U;
static volatile int32_t x141 = INT32_MIN;
static int64_t x149 = INT64_MAX;
static volatile int8_t x150 = INT8_MIN;
static volatile int32_t x156 = -30;
volatile int64_t t33 = -8382078825297582LL;
uint32_t x168 = 988407U;
static uint32_t t35 = 109U;
int64_t x175 = 2498855293237LL;
int64_t t36 = 15067466LL;
volatile int16_t x183 = -51;
volatile int8_t x190 = INT8_MAX;
int16_t x192 = INT16_MAX;
static uint8_t x196 = 17U;
static volatile uint8_t x201 = UINT8_MAX;
static int32_t x203 = -1;
uint64_t x209 = 2024424450LLU;
static volatile int64_t t43 = INT64_MAX;
uint64_t x215 = 94459615104LLU;
volatile int16_t x216 = 907;
volatile uint64_t t44 = 34233784956731148LLU;
static int32_t x217 = 91197;
uint16_t x221 = 104U;
static volatile uint32_t t49 = 58559U;
int64_t x246 = INT64_MAX;
int32_t x250 = INT32_MAX;
static volatile int8_t x251 = INT8_MIN;
int16_t x258 = INT16_MIN;
uint8_t x259 = UINT8_MAX;
static volatile int32_t x262 = 1572;
int64_t x270 = 140482LL;
static uint16_t x271 = 624U;
int32_t t58 = -183805416;
int32_t t59 = -1;
uint32_t x303 = 1U;
int64_t x312 = INT64_MIN;
static volatile uint64_t t62 = 51534LLU;
int64_t x313 = INT64_MAX;
static int32_t t63 = -1512995;
int16_t x332 = -288;
int8_t x335 = 26;
volatile int32_t x340 = -36;
int8_t x345 = INT8_MIN;
static volatile int64_t t69 = 79267400LL;
static int8_t x358 = 0;
int16_t x359 = INT16_MIN;
int8_t x366 = INT8_MIN;
uint16_t x379 = UINT16_MAX;
static volatile int64_t x386 = 9630698074LL;
static uint64_t x394 = UINT64_MAX;
int32_t x395 = -1;
volatile int16_t x404 = INT16_MAX;
int16_t x407 = 27;
static int32_t t81 = -112;
static uint8_t x409 = 0U;
static int32_t t82 = 398451857;
int16_t x423 = INT16_MAX;
volatile int32_t t85 = 342137055;
static int16_t x432 = INT16_MIN;
uint32_t x433 = 929560372U;
uint64_t t87 = 14LLU;
uint32_t x439 = 423053473U;
int32_t x443 = INT32_MIN;
int16_t x451 = INT16_MIN;
uint32_t x452 = UINT32_MAX;
int32_t x454 = INT32_MAX;
static volatile uint64_t x467 = UINT64_MAX;
int32_t x471 = INT32_MIN;
int32_t x473 = INT32_MIN;
volatile int16_t x483 = -1;
int32_t t98 = 49852168;
volatile int64_t x493 = INT64_MIN;


void f0(void) {
	uint16_t x2 = 1U;
	uint32_t x3 = UINT32_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 63742LLU;

	t0 = ((x1<x2)*(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = -1;
	uint8_t x15 = 11U;

	t1 = ((x13<x14)*(x15*x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = 2065910362920528LLU;
	int8_t x19 = -1;
	uint16_t x20 = UINT16_MAX;

	t2 = ((x17<x18)*(x19*x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 5;
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MAX;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t3 = -6011280;

	t3 = ((x21<x22)*(x23*x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x25 = -966;
	static int64_t x26 = 49675906164194LL;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t x28 = -81;
	volatile int32_t t4 = -3;

	t4 = ((x25<x26)*(x27*x28));

	if (t4 != -20655) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = INT8_MIN;
	static volatile int16_t x30 = -1;
	int32_t x31 = -1;
	static int16_t x32 = -26;

	t5 = ((x29<x30)*(x31*x32));

	if (t5 != 26) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x33 = 5U;
	uint32_t x34 = UINT32_MAX;
	int32_t x36 = INT32_MAX;
	volatile int64_t t6 = -10633LL;

	t6 = ((x33<x34)*(x35*x36));

	if (t6 != -2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x45 = UINT64_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	static int16_t x47 = INT16_MAX;
	volatile uint8_t x48 = 27U;
	volatile int32_t t7 = -8;

	t7 = ((x45<x46)*(x47*x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x49 = 804952758U;
	volatile uint32_t x51 = 399251942U;
	static uint16_t x52 = 40U;
	static uint32_t t8 = 1U;

	t8 = ((x49<x50)*(x51*x52));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x53 = -478;
	int32_t x54 = 741866;
	int8_t x55 = 44;
	static volatile int8_t x56 = INT8_MIN;

	t9 = ((x53<x54)*(x55*x56));

	if (t9 != -5632) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x57 = UINT32_MAX;
	volatile uint32_t x58 = 12248U;
	int8_t x60 = INT8_MIN;
	int32_t t10 = 10587;

	t10 = ((x57<x58)*(x59*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x61 = 1999;
	int64_t x62 = INT64_MAX;
	int16_t x63 = INT16_MAX;
	static uint64_t x64 = 214797165131920251LLU;

	t11 = ((x61<x62)*(x63*x64));

	if (t11 != 10049217794291698821LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -9;
	uint8_t x66 = 2U;
	static int32_t x67 = -1;
	uint16_t x68 = 166U;

	t12 = ((x65<x66)*(x67*x68));

	if (t12 != -166) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x70 = -1LL;
	static int16_t x71 = INT16_MIN;
	int64_t x72 = -1LL;
	static volatile int64_t t13 = -11025LL;

	t13 = ((x69<x70)*(x71*x72));

	if (t13 != 32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -3612707853466LL;
	int32_t x74 = 48389264;
	volatile int16_t x76 = -169;
	volatile int32_t t14 = 2;

	t14 = ((x73<x74)*(x75*x76));

	if (t14 != 169) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x77 = UINT64_MAX;
	static uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MAX;
	static uint64_t x80 = UINT64_MAX;
	uint64_t t15 = 3LLU;

	t15 = ((x77<x78)*(x79*x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x81 = 3U;
	int32_t x82 = 31;
	volatile uint8_t x84 = 30U;
	int32_t t16 = -210330;

	t16 = ((x81<x82)*(x83*x84));

	if (t16 != -983040) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x86 = UINT32_MAX;
	int32_t x88 = 17255;
	static uint32_t t17 = 908U;

	t17 = ((x85<x86)*(x87*x88));

	if (t17 != 4294950041U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 2884884692920LLU;
	static int32_t x90 = -1;
	int16_t x91 = -1;
	int16_t x92 = INT16_MIN;
	int32_t t18 = -1032574881;

	t18 = ((x89<x90)*(x91*x92));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MAX;
	static int16_t x96 = INT16_MIN;
	int32_t t19 = 236785871;

	t19 = ((x93<x94)*(x95*x96));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = UINT16_MAX;
	static int16_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t20 = 110LLU;

	t20 = ((x97<x98)*(x99*x100));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 20342U;
	uint64_t x103 = 179512093LLU;
	volatile int16_t x104 = -1;
	volatile uint64_t t21 = 46296828267820048LLU;

	t21 = ((x101<x102)*(x103*x104));

	if (t21 != 18446744073530039523LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = 1U;
	int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t22 = 19089740;

	t22 = ((x105<x106)*(x107*x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = 1;
	uint8_t x111 = UINT8_MAX;
	volatile uint8_t x112 = 5U;
	int32_t t23 = 4921642;

	t23 = ((x109<x110)*(x111*x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MAX;
	int16_t x114 = INT16_MIN;
	static uint8_t x115 = 0U;
	int8_t x116 = -1;
	static volatile int32_t t24 = 437993177;

	t24 = ((x113<x114)*(x115*x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = UINT64_MAX;
	volatile uint16_t x118 = 715U;
	uint64_t x119 = UINT64_MAX;
	static int64_t x120 = INT64_MAX;
	uint64_t t25 = 3192492745650594LLU;

	t25 = ((x117<x118)*(x119*x120));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x121 = 127U;
	static uint16_t x122 = 162U;
	int16_t x123 = 3858;
	uint32_t x124 = 959445U;
	volatile uint32_t t26 = 304U;

	t26 = ((x121<x122)*(x123*x124));

	if (t26 != 3701538810U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x131 = INT32_MAX;
	int32_t x132 = -1;
	volatile int32_t t27 = -14;

	t27 = ((x129<x130)*(x131*x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x134 = -1;
	int8_t x135 = INT8_MIN;
	static uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t28 = 5659151U;

	t28 = ((x133<x134)*(x135*x136));

	if (t28 != 128U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x138 = 736493567988LLU;
	int8_t x139 = -1;
	int8_t x140 = INT8_MAX;
	int32_t t29 = 1993;

	t29 = ((x137<x138)*(x139*x140));

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x142 = UINT16_MAX;
	volatile int8_t x143 = -15;
	uint64_t x144 = 32LLU;
	volatile uint64_t t30 = 3082711375LLU;

	t30 = ((x141<x142)*(x143*x144));

	if (t30 != 18446744073709551136LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MAX;
	volatile int32_t t31 = -177;

	t31 = ((x149<x150)*(x151*x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = INT32_MIN;
	volatile int64_t x154 = 532891456357470497LL;
	int8_t x155 = -45;
	volatile int32_t t32 = -246307;

	t32 = ((x153<x154)*(x155*x156));

	if (t32 != 1350) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -1;
	static int16_t x162 = INT16_MIN;
	volatile int16_t x163 = INT16_MIN;
	volatile int64_t x164 = 3840LL;

	t33 = ((x161<x162)*(x163*x164));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = INT64_MIN;
	uint64_t x167 = UINT64_MAX;
	volatile uint64_t t34 = 107126811288423418LLU;

	t34 = ((x165<x166)*(x167*x168));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = 233;
	uint32_t x170 = 2937091U;
	uint16_t x171 = 13U;
	uint32_t x172 = UINT32_MAX;

	t35 = ((x169<x170)*(x171*x172));

	if (t35 != 4294967283U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 63059862U;
	volatile uint16_t x174 = UINT16_MAX;
	volatile uint16_t x176 = 0U;

	t36 = ((x173<x174)*(x175*x176));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 27U;
	int8_t x178 = INT8_MAX;
	static uint32_t x179 = UINT32_MAX;
	static int8_t x180 = INT8_MIN;
	static volatile uint32_t t37 = 63897U;

	t37 = ((x177<x178)*(x179*x180));

	if (t37 != 128U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	uint32_t x182 = 2421920U;
	int32_t x184 = 369640;
	int32_t t38 = 0;

	t38 = ((x181<x182)*(x183*x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 1346056568805430LLU;
	int8_t x191 = INT8_MIN;
	int32_t t39 = -1;

	t39 = ((x189<x190)*(x191*x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = 0LL;
	int16_t x195 = -55;
	int32_t t40 = 9;

	t40 = ((x193<x194)*(x195*x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = 0;
	int16_t x198 = 14;
	static volatile uint16_t x199 = 0U;
	static int16_t x200 = INT16_MIN;
	int32_t t41 = -1015890664;

	t41 = ((x197<x198)*(x199*x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x202 = UINT8_MAX;
	uint16_t x204 = UINT16_MAX;
	static int32_t t42 = -426268;

	t42 = ((x201<x202)*(x203*x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MAX;
	static int8_t x212 = 1;

	t43 = ((x209<x210)*(x211*x212));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = 13830U;
	int8_t x214 = INT8_MAX;

	t44 = ((x213<x214)*(x215*x216));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x218 = 362;
	int8_t x219 = -3;
	uint16_t x220 = 391U;
	int32_t t45 = -74428;

	t45 = ((x217<x218)*(x219*x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 25U;
	int32_t x224 = -1;
	volatile int32_t t46 = 3212;

	t46 = ((x221<x222)*(x223*x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x229 = 82962692U;
	int32_t x230 = -1;
	int8_t x231 = -1;
	volatile uint8_t x232 = 6U;
	static volatile int32_t t47 = 59;

	t47 = ((x229<x230)*(x231*x232));

	if (t47 != -6) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = -1LL;
	volatile uint64_t x234 = UINT64_MAX;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = -1;
	int32_t t48 = -5103095;

	t48 = ((x233<x234)*(x235*x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x241 = INT16_MAX;
	static int32_t x242 = 146720;
	int8_t x243 = -3;
	uint32_t x244 = 6475U;

	t49 = ((x241<x242)*(x243*x244));

	if (t49 != 4294947871U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x245 = UINT64_MAX;
	uint32_t x247 = 453U;
	volatile int8_t x248 = 3;
	static uint32_t t50 = 1298735972U;

	t50 = ((x245<x246)*(x247*x248));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x249 = 6U;
	uint32_t x252 = 0U;
	static volatile uint32_t t51 = 59921240U;

	t51 = ((x249<x250)*(x251*x252));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = -1;
	int16_t x254 = -1;
	static volatile int16_t x255 = -1387;
	int32_t x256 = -431354;
	volatile int32_t t52 = 98394;

	t52 = ((x253<x254)*(x255*x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = 183U;
	int16_t x260 = 2;
	int32_t t53 = -299065;

	t53 = ((x257<x258)*(x259*x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	uint64_t x264 = 30192297LLU;
	uint64_t t54 = 6004691LLU;

	t54 = ((x261<x262)*(x263*x264));

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = UINT64_MAX;
	uint64_t x266 = 15624739LLU;
	int8_t x267 = 1;
	int64_t x268 = INT64_MAX;
	volatile int64_t t55 = 12063LL;

	t55 = ((x265<x266)*(x267*x268));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = 3875LL;
	uint64_t x272 = UINT64_MAX;
	uint64_t t56 = 36456LLU;

	t56 = ((x269<x270)*(x271*x272));

	if (t56 != 18446744073709550992LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = 6;
	uint32_t x274 = 690U;
	uint64_t x275 = 54552LLU;
	static uint32_t x276 = 19771977U;
	volatile uint64_t t57 = 135978484693575857LLU;

	t57 = ((x273<x274)*(x275*x276));

	if (t57 != 1078600889304LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -6;
	int8_t x278 = -3;
	uint16_t x279 = 227U;
	uint8_t x280 = UINT8_MAX;

	t58 = ((x277<x278)*(x279*x280));

	if (t58 != 57885) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x290 = INT8_MAX;
	static uint8_t x291 = 39U;
	volatile uint8_t x292 = 44U;

	t59 = ((x289<x290)*(x291*x292));

	if (t59 != 1716) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x293 = 1U;
	int16_t x294 = INT16_MIN;
	static int16_t x295 = INT16_MIN;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t60 = -3295603;

	t60 = ((x293<x294)*(x295*x296));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x301 = 965U;
	uint16_t x302 = UINT16_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = ((x301<x302)*(x303*x304));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x309 = 8U;
	static int8_t x310 = -1;
	static volatile uint64_t x311 = UINT64_MAX;

	t62 = ((x309<x310)*(x311*x312));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MIN;
	int8_t x316 = -1;

	t63 = ((x313<x314)*(x315*x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x325 = 91U;
	volatile int32_t x326 = -1;
	volatile uint16_t x327 = 0U;
	static volatile uint64_t x328 = UINT64_MAX;
	uint64_t t64 = 12LLU;

	t64 = ((x325<x326)*(x327*x328));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x329 = INT64_MIN;
	int16_t x330 = 441;
	uint64_t x331 = UINT64_MAX;
	volatile uint64_t t65 = 8700152872468698300LLU;

	t65 = ((x329<x330)*(x331*x332));

	if (t65 != 288LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x333 = -105039795LL;
	static int16_t x334 = 12286;
	volatile int64_t x336 = 356LL;
	int64_t t66 = 189424731318LL;

	t66 = ((x333<x334)*(x335*x336));

	if (t66 != 9256LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x337 = UINT8_MAX;
	static volatile uint8_t x338 = 13U;
	int32_t x339 = -29366;
	int32_t t67 = 4996;

	t67 = ((x337<x338)*(x339*x340));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x341 = 1830228777LLU;
	int8_t x342 = -1;
	int64_t x343 = 609LL;
	uint64_t x344 = 2524729621199621154LLU;
	volatile uint64_t t68 = 260451124875372265LLU;

	t68 = ((x341<x342)*(x343*x344));

	if (t68 != 6480581192676498658LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x346 = INT16_MIN;
	volatile int64_t x347 = INT64_MAX;
	int32_t x348 = -1;

	t69 = ((x345<x346)*(x347*x348));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = INT64_MAX;
	uint16_t x351 = 1U;
	int32_t x352 = -1;
	volatile int32_t t70 = -560753241;

	t70 = ((x349<x350)*(x351*x352));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x357 = 1U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t71 = 10383;

	t71 = ((x357<x358)*(x359*x360));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x365 = 997667;
	int8_t x367 = INT8_MAX;
	uint8_t x368 = 17U;
	volatile int32_t t72 = 15;

	t72 = ((x365<x366)*(x367*x368));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x369 = 631U;
	static uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 3U;
	static int32_t t73 = 5;

	t73 = ((x369<x370)*(x371*x372));

	if (t73 != -98304) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = INT8_MAX;
	static int16_t x374 = -1;
	int16_t x375 = -31;
	int16_t x376 = INT16_MAX;
	int32_t t74 = 20900;

	t74 = ((x373<x374)*(x375*x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x377 = INT64_MIN;
	volatile int8_t x378 = INT8_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t75 = 10;

	t75 = ((x377<x378)*(x379*x380));

	if (t75 != 16711425) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x385 = INT8_MIN;
	uint32_t x387 = UINT32_MAX;
	int16_t x388 = -2;
	volatile uint32_t t76 = 10343858U;

	t76 = ((x385<x386)*(x387*x388));

	if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x389 = UINT64_MAX;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 3857353U;
	volatile int8_t x392 = INT8_MIN;
	uint32_t t77 = 775086620U;

	t77 = ((x389<x390)*(x391*x392));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x393 = INT32_MAX;
	uint8_t x396 = 13U;
	int32_t t78 = -262;

	t78 = ((x393<x394)*(x395*x396));

	if (t78 != -13) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;
	uint16_t x399 = 0U;
	int64_t x400 = INT64_MIN;
	int64_t t79 = 206424422033185LL;

	t79 = ((x397<x398)*(x399*x400));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x401 = 74U;
	static uint8_t x402 = 88U;
	uint8_t x403 = UINT8_MAX;
	int32_t t80 = -314714;

	t80 = ((x401<x402)*(x403*x404));

	if (t80 != 8355585) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x405 = 29U;
	uint32_t x406 = 7965U;
	uint8_t x408 = 37U;

	t81 = ((x405<x406)*(x407*x408));

	if (t81 != 999) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x410 = -1;
	uint16_t x411 = 5U;
	uint16_t x412 = UINT16_MAX;

	t82 = ((x409<x410)*(x411*x412));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x413 = 3U;
	volatile int16_t x414 = INT16_MAX;
	uint64_t x415 = 2235326523251020657LLU;
	volatile int16_t x416 = INT16_MIN;
	static uint64_t t83 = 253950229LLU;

	t83 = ((x413<x414)*(x415*x416));

	if (t83 != 4841202811184578560LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x421 = 2419322;
	static int8_t x422 = 15;
	int8_t x424 = -1;
	static int32_t t84 = -4;

	t84 = ((x421<x422)*(x423*x424));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x425 = UINT64_MAX;
	uint64_t x426 = UINT64_MAX;
	int8_t x427 = -1;
	int16_t x428 = 0;

	t85 = ((x425<x426)*(x427*x428));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x429 = 86U;
	int64_t x430 = 34698427658LL;
	volatile int32_t x431 = -1;
	volatile int32_t t86 = -286836;

	t86 = ((x429<x430)*(x431*x432));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x434 = INT32_MAX;
	static uint64_t x435 = UINT64_MAX;
	uint64_t x436 = UINT64_MAX;

	t87 = ((x433<x434)*(x435*x436));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x437 = 433LLU;
	int8_t x438 = INT8_MAX;
	int8_t x440 = -1;
	static uint32_t t88 = 1702170U;

	t88 = ((x437<x438)*(x439*x440));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x441 = INT32_MIN;
	volatile int32_t x442 = 1683486;
	int64_t x444 = -1LL;
	static volatile int64_t t89 = -29382LL;

	t89 = ((x441<x442)*(x443*x444));

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x449 = INT8_MIN;
	static volatile int16_t x450 = 0;
	volatile uint32_t t90 = 28681U;

	t90 = ((x449<x450)*(x451*x452));

	if (t90 != 32768U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x453 = INT32_MIN;
	volatile int32_t x455 = 2401756;
	int32_t x456 = 511;
	volatile int32_t t91 = -5831082;

	t91 = ((x453<x454)*(x455*x456));

	if (t91 != 1227297316) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x457 = -242682LL;
	volatile int64_t x458 = 1861315991372853454LL;
	uint16_t x459 = 2192U;
	volatile int8_t x460 = INT8_MAX;
	int32_t t92 = -90;

	t92 = ((x457<x458)*(x459*x460));

	if (t92 != 278384) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x461 = INT64_MIN;
	int32_t x462 = -312123942;
	volatile int64_t x463 = INT64_MAX;
	volatile int8_t x464 = -1;
	static int64_t t93 = 926096994716609506LL;

	t93 = ((x461<x462)*(x463*x464));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x465 = 1U;
	uint16_t x466 = 5U;
	uint16_t x468 = UINT16_MAX;
	uint64_t t94 = 7LLU;

	t94 = ((x465<x466)*(x467*x468));

	if (t94 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x469 = 20LLU;
	static uint8_t x470 = 3U;
	static int64_t x472 = -1LL;
	static volatile int64_t t95 = 5964165LL;

	t95 = ((x469<x470)*(x471*x472));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x474 = UINT32_MAX;
	int16_t x475 = INT16_MIN;
	static volatile int32_t x476 = -124;
	static int32_t t96 = 3637140;

	t96 = ((x473<x474)*(x475*x476));

	if (t96 != 4063232) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = INT64_MIN;
	volatile int64_t x482 = INT64_MIN;
	static uint8_t x484 = UINT8_MAX;
	int32_t t97 = -31346230;

	t97 = ((x481<x482)*(x483*x484));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x485 = INT64_MAX;
	int8_t x486 = -1;
	int32_t x487 = INT32_MAX;
	int8_t x488 = -1;

	t98 = ((x485<x486)*(x487*x488));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x494 = UINT64_MAX;
	static int8_t x495 = INT8_MIN;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t99 = -873839;

	t99 = ((x493<x494)*(x495*x496));

	if (t99 != -8388480) { NG(); } else { ; }
	
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

