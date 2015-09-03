#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
int64_t x7 = INT64_MAX;
int64_t x8 = INT64_MIN;
static uint16_t x9 = UINT16_MAX;
int64_t x10 = INT64_MIN;
int8_t x11 = INT8_MAX;
int16_t x13 = INT16_MAX;
int32_t x14 = 2326027;
int16_t x18 = -1;
int16_t x37 = -807;
int16_t x39 = -1;
int16_t x41 = -1;
uint8_t x44 = 13U;
uint16_t x55 = 0U;
static volatile int32_t t14 = -537791225;
static int64_t x77 = -3LL;
int32_t x78 = INT32_MIN;
int8_t x80 = INT8_MIN;
int64_t x82 = 0LL;
volatile int64_t x84 = INT64_MIN;
int64_t x85 = INT64_MAX;
int16_t x86 = 1;
uint16_t x89 = 10488U;
volatile int64_t x91 = INT64_MIN;
volatile int64_t x95 = -1LL;
static int32_t t23 = -232319102;
static int16_t x107 = -7;
int32_t x114 = -210749955;
volatile int32_t x129 = INT32_MIN;
int64_t x132 = 29082583209922203LL;
static uint32_t x134 = 432555601U;
int16_t x135 = INT16_MIN;
int16_t x145 = INT16_MAX;
int16_t x151 = INT16_MIN;
static uint64_t x155 = 72985LLU;
static int32_t t37 = -1961;
uint64_t x161 = 1774817LLU;
uint64_t x162 = 14LLU;
volatile int32_t t40 = 1;
int64_t x170 = INT64_MIN;
volatile int32_t x175 = INT32_MAX;
int16_t x179 = INT16_MIN;
int64_t x182 = INT64_MIN;
uint8_t x183 = UINT8_MAX;
int32_t x186 = INT32_MAX;
int32_t t45 = 0;
int64_t x190 = INT64_MIN;
int8_t x192 = INT8_MIN;
volatile int32_t t46 = 173175;
int8_t x208 = -13;
static uint16_t x229 = 393U;
int32_t x230 = -200994457;
int32_t t56 = 6;
static uint8_t x238 = 6U;
int8_t x240 = INT8_MIN;
int32_t x254 = INT32_MIN;
uint64_t x257 = 703723254735790165LLU;
static int32_t x267 = INT32_MAX;
uint32_t x270 = 261939325U;
int8_t x273 = INT8_MIN;
static int16_t x275 = INT16_MIN;
uint16_t x278 = 158U;
int32_t x280 = 139149;
int32_t t69 = -2468771;
int8_t x294 = -8;
uint32_t x303 = UINT32_MAX;
uint16_t x308 = UINT16_MAX;
volatile int16_t x315 = 5;
volatile int32_t t76 = -748201438;
volatile int8_t x319 = -40;
static uint16_t x320 = 2224U;
static int64_t x322 = -1LL;
int8_t x327 = -1;
volatile int32_t t79 = -260392;
static uint16_t x329 = 7476U;
int32_t x330 = -1;
volatile uint32_t x338 = UINT32_MAX;
uint8_t x339 = 72U;
int32_t t82 = -62;
static volatile uint8_t x343 = 0U;
static int32_t x346 = 1;
int16_t x348 = INT16_MIN;
static int8_t x354 = 0;
int8_t x357 = INT8_MIN;
int32_t x359 = INT32_MAX;
int8_t x364 = INT8_MIN;
int32_t t89 = -1;
int8_t x373 = INT8_MIN;
volatile int32_t t91 = -3806;
int8_t x381 = -5;
int8_t x384 = INT8_MIN;
int64_t x392 = INT64_MIN;
int32_t x393 = -46089520;
volatile int32_t t97 = -10471;


