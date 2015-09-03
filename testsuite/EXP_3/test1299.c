#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
int64_t x6 = 22833103026LL;
static int8_t x8 = 1;
int32_t t1 = -1407061;
volatile int8_t x10 = INT8_MAX;
int32_t x13 = INT32_MAX;
static volatile int64_t x24 = -134828473859LL;
static int32_t x28 = 57741;
volatile int16_t x31 = -1;
uint32_t x37 = 253632562U;
int32_t t9 = 1;
static uint16_t x41 = 25U;
volatile int8_t x49 = -30;
volatile int32_t t13 = -480556;
volatile int8_t x59 = -8;
volatile int32_t t14 = -19105;
uint32_t x61 = 37031598U;
int32_t x62 = INT32_MIN;
volatile int32_t t15 = 3;
int8_t x73 = -1;
uint64_t x74 = 899201136012899913LLU;
uint8_t x76 = 49U;
volatile int32_t t20 = -2920616;
int16_t x85 = INT16_MIN;
uint64_t x86 = 527300795LLU;
volatile uint16_t x88 = 10U;
volatile uint16_t x89 = 60U;
uint64_t x100 = UINT64_MAX;
volatile int32_t t24 = 0;
static int32_t x109 = INT32_MIN;
int32_t t27 = -497073262;
uint16_t x114 = 326U;
volatile uint64_t x115 = 1LLU;
volatile int32_t t28 = -50;
int16_t x125 = -1;
static uint16_t x133 = UINT16_MAX;
int32_t x135 = INT32_MIN;
uint64_t x138 = 9182787802440258LLU;
volatile int16_t x142 = INT16_MAX;
int64_t x145 = INT64_MIN;
int16_t x148 = INT16_MIN;
int64_t x150 = 5340993486098916LL;
int64_t x158 = -1LL;
int32_t x161 = -1569;
static int32_t x162 = INT32_MIN;
uint64_t x163 = 0LLU;
uint32_t x174 = 55372895U;
int32_t t43 = 13679673;
volatile int32_t t47 = 1;
uint64_t x199 = 9359241694907LLU;
uint8_t x203 = 11U;
uint16_t x205 = 9170U;
static volatile uint16_t x212 = 8U;
uint64_t x213 = 2493063590429002091LLU;
int32_t t53 = 156471;
volatile uint16_t x217 = UINT16_MAX;
static int64_t x218 = INT64_MAX;
int32_t x219 = 196034840;
int8_t x226 = INT8_MIN;
volatile int32_t t56 = -19992;
static volatile int32_t t57 = 1284;
static volatile int32_t t62 = 6;
int8_t x254 = INT8_MIN;
uint32_t x262 = 409U;
volatile uint32_t x269 = 74683U;
volatile int32_t t67 = -96;
uint8_t x274 = 43U;
volatile int64_t x276 = INT64_MAX;
int16_t x282 = INT16_MAX;
int32_t x286 = 97;
int16_t x288 = 1;
volatile int32_t t71 = 9472665;
volatile int32_t x290 = INT32_MIN;
static int32_t x292 = INT32_MIN;
volatile uint64_t x295 = UINT64_MAX;
volatile int32_t t73 = -1;
uint64_t x298 = UINT64_MAX;
int32_t x302 = 2;
uint64_t x307 = 585228034334LLU;
int32_t x310 = 948;
static int32_t t77 = -43608;
volatile int64_t x314 = INT64_MIN;
static volatile uint64_t x315 = 7LLU;
int32_t t78 = -6;
int32_t x332 = INT32_MIN;
static uint8_t x333 = UINT8_MAX;
static int32_t x336 = 66;
volatile int32_t t83 = -9256685;
int16_t x337 = -1;
static int32_t x352 = INT32_MIN;
volatile int32_t t87 = 0;
int64_t x354 = 218925LL;
static int32_t t88 = -9050;
int32_t x357 = INT32_MAX;
uint8_t x363 = UINT8_MAX;
int64_t x365 = 4634623272886503LL;
int16_t x366 = -1;
int32_t t91 = 1268;
static int16_t x375 = INT16_MIN;
int16_t x383 = INT16_MAX;
int8_t x384 = 26;
volatile int8_t x386 = 5;
static volatile int32_t t96 = -34336866;
int32_t x391 = -1006;
uint64_t x392 = 2323058LLU;
static int64_t x394 = INT64_MIN;
static int64_t x397 = INT64_MIN;
static int16_t x398 = 86;


