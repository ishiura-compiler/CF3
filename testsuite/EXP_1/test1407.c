#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 11U;
static volatile int32_t t0 = 1820293;
uint16_t x8 = UINT16_MAX;
uint8_t x9 = UINT8_MAX;
int16_t x16 = INT16_MAX;
int32_t t5 = 87168571;
int16_t x26 = 0;
int16_t x27 = INT16_MIN;
int32_t x28 = INT32_MIN;
static int64_t x38 = 73779817LL;
volatile int64_t x41 = INT64_MIN;
int32_t x42 = INT32_MAX;
int32_t x47 = 57174;
volatile int64_t x60 = INT64_MIN;
int8_t x61 = 3;
static uint32_t x70 = UINT32_MAX;
volatile int64_t x79 = INT64_MIN;
static uint64_t x87 = 180LLU;
volatile uint64_t t21 = 2042578276LLU;
int64_t x93 = -1055070LL;
int64_t t24 = INT64_MIN;
int64_t x108 = -225619406068335411LL;
int8_t x120 = INT8_MIN;
volatile int32_t t27 = 6;
int16_t x121 = 1;
int16_t x131 = -71;
uint64_t x137 = UINT64_MAX;
static volatile uint8_t x139 = 7U;
volatile int32_t t32 = -4137;
int32_t x141 = -116299218;
int64_t t37 = 104LL;
int16_t x161 = INT16_MIN;
volatile int8_t x162 = -1;
uint8_t x163 = UINT8_MAX;
uint32_t x171 = UINT32_MAX;
static uint8_t x181 = 90U;
uint16_t x182 = 498U;
int64_t x188 = INT64_MAX;
int16_t x194 = 122;
uint64_t x195 = 1414297845442LLU;
static volatile uint64_t x197 = UINT64_MAX;
uint64_t x198 = 3827LLU;
uint64_t t47 = 215308066471085LLU;
volatile int64_t x208 = 38040183216255040LL;
volatile uint64_t t51 = 4124LLU;
static uint32_t x218 = UINT32_MAX;
uint16_t x221 = 0U;
uint16_t x228 = UINT16_MAX;
volatile uint32_t t56 = 11121064U;
volatile int32_t x237 = INT32_MIN;
int32_t x243 = -1;
volatile int64_t t61 = 24351593LL;
volatile int8_t x258 = INT8_MIN;
uint64_t t62 = 3392268438495394LLU;
int64_t t64 = -391LL;
static int16_t x272 = INT16_MAX;
int8_t x273 = INT8_MAX;
uint32_t x277 = 1009687542U;
uint64_t x292 = 67223291321335LLU;
int16_t x295 = INT16_MAX;
static uint32_t x297 = 278213U;
int64_t x311 = INT64_MIN;
volatile uint64_t x316 = UINT64_MAX;
uint32_t x321 = 3810U;
int32_t x325 = -1;
uint8_t x329 = 0U;
int8_t x330 = INT8_MIN;
int8_t x343 = -1;
static volatile int32_t t83 = 26;
int32_t x345 = -10525746;
int32_t x350 = -1;
uint16_t x351 = 101U;
int64_t x353 = -1LL;
uint16_t x354 = 1U;
static volatile uint32_t x356 = 5705U;
static uint16_t x357 = 120U;
int64_t x359 = -1641014LL;
int32_t x365 = INT32_MAX;
static int64_t x369 = -38662123828948LL;
static int8_t x370 = INT8_MIN;
static uint64_t x371 = 1787303804711180LLU;
static int16_t x376 = 1;
int32_t x378 = -151;
static volatile uint64_t x382 = 332059LLU;
static int64_t x384 = INT64_MIN;
int8_t x394 = -1;
int8_t x411 = INT8_MIN;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	volatile uint8_t x4 = 126U;

	t0 = (((x1<x2)%x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 87U;
	static int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	static int32_t t1 = 2605;

	t1 = (((x5<x6)%x7)*x8);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	int64_t x11 = INT64_MAX;
	static int32_t x12 = INT32_MIN;
	volatile int64_t t2 = 149163LL;

	t2 = (((x9<x10)%x11)*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 67527842LLU;
	int16_t x14 = INT16_MIN;
	volatile uint8_t x15 = 1U;
	volatile int32_t t3 = -211103181;

	t3 = (((x13<x14)%x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 0;
	uint8_t x18 = 15U;
	int8_t x19 = 16;
	int32_t x20 = -1;
	int32_t t4 = -496;

	t4 = (((x17<x18)%x19)*x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 18430LLU;
	int32_t x22 = INT32_MIN;
	int8_t x23 = -1;
	int8_t x24 = INT8_MIN;

	t5 = (((x21<x22)%x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 44U;
	static volatile int32_t t6 = 1;

	t6 = (((x25<x26)%x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 644;
	int8_t x30 = -1;
	int64_t x31 = -1LL;
	uint16_t x32 = UINT16_MAX;
	int64_t t7 = -387369557480LL;

	t7 = (((x29<x30)%x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 12386763547532552LLU;
	int64_t x34 = -1LL;
	uint32_t x35 = UINT32_MAX;
	volatile uint64_t x36 = 6428288LLU;
	volatile uint64_t t8 = 22294699235LLU;

	t8 = (((x33<x34)%x35)*x36);

	if (t8 != 6428288LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	int64_t x39 = -1LL;
	int32_t x40 = -1;
	static int64_t t9 = -1479007365LL;

	t9 = (((x37<x38)%x39)*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x43 = 9U;
	int32_t x44 = 86161755;
	int32_t t10 = -5393089;

	t10 = (((x41<x42)%x43)*x44);

	if (t10 != 86161755) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -31242879191483LL;
	int16_t x46 = INT16_MIN;
	volatile int16_t x48 = INT16_MAX;
	static volatile int32_t t11 = -260;

	t11 = (((x45<x46)%x47)*x48);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = 10;
	volatile int16_t x54 = -1;
	volatile int64_t x55 = INT64_MAX;
	volatile int64_t x56 = -1LL;
	int64_t t12 = 12568342111488570LL;

	t12 = (((x53<x54)%x55)*x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 7;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	volatile int64_t t13 = 258623173969194LL;

	t13 = (((x57<x58)%x59)*x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = 228927022U;
	int32_t x63 = -954718;
	static uint16_t x64 = 1U;
	int32_t t14 = -35252;

	t14 = (((x61<x62)%x63)*x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	int64_t x66 = -1LL;
	uint32_t x67 = UINT32_MAX;
	int8_t x68 = -1;
	uint32_t t15 = 31449U;

	t15 = (((x65<x66)%x67)*x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = 389U;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 18071U;
	int32_t t16 = -1;

	t16 = (((x69<x70)%x71)*x72);

	if (t16 != 18071) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	volatile int64_t x76 = INT64_MIN;
	int64_t t17 = INT64_MIN;

	t17 = (((x73<x74)%x75)*x76);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 83074129147902084LLU;
	uint32_t x78 = 1256337U;
	static int64_t x80 = -432676611LL;
	static int64_t t18 = 7LL;

	t18 = (((x77<x78)%x79)*x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = -1487LL;
	uint64_t x83 = 7045101LLU;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t19 = 13806LLU;

	t19 = (((x81<x82)%x83)*x84);

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	static uint32_t x86 = 361U;
	int8_t x88 = INT8_MIN;
	uint64_t t20 = 937548966LLU;

	t20 = (((x85<x86)%x87)*x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 5108586380047537747LLU;
	int64_t x90 = -1528957929508046LL;
	uint64_t x91 = 1056881024845LLU;
	int32_t x92 = -5;

	t21 = (((x89<x90)%x91)*x92);

	if (t21 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	static int64_t x95 = INT64_MAX;
	volatile int32_t x96 = 62286470;
	volatile int64_t t22 = -4142440489351362937LL;

	t22 = (((x93<x94)%x95)*x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	static int32_t x98 = INT32_MAX;
	volatile uint64_t x99 = 2219345LLU;
	uint8_t x100 = UINT8_MAX;
	uint64_t t23 = 55500326526213550LLU;

	t23 = (((x97<x98)%x99)*x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	volatile uint16_t x103 = 76U;
	int64_t x104 = INT64_MIN;

	t24 = (((x101<x102)%x103)*x104);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	static uint8_t x106 = 2U;
	volatile int64_t x107 = INT64_MIN;
	int64_t t25 = 96LL;

	t25 = (((x105<x106)%x107)*x108);

	if (t25 != -225619406068335411LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x113 = 161650537222618922LLU;
	static uint8_t x114 = 1U;
	int16_t x115 = 149;
	int64_t x116 = INT64_MAX;
	int64_t t26 = 1LL;

	t26 = (((x113<x114)%x115)*x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = 965631957127137LL;
	uint8_t x118 = 40U;
	uint8_t x119 = UINT8_MAX;

	t27 = (((x117<x118)%x119)*x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = INT16_MIN;
	static int16_t x124 = 1;
	volatile int32_t t28 = -2810004;

	t28 = (((x121<x122)%x123)*x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MIN;
	volatile int8_t x127 = -5;
	uint64_t x128 = 472991262682778LLU;
	volatile uint64_t t29 = 15809965509LLU;

	t29 = (((x125<x126)%x127)*x128);

	if (t29 != 472991262682778LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -569789869317100LL;
	volatile int8_t x130 = INT8_MIN;
	int64_t x132 = INT64_MAX;
	int64_t t30 = INT64_MAX;

	t30 = (((x129<x130)%x131)*x132);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = -1LL;
	uint64_t x135 = 1842733736LLU;
	int16_t x136 = INT16_MAX;
	uint64_t t31 = 3LLU;

	t31 = (((x133<x134)%x135)*x136);

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x138 = -1;
	int32_t x140 = INT32_MIN;

	t32 = (((x137<x138)%x139)*x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = 0U;
	int16_t x143 = -1;
	uint64_t x144 = 49383784622437099LLU;
	volatile uint64_t t33 = 10425862504600LLU;

	t33 = (((x141<x142)%x143)*x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	uint32_t x146 = 233U;
	int8_t x147 = 3;
	int16_t x148 = 2;
	volatile int32_t t34 = 319926;

	t34 = (((x145<x146)%x147)*x148);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 36249131U;
	static int64_t x150 = -54299822468693LL;
	int8_t x151 = -5;
	static int32_t x152 = -2;
	int32_t t35 = -112;

	t35 = (((x149<x150)%x151)*x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 42U;
	uint16_t x154 = 298U;
	int16_t x155 = INT16_MIN;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t36 = UINT32_MAX;

	t36 = (((x153<x154)%x155)*x156);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;

	t37 = (((x157<x158)%x159)*x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x164 = 3;
	int32_t t38 = -884;

	t38 = (((x161<x162)%x163)*x164);

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 2082262;
	volatile int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MIN;
	int16_t x168 = -1;
	int64_t t39 = -55450564635966971LL;

	t39 = (((x165<x166)%x167)*x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x170 = -61468;
	int16_t x172 = 9;
	uint32_t t40 = 1279741859U;

	t40 = (((x169<x170)%x171)*x172);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = 3;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = 135;
	uint32_t t41 = 7U;

	t41 = (((x173<x174)%x175)*x176);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 1U;
	volatile int16_t x179 = INT16_MAX;
	int8_t x180 = -24;
	static int32_t t42 = 0;

	t42 = (((x177<x178)%x179)*x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x183 = INT64_MAX;
	static int16_t x184 = -1;
	static int64_t t43 = -892737318LL;

	t43 = (((x181<x182)%x183)*x184);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = 808U;
	uint8_t x187 = 2U;
	static int64_t t44 = INT64_MAX;

	t44 = (((x185<x186)%x187)*x188);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = UINT8_MAX;
	static int8_t x190 = INT8_MAX;
	int64_t x191 = -1LL;
	int8_t x192 = -1;
	static volatile int64_t t45 = 3745225LL;

	t45 = (((x189<x190)%x191)*x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 4300U;
	int16_t x196 = INT16_MIN;
	uint64_t t46 = 127914LLU;

	t46 = (((x193<x194)%x195)*x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MIN;

	t47 = (((x197<x198)%x199)*x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 0U;
	static int16_t x202 = -1;
	int64_t x203 = -1LL;
	static uint32_t x204 = 527310328U;
	volatile int64_t t48 = 465LL;

	t48 = (((x201<x202)%x203)*x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	static int32_t x206 = -1;
	static volatile int8_t x207 = 40;
	int64_t t49 = -326587549449501524LL;

	t49 = (((x205<x206)%x207)*x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x209 = -137;
	static volatile uint8_t x210 = 2U;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = INT8_MIN;
	static uint64_t t50 = 43LLU;

	t50 = (((x209<x210)%x211)*x212);

	if (t50 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = -1;
	volatile uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 1181359LLU;
	volatile int8_t x216 = INT8_MIN;

	t51 = (((x213<x214)%x215)*x216);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -88;
	static volatile uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MAX;
	int32_t t52 = INT32_MAX;

	t52 = (((x217<x218)%x219)*x220);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x222 = -2690767LL;
	int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t53 = -179092;

	t53 = (((x221<x222)%x223)*x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 13LLU;
	static int32_t x226 = INT32_MAX;
	uint8_t x227 = UINT8_MAX;
	int32_t t54 = 66469160;

	t54 = (((x225<x226)%x227)*x228);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	static volatile uint8_t x230 = 3U;
	volatile int64_t x231 = INT64_MIN;
	volatile int8_t x232 = -1;
	int64_t t55 = 83113143118LL;

	t55 = (((x229<x230)%x231)*x232);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = UINT8_MAX;
	static uint32_t x235 = 30U;
	volatile int16_t x236 = 1;

	t56 = (((x233<x234)%x235)*x236);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = -1;
	int32_t x239 = -1;
	int64_t x240 = 1188661717482417030LL;
	volatile int64_t t57 = -145019510LL;

	t57 = (((x237<x238)%x239)*x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x241 = 15U;
	int32_t x242 = INT32_MAX;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t58 = -3;

	t58 = (((x241<x242)%x243)*x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	volatile int32_t x246 = INT32_MIN;
	uint32_t x247 = 47107U;
	static int64_t x248 = INT64_MIN;
	static int64_t t59 = INT64_MIN;

	t59 = (((x245<x246)%x247)*x248);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x249 = -2667711668025LL;
	int64_t x250 = 48LL;
	int64_t x251 = INT64_MAX;
	volatile int64_t x252 = -1LL;
	volatile int64_t t60 = -1271578LL;

	t60 = (((x249<x250)%x251)*x252);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = 1;
	int32_t x254 = -1;
	static volatile int64_t x255 = -1LL;
	int16_t x256 = -90;

	t61 = (((x253<x254)%x255)*x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	static uint64_t x259 = UINT64_MAX;
	int64_t x260 = 195164LL;

	t62 = (((x257<x258)%x259)*x260);

	if (t62 != 195164LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 1904U;
	int64_t x262 = INT64_MAX;
	int16_t x263 = INT16_MAX;
	static int8_t x264 = -1;
	int32_t t63 = 1028268;

	t63 = (((x261<x262)%x263)*x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x265 = 7278;
	int32_t x266 = INT32_MAX;
	int64_t x267 = 5LL;
	uint16_t x268 = 116U;

	t64 = (((x265<x266)%x267)*x268);

	if (t64 != 116LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = 7;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MAX;
	static volatile int32_t t65 = -87364;

	t65 = (((x269<x270)%x271)*x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x274 = INT64_MAX;
	uint64_t x275 = 30727439LLU;
	uint16_t x276 = 103U;
	volatile uint64_t t66 = 69725991LLU;

	t66 = (((x273<x274)%x275)*x276);

	if (t66 != 103LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x278 = 77;
	volatile int32_t x279 = -1;
	static volatile int16_t x280 = INT16_MIN;
	volatile int32_t t67 = -325791;

	t67 = (((x277<x278)%x279)*x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x281 = 1062386589;
	int16_t x282 = INT16_MIN;
	static int16_t x283 = INT16_MIN;
	static volatile int8_t x284 = INT8_MIN;
	volatile int32_t t68 = 6835;

	t68 = (((x281<x282)%x283)*x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MAX;
	uint64_t x286 = 121817LLU;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t69 = -284810132;

	t69 = (((x285<x286)%x287)*x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 412386226002481LLU;
	volatile uint64_t t70 = 13714485LLU;

	t70 = (((x289<x290)%x291)*x292);

	if (t70 != 67223291321335LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	uint16_t x294 = 13U;
	volatile uint8_t x296 = 107U;
	int32_t t71 = -78091;

	t71 = (((x293<x294)%x295)*x296);

	if (t71 != 107) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x298 = INT16_MAX;
	int64_t x299 = INT64_MIN;
	int8_t x300 = 0;
	int64_t t72 = -21532521LL;

	t72 = (((x297<x298)%x299)*x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = UINT64_MAX;
	static uint64_t x302 = 32877033LLU;
	int64_t x303 = -3527196369718982798LL;
	static uint32_t x304 = 10705U;
	static int64_t t73 = 42425911LL;

	t73 = (((x301<x302)%x303)*x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 12950U;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = INT64_MAX;
	int8_t x308 = -1;
	int64_t t74 = 1881LL;

	t74 = (((x305<x306)%x307)*x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = -1LL;
	uint8_t x310 = 0U;
	static int64_t x312 = 240094143LL;
	static volatile int64_t t75 = 160LL;

	t75 = (((x309<x310)%x311)*x312);

	if (t75 != 240094143LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 329851973093LLU;
	static int64_t x314 = -384LL;
	int16_t x315 = INT16_MIN;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x313<x314)%x315)*x316);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x317 = -1636990383651LL;
	int32_t x318 = INT32_MIN;
	uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t77 = INT64_MIN;

	t77 = (((x317<x318)%x319)*x320);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x322 = UINT32_MAX;
	int8_t x323 = -1;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t78 = -310LL;

	t78 = (((x321<x322)%x323)*x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = 2;
	uint64_t x327 = UINT64_MAX;
	int64_t x328 = INT64_MAX;
	static uint64_t t79 = 8601442368LLU;

	t79 = (((x325<x326)%x327)*x328);

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x331 = INT8_MIN;
	static int16_t x332 = -1;
	int32_t t80 = 1030892;

	t80 = (((x329<x330)%x331)*x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 300678667LLU;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = INT8_MAX;
	volatile uint32_t t81 = 151577887U;

	t81 = (((x333<x334)%x335)*x336);

	if (t81 != 127U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 659046608U;
	uint16_t x338 = 937U;
	uint16_t x339 = 1U;
	int16_t x340 = INT16_MIN;
	int32_t t82 = 86;

	t82 = (((x337<x338)%x339)*x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = UINT64_MAX;
	static volatile int64_t x342 = 228529783506LL;
	static uint16_t x344 = 2790U;

	t83 = (((x341<x342)%x343)*x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = -42;
	static uint16_t x347 = 1856U;
	int32_t x348 = -529440;
	int32_t t84 = -967855517;

	t84 = (((x345<x346)%x347)*x348);

	if (t84 != -529440) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 698LLU;
	int8_t x352 = INT8_MIN;
	int32_t t85 = 7337;

	t85 = (((x349<x350)%x351)*x352);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x355 = 4770378464049LL;
	volatile int64_t t86 = -59LL;

	t86 = (((x353<x354)%x355)*x356);

	if (t86 != 5705LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x358 = 1;
	uint32_t x360 = 50657466U;
	volatile int64_t t87 = 105084LL;

	t87 = (((x357<x358)%x359)*x360);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MAX;
	volatile int32_t x362 = INT32_MIN;
	uint8_t x363 = UINT8_MAX;
	uint16_t x364 = UINT16_MAX;
	int32_t t88 = -31664813;

	t88 = (((x361<x362)%x363)*x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x366 = -1;
	volatile int32_t x367 = INT32_MIN;
	volatile int8_t x368 = INT8_MIN;
	int32_t t89 = -1;

	t89 = (((x365<x366)%x367)*x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x372 = INT16_MIN;
	static uint64_t t90 = 2979357934546LLU;

	t90 = (((x369<x370)%x371)*x372);

	if (t90 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = INT32_MIN;
	int32_t t91 = -3131379;

	t91 = (((x373<x374)%x375)*x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x377 = 7;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MAX;
	static int32_t t92 = 1;

	t92 = (((x377<x378)%x379)*x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = 0;
	static int32_t x383 = INT32_MIN;
	volatile int64_t t93 = INT64_MIN;

	t93 = (((x381<x382)%x383)*x384);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = -15;
	int16_t x386 = -3;
	volatile int64_t x387 = -1LL;
	static int32_t x388 = INT32_MIN;
	int64_t t94 = 502385LL;

	t94 = (((x385<x386)%x387)*x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MAX;
	uint32_t x395 = 4203174U;
	volatile int16_t x396 = INT16_MIN;
	static uint32_t t95 = 516988089U;

	t95 = (((x393<x394)%x395)*x396);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MIN;
	static int16_t x398 = INT16_MIN;
	static int64_t x399 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile int64_t t96 = -147621041917LL;

	t96 = (((x397<x398)%x399)*x400);

	if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = -1;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = -1;
	volatile uint32_t x404 = 31319U;
	static volatile uint32_t t97 = 0U;

	t97 = (((x401<x402)%x403)*x404);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x405 = 14U;
	int8_t x406 = 17;
	int64_t x407 = -7077836503661810LL;
	int64_t x408 = 325932097237858324LL;
	int64_t t98 = -128614277906LL;

	t98 = (((x405<x406)%x407)*x408);

	if (t98 != 325932097237858324LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MAX;
	static int16_t x410 = INT16_MIN;
	int64_t x412 = INT64_MIN;
	int64_t t99 = 3809313735979LL;

	t99 = (((x409<x410)%x411)*x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

