#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint64_t x2 = UINT64_MAX;
int64_t t0 = 1LL;
int32_t x9 = 38624;
uint16_t x11 = UINT16_MAX;
uint16_t x24 = 2U;
volatile int64_t x27 = INT64_MIN;
int32_t x30 = INT32_MAX;
static uint16_t x44 = UINT16_MAX;
uint32_t x46 = 3U;
int64_t x47 = -7766LL;
uint16_t x51 = UINT16_MAX;
int32_t x54 = -62666;
int64_t x55 = -8065913794LL;
static volatile int32_t x57 = -1;
int16_t x59 = INT16_MIN;
int64_t t15 = -4376023079308450LL;
int8_t x69 = INT8_MAX;
static int64_t t17 = 15263939252647878LL;
int16_t x78 = 8454;
static int8_t x80 = INT8_MIN;
int64_t x89 = -5009241733275LL;
uint8_t x90 = 36U;
uint8_t x92 = 1U;
int64_t x93 = INT64_MAX;
volatile int16_t x94 = INT16_MIN;
int8_t x100 = -11;
int32_t t26 = 1020;
volatile uint16_t x119 = 181U;
int32_t x129 = INT32_MAX;
uint64_t x131 = 52461346976LLU;
int32_t x132 = INT32_MIN;
static volatile uint64_t t31 = 72979647LLU;
int16_t x133 = INT16_MAX;
int8_t x138 = -1;
static int64_t x139 = INT64_MAX;
int64_t x144 = 477645LL;
volatile int32_t t36 = 815;
volatile int64_t t39 = -3141073891LL;
int32_t x166 = -1;
static uint64_t x175 = 1876LLU;
volatile int8_t x188 = INT8_MIN;
static uint32_t x201 = 115U;
int32_t x202 = INT32_MIN;
volatile int32_t t49 = -4;
uint8_t x209 = 50U;
static volatile int64_t x221 = INT64_MIN;
volatile int8_t x222 = INT8_MIN;
volatile int32_t x226 = -1;
int8_t x227 = -1;
uint8_t x229 = UINT8_MAX;
volatile int32_t t57 = -7241491;
uint16_t x241 = UINT16_MAX;
uint8_t x242 = 41U;
int32_t t59 = 308358283;
int8_t x247 = 1;
volatile int32_t t62 = -27856988;
volatile int64_t t63 = -362628550672LL;
int8_t x261 = 0;
volatile int8_t x271 = -1;
static uint8_t x279 = UINT8_MAX;
uint32_t x292 = 509U;
uint64_t t70 = 773092941519075LLU;
int64_t x294 = -1LL;
uint32_t x301 = 24267U;
volatile uint8_t x302 = UINT8_MAX;
volatile int32_t t77 = 36842050;
int64_t x325 = 1798234LL;
int16_t x331 = -1;
uint8_t x333 = 1U;
static int16_t x339 = INT16_MIN;
int32_t x343 = -1;
static volatile uint8_t x348 = UINT8_MAX;
int16_t x351 = INT16_MAX;
volatile int32_t t85 = -1;
uint32_t x356 = 92730491U;
static uint64_t x357 = UINT64_MAX;
static int64_t x358 = INT64_MIN;
int32_t t87 = 688;
int32_t x363 = -1;
uint32_t x367 = UINT32_MAX;
uint64_t x368 = 101832621659LLU;
int8_t x378 = INT8_MIN;
uint32_t x386 = 0U;
uint8_t x387 = 87U;
int32_t t94 = 2;
int8_t x392 = INT8_MAX;
volatile uint32_t t95 = 91U;
uint32_t x393 = UINT32_MAX;
int32_t x396 = INT32_MIN;
static int32_t x402 = INT32_MAX;
static volatile int64_t x404 = -1776858617049731087LL;
volatile int32_t t99 = 37225;


