#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = INT64_MAX;
int8_t x12 = -1;
int32_t t2 = -3563942;
static int32_t t3 = 468708736;
static int32_t x18 = 149;
static volatile int32_t t4 = -255;
static volatile int8_t x27 = INT8_MIN;
uint8_t x28 = UINT8_MAX;
static int32_t t6 = 78994;
static int16_t x30 = INT16_MIN;
int16_t x32 = INT16_MIN;
uint8_t x36 = 124U;
int8_t x38 = INT8_MIN;
volatile int16_t x43 = INT16_MIN;
int32_t t13 = -72643;
volatile uint8_t x60 = 22U;
int32_t t14 = -7;
int8_t x64 = INT8_MIN;
volatile int32_t t18 = -87267553;
int32_t x77 = -1;
volatile int32_t t19 = 337604;
int64_t x83 = 31739812633LL;
int64_t x85 = INT64_MAX;
static volatile uint64_t x90 = 33839219329259LLU;
volatile uint32_t x99 = UINT32_MAX;
volatile int8_t x102 = -1;
static int32_t t25 = 499;
int32_t x110 = -2;
uint32_t x114 = UINT32_MAX;
int32_t x115 = -1;
int32_t t28 = -93473722;
volatile int32_t t29 = -1;
uint64_t x125 = 53LLU;
static uint8_t x129 = 1U;
uint8_t x135 = 5U;
int32_t x143 = 284126483;
uint32_t x144 = 6U;
int64_t x153 = -1LL;
int32_t x157 = INT32_MIN;
static volatile int32_t x158 = -1;
uint64_t x159 = UINT64_MAX;
int64_t x161 = -1LL;
uint8_t x163 = 28U;
int64_t x164 = 205889323694966LL;
static volatile int32_t t40 = 49;
volatile uint32_t x169 = 20880U;
static int16_t x170 = INT16_MIN;
int16_t x173 = -209;
volatile int32_t x176 = INT32_MIN;
int16_t x182 = INT16_MIN;
volatile int8_t x183 = 2;
int16_t x191 = -1;
int16_t x193 = INT16_MAX;
int64_t x197 = INT64_MAX;
volatile int32_t t52 = 0;
volatile int16_t x215 = INT16_MIN;
static volatile int32_t t54 = 63225498;
uint16_t x226 = 1U;
uint8_t x233 = UINT8_MAX;
volatile int32_t t58 = -15;
int16_t x248 = INT16_MAX;
uint16_t x251 = UINT16_MAX;
int64_t x254 = INT64_MIN;
volatile int16_t x257 = -415;
volatile int16_t x263 = INT16_MIN;
volatile int32_t t65 = -6;
int64_t x266 = INT64_MIN;
uint16_t x269 = UINT16_MAX;
static volatile int32_t t68 = 65;
uint16_t x278 = 1U;
int8_t x281 = 1;
int32_t t72 = 180;
static int32_t x304 = -1;
int8_t x306 = INT8_MIN;
static int64_t x309 = INT64_MAX;
int32_t t77 = 22;
int16_t x317 = INT16_MIN;
static int8_t x318 = INT8_MIN;
int8_t x320 = -1;
volatile uint32_t x321 = 137U;
uint64_t x327 = 857263510LLU;
static uint32_t x328 = UINT32_MAX;
volatile int32_t t82 = -3954;
int32_t t83 = 10;
int32_t x337 = INT32_MIN;
volatile uint64_t x338 = UINT64_MAX;
static int32_t t89 = 55772447;
static uint16_t x365 = 56U;
static volatile int32_t t93 = 28914;
uint64_t x379 = UINT64_MAX;
volatile int32_t t95 = -101;
int32_t x387 = 420946;
volatile int32_t t96 = 1905;
int16_t x395 = INT16_MIN;
int32_t x400 = INT32_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 109273083644768LLU;
	static volatile int32_t x3 = 599;
	static uint8_t x4 = 20U;
	int32_t t0 = 0;

	t0 = (((x1==x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -9222501LL;
	static int32_t x6 = INT32_MIN;
	static uint32_t x7 = 446796173U;
	int32_t x8 = -347308;
	volatile int32_t t1 = -2;

	t1 = (((x5==x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int64_t x11 = -247035714345LL;

	t2 = (((x9==x10)^x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	static int64_t x16 = INT64_MIN;

	t3 = (((x13==x14)^x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1493U;
	volatile uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MAX;

	t4 = (((x17==x18)^x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	static int32_t x22 = 7764431;
	int16_t x23 = INT16_MIN;
	static int8_t x24 = -1;
	volatile int32_t t5 = -3671052;

	t5 = (((x21==x22)^x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile uint8_t x26 = UINT8_MAX;

	t6 = (((x25==x26)^x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -50570293081070162LL;
	uint64_t x31 = 4804LLU;
	int32_t t7 = -14036013;

	t7 = (((x29==x30)^x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = -7;
	int8_t x35 = INT8_MIN;
	volatile int32_t t8 = 0;

	t8 = (((x33==x34)^x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x39 = UINT8_MAX;
	volatile int16_t x40 = 19;
	int32_t t9 = 10;

	t9 = (((x37==x38)^x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	volatile int16_t x42 = -2210;
	static volatile int8_t x44 = -1;
	volatile int32_t t10 = -1;

	t10 = (((x41==x42)^x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 86257;
	int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MIN;
	static volatile int64_t x48 = INT64_MAX;
	int32_t t11 = -60283303;

	t11 = (((x45==x46)^x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -7999938912LL;
	uint8_t x50 = UINT8_MAX;
	uint64_t x51 = 207091LLU;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 315696071;

	t12 = (((x49==x50)^x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 0U;
	int8_t x54 = INT8_MAX;
	static int64_t x55 = -80402575LL;
	int64_t x56 = INT64_MAX;

	t13 = (((x53==x54)^x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	uint64_t x58 = 0LLU;
	int32_t x59 = INT32_MIN;

	t14 = (((x57==x58)^x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1;
	uint8_t x62 = 6U;
	uint16_t x63 = 20679U;
	int32_t t15 = 0;

	t15 = (((x61==x62)^x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 66251462LLU;
	static volatile int32_t x66 = INT32_MIN;
	static int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -100;

	t16 = (((x65==x66)^x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	static int64_t x70 = INT64_MAX;
	int8_t x71 = -1;
	volatile uint32_t x72 = 2034049U;
	static volatile int32_t t17 = 74923345;

	t17 = (((x69==x70)^x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 574LLU;
	volatile int32_t x74 = -5596543;
	static volatile int8_t x75 = -1;
	int64_t x76 = INT64_MIN;

	t18 = (((x73==x74)^x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MAX;
	static int64_t x80 = 155613158426581LL;

	t19 = (((x77==x78)^x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 519826959646LLU;
	static volatile int32_t x82 = 22709153;
	int16_t x84 = 2;
	int32_t t20 = 1;

	t20 = (((x81==x82)^x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -3883;

	t21 = (((x85==x86)^x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = 257423U;
	int64_t x91 = INT64_MAX;
	int8_t x92 = -1;
	int32_t t22 = -168191;

	t22 = (((x89==x90)^x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -1;

	t23 = (((x93==x94)^x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = UINT16_MAX;
	static int8_t x100 = INT8_MIN;
	int32_t t24 = -4;

	t24 = (((x97==x98)^x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x103 = INT16_MAX;
	int64_t x104 = -324628358LL;

	t25 = (((x101==x102)^x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = UINT64_MAX;
	uint32_t x106 = 1380109U;
	int8_t x107 = INT8_MIN;
	uint64_t x108 = 1396LLU;
	int32_t t26 = -1;

	t26 = (((x105==x106)^x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x109 = 1427885348U;
	volatile int32_t x111 = -1;
	static int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 375094204;

	t27 = (((x109==x110)^x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint64_t x116 = 973LLU;

	t28 = (((x113==x114)^x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = -1;
	int8_t x119 = INT8_MAX;
	int8_t x120 = 1;

	t29 = (((x117==x118)^x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint8_t x122 = 4U;
	int32_t x123 = -1;
	uint8_t x124 = 1U;
	volatile int32_t t30 = 591473;

	t30 = (((x121==x122)^x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = 15653;
	uint8_t x127 = 4U;
	int64_t x128 = INT64_MIN;
	static int32_t t31 = 721210;

	t31 = (((x125==x126)^x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MAX;
	static volatile int64_t x131 = -15LL;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t32 = 1713528;

	t32 = (((x129==x130)^x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static int32_t x134 = INT32_MIN;
	static int8_t x136 = INT8_MIN;
	int32_t t33 = -6238;

	t33 = (((x133==x134)^x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	static int8_t x138 = INT8_MAX;
	int32_t x139 = INT32_MAX;
	static int8_t x140 = 53;
	static int32_t t34 = -602727064;

	t34 = (((x137==x138)^x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int16_t x142 = 5;
	volatile int32_t t35 = -450056;

	t35 = (((x141==x142)^x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 98856260581LLU;
	int16_t x146 = -1;
	static volatile int32_t x147 = -228163;
	uint16_t x148 = 6U;
	volatile int32_t t36 = 31565;

	t36 = (((x145==x146)^x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	volatile int64_t x150 = INT64_MIN;
	uint8_t x151 = 26U;
	static int32_t x152 = INT32_MAX;
	int32_t t37 = 12;

	t37 = (((x149==x150)^x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MIN;
	int32_t x156 = -86738394;
	static int32_t t38 = 2690;

	t38 = (((x153==x154)^x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x160 = UINT64_MAX;
	int32_t t39 = 35611;

	t39 = (((x157==x158)^x159)==x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 194418876777292LLU;

	t40 = (((x161==x162)^x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 10LLU;
	int8_t x166 = INT8_MAX;
	static volatile int32_t x167 = -587494790;
	int16_t x168 = -2;
	int32_t t41 = -45816;

	t41 = (((x165==x166)^x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x171 = UINT32_MAX;
	int8_t x172 = 6;
	int32_t t42 = 22;

	t42 = (((x169==x170)^x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -16261273;
	volatile int8_t x175 = 10;
	int32_t t43 = -708159944;

	t43 = (((x173==x174)^x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 1U;
	int8_t x178 = INT8_MIN;
	int64_t x179 = -43861636987LL;
	uint8_t x180 = 4U;
	volatile int32_t t44 = 3;

	t44 = (((x177==x178)^x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 8U;
	int16_t x184 = 0;
	static volatile int32_t t45 = -431;

	t45 = (((x181==x182)^x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = 0;
	volatile int32_t t46 = 542;

	t46 = (((x185==x186)^x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 2799555LLU;
	int8_t x190 = INT8_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t47 = 82;

	t47 = (((x189==x190)^x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x194 = 58LLU;
	uint16_t x195 = 233U;
	int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 615613596;

	t48 = (((x193==x194)^x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = UINT16_MAX;
	volatile uint32_t x199 = 673325353U;
	int32_t x200 = INT32_MIN;
	int32_t t49 = -5303009;

	t49 = (((x197==x198)^x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	volatile uint16_t x202 = UINT16_MAX;
	volatile int64_t x203 = -1LL;
	uint16_t x204 = 0U;
	volatile int32_t t50 = -484448;

	t50 = (((x201==x202)^x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = 372228310338133321LL;
	static int32_t x206 = 261738606;
	static uint64_t x207 = 0LLU;
	uint8_t x208 = 78U;
	volatile int32_t t51 = 9592;

	t51 = (((x205==x206)^x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 3U;
	int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = 9866153LLU;
	static uint64_t x212 = 11534932613142LLU;

	t52 = (((x209==x210)^x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MIN;
	volatile int8_t x216 = -1;
	volatile int32_t t53 = -1340767;

	t53 = (((x213==x214)^x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -245011909114546124LL;
	volatile int64_t x218 = INT64_MAX;
	uint8_t x219 = 14U;
	static uint8_t x220 = 9U;

	t54 = (((x217==x218)^x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MAX;
	volatile int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MAX;
	static volatile int32_t t55 = -1;

	t55 = (((x221==x222)^x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -1;
	uint8_t x227 = 21U;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 50;

	t56 = (((x225==x226)^x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	static volatile int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MAX;
	int32_t x232 = 3;
	int32_t t57 = -3;

	t57 = (((x229==x230)^x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x234 = 2381U;
	static volatile int32_t x235 = -156;
	int16_t x236 = -646;

	t58 = (((x233==x234)^x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = INT32_MAX;
	volatile int32_t t59 = 384003;

	t59 = (((x237==x238)^x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 51891;
	volatile int64_t x242 = INT64_MAX;
	static uint64_t x243 = 3863478747LLU;
	volatile uint64_t x244 = 9420207LLU;
	int32_t t60 = 438751;

	t60 = (((x241==x242)^x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = UINT64_MAX;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 7U;
	int32_t t61 = 0;

	t61 = (((x245==x246)^x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 252LLU;
	static int8_t x250 = -1;
	static int64_t x252 = 1LL;
	volatile int32_t t62 = 12;

	t62 = (((x249==x250)^x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 405315LLU;
	int64_t x255 = -5053568037897231LL;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 130038;

	t63 = (((x253==x254)^x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MAX;
	int32_t x260 = -1;
	volatile int32_t t64 = -9;

	t64 = (((x257==x258)^x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -55;
	volatile int64_t x262 = 13878340385386LL;
	uint16_t x264 = 29208U;

	t65 = (((x261==x262)^x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 9;
	uint16_t x267 = 23320U;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = -1;

	t66 = (((x265==x266)^x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = 51;
	int32_t x271 = 1922;
	volatile int16_t x272 = -2225;
	volatile int32_t t67 = -521637298;

	t67 = (((x269==x270)^x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 4191U;
	int8_t x274 = 45;
	int16_t x275 = INT16_MIN;
	volatile int32_t x276 = -63731507;

	t68 = (((x273==x274)^x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = UINT32_MAX;
	int16_t x279 = -1;
	uint64_t x280 = 932LLU;
	int32_t t69 = 0;

	t69 = (((x277==x278)^x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 110LLU;
	int16_t x284 = INT16_MAX;
	volatile int32_t t70 = 98;

	t70 = (((x281==x282)^x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = 99;
	int64_t x287 = -32867617169LL;
	uint32_t x288 = 11579U;
	volatile int32_t t71 = 58498;

	t71 = (((x285==x286)^x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 2762U;
	static int64_t x290 = INT64_MIN;
	static volatile int16_t x291 = INT16_MAX;
	int8_t x292 = 25;

	t72 = (((x289==x290)^x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = 238001LL;
	int16_t x294 = 98;
	int16_t x295 = INT16_MIN;
	int32_t x296 = -1;
	int32_t t73 = 2;

	t73 = (((x293==x294)^x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = -11190486LL;
	uint8_t x298 = 1U;
	static int8_t x299 = 56;
	static volatile uint16_t x300 = 13U;
	volatile int32_t t74 = -19159;

	t74 = (((x297==x298)^x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MAX;
	static volatile int32_t x303 = -1;
	static volatile int32_t t75 = 260038;

	t75 = (((x301==x302)^x303)==x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int8_t x307 = 2;
	int16_t x308 = -3992;
	static int32_t t76 = -334;

	t76 = (((x305==x306)^x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 84U;
	static volatile uint32_t x311 = 10893U;
	int16_t x312 = INT16_MAX;

	t77 = (((x309==x310)^x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 2598;
	int8_t x314 = 1;
	static uint16_t x315 = UINT16_MAX;
	uint16_t x316 = 2U;
	int32_t t78 = -2824522;

	t78 = (((x313==x314)^x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x319 = INT32_MIN;
	int32_t t79 = 113;

	t79 = (((x317==x318)^x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = 95;
	static uint32_t x323 = 237U;
	volatile int16_t x324 = INT16_MIN;
	int32_t t80 = -16;

	t80 = (((x321==x322)^x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 1;
	volatile int64_t x326 = -1LL;
	static int32_t t81 = 2;

	t81 = (((x325==x326)^x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	static int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;

	t82 = (((x329==x330)^x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = 1;
	uint32_t x335 = 12933U;
	uint8_t x336 = 61U;

	t83 = (((x333==x334)^x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x339 = -22;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -280;

	t84 = (((x337==x338)^x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = 679;
	uint64_t x342 = 32660617692006936LLU;
	uint8_t x343 = 13U;
	static int8_t x344 = -1;
	static volatile int32_t t85 = 29;

	t85 = (((x341==x342)^x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = -1;
	uint32_t x346 = 18324201U;
	uint16_t x347 = UINT16_MAX;
	volatile int8_t x348 = -23;
	int32_t t86 = -793;

	t86 = (((x345==x346)^x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 295U;
	int8_t x350 = 58;
	uint16_t x351 = 14777U;
	uint32_t x352 = 268142U;
	int32_t t87 = -43250;

	t87 = (((x349==x350)^x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static uint8_t x354 = 3U;
	int32_t x355 = 1;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = -1196648;

	t88 = (((x353==x354)^x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = 261912005523341312LL;
	static uint64_t x358 = UINT64_MAX;
	static uint64_t x359 = UINT64_MAX;
	volatile int8_t x360 = -1;

	t89 = (((x357==x358)^x359)==x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -17842429002270LL;
	volatile int16_t x362 = -1;
	uint16_t x363 = 2806U;
	uint64_t x364 = UINT64_MAX;
	static int32_t t90 = 1562559;

	t90 = (((x361==x362)^x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MAX;
	volatile uint32_t x367 = UINT32_MAX;
	uint16_t x368 = 357U;
	volatile int32_t t91 = 71915976;

	t91 = (((x365==x366)^x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = 151533250672697LLU;
	static volatile uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	static int32_t t92 = 35347855;

	t92 = (((x369==x370)^x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 855116052195LLU;
	uint8_t x374 = 23U;
	static int64_t x375 = -7288554LL;
	int16_t x376 = INT16_MIN;

	t93 = (((x373==x374)^x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -1;
	int16_t x378 = 142;
	static int16_t x380 = INT16_MIN;
	int32_t t94 = -170969;

	t94 = (((x377==x378)^x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	uint8_t x382 = 49U;
	int64_t x383 = INT64_MIN;
	volatile int16_t x384 = 0;

	t95 = (((x381==x382)^x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 6353U;
	static int8_t x386 = INT8_MAX;
	uint16_t x388 = 3775U;

	t96 = (((x385==x386)^x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 0;
	volatile uint32_t x390 = 11U;
	volatile int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MAX;
	static volatile int32_t t97 = 16647250;

	t97 = (((x389==x390)^x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 7558U;
	static volatile uint64_t x394 = UINT64_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t98 = -38383;

	t98 = (((x393==x394)^x395)==x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MIN;
	volatile int64_t x399 = 36348713455040LL;
	static volatile int32_t t99 = -40854276;

	t99 = (((x397==x398)^x399)==x400);

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

