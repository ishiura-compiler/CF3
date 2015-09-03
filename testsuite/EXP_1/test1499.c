#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
volatile int64_t x6 = INT64_MIN;
int16_t x9 = -1;
static volatile uint8_t x17 = 10U;
int8_t x18 = INT8_MAX;
int32_t x19 = INT32_MAX;
volatile uint64_t x20 = 16682216445953441LLU;
static int32_t x25 = 958753;
uint16_t x30 = UINT16_MAX;
uint8_t x41 = 3U;
volatile int64_t t10 = -1654311205521411878LL;
int64_t x48 = INT64_MAX;
int8_t x54 = INT8_MAX;
volatile uint32_t t12 = 270U;
int64_t x57 = -36LL;
volatile int8_t x64 = INT8_MIN;
int8_t x74 = INT8_MIN;
volatile uint64_t t18 = 404LLU;
int64_t x84 = -1LL;
volatile int64_t t19 = 3162780LL;
static int64_t x90 = INT64_MIN;
int32_t x91 = -304;
uint32_t x97 = 466457U;
int32_t x99 = -392;
volatile int32_t x117 = -1;
int64_t x122 = -64466LL;
int32_t t27 = -15514;
int64_t x126 = INT64_MIN;
int16_t x133 = INT16_MIN;
uint64_t x139 = UINT64_MAX;
int32_t x144 = INT32_MIN;
static volatile int8_t x145 = INT8_MIN;
int32_t x149 = INT32_MIN;
int32_t x152 = INT32_MIN;
uint16_t x154 = 7U;
uint64_t t35 = 17LLU;
static int64_t x159 = INT64_MIN;
uint8_t x174 = UINT8_MAX;
volatile int32_t t40 = -2;
uint64_t x177 = 9746LLU;
volatile int64_t t41 = -506LL;
volatile int8_t x186 = -1;
volatile uint8_t x187 = UINT8_MAX;
int16_t x196 = -1;
int32_t x204 = INT32_MIN;
int32_t t47 = -22;
volatile uint64_t x206 = UINT64_MAX;
static int64_t x211 = INT64_MAX;
int16_t x218 = 21;
uint8_t x235 = 22U;
volatile int64_t t55 = 480LL;
static int16_t x239 = 1;
volatile uint16_t x243 = UINT16_MAX;
int16_t x246 = INT16_MAX;
static uint64_t x250 = UINT64_MAX;
int64_t x258 = -729599497702147316LL;
uint8_t x261 = 56U;
volatile int32_t x264 = INT32_MIN;
volatile uint16_t x266 = 0U;
static int64_t x270 = -1LL;
int64_t x271 = -1LL;
int8_t x276 = 11;
int64_t t64 = -117864665406349LL;
int8_t x281 = INT8_MAX;
int8_t x284 = INT8_MIN;
int16_t x290 = -2;
int8_t x295 = INT8_MIN;
static uint8_t x296 = 2U;
static int32_t t67 = 2;
int16_t x299 = INT16_MAX;
int8_t x303 = -13;
int8_t x311 = INT8_MIN;
volatile uint32_t t70 = 90821703U;
volatile uint64_t t72 = 5083982807920176LLU;
volatile int16_t x329 = 1;
uint8_t x344 = 4U;
uint16_t x345 = 5U;
int16_t x348 = -139;
int16_t x352 = INT16_MIN;
volatile uint32_t x356 = 46U;
int8_t x358 = INT8_MIN;
static int32_t t81 = -37141238;
int64_t t82 = -22068LL;
volatile uint16_t x367 = 16U;
static uint64_t x376 = 40LLU;
int16_t x379 = INT16_MIN;
volatile uint32_t x380 = 165758U;
volatile int32_t t87 = 1;
uint32_t x390 = UINT32_MAX;
static volatile uint64_t t89 = 385994416937398LLU;
int16_t x397 = -25;
int32_t t91 = 57840;
int64_t x402 = INT64_MAX;
static uint32_t x403 = UINT32_MAX;
int32_t t96 = -2244;
int64_t x421 = -24034024643690834LL;
uint16_t x431 = 476U;
volatile int64_t x432 = -1LL;


