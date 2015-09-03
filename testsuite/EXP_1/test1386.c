#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 1;
int32_t x8 = -44897499;
int16_t x25 = INT16_MIN;
int32_t x27 = -1;
static volatile int8_t x29 = INT8_MIN;
uint8_t x32 = 2U;
uint16_t x35 = 150U;
static volatile int32_t x36 = -1;
volatile int32_t t8 = -28;
uint64_t x42 = 171224264LLU;
int8_t x49 = -8;
uint8_t x53 = 0U;
int64_t x55 = INT64_MIN;
uint8_t x59 = 4U;
static uint8_t x67 = UINT8_MAX;
int32_t x96 = INT32_MAX;
static uint8_t x99 = UINT8_MAX;
uint8_t x106 = 53U;
static uint16_t x110 = 301U;
volatile int32_t t27 = 2560224;
volatile int8_t x115 = 15;
static int32_t x118 = INT32_MAX;
volatile uint16_t x119 = UINT16_MAX;
volatile uint64_t x122 = 1241963LLU;
int8_t x131 = -7;
int64_t x138 = 55010812LL;
int32_t x142 = -2676;
int8_t x149 = INT8_MIN;
int64_t x157 = 163013790229594LL;
static uint32_t x158 = 923890U;
uint16_t x159 = UINT16_MAX;
uint8_t x164 = 4U;
int32_t t40 = -5896;
uint64_t x166 = 3126315LLU;
volatile int32_t t41 = -5514;
int64_t x172 = 27757LL;
int16_t x178 = INT16_MIN;
uint64_t x187 = 309434561LLU;
int64_t x188 = -1LL;
uint8_t x196 = UINT8_MAX;
static uint64_t x200 = 3588602143354LLU;
int32_t x210 = INT32_MIN;
int32_t t53 = -57498829;
int64_t x218 = -1LL;
volatile uint64_t x221 = 27LLU;
int32_t x222 = -1;
volatile int32_t t55 = -10;
int8_t x227 = INT8_MIN;
int64_t x237 = -18750307485LL;
volatile int32_t t59 = -82102;
uint16_t x247 = 10U;
int32_t x249 = -1;
volatile uint32_t x261 = 237233339U;
uint16_t x262 = 61U;
static uint8_t x265 = 0U;
static int16_t x272 = INT16_MIN;
volatile int8_t x275 = INT8_MIN;
int32_t x276 = -4;
static int8_t x287 = -47;
static int16_t x289 = INT16_MIN;
int64_t x306 = -1LL;
volatile int32_t t76 = -776518;
int16_t x309 = INT16_MAX;
uint16_t x316 = 957U;
volatile int32_t t78 = -270360;
int8_t x318 = 6;
volatile int16_t x322 = INT16_MAX;
int32_t x324 = -1777470;
volatile int8_t x327 = INT8_MAX;
volatile int64_t x330 = -1LL;
static volatile int64_t x332 = -1LL;
volatile uint8_t x336 = UINT8_MAX;
static volatile int16_t x338 = -227;
uint32_t x345 = 0U;
static int64_t x347 = 33555412244LL;
volatile int32_t t87 = -2435;
static uint64_t x356 = 292983842164LLU;
volatile int64_t x360 = -310LL;
volatile int32_t t89 = 221025468;
uint16_t x363 = UINT16_MAX;
volatile int32_t t90 = -24437758;
uint32_t x372 = 3354263U;
static volatile uint8_t x373 = UINT8_MAX;
int64_t x383 = -1LL;
int32_t t96 = 26934577;
volatile int32_t t97 = -1493715;
int8_t x394 = INT8_MAX;
int8_t x397 = 52;
uint16_t x399 = 853U;
int16_t x400 = INT16_MIN;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int8_t x3 = -1;
	volatile int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -122741255;

	t0 = (((x1<x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int64_t x6 = 396LL;
	static int16_t x7 = INT16_MIN;
	int32_t t1 = 96096;

	t1 = (((x5<x6)*x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x10 = 1;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = -279270180;

	t2 = (((x9<x10)*x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 232082948;

	t3 = (((x13<x14)*x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 96U;
	int16_t x18 = INT16_MAX;
	int64_t x19 = -6186768337LL;
	int64_t x20 = -1LL;
	static volatile int32_t t4 = -914183643;

	t4 = (((x17<x18)*x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	int16_t x23 = INT16_MAX;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 11;

	t5 = (((x21<x22)*x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 73U;
	static int8_t x28 = 0;
	int32_t t6 = 88001310;

	t6 = (((x25<x26)*x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = INT32_MIN;
	int64_t x31 = -5LL;
	volatile int32_t t7 = 52;

	t7 = (((x29<x30)*x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	uint64_t x34 = UINT64_MAX;

	t8 = (((x33<x34)*x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = -1LL;
	int16_t x39 = -1;
	static int8_t x40 = -1;
	int32_t t9 = -39667238;

	t9 = (((x37<x38)*x39)==x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int8_t x43 = INT8_MIN;
	volatile int16_t x44 = -1;
	volatile int32_t t10 = -1;

	t10 = (((x41<x42)*x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 16443620135401678LLU;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MAX;
	static int8_t x48 = INT8_MIN;
	int32_t t11 = 203546;

	t11 = (((x45<x46)*x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -1;
	int8_t x51 = -1;
	int64_t x52 = -55811LL;
	int32_t t12 = -1;

	t12 = (((x49<x50)*x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x54 = 347330895LLU;
	int16_t x56 = 116;
	volatile int32_t t13 = -16128324;

	t13 = (((x53<x54)*x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x60 = 0;
	int32_t t14 = 22479;

	t14 = (((x57<x58)*x59)==x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	static int8_t x62 = INT8_MIN;
	static uint16_t x63 = UINT16_MAX;
	int16_t x64 = -1;
	static int32_t t15 = 3451402;

	t15 = (((x61<x62)*x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int8_t x66 = -1;
	int8_t x68 = 0;
	int32_t t16 = 2;

	t16 = (((x65<x66)*x67)==x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	int64_t x71 = 3572788212171472903LL;
	uint16_t x72 = 5707U;
	int32_t t17 = 28003646;

	t17 = (((x69<x70)*x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	int8_t x75 = 55;
	int64_t x76 = 130LL;
	int32_t t18 = -222;

	t18 = (((x73<x74)*x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	int32_t x78 = -1;
	int16_t x79 = INT16_MIN;
	int32_t x80 = 24666894;
	volatile int32_t t19 = -13330;

	t19 = (((x77<x78)*x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = -1;
	static uint32_t x82 = 11232U;
	int16_t x83 = -1;
	int64_t x84 = -1LL;
	int32_t t20 = -91500138;

	t20 = (((x81<x82)*x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -1;
	volatile int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -7;

	t21 = (((x85<x86)*x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = INT8_MIN;
	static volatile int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -286657321;

	t22 = (((x89<x90)*x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = 74685584;
	uint16_t x94 = 14U;
	int32_t x95 = -1;
	static int32_t t23 = 13724434;

	t23 = (((x93<x94)*x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -716;
	uint16_t x98 = 46U;
	int32_t x100 = -1;
	volatile int32_t t24 = 1426;

	t24 = (((x97<x98)*x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static int8_t x102 = 0;
	uint64_t x103 = UINT64_MAX;
	static int64_t x104 = 59106LL;
	int32_t t25 = 2033;

	t25 = (((x101<x102)*x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	volatile uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MAX;
	int32_t t26 = 1;

	t26 = (((x105<x106)*x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -48;
	uint32_t x111 = 14316778U;
	volatile uint32_t x112 = UINT32_MAX;

	t27 = (((x109<x110)*x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = -1;
	int64_t x116 = -1LL;
	int32_t t28 = -263753078;

	t28 = (((x113<x114)*x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 24U;
	static int64_t x120 = INT64_MAX;
	int32_t t29 = 22460580;

	t29 = (((x117<x118)*x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -8113;
	int64_t x123 = -667584LL;
	int8_t x124 = 13;
	int32_t t30 = 12760;

	t30 = (((x121<x122)*x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	static int16_t x126 = 0;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t x128 = INT32_MIN;
	int32_t t31 = 1;

	t31 = (((x125<x126)*x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = -4304143080658368348LL;
	int32_t x130 = 43843;
	int32_t x132 = -1;
	int32_t t32 = -147;

	t32 = (((x129<x130)*x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -2;
	int16_t x134 = -1;
	static int8_t x135 = 42;
	int16_t x136 = 4428;
	int32_t t33 = 885;

	t33 = (((x133<x134)*x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = INT32_MIN;
	int16_t x139 = -3523;
	int16_t x140 = -1;
	volatile int32_t t34 = -176206020;

	t34 = (((x137<x138)*x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MIN;
	static int32_t t35 = 380840950;

	t35 = (((x141<x142)*x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = 3788902125065847LLU;
	int32_t x148 = INT32_MAX;
	int32_t t36 = -484;

	t36 = (((x145<x146)*x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MIN;
	volatile int64_t x151 = -20LL;
	int64_t x152 = -265LL;
	int32_t t37 = -1127296;

	t37 = (((x149<x150)*x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int64_t x154 = INT64_MAX;
	int32_t x155 = -1;
	static uint64_t x156 = 2LLU;
	static volatile int32_t t38 = -112320982;

	t38 = (((x153<x154)*x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x160 = 3307340876555LLU;
	static volatile int32_t t39 = -5;

	t39 = (((x157<x158)*x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 79;
	volatile uint16_t x162 = 5991U;
	int32_t x163 = INT32_MAX;

	t40 = (((x161<x162)*x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MIN;

	t41 = (((x165<x166)*x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static int32_t x170 = -8073241;
	int16_t x171 = -1;
	int32_t t42 = -132410;

	t42 = (((x169<x170)*x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 7U;
	int16_t x174 = INT16_MIN;
	static int16_t x175 = -84;
	static int32_t x176 = INT32_MIN;
	static int32_t t43 = 904882112;

	t43 = (((x173<x174)*x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint32_t x179 = 238U;
	volatile int16_t x180 = -646;
	static int32_t t44 = 1;

	t44 = (((x177<x178)*x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -1;
	int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = -13780;

	t45 = (((x181<x182)*x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 3262459LLU;
	volatile int16_t x186 = INT16_MIN;
	int32_t t46 = -1;

	t46 = (((x185<x186)*x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 2759U;
	int64_t x190 = -58928745937470748LL;
	int16_t x191 = INT16_MAX;
	uint16_t x192 = 0U;
	int32_t t47 = 0;

	t47 = (((x189<x190)*x191)==x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int32_t x194 = INT32_MAX;
	volatile int8_t x195 = INT8_MIN;
	volatile int32_t t48 = -352;

	t48 = (((x193<x194)*x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static int32_t x198 = -39;
	static uint16_t x199 = 8037U;
	int32_t t49 = -102131052;

	t49 = (((x197<x198)*x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x202 = INT16_MIN;
	int16_t x203 = -1;
	int16_t x204 = 354;
	int32_t t50 = 1061;

	t50 = (((x201<x202)*x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 6084LLU;
	static volatile int64_t x206 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 125630;

	t51 = (((x205<x206)*x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -4;

	t52 = (((x209<x210)*x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int32_t x214 = INT32_MIN;
	uint32_t x215 = 56029836U;
	uint8_t x216 = 20U;

	t53 = (((x213<x214)*x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	static uint16_t x219 = UINT16_MAX;
	int32_t x220 = -1;
	int32_t t54 = 503215;

	t54 = (((x217<x218)*x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x223 = INT64_MIN;
	uint8_t x224 = 25U;

	t55 = (((x221<x222)*x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 901U;
	static volatile uint32_t x226 = UINT32_MAX;
	uint16_t x228 = 63U;
	static volatile int32_t t56 = -422669866;

	t56 = (((x225<x226)*x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 970U;
	int16_t x230 = 0;
	int16_t x231 = -1;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 1324990;

	t57 = (((x229<x230)*x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	int32_t x234 = -1;
	static volatile int8_t x235 = -8;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -2948;

	t58 = (((x233<x234)*x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x238 = UINT64_MAX;
	volatile uint32_t x239 = 162U;
	int32_t x240 = INT32_MIN;

	t59 = (((x237<x238)*x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	uint32_t x242 = 12738113U;
	volatile uint16_t x243 = 945U;
	static int16_t x244 = INT16_MAX;
	int32_t t60 = 0;

	t60 = (((x241<x242)*x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = 1100763160427443LLU;
	int32_t x248 = -1;
	volatile int32_t t61 = -607;

	t61 = (((x245<x246)*x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 9605U;
	static volatile int32_t x251 = 389906;
	static int8_t x252 = -1;
	static int32_t t62 = 13;

	t62 = (((x249<x250)*x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	volatile uint16_t x254 = 4166U;
	static int8_t x255 = -30;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = -645;

	t63 = (((x253<x254)*x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	int64_t x258 = 419032LL;
	volatile uint32_t x259 = UINT32_MAX;
	static uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = -892;

	t64 = (((x257<x258)*x259)==x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x263 = INT64_MIN;
	volatile int8_t x264 = -43;
	int32_t t65 = -251432920;

	t65 = (((x261<x262)*x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MIN;
	static int64_t x267 = -154145296864LL;
	uint64_t x268 = 68343657268581977LLU;
	int32_t t66 = -7;

	t66 = (((x265<x266)*x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	static int8_t x270 = -58;
	int16_t x271 = -7;
	static int32_t t67 = -124983;

	t67 = (((x269<x270)*x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	volatile int16_t x274 = -9970;
	volatile int32_t t68 = -3424887;

	t68 = (((x273<x274)*x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 47U;
	uint8_t x278 = 31U;
	uint8_t x279 = 7U;
	uint32_t x280 = 24794U;
	int32_t t69 = 199;

	t69 = (((x277<x278)*x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	uint16_t x282 = 13026U;
	volatile int16_t x283 = -1;
	volatile int8_t x284 = INT8_MAX;
	int32_t t70 = 3704;

	t70 = (((x281<x282)*x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 11U;
	static uint16_t x286 = 869U;
	uint32_t x288 = UINT32_MAX;
	static int32_t t71 = 19704;

	t71 = (((x285<x286)*x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = 8059;
	int8_t x291 = INT8_MIN;
	int16_t x292 = 242;
	volatile int32_t t72 = -4;

	t72 = (((x289<x290)*x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int16_t x294 = INT16_MIN;
	uint8_t x295 = UINT8_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	volatile int32_t t73 = 1;

	t73 = (((x293<x294)*x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -3662;
	volatile int32_t x298 = -754209948;
	int32_t x299 = -1;
	uint64_t x300 = 900827319LLU;
	volatile int32_t t74 = -1932;

	t74 = (((x297<x298)*x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -656LL;
	int8_t x302 = -1;
	uint64_t x303 = 811207831503647LLU;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 1266164;

	t75 = (((x301<x302)*x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 61U;
	static int16_t x307 = 123;
	volatile int64_t x308 = -95015718175753LL;

	t76 = (((x305<x306)*x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MAX;
	int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t77 = 978880788;

	t77 = (((x309<x310)*x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = 1;
	volatile int16_t x315 = 0;

	t78 = (((x313<x314)*x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	uint16_t x319 = 0U;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t79 = -22;

	t79 = (((x317<x318)*x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MAX;
	int32_t x323 = -28336770;
	volatile int32_t t80 = 941;

	t80 = (((x321<x322)*x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = 8242U;
	uint32_t x328 = 57U;
	static int32_t t81 = 1;

	t81 = (((x325<x326)*x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int32_t x331 = -477761;
	int32_t t82 = 2030826;

	t82 = (((x329<x330)*x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	volatile uint8_t x334 = 1U;
	int8_t x335 = INT8_MAX;
	int32_t t83 = -1;

	t83 = (((x333<x334)*x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -7;
	static uint64_t x339 = 44947568753112307LLU;
	int32_t x340 = -216728;
	volatile int32_t t84 = -4916;

	t84 = (((x337<x338)*x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = 2;

	t85 = (((x341<x342)*x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x346 = 11261728596599LLU;
	uint64_t x348 = UINT64_MAX;
	int32_t t86 = -69861948;

	t86 = (((x345<x346)*x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x349 = 240204955566LLU;
	uint32_t x350 = 132783U;
	int32_t x351 = -1;
	int32_t x352 = INT32_MAX;

	t87 = (((x349<x350)*x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 0U;
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MAX;
	volatile int32_t t88 = -127;

	t88 = (((x353<x354)*x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 7U;
	static int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;

	t89 = (((x357<x358)*x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 662U;
	int16_t x362 = -7905;
	static uint32_t x364 = UINT32_MAX;

	t90 = (((x361<x362)*x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 33252832LLU;
	int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	volatile uint8_t x368 = 12U;
	static int32_t t91 = -155293808;

	t91 = (((x365<x366)*x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = -1;
	int64_t x371 = INT64_MIN;
	volatile int32_t t92 = -3307;

	t92 = (((x369<x370)*x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 2U;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = -23749;
	volatile int32_t t93 = 933079658;

	t93 = (((x373<x374)*x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	uint64_t x378 = 22LLU;
	int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 72;

	t94 = (((x377<x378)*x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 1;
	uint64_t x382 = 3405496270162260662LLU;
	static int32_t x384 = -7;
	volatile int32_t t95 = 10217;

	t95 = (((x381<x382)*x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = 3;
	uint8_t x387 = 0U;
	uint8_t x388 = 47U;

	t96 = (((x385<x386)*x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	uint16_t x391 = UINT16_MAX;
	volatile int16_t x392 = -1;

	t97 = (((x389<x390)*x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int32_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 105940146;

	t98 = (((x393<x394)*x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x398 = 110878583LLU;
	static int32_t t99 = 0;

	t99 = (((x397<x398)*x399)==x400);

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

