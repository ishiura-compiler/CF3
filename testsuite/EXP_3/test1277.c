#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
int16_t x9 = INT16_MIN;
volatile uint8_t x11 = 0U;
static int16_t x19 = INT16_MIN;
static int8_t x20 = -5;
int16_t x26 = INT16_MIN;
volatile uint8_t x28 = UINT8_MAX;
int8_t x32 = -1;
int64_t x41 = INT64_MIN;
uint8_t x57 = UINT8_MAX;
uint64_t x58 = 62616440245969158LLU;
int8_t x59 = -1;
uint32_t x63 = UINT32_MAX;
static int16_t x66 = 2468;
volatile int32_t t17 = 1278068;
int16_t x83 = -7;
uint32_t x84 = UINT32_MAX;
static int32_t t20 = -114703;
int64_t x88 = -2544LL;
volatile int32_t t21 = 763288679;
int32_t x97 = INT32_MAX;
static volatile uint8_t x100 = 3U;
volatile uint64_t x101 = 106210553038284614LLU;
volatile int32_t t25 = -28356566;
int16_t x107 = -1;
int8_t x109 = 1;
static uint16_t x118 = 28299U;
int16_t x127 = INT16_MAX;
static volatile int32_t t33 = 497678864;
volatile int8_t x143 = -6;
int64_t x145 = INT64_MIN;
uint32_t x148 = 3499753U;
int16_t x160 = -175;
volatile int8_t x163 = INT8_MAX;
int8_t x172 = INT8_MIN;
static int32_t x173 = INT32_MAX;
int64_t x174 = INT64_MIN;
uint32_t x175 = 252446181U;
int32_t t44 = -94964690;
volatile int16_t x182 = -1;
uint32_t x184 = UINT32_MAX;
volatile int32_t t45 = -1;
volatile int8_t x186 = -1;
uint8_t x188 = UINT8_MAX;
uint16_t x191 = UINT16_MAX;
int32_t t47 = -400473833;
int64_t x200 = INT64_MIN;
int32_t t49 = -995280;
static int8_t x204 = INT8_MIN;
uint8_t x206 = UINT8_MAX;
int32_t t51 = 10180;
volatile int32_t t53 = 4633758;
volatile uint16_t x218 = 10U;
static int32_t x226 = INT32_MAX;
int8_t x227 = 0;
static uint8_t x233 = 24U;
static int32_t x237 = INT32_MAX;
int8_t x242 = 15;
int16_t x247 = -1;
volatile int32_t t61 = -1762;
static int32_t x249 = INT32_MIN;
uint32_t x260 = 71U;
int8_t x263 = -1;
volatile int32_t t66 = 1655079;
static volatile int64_t x269 = -320340857LL;
uint16_t x272 = 2736U;
int64_t x273 = 107208370919727LL;
volatile int32_t x276 = INT32_MIN;
int64_t x284 = -1LL;
static uint8_t x288 = 124U;
uint32_t x292 = 532521257U;
volatile uint8_t x294 = UINT8_MAX;
volatile int32_t x304 = -1517;
int8_t x312 = INT8_MAX;
int32_t x315 = INT32_MAX;
volatile int32_t x319 = INT32_MIN;
int16_t x320 = 201;
int64_t x328 = INT64_MIN;
uint8_t x335 = 1U;
volatile int32_t t87 = 69906046;
int16_t x357 = -9554;
int32_t x358 = INT32_MIN;
static uint8_t x359 = 2U;
static int16_t x360 = INT16_MAX;
int8_t x361 = -1;
int64_t x364 = -864943592451519124LL;
int32_t t90 = 22578213;
int32_t x379 = -4192471;
int32_t x386 = INT32_MIN;
volatile int8_t x388 = INT8_MIN;
static uint8_t x392 = 1U;
int32_t t97 = -38170048;
uint64_t x395 = 27LLU;
volatile int32_t t99 = 1;


