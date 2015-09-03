#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
volatile int16_t x8 = 1;
int64_t x9 = 60050195990LL;
uint8_t x11 = 1U;
int16_t x13 = 3;
uint8_t x14 = 76U;
volatile int64_t x15 = -1LL;
int32_t x18 = INT32_MAX;
int64_t x20 = INT64_MIN;
volatile uint16_t x23 = 17U;
uint32_t x25 = UINT32_MAX;
int16_t x26 = -37;
volatile int32_t t9 = -945267;
uint64_t x41 = UINT64_MAX;
static volatile int16_t x45 = -416;
int64_t x47 = -2957167122170858LL;
int32_t t11 = -663060;
volatile int32_t t12 = 42880683;
static int16_t x63 = INT16_MIN;
int8_t x67 = 0;
volatile int64_t x69 = INT64_MAX;
int8_t x70 = 3;
static volatile int64_t x75 = -1LL;
volatile uint8_t x80 = 1U;
int8_t x82 = INT8_MIN;
volatile int8_t x84 = -1;
int32_t t25 = 10;
volatile int64_t x109 = 1768617011LL;
uint32_t x114 = UINT32_MAX;
volatile uint32_t x116 = 2581664U;
int16_t x119 = 1518;
int32_t t30 = 1203;
int64_t x126 = 455215752928746270LL;
volatile int32_t t34 = 303049035;
volatile uint16_t x142 = 0U;
int8_t x147 = INT8_MIN;
int32_t t36 = -6061107;
int16_t x151 = -1;
int8_t x153 = INT8_MAX;
int64_t x154 = INT64_MIN;
volatile int32_t t38 = -881;
static volatile int16_t x157 = INT16_MIN;
uint32_t x161 = 116U;
int32_t x164 = INT32_MIN;
volatile int32_t x173 = INT32_MIN;
int16_t x177 = INT16_MIN;
static int16_t x181 = -3;
int16_t x186 = INT16_MIN;
volatile int8_t x194 = -1;
int8_t x196 = INT8_MIN;
volatile int32_t t48 = 60001;
int32_t x206 = 1;
static uint16_t x207 = 4U;
static int32_t t51 = 1;
int8_t x210 = 2;
uint32_t x222 = 1U;
int32_t x223 = INT32_MIN;
int32_t t55 = -41;
volatile uint64_t x227 = 6LLU;
int32_t t57 = 24442396;
int16_t x233 = INT16_MIN;
volatile int32_t t59 = -370254291;
int16_t x243 = INT16_MAX;
static int32_t x248 = INT32_MIN;
static uint8_t x249 = 0U;
int32_t x255 = -20;
static volatile int32_t x260 = INT32_MIN;
static int16_t x264 = INT16_MIN;
static volatile uint8_t x265 = UINT8_MAX;
uint64_t x267 = 668919290918483760LLU;
int8_t x271 = INT8_MIN;
int64_t x272 = INT64_MAX;
int32_t t68 = 290398;
static volatile uint32_t x282 = 224437U;
volatile int32_t t70 = 21;
uint8_t x286 = UINT8_MAX;
uint32_t x293 = 520826076U;
static int32_t t73 = 943531491;
static int16_t x299 = 1;
uint32_t x301 = 188610U;
uint8_t x303 = 0U;
uint64_t x309 = UINT64_MAX;
int32_t x310 = 1;
volatile uint8_t x314 = 6U;
int32_t t78 = 21484;
static volatile uint8_t x318 = 82U;
uint16_t x319 = 2002U;
int16_t x326 = -1;
static uint16_t x332 = 3U;
static volatile int32_t t82 = 6;
volatile int32_t t86 = 3;
volatile int64_t x357 = INT64_MIN;
int8_t x362 = INT8_MAX;
volatile int64_t x364 = INT64_MIN;
static int32_t t90 = 4825;
int64_t x366 = INT64_MIN;
volatile int8_t x373 = INT8_MIN;
int16_t x375 = INT16_MIN;
int64_t x376 = INT64_MIN;
int64_t x379 = -1LL;
static volatile int32_t t94 = 4758173;
int8_t x384 = 0;
int32_t t95 = 715301;
volatile uint64_t x386 = 14660480LLU;
static uint64_t x392 = 11942LLU;


