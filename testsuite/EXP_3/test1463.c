#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -215386;
int32_t t3 = -18649995;
int32_t x21 = -60283303;
volatile uint32_t x38 = 27688U;
int16_t x39 = INT16_MIN;
int64_t x42 = INT64_MIN;
static int64_t x47 = INT64_MIN;
int8_t x48 = INT8_MIN;
int32_t t11 = 56900;
volatile uint32_t x58 = UINT32_MAX;
static volatile int64_t x61 = INT64_MIN;
int16_t x64 = -1;
int16_t x66 = 420;
volatile uint64_t x72 = UINT64_MAX;
volatile int32_t t17 = 76021;
int8_t x75 = -1;
int32_t t18 = -11;
static int64_t x77 = INT64_MAX;
int64_t x80 = INT64_MIN;
int32_t t19 = 917;
int8_t x85 = -1;
static volatile uint16_t x90 = UINT16_MAX;
static uint64_t x91 = 41362071670392887LLU;
volatile uint32_t x100 = UINT32_MAX;
volatile int32_t t24 = 100784448;
uint32_t x101 = 82584U;
volatile int16_t x105 = INT16_MIN;
uint16_t x110 = UINT16_MAX;
volatile int64_t x114 = INT64_MAX;
volatile int32_t t28 = -3;
static int64_t x117 = INT64_MIN;
int8_t x119 = INT8_MIN;
int8_t x122 = 3;
int8_t x124 = INT8_MAX;
int16_t x132 = INT16_MAX;
static uint8_t x142 = 4U;
volatile uint8_t x146 = UINT8_MAX;
static uint64_t x152 = 51477250LLU;
int8_t x153 = 0;
volatile int32_t t39 = -2;
int16_t x168 = INT16_MIN;
int32_t x170 = -1;
volatile uint16_t x171 = 3612U;
uint8_t x180 = UINT8_MAX;
int32_t t44 = 30992492;
int8_t x192 = INT8_MAX;
int16_t x196 = INT16_MAX;
int32_t x198 = -1;
static uint16_t x204 = 1U;
volatile int32_t t50 = 6569;
int32_t x206 = INT32_MIN;
uint16_t x207 = 4972U;
static int64_t x209 = INT64_MIN;
uint8_t x221 = 5U;
static volatile int64_t x225 = INT64_MIN;
uint64_t x227 = 81620469434403LLU;
volatile int64_t x230 = INT64_MAX;
int64_t x236 = INT64_MIN;
volatile int8_t x242 = -14;
int32_t x244 = -77;
static volatile int32_t t60 = -1;
volatile int16_t x251 = 85;
int8_t x258 = INT8_MIN;
static volatile int16_t x266 = 6;
int64_t x268 = 128430356564022605LL;
int64_t x272 = INT64_MIN;
int64_t x277 = INT64_MIN;
static int16_t x288 = -1;
volatile int16_t x292 = -5;
static uint16_t x297 = 35U;
uint8_t x298 = 0U;
int32_t t74 = 756023032;
volatile int32_t t75 = -2913;
volatile int64_t x311 = -1LL;
int32_t t79 = -83860;
static int64_t x322 = INT64_MAX;
static uint8_t x334 = 0U;
static int16_t x336 = 3191;
int32_t t84 = 7452950;
int64_t x342 = INT64_MIN;
static uint64_t x344 = 213510810485092096LLU;
int16_t x348 = 0;
int8_t x354 = 1;
uint64_t x357 = 136380100222043LLU;
uint16_t x359 = UINT16_MAX;
int8_t x360 = -1;
int16_t x365 = -9766;
int32_t x370 = -1;
volatile int32_t t92 = -37830;
volatile int8_t x373 = 3;
volatile int8_t x375 = -1;
volatile int32_t t94 = -1;
volatile int32_t t95 = -1008955;
uint64_t x389 = 1041851716LLU;
volatile int32_t t97 = 993;
int16_t x396 = -1;
volatile uint64_t x398 = 375269243619908LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = 0;
	static uint16_t x3 = 0U;
	int16_t x4 = -1;
	volatile int32_t t0 = -58415;

	t0 = ((x1<x2)>>(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 21U;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = 201919U;
	volatile int32_t t1 = -1;

	t1 = ((x5<x6)>>(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MIN;
	int32_t x12 = -1;

	t2 = ((x9<x10)>>(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -128175224802454LL;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	int32_t x16 = -1;

	t3 = ((x13<x14)>>(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int16_t x18 = 664;
	uint16_t x19 = 1498U;
	static uint32_t x20 = 103166626U;
	volatile int32_t t4 = 848847;

	t4 = ((x17<x18)>>(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = 1972;

	t5 = ((x21<x22)>>(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 125U;
	volatile uint64_t x26 = 449124209738LLU;
	int64_t x27 = -1500135931739660LL;
	int32_t x28 = -1;
	volatile int32_t t6 = 38469;

	t6 = ((x25<x26)>>(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 28922;
	int64_t x30 = INT64_MAX;
	static int8_t x31 = INT8_MAX;
	uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = -23;

	t7 = ((x29<x30)>>(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 131549157073919041LL;
	volatile uint8_t x34 = 0U;
	uint16_t x35 = 17U;
	int64_t x36 = 9331801167918LL;
	int32_t t8 = -7929797;

	t8 = ((x33<x34)>>(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MAX;
	int16_t x40 = 278;
	static int32_t t9 = 3;

	t9 = ((x37<x38)>>(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -495;

	t10 = ((x41<x42)>>(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 26U;
	int64_t x46 = INT64_MAX;

	t11 = ((x45<x46)>>(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = 0;
	uint16_t x50 = 6101U;
	volatile int32_t x51 = -1;
	volatile int8_t x52 = INT8_MAX;
	int32_t t12 = -117532;

	t12 = ((x49<x50)>>(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 590037795334LL;
	int64_t x54 = -1605162LL;
	int32_t x55 = -1;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = 93;

	t13 = ((x53<x54)>>(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 55612783020092LL;
	int8_t x59 = -47;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 110821;

	t14 = ((x57<x58)>>(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	static int32_t t15 = 458990;

	t15 = ((x61<x62)>>(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 56U;
	int32_t x67 = -1;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 3438298;

	t16 = ((x65<x66)>>(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = UINT8_MAX;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 1U;

	t17 = ((x69<x70)>>(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = 5981185378471LL;
	int64_t x74 = INT64_MIN;
	uint8_t x76 = UINT8_MAX;

	t18 = ((x73<x74)>>(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = INT8_MIN;
	volatile int64_t x79 = INT64_MAX;

	t19 = ((x77<x78)>>(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 6822;
	int32_t x82 = 1992992;
	int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = -780357558;

	t20 = ((x81<x82)>>(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = 235;
	static int16_t x87 = INT16_MAX;
	int32_t x88 = -1;
	int32_t t21 = 7629;

	t21 = ((x85<x86)>>(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = INT16_MIN;
	static int64_t x92 = INT64_MIN;
	int32_t t22 = 3;

	t22 = ((x89<x90)>>(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int64_t x94 = INT64_MIN;
	int16_t x95 = 251;
	uint64_t x96 = 3861106527620838281LLU;
	int32_t t23 = -704863550;

	t23 = ((x93<x94)>>(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 675U;
	uint32_t x98 = 446U;
	int32_t x99 = -1;

	t24 = ((x97<x98)>>(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MAX;
	static uint16_t x103 = UINT16_MAX;
	static int32_t x104 = -2084375;
	int32_t t25 = -2;

	t25 = ((x101<x102)>>(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 238447U;
	uint64_t x107 = 255311LLU;
	uint32_t x108 = 5208021U;
	static int32_t t26 = 9565524;

	t26 = ((x105<x106)>>(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 7507891U;
	uint64_t x111 = 88250240835LLU;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = -4589;

	t27 = ((x109<x110)>>(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int8_t x115 = INT8_MAX;
	int32_t x116 = INT32_MIN;

	t28 = ((x113<x114)>>(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x118 = 1460953694331LL;
	uint16_t x120 = 2U;
	volatile int32_t t29 = 6;

	t29 = ((x117<x118)>>(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile int16_t x123 = -1;
	int32_t t30 = -15299471;

	t30 = ((x121<x122)>>(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	static int16_t x127 = INT16_MIN;
	int8_t x128 = 6;
	volatile int32_t t31 = 200942;

	t31 = ((x125<x126)>>(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	uint8_t x130 = 4U;
	volatile int8_t x131 = -37;
	volatile int32_t t32 = 639;

	t32 = ((x129<x130)>>(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1389;
	volatile uint16_t x134 = 1125U;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -5452;

	t33 = ((x133<x134)>>(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x137 = -70;
	static int32_t x138 = 56;
	volatile int8_t x139 = INT8_MIN;
	volatile uint64_t x140 = 475854431LLU;
	volatile int32_t t34 = -4532;

	t34 = ((x137<x138)>>(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 167U;
	static volatile int16_t x143 = INT16_MIN;
	int64_t x144 = -1LL;
	volatile int32_t t35 = 795761;

	t35 = ((x141<x142)>>(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static volatile int8_t x147 = -20;
	volatile uint64_t x148 = 1136543LLU;
	volatile int32_t t36 = 41014;

	t36 = ((x145<x146)>>(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 0U;
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	static int32_t t37 = 1;

	t37 = ((x149<x150)>>(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = UINT8_MAX;
	uint32_t x155 = UINT32_MAX;
	static volatile int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -10665945;

	t38 = ((x153<x154)>>(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 23557265U;
	uint64_t x158 = 2657433907147571LLU;
	static int32_t x159 = INT32_MIN;
	uint64_t x160 = 1204LLU;

	t39 = ((x157<x158)>>(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 753292127U;
	uint8_t x162 = 31U;
	uint32_t x163 = 766U;
	volatile int8_t x164 = INT8_MAX;
	int32_t t40 = 50502;

	t40 = ((x161<x162)>>(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x166 = INT8_MAX;
	int32_t x167 = INT32_MIN;
	static volatile int32_t t41 = 82586884;

	t41 = ((x165<x166)>>(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -20;
	static int32_t x172 = INT32_MIN;
	int32_t t42 = 1;

	t42 = ((x169<x170)>>(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MAX;
	int16_t x175 = INT16_MIN;
	volatile int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = 0;

	t43 = ((x173<x174)>>(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 117U;
	volatile int16_t x178 = -13308;
	int8_t x179 = -7;

	t44 = ((x177<x178)>>(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = INT64_MIN;
	uint64_t x183 = 416368LLU;
	int16_t x184 = -1;
	volatile int32_t t45 = 64351;

	t45 = ((x181<x182)>>(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	uint8_t x186 = 10U;
	int64_t x187 = INT64_MIN;
	int32_t x188 = 32827367;
	volatile int32_t t46 = 11613722;

	t46 = ((x185<x186)>>(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	static int32_t x190 = INT32_MIN;
	uint16_t x191 = 126U;
	volatile int32_t t47 = -1012968;

	t47 = ((x189<x190)>>(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int32_t x194 = -1;
	volatile int64_t x195 = 686164496922LL;
	volatile int32_t t48 = 1045108652;

	t48 = ((x193<x194)>>(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int64_t x199 = -564434641835593LL;
	uint8_t x200 = 0U;
	int32_t t49 = -2;

	t49 = ((x197<x198)>>(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MAX;
	volatile int64_t x203 = INT64_MAX;

	t50 = ((x201<x202)>>(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 654632236418556LLU;
	int64_t x208 = INT64_MAX;
	int32_t t51 = 309;

	t51 = ((x205<x206)>>(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = 31U;
	int64_t x211 = INT64_MIN;
	int32_t x212 = -1;
	volatile int32_t t52 = 24287697;

	t52 = ((x209<x210)>>(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = -9;
	uint8_t x214 = 14U;
	int64_t x215 = INT64_MAX;
	uint16_t x216 = 11901U;
	volatile int32_t t53 = -77469901;

	t53 = ((x213<x214)>>(x215<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -2LL;
	static uint8_t x218 = UINT8_MAX;
	uint16_t x219 = 51U;
	int8_t x220 = INT8_MIN;
	int32_t t54 = 24723241;

	t54 = ((x217<x218)>>(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	volatile uint8_t x223 = 0U;
	uint16_t x224 = 26743U;
	volatile int32_t t55 = -3;

	t55 = ((x221<x222)>>(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x226 = 561LLU;
	static volatile int32_t x228 = INT32_MAX;
	int32_t t56 = 132231567;

	t56 = ((x225<x226)>>(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 5;
	volatile int16_t x231 = INT16_MIN;
	uint32_t x232 = UINT32_MAX;
	static volatile int32_t t57 = -731113905;

	t57 = ((x229<x230)>>(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 192U;
	volatile int16_t x234 = INT16_MIN;
	volatile uint8_t x235 = 6U;
	int32_t t58 = -4610;

	t58 = ((x233<x234)>>(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	int8_t x238 = INT8_MAX;
	static int64_t x239 = -84666451142LL;
	int64_t x240 = -1LL;
	int32_t t59 = 122064;

	t59 = ((x237<x238)>>(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 10;
	int16_t x243 = INT16_MIN;

	t60 = ((x241<x242)>>(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile uint64_t x246 = 10LLU;
	int8_t x247 = 4;
	static int32_t x248 = 3357056;
	volatile int32_t t61 = 120;

	t61 = ((x245<x246)>>(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int32_t x250 = INT32_MAX;
	uint32_t x252 = 630U;
	volatile int32_t t62 = -1002690;

	t62 = ((x249<x250)>>(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = -1LL;
	int64_t x255 = 5LL;
	int16_t x256 = -1;
	int32_t t63 = -1605232;

	t63 = ((x253<x254)>>(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = -2;
	volatile int16_t x259 = -1;
	int64_t x260 = -1LL;
	int32_t t64 = -88106556;

	t64 = ((x257<x258)>>(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	static int64_t x262 = INT64_MIN;
	int16_t x263 = 0;
	int64_t x264 = -3525796LL;
	int32_t t65 = 1;

	t65 = ((x261<x262)>>(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -1;
	uint8_t x267 = 48U;
	volatile int32_t t66 = -8;

	t66 = ((x265<x266)>>(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 660;
	uint32_t x270 = 166713815U;
	uint16_t x271 = UINT16_MAX;
	static volatile int32_t t67 = -24442398;

	t67 = ((x269<x270)>>(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int16_t x274 = 27;
	static uint8_t x275 = 1U;
	uint32_t x276 = UINT32_MAX;
	int32_t t68 = 124;

	t68 = ((x273<x274)>>(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = 81U;
	int32_t t69 = 8126016;

	t69 = ((x277<x278)>>(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	static volatile int16_t x282 = INT16_MIN;
	static uint32_t x283 = 62699U;
	static int64_t x284 = -56160989294830LL;
	volatile int32_t t70 = -151;

	t70 = ((x281<x282)>>(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 13342076U;
	int64_t x286 = 890677630307LL;
	int16_t x287 = 1277;
	int32_t t71 = -226;

	t71 = ((x285<x286)>>(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = -2;
	int64_t x291 = -1LL;
	int32_t t72 = -3;

	t72 = ((x289<x290)>>(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 4354LLU;
	static int64_t x294 = -87LL;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = 45;
	int32_t t73 = 0;

	t73 = ((x293<x294)>>(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x299 = 25;
	uint64_t x300 = UINT64_MAX;

	t74 = ((x297<x298)>>(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	int32_t x302 = INT32_MAX;
	uint64_t x303 = 157701788291233LLU;
	int64_t x304 = 53075633892LL;

	t75 = ((x301<x302)>>(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MIN;
	int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -49609345;

	t76 = ((x305<x306)>>(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile int64_t x310 = INT64_MIN;
	volatile uint32_t x312 = 1322845604U;
	static volatile int32_t t77 = 2621760;

	t77 = ((x309<x310)>>(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -4900;
	int16_t x314 = INT16_MIN;
	volatile int32_t x315 = 44;
	volatile uint8_t x316 = 55U;
	int32_t t78 = -1044775;

	t78 = ((x313<x314)>>(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 0U;
	static int64_t x318 = 16047LL;
	int16_t x319 = INT16_MAX;
	volatile int64_t x320 = 476LL;

	t79 = ((x317<x318)>>(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 3U;
	int8_t x323 = -3;
	static int32_t x324 = -1;
	volatile int32_t t80 = 161;

	t80 = ((x321<x322)>>(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 82U;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = 14487U;
	uint16_t x328 = 16251U;
	int32_t t81 = 1773619;

	t81 = ((x325<x326)>>(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = 8LLU;
	uint16_t x332 = 9499U;
	static volatile int32_t t82 = 2261360;

	t82 = ((x329<x330)>>(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 27506018139LLU;
	volatile uint16_t x335 = 0U;
	volatile int32_t t83 = 7351;

	t83 = ((x333<x334)>>(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	volatile int64_t x338 = 613LL;
	uint16_t x339 = 0U;
	static uint8_t x340 = 77U;

	t84 = ((x337<x338)>>(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -8936488466701366LL;
	volatile int32_t x343 = 1445375;
	int32_t t85 = -74995169;

	t85 = ((x341<x342)>>(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 46;
	int64_t x346 = -62108055416344LL;
	uint32_t x347 = 83637999U;
	int32_t t86 = -5;

	t86 = ((x345<x346)>>(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	uint64_t x350 = 773361LLU;
	volatile uint16_t x351 = 198U;
	uint32_t x352 = 1U;
	static volatile int32_t t87 = 8;

	t87 = ((x349<x350)>>(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int32_t x355 = 86;
	int64_t x356 = INT64_MIN;
	int32_t t88 = -231474;

	t88 = ((x353<x354)>>(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = -112287LL;
	static volatile int32_t t89 = 920;

	t89 = ((x357<x358)>>(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 21U;
	static int16_t x362 = 226;
	int64_t x363 = 954723964706562107LL;
	uint32_t x364 = 43745439U;
	int32_t t90 = 39;

	t90 = ((x361<x362)>>(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x366 = -1LL;
	volatile int16_t x367 = -1;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = 1855317;

	t91 = ((x365<x366)>>(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = -227417;

	t92 = ((x369<x370)>>(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 5U;
	int64_t x376 = INT64_MIN;
	int32_t t93 = -14232427;

	t93 = ((x373<x374)>>(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int32_t x379 = -261546269;
	static int16_t x380 = INT16_MIN;

	t94 = ((x377<x378)>>(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	volatile uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	uint16_t x384 = UINT16_MAX;

	t95 = ((x381<x382)>>(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 55873439106LLU;
	int32_t x386 = -236775128;
	volatile int64_t x387 = 531978LL;
	int32_t x388 = INT32_MIN;
	int32_t t96 = -3590278;

	t96 = ((x385<x386)>>(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = INT8_MIN;
	uint32_t x391 = 103U;
	uint32_t x392 = 7844U;

	t97 = ((x389<x390)>>(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 3304930LLU;
	int32_t t98 = 6592;

	t98 = ((x393<x394)>>(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -1;
	int16_t x399 = INT16_MAX;
	int32_t x400 = -1;
	static int32_t t99 = 178776;

	t99 = ((x397<x398)>>(x399<x400));

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

