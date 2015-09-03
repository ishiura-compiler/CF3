#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 97038750LLU;
static int32_t x4 = INT32_MIN;
int32_t x5 = -1;
int16_t x6 = INT16_MIN;
int32_t t1 = -1736785;
volatile int32_t t2 = 0;
uint8_t x17 = UINT8_MAX;
uint16_t x19 = 17U;
volatile int32_t x20 = -12580;
volatile uint32_t x23 = UINT32_MAX;
int32_t x26 = 15735211;
int32_t x29 = -1;
int32_t x31 = INT32_MAX;
volatile int64_t x36 = 230498995903426LL;
static int32_t t9 = -55918;
volatile int32_t t13 = -187326000;
static int32_t x57 = -1;
volatile int8_t x59 = INT8_MIN;
int32_t t14 = 0;
static int8_t x65 = 1;
int16_t x68 = INT16_MAX;
int32_t x72 = INT32_MAX;
int16_t x73 = INT16_MIN;
volatile int32_t t18 = 82588006;
int16_t x80 = -140;
static int16_t x97 = 8;
uint32_t x104 = 25803U;
int16_t x105 = -1;
int64_t x106 = INT64_MIN;
volatile int32_t t26 = 75821176;
int8_t x112 = -2;
int32_t x116 = 3;
int16_t x122 = -3;
static int32_t x124 = -9497443;
volatile int32_t t31 = 9;
static int32_t t32 = 5476;
int8_t x142 = -1;
int8_t x145 = INT8_MIN;
volatile int32_t x148 = INT32_MAX;
int32_t x149 = -522210;
uint32_t x155 = 1250U;
int8_t x157 = 54;
volatile uint64_t x160 = UINT64_MAX;
int8_t x161 = INT8_MAX;
static int8_t x181 = INT8_MAX;
static int8_t x184 = 2;
static int32_t t45 = -504;
int16_t x185 = 0;
volatile int32_t t46 = -112830730;
static int16_t x190 = INT16_MAX;
int32_t t47 = 0;
int64_t x195 = -3017LL;
uint64_t x198 = 42999LLU;
volatile int32_t t50 = 214481;
int32_t t51 = -342321;
uint32_t x218 = UINT32_MAX;
int8_t x224 = INT8_MIN;
volatile int32_t t56 = -15317696;
static int64_t x246 = -1287936405LL;
int32_t t61 = -1;
uint64_t x254 = 436LLU;
int8_t x256 = INT8_MIN;
int16_t x258 = 0;
volatile uint32_t x262 = UINT32_MAX;
int32_t x264 = -1;
volatile int32_t x272 = INT32_MIN;
static volatile int32_t t68 = -39232;
int8_t x277 = INT8_MAX;
int32_t t69 = 97967;
static uint32_t x281 = 1435952U;
int8_t x284 = 0;
static int16_t x295 = INT16_MIN;
uint64_t x298 = 97904887823143LLU;
static int8_t x299 = 0;
int32_t t74 = -14062;
uint8_t x304 = 125U;
static volatile int32_t t75 = 0;
volatile int32_t x306 = INT32_MIN;
static int8_t x310 = INT8_MAX;
int64_t x313 = INT64_MIN;
int64_t x315 = -1LL;
int8_t x323 = -1;
int64_t x324 = -122125579LL;
int64_t x325 = INT64_MAX;
static uint64_t x329 = UINT64_MAX;
static uint16_t x330 = 8045U;
int16_t x332 = 0;
int16_t x333 = INT16_MIN;
static int32_t t83 = 40680;
static uint8_t x338 = 1U;
uint64_t x339 = UINT64_MAX;
int8_t x341 = -1;
int32_t x346 = -1;
static int16_t x356 = 475;
int64_t x360 = INT64_MIN;
volatile int32_t t91 = 23859091;
int16_t x369 = INT16_MAX;
static uint8_t x375 = 0U;
static volatile int16_t x383 = INT16_MAX;
static uint16_t x386 = UINT16_MAX;
static int16_t x394 = 67;


