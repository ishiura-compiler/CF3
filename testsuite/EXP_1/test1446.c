#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 1U;
static int8_t x4 = INT8_MIN;
int64_t x6 = -523709867650481LL;
int32_t t3 = 0;
volatile uint64_t x19 = 2599537787611644LLU;
uint32_t t5 = 33U;
static uint32_t x25 = 5396281U;
volatile int16_t x28 = -128;
static uint16_t x29 = UINT16_MAX;
int64_t x31 = INT64_MIN;
int64_t x47 = INT64_MIN;
uint32_t x49 = UINT32_MAX;
int32_t t12 = 133;
static int16_t x58 = INT16_MIN;
int16_t x64 = INT16_MIN;
volatile int8_t x73 = 3;
uint32_t x77 = 29531U;
uint16_t x80 = 4821U;
volatile int16_t x81 = 110;
volatile int64_t x84 = -197LL;
uint8_t x87 = UINT8_MAX;
static int8_t x88 = -2;
int32_t x90 = INT32_MIN;
uint8_t x94 = 10U;
int16_t x95 = -1;
static volatile int8_t x96 = INT8_MIN;
volatile int32_t t23 = 931;
uint16_t x100 = 4U;
volatile int16_t x107 = 13676;
volatile int32_t t26 = 7;
volatile int16_t x111 = -1;
static int64_t x117 = -54970681570578LL;
int32_t t30 = -5943;
volatile int32_t t31 = 959;
int8_t x134 = INT8_MIN;
int32_t t33 = 321409;
static uint64_t x138 = 370846949LLU;
int16_t x139 = -1;
static int32_t x140 = 767743;
uint8_t x141 = 1U;
volatile int8_t x143 = -1;
int16_t x144 = -3;
int32_t x148 = INT32_MIN;
uint64_t x151 = 1826333003837950LLU;
volatile int32_t t39 = -69;
int64_t x166 = INT64_MIN;
static int32_t t42 = 352;
volatile int32_t t44 = -47567646;
volatile int8_t x184 = INT8_MIN;
int16_t x192 = INT16_MIN;
uint64_t x195 = UINT64_MAX;
int32_t t48 = 0;
uint64_t x197 = 7174902566067482LLU;
int64_t x199 = -47413826699LL;
int32_t t49 = 4626;
uint8_t x201 = UINT8_MAX;
int32_t x206 = -8219903;
static volatile uint32_t t53 = 117436381U;
int8_t x225 = INT8_MIN;
volatile int64_t x232 = INT64_MAX;
uint64_t x235 = UINT64_MAX;
volatile int64_t t58 = -9709LL;
int8_t x241 = INT8_MIN;
static int8_t x242 = -1;
volatile int32_t t60 = 399283071;
int32_t x249 = INT32_MAX;
int32_t t65 = 3268;
volatile uint64_t t69 = 112509LLU;
static uint64_t x281 = UINT64_MAX;
int32_t x285 = -1;
uint64_t t71 = 531576564648640LLU;
static uint8_t x291 = 12U;
static uint32_t x296 = UINT32_MAX;
static int64_t x311 = -208034916631748176LL;
int32_t x315 = INT32_MIN;
int32_t x316 = -3294405;
static int32_t t78 = -1641;
static int32_t x325 = -66193596;
int32_t t84 = -18910;
int32_t x341 = INT32_MAX;
int16_t x342 = INT16_MIN;
static int16_t x349 = 1078;
uint32_t x351 = 24132U;
volatile int8_t x356 = -1;
volatile int32_t t88 = 4046;
volatile int32_t t89 = -18;
volatile int16_t x362 = INT16_MIN;
uint16_t x364 = 12805U;
uint16_t x368 = UINT16_MAX;
int16_t x372 = INT16_MIN;
int32_t x377 = 540149385;
int64_t x380 = INT64_MAX;
volatile int64_t x381 = -1LL;
int64_t x382 = INT64_MAX;
uint16_t x384 = 3U;
uint8_t x393 = UINT8_MAX;
static int16_t x395 = INT16_MIN;
uint16_t x397 = UINT16_MAX;