void f0(void) {
	volatile int8_t x1 = -8;
	int32_t x3 = -1;
	static int32_t x4 = INT32_MAX;
	static volatile int32_t t0 = -244;

	t0 = ((x1==x2)*(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static uint16_t x6 = 11328U;
	volatile int32_t x7 = INT32_MAX;
	static int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 0;

	t1 = ((x5==x6)*(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int8_t x12 = -43;
	int32_t t2 = 1657;

	t2 = ((x9==x10)*(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = -3432LL;
	int32_t x15 = INT32_MAX;
	int32_t x16 = -4935;
	volatile int32_t t3 = 670;

	t3 = ((x13==x14)*(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static volatile uint16_t x18 = 9U;
	int32_t t4 = -3;

	t4 = ((x17==x18)*(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 991812454293LLU;
	volatile int64_t x22 = -2254463888LL;
	volatile int64_t x23 = -1LL;
	int8_t x24 = -1;
	int32_t t5 = -798453;

	t5 = ((x21==x22)*(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -44;
	int8_t x27 = INT8_MIN;
	int32_t t6 = -1;

	t6 = ((x25==x26)*(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	int32_t t7 = 2498;

	t7 = ((x29==x30)*(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int64_t x34 = 12611040708387150LL;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MAX;
	int32_t t8 = 5;

	t8 = ((x33==x34)*(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 328LLU;
	volatile int32_t x38 = 641782673;
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MAX;
	static volatile int32_t t9 = 380033;

	t9 = ((x37==x38)*(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MAX;
	uint16_t x44 = 13U;
	volatile int32_t t10 = -1245827;

	t10 = ((x41==x42)*(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = 20;
	int16_t x46 = INT16_MIN;
	int8_t x47 = 1;
	uint32_t x48 = 9812U;
	volatile int32_t t11 = 4995787;

	t11 = ((x45==x46)*(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = INT64_MIN;
	static int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 109;

	t12 = ((x49==x50)*(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MIN;
	uint32_t x54 = 28661397U;
	int8_t x55 = INT8_MAX;
	int8_t x56 = -2;
	volatile int32_t t13 = 310075036;

	t13 = ((x53==x54)*(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 0;

	t14 = ((x57==x58)*(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MIN;
	volatile int8_t x64 = INT8_MIN;
	int32_t t15 = 345136741;

	t15 = ((x61==x62)*(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -2127790443LL;
	static int16_t x67 = INT16_MIN;
	int8_t x68 = -13;
	volatile int32_t t16 = 442350235;

	t16 = ((x65==x66)*(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = 1792455700U;
	uint32_t x71 = 6278U;
	uint64_t x72 = 163962754389569LLU;

	t17 = ((x69==x70)*(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 313546U;
	volatile int32_t x74 = INT32_MAX;
	int32_t x75 = INT32_MIN;
	volatile int64_t x76 = 16637164600LL;
	static int32_t t18 = 3283;

	t18 = ((x73==x74)*(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1079U;
	int32_t x78 = INT32_MAX;
	int32_t x79 = -5;
	static uint16_t x80 = 14712U;
	volatile int32_t t19 = 1;

	t19 = ((x77==x78)*(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1930U;
	int64_t x82 = 27002LL;

	t20 = ((x81==x82)*(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	uint32_t x86 = 1605568724U;
	volatile int16_t x87 = INT16_MIN;

	t21 = ((x85==x86)*(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 121U;
	uint8_t x90 = 28U;
	uint32_t x91 = 3U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 0;

	t22 = ((x89==x90)*(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 2LL;
	volatile int32_t x94 = INT32_MAX;
	uint16_t x95 = UINT16_MAX;
	int64_t x96 = -1LL;
	int32_t t23 = 106522453;

	t23 = ((x93==x94)*(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = -21997763LL;
	static int64_t x99 = -1259245980928087LL;
	static volatile int32_t t24 = -5;

	t24 = ((x97==x98)*(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	int8_t x103 = 2;
	int16_t x104 = 53;

	t25 = ((x101==x102)*(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1659621U;
	int32_t x106 = INT32_MIN;
	volatile uint16_t x108 = 30U;
	int32_t t26 = 0;

	t26 = ((x105==x106)*(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = -1;
	int64_t x111 = INT64_MAX;
	uint16_t x112 = 237U;
	volatile int32_t t27 = 15316;

	t27 = ((x109==x110)*(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	volatile int8_t x114 = INT8_MIN;
	int16_t x115 = -1;
	static int32_t x116 = INT32_MAX;
	int32_t t28 = -479;

	t28 = ((x113==x114)*(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 2;
	int64_t x119 = INT64_MIN;
	static int16_t x120 = -1;
	int32_t t29 = -374;

	t29 = ((x117==x118)*(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 621LLU;
	static uint64_t x122 = 1149609753911944115LLU;
	int8_t x123 = -26;
	static uint8_t x124 = 3U;
	int32_t t30 = -7968011;

	t30 = ((x121==x122)*(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x125 = 13323U;
	volatile int16_t x126 = INT16_MIN;
	static int32_t x128 = -1;
	int32_t t31 = -1655;

	t31 = ((x125==x126)*(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -8;
	int32_t x130 = -1;
	static int32_t x131 = INT32_MAX;
	volatile uint32_t x132 = UINT32_MAX;
	static volatile int32_t t32 = -5865;

	t32 = ((x129==x130)*(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 2094540142U;
	static int32_t x134 = INT32_MIN;
	static uint8_t x135 = 0U;
	static int16_t x136 = INT16_MIN;

	t33 = ((x133==x134)*(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int32_t x138 = -1;
	int64_t x139 = INT64_MAX;
	uint8_t x140 = 15U;
	int32_t t34 = -77;

	t34 = ((x137==x138)*(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 219712U;
	uint8_t x142 = 1U;
	uint32_t x144 = 1531U;
	volatile int32_t t35 = 0;

	t35 = ((x141==x142)*(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x146 = 4379LLU;
	int64_t x147 = 25LL;
	volatile int32_t t36 = -754130;

	t36 = ((x145==x146)*(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MIN;
	static volatile int16_t x151 = INT16_MIN;
	volatile int32_t x152 = INT32_MIN;
	int32_t t37 = -21341825;

	t37 = ((x149==x150)*(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -1880;
	int8_t x154 = 59;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	int32_t t38 = 103536;

	t38 = ((x153==x154)*(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -42561729LL;
	static volatile int32_t x158 = 24;
	int32_t x159 = -148720905;
	static int32_t t39 = 2566;

	t39 = ((x157==x158)*(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static int64_t x162 = INT64_MIN;
	int64_t x164 = -5436820566405LL;
	volatile int32_t t40 = -390479866;

	t40 = ((x161==x162)*(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 0;
	int32_t x166 = -1;
	int8_t x167 = 1;
	int16_t x168 = INT16_MIN;
	static int32_t t41 = -24231007;

	t41 = ((x165==x166)*(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x170 = -1;
	uint32_t x171 = 3U;
	volatile int32_t t42 = 22232;

	t42 = ((x169==x170)*(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x176 = -64724;
	volatile int32_t t43 = -1619537;

	t43 = ((x173==x174)*(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint32_t x178 = 1U;
	volatile uint16_t x179 = UINT16_MAX;
	volatile int16_t x180 = -1;

	t44 = ((x177==x178)*(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	uint16_t x183 = UINT16_MAX;

	t45 = ((x181==x182)*(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	static volatile int32_t t46 = -60793295;

	t46 = ((x185==x186)*(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x189 = 12426862LLU;
	volatile int64_t x190 = INT64_MIN;
	int16_t x192 = INT16_MIN;

	t47 = ((x189==x190)*(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MIN;
	static int16_t x194 = -1;
	int64_t x195 = -1LL;
	volatile int64_t x196 = INT64_MIN;
	volatile int32_t t48 = 0;

	t48 = ((x193==x194)*(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 5U;
	uint32_t x198 = UINT32_MAX;
	volatile int16_t x199 = -13;

	t49 = ((x197==x198)*(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	static uint64_t x202 = 110867777130100LLU;
	static uint16_t x203 = 6719U;
	int32_t t50 = 40043652;

	t50 = ((x201==x202)*(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = INT64_MIN;

	t51 = ((x205==x206)*(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = INT8_MIN;
	int32_t x210 = -1;
	static volatile int32_t x211 = 2018169;
	int64_t x212 = INT64_MIN;
	static int32_t t52 = 11140891;

	t52 = ((x209==x210)*(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = -1;
	int16_t x215 = INT16_MAX;
	volatile uint16_t x216 = UINT16_MAX;

	t53 = ((x213==x214)*(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 3LLU;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = -1;
	int32_t t54 = -1849;

	t54 = ((x217==x218)*(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 10LL;
	int8_t x222 = INT8_MAX;
	static uint64_t x223 = 9178461936365LLU;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -117452861;

	t55 = ((x221==x222)*(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	uint16_t x228 = UINT16_MAX;
	static volatile int32_t t56 = -188;

	t56 = ((x225==x226)*(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	uint64_t x230 = UINT64_MAX;
	static int32_t x231 = INT32_MIN;
	uint32_t x232 = 53096220U;
	volatile int32_t t57 = 159116;

	t57 = ((x229==x230)*(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = 4;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t58 = -434846049;

	t58 = ((x233==x234)*(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x238 = 36482LLU;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;
	int32_t t59 = -1184494;

	t59 = ((x237==x238)*(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 25;
	uint16_t x243 = 10U;
	static uint16_t x244 = UINT16_MAX;
	static volatile int32_t t60 = 1084552;

	t60 = ((x241==x242)*(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int32_t x246 = -130801152;
	static int32_t x248 = INT32_MIN;

	t61 = ((x245==x246)*(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 0LLU;
	int32_t x251 = 733611781;
	int64_t x252 = INT64_MAX;
	volatile int32_t t62 = 45;

	t62 = ((x249==x250)*(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -2571;
	static uint16_t x254 = 239U;
	volatile int64_t x255 = INT64_MIN;
	volatile int64_t x256 = -1LL;
	volatile int32_t t63 = 87;

	t63 = ((x253==x254)*(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MAX;
	int32_t x259 = INT32_MIN;
	volatile int32_t t64 = -15;

	t64 = ((x257==x258)*(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 485996LL;
	int32_t x262 = 378011072;
	uint64_t x264 = 3336407LLU;
	int32_t t65 = 1;

	t65 = ((x261==x262)*(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = -1LL;
	uint32_t x266 = UINT32_MAX;
	volatile int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;

	t66 = ((x265==x266)*(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x270 = 665479U;
	static int32_t x271 = INT32_MAX;
	int32_t t67 = 4783;

	t67 = ((x269==x270)*(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = 110000;
	int8_t x275 = -55;
	static volatile int32_t t68 = 110;

	t68 = ((x273==x274)*(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = UINT64_MAX;
	static int16_t x278 = -1;
	int32_t x279 = -1;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = 0;

	t69 = ((x277==x278)*(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint32_t x282 = 7412U;
	volatile int32_t x283 = INT32_MAX;
	int32_t t70 = -382385;

	t70 = ((x281==x282)*(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	static int32_t x286 = INT32_MAX;
	int64_t x287 = INT64_MIN;
	static volatile int32_t t71 = 554426229;

	t71 = ((x285==x286)*(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = -6;
	static volatile uint8_t x291 = 4U;
	volatile int32_t t72 = 29259204;

	t72 = ((x289==x290)*(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 7U;
	int32_t x295 = -12897327;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -4594692;

	t73 = ((x293==x294)*(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = 110918648;
	static uint64_t x298 = 62LLU;
	volatile int32_t x299 = INT32_MIN;
	uint64_t x300 = 596044877288LLU;
	static volatile int32_t t74 = 0;

	t74 = ((x297==x298)*(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 32;
	volatile int32_t x302 = -1;
	int8_t x303 = 7;
	int32_t t75 = -116792;

	t75 = ((x301==x302)*(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	static uint64_t x306 = 136079836414066210LLU;
	volatile int8_t x307 = 0;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 1737;

	t76 = ((x305==x306)*(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	int32_t x311 = INT32_MAX;
	int32_t t77 = 276;

	t77 = ((x309==x310)*(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = 0LL;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t78 = 163;

	t78 = ((x313==x314)*(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = UINT8_MAX;
	int32_t x318 = -1;
	int32_t t79 = 1709001;

	t79 = ((x317==x318)*(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = UINT32_MAX;
	int8_t x322 = -3;
	static uint64_t x323 = 2732850LLU;
	volatile uint8_t x324 = UINT8_MAX;
	int32_t t80 = 52864163;

	t80 = ((x321==x322)*(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 353040;
	static volatile int64_t x326 = INT64_MIN;
	uint32_t x327 = 2363419U;
	int32_t t81 = -3495402;

	t81 = ((x325==x326)*(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 2046615940684LLU;
	static int32_t x330 = INT32_MAX;
	int32_t x331 = INT32_MAX;
	static int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -6540;

	t82 = ((x329==x330)*(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -166;
	int64_t x334 = -207943629770689944LL;
	int64_t x336 = 670LL;
	volatile int32_t t83 = -184669;

	t83 = ((x333==x334)*(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 33562889864903LLU;
	uint8_t x338 = 67U;
	uint32_t x339 = 56795934U;
	static int32_t x340 = INT32_MAX;
	static int32_t t84 = 11511;

	t84 = ((x337==x338)*(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 11119;
	int32_t x342 = -818;
	volatile int16_t x343 = -83;
	uint16_t x344 = 76U;
	int32_t t85 = -735758;

	t85 = ((x341==x342)*(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 7;
	volatile uint8_t x346 = 46U;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	int32_t t86 = 103223861;

	t86 = ((x345==x346)*(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 1;
	uint64_t x350 = 7LLU;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = -1;

	t87 = ((x349==x350)*(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int8_t x354 = 1;
	static uint64_t x355 = UINT64_MAX;
	int16_t x356 = 10;
	volatile int32_t t88 = -11625222;

	t88 = ((x353==x354)*(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t t89 = -8473;

	t89 = ((x357==x358)*(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = 3U;
	int16_t x363 = -162;

	t90 = ((x361==x362)*(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MAX;
	volatile int64_t x367 = INT64_MIN;
	int32_t x368 = -971176554;
	static int32_t t91 = 659;

	t91 = ((x365==x366)*(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	uint8_t x370 = 51U;
	int16_t x371 = -1;
	volatile uint8_t x372 = 16U;
	volatile int32_t t92 = -121108;

	t92 = ((x369==x370)*(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = 1U;
	int8_t x374 = 3;
	static volatile int64_t x375 = INT64_MAX;
	int64_t x376 = -1LL;
	volatile int32_t t93 = 60380838;

	t93 = ((x373==x374)*(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	int8_t x380 = 13;
	int32_t t94 = 0;

	t94 = ((x377==x378)*(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	volatile int8_t x382 = 1;
	volatile int8_t x383 = INT8_MAX;
	int32_t x384 = 826222;
	int32_t t95 = 122;

	t95 = ((x381==x382)*(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 6118657822LLU;
	volatile int16_t x387 = 5;
	static int32_t t96 = -429127737;

	t96 = ((x385==x386)*(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 15U;
	volatile uint8_t x390 = 1U;
	uint32_t x391 = 1U;

	t97 = ((x389==x390)*(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 698024U;
	static uint64_t x394 = 303117859689582438LLU;
	int32_t x396 = -1;
	int32_t t98 = -32231;

	t98 = ((x393==x394)*(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MAX;
	static volatile int8_t x399 = INT8_MAX;
	int8_t x400 = INT8_MAX;

	t99 = ((x397==x398)*(x399==x400));

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