void f0(void) {
	int8_t x2 = 0;
	static uint16_t x3 = UINT16_MAX;
	int16_t x4 = 878;
	int32_t t0 = -26804;

	t0 = (x1<((x2^x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	volatile uint8_t x6 = UINT8_MAX;
	static volatile int32_t t1 = 162496;

	t1 = (x5<((x6^x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 267;

	t2 = (x9<((x10^x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x15 = 1U;
	int64_t x16 = INT64_MAX;
	int32_t t3 = 221542;

	t3 = (x13<((x14^x15)%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x19 = -1;
	volatile uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 401942;

	t4 = (x17<((x18^x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static volatile int32_t x26 = -93438;
	volatile uint16_t x27 = 15251U;
	static volatile int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -1654;

	t5 = (x25<((x26^x27)%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MAX;
	static int16_t x31 = 0;
	int64_t x32 = INT64_MAX;
	int32_t t6 = -30119;

	t6 = (x29<((x30^x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	int8_t x34 = 14;
	int8_t x35 = INT8_MIN;
	static int16_t x36 = 3459;
	int32_t t7 = 205382552;

	t7 = (x33<((x34^x35)%x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 801U;
	int16_t x40 = INT16_MIN;
	static int32_t t8 = 1;

	t8 = (x37<((x38^x39)%x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x42 = -1;
	int64_t x43 = 32437076244LL;
	volatile int32_t t9 = 252254;

	t9 = (x41<((x42^x43)%x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int32_t x46 = 0;
	static volatile int64_t x47 = INT64_MIN;
	volatile int16_t x48 = -23;
	int32_t t10 = -254693602;

	t10 = (x45<((x46^x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 104U;
	volatile int8_t x50 = INT8_MAX;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = -34;
	volatile int32_t t11 = -1;

	t11 = (x49<((x50^x51)%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile int32_t x54 = -1;
	int16_t x56 = INT16_MIN;
	int32_t t12 = 9317085;

	t12 = (x53<((x54^x55)%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	int32_t x58 = -1;
	uint64_t x59 = 41488783062LLU;
	uint8_t x60 = 44U;
	int32_t t13 = 28;

	t13 = (x57<((x58^x59)%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -1LL;
	static uint8_t x62 = UINT8_MAX;
	int64_t x63 = INT64_MIN;
	int64_t x64 = -1LL;

	t14 = (x61<((x62^x63)%x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 3999U;
	uint16_t x66 = 48U;
	int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = -753;

	t15 = (x65<((x66^x67)%x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 29999U;
	static int32_t x70 = INT32_MAX;
	int8_t x71 = -1;
	int64_t x72 = 4460905332018853005LL;
	static int32_t t16 = -198751351;

	t16 = (x69<((x70^x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	volatile uint8_t x74 = 3U;
	uint16_t x75 = 212U;
	int8_t x76 = INT8_MAX;
	int32_t t17 = 7851186;

	t17 = (x73<((x74^x75)%x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x79 = 9330311700LLU;
	int32_t t18 = 3171;

	t18 = (x77<((x78^x79)%x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	uint8_t x83 = 2U;
	static int32_t t19 = -263423529;

	t19 = (x81<((x82^x83)%x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x87 = 296815431211219220LLU;
	int64_t x88 = -4274535905591LL;
	int32_t t20 = -11627968;

	t20 = (x85<((x86^x87)%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x90 = INT16_MAX;
	int64_t x92 = 82703943883774661LL;
	int32_t t21 = 248415672;

	t21 = (x89<((x90^x91)%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = -9347;
	int32_t x94 = INT32_MIN;
	uint32_t x96 = UINT32_MAX;
	int32_t t22 = 5;

	t22 = (x93<((x94^x95)%x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MAX;
	static int8_t x99 = INT8_MAX;
	int16_t x100 = -928;

	t23 = (x97<((x98^x99)%x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	static int64_t x103 = 195513568LL;
	int8_t x104 = INT8_MAX;
	volatile int32_t t24 = 11588781;

	t24 = (x101<((x102^x103)%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	uint8_t x106 = 7U;
	uint64_t x108 = 6754251236918782LLU;
	volatile int32_t t25 = -1142220;

	t25 = (x105<((x106^x107)%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = 181U;
	uint64_t x110 = 844618LLU;
	int32_t x111 = INT32_MIN;
	volatile int32_t x112 = -1;
	int32_t t26 = -317319;

	t26 = (x109<((x110^x111)%x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x113 = 1789395U;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MIN;
	int32_t t27 = 8;

	t27 = (x113<((x114^x115)%x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = -1;
	volatile uint8_t x118 = 5U;
	int8_t x119 = -4;
	volatile uint8_t x120 = UINT8_MAX;
	int32_t t28 = -36074;

	t28 = (x117<((x118^x119)%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 50;
	static uint8_t x122 = 12U;
	uint8_t x123 = UINT8_MAX;
	static int16_t x124 = -4351;
	volatile int32_t t29 = -2151;

	t29 = (x121<((x122^x123)%x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	volatile uint32_t x126 = UINT32_MAX;
	int16_t x127 = 7;
	int64_t x128 = 14346460LL;
	volatile int32_t t30 = 6;

	t30 = (x125<((x126^x127)%x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	static int32_t x131 = -18838;
	volatile int32_t t31 = 157421721;

	t31 = (x129<((x130^x131)%x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 684U;
	int64_t x136 = INT64_MIN;
	volatile int32_t t32 = 0;

	t32 = (x133<((x134^x135)%x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	int8_t x140 = 1;
	int32_t t33 = 1;

	t33 = (x137<((x138^x139)%x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 0U;
	int32_t x142 = INT32_MAX;
	static int64_t x143 = INT64_MAX;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = -149038;

	t34 = (x141<((x142^x143)%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = INT64_MAX;
	int64_t x147 = INT64_MIN;
	static int64_t x148 = -1LL;
	volatile int32_t t35 = -2758058;

	t35 = (x145<((x146^x147)%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = UINT32_MAX;
	static int8_t x150 = INT8_MIN;
	int8_t x152 = -1;
	int32_t t36 = 3430175;

	t36 = (x149<((x150^x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = -1LL;
	int64_t x154 = 2LL;
	int8_t x156 = 2;

	t37 = (x153<((x154^x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x157 = 24U;
	int16_t x158 = -36;
	static int16_t x159 = INT16_MIN;
	int8_t x160 = 31;
	volatile int32_t t38 = -4;

	t38 = (x157<((x158^x159)%x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x163 = INT32_MIN;
	static volatile int64_t x164 = INT64_MAX;
	static int32_t t39 = 6588724;

	t39 = (x161<((x162^x163)%x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x166 = INT64_MAX;
	static int16_t x167 = 101;
	int64_t x168 = INT64_MIN;

	t40 = (x165<((x166^x167)%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = -1;
	int16_t x171 = -79;
	static int16_t x172 = INT16_MAX;
	static int32_t t41 = 924543323;

	t41 = (x169<((x170^x171)%x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = 13;
	uint32_t x174 = 753396U;
	static int64_t x176 = INT64_MAX;
	volatile int32_t t42 = 54518057;

	t42 = (x173<((x174^x175)%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = 58;
	int64_t x178 = -8960LL;
	static int64_t x180 = INT64_MIN;
	static volatile int32_t t43 = -184;

	t43 = (x177<((x178^x179)%x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 1977U;
	static int64_t x184 = -224731738669746LL;
	static int32_t t44 = -1772;

	t44 = (x181<((x182^x183)%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	volatile int32_t x187 = -13186;
	int64_t x188 = INT64_MAX;

	t45 = (x185<((x186^x187)%x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 3047849U;
	uint32_t x191 = 506U;

	t46 = (x189<((x190^x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = 1;
	uint32_t x194 = 13611806U;
	volatile int32_t x195 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t47 = 8978657;

	t47 = (x193<((x194^x195)%x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x197 = 51598250660LLU;
	uint16_t x198 = 239U;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t48 = -41;

	t48 = (x197<((x198^x199)%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -70809454001487038LL;
	uint32_t x202 = UINT32_MAX;
	volatile int16_t x203 = -58;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t49 = -153010;

	t49 = (x201<((x202^x203)%x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 41587U;
	static int32_t x206 = INT32_MAX;
	static int32_t x207 = -465374453;
	int32_t t50 = 7;

	t50 = (x205<((x206^x207)%x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x209 = -36738LL;
	int16_t x210 = 6058;
	int8_t x211 = 1;
	volatile int64_t x212 = INT64_MAX;
	volatile int32_t t51 = 29665335;

	t51 = (x209<((x210^x211)%x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -1;
	uint16_t x214 = 4202U;
	int64_t x215 = INT64_MIN;
	int64_t x216 = 887717LL;
	static volatile int32_t t52 = 0;

	t52 = (x213<((x214^x215)%x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -27;
	int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = -3;
	static int32_t t53 = -2892;

	t53 = (x217<((x218^x219)%x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	static int64_t x222 = 161815765404261884LL;
	int8_t x223 = 3;
	static int64_t x224 = -1LL;
	int32_t t54 = 16163;

	t54 = (x221<((x222^x223)%x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	int32_t x226 = -141;
	int64_t x227 = INT64_MIN;
	int32_t x228 = -1;
	int32_t t55 = -29;

	t55 = (x225<((x226^x227)%x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x231 = 150663722013382861LL;
	uint8_t x232 = 4U;

	t56 = (x229<((x230^x231)%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	static volatile int8_t x234 = 8;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = 4;
	volatile int32_t t57 = 68442;

	t57 = (x233<((x234^x235)%x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x237 = 4U;
	uint64_t x239 = 1045140376550198LLU;
	static volatile int32_t t58 = -1446474;

	t58 = (x237<((x238^x239)%x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x241 = UINT64_MAX;
	volatile int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MAX;
	static volatile int64_t x244 = -1255960090105LL;
	static int32_t t59 = -1;

	t59 = (x241<((x242^x243)%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	static int64_t x247 = -1621426688714705LL;
	uint16_t x248 = 549U;
	volatile int32_t t60 = -12395;

	t60 = (x245<((x246^x247)%x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = INT8_MIN;
	int32_t x250 = 38;
	uint64_t x251 = 11489362761540883LLU;
	uint64_t x252 = UINT64_MAX;
	int32_t t61 = -47;

	t61 = (x249<((x250^x251)%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = 1239604514LL;
	static int32_t x255 = -1;
	int8_t x256 = -1;
	int32_t t62 = 3512222;

	t62 = (x253<((x254^x255)%x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x258 = 6U;
	int8_t x259 = 5;
	volatile uint32_t x260 = 2U;
	volatile int32_t t63 = 199;

	t63 = (x257<((x258^x259)%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = 26966U;
	static int32_t x262 = -1;
	int32_t x263 = INT32_MIN;
	volatile uint32_t x264 = 368050U;
	volatile int32_t t64 = -12;

	t64 = (x261<((x262^x263)%x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MAX;
	volatile int64_t x266 = INT64_MIN;
	uint32_t x268 = 712180U;
	static int32_t t65 = 564;

	t65 = (x265<((x266^x267)%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x269 = 51;
	volatile int16_t x271 = 1171;
	int64_t x272 = -1LL;
	static int32_t t66 = -31;

	t66 = (x269<((x270^x271)%x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x274 = -1;
	volatile int16_t x276 = -11495;
	volatile int32_t t67 = -94448730;

	t67 = (x273<((x274^x275)%x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = 814403U;
	uint8_t x279 = 3U;
	volatile int32_t t68 = -346070901;

	t68 = (x277<((x278^x279)%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int16_t x286 = -1;
	volatile int32_t x287 = 2064;
	int64_t x288 = INT64_MIN;

	t69 = (x285<((x286^x287)%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 851;
	int8_t x290 = INT8_MIN;
	int8_t x291 = -1;
	int8_t x292 = 6;
	int32_t t70 = 0;

	t70 = (x289<((x290^x291)%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x293 = -1;
	static int32_t x295 = INT32_MAX;
	volatile int64_t x296 = -12LL;
	volatile int32_t t71 = 851237817;

	t71 = (x293<((x294^x295)%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = INT64_MAX;
	uint16_t x298 = 27892U;
	uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 11U;
	volatile int32_t t72 = 1;

	t72 = (x297<((x298^x299)%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = 3;
	int32_t x302 = INT32_MIN;
	uint64_t x304 = 6LLU;
	volatile int32_t t73 = 2;

	t73 = (x301<((x302^x303)%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x305 = INT64_MAX;
	static int64_t x306 = -1LL;
	static int32_t x307 = INT32_MIN;
	volatile int32_t t74 = 33037951;

	t74 = (x305<((x306^x307)%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t75 = 48;

	t75 = (x309<((x310^x311)%x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MAX;
	static uint64_t x314 = 372757121081382LLU;
	int8_t x316 = 1;

	t76 = (x313<((x314^x315)%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MIN;
	static int32_t t77 = 162949417;

	t77 = (x317<((x318^x319)%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x321 = -333LL;
	int16_t x323 = INT16_MAX;
	int64_t x324 = INT64_MAX;
	int32_t t78 = 255920;

	t78 = (x321<((x322^x323)%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	static volatile int8_t x326 = -1;
	int32_t x328 = INT32_MIN;

	t79 = (x325<((x326^x327)%x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x331 = 8U;
	volatile int8_t x332 = -13;
	volatile int32_t t80 = 0;

	t80 = (x329<((x330^x331)%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x333 = -929LL;
	static volatile int32_t x334 = INT32_MIN;
	uint16_t x335 = 369U;
	int8_t x336 = INT8_MIN;
	int32_t t81 = 26631;

	t81 = (x333<((x334^x335)%x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 1U;
	volatile uint16_t x340 = UINT16_MAX;

	t82 = (x337<((x338^x339)%x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x341 = INT32_MIN;
	uint8_t x342 = 68U;
	static int8_t x344 = -1;
	volatile int32_t t83 = 592420;

	t83 = (x341<((x342^x343)%x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x345 = UINT8_MAX;
	int64_t x347 = 2136550106430439LL;
	static volatile int32_t t84 = 3;

	t84 = (x345<((x346^x347)%x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x349 = 2U;
	volatile int32_t x350 = 494176320;
	static int8_t x351 = INT8_MIN;
	uint32_t x352 = 11U;
	volatile int32_t t85 = -12558962;

	t85 = (x349<((x350^x351)%x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 631690496LLU;
	int8_t x355 = -1;
	uint8_t x356 = 21U;
	volatile int32_t t86 = -30642106;

	t86 = (x353<((x354^x355)%x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x358 = INT8_MAX;
	uint64_t x360 = 14983781LLU;
	static int32_t t87 = -202;

	t87 = (x357<((x358^x359)%x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x361 = 3554U;
	int8_t x362 = INT8_MIN;
	volatile int32_t x363 = -1;
	volatile int32_t t88 = 31069239;

	t88 = (x361<((x362^x363)%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	volatile int32_t x366 = -1;
	static int16_t x367 = INT16_MAX;
	int16_t x368 = INT16_MAX;

	t89 = (x365<((x366^x367)%x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = 0;
	static int32_t x370 = -1;
	static int32_t x371 = INT32_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t90 = 92544336;

	t90 = (x369<((x370^x371)%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x374 = 31U;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;

	t91 = (x373<((x374^x375)%x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x377 = -4;
	uint32_t x378 = 702U;
	static uint8_t x379 = 10U;
	int16_t x380 = INT16_MIN;
	volatile int32_t t92 = -14381;

	t92 = (x377<((x378^x379)%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x382 = -119472LL;
	int32_t x383 = INT32_MIN;
	volatile int32_t t93 = 94268;

	t93 = (x381<((x382^x383)%x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = 13936046LL;
	uint32_t x386 = 17U;
	volatile uint16_t x387 = 864U;
	static uint8_t x388 = 4U;
	volatile int32_t t94 = -73095885;

	t94 = (x385<((x386^x387)%x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = INT16_MAX;
	static int16_t x390 = -1;
	uint8_t x391 = UINT8_MAX;
	volatile int32_t t95 = -18757482;

	t95 = (x389<((x390^x391)%x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x394 = 3034030;
	int8_t x395 = -1;
	static int8_t x396 = 1;
	static volatile int32_t t96 = 309889;

	t96 = (x393<((x394^x395)%x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = -1;
	int32_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	uint8_t x400 = 13U;

	t97 = (x397<((x398^x399)%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = INT32_MIN;
	static int8_t x402 = 5;
	uint32_t x403 = 6810534U;
	uint64_t x404 = UINT64_MAX;
	int32_t t98 = -347;

	t98 = (x401<((x402^x403)%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x405 = UINT16_MAX;
	static int32_t x406 = INT32_MIN;
	uint64_t x407 = UINT64_MAX;
	static int8_t x408 = -1;
	volatile int32_t t99 = -793;

	t99 = (x405<((x406^x407)%x408));

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