void f0(void) {
	uint8_t x1 = 19U;
	int8_t x2 = INT8_MIN;
	volatile int32_t t0 = -2;

	t0 = (((x1<x2)==x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int8_t x7 = INT8_MAX;
	int64_t x8 = 537434681LL;
	int64_t t1 = -188688938LL;

	t1 = (((x5<x6)==x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint16_t x10 = 5U;
	uint8_t x11 = 8U;
	int16_t x12 = 4;
	volatile int32_t t2 = 0;

	t2 = (((x9<x10)==x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -706919;
	int8_t x14 = INT8_MIN;
	volatile uint32_t x15 = 1U;
	static int16_t x16 = INT16_MIN;

	t3 = (((x13<x14)==x15)*x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 849U;
	int16_t x18 = INT16_MAX;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = 3247;

	t4 = (((x17<x18)==x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int64_t x22 = INT64_MAX;
	volatile int16_t x23 = 69;
	uint32_t x24 = 737539U;

	t5 = (((x21<x22)==x23)*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = INT32_MIN;
	static uint64_t x27 = UINT64_MAX;
	int32_t t6 = 14;

	t6 = (((x25<x26)==x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = 1;
	uint16_t x32 = 615U;
	static volatile int32_t t7 = 7585581;

	t7 = (((x29<x30)==x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 55U;
	uint16_t x34 = 0U;
	static int64_t x35 = -1LL;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = -70;

	t8 = (((x33<x34)==x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x38 = 1676955313662437117LLU;
	int8_t x39 = -1;
	uint64_t x40 = 826337709LLU;
	static volatile uint64_t t9 = 32415572013964LLU;

	t9 = (((x37<x38)==x39)*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 1U;
	uint64_t x42 = 62104320199LLU;
	uint16_t x43 = 1U;
	int64_t x44 = -1326LL;
	int64_t t10 = 28282397921LL;

	t10 = (((x41<x42)==x43)*x44);

	if (t10 != -1326LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 1U;
	int8_t x46 = -1;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = -309421766;

	t11 = (((x45<x46)==x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	int32_t x51 = -1;
	int32_t x52 = -2;

	t12 = (((x49<x50)==x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 9U;
	uint64_t x54 = 1965634105191727LLU;
	volatile int64_t x55 = -1LL;
	volatile uint8_t x56 = 9U;
	int32_t t13 = -763;

	t13 = (((x53<x54)==x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	volatile int64_t x59 = 121347LL;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -27;

	t14 = (((x57<x58)==x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	uint16_t x62 = 1U;
	uint64_t x63 = 1LLU;
	volatile int32_t t15 = 1673934;

	t15 = (((x61<x62)==x63)*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int64_t x66 = 127468119088LL;
	int16_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 5153615U;

	t16 = (((x65<x66)==x67)*x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int64_t x70 = INT64_MAX;
	int8_t x71 = -37;
	static int16_t x72 = 0;
	static volatile int32_t t17 = 81189;

	t17 = (((x69<x70)==x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 3U;
	volatile int32_t x75 = INT32_MIN;
	volatile uint16_t x76 = 1U;
	int32_t t18 = 35594991;

	t18 = (((x73<x74)==x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = 7;
	static uint16_t x79 = 23373U;
	int32_t t19 = 60006;

	t19 = (((x77<x78)==x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	uint8_t x83 = UINT8_MAX;
	int64_t t20 = 96LL;

	t20 = (((x81<x82)==x83)*x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	volatile int8_t x86 = 7;
	volatile int32_t t21 = 420899;

	t21 = (((x85<x86)==x87)*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -16;
	static int8_t x91 = -1;
	uint32_t x92 = 11741U;
	uint32_t t22 = 3008U;

	t22 = (((x89<x90)==x91)*x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;

	t23 = (((x93<x94)==x95)*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x98 = INT32_MIN;
	volatile int32_t x99 = 14191;
	volatile int32_t t24 = 120;

	t24 = (((x97<x98)==x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -2;
	int16_t x102 = -1;
	uint16_t x103 = 3U;
	volatile int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = 331920;

	t25 = (((x101<x102)==x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 66819115978879291LL;
	uint32_t x106 = 1507276U;
	int8_t x108 = -1;

	t26 = (((x105<x106)==x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = 3755;
	uint32_t x110 = 3400523U;
	uint32_t x112 = UINT32_MAX;
	uint32_t t27 = 487693U;

	t27 = (((x109<x110)==x111)*x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 6LLU;
	volatile uint16_t x114 = UINT16_MAX;
	static volatile int8_t x115 = -28;
	volatile int32_t x116 = -2152;
	int32_t t28 = -15249614;

	t28 = (((x113<x114)==x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 19275648U;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 17470;

	t29 = (((x117<x118)==x119)*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 506075U;
	uint16_t x122 = 15475U;
	static int16_t x123 = INT16_MIN;
	static int16_t x124 = -14973;

	t30 = (((x121<x122)==x123)*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static uint8_t x126 = 3U;
	int64_t x127 = INT64_MAX;
	int16_t x128 = -83;

	t31 = (((x125<x126)==x127)*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 59576635U;
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	static uint64_t t32 = 53229838LLU;

	t32 = (((x129<x130)==x131)*x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int8_t x135 = -5;
	volatile uint16_t x136 = 0U;

	t33 = (((x133<x134)==x135)*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -4786280285052588LL;
	volatile int32_t t34 = 99947;

	t34 = (((x137<x138)==x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = 14;
	volatile int32_t t35 = -9;

	t35 = (((x141<x142)==x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	static int64_t x146 = -1LL;
	uint64_t x147 = UINT64_MAX;
	int32_t t36 = 0;

	t36 = (((x145<x146)==x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	uint16_t x150 = 1627U;
	static uint32_t x152 = UINT32_MAX;
	volatile uint32_t t37 = 4042201U;

	t37 = (((x149<x150)==x151)*x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 2U;
	volatile int32_t x154 = -74394524;
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;
	static int32_t t38 = -1;

	t38 = (((x153<x154)==x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 1U;
	uint8_t x158 = 13U;
	volatile int64_t x159 = INT64_MIN;
	static int32_t x160 = INT32_MIN;

	t39 = (((x157<x158)==x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	static int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	static uint32_t x164 = 1031930U;
	static uint32_t t40 = 374736U;

	t40 = (((x161<x162)==x163)*x164);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 546239U;
	static uint32_t x167 = 469526U;
	uint8_t x168 = 30U;
	static int32_t t41 = 1;

	t41 = (((x165<x166)==x167)*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 14;
	uint16_t x170 = 60U;
	volatile int64_t x171 = -1LL;
	static volatile int16_t x172 = INT16_MIN;

	t42 = (((x169<x170)==x171)*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = 247256725711LL;
	int8_t x174 = INT8_MIN;
	int8_t x175 = 0;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -244;

	t43 = (((x173<x174)==x175)*x176);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int32_t x178 = INT32_MIN;
	int64_t x179 = -1LL;
	volatile int8_t x180 = 1;

	t44 = (((x177<x178)==x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint32_t x182 = 52301666U;
	int8_t x183 = INT8_MIN;
	volatile int32_t t45 = -62;

	t45 = (((x181<x182)==x183)*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 27;
	int16_t x186 = INT16_MAX;
	static int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = 59;

	t46 = (((x185<x186)==x187)*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = 1;
	int32_t x190 = 269222;
	uint32_t x191 = UINT32_MAX;
	int32_t t47 = 1;

	t47 = (((x189<x190)==x191)*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 2;
	volatile int32_t x194 = INT32_MIN;
	static volatile int8_t x196 = -1;

	t48 = (((x193<x194)==x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x198 = 5U;
	uint8_t x200 = 2U;

	t49 = (((x197<x198)==x199)*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x202 = UINT64_MAX;
	static int16_t x203 = INT16_MIN;
	static uint32_t x204 = UINT32_MAX;
	volatile uint32_t t50 = 165346890U;

	t50 = (((x201<x202)==x203)*x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -488183615483LL;
	volatile int8_t x207 = INT8_MIN;
	int64_t x208 = 4LL;
	static int64_t t51 = 13LL;

	t51 = (((x205<x206)==x207)*x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -2888;
	uint16_t x210 = 14975U;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t x212 = INT32_MIN;
	int32_t t52 = 104;

	t52 = (((x209<x210)==x211)*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	uint32_t x214 = 228758156U;
	int16_t x215 = 3;
	uint32_t x216 = 2576134U;

	t53 = (((x213<x214)==x215)*x216);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	static int16_t x218 = INT16_MIN;
	static int32_t x219 = INT32_MAX;
	int16_t x220 = -1;
	volatile int32_t t54 = -406681001;

	t54 = (((x217<x218)==x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 0U;
	int64_t x222 = 4LL;
	static int8_t x223 = INT8_MAX;
	volatile int16_t x224 = -100;
	int32_t t55 = -236434;

	t55 = (((x221<x222)==x223)*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x226 = -982721;
	static volatile int16_t x227 = INT16_MIN;
	uint32_t x228 = UINT32_MAX;
	static uint32_t t56 = 4620U;

	t56 = (((x225<x226)==x227)*x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = UINT8_MAX;
	int8_t x230 = -1;
	static int8_t x231 = -5;
	static int64_t t57 = 1944LL;

	t57 = (((x229<x230)==x231)*x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -598;
	int64_t x234 = INT64_MAX;
	int64_t x236 = INT64_MIN;

	t58 = (((x233<x234)==x235)*x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	static int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = 107735730U;
	volatile uint32_t t59 = 33048U;

	t59 = (((x237<x238)==x239)*x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MAX;

	t60 = (((x241<x242)==x243)*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x245 = -951;
	int16_t x246 = INT16_MAX;
	int8_t x247 = 1;
	int64_t x248 = -1LL;
	volatile int64_t t61 = 26851LL;

	t61 = (((x245<x246)==x247)*x248);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -1;
	static uint8_t x251 = 104U;
	volatile uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = -33384628;

	t62 = (((x249<x250)==x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	volatile int8_t x254 = -1;
	volatile int8_t x255 = INT8_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t63 = 54906187U;

	t63 = (((x253<x254)==x255)*x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = 3U;
	volatile int64_t x258 = -1LL;
	static uint8_t x259 = UINT8_MAX;
	uint64_t x260 = 522885LLU;
	uint64_t t64 = 13LLU;

	t64 = (((x257<x258)==x259)*x260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = -1;
	volatile int64_t x262 = -1LL;
	uint8_t x263 = UINT8_MAX;
	static uint16_t x264 = UINT16_MAX;

	t65 = (((x261<x262)==x263)*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 193;
	int16_t x266 = INT16_MIN;
	volatile int32_t x267 = -1;
	int64_t x268 = INT64_MIN;
	volatile int64_t t66 = 135417746LL;

	t66 = (((x265<x266)==x267)*x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -90935LL;
	int8_t x270 = INT8_MAX;
	int64_t x271 = INT64_MAX;
	int16_t x272 = -1;
	int32_t t67 = 0;

	t67 = (((x269<x270)==x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int16_t x274 = -1;
	uint16_t x275 = 19407U;
	uint16_t x276 = 0U;
	static int32_t t68 = -467;

	t68 = (((x273<x274)==x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 1U;
	int8_t x278 = INT8_MAX;
	volatile int32_t x279 = INT32_MAX;
	uint64_t x280 = UINT64_MAX;

	t69 = (((x277<x278)==x279)*x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 26U;
	static int32_t t70 = -1;

	t70 = (((x281<x282)==x283)*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	volatile int32_t x287 = INT32_MAX;
	volatile uint64_t x288 = 214370960LLU;

	t71 = (((x285<x286)==x287)*x288);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	static uint16_t x290 = 889U;
	int16_t x292 = 19;
	volatile int32_t t72 = 273504955;

	t72 = (((x289<x290)==x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = 1010187;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	uint32_t t73 = 0U;

	t73 = (((x293<x294)==x295)*x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static int32_t x298 = INT32_MIN;
	uint32_t x299 = 38400040U;
	uint8_t x300 = 24U;
	volatile int32_t t74 = -2340050;

	t74 = (((x297<x298)==x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MAX;
	int16_t x303 = -39;
	static int8_t x304 = INT8_MIN;
	int32_t t75 = 98310719;

	t75 = (((x301<x302)==x303)*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -1;
	static int8_t x306 = -16;
	uint8_t x307 = UINT8_MAX;
	int32_t x308 = INT32_MIN;
	int32_t t76 = -75626593;

	t76 = (((x305<x306)==x307)*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MIN;
	int64_t x310 = INT64_MAX;
	static int64_t x312 = INT64_MAX;
	static int64_t t77 = -1339277LL;

	t77 = (((x309<x310)==x311)*x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	static volatile uint16_t x314 = UINT16_MAX;

	t78 = (((x313<x314)==x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 15U;
	uint64_t x318 = UINT64_MAX;
	uint32_t x319 = UINT32_MAX;
	volatile int8_t x320 = INT8_MAX;
	int32_t t79 = -93868;

	t79 = (((x317<x318)==x319)*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = 12U;
	int64_t x323 = INT64_MAX;
	int64_t x324 = 27711961677681912LL;
	volatile int64_t t80 = 298011237LL;

	t80 = (((x321<x322)==x323)*x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 1598U;
	volatile uint32_t x327 = 3369293U;
	uint64_t x328 = UINT64_MAX;
	static volatile uint64_t t81 = 31814713158LLU;

	t81 = (((x325<x326)==x327)*x328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 482067389146803LLU;
	volatile int32_t x330 = INT32_MAX;
	static int16_t x331 = INT16_MAX;
	int8_t x332 = -1;
	int32_t t82 = -1;

	t82 = (((x329<x330)==x331)*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -23;
	int8_t x334 = 3;
	int64_t x335 = 262660LL;
	int64_t x336 = 60628LL;
	volatile int64_t t83 = -880797892147214LL;

	t83 = (((x333<x334)==x335)*x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MIN;
	static int8_t x339 = INT8_MAX;
	int8_t x340 = 7;

	t84 = (((x337<x338)==x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = 27;
	static uint64_t x344 = UINT64_MAX;
	volatile uint64_t t85 = 737LLU;

	t85 = (((x341<x342)==x343)*x344);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 249582035614688992LLU;
	uint16_t x346 = 0U;
	int32_t x347 = INT32_MIN;
	static volatile int16_t x348 = INT16_MIN;
	int32_t t86 = -14;

	t86 = (((x345<x346)==x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = -165667487;

	t87 = (((x349<x350)==x351)*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = 61U;
	static int16_t x354 = -1;
	int64_t x355 = INT64_MAX;

	t88 = (((x353<x354)==x355)*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	static int64_t x358 = INT64_MIN;
	static int8_t x359 = -13;
	volatile int32_t x360 = -25014;

	t89 = (((x357<x358)==x359)*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 22;
	static int32_t x363 = -1;
	static volatile int32_t t90 = -9;

	t90 = (((x361<x362)==x363)*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 1;
	static int32_t x366 = -1;
	int8_t x367 = -1;
	int32_t t91 = 248555712;

	t91 = (((x365<x366)==x367)*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -3616;
	volatile uint16_t x370 = UINT16_MAX;
	uint8_t x371 = 8U;
	int32_t t92 = 2406958;

	t92 = (((x369<x370)==x371)*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 111407826802LLU;
	int8_t x374 = 1;
	uint32_t x375 = 134001827U;
	uint16_t x376 = 4U;
	volatile int32_t t93 = -4;

	t93 = (((x373<x374)==x375)*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -1;
	int32_t x379 = -126870531;
	static int64_t t94 = 3499084383997817417LL;

	t94 = (((x377<x378)==x379)*x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x383 = UINT32_MAX;
	int32_t t95 = 483201699;

	t95 = (((x381<x382)==x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -95LL;
	int32_t x386 = INT32_MAX;
	uint8_t x387 = 22U;
	int8_t x388 = -1;
	int32_t t96 = -94;

	t96 = (((x385<x386)==x387)*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 204728U;
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = 227508;

	t97 = (((x389<x390)==x391)*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MAX;
	uint64_t x396 = 260725LLU;
	static uint64_t t98 = 443177107552184566LLU;

	t98 = (((x393<x394)==x395)*x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -1;
	uint32_t x399 = 57U;
	static int16_t x400 = 476;
	int32_t t99 = 1520;

	t99 = (((x397<x398)==x399)*x400);

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

