#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 42U;
volatile int32_t t0 = -237;
uint64_t x8 = 2208659186207503LLU;
int32_t x9 = 226579735;
uint64_t x12 = UINT64_MAX;
volatile int32_t t2 = -41780;
static int16_t x13 = -1;
uint64_t x20 = 1648LLU;
int32_t t4 = 613;
static volatile int16_t x22 = INT16_MIN;
int8_t x23 = INT8_MAX;
int32_t x33 = INT32_MIN;
int32_t x35 = -1;
static uint64_t x38 = UINT64_MAX;
static int64_t x41 = -1LL;
int64_t x42 = INT64_MIN;
uint8_t x44 = 6U;
int32_t t11 = -55;
static uint32_t x53 = 2014152365U;
uint64_t x54 = UINT64_MAX;
int16_t x56 = INT16_MAX;
int64_t x58 = -1LL;
int32_t x60 = INT32_MIN;
volatile int32_t t14 = 1;
int16_t x67 = INT16_MIN;
int16_t x70 = -255;
int8_t x76 = INT8_MIN;
int32_t x82 = 2;
int32_t x85 = INT32_MIN;
static uint16_t x86 = 3U;
uint16_t x91 = 13U;
int8_t x92 = 0;
int16_t x94 = INT16_MIN;
volatile int32_t t23 = 5;
static uint16_t x99 = UINT16_MAX;
static int16_t x103 = INT16_MAX;
uint32_t x104 = 3350684U;
static int16_t x108 = 3;
volatile int32_t t26 = 181;
int32_t x109 = INT32_MAX;
volatile int64_t x112 = -18667467LL;
static uint8_t x114 = 22U;
uint32_t x122 = 2U;
static volatile uint32_t x123 = UINT32_MAX;
static int32_t x127 = -1;
static int8_t x133 = INT8_MIN;
static int32_t t33 = -51530;
volatile uint64_t x140 = UINT64_MAX;
int32_t t34 = -20;
int32_t t36 = -424822;
int64_t x152 = INT64_MIN;
int16_t x158 = -38;
static uint64_t x159 = 8212107LLU;
int8_t x160 = 4;
static volatile uint32_t x162 = 235U;
uint8_t x168 = 1U;
int16_t x170 = INT16_MAX;
int16_t x172 = INT16_MAX;
volatile int32_t t43 = 16747879;
uint16_t x178 = 6U;
int32_t x180 = 1451854;
int64_t x182 = 220642668642703LL;
uint64_t x192 = UINT64_MAX;
volatile int8_t x193 = INT8_MIN;
static uint64_t x194 = 138807LLU;
uint32_t x196 = 2U;
volatile int32_t t48 = -102326;
uint16_t x199 = 96U;
static int16_t x201 = -428;
static int32_t x206 = -1;
static uint8_t x212 = 49U;
int32_t x214 = 1;
static volatile uint8_t x219 = 14U;
int16_t x220 = INT16_MIN;
static volatile int32_t t54 = -355;
uint32_t x230 = 220599843U;
static int64_t x231 = INT64_MIN;
volatile int8_t x233 = INT8_MIN;
int32_t t57 = 1;
int16_t x241 = -1;
volatile int16_t x254 = 0;
uint32_t x258 = 115302U;
int8_t x259 = INT8_MAX;
int16_t x267 = -156;
int16_t x276 = INT16_MIN;
uint32_t x280 = UINT32_MAX;
static volatile int32_t t67 = -1;
volatile int64_t x282 = -67335812583LL;
uint16_t x298 = UINT16_MAX;
static int32_t t72 = -39;
int32_t x304 = 2;
static volatile int32_t t74 = -18301204;
int32_t x310 = 115629450;
int64_t x312 = 69130857183773758LL;
int64_t x313 = 2LL;
volatile int32_t t77 = 219;
uint32_t x322 = 5328697U;
volatile int32_t t78 = 1597;
volatile int8_t x331 = INT8_MIN;
volatile int32_t t81 = 29484;
int64_t x337 = INT64_MIN;
volatile uint64_t x343 = 25955528867252LLU;
uint8_t x347 = 46U;
static int16_t x350 = INT16_MIN;
volatile uint8_t x353 = 102U;
static int16_t x357 = INT16_MIN;
int16_t x365 = INT16_MIN;
static int64_t x367 = INT64_MIN;
int32_t t89 = 341747;
volatile uint8_t x371 = 1U;
static uint16_t x372 = 7U;
volatile int32_t t90 = 1;
int16_t x380 = INT16_MAX;
int32_t x384 = 3773;
int32_t x385 = INT32_MIN;
static int32_t x386 = -1;
static int8_t x387 = 1;
static uint32_t x389 = UINT32_MAX;
volatile uint32_t x397 = UINT32_MAX;
int64_t x401 = -1LL;
uint8_t x402 = UINT8_MAX;
static volatile int32_t t98 = -1617;
int32_t t99 = 302;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint32_t x2 = 167916973U;
	uint32_t x4 = UINT32_MAX;

	t0 = (x1<((x2%x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = -1;
	int8_t x7 = INT8_MIN;
	int32_t t1 = -840113928;

	t1 = (x5<((x6%x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int8_t x11 = -1;

	t2 = (x9<((x10%x11)+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = -15693537LL;
	uint8_t x16 = 71U;
	int32_t t3 = -838159076;

	t3 = (x13<((x14%x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static volatile int64_t x18 = INT64_MIN;
	volatile int16_t x19 = INT16_MIN;

	t4 = (x17<((x18%x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -3820709;

	t5 = (x21<((x22%x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int32_t x26 = 0;
	static uint16_t x27 = 10045U;
	static uint32_t x28 = 221740U;
	volatile int32_t t6 = 1;

	t6 = (x25<((x26%x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 153;
	int64_t x30 = -1774917059LL;
	static volatile int16_t x31 = -12;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 13352937;

	t7 = (x29<((x30%x31)+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 248414;

	t8 = (x33<((x34%x35)+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	static int32_t x40 = 623;
	static int32_t t9 = 2;

	t9 = (x37<((x38%x39)+x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x43 = 2U;
	volatile int32_t t10 = -3303999;

	t10 = (x41<((x42%x43)+x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = 88750703LL;
	volatile uint32_t x46 = 4705753U;
	volatile int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MAX;

	t11 = (x45<((x46%x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 148U;
	static int64_t x50 = INT64_MIN;
	static uint8_t x51 = UINT8_MAX;
	static uint8_t x52 = UINT8_MAX;
	int32_t t12 = 403795;

	t12 = (x49<((x50%x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x55 = 858U;
	int32_t t13 = -183;

	t13 = (x53<((x54%x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 6;
	static volatile int16_t x59 = INT16_MAX;

	t14 = (x57<((x58%x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static int8_t x62 = 4;
	volatile uint32_t x63 = 77239332U;
	int64_t x64 = 295358954555628635LL;
	int32_t t15 = 117010;

	t15 = (x61<((x62%x63)+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -453;
	volatile uint16_t x66 = 2U;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = -12;

	t16 = (x65<((x66%x67)+x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 1U;
	int8_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -2658;

	t17 = (x69<((x70%x71)+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	static uint32_t x74 = 5832U;
	static uint16_t x75 = UINT16_MAX;
	static int32_t t18 = -38;

	t18 = (x73<((x74%x75)+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	int8_t x80 = 1;
	static int32_t t19 = 23;

	t19 = (x77<((x78%x79)+x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	static int8_t x83 = 2;
	uint16_t x84 = 174U;
	int32_t t20 = -30;

	t20 = (x81<((x82%x83)+x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = -1LL;
	volatile int32_t t21 = 0;

	t21 = (x85<((x86%x87)+x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	int16_t x90 = INT16_MIN;
	volatile int32_t t22 = 68695;

	t22 = (x89<((x90%x91)+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int64_t x95 = INT64_MAX;
	int32_t x96 = -1;

	t23 = (x93<((x94%x95)+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 6LLU;
	int16_t x98 = INT16_MAX;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 33553789;

	t24 = (x97<((x98%x99)+x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -1;
	volatile uint8_t x102 = 10U;
	int32_t t25 = -6453929;

	t25 = (x101<((x102%x103)+x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	volatile uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MIN;

	t26 = (x105<((x106%x107)+x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = -2LL;
	int64_t x111 = INT64_MIN;
	static volatile int32_t t27 = -21;

	t27 = (x109<((x110%x111)+x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	int32_t x115 = INT32_MIN;
	volatile int16_t x116 = INT16_MAX;
	int32_t t28 = -4012;

	t28 = (x113<((x114%x115)+x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	volatile int8_t x118 = -5;
	static uint16_t x119 = UINT16_MAX;
	volatile uint32_t x120 = 1322U;
	volatile int32_t t29 = -1125;

	t29 = (x117<((x118%x119)+x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -14;
	uint32_t x124 = 958862911U;
	volatile int32_t t30 = -7899688;

	t30 = (x121<((x122%x123)+x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 315009U;
	static int32_t x126 = -707375;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -709117274;

	t31 = (x125<((x126%x127)+x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	static int8_t x130 = INT8_MAX;
	volatile int8_t x131 = INT8_MAX;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t32 = -943;

	t32 = (x129<((x130%x131)+x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	static volatile uint32_t x135 = 11669684U;
	int32_t x136 = INT32_MIN;

	t33 = (x133<((x134%x135)+x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = INT8_MAX;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;

	t34 = (x137<((x138%x139)+x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 12910;
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = INT32_MIN;
	volatile int16_t x144 = -3649;
	volatile int32_t t35 = -946843827;

	t35 = (x141<((x142%x143)+x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	static int8_t x146 = INT8_MAX;
	uint32_t x147 = 1462996462U;
	volatile int64_t x148 = -1LL;

	t36 = (x145<((x146%x147)+x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = 39;
	uint16_t x151 = UINT16_MAX;
	volatile int32_t t37 = -111;

	t37 = (x149<((x150%x151)+x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 16744925547LL;
	int64_t x154 = INT64_MAX;
	uint64_t x155 = 7415369420LLU;
	static uint64_t x156 = 560223629863LLU;
	int32_t t38 = -1691186;

	t38 = (x153<((x154%x155)+x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x157 = 93LLU;
	static volatile int32_t t39 = -468;

	t39 = (x157<((x158%x159)+x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int32_t x163 = -125523682;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -1614778;

	t40 = (x161<((x162%x163)+x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	volatile uint8_t x166 = 13U;
	static int8_t x167 = INT8_MIN;
	int32_t t41 = -154;

	t41 = (x165<((x166%x167)+x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x171 = 19673657876LLU;
	int32_t t42 = -172392;

	t42 = (x169<((x170%x171)+x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	int32_t x175 = -13;
	int16_t x176 = -1;

	t43 = (x173<((x174%x175)+x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	uint64_t x179 = UINT64_MAX;
	int32_t t44 = -217626496;

	t44 = (x177<((x178%x179)+x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	uint8_t x183 = 47U;
	static int64_t x184 = -84405686477501LL;
	volatile int32_t t45 = -93614;

	t45 = (x181<((x182%x183)+x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = UINT16_MAX;
	volatile int64_t x186 = -1LL;
	volatile int16_t x187 = INT16_MAX;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = -110;

	t46 = (x185<((x186%x187)+x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	static int32_t x190 = INT32_MIN;
	uint32_t x191 = 43662227U;
	int32_t t47 = 465926;

	t47 = (x189<((x190%x191)+x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x195 = -1;

	t48 = (x193<((x194%x195)+x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	uint8_t x198 = UINT8_MAX;
	int32_t x200 = -4516;
	int32_t t49 = 132;

	t49 = (x197<((x198%x199)+x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MAX;
	int32_t x203 = 114020166;
	uint32_t x204 = UINT32_MAX;
	static volatile int32_t t50 = 481;

	t50 = (x201<((x202%x203)+x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = -1;
	int32_t t51 = 29230;

	t51 = (x205<((x206%x207)+x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -251768;
	uint16_t x210 = 7U;
	volatile int8_t x211 = INT8_MIN;
	static volatile int32_t t52 = -50;

	t52 = (x209<((x210%x211)+x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int32_t x215 = -1;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = -18081;

	t53 = (x213<((x214%x215)+x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MIN;
	uint16_t x218 = 39U;

	t54 = (x217<((x218%x219)+x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = UINT32_MAX;
	static uint8_t x226 = 51U;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = 1U;
	int32_t t55 = 6145;

	t55 = (x225<((x226%x227)+x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = 1;
	volatile int8_t x232 = 0;
	int32_t t56 = -1;

	t56 = (x229<((x230%x231)+x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x234 = INT16_MAX;
	int32_t x235 = -19;
	int16_t x236 = -1;

	t57 = (x233<((x234%x235)+x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MIN;
	int64_t x239 = -375127087685987431LL;
	static int8_t x240 = -1;
	int32_t t58 = -2251;

	t58 = (x237<((x238%x239)+x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x242 = 108145LL;
	uint64_t x243 = UINT64_MAX;
	volatile int32_t x244 = -1;
	int32_t t59 = 27;

	t59 = (x241<((x242%x243)+x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x245 = INT64_MIN;
	int16_t x246 = -1;
	static uint16_t x247 = UINT16_MAX;
	uint64_t x248 = UINT64_MAX;
	int32_t t60 = -370996490;

	t60 = (x245<((x246%x247)+x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = -1;
	volatile int16_t x255 = -299;
	int16_t x256 = -12606;
	static int32_t t61 = -7;

	t61 = (x253<((x254%x255)+x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = 0;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t62 = 1263412;

	t62 = (x257<((x258%x259)+x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x261 = UINT16_MAX;
	int8_t x262 = 0;
	static int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t63 = -64551087;

	t63 = (x261<((x262%x263)+x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	static uint64_t x266 = 273936LLU;
	static int64_t x268 = INT64_MAX;
	volatile int32_t t64 = 12372157;

	t64 = (x265<((x266%x267)+x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MAX;
	static volatile int32_t x271 = INT32_MAX;
	int16_t x272 = -1;
	int32_t t65 = 1;

	t65 = (x269<((x270%x271)+x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x273 = INT16_MAX;
	int64_t x274 = -1LL;
	int16_t x275 = INT16_MIN;
	volatile int32_t t66 = -1;

	t66 = (x273<((x274%x275)+x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = 7250493217594552LL;
	int32_t x278 = -1;
	uint8_t x279 = 51U;

	t67 = (x277<((x278%x279)+x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 187U;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = 10U;
	volatile int32_t t68 = 11627377;

	t68 = (x281<((x282%x283)+x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 15863U;
	uint8_t x286 = 17U;
	int32_t x287 = -1;
	uint16_t x288 = 7569U;
	static volatile int32_t t69 = 621;

	t69 = (x285<((x286%x287)+x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MIN;
	uint64_t x290 = 27418LLU;
	int32_t x291 = INT32_MIN;
	static int8_t x292 = 25;
	int32_t t70 = 7840;

	t70 = (x289<((x290%x291)+x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	volatile int32_t x294 = INT32_MIN;
	int32_t x295 = -1;
	volatile int32_t x296 = -367174544;
	int32_t t71 = 1372570;

	t71 = (x293<((x294%x295)+x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	volatile uint64_t x299 = 4341904747418147582LLU;
	static int8_t x300 = 32;

	t72 = (x297<((x298%x299)+x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	int64_t x303 = 390145LL;
	int32_t t73 = -44283045;

	t73 = (x301<((x302%x303)+x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x305 = INT32_MIN;
	volatile uint32_t x306 = 5256U;
	static int64_t x307 = -1LL;
	volatile uint64_t x308 = UINT64_MAX;

	t74 = (x305<((x306%x307)+x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	static uint8_t x311 = UINT8_MAX;
	volatile int32_t t75 = 26;

	t75 = (x309<((x310%x311)+x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x314 = -1;
	volatile int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	int32_t t76 = -57242;

	t76 = (x313<((x314%x315)+x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 7U;
	int64_t x318 = INT64_MAX;
	int8_t x319 = -3;
	int32_t x320 = 61490;

	t77 = (x317<((x318%x319)+x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 42;
	int64_t x323 = INT64_MAX;
	static int64_t x324 = INT64_MIN;

	t78 = (x321<((x322%x323)+x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = 3U;
	volatile int32_t x327 = INT32_MIN;
	int32_t x328 = -1;
	int32_t t79 = -74437882;

	t79 = (x325<((x326%x327)+x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	static int16_t x330 = -1;
	int16_t x332 = INT16_MAX;
	int32_t t80 = 57187427;

	t80 = (x329<((x330%x331)+x332));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x333 = 900U;
	volatile uint8_t x334 = 110U;
	int32_t x335 = INT32_MAX;
	static int32_t x336 = -87;

	t81 = (x333<((x334%x335)+x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = INT16_MAX;
	int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t82 = -12589576;

	t82 = (x337<((x338%x339)+x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MAX;
	int64_t x342 = -1LL;
	int32_t x344 = -27491264;
	volatile int32_t t83 = 0;

	t83 = (x341<((x342%x343)+x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int64_t x346 = 116187270LL;
	int16_t x348 = -1;
	int32_t t84 = -13004544;

	t84 = (x345<((x346%x347)+x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x349 = 855;
	int64_t x351 = INT64_MIN;
	uint8_t x352 = 1U;
	static int32_t t85 = 7;

	t85 = (x349<((x350%x351)+x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MAX;
	uint64_t x356 = UINT64_MAX;
	int32_t t86 = 151;

	t86 = (x353<((x354%x355)+x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x358 = -1LL;
	uint8_t x359 = 1U;
	uint8_t x360 = 2U;
	int32_t t87 = 20180;

	t87 = (x357<((x358%x359)+x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = -8;
	int16_t x362 = INT16_MAX;
	int32_t x363 = -1;
	static volatile int16_t x364 = INT16_MAX;
	volatile int32_t t88 = -79371;

	t88 = (x361<((x362%x363)+x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x366 = INT8_MIN;
	volatile uint8_t x368 = 11U;

	t89 = (x365<((x366%x367)+x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x369 = 4031288U;
	uint32_t x370 = 168U;

	t90 = (x369<((x370%x371)+x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = INT16_MAX;
	uint64_t x374 = 96852LLU;
	int64_t x375 = 4089LL;
	int8_t x376 = INT8_MIN;
	volatile int32_t t91 = -62346;

	t91 = (x373<((x374%x375)+x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	static volatile int32_t t92 = 4398593;

	t92 = (x377<((x378%x379)+x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x381 = 184U;
	static int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	volatile int32_t t93 = -31;

	t93 = (x381<((x382%x383)+x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t94 = 4271;

	t94 = (x385<((x386%x387)+x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x390 = 54U;
	static int16_t x391 = INT16_MIN;
	int8_t x392 = 1;
	volatile int32_t t95 = -1;

	t95 = (x389<((x390%x391)+x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x393 = 18U;
	uint16_t x394 = 29596U;
	static volatile int64_t x395 = INT64_MIN;
	static uint8_t x396 = UINT8_MAX;
	int32_t t96 = 2277429;

	t96 = (x393<((x394%x395)+x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = -1;
	volatile int8_t x399 = 5;
	int32_t x400 = 116426526;
	int32_t t97 = 101;

	t97 = (x397<((x398%x399)+x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x403 = -1;
	uint32_t x404 = 11328U;

	t98 = (x401<((x402%x403)+x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = 49326520275996LL;
	static int32_t x406 = INT32_MAX;
	uint16_t x407 = 4U;
	volatile int32_t x408 = -3248776;

	t99 = (x405<((x406%x407)+x408));

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