void f0(void) {
	uint32_t x1 = 94238U;
	int64_t x2 = -6165LL;
	int32_t x3 = -1;
	int16_t x4 = 6872;
	int32_t t0 = 6506139;

	t0 = (x1<((x2<=x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int32_t x7 = INT32_MIN;
	volatile int32_t t1 = 22498;

	t1 = (x5<((x6<=x7)|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	int32_t x12 = -437529575;
	volatile int32_t t2 = 3736316;

	t2 = (x9<((x10<=x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x16 = -3;
	int32_t t3 = 210367;

	t3 = (x13<((x14<=x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint8_t x19 = UINT8_MAX;
	int32_t t4 = 552042748;

	t4 = (x17<((x18<=x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	uint32_t x22 = UINT32_MAX;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -10494221;

	t5 = (x21<((x22<=x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x27 = -32;
	volatile int64_t x28 = INT64_MIN;
	static volatile int32_t t6 = -259378;

	t6 = (x25<((x26<=x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 106U;
	volatile int64_t x30 = -1LL;
	volatile int64_t x31 = -1227829971375LL;
	uint64_t x32 = 897753944989848559LLU;
	volatile int32_t t7 = -27;

	t7 = (x29<((x30<=x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 25565883438LLU;
	volatile int8_t x34 = 3;
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = 0;
	int32_t t8 = -92;

	t8 = (x33<((x34<=x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -63656;
	static uint64_t x38 = 17410185983145LLU;
	static int16_t x39 = -54;
	volatile uint8_t x40 = UINT8_MAX;

	t9 = (x37<((x38<=x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	volatile int32_t x43 = INT32_MIN;
	uint32_t x44 = 468U;
	int32_t t10 = 2;

	t10 = (x41<((x42<=x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	int64_t x48 = -1LL;

	t11 = (x45<((x46<=x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -6061296622566442LL;
	int8_t x50 = 22;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;

	t12 = (x49<((x50<=x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 517429007635LLU;
	uint16_t x54 = UINT16_MAX;
	volatile uint8_t x55 = 60U;
	volatile int32_t x56 = 177;
	static int32_t t13 = -867290;

	t13 = (x53<((x54<=x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int16_t x58 = 125;
	int64_t x59 = INT64_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 0;

	t14 = (x57<((x58<=x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint32_t x62 = 207992015U;
	uint8_t x64 = 5U;
	volatile int32_t t15 = 546314204;

	t15 = (x61<((x62<=x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static volatile uint8_t x66 = UINT8_MAX;
	uint32_t x68 = 32625U;
	static int32_t t16 = 71422;

	t16 = (x65<((x66<=x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = INT64_MIN;
	int64_t x72 = 182284022426186624LL;
	int32_t t17 = 196;

	t17 = (x69<((x70<=x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int8_t x74 = INT8_MAX;
	int16_t x76 = -14123;
	int32_t t18 = -30;

	t18 = (x73<((x74<=x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	int64_t x78 = INT64_MIN;
	volatile uint8_t x79 = UINT8_MAX;
	static int32_t t19 = 113;

	t19 = (x77<((x78<=x79)|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 120847633LLU;
	uint32_t x83 = UINT32_MAX;
	volatile int32_t t20 = -442586254;

	t20 = (x81<((x82<=x83)|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	volatile uint64_t x86 = 175873488172019798LLU;
	static volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = 357745137745268LLU;
	static int32_t t21 = 202819;

	t21 = (x85<((x86<=x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	static uint16_t x90 = 476U;
	int8_t x91 = 1;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 83401776;

	t22 = (x89<((x90<=x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	uint64_t x94 = UINT64_MAX;
	int64_t x95 = INT64_MIN;
	static uint32_t x96 = 1130274U;
	static int32_t t23 = -10116263;

	t23 = (x93<((x94<=x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	int16_t x98 = -1;
	int32_t x99 = INT32_MIN;
	uint64_t x100 = 775134091701929096LLU;
	volatile int32_t t24 = -915155;

	t24 = (x97<((x98<=x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 480LLU;
	uint32_t x102 = 579U;
	int8_t x103 = 0;
	uint16_t x104 = UINT16_MAX;

	t25 = (x101<((x102<=x103)|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = -378;
	volatile int16_t x108 = -1;
	volatile int32_t t26 = 41;

	t26 = (x105<((x106<=x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = INT8_MIN;
	static int32_t x111 = -7;
	int8_t x112 = INT8_MIN;
	int32_t t27 = 2702888;

	t27 = (x109<((x110<=x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -112;
	int16_t x115 = 6525;
	static volatile int32_t t28 = -729124268;

	t28 = (x113<((x114<=x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -36;
	uint8_t x118 = 32U;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 15807920;

	t29 = (x117<((x118<=x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = 1;
	int32_t x122 = INT32_MAX;
	int16_t x123 = 21;
	static volatile int8_t x124 = INT8_MAX;

	t30 = (x121<((x122<=x123)|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int64_t x127 = INT64_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -181748;

	t31 = (x125<((x126<=x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	int8_t x130 = INT8_MAX;
	int8_t x131 = -27;
	int8_t x132 = INT8_MAX;
	int32_t t32 = 88983;

	t32 = (x129<((x130<=x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile int64_t x134 = -1LL;
	volatile int8_t x135 = INT8_MIN;
	int32_t x136 = -108107142;
	volatile int32_t t33 = -86865;

	t33 = (x133<((x134<=x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	static int64_t x138 = INT64_MAX;
	volatile int8_t x139 = -1;
	int64_t x140 = INT64_MAX;

	t34 = (x137<((x138<=x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -52898628;
	int64_t x143 = -45359561LL;
	int8_t x144 = -5;
	int32_t t35 = -172;

	t35 = (x141<((x142<=x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	volatile int32_t x146 = 1;
	volatile int16_t x148 = INT16_MAX;

	t36 = (x145<((x146<=x147)|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	int64_t x150 = 716661LL;
	uint64_t x152 = 3LLU;
	int32_t t37 = -205;

	t37 = (x149<((x150<=x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x155 = -1;
	uint8_t x156 = UINT8_MAX;

	t38 = (x153<((x154<=x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 3870190382929740LLU;
	static volatile int8_t x159 = INT8_MIN;
	int32_t x160 = -1;
	volatile int32_t t39 = 57726;

	t39 = (x157<((x158<=x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	static volatile int32_t t40 = 8974;

	t40 = (x161<((x162<=x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MIN;
	int32_t x168 = -24555006;
	volatile int32_t t41 = 780;

	t41 = (x165<((x166<=x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 3U;
	uint64_t x170 = 9212LLU;
	static uint64_t x171 = 3493127307LLU;
	volatile int64_t x172 = INT64_MAX;
	int32_t t42 = 1059;

	t42 = (x169<((x170<=x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MAX;
	static volatile int16_t x175 = INT16_MIN;
	static int64_t x176 = -3696486858014163LL;
	static int32_t t43 = -4365;

	t43 = (x173<((x174<=x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x178 = 7322568049LLU;
	volatile uint32_t x179 = 1364U;
	int16_t x180 = 175;
	int32_t t44 = -679222;

	t44 = (x177<((x178<=x179)|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 127;

	t45 = (x181<((x182<=x183)|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	static int32_t x187 = INT32_MIN;
	uint32_t x188 = 208U;
	volatile int32_t t46 = -3185115;

	t46 = (x185<((x186<=x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int16_t x190 = 63;
	volatile int8_t x191 = 37;
	static int16_t x192 = -1;
	static int32_t t47 = -446856;

	t47 = (x189<((x190<=x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 8400883322480968160LLU;
	int64_t x195 = INT64_MAX;

	t48 = (x193<((x194<=x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MAX;
	uint64_t x200 = UINT64_MAX;
	static int32_t t49 = -22248;

	t49 = (x197<((x198<=x199)|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = -4;
	static int16_t x202 = -8577;
	uint32_t x203 = UINT32_MAX;
	volatile int8_t x204 = -10;
	volatile int32_t t50 = 7037834;

	t50 = (x201<((x202<=x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 3U;
	int16_t x208 = 3;

	t51 = (x205<((x206<=x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int64_t x211 = INT64_MAX;
	volatile int32_t x212 = -1;
	static int32_t t52 = -460;

	t52 = (x209<((x210<=x211)|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 3;
	volatile int64_t x214 = INT64_MAX;
	int32_t x215 = -1;
	static volatile int16_t x216 = 251;
	volatile int32_t t53 = 19;

	t53 = (x213<((x214<=x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 545;
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = 508LLU;
	static uint16_t x220 = 23018U;
	volatile int32_t t54 = -2;

	t54 = (x217<((x218<=x219)|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	uint32_t x224 = UINT32_MAX;

	t55 = (x221<((x222<=x223)|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1484LL;
	int64_t x226 = INT64_MAX;
	volatile uint8_t x228 = 63U;
	volatile int32_t t56 = 2261034;

	t56 = (x225<((x226<=x227)|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	uint64_t x231 = 126824054685445030LLU;
	static volatile int8_t x232 = INT8_MIN;

	t57 = (x229<((x230<=x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MIN;
	static int32_t x235 = INT32_MIN;
	volatile uint64_t x236 = 31294680678674173LLU;
	volatile int32_t t58 = 354801424;

	t58 = (x233<((x234<=x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MAX;
	static uint16_t x239 = UINT16_MAX;
	int32_t x240 = -1;

	t59 = (x237<((x238<=x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -1LL;
	volatile int64_t x242 = INT64_MIN;
	int64_t x244 = -37787745LL;
	static volatile int32_t t60 = 137489;

	t60 = (x241<((x242<=x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 61U;
	uint16_t x246 = 91U;
	int8_t x247 = INT8_MIN;
	int32_t t61 = 26051815;

	t61 = (x245<((x246<=x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = 611LL;
	int32_t t62 = 1;

	t62 = (x249<((x250<=x251)|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1LL;
	int64_t x254 = INT64_MIN;
	int64_t x256 = -106729995296752655LL;
	volatile int32_t t63 = 3;

	t63 = (x253<((x254<=x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int64_t x258 = 47550932LL;
	static volatile int64_t x259 = INT64_MAX;
	static volatile int32_t t64 = 62;

	t64 = (x257<((x258<=x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MAX;
	uint16_t x263 = UINT16_MAX;
	int32_t t65 = 13694;

	t65 = (x261<((x262<=x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MAX;
	int16_t x268 = -1;
	int32_t t66 = 1302;

	t66 = (x265<((x266<=x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int16_t x270 = -1;
	volatile int32_t t67 = 28;

	t67 = (x269<((x270<=x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 0U;
	static int16_t x274 = -116;
	volatile int16_t x275 = 527;
	int32_t x276 = -1;

	t68 = (x273<((x274<=x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 6LL;
	int8_t x278 = 0;
	int16_t x279 = INT16_MAX;
	static volatile uint64_t x280 = 103674LLU;
	static volatile int32_t t69 = 18987160;

	t69 = (x277<((x278<=x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -17LL;
	int16_t x283 = -1;
	static int64_t x284 = -1LL;

	t70 = (x281<((x282<=x283)|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 0;

	t71 = (x285<((x286<=x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = 1394189028162445750LL;
	int8_t x291 = 1;
	int16_t x292 = -21;
	int32_t t72 = 1786793;

	t72 = (x289<((x290<=x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x294 = UINT32_MAX;
	int64_t x295 = -1LL;
	uint8_t x296 = 0U;

	t73 = (x293<((x294<=x295)|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = -132;
	static int32_t x298 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -15367615;

	t74 = (x297<((x298<=x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 3431U;
	volatile int64_t x304 = -7944661617260LL;
	int32_t t75 = -767602;

	t75 = (x301<((x302<=x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MAX;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = 1U;
	static volatile int32_t t76 = -152;

	t76 = (x305<((x306<=x307)|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x311 = -1;
	int16_t x312 = INT16_MAX;
	int32_t t77 = 62779088;

	t77 = (x309<((x310<=x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	int64_t x315 = -1LL;
	uint8_t x316 = UINT8_MAX;

	t78 = (x313<((x314<=x315)|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 23694694446069164LL;
	int16_t x320 = INT16_MIN;
	int32_t t79 = 151741695;

	t79 = (x317<((x318<=x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x321 = UINT8_MAX;
	int8_t x322 = INT8_MAX;
	volatile uint8_t x323 = UINT8_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = 892;

	t80 = (x321<((x322<=x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 3U;
	volatile int8_t x327 = -25;
	uint8_t x328 = 6U;
	volatile int32_t t81 = 380;

	t81 = (x325<((x326<=x327)|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = UINT64_MAX;
	uint8_t x330 = UINT8_MAX;
	volatile int8_t x331 = INT8_MIN;

	t82 = (x329<((x330<=x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 4830219LL;
	static uint8_t x334 = 41U;
	static int64_t x335 = 62LL;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = -14;

	t83 = (x333<((x334<=x335)|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 15;
	static int8_t x338 = INT8_MIN;
	int32_t x339 = -7;
	static volatile int8_t x340 = -6;
	volatile int32_t t84 = -729293;

	t84 = (x337<((x338<=x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	static volatile uint64_t x342 = 29044LLU;
	int32_t x343 = 518;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 216271;

	t85 = (x341<((x342<=x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 27348939780172LLU;
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	int8_t x348 = -9;

	t86 = (x345<((x346<=x347)|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = -5;
	static volatile uint32_t x351 = 264895540U;
	static volatile int32_t x352 = 620027923;
	int32_t t87 = 4070852;

	t87 = (x349<((x350<=x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MAX;
	int32_t x355 = 3189;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -13716105;

	t88 = (x353<((x354<=x355)|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = UINT16_MAX;
	static int8_t x359 = INT8_MAX;
	uint8_t x360 = 2U;
	int32_t t89 = -1;

	t89 = (x357<((x358<=x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = -13;
	int16_t x363 = -1;

	t90 = (x361<((x362<=x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MIN;
	static int8_t x367 = -1;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 409923;

	t91 = (x365<((x366<=x367)|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int64_t x370 = 48534669308044058LL;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = 653;

	t92 = (x369<((x370<=x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = UINT16_MAX;
	volatile int32_t t93 = 50821;

	t93 = (x373<((x374<=x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 1270U;
	uint64_t x378 = 41640703193180LLU;
	static uint64_t x380 = UINT64_MAX;

	t94 = (x377<((x378<=x379)|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	uint32_t x382 = 34827337U;
	uint16_t x383 = UINT16_MAX;

	t95 = (x381<((x382<=x383)|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 2286420LL;
	volatile uint32_t x387 = UINT32_MAX;
	int64_t x388 = -192LL;
	static int32_t t96 = -404239;

	t96 = (x385<((x386<=x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = -1;
	static int8_t x391 = INT8_MAX;
	static volatile int32_t t97 = -481350858;

	t97 = (x389<((x390<=x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = 1434995007840056749LL;
	uint32_t x394 = 64618U;
	uint64_t x395 = 106464726LLU;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -900022979;

	t98 = (x393<((x394<=x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -45;
	static int8_t x398 = -1;
	uint16_t x399 = 1937U;
	volatile int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -1329;

	t99 = (x397<((x398<=x399)|x400));

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