void f0(void) {
	static int32_t x1 = -1;
	uint8_t x2 = 0U;
	volatile int32_t t0 = -114;

	t0 = (((x1<x2)*x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MIN;

	t1 = (((x5<x6)*x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = UINT32_MAX;
	uint64_t x10 = 2089348305023678313LLU;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -10;

	t2 = (((x9<x10)*x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = UINT16_MAX;
	static int64_t x15 = INT64_MIN;
	int8_t x16 = -26;
	volatile int32_t t3 = -1;

	t3 = (((x13<x14)*x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 319811881U;
	int32_t t4 = 243798;

	t4 = (((x17<x18)*x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3U;
	int32_t x22 = INT32_MIN;
	uint8_t x24 = 57U;
	static volatile int32_t t5 = 1;

	t5 = (((x21<x22)*x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 0U;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = -4;
	int32_t t6 = 995;

	t6 = (((x25<x26)*x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	static uint8_t x32 = 1U;
	static int32_t t7 = -3;

	t7 = (((x29<x30)*x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint16_t x34 = 2U;
	uint16_t x35 = UINT16_MAX;
	static volatile int32_t t8 = 14;

	t8 = (((x33<x34)*x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	static uint8_t x40 = 0U;

	t9 = (((x37<x38)*x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -26;
	uint32_t x42 = 586717897U;
	uint8_t x43 = 52U;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = -21;

	t10 = (((x41<x42)*x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = INT32_MIN;
	uint16_t x46 = 9U;
	static int8_t x47 = -1;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -13;

	t11 = (((x45<x46)*x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static int64_t x50 = INT64_MAX;
	static int32_t x51 = 1;
	static volatile int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -771740;

	t12 = (((x49<x50)*x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 0;
	uint16_t x54 = 24677U;
	static uint16_t x55 = 38U;
	int32_t x56 = 32469961;

	t13 = (((x53<x54)*x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 119U;
	int32_t x60 = INT32_MAX;

	t14 = (((x57<x58)*x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 1129910U;
	int8_t x62 = INT8_MIN;
	static uint8_t x63 = 4U;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = 1;

	t15 = (((x61<x62)*x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x66 = 9U;
	uint8_t x67 = 13U;
	volatile int32_t t16 = -128;

	t16 = (((x65<x66)*x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -30;
	uint64_t x70 = 90609545LLU;
	int8_t x71 = INT8_MAX;
	volatile int32_t t17 = 8;

	t17 = (((x69<x70)*x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	uint8_t x75 = 2U;
	static uint16_t x76 = UINT16_MAX;

	t18 = (((x73<x74)*x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile int32_t x78 = -1;
	static volatile int32_t x79 = 402979;
	static volatile int32_t t19 = 991787612;

	t19 = (((x77<x78)*x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	volatile int16_t x82 = 572;
	uint8_t x83 = 30U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 0;

	t20 = (((x81<x82)*x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1;
	int32_t x86 = INT32_MIN;
	volatile uint32_t x87 = 2011481715U;
	int64_t x88 = -43195309823158025LL;
	int32_t t21 = -10299;

	t21 = (((x85<x86)*x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int32_t x90 = INT32_MIN;
	static int16_t x91 = INT16_MAX;
	int8_t x92 = 8;
	volatile int32_t t22 = 80218009;

	t22 = (((x89<x90)*x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MAX;
	uint32_t x96 = 47111858U;
	int32_t t23 = 97377;

	t23 = (((x93<x94)*x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;
	volatile int32_t t24 = -5511;

	t24 = (((x97<x98)*x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 1U;
	volatile int32_t t25 = -312450465;

	t25 = (((x101<x102)*x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = INT8_MAX;
	volatile int8_t x108 = -1;

	t26 = (((x105<x106)*x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	volatile int32_t t27 = -1013839;

	t27 = (((x109<x110)*x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	uint32_t x114 = UINT32_MAX;
	volatile int8_t x115 = INT8_MAX;
	volatile int32_t t28 = 1;

	t28 = (((x113<x114)*x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	static int8_t x119 = INT8_MAX;
	int8_t x120 = 1;
	volatile int32_t t29 = 1072;

	t29 = (((x117<x118)*x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x121 = 17134090319104LLU;
	uint16_t x123 = 10U;
	int32_t t30 = -266187685;

	t30 = (((x121<x122)*x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x126 = INT16_MAX;
	uint8_t x127 = 1U;
	uint16_t x128 = 247U;

	t31 = (((x125<x126)*x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	volatile int16_t x130 = 127;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MAX;

	t32 = (((x129<x130)*x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	int8_t x134 = -16;
	static uint16_t x135 = 540U;
	static uint16_t x136 = 12U;
	static volatile int32_t t33 = -752823;

	t33 = (((x133<x134)*x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 11916U;
	static uint16_t x138 = 15U;
	uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 46U;
	volatile int32_t t34 = 973282;

	t34 = (((x137<x138)*x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 31646100503LLU;
	static int64_t x143 = -2357190945390LL;
	int64_t x144 = INT64_MIN;
	int32_t t35 = -148799;

	t35 = (((x141<x142)*x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	int32_t t36 = -96;

	t36 = (((x145<x146)*x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x150 = INT8_MAX;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -13924;

	t37 = (((x149<x150)*x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int32_t x154 = 988737868;
	static uint64_t x156 = 8792LLU;
	int32_t t38 = 3206236;

	t38 = (((x153<x154)*x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x158 = 65U;
	static int32_t x159 = -1;
	int32_t t39 = -809768541;

	t39 = (((x157<x158)*x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MAX;
	int8_t x163 = -1;
	int16_t x164 = -1840;
	volatile int32_t t40 = -3955803;

	t40 = (((x161<x162)*x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 25330232817LLU;
	int64_t x166 = INT64_MAX;
	volatile uint64_t x167 = UINT64_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -14122;

	t41 = (((x165<x166)*x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = INT8_MAX;
	int16_t x171 = INT16_MAX;
	static int32_t x172 = -1;
	int32_t t42 = 20;

	t42 = (((x169<x170)*x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	int16_t x175 = -1;
	int64_t x176 = -1LL;
	int32_t t43 = -238386;

	t43 = (((x173<x174)*x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 105255279733LLU;
	uint64_t x178 = 5630126LLU;
	static uint8_t x179 = 1U;
	volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -480178;

	t44 = (((x177<x178)*x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = -3;
	static uint8_t x183 = 111U;

	t45 = (((x181<x182)*x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x186 = UINT16_MAX;
	static uint16_t x187 = 12U;
	int64_t x188 = INT64_MAX;

	t46 = (((x185<x186)*x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 222512787334255741LL;
	uint16_t x191 = UINT16_MAX;
	volatile int16_t x192 = -1;

	t47 = (((x189<x190)*x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 0;
	uint8_t x194 = 1U;
	static int32_t x196 = -5511992;
	static int32_t t48 = -1;

	t48 = (((x193<x194)*x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int64_t x199 = -1LL;
	int8_t x200 = INT8_MIN;
	int32_t t49 = 344877;

	t49 = (((x197<x198)*x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 5625637LLU;
	int16_t x202 = -3787;
	int8_t x203 = INT8_MAX;
	uint16_t x204 = 10U;

	t50 = (((x201<x202)*x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	volatile int32_t x206 = INT32_MIN;
	static int8_t x207 = INT8_MIN;
	uint8_t x208 = UINT8_MAX;

	t51 = (((x205<x206)*x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	uint32_t x210 = 57132U;
	uint8_t x211 = 76U;
	int8_t x212 = INT8_MIN;
	int32_t t52 = 53247;

	t52 = (((x209<x210)*x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 1U;
	int64_t x214 = INT64_MIN;
	volatile int64_t x215 = INT64_MIN;
	int16_t x216 = -1;
	volatile int32_t t53 = -19;

	t53 = (((x213<x214)*x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 649132U;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = -1708;
	static volatile int32_t t54 = -104;

	t54 = (((x217<x218)*x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = 16;
	int32_t x223 = -1;
	static int32_t t55 = -126803;

	t55 = (((x221<x222)*x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -73086295;
	static volatile int64_t x226 = -34193244LL;
	int64_t x227 = -1293759731977792184LL;
	int8_t x228 = -7;

	t56 = (((x225<x226)*x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	int8_t x230 = -6;
	static int64_t x231 = INT64_MIN;
	static int16_t x232 = INT16_MIN;
	int32_t t57 = 48;

	t57 = (((x229<x230)*x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -387463472748LL;
	uint8_t x234 = 16U;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 2U;
	volatile int32_t t58 = -175827;

	t58 = (((x233<x234)*x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int8_t x238 = INT8_MIN;
	volatile uint16_t x239 = UINT16_MAX;
	uint16_t x240 = 2U;
	static int32_t t59 = -37951;

	t59 = (((x237<x238)*x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	int16_t x242 = -1;
	int32_t x243 = -1;
	int32_t x244 = -188180;
	volatile int32_t t60 = -7577;

	t60 = (((x241<x242)*x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -3501300681009398624LL;
	static uint64_t x247 = 74628963856913982LLU;
	uint8_t x248 = UINT8_MAX;

	t61 = (((x245<x246)*x247)<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	static uint32_t x250 = 28495U;
	uint8_t x251 = 14U;
	int32_t x252 = INT32_MAX;
	volatile int32_t t62 = 10523;

	t62 = (((x249<x250)*x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 3U;
	static volatile int8_t x255 = INT8_MIN;
	volatile int32_t t63 = -6;

	t63 = (((x253<x254)*x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x259 = INT16_MAX;
	int16_t x260 = -1;
	volatile int32_t t64 = 2724;

	t64 = (((x257<x258)*x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x263 = -3796LL;
	int32_t t65 = -12145625;

	t65 = (((x261<x262)*x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	static int64_t x266 = -1LL;
	uint16_t x267 = 38U;
	int32_t x268 = 125394423;
	volatile int32_t t66 = 10828;

	t66 = (((x265<x266)*x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 1523561LLU;
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = INT64_MIN;
	int32_t t67 = -267173;

	t67 = (((x269<x270)*x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -1;
	uint32_t x274 = 19514885U;
	volatile int8_t x275 = -1;
	static int16_t x276 = INT16_MIN;

	t68 = (((x273<x274)*x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x278 = 1;
	int16_t x279 = INT16_MIN;
	static int64_t x280 = -1LL;

	t69 = (((x277<x278)*x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	volatile int64_t x283 = INT64_MAX;
	volatile int32_t t70 = 1239;

	t70 = (((x281<x282)*x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = -1LL;
	static int64_t x286 = -1LL;
	int8_t x287 = -5;
	static int32_t x288 = -1;
	volatile int32_t t71 = -9226;

	t71 = (((x285<x286)*x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = -45;
	int64_t x290 = -8LL;
	int16_t x291 = 50;
	int32_t x292 = INT32_MAX;
	int32_t t72 = -12911;

	t72 = (((x289<x290)*x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MAX;
	static uint8_t x294 = UINT8_MAX;
	int8_t x296 = 13;
	volatile int32_t t73 = 64956367;

	t73 = (((x293<x294)*x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = -85576788990LL;
	int16_t x300 = INT16_MIN;

	t74 = (((x297<x298)*x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	static int8_t x302 = 0;
	uint8_t x303 = UINT8_MAX;

	t75 = (((x301<x302)*x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	uint8_t x307 = 1U;
	int64_t x308 = INT64_MAX;
	volatile int32_t t76 = -3331;

	t76 = (((x305<x306)*x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int32_t x311 = -1;
	int32_t x312 = 42946;
	volatile int32_t t77 = -215;

	t77 = (((x309<x310)*x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x314 = UINT8_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = 47433786;

	t78 = (((x313<x314)*x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 7;
	int32_t x318 = 0;
	int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t79 = 838;

	t79 = (((x317<x318)*x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -1;
	volatile int8_t x322 = INT8_MIN;
	volatile int32_t t80 = 657858;

	t80 = (((x321<x322)*x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -6453;
	int8_t x327 = INT8_MAX;
	static int64_t x328 = 6713269LL;
	volatile int32_t t81 = -1016;

	t81 = (((x325<x326)*x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x331 = 54LL;
	volatile int32_t t82 = 53394678;

	t82 = (((x329<x330)*x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MIN;
	int8_t x335 = 0;
	uint32_t x336 = UINT32_MAX;

	t83 = (((x333<x334)*x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 3;
	static int64_t x340 = -1LL;
	int32_t t84 = 1706251;

	t84 = (((x337<x338)*x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -6772LL;
	uint16_t x343 = 1U;
	volatile uint8_t x344 = 1U;
	static int32_t t85 = -23382340;

	t85 = (((x341<x342)*x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 17U;
	int64_t x347 = 375678286801971769LL;
	volatile int64_t x348 = -6321LL;
	static int32_t t86 = 57;

	t86 = (((x345<x346)*x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	uint16_t x350 = 1238U;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -1021817291;

	t87 = (((x349<x350)*x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 1U;
	static int8_t x354 = 10;
	static int32_t x355 = -7032094;
	static int32_t t88 = -14846;

	t88 = (((x353<x354)*x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -113LL;
	int32_t x358 = -7912905;
	volatile int16_t x359 = INT16_MAX;
	static volatile int32_t t89 = 911440;

	t89 = (((x357<x358)*x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static int64_t x362 = -1LL;
	static int32_t x363 = -1;
	int64_t x364 = 17734124LL;
	volatile int32_t t90 = 39183091;

	t90 = (((x361<x362)*x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = 13U;
	int16_t x368 = INT16_MAX;

	t91 = (((x365<x366)*x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = -1;
	static int32_t x371 = INT32_MAX;
	int64_t x372 = -1LL;
	int32_t t92 = -25;

	t92 = (((x369<x370)*x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x376 = -4;
	static int32_t t93 = 4182297;

	t93 = (((x373<x374)*x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = 2;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -5364886;

	t94 = (((x377<x378)*x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	static int64_t x382 = -3647558017495535LL;
	volatile uint64_t x384 = 163LLU;
	int32_t t95 = 462;

	t95 = (((x381<x382)*x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int16_t x387 = INT16_MAX;
	volatile int32_t x388 = -491189061;
	static volatile int32_t t96 = 1930;

	t96 = (((x385<x386)*x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -188;
	static int32_t x390 = INT32_MIN;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = -59LL;
	int32_t t97 = -198;

	t97 = (((x389<x390)*x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -21;
	volatile uint64_t x395 = 355762485481276LLU;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 28;

	t98 = (((x393<x394)*x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint64_t x398 = 15829LLU;
	int16_t x399 = -1;
	static int64_t x400 = -42910172899893998LL;
	volatile int32_t t99 = -27850;

	t99 = (((x397<x398)*x399)<=x400);

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