void f0(void) {
	int32_t x1 = -1;
	volatile uint64_t x2 = 220560LLU;
	uint64_t x3 = 6983LLU;
	uint64_t t0 = 271652753985001809LLU;

	t0 = (((x1<x2)|x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	volatile uint32_t x7 = 817642U;
	int16_t x8 = INT16_MIN;
	uint32_t t1 = 26U;

	t1 = (((x5<x6)|x7)/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -1;
	uint16_t x11 = 1481U;
	static int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 922091330173647549LL;

	t2 = (((x9<x10)|x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = -60;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 269;

	t3 = (((x13<x14)|x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t t4 = 306563LLU;

	t4 = (((x17<x18)|x19)/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = 1699082;
	uint32_t x22 = UINT32_MAX;
	int16_t x23 = -230;
	volatile int32_t x24 = 19;
	int32_t t5 = -2;

	t5 = (((x21<x22)|x23)/x24);

	if (t5 != -12) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	volatile uint64_t x27 = 270LLU;
	int16_t x28 = INT16_MAX;
	volatile uint64_t t6 = 6213795686511866144LLU;

	t6 = (((x25<x26)|x27)/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x31 = UINT16_MAX;
	static int16_t x32 = 1;
	int32_t t7 = 25;

	t7 = (((x29<x30)|x31)/x32);

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int16_t x34 = 15;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = -1;
	static int32_t t8 = -1;

	t8 = (((x33<x34)|x35)/x36);

	if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 7;
	int64_t x38 = INT64_MIN;
	int8_t x39 = 6;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -452986128;

	t9 = (((x37<x38)|x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = 117234LLU;
	volatile int32_t x43 = INT32_MIN;
	static int64_t x44 = INT64_MIN;

	t10 = (((x41<x42)|x43)/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = 1;
	int16_t x46 = INT16_MIN;
	int32_t x47 = -18750040;
	volatile int64_t t11 = 13471846255LL;

	t11 = (((x45<x46)|x47)/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = -1;

	t12 = (((x53<x54)|x55)/x56);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = 1;
	static int64_t x59 = -52527LL;
	volatile int64_t x60 = -2017888886LL;
	volatile int64_t t13 = -67792LL;

	t13 = (((x57<x58)|x59)/x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = 7;
	int16_t x63 = INT16_MAX;
	volatile int32_t t14 = 0;

	t14 = (((x61<x62)|x63)/x64);

	if (t14 != -255) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = INT8_MAX;
	uint16_t x66 = 3010U;
	int16_t x67 = INT16_MAX;
	static int64_t x68 = -1LL;
	volatile int64_t t15 = -69002650298LL;

	t15 = (((x65<x66)|x67)/x68);

	if (t15 != -32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 0LLU;
	int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MIN;
	static volatile int64_t x72 = INT64_MIN;
	int64_t t16 = 3396204LL;

	t16 = (((x69<x70)|x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MIN;
	static int64_t t17 = 302242783128213592LL;

	t17 = (((x73<x74)|x75)/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = 8844496717LLU;
	int32_t x80 = INT32_MIN;

	t18 = (((x77<x78)|x79)/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = -1;
	int32_t x82 = INT32_MIN;
	int64_t x83 = -1LL;

	t19 = (((x81<x82)|x83)/x84);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -80LL;
	volatile int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = INT64_MAX;
	volatile int64_t t20 = 0LL;

	t20 = (((x85<x86)|x87)/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	int16_t x92 = 587;
	volatile int32_t t21 = -15;

	t21 = (((x89<x90)|x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	volatile uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t22 = 113;

	t22 = (((x93<x94)|x95)/x96);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t23 = -8;

	t23 = (((x97<x98)|x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -211590380LL;
	int8_t x106 = 0;
	int32_t x107 = INT32_MIN;
	uint32_t x108 = 4641U;
	volatile uint32_t t24 = 3847575U;

	t24 = (((x105<x106)|x107)/x108);

	if (t24 != 462720U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 0U;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MIN;
	uint64_t t25 = 15809191730134LLU;

	t25 = (((x113<x114)|x115)/x116);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x118 = 0;
	int8_t x119 = 0;
	uint32_t x120 = 424U;
	static uint32_t t26 = 3U;

	t26 = (((x117<x118)|x119)/x120);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = 1;
	uint8_t x123 = 1U;
	uint16_t x124 = 21U;

	t27 = (((x121<x122)|x123)/x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x125 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	int32_t t28 = -7;

	t28 = (((x125<x126)|x127)/x128);

	if (t28 != 65536) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 176297898;
	uint16_t x130 = 219U;
	int16_t x131 = INT16_MIN;
	static int8_t x132 = -1;
	static volatile int32_t t29 = -366428971;

	t29 = (((x129<x130)|x131)/x132);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x134 = INT8_MAX;
	int8_t x135 = 2;
	static uint32_t x136 = UINT32_MAX;
	volatile uint32_t t30 = 272496441U;

	t30 = (((x133<x134)|x135)/x136);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x137 = -1;
	int64_t x138 = -1LL;
	int16_t x140 = INT16_MIN;
	uint64_t t31 = 758723670119583895LLU;

	t31 = (((x137<x138)|x139)/x140);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = -1LL;
	int8_t x143 = INT8_MIN;
	int32_t t32 = 15874;

	t32 = (((x141<x142)|x143)/x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = INT8_MAX;
	int8_t x147 = INT8_MAX;
	volatile int64_t x148 = 2328671700LL;
	static volatile int64_t t33 = 45884LL;

	t33 = (((x145<x146)|x147)/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = 0;
	int8_t x151 = INT8_MAX;
	int32_t t34 = -102435970;

	t34 = (((x149<x150)|x151)/x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = -1;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;

	t35 = (((x153<x154)|x155)/x156);

	if (t35 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = UINT32_MAX;
	int64_t x158 = INT64_MIN;
	static int16_t x160 = INT16_MIN;
	static int64_t t36 = 1LL;

	t36 = (((x157<x158)|x159)/x160);

	if (t36 != 281474976710656LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = -772;
	uint64_t x162 = 43523897LLU;
	volatile int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t37 = 351;

	t37 = (((x161<x162)|x163)/x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 38832349LLU;
	int64_t x166 = INT64_MIN;
	volatile uint8_t x167 = 21U;
	volatile uint64_t x168 = 2031LLU;
	volatile uint64_t t38 = 1331LLU;

	t38 = (((x165<x166)|x167)/x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = INT8_MAX;
	static uint32_t x171 = UINT32_MAX;
	int32_t x172 = INT32_MIN;
	static volatile uint32_t t39 = 21157U;

	t39 = (((x169<x170)|x171)/x172);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MAX;
	volatile int8_t x175 = INT8_MAX;
	int16_t x176 = -1;

	t40 = (((x173<x174)|x175)/x176);

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x178 = 29038722051449LLU;
	int16_t x179 = INT16_MAX;
	int64_t x180 = INT64_MAX;

	t41 = (((x177<x178)|x179)/x180);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = 1003553733;
	int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MIN;
	volatile int64_t x184 = 932303LL;
	volatile int64_t t42 = -16LL;

	t42 = (((x181<x182)|x183)/x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t43 = -3823196;

	t43 = (((x185<x186)|x187)/x188);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -21;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = 4158846U;
	int64_t x192 = -28135933146688LL;
	int64_t t44 = -1499076664857LL;

	t44 = (((x189<x190)|x191)/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MAX;
	int64_t x194 = INT64_MAX;
	int64_t x195 = 306388922486LL;
	static int64_t t45 = 1LL;

	t45 = (((x193<x194)|x195)/x196);

	if (t45 != -306388922487LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 36272689815LLU;
	static int16_t x200 = INT16_MIN;
	uint64_t t46 = 17814788858LLU;

	t46 = (((x197<x198)|x199)/x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	uint8_t x202 = 3U;
	uint16_t x203 = 15U;

	t47 = (((x201<x202)|x203)/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x205 = INT32_MIN;
	uint8_t x207 = 65U;
	volatile uint64_t x208 = 11563370775LLU;
	uint64_t t48 = 235900581653944LLU;

	t48 = (((x205<x206)|x207)/x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x209 = UINT16_MAX;
	int32_t x210 = INT32_MIN;
	int64_t x212 = 18820959LL;
	volatile int64_t t49 = -1131699531768954039LL;

	t49 = (((x209<x210)|x211)/x212);

	if (t49 != 490058558485LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	uint8_t x214 = UINT8_MAX;
	uint16_t x215 = 231U;
	volatile int64_t x216 = -1LL;
	volatile int64_t t50 = 25050476433586LL;

	t50 = (((x213<x214)|x215)/x216);

	if (t50 != -231LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MAX;
	volatile int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	static int64_t t51 = -94079424695LL;

	t51 = (((x217<x218)|x219)/x220);

	if (t51 != 4294967296LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x221 = INT64_MAX;
	uint64_t x222 = 3192241005548LLU;
	int8_t x223 = INT8_MIN;
	static int64_t x224 = -1LL;
	volatile int64_t t52 = 2319717364LL;

	t52 = (((x221<x222)|x223)/x224);

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = UINT8_MAX;
	uint8_t x227 = 112U;
	uint32_t x228 = UINT32_MAX;
	static volatile uint32_t t53 = 959530U;

	t53 = (((x225<x226)|x227)/x228);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -94;
	uint32_t x230 = 1031338576U;
	volatile int32_t x231 = -1;
	int16_t x232 = 3;
	int32_t t54 = -161709;

	t54 = (((x229<x230)|x231)/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = 1;
	int64_t x234 = INT64_MIN;
	static volatile int64_t x236 = -22LL;

	t55 = (((x233<x234)|x235)/x236);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x237 = 1U;
	static int64_t x238 = INT64_MIN;
	volatile int64_t x240 = INT64_MIN;
	volatile int64_t t56 = -1783601219801079200LL;

	t56 = (((x237<x238)|x239)/x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x241 = INT64_MIN;
	volatile int16_t x242 = INT16_MIN;
	static uint64_t x244 = UINT64_MAX;
	volatile uint64_t t57 = 348213103086946369LLU;

	t57 = (((x241<x242)|x243)/x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x245 = INT8_MIN;
	volatile int8_t x247 = -4;
	volatile uint16_t x248 = 1316U;
	volatile int32_t t58 = -22219;

	t58 = (((x245<x246)|x247)/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 0U;
	static int8_t x251 = 55;
	int32_t x252 = INT32_MAX;
	static volatile int32_t t59 = 1;

	t59 = (((x249<x250)|x251)/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 1U;
	int64_t x259 = 1953121299785LL;
	int8_t x260 = INT8_MAX;
	volatile int64_t t60 = 1896432986540619LL;

	t60 = (((x257<x258)|x259)/x260);

	if (t60 != 15378907872LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x262 = 5U;
	volatile uint8_t x263 = UINT8_MAX;
	int32_t t61 = 471;

	t61 = (((x261<x262)|x263)/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x265 = UINT64_MAX;
	int16_t x267 = INT16_MAX;
	int16_t x268 = -1;
	volatile int32_t t62 = -2;

	t62 = (((x265<x266)|x267)/x268);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -237134071987886LL;
	int64_t x272 = INT64_MIN;
	int64_t t63 = 2732523121LL;

	t63 = (((x269<x270)|x271)/x272);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = 43LL;
	uint8_t x274 = UINT8_MAX;
	volatile int64_t x275 = -73373212LL;

	t64 = (((x273<x274)|x275)/x276);

	if (t64 != -6670291LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x282 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	volatile int32_t t65 = -170242;

	t65 = (((x281<x282)|x283)/x284);

	if (t65 != 16777216) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = 0U;
	volatile int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MAX;
	volatile int64_t t66 = 491LL;

	t66 = (((x289<x290)|x291)/x292);

	if (t66 != -4294967298LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x293 = 0U;
	int8_t x294 = -21;

	t67 = (((x293<x294)|x295)/x296);

	if (t67 != -64) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x297 = INT32_MIN;
	volatile int16_t x298 = INT16_MAX;
	volatile int16_t x300 = -1;
	static int32_t t68 = 167077;

	t68 = (((x297<x298)|x299)/x300);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint64_t x304 = 79969882LLU;
	uint64_t t69 = 471418LLU;

	t69 = (((x301<x302)|x303)/x304);

	if (t69 != 230671142839LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x309 = UINT32_MAX;
	volatile uint32_t x310 = 100930U;
	static uint32_t x312 = 1017U;

	t70 = (((x309<x310)|x311)/x312);

	if (t70 != 4223173U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x313 = 68U;
	int8_t x314 = -1;
	static int8_t x315 = 0;
	volatile int32_t x316 = -767720209;
	int32_t t71 = 57421265;

	t71 = (((x313<x314)|x315)/x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MAX;
	uint16_t x318 = 23U;
	volatile int16_t x319 = 568;
	static uint64_t x320 = 109083LLU;

	t72 = (((x317<x318)|x319)/x320);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = INT8_MIN;
	volatile int8_t x326 = 5;
	uint64_t x327 = 783731479710989582LLU;
	volatile int32_t x328 = INT32_MIN;
	uint64_t t73 = 66956605847700LLU;

	t73 = (((x325<x326)|x327)/x328);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x330 = INT16_MAX;
	uint8_t x331 = UINT8_MAX;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t74 = 69514LLU;

	t74 = (((x329<x330)|x331)/x332);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x333 = INT64_MAX;
	volatile uint16_t x334 = UINT16_MAX;
	static uint8_t x335 = 6U;
	volatile uint64_t x336 = 19331760547190326LLU;
	static volatile uint64_t t75 = 517329657LLU;

	t75 = (((x333<x334)|x335)/x336);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = UINT32_MAX;
	static uint16_t x338 = UINT16_MAX;
	uint32_t x339 = 42252U;
	int32_t x340 = -778717;
	uint32_t t76 = 354697852U;

	t76 = (((x337<x338)|x339)/x340);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x341 = 967784601661709076LLU;
	uint16_t x342 = 455U;
	int16_t x343 = 488;
	static int32_t t77 = -61332973;

	t77 = (((x341<x342)|x343)/x344);

	if (t77 != 122) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x346 = INT32_MIN;
	static uint8_t x347 = 39U;
	volatile int32_t t78 = 690916390;

	t78 = (((x345<x346)|x347)/x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = 937U;
	uint16_t x350 = 45U;
	uint16_t x351 = 1750U;
	static volatile int32_t t79 = -1;

	t79 = (((x349<x350)|x351)/x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x353 = 2310806166108659123LL;
	int64_t x354 = -1LL;
	uint8_t x355 = UINT8_MAX;
	uint32_t t80 = 266U;

	t80 = (((x353<x354)|x355)/x356);

	if (t80 != 5U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x357 = 994422772U;
	static uint8_t x359 = 6U;
	volatile int8_t x360 = INT8_MIN;

	t81 = (((x357<x358)|x359)/x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x361 = -1;
	int8_t x362 = INT8_MIN;
	volatile int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;

	t82 = (((x361<x362)|x363)/x364);

	if (t82 != 281474976710656LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x365 = INT8_MIN;
	uint32_t x366 = 379062U;
	int64_t x368 = -4919505334LL;
	int64_t t83 = -4355805516949404LL;

	t83 = (((x365<x366)|x367)/x368);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = 8351;
	int16_t x370 = -177;
	static volatile int16_t x371 = INT16_MAX;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t84 = -1606;

	t84 = (((x369<x370)|x371)/x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -1;
	static volatile int64_t x374 = -1749965829090216598LL;
	int32_t x375 = INT32_MIN;
	volatile uint64_t t85 = 288569LLU;

	t85 = (((x373<x374)|x375)/x376);

	if (t85 != 461168601789051699LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = INT8_MIN;
	static volatile uint32_t t86 = 18165U;

	t86 = (((x377<x378)|x379)/x380);

	if (t86 != 25910U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x381 = UINT32_MAX;
	uint16_t x382 = 2189U;
	int32_t x383 = 19266183;
	volatile uint16_t x384 = 11967U;

	t87 = (((x381<x382)|x383)/x384);

	if (t87 != 1609) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x385 = -1;
	uint8_t x386 = 43U;
	static int16_t x387 = INT16_MAX;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t88 = 3652;

	t88 = (((x385<x386)|x387)/x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x389 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 5740516LLU;

	t89 = (((x389<x390)|x391)/x392);

	if (t89 != 3213429606600LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x393 = INT32_MAX;
	uint8_t x394 = 4U;
	int8_t x395 = -12;
	int32_t x396 = INT32_MIN;
	int32_t t90 = -2178;

	t90 = (((x393<x394)|x395)/x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x398 = -1;
	uint16_t x399 = 21088U;
	int32_t x400 = INT32_MIN;

	t91 = (((x397<x398)|x399)/x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = 2047U;
	int64_t x404 = 52LL;
	static int64_t t92 = 1LL;

	t92 = (((x401<x402)|x403)/x404);

	if (t92 != 82595524LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = INT32_MIN;
	static int64_t x406 = 91323535265277745LL;
	int64_t x407 = 854LL;
	int8_t x408 = 3;
	volatile int64_t t93 = 7257248LL;

	t93 = (((x405<x406)|x407)/x408);

	if (t93 != 285LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = 1;
	int16_t x410 = INT16_MAX;
	uint16_t x411 = 0U;
	int32_t x412 = -1;
	int32_t t94 = -45;

	t94 = (((x409<x410)|x411)/x412);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x413 = 33059U;
	static int32_t x414 = -1;
	volatile uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MIN;
	int64_t t95 = -45LL;

	t95 = (((x413<x414)|x415)/x416);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x417 = INT8_MIN;
	int16_t x418 = -2;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;

	t96 = (((x417<x418)|x419)/x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x422 = 49U;
	uint64_t x423 = UINT64_MAX;
	int8_t x424 = -1;
	uint64_t t97 = 14370823LLU;

	t97 = (((x421<x422)|x423)/x424);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = 7U;
	int8_t x426 = -1;
	static volatile uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = INT32_MIN;
	uint64_t t98 = 1384020085207203LLU;

	t98 = (((x425<x426)|x427)/x428);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = 73U;
	uint64_t x430 = 243443437550481LLU;
	volatile int64_t t99 = 29565205616895813LL;

	t99 = (((x429<x430)|x431)/x432);

	if (t99 != -477LL) { NG(); } else { ; }
	
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