void f0(void) {
	static int64_t x3 = INT64_MIN;
	int64_t x4 = 447746670LL;

	t0 = ((x1<x2)-(x3/x4));

	if (t0 != 20599532403LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -40;
	static volatile int32_t x6 = 242;
	static uint8_t x7 = 10U;
	static volatile uint8_t x8 = 4U;
	int32_t t1 = 4;

	t1 = ((x5<x6)-(x7/x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = 438100664464LL;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -939031505;

	t2 = ((x9<x10)-(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 226685904U;
	volatile int16_t x14 = -12907;
	uint64_t x15 = 8547259527LLU;
	static int8_t x16 = -1;
	volatile uint64_t t3 = 1037796255104846972LLU;

	t3 = ((x13<x14)-(x15/x16));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	int64_t x18 = 643031541647454140LL;
	int64_t x19 = 7545LL;
	uint64_t x20 = 255288445758596LLU;
	uint64_t t4 = 4087002902301LLU;

	t4 = ((x17<x18)-(x19/x20));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = INT64_MIN;
	uint8_t x22 = 25U;
	volatile int64_t x23 = -1LL;
	int64_t t5 = 257699LL;

	t5 = ((x21<x22)-(x23/x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2856U;
	int16_t x26 = -1;
	int8_t x28 = INT8_MIN;
	volatile int64_t t6 = 0LL;

	t6 = ((x25<x26)-(x27/x28));

	if (t6 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int32_t x31 = 503924254;
	int64_t x32 = 10816315LL;
	static int64_t t7 = -26143LL;

	t7 = ((x29<x30)-(x31/x32));

	if (t7 != -45LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MAX;
	int8_t x34 = -1;
	uint16_t x35 = 1457U;
	uint16_t x36 = 839U;
	volatile int32_t t8 = -3432;

	t8 = ((x33<x34)-(x35/x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int64_t x42 = 497LL;
	uint16_t x43 = UINT16_MAX;
	int32_t t9 = -11413033;

	t9 = ((x41<x42)-(x43/x44));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -252;
	uint16_t x48 = UINT16_MAX;
	static volatile int64_t t10 = 5184LL;

	t10 = ((x45<x46)-(x47/x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 89579316U;
	int8_t x50 = -1;
	int8_t x52 = -1;
	int32_t t11 = 788011999;

	t11 = ((x49<x50)-(x51/x52));

	if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	static int16_t x56 = 360;
	volatile int64_t t12 = 20LL;

	t12 = ((x53<x54)-(x55/x56));

	if (t12 != 22405316LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 596484440U;
	static uint16_t x60 = 3591U;
	static volatile int32_t t13 = -527;

	t13 = ((x57<x58)-(x59/x60));

	if (t13 != 9) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	uint32_t x62 = 884U;
	volatile int8_t x63 = -5;
	int64_t x64 = 1LL;
	static volatile int64_t t14 = -692LL;

	t14 = ((x61<x62)-(x63/x64));

	if (t14 != 5LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 1208904670032452913LLU;
	uint8_t x66 = 99U;
	uint8_t x67 = 26U;
	int64_t x68 = INT64_MAX;

	t15 = ((x65<x66)-(x67/x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = 27;
	volatile uint8_t x71 = UINT8_MAX;
	static int16_t x72 = 972;
	volatile int32_t t16 = 92600;

	t16 = ((x69<x70)-(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -6;
	int16_t x74 = -2358;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;

	t17 = ((x73<x74)-(x75/x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 899U;
	volatile int64_t x79 = -1LL;
	volatile int64_t t18 = 12959064LL;

	t18 = ((x77<x78)-(x79/x80));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -1;
	int8_t x82 = 0;
	uint16_t x83 = 1632U;
	static int64_t x84 = INT64_MIN;
	static int64_t t19 = -27499959860LL;

	t19 = ((x81<x82)-(x83/x84));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 186U;
	static volatile uint16_t x86 = 15445U;
	volatile int8_t x87 = -2;
	int16_t x88 = INT16_MIN;
	int32_t t20 = 139;

	t20 = ((x85<x86)-(x87/x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x91 = -1;
	volatile int32_t t21 = -217363;

	t21 = ((x89<x90)-(x91/x92));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x95 = -1;
	int32_t x96 = INT32_MAX;
	volatile int32_t t22 = -1;

	t22 = ((x93<x94)-(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = UINT8_MAX;
	int16_t x98 = 134;
	int64_t x99 = INT64_MAX;
	int64_t t23 = 49081991851722558LL;

	t23 = ((x97<x98)-(x99/x100));

	if (t23 != 838488366986797800LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	volatile int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	volatile int8_t x104 = -1;
	volatile int32_t t24 = -1;

	t24 = ((x101<x102)-(x103/x104));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = -1;
	uint64_t x106 = 189746565LLU;
	uint64_t x107 = UINT64_MAX;
	int8_t x108 = 25;
	uint64_t t25 = 439001393787LLU;

	t25 = ((x105<x106)-(x107/x108));

	if (t25 != 17708874310761169552LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 98877149242944157LL;
	int8_t x110 = INT8_MIN;
	int32_t x111 = -1;
	uint16_t x112 = 270U;

	t26 = ((x109<x110)-(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = -1;
	static int8_t x114 = -1;
	int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t27 = 20130948;

	t27 = ((x113<x114)-(x115/x116));

	if (t27 != -65536) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	int64_t x120 = INT64_MIN;
	static volatile int64_t t28 = 7580227928411LL;

	t28 = ((x117<x118)-(x119/x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int16_t x122 = 28;
	int8_t x123 = INT8_MAX;
	volatile int8_t x124 = -1;
	volatile int32_t t29 = 396450;

	t29 = ((x121<x122)-(x123/x124));

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 1;
	uint8_t x126 = 5U;
	int16_t x127 = INT16_MIN;
	static volatile int16_t x128 = -1;
	volatile int32_t t30 = -24133;

	t30 = ((x125<x126)-(x127/x128));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MAX;

	t31 = ((x129<x130)-(x131/x132));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MIN;
	static int64_t x135 = 58LL;
	int16_t x136 = 843;
	int64_t t32 = 1017316976045LL;

	t32 = ((x133<x134)-(x135/x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = -1LL;
	int32_t x140 = INT32_MAX;
	int64_t t33 = 4498226559050425518LL;

	t33 = ((x137<x138)-(x139/x140));

	if (t33 != -4294967298LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	int8_t x143 = -1;
	static volatile int64_t t34 = -20LL;

	t34 = ((x141<x142)-(x143/x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = UINT64_MAX;
	uint64_t x146 = 229858301367884022LLU;
	static int16_t x147 = INT16_MAX;
	static int64_t x148 = INT64_MAX;
	static volatile int64_t t35 = -75404037LL;

	t35 = ((x145<x146)-(x147/x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 1;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -2;
	int16_t x152 = -1;

	t36 = ((x149<x150)-(x151/x152));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x153 = -136608832038LL;
	uint32_t x154 = 7427521U;
	int8_t x155 = -1;
	volatile int16_t x156 = INT16_MIN;
	static volatile int32_t t37 = -4;

	t37 = ((x153<x154)-(x155/x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x157 = INT32_MAX;
	uint16_t x158 = UINT16_MAX;
	volatile int64_t x159 = -1LL;
	static uint8_t x160 = UINT8_MAX;
	volatile int64_t t38 = -6615633546LL;

	t38 = ((x157<x158)-(x159/x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x161 = INT32_MAX;
	int64_t x162 = INT64_MAX;
	int8_t x163 = INT8_MAX;
	int64_t x164 = INT64_MIN;

	t39 = ((x161<x162)-(x163/x164));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 1;
	int32_t x167 = INT32_MAX;
	volatile uint8_t x168 = 120U;
	int32_t t40 = 9383;

	t40 = ((x165<x166)-(x167/x168));

	if (t40 != -17895697) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = 162LL;
	volatile int32_t x170 = -447253;
	static int16_t x171 = INT16_MIN;
	static uint8_t x172 = 1U;
	int32_t t41 = 312272;

	t41 = ((x169<x170)-(x171/x172));

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = INT16_MIN;
	static uint8_t x174 = UINT8_MAX;
	int64_t x176 = INT64_MIN;
	volatile uint64_t t42 = 114120277LLU;

	t42 = ((x173<x174)-(x175/x176));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x177 = 39667107073LLU;
	int16_t x178 = -1;
	int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t43 = 1;

	t43 = ((x177<x178)-(x179/x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 23U;
	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = 1886;
	volatile int64_t t44 = -40LL;

	t44 = ((x181<x182)-(x183/x184));

	if (t44 != 4890441164822256LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x185 = 15U;
	volatile uint16_t x186 = 2028U;
	int8_t x187 = INT8_MIN;
	static int32_t t45 = -510701;

	t45 = ((x185<x186)-(x187/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = -1;
	int64_t x190 = INT64_MAX;
	int32_t x191 = -1308491;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t46 = 93628899LL;

	t46 = ((x189<x190)-(x191/x192));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	uint32_t x194 = 1U;
	int64_t x195 = 394963807080169LL;
	int8_t x196 = -1;
	int64_t t47 = -2728955289544569103LL;

	t47 = ((x193<x194)-(x195/x196));

	if (t47 != 394963807080169LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -33;
	volatile int32_t t48 = -60991;

	t48 = ((x197<x198)-(x199/x200));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x203 = UINT8_MAX;
	static int16_t x204 = -3;

	t49 = ((x201<x202)-(x203/x204));

	if (t49 != 86) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = INT8_MIN;
	static int8_t x206 = 36;
	uint32_t x207 = 203421U;
	static int8_t x208 = 1;
	volatile uint32_t t50 = 653666U;

	t50 = ((x205<x206)-(x207/x208));

	if (t50 != 4294763876U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x210 = 112U;
	static int32_t x211 = -1;
	static volatile int8_t x212 = INT8_MIN;
	volatile int32_t t51 = -106834950;

	t51 = ((x209<x210)-(x211/x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = UINT64_MAX;
	int16_t x216 = -281;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x213<x214)-(x215/x216));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x217 = -1;
	static int64_t x218 = -932847351434673055LL;
	static int8_t x219 = -2;
	uint32_t x220 = 22U;
	uint32_t t53 = 7727918U;

	t53 = ((x217<x218)-(x219/x220));

	if (t53 != 4099741510U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x223 = -210;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t54 = 5706180;

	t54 = ((x221<x222)-(x223/x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 6U;
	volatile uint16_t x228 = 820U;
	int32_t t55 = 350;

	t55 = ((x225<x226)-(x227/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x230 = UINT16_MAX;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = -24;
	static uint32_t t56 = 0U;

	t56 = ((x229<x230)-(x231/x232));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	int64_t x234 = -13081LL;
	int16_t x235 = INT16_MIN;
	static int16_t x236 = -28;

	t57 = ((x233<x234)-(x235/x236));

	if (t57 != -1169) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MIN;
	int32_t x239 = -1;
	int64_t x240 = INT64_MIN;
	volatile int64_t t58 = 17825973618LL;

	t58 = ((x237<x238)-(x239/x240));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x243 = 248;
	static uint8_t x244 = 30U;

	t59 = ((x241<x242)-(x243/x244));

	if (t59 != -8) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x245 = 1;
	volatile int8_t x246 = INT8_MAX;
	uint32_t x248 = UINT32_MAX;
	uint32_t t60 = 37U;

	t60 = ((x245<x246)-(x247/x248));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x249 = 2233511U;
	volatile int32_t x250 = -1;
	uint32_t x251 = 808U;
	volatile int8_t x252 = 43;
	volatile uint32_t t61 = 23U;

	t61 = ((x249<x250)-(x251/x252));

	if (t61 != 4294967279U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	static int8_t x255 = -34;
	volatile int32_t x256 = INT32_MIN;

	t62 = ((x253<x254)-(x255/x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MAX;
	int64_t x259 = -79741826484LL;
	int64_t x260 = INT64_MIN;

	t63 = ((x257<x258)-(x259/x260));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = INT32_MIN;
	int64_t x263 = -1102310LL;
	int32_t x264 = 420;
	volatile int64_t t64 = -12871056293684203LL;

	t64 = ((x261<x262)-(x263/x264));

	if (t64 != 2624LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x265 = 19U;
	int32_t x266 = INT32_MAX;
	int16_t x267 = 38;
	static int16_t x268 = INT16_MAX;
	volatile int32_t t65 = 1384;

	t65 = ((x265<x266)-(x267/x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MAX;
	uint32_t x270 = 111U;
	int32_t x272 = 243644449;
	volatile int32_t t66 = 2621995;

	t66 = ((x269<x270)-(x271/x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = -1;
	int16_t x278 = 5013;
	int16_t x280 = INT16_MIN;
	int32_t t67 = -3582751;

	t67 = ((x277<x278)-(x279/x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	volatile uint32_t x282 = UINT32_MAX;
	uint16_t x283 = 254U;
	uint8_t x284 = 1U;
	volatile int32_t t68 = 18;

	t68 = ((x281<x282)-(x283/x284));

	if (t68 != -254) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 11;
	volatile int8_t x286 = 1;
	int8_t x287 = -1;
	uint32_t x288 = 22594U;
	uint32_t t69 = 16U;

	t69 = ((x285<x286)-(x287/x288));

	if (t69 != 4294777203U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = -1LL;
	volatile uint32_t x290 = UINT32_MAX;
	uint64_t x291 = 48LLU;

	t70 = ((x289<x290)-(x291/x292));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x295 = -1LL;
	int32_t x296 = -1;
	volatile int64_t t71 = 2590LL;

	t71 = ((x293<x294)-(x295/x296));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x297 = 925U;
	static int32_t x298 = INT32_MIN;
	uint16_t x299 = 3212U;
	int16_t x300 = -1;
	volatile int32_t t72 = 168;

	t72 = ((x297<x298)-(x299/x300));

	if (t72 != 3212) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x303 = INT16_MAX;
	int8_t x304 = 59;
	static int32_t t73 = 190005;

	t73 = ((x301<x302)-(x303/x304));

	if (t73 != -555) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MAX;
	volatile int32_t x306 = -10883;
	int32_t x307 = -1;
	static int64_t x308 = 58243LL;
	volatile int64_t t74 = 206344552244LL;

	t74 = ((x305<x306)-(x307/x308));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 7U;
	int32_t x310 = INT32_MIN;
	int16_t x311 = -56;
	volatile int8_t x312 = -1;
	static volatile int32_t t75 = 2;

	t75 = ((x309<x310)-(x311/x312));

	if (t75 != -55) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x313 = INT32_MIN;
	int8_t x314 = -1;
	volatile int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t76 = -1;

	t76 = ((x313<x314)-(x315/x316));

	if (t76 != -16777215) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x318 = 109U;
	int8_t x319 = -1;
	volatile int32_t x320 = -321127777;

	t77 = ((x317<x318)-(x319/x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x321 = -1;
	int64_t x322 = INT64_MAX;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = 75;
	volatile int32_t t78 = -166;

	t78 = ((x321<x322)-(x323/x324));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = -23;
	volatile int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	volatile int32_t t79 = -377;

	t79 = ((x325<x326)-(x327/x328));

	if (t79 != 258) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = 1;
	int8_t x330 = 3;
	int8_t x332 = -1;
	static volatile int32_t t80 = -105;

	t80 = ((x329<x330)-(x331/x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x334 = 1006U;
	int64_t x335 = 28434646829239LL;
	int32_t x336 = INT32_MIN;
	int64_t t81 = -57LL;

	t81 = ((x333<x334)-(x335/x336));

	if (t81 != 13241LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x337 = 20638464LLU;
	int16_t x338 = 2840;
	volatile uint32_t x340 = 84U;
	volatile uint32_t t82 = 27012853U;

	t82 = ((x337<x338)-(x339/x340));

	if (t82 != 4243837124U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = INT8_MIN;
	int64_t x344 = INT64_MAX;
	int64_t t83 = -9863666480710888LL;

	t83 = ((x341<x342)-(x343/x344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MAX;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t84 = 14116LLU;

	t84 = ((x345<x346)-(x347/x348));

	if (t84 != 18374403900871474944LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = INT64_MIN;
	volatile int32_t x352 = -1;

	t85 = ((x349<x350)-(x351/x352));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = 4932;
	int16_t x354 = -1;
	int64_t x355 = -1LL;
	int64_t t86 = -881084328246LL;

	t86 = ((x353<x354)-(x355/x356));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x359 = INT16_MIN;
	volatile int8_t x360 = -9;

	t87 = ((x357<x358)-(x359/x360));

	if (t87 != -3640) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MAX;
	static int8_t x362 = 42;
	int32_t x364 = INT32_MIN;
	int32_t t88 = 0;

	t88 = ((x361<x362)-(x363/x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x365 = INT8_MIN;
	volatile int16_t x366 = INT16_MIN;
	static uint64_t t89 = 7365160095LLU;

	t89 = ((x365<x366)-(x367/x368));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = -350398;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -96;
	int64_t t90 = 10579303475965LL;

	t90 = ((x369<x370)-(x371/x372));

	if (t90 != -96076792050570581LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x374 = 0U;
	int32_t x375 = 265053789;
	static uint64_t x376 = 116811LLU;
	volatile uint64_t t91 = 32569375LLU;

	t91 = ((x373<x374)-(x375/x376));

	if (t91 != 18446744073709549348LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MAX;
	volatile int32_t x379 = INT32_MIN;
	static volatile int64_t x380 = INT64_MAX;
	int64_t t92 = -321130LL;

	t92 = ((x377<x378)-(x379/x380));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 879U;
	volatile uint64_t x384 = UINT64_MAX;
	uint64_t t93 = 441311031377485LLU;

	t93 = ((x381<x382)-(x383/x384));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x388 = INT8_MAX;

	t94 = ((x385<x386)-(x387/x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;

	t95 = ((x389<x390)-(x391/x392));

	if (t95 != 4261148656U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	int32_t t96 = -8732471;

	t96 = ((x393<x394)-(x395/x396));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x397 = INT32_MAX;
	int64_t x398 = INT64_MAX;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 1698076009251377255LLU;
	uint64_t t97 = 49730533705LLU;

	t97 = ((x397<x398)-(x399/x400));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x401 = 7U;
	uint32_t x403 = UINT32_MAX;
	volatile int64_t t98 = 242LL;

	t98 = ((x401<x402)-(x403/x404));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x405 = 709U;
	uint8_t x406 = 12U;
	static volatile int32_t x407 = 12526849;
	uint16_t x408 = 516U;

	t99 = ((x405<x406)-(x407/x408));

	if (t99 != -24276) { NG(); } else { ; }
	
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

