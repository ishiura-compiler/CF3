#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 660;
volatile int32_t t0 = 3;
int32_t x5 = -217;
int8_t x9 = INT8_MIN;
volatile int32_t t3 = -3258213;
static int32_t x17 = -1;
int32_t t5 = -208;
int64_t x28 = 244LL;
uint64_t x35 = 18096669105459058LLU;
int16_t x36 = INT16_MAX;
volatile int32_t t8 = 0;
int32_t x40 = -1;
int32_t t9 = 0;
int64_t x41 = INT64_MAX;
uint64_t x43 = 6011214365054LLU;
int8_t x45 = 7;
static int32_t x46 = 1;
int32_t t12 = -5386;
uint64_t x59 = 70641938806276LLU;
int8_t x61 = INT8_MAX;
int16_t x63 = INT16_MIN;
int8_t x67 = INT8_MIN;
volatile int32_t t17 = -95;
static uint32_t x83 = 29958903U;
int16_t x88 = 4267;
int32_t t20 = 108138;
uint64_t x92 = 411391745LLU;
volatile int32_t t23 = -31;
static int8_t x105 = INT8_MIN;
int16_t x106 = -1;
int32_t x107 = -41166876;
int32_t t25 = 360947;
static int16_t x113 = -1;
uint32_t x116 = 117U;
int32_t x123 = -1;
static int8_t x127 = -5;
volatile int64_t x132 = INT64_MIN;
volatile int32_t t31 = -3;
volatile uint64_t x139 = UINT64_MAX;
int8_t x140 = -45;
int64_t x143 = -837152422669414LL;
volatile int32_t t33 = -24;
int64_t x146 = -525075660347835532LL;
volatile int8_t x147 = INT8_MIN;
static int8_t x154 = -16;
static volatile int32_t t36 = 29747406;
static uint32_t x157 = UINT32_MAX;
int64_t x158 = -1LL;
static uint16_t x163 = 15979U;
volatile int32_t x167 = 52;
uint16_t x173 = UINT16_MAX;
int64_t x174 = INT64_MIN;
int64_t x186 = 1LL;
static int32_t t43 = -6381;
static uint32_t x189 = 25U;
volatile int32_t t44 = -28451881;
int32_t x201 = -1;
int32_t t46 = 13;
uint16_t x214 = 1485U;
static volatile int32_t t49 = -186126;
int16_t x218 = INT16_MIN;
uint32_t x219 = UINT32_MAX;
int8_t x222 = INT8_MAX;
int64_t x223 = INT64_MIN;
volatile int32_t t51 = -1;
uint64_t x230 = UINT64_MAX;
static volatile int32_t t54 = 3;
static volatile int32_t t55 = 6;
volatile int32_t t56 = 4323;
volatile int8_t x250 = 3;
int8_t x255 = INT8_MAX;
volatile int32_t x257 = 2375344;
int32_t x261 = INT32_MIN;
int64_t x263 = 2430783516265LL;
int32_t t61 = 6323;
int32_t x266 = INT32_MAX;
int16_t x267 = INT16_MIN;
volatile int64_t x268 = -14326890LL;
uint32_t x277 = 2047432585U;
volatile int32_t t66 = 0;
int64_t x287 = INT64_MIN;
uint64_t x288 = UINT64_MAX;
static uint32_t x293 = 2666U;
int16_t x297 = 15322;
int16_t x299 = 2963;
volatile int16_t x301 = -1;
int64_t x305 = -1LL;
uint64_t x306 = 32626309553LLU;
int32_t x307 = -1898;
volatile int32_t t72 = 5348588;
volatile int32_t t75 = -593222;
volatile int32_t t76 = 7198;
int32_t t78 = 876642888;
volatile int8_t x337 = INT8_MIN;
int32_t t80 = -5914871;
uint32_t x343 = 118725U;
int64_t x345 = -13532716LL;
int64_t x346 = -1LL;
int32_t x348 = -1;
volatile int64_t x349 = INT64_MIN;
int8_t x350 = INT8_MIN;
int16_t x355 = INT16_MIN;
uint64_t x357 = 3085400180611531LLU;
volatile int8_t x363 = INT8_MIN;
int64_t x365 = INT64_MIN;
static int64_t x370 = -1LL;
static int32_t x380 = -20792590;
static uint64_t x381 = UINT64_MAX;
volatile uint8_t x383 = 14U;
static int32_t t93 = -260387;
volatile uint64_t x396 = 3171844765596LLU;
int32_t x398 = INT32_MAX;
uint8_t x407 = UINT8_MAX;
volatile int32_t t98 = 515532;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -1;

	t0 = (x1<((x2^x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = 0;
	int16_t x7 = 1;
	volatile int64_t x8 = -1198090883563676LL;
	volatile int32_t t1 = -42097057;

	t1 = (x5<((x6^x7)/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x10 = 1366826U;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = 1;

	t2 = (x9<((x10^x11)/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 103U;
	int16_t x14 = 0;
	volatile uint8_t x15 = UINT8_MAX;
	static int8_t x16 = 1;

	t3 = (x13<((x14^x15)/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = 1652336777787901LL;
	int16_t x19 = -1;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 4431;

	t4 = (x17<((x18^x19)/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	volatile int16_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	volatile uint8_t x24 = 3U;

	t5 = (x21<((x22^x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	static int32_t t6 = 4692;

	t6 = (x25<((x26^x27)/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 857288626LL;
	uint64_t x30 = 1518111523697LLU;
	int8_t x31 = 15;
	int64_t x32 = INT64_MIN;
	int32_t t7 = 40503407;

	t7 = (x29<((x30^x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int64_t x34 = INT64_MAX;

	t8 = (x33<((x34^x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	uint32_t x38 = UINT32_MAX;
	static uint32_t x39 = 47952861U;

	t9 = (x37<((x38^x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 14;

	t10 = (x41<((x42^x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x47 = 1U;
	int16_t x48 = 196;
	static volatile int32_t t11 = 19532;

	t11 = (x45<((x46^x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 61;
	uint32_t x50 = 3U;
	static int16_t x51 = -1;
	int16_t x52 = -3564;

	t12 = (x49<((x50^x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -3;
	static uint8_t x58 = UINT8_MAX;
	static uint32_t x60 = 170263468U;
	int32_t t13 = -228175;

	t13 = (x57<((x58^x59)/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = -1;
	static uint16_t x64 = 11285U;
	volatile int32_t t14 = -60823385;

	t14 = (x61<((x62^x63)/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = INT8_MAX;
	int8_t x66 = -1;
	int64_t x68 = -1LL;
	static volatile int32_t t15 = 3068;

	t15 = (x65<((x66^x67)/x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	volatile int64_t x72 = -260909679744LL;
	int32_t t16 = 4;

	t16 = (x69<((x70^x71)/x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	static int64_t x74 = 14280784108480881LL;
	volatile int64_t x75 = INT64_MIN;
	static uint32_t x76 = 31145U;

	t17 = (x73<((x74^x75)/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = 2LLU;
	static int32_t x79 = INT32_MIN;
	volatile int16_t x80 = -15831;
	static int32_t t18 = -1;

	t18 = (x77<((x78^x79)/x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -7745;
	int16_t x82 = INT16_MIN;
	int8_t x84 = 59;
	volatile int32_t t19 = -9;

	t19 = (x81<((x82^x83)/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	volatile int32_t x86 = INT32_MIN;
	int32_t x87 = 587;

	t20 = (x85<((x86^x87)/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = -31883748;
	int32_t x90 = 7132115;
	int64_t x91 = INT64_MAX;
	static volatile int32_t t21 = 98706328;

	t21 = (x89<((x90^x91)/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	int32_t x94 = -1;
	uint8_t x95 = 0U;
	int8_t x96 = INT8_MIN;
	int32_t t22 = 3038;

	t22 = (x93<((x94^x95)/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int64_t x98 = 280630398401031689LL;
	static volatile uint16_t x99 = UINT16_MAX;
	int16_t x100 = 176;

	t23 = (x97<((x98^x99)/x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x108 = 724432439;
	int32_t t24 = 28970;

	t24 = (x105<((x106^x107)/x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 7U;
	uint32_t x110 = 289U;
	int8_t x111 = INT8_MAX;
	static uint16_t x112 = 6133U;

	t25 = (x109<((x110^x111)/x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = INT64_MAX;
	volatile int16_t x115 = -1;
	int32_t t26 = -466504;

	t26 = (x113<((x114^x115)/x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = 0LL;
	int32_t x118 = -1;
	int32_t x119 = 22917915;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t27 = -12223;

	t27 = (x117<((x118^x119)/x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = 7517227;
	int64_t x122 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	int32_t t28 = -24;

	t28 = (x121<((x122^x123)/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = 365338U;
	uint64_t x126 = 7178032032525859029LLU;
	int16_t x128 = INT16_MIN;
	int32_t t29 = 3041459;

	t29 = (x125<((x126^x127)/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	int8_t x130 = -1;
	int8_t x131 = 1;
	volatile int32_t t30 = 78;

	t30 = (x129<((x130^x131)/x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = 208790861;
	volatile int64_t x134 = -1798LL;
	static volatile int8_t x135 = 7;
	static int64_t x136 = 374995763638406LL;

	t31 = (x133<((x134^x135)/x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 3901801U;
	int64_t x138 = INT64_MIN;
	int32_t t32 = 55989405;

	t32 = (x137<((x138^x139)/x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -41594;
	volatile int8_t x142 = INT8_MIN;
	volatile int32_t x144 = -47355;

	t33 = (x141<((x142^x143)/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MAX;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t34 = -64894513;

	t34 = (x145<((x146^x147)/x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 213U;
	static int8_t x152 = 7;
	volatile int32_t t35 = -1444;

	t35 = (x149<((x150^x151)/x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = 906LL;
	int16_t x155 = -1;
	int64_t x156 = INT64_MAX;

	t36 = (x153<((x154^x155)/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t37 = -3;

	t37 = (x157<((x158^x159)/x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	volatile int8_t x162 = 0;
	uint8_t x164 = 1U;
	volatile int32_t t38 = 1962286;

	t38 = (x161<((x162^x163)/x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = 1;
	uint32_t x166 = 44672783U;
	volatile uint32_t x168 = 4745365U;
	int32_t t39 = -1;

	t39 = (x165<((x166^x167)/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MAX;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t40 = -1;

	t40 = (x169<((x170^x171)/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x175 = -2;
	volatile uint64_t x176 = 24725493315038926LLU;
	int32_t t41 = -12510424;

	t41 = (x173<((x174^x175)/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x177 = 2448U;
	volatile int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = 102U;
	int32_t t42 = 34152758;

	t42 = (x177<((x178^x179)/x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = INT64_MAX;
	int32_t x187 = 106;
	volatile int16_t x188 = INT16_MAX;

	t43 = (x185<((x186^x187)/x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	int32_t x192 = INT32_MIN;

	t44 = (x189<((x190^x191)/x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x193 = 361256;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MAX;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t45 = 22629883;

	t45 = (x193<((x194^x195)/x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MIN;
	int8_t x204 = -1;

	t46 = (x201<((x202^x203)/x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x205 = 37U;
	int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MAX;
	uint32_t x208 = 2697289U;
	int32_t t47 = 1;

	t47 = (x205<((x206^x207)/x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = INT32_MAX;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 15884LLU;
	int8_t x212 = INT8_MIN;
	volatile int32_t t48 = -468;

	t48 = (x209<((x210^x211)/x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -1;
	int32_t x215 = -1;
	static uint64_t x216 = 353533868403397766LLU;

	t49 = (x213<((x214^x215)/x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MIN;
	int16_t x220 = -1;
	volatile int32_t t50 = -98;

	t50 = (x217<((x218^x219)/x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x221 = INT16_MIN;
	uint32_t x224 = 4793815U;

	t51 = (x221<((x222^x223)/x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MAX;
	volatile uint32_t x226 = UINT32_MAX;
	static int16_t x227 = INT16_MIN;
	static volatile int32_t x228 = INT32_MIN;
	volatile int32_t t52 = 12137;

	t52 = (x225<((x226^x227)/x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x229 = INT16_MIN;
	int16_t x231 = 188;
	volatile uint32_t x232 = 84415U;
	static volatile int32_t t53 = -5453779;

	t53 = (x229<((x230^x231)/x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	volatile int64_t x234 = INT64_MIN;
	uint64_t x235 = 780147LLU;
	static int16_t x236 = INT16_MIN;

	t54 = (x233<((x234^x235)/x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = -5;
	static int64_t x239 = -1LL;
	volatile int16_t x240 = INT16_MIN;

	t55 = (x237<((x238^x239)/x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 0U;
	uint8_t x242 = 0U;
	static volatile int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;

	t56 = (x241<((x242^x243)/x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	uint16_t x247 = 5040U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t57 = -196601;

	t57 = (x245<((x246^x247)/x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x249 = UINT16_MAX;
	int8_t x251 = INT8_MIN;
	static int8_t x252 = -1;
	static volatile int32_t t58 = 246096986;

	t58 = (x249<((x250^x251)/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = INT8_MAX;
	int32_t x254 = INT32_MIN;
	int8_t x256 = INT8_MIN;
	static int32_t t59 = 873419600;

	t59 = (x253<((x254^x255)/x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = 1;
	int8_t x260 = 8;
	int32_t t60 = 8024;

	t60 = (x257<((x258^x259)/x260));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = INT8_MIN;
	int8_t x264 = INT8_MAX;

	t61 = (x261<((x262^x263)/x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = -1;
	int32_t t62 = -111;

	t62 = (x265<((x266^x267)/x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x269 = INT32_MAX;
	uint16_t x270 = UINT16_MAX;
	static int32_t x271 = INT32_MIN;
	uint16_t x272 = UINT16_MAX;
	static volatile int32_t t63 = 702;

	t63 = (x269<((x270^x271)/x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = -26605926605409LL;
	int64_t x276 = INT64_MAX;
	volatile int32_t t64 = 14;

	t64 = (x273<((x274^x275)/x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x278 = INT32_MAX;
	int8_t x279 = 0;
	int32_t x280 = -55249;
	int32_t t65 = -29121739;

	t65 = (x277<((x278^x279)/x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MAX;
	static volatile int16_t x282 = -7554;
	volatile int8_t x283 = -1;
	int32_t x284 = INT32_MIN;

	t66 = (x281<((x282^x283)/x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = 2LLU;
	static int8_t x286 = -2;
	volatile int32_t t67 = 4112340;

	t67 = (x285<((x286^x287)/x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 21611U;
	uint8_t x290 = 6U;
	int32_t x291 = INT32_MIN;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t68 = -160156;

	t68 = (x289<((x290^x291)/x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x294 = INT8_MIN;
	static volatile uint16_t x295 = 322U;
	volatile uint16_t x296 = UINT16_MAX;
	static volatile int32_t t69 = -6;

	t69 = (x293<((x294^x295)/x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x298 = -1;
	static uint32_t x300 = UINT32_MAX;
	volatile int32_t t70 = 7069;

	t70 = (x297<((x298^x299)/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x302 = INT64_MIN;
	static uint8_t x303 = 3U;
	int64_t x304 = 195038020939925LL;
	volatile int32_t t71 = 29;

	t71 = (x301<((x302^x303)/x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x308 = INT8_MIN;

	t72 = (x305<((x306^x307)/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x310 = 1005;
	uint64_t x311 = UINT64_MAX;
	uint8_t x312 = 3U;
	volatile int32_t t73 = -42202924;

	t73 = (x309<((x310^x311)/x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = -3;
	int16_t x315 = -237;
	volatile int16_t x316 = 749;
	volatile int32_t t74 = -4970096;

	t74 = (x313<((x314^x315)/x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = 4102277LL;
	uint8_t x319 = 0U;
	int16_t x320 = INT16_MAX;

	t75 = (x317<((x318^x319)/x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x322 = INT8_MAX;
	static uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MIN;

	t76 = (x321<((x322^x323)/x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = 204;
	int16_t x326 = -1;
	int64_t x327 = -602052LL;
	int32_t x328 = 101;
	volatile int32_t t77 = -258052;

	t77 = (x325<((x326^x327)/x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	uint64_t x330 = 848081887226829LLU;
	static int8_t x331 = 0;
	int16_t x332 = -1;

	t78 = (x329<((x330^x331)/x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -1;
	int16_t x334 = INT16_MIN;
	static uint64_t x335 = UINT64_MAX;
	static int32_t x336 = INT32_MIN;
	int32_t t79 = -1;

	t79 = (x333<((x334^x335)/x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x338 = 52U;
	int32_t x339 = INT32_MAX;
	volatile int64_t x340 = -1LL;

	t80 = (x337<((x338^x339)/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 13886LL;
	int8_t x342 = INT8_MIN;
	uint32_t x344 = 32U;
	volatile int32_t t81 = 1;

	t81 = (x341<((x342^x343)/x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x347 = UINT8_MAX;
	int32_t t82 = 823907;

	t82 = (x345<((x346^x347)/x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x351 = 8;
	uint32_t x352 = 120373722U;
	static volatile int32_t t83 = 1535;

	t83 = (x349<((x350^x351)/x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int32_t x354 = INT32_MIN;
	int32_t x356 = INT32_MIN;
	volatile int32_t t84 = 32863;

	t84 = (x353<((x354^x355)/x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x358 = INT8_MIN;
	uint8_t x359 = 23U;
	volatile int32_t x360 = INT32_MIN;
	int32_t t85 = -750;

	t85 = (x357<((x358^x359)/x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 177392LLU;
	int16_t x362 = 0;
	int16_t x364 = INT16_MIN;
	volatile int32_t t86 = -47;

	t86 = (x361<((x362^x363)/x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = INT64_MAX;
	volatile int16_t x367 = -1;
	int32_t x368 = -62;
	volatile int32_t t87 = -480;

	t87 = (x365<((x366^x367)/x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x369 = INT8_MAX;
	uint32_t x371 = 440388048U;
	static uint32_t x372 = UINT32_MAX;
	volatile int32_t t88 = -296;

	t88 = (x369<((x370^x371)/x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x373 = UINT8_MAX;
	int8_t x374 = -3;
	int32_t x375 = -55;
	int64_t x376 = INT64_MIN;
	volatile int32_t t89 = -71153698;

	t89 = (x373<((x374^x375)/x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x377 = UINT16_MAX;
	volatile int8_t x378 = -5;
	uint8_t x379 = 3U;
	static int32_t t90 = 0;

	t90 = (x377<((x378^x379)/x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x382 = -1;
	int32_t x384 = -1;
	volatile int32_t t91 = -192650;

	t91 = (x381<((x382^x383)/x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int8_t x386 = INT8_MIN;
	volatile int64_t x387 = -4046483408458222LL;
	volatile uint8_t x388 = 37U;
	static int32_t t92 = 101371306;

	t92 = (x385<((x386^x387)/x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = UINT16_MAX;
	int64_t x390 = -138483715089817LL;
	volatile int8_t x391 = -2;
	volatile uint16_t x392 = 23050U;

	t93 = (x389<((x390^x391)/x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	static int64_t x394 = INT64_MIN;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t t94 = 1019305;

	t94 = (x393<((x394^x395)/x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	int8_t x399 = -3;
	int16_t x400 = INT16_MAX;
	static int32_t t95 = 229;

	t95 = (x397<((x398^x399)/x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = 6310988U;
	int32_t x402 = INT32_MIN;
	uint64_t x403 = 1122544LLU;
	static uint32_t x404 = 32161504U;
	volatile int32_t t96 = -125;

	t96 = (x401<((x402^x403)/x404));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MAX;
	uint8_t x406 = UINT8_MAX;
	int64_t x408 = -1LL;
	int32_t t97 = -53777;

	t97 = (x405<((x406^x407)/x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	uint8_t x410 = 0U;
	uint32_t x411 = UINT32_MAX;
	static int16_t x412 = INT16_MIN;

	t98 = (x409<((x410^x411)/x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 9654U;
	uint16_t x414 = 31U;
	uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MIN;
	volatile int32_t t99 = 90;

	t99 = (x413<((x414^x415)/x416));

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

