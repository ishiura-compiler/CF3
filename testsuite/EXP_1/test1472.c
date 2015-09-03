#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 3282;
uint64_t x9 = 2731182444670794447LLU;
volatile int32_t t2 = 766770995;
uint32_t x17 = UINT32_MAX;
volatile int32_t t5 = -30;
volatile int8_t x42 = INT8_MIN;
int32_t x43 = -167615622;
int32_t t11 = 147540;
uint32_t x55 = 1U;
int32_t x58 = INT32_MIN;
volatile uint8_t x59 = 8U;
int64_t x60 = -5358084337749LL;
static int64_t x76 = 31675LL;
uint8_t x77 = UINT8_MAX;
static int64_t x80 = 545966669513765LL;
volatile int64_t t19 = -500227825LL;
int64_t x81 = INT64_MAX;
int32_t x90 = INT32_MIN;
static int32_t x97 = INT32_MIN;
static int32_t t25 = -81213275;
int32_t x111 = INT32_MAX;
uint64_t x112 = 583234LLU;
uint16_t x119 = 53U;
static int64_t x120 = INT64_MIN;
uint16_t x123 = 1241U;
volatile int32_t x124 = INT32_MIN;
int16_t x131 = INT16_MIN;
int32_t x133 = INT32_MIN;
uint16_t x134 = 42U;
volatile uint16_t x142 = 1U;
int32_t x144 = INT32_MIN;
int8_t x153 = INT8_MIN;
uint64_t t38 = UINT64_MAX;
uint64_t x163 = 8LLU;
int32_t x166 = INT32_MIN;
int64_t x167 = INT64_MAX;
static int16_t x179 = -110;
uint64_t x180 = UINT64_MAX;
volatile int32_t t46 = -78;
uint64_t t47 = 5915232241579476674LLU;
uint16_t x208 = 7U;
static int8_t x212 = -1;
int64_t x213 = 1361LL;
int16_t x215 = 4;
volatile int32_t t53 = -5715417;
int8_t x218 = INT8_MIN;
static int32_t x223 = INT32_MIN;
static int64_t x225 = -1LL;
int16_t x228 = INT16_MIN;
int32_t t57 = -2;
static int8_t x234 = INT8_MIN;
volatile int64_t t58 = -160687301LL;
uint32_t x237 = 5651U;
uint16_t x242 = 26U;
static volatile uint8_t x243 = UINT8_MAX;
int32_t t60 = -258500;
int32_t t61 = 95339248;
uint8_t x251 = 20U;
int32_t t62 = -7679870;
int16_t x266 = INT16_MAX;
int8_t x269 = INT8_MAX;
uint32_t t68 = 120U;
int8_t x282 = 12;
uint8_t x283 = 1U;
int32_t t71 = 5;
uint32_t x289 = UINT32_MAX;
uint16_t x294 = 12823U;
static int16_t x301 = INT16_MIN;
static int16_t x304 = -1;
int64_t x305 = 153168922LL;
int64_t x310 = 20662310414302LL;
int16_t x312 = INT16_MIN;
int8_t x318 = INT8_MIN;
uint8_t x320 = 29U;
volatile int32_t t79 = 0;
int64_t x324 = -850802LL;
int64_t x330 = INT64_MIN;
int8_t x331 = 8;
volatile int64_t t83 = 37678LL;
uint64_t x338 = 16917331803558381LLU;
static int32_t x340 = 1400769;
int32_t t84 = -4609;
static int32_t x341 = INT32_MIN;
int16_t x346 = -1;
static uint32_t x347 = 4U;
int32_t x356 = INT32_MIN;
int8_t x358 = 16;
static volatile uint16_t x359 = 14U;
int16_t x363 = -11739;
int32_t x369 = -1;
static uint64_t x373 = 29116371LLU;
static uint32_t x377 = UINT32_MAX;
volatile int32_t t95 = 19458231;
int8_t x385 = INT8_MAX;
static uint64_t x389 = 18117LLU;
int8_t x392 = -5;
static volatile int16_t x400 = INT16_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = UINT8_MAX;
	static int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;

	t0 = (((x1<x2)<=x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int32_t x6 = -1;
	static int64_t x7 = INT64_MIN;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -11299;

	t1 = (((x5<x6)<=x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -4LL;
	uint16_t x11 = UINT16_MAX;
	static int8_t x12 = INT8_MIN;

	t2 = (((x9<x10)<=x11)*x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	static volatile int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -2;

	t3 = (((x13<x14)<=x15)*x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MAX;
	int8_t x19 = INT8_MAX;
	uint16_t x20 = 59U;
	int32_t t4 = -629010257;

	t4 = (((x17<x18)<=x19)*x20);

	if (t4 != 59) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 2U;
	static uint32_t x22 = 6190U;
	int16_t x23 = INT16_MIN;
	volatile uint8_t x24 = 23U;

	t5 = (((x21<x22)<=x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MAX;
	uint32_t x27 = 115010U;
	volatile int64_t x28 = -25474374095774LL;
	int64_t t6 = -17LL;

	t6 = (((x25<x26)<=x27)*x28);

	if (t6 != -25474374095774LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 732U;
	static volatile int64_t x30 = INT64_MIN;
	int64_t x31 = -119804643LL;
	volatile int64_t x32 = -1LL;
	volatile int64_t t7 = -582466882044942922LL;

	t7 = (((x29<x30)<=x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = -976;
	uint64_t x35 = UINT64_MAX;
	volatile int32_t x36 = -1;
	static int32_t t8 = -8377;

	t8 = (((x33<x34)<=x35)*x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	uint16_t x38 = 400U;
	static uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = -369928;

	t9 = (((x37<x38)<=x39)*x40);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	int32_t x44 = 186206774;
	int32_t t10 = -100;

	t10 = (((x41<x42)<=x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = 345524U;
	static volatile int32_t x47 = -262170;
	int16_t x48 = -1534;

	t11 = (((x45<x46)<=x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 50801688326429407LLU;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = -611;
	volatile int32_t x52 = 54819542;
	static int32_t t12 = 1;

	t12 = (((x49<x50)<=x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 0;
	uint32_t x54 = UINT32_MAX;
	static volatile int32_t x56 = 16870;
	volatile int32_t t13 = 0;

	t13 = (((x53<x54)<=x55)*x56);

	if (t13 != 16870) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t t14 = -27356306014451865LL;

	t14 = (((x57<x58)<=x59)*x60);

	if (t14 != -5358084337749LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 23567U;
	int32_t x62 = INT32_MIN;
	static int64_t x63 = -1LL;
	int8_t x64 = -1;
	static volatile int32_t t15 = 380738566;

	t15 = (((x61<x62)<=x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = 127U;
	int32_t t16 = 43115;

	t16 = (((x65<x66)<=x67)*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile int8_t x70 = 15;
	int8_t x71 = 5;
	volatile uint16_t x72 = 6734U;
	int32_t t17 = -1037;

	t17 = (((x69<x70)<=x71)*x72);

	if (t17 != 6734) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	int16_t x74 = 15;
	volatile int8_t x75 = INT8_MIN;
	static volatile int64_t t18 = 273108379895LL;

	t18 = (((x73<x74)<=x75)*x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 1467U;
	static uint32_t x79 = 58U;

	t19 = (((x77<x78)<=x79)*x80);

	if (t19 != 545966669513765LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MAX;
	int8_t x83 = 0;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = INT32_MAX;

	t20 = (((x81<x82)<=x83)*x84);

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = 57;
	uint64_t x87 = UINT64_MAX;
	volatile int64_t x88 = 35LL;
	volatile int64_t t21 = -4235961125301LL;

	t21 = (((x85<x86)<=x87)*x88);

	if (t21 != 35LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x91 = 64U;
	uint16_t x92 = 148U;
	volatile int32_t t22 = -15686;

	t22 = (((x89<x90)<=x91)*x92);

	if (t22 != 148) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 3692731258861425LLU;
	int8_t x94 = INT8_MIN;
	uint8_t x95 = 9U;
	static int64_t x96 = 5904587426528LL;
	volatile int64_t t23 = -3479049388LL;

	t23 = (((x93<x94)<=x95)*x96);

	if (t23 != 5904587426528LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	uint8_t x100 = UINT8_MAX;
	static volatile int32_t t24 = -40;

	t24 = (((x97<x98)<=x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	uint8_t x102 = UINT8_MAX;
	volatile int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MIN;

	t25 = (((x101<x102)<=x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = 1U;
	static uint32_t x107 = UINT32_MAX;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = (((x105<x106)<=x107)*x108);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = 17U;
	static volatile uint64_t t27 = 5483621LLU;

	t27 = (((x109<x110)<=x111)*x112);

	if (t27 != 583234LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 38967075;
	volatile int64_t x114 = -3LL;
	uint32_t x115 = 188780U;
	int64_t x116 = 618LL;
	volatile int64_t t28 = -10031LL;

	t28 = (((x113<x114)<=x115)*x116);

	if (t28 != 618LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 1;
	uint16_t x118 = 0U;
	volatile int64_t t29 = INT64_MIN;

	t29 = (((x117<x118)<=x119)*x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	static volatile uint8_t x122 = 3U;
	volatile int32_t t30 = INT32_MIN;

	t30 = (((x121<x122)<=x123)*x124);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = -2823LL;
	uint32_t x127 = UINT32_MAX;
	static int64_t x128 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

	t31 = (((x125<x126)<=x127)*x128);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 191159U;
	static int32_t x130 = INT32_MIN;
	static uint8_t x132 = 8U;
	volatile int32_t t32 = 4998487;

	t32 = (((x129<x130)<=x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x135 = INT16_MAX;
	int8_t x136 = -1;
	int32_t t33 = 24448783;

	t33 = (((x133<x134)<=x135)*x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -138915535;
	static uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t34 = 184411787827155621LLU;

	t34 = (((x137<x138)<=x139)*x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	uint16_t x143 = 3U;
	int32_t t35 = INT32_MIN;

	t35 = (((x141<x142)<=x143)*x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 1U;
	int64_t x146 = INT64_MAX;
	static int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	static int64_t t36 = -24LL;

	t36 = (((x145<x146)<=x147)*x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = 7657;
	uint16_t x151 = 3U;
	int8_t x152 = -1;
	volatile int32_t t37 = -1662180;

	t37 = (((x149<x150)<=x151)*x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x154 = 1U;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = UINT64_MAX;

	t38 = (((x153<x154)<=x155)*x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int8_t x158 = 13;
	int8_t x159 = -2;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -2574821332311085LL;

	t39 = (((x157<x158)<=x159)*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1897434501420LL;
	int8_t x162 = INT8_MIN;
	uint64_t x164 = 4690366103852LLU;
	volatile uint64_t t40 = 40236923LLU;

	t40 = (((x161<x162)<=x163)*x164);

	if (t40 != 4690366103852LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	static int32_t x168 = -1;
	static volatile int32_t t41 = 260414315;

	t41 = (((x165<x166)<=x167)*x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	volatile int64_t x170 = -1LL;
	uint16_t x171 = 6682U;
	int64_t x172 = -58LL;
	static int64_t t42 = -351576826LL;

	t42 = (((x169<x170)<=x171)*x172);

	if (t42 != -58LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	static uint16_t x174 = 0U;
	static int32_t x175 = 5;
	static uint64_t x176 = 213999LLU;
	static volatile uint64_t t43 = 261544809112447062LLU;

	t43 = (((x173<x174)<=x175)*x176);

	if (t43 != 213999LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 53U;
	uint32_t x178 = 3404U;
	volatile uint64_t t44 = 125LLU;

	t44 = (((x177<x178)<=x179)*x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 0;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 95U;
	int64_t x184 = 61480975375291737LL;
	int64_t t45 = 111LL;

	t45 = (((x181<x182)<=x183)*x184);

	if (t45 != 61480975375291737LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 29U;
	uint8_t x186 = 0U;
	uint16_t x187 = 1U;
	int32_t x188 = 3212;

	t46 = (((x185<x186)<=x187)*x188);

	if (t46 != 3212) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x190 = 821952U;
	int16_t x191 = 1;
	uint64_t x192 = 162LLU;

	t47 = (((x189<x190)<=x191)*x192);

	if (t47 != 162LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = 11U;
	static uint32_t t48 = 1U;

	t48 = (((x193<x194)<=x195)*x196);

	if (t48 != 11U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = -964658224407400964LL;
	static volatile uint64_t x199 = 1903LLU;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = (((x197<x198)<=x199)*x200);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = UINT8_MAX;
	int8_t x202 = 1;
	volatile int8_t x203 = INT8_MAX;
	int8_t x204 = -20;
	int32_t t50 = -1;

	t50 = (((x201<x202)<=x203)*x204);

	if (t50 != -20) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 57670727371678152LLU;
	int64_t x206 = 24724153370551LL;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t t51 = 45481;

	t51 = (((x205<x206)<=x207)*x208);

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = 3397300U;
	int16_t x210 = -1;
	int16_t x211 = -3;
	int32_t t52 = 1;

	t52 = (((x209<x210)<=x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x214 = 1U;
	int8_t x216 = INT8_MIN;

	t53 = (((x213<x214)<=x215)*x216);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t x219 = 1294580;
	uint16_t x220 = UINT16_MAX;
	static int32_t t54 = -7;

	t54 = (((x217<x218)<=x219)*x220);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 21U;
	int64_t x222 = INT64_MIN;
	int8_t x224 = INT8_MAX;
	int32_t t55 = -1320719;

	t55 = (((x221<x222)<=x223)*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = 0U;
	volatile int8_t x227 = INT8_MAX;
	volatile int32_t t56 = -857;

	t56 = (((x225<x226)<=x227)*x228);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x229 = -11263;
	uint32_t x230 = 1061419820U;
	volatile uint8_t x231 = 1U;
	static int8_t x232 = INT8_MAX;

	t57 = (((x229<x230)<=x231)*x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -1;
	static int16_t x235 = -1;
	int64_t x236 = INT64_MIN;

	t58 = (((x233<x234)<=x235)*x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -30833120594262LL;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = 443LLU;
	static volatile uint64_t t59 = 3528012012263LLU;

	t59 = (((x237<x238)<=x239)*x240);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x244 = 34;

	t60 = (((x241<x242)<=x243)*x244);

	if (t60 != 34) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	static uint32_t x246 = 70122U;
	static int8_t x247 = INT8_MIN;
	uint8_t x248 = 3U;

	t61 = (((x245<x246)<=x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	uint8_t x250 = 119U;
	int8_t x252 = -1;

	t62 = (((x249<x250)<=x251)*x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	volatile int32_t x254 = -3;
	static uint64_t x255 = 25414488093916LLU;
	static int8_t x256 = INT8_MIN;
	int32_t t63 = -14;

	t63 = (((x253<x254)<=x255)*x256);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = UINT32_MAX;
	uint8_t x258 = 12U;
	int64_t x259 = INT64_MIN;
	static int16_t x260 = 0;
	volatile int32_t t64 = -1;

	t64 = (((x257<x258)<=x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x261 = UINT64_MAX;
	uint64_t x262 = 237428499847591LLU;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MIN;
	volatile int64_t t65 = 4LL;

	t65 = (((x261<x262)<=x263)*x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	static int64_t x267 = 7196491390238250LL;
	int32_t x268 = -1;
	int32_t t66 = 64841374;

	t66 = (((x265<x266)<=x267)*x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x270 = 68U;
	static uint8_t x271 = UINT8_MAX;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = INT32_MIN;

	t67 = (((x269<x270)<=x271)*x272);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	int8_t x274 = -1;
	int16_t x275 = 198;
	uint32_t x276 = 794686U;

	t68 = (((x273<x274)<=x275)*x276);

	if (t68 != 794686U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = 9U;
	uint8_t x278 = 60U;
	volatile uint64_t x279 = 56365LLU;
	volatile uint16_t x280 = 294U;
	int32_t t69 = 770042913;

	t69 = (((x277<x278)<=x279)*x280);

	if (t69 != 294) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	uint8_t x284 = 16U;
	volatile int32_t t70 = 855206;

	t70 = (((x281<x282)<=x283)*x284);

	if (t70 != 16) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -4105443800269201994LL;
	int16_t x286 = INT16_MAX;
	int64_t x287 = -1297916930LL;
	uint16_t x288 = 124U;

	t71 = (((x285<x286)<=x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x290 = 2U;
	int64_t x291 = -1LL;
	uint32_t x292 = 18U;
	uint32_t t72 = 286712937U;

	t72 = (((x289<x290)<=x291)*x292);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	static int32_t t73 = 11;

	t73 = (((x293<x294)<=x295)*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 567U;
	volatile int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MAX;
	volatile int16_t x300 = -1;
	static int32_t t74 = -16986;

	t74 = (((x297<x298)<=x299)*x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MAX;
	uint32_t x303 = 4395U;
	volatile int32_t t75 = 287338531;

	t75 = (((x301<x302)<=x303)*x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = 2U;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = 1U;
	static volatile int32_t t76 = -9902829;

	t76 = (((x305<x306)<=x307)*x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -11;
	int32_t x311 = INT32_MIN;
	static int32_t t77 = 79;

	t77 = (((x309<x310)<=x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = 36U;
	static uint16_t x314 = 3U;
	uint32_t x315 = 903786U;
	int32_t x316 = 10838;
	volatile int32_t t78 = 2;

	t78 = (((x313<x314)<=x315)*x316);

	if (t78 != 10838) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 6U;
	int8_t x319 = INT8_MAX;

	t79 = (((x317<x318)<=x319)*x320);

	if (t79 != 29) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 686251463U;
	uint8_t x322 = 2U;
	static int8_t x323 = -27;
	volatile int64_t t80 = -3LL;

	t80 = (((x321<x322)<=x323)*x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 779U;
	volatile uint16_t x326 = 38U;
	int8_t x327 = -2;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t81 = 314573426;

	t81 = (((x325<x326)<=x327)*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 0;

	t82 = (((x329<x330)<=x331)*x332);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	uint8_t x334 = 56U;
	uint16_t x335 = 10U;
	int64_t x336 = -1LL;

	t83 = (((x333<x334)<=x335)*x336);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	static uint32_t x339 = 46295U;

	t84 = (((x337<x338)<=x339)*x340);

	if (t84 != 1400769) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x342 = -1;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	volatile int32_t t85 = 240253;

	t85 = (((x341<x342)<=x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = 14951;

	t86 = (((x345<x346)<=x347)*x348);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	static int16_t x350 = -14357;
	volatile uint64_t x351 = 1931867092LLU;
	int8_t x352 = 48;
	volatile int32_t t87 = 1524066;

	t87 = (((x349<x350)<=x351)*x352);

	if (t87 != 48) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 646;
	uint16_t x354 = UINT16_MAX;
	volatile int8_t x355 = INT8_MIN;
	volatile int32_t t88 = 3628;

	t88 = (((x353<x354)<=x355)*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	static int8_t x360 = 0;
	static int32_t t89 = 78922;

	t89 = (((x357<x358)<=x359)*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint16_t x362 = 1619U;
	int8_t x364 = INT8_MAX;
	static int32_t t90 = 7095;

	t90 = (((x361<x362)<=x363)*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	static uint32_t x367 = UINT32_MAX;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = -850177;

	t91 = (((x365<x366)<=x367)*x368);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = 481;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MAX;
	int32_t t92 = 2075987;

	t92 = (((x369<x370)<=x371)*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MIN;
	volatile uint32_t x375 = 2237U;
	int16_t x376 = INT16_MIN;
	static int32_t t93 = -9;

	t93 = (((x373<x374)<=x375)*x376);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MAX;
	int64_t x379 = 545953529LL;
	static volatile uint8_t x380 = 0U;
	int32_t t94 = 760819;

	t94 = (((x377<x378)<=x379)*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 96U;
	int16_t x382 = -1;
	static volatile int16_t x383 = 3;
	int16_t x384 = -7150;

	t95 = (((x381<x382)<=x383)*x384);

	if (t95 != -7150) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x386 = 2U;
	static int32_t x387 = -1;
	static int16_t x388 = -1;
	static int32_t t96 = -274699786;

	t96 = (((x385<x386)<=x387)*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = 3;
	int8_t x391 = -26;
	volatile int32_t t97 = -2949471;

	t97 = (((x389<x390)<=x391)*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 11089585387LL;
	uint16_t x394 = UINT16_MAX;
	volatile int8_t x395 = 0;
	volatile int8_t x396 = -1;
	int32_t t98 = 1;

	t98 = (((x393<x394)<=x395)*x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x397 = 57LLU;
	volatile int8_t x398 = INT8_MAX;
	volatile uint32_t x399 = 6117U;
	int32_t t99 = 5106;

	t99 = (((x397<x398)<=x399)*x400);

	if (t99 != -32768) { NG(); } else { ; }
	
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