void f0(void) {
	static uint16_t x2 = 1384U;
	static volatile int32_t x3 = INT32_MAX;
	static int32_t x4 = -1;
	volatile int32_t t0 = 13707097;

	t0 = ((x1<x2)|(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x7 = INT32_MIN;

	t1 = ((x5<x6)|(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -4;

	t2 = ((x9<x10)|(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 13U;
	static volatile int64_t x15 = -1LL;
	int32_t x16 = INT32_MAX;
	int32_t t3 = -1;

	t3 = ((x13<x14)|(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 12;
	static int64_t x18 = INT64_MIN;
	int32_t x19 = -3617;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -74423119;

	t4 = ((x17<x18)|(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int64_t x22 = 10821663624LL;
	uint64_t x23 = 53883LLU;
	volatile int32_t t5 = 471572590;

	t5 = ((x21<x22)|(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1;
	static uint16_t x26 = 7U;
	int8_t x27 = -1;
	static volatile int32_t t6 = 3713;

	t6 = ((x25<x26)|(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	static int32_t x30 = -1;
	int8_t x32 = -1;
	volatile int32_t t7 = 16057;

	t7 = ((x29<x30)|(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int64_t x34 = 405234LL;
	uint8_t x35 = 105U;
	static uint64_t x36 = 3483013132LLU;
	volatile int32_t t8 = 0;

	t8 = ((x33<x34)|(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x38 = -1LL;
	static int32_t x39 = -23;
	uint32_t x40 = 1571U;

	t9 = ((x37<x38)|(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = 27618033734844LL;
	static uint8_t x43 = UINT8_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 3183;

	t10 = ((x41<x42)|(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	uint8_t x46 = 14U;
	static uint64_t x47 = 299945564043267LLU;
	int64_t x48 = INT64_MIN;
	int32_t t11 = 1;

	t11 = ((x45<x46)|(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 1;
	int64_t x51 = -1LL;
	static int64_t x52 = -1LL;
	int32_t t12 = 0;

	t12 = ((x49<x50)|(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint8_t x54 = 3U;
	volatile uint8_t x55 = UINT8_MAX;
	volatile uint8_t x56 = UINT8_MAX;

	t13 = ((x53<x54)|(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile uint32_t x58 = 2812774U;
	int8_t x60 = 1;

	t14 = ((x57<x58)|(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = -1;
	uint16_t x64 = 62U;

	t15 = ((x61<x62)|(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	uint16_t x66 = 2853U;
	uint8_t x67 = 10U;
	uint32_t x68 = UINT32_MAX;
	int32_t t16 = 15;

	t16 = ((x65<x66)|(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	volatile uint8_t x70 = 6U;
	volatile uint64_t x71 = 53LLU;
	int32_t x72 = -20978;
	int32_t t17 = -29;

	t17 = ((x69<x70)|(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x75 = UINT16_MAX;
	static volatile int32_t t18 = -31;

	t18 = ((x73<x74)|(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	uint16_t x78 = 1U;
	int32_t x79 = INT32_MIN;
	uint8_t x80 = 4U;
	static int32_t t19 = -595074;

	t19 = ((x77<x78)|(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	int16_t x82 = 1209;
	uint64_t x83 = 3LLU;
	int16_t x84 = 80;

	t20 = ((x81<x82)|(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x87 = 27189454LLU;
	int32_t t21 = -1084;

	t21 = ((x85<x86)|(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = UINT16_MAX;
	uint32_t x91 = UINT32_MAX;
	static int32_t x92 = INT32_MIN;
	int32_t t22 = -3998;

	t22 = ((x89<x90)|(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x94 = 2;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = -14;

	t23 = ((x93<x94)|(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 940U;
	int32_t x98 = INT32_MAX;
	int8_t x99 = 21;

	t24 = ((x97<x98)|(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -25717926;
	uint16_t x102 = 5524U;
	int32_t x103 = 31062;
	static int8_t x104 = INT8_MIN;
	static int32_t t25 = 53;

	t25 = ((x101<x102)|(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x105 = 1U;
	uint8_t x106 = 28U;
	uint64_t x107 = UINT64_MAX;
	volatile uint64_t x108 = 10427375232406738LLU;
	static volatile int32_t t26 = -13;

	t26 = ((x105<x106)|(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = 279281477198LL;
	volatile int64_t x111 = -1LL;
	uint8_t x112 = 3U;

	t27 = ((x109<x110)|(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -28LL;
	static volatile int8_t x116 = 53;

	t28 = ((x113<x114)|(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = 7206;
	static uint32_t x119 = 245U;
	static uint32_t x120 = 57U;
	int32_t t29 = 77;

	t29 = ((x117<x118)|(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = INT64_MIN;
	static volatile int8_t x122 = -1;
	uint8_t x123 = 7U;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = 53926;

	t30 = ((x121<x122)|(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -1755436529536452569LL;
	int64_t x127 = 31633659845011LL;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 124777;

	t31 = ((x125<x126)|(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static volatile int64_t x130 = 10022292274447999LL;
	int8_t x131 = -1;
	volatile uint16_t x132 = 220U;
	volatile int32_t t32 = 275;

	t32 = ((x129<x130)|(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	static volatile int32_t x136 = 1485;
	int32_t t33 = 436853865;

	t33 = ((x133<x134)|(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	static int8_t x139 = INT8_MIN;
	static int16_t x140 = INT16_MIN;
	int32_t t34 = -1824;

	t34 = ((x137<x138)|(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 0U;
	int32_t x143 = -1;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = -15099341;

	t35 = ((x141<x142)|(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x146 = 1U;
	uint16_t x147 = 4045U;
	volatile int32_t t36 = 117028657;

	t36 = ((x145<x146)|(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = 162073131326172LL;
	static volatile int32_t x151 = 3019928;
	static int64_t x152 = -1LL;
	int32_t t37 = 1281869;

	t37 = ((x149<x150)|(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	volatile uint64_t x154 = 3189481LLU;
	int8_t x155 = INT8_MAX;
	volatile int16_t x156 = 895;
	volatile int32_t t38 = 227;

	t38 = ((x153<x154)|(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	volatile int64_t x159 = INT64_MIN;
	int16_t x160 = -261;
	static int32_t t39 = -5443838;

	t39 = ((x157<x158)|(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x164 = 13;
	int32_t t40 = 288;

	t40 = ((x161<x162)|(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	int64_t x166 = -1LL;
	volatile uint32_t x167 = 991709U;
	uint8_t x168 = 2U;
	static volatile int32_t t41 = 62;

	t41 = ((x165<x166)|(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 580472699U;
	volatile uint32_t x170 = 1067184636U;
	volatile int32_t x171 = INT32_MAX;
	volatile int16_t x172 = INT16_MIN;
	static int32_t t42 = 437711639;

	t42 = ((x169<x170)|(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int32_t x175 = -1;
	static volatile int32_t x176 = INT32_MIN;

	t43 = ((x173<x174)|(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = -1;
	int8_t x180 = -1;
	volatile int32_t t44 = 0;

	t44 = ((x177<x178)|(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MAX;
	uint32_t x182 = UINT32_MAX;
	int64_t x183 = -1LL;
	volatile int8_t x184 = 0;
	int32_t t45 = 1;

	t45 = ((x181<x182)|(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 255U;
	uint8_t x186 = 50U;
	uint16_t x187 = UINT16_MAX;
	volatile int16_t x188 = -1;
	int32_t t46 = 1;

	t46 = ((x185<x186)|(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 76437061316191601LLU;
	volatile int8_t x190 = INT8_MIN;
	int64_t x191 = 47959977578LL;
	int32_t x192 = INT32_MIN;

	t47 = ((x189<x190)|(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 74620643941LLU;
	uint32_t x194 = 1U;
	int64_t x195 = -1LL;
	int64_t x196 = INT64_MIN;
	int32_t t48 = 1;

	t48 = ((x193<x194)|(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MIN;
	uint16_t x200 = 3915U;
	int32_t t49 = -261069;

	t49 = ((x197<x198)|(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	static int16_t x202 = -1;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 41;

	t50 = ((x201<x202)|(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = UINT32_MAX;
	volatile uint64_t x207 = 2LLU;
	int32_t x208 = 23059;
	int32_t t51 = 22208325;

	t51 = ((x205<x206)|(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = 6651638365222391LL;
	uint32_t x211 = UINT32_MAX;
	static volatile int32_t t52 = -147;

	t52 = ((x209<x210)|(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = UINT32_MAX;
	uint16_t x215 = 11180U;
	volatile int8_t x216 = INT8_MAX;

	t53 = ((x213<x214)|(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x220 = UINT16_MAX;
	int32_t t54 = 863271;

	t54 = ((x217<x218)|(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = -1;
	uint32_t x223 = 47926U;
	uint16_t x224 = UINT16_MAX;
	int32_t t55 = 29733;

	t55 = ((x221<x222)|(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	volatile uint8_t x227 = UINT8_MAX;
	volatile int64_t x228 = INT64_MAX;

	t56 = ((x225<x226)|(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	uint8_t x230 = 1U;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MIN;

	t57 = ((x229<x230)|(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 8194032128964LL;
	static int8_t x234 = -1;
	volatile int64_t x235 = 2758LL;
	int64_t x236 = INT64_MIN;
	int32_t t58 = -1182;

	t58 = ((x233<x234)|(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 14471U;
	uint64_t x238 = 4571927166765743LLU;
	int32_t x239 = -1;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 9807;

	t59 = ((x237<x238)|(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MIN;
	volatile int32_t x243 = -1;
	static volatile int8_t x244 = INT8_MAX;
	volatile int32_t t60 = 6;

	t60 = ((x241<x242)|(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = INT8_MAX;
	int32_t x247 = 28874;
	uint32_t x248 = 98883U;
	int32_t t61 = 121898;

	t61 = ((x245<x246)|(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 500U;
	uint8_t x250 = 3U;
	int64_t x251 = 55LL;
	int8_t x252 = INT8_MIN;

	t62 = ((x249<x250)|(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -58;
	int8_t x255 = INT8_MIN;
	volatile uint16_t x256 = 2852U;
	int32_t t63 = 2611;

	t63 = ((x253<x254)|(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 2998137010065000774LLU;
	volatile uint32_t x258 = 97516940U;
	int8_t x259 = INT8_MIN;
	static volatile int16_t x260 = INT16_MIN;
	int32_t t64 = 7;

	t64 = ((x257<x258)|(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	int8_t x263 = -1;
	volatile int64_t x264 = 30450354LL;
	int32_t t65 = -23246;

	t65 = ((x261<x262)|(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	static int64_t x266 = -233365LL;
	volatile int32_t x267 = -1;
	volatile uint32_t x268 = 15272U;
	volatile int32_t t66 = -14952852;

	t66 = ((x265<x266)|(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = -57;
	volatile uint64_t x271 = 1906294633664090LLU;
	uint32_t x272 = 6U;

	t67 = ((x269<x270)|(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = 7;
	int64_t x275 = INT64_MIN;
	volatile int32_t t68 = 196760;

	t68 = ((x273<x274)|(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 109U;
	int64_t x278 = 1969311345LL;
	int16_t x279 = INT16_MIN;
	static int8_t x280 = 20;
	int32_t t69 = -479002;

	t69 = ((x277<x278)|(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	int16_t x283 = INT16_MAX;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -3;

	t70 = ((x281<x282)|(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 0;
	int64_t x287 = -1818134983694LL;

	t71 = ((x285<x286)|(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int64_t x291 = -39247424185665798LL;
	volatile int32_t t72 = -3;

	t72 = ((x289<x290)|(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int32_t x296 = INT32_MAX;

	t73 = ((x293<x294)|(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int16_t x299 = -1;
	volatile uint64_t x300 = UINT64_MAX;
	int32_t t74 = 0;

	t74 = ((x297<x298)|(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 5;
	int32_t x303 = INT32_MAX;
	uint32_t x304 = 32U;
	volatile int32_t t75 = -31927;

	t75 = ((x301<x302)|(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 16134;
	uint16_t x306 = 30U;
	int16_t x308 = 208;
	static volatile int32_t t76 = 248324;

	t76 = ((x305<x306)|(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 1;
	static uint64_t x311 = 6LLU;
	static int16_t x312 = -9762;

	t77 = ((x309<x310)|(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	volatile uint16_t x316 = UINT16_MAX;

	t78 = ((x313<x314)|(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -1;
	static int32_t x320 = INT32_MIN;
	static volatile int32_t t79 = 45530;

	t79 = ((x317<x318)|(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1283;
	int64_t x322 = -5255454753LL;
	static int32_t x323 = -85;
	static uint16_t x324 = 5U;
	int32_t t80 = 97771;

	t80 = ((x321<x322)|(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = -181;
	int16_t x327 = INT16_MAX;
	uint32_t x328 = 15487U;
	static int32_t t81 = 243175;

	t81 = ((x325<x326)|(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 47U;
	static uint16_t x330 = 894U;
	volatile int8_t x331 = INT8_MAX;
	volatile int32_t t82 = -3;

	t82 = ((x329<x330)|(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x334 = INT32_MIN;
	uint8_t x335 = UINT8_MAX;

	t83 = ((x333<x334)|(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = INT8_MIN;
	static volatile uint32_t x339 = UINT32_MAX;
	int32_t x340 = INT32_MAX;
	int32_t t84 = -644155986;

	t84 = ((x337<x338)|(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = 98710;
	int8_t x342 = INT8_MAX;
	volatile uint8_t x343 = 2U;
	uint16_t x344 = 205U;
	int32_t t85 = -7615;

	t85 = ((x341<x342)|(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 10;
	int64_t x346 = -8440930726462LL;
	static int8_t x347 = -1;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = 489494294;

	t86 = ((x345<x346)|(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	int64_t x351 = 71058LL;

	t87 = ((x349<x350)|(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	int64_t x355 = INT64_MIN;
	volatile int32_t x356 = INT32_MIN;

	t88 = ((x353<x354)|(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = -1;
	int32_t x359 = INT32_MIN;
	static int16_t x360 = 9337;
	int32_t t89 = 1;

	t89 = ((x357<x358)|(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	int32_t x362 = INT32_MIN;
	static uint16_t x364 = 421U;
	volatile int32_t t90 = -698372;

	t90 = ((x361<x362)|(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x367 = 24U;
	int32_t x368 = INT32_MAX;

	t91 = ((x365<x366)|(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = 166489963U;
	static uint8_t x372 = UINT8_MAX;
	static volatile int32_t t92 = 21071451;

	t92 = ((x369<x370)|(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 543288;
	uint32_t x374 = 145U;
	static volatile int64_t x376 = INT64_MAX;
	volatile int32_t t93 = 986131;

	t93 = ((x373<x374)|(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1157375LLU;
	int16_t x378 = INT16_MIN;
	uint32_t x379 = 841629U;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -1477;

	t94 = ((x377<x378)|(x379==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	volatile int64_t x382 = INT64_MAX;
	volatile int32_t t95 = 1970;

	t95 = ((x381<x382)|(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	static int16_t x387 = 0;
	int16_t x388 = INT16_MIN;

	t96 = ((x385<x386)|(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int32_t x390 = -44;
	volatile int32_t t97 = 9853049;

	t97 = ((x389<x390)|(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -1;
	uint32_t x395 = UINT32_MAX;
	volatile uint8_t x396 = 5U;
	volatile int32_t t98 = -116385;

	t98 = ((x393<x394)|(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x399 = INT8_MIN;
	int64_t x400 = 1512138251281919LL;
	int32_t t99 = 31314;

	t99 = ((x397<x398)|(x399==x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

