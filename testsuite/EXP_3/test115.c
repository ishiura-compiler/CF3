#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
uint16_t x12 = UINT16_MAX;
int16_t x15 = INT16_MAX;
int8_t x19 = 1;
static volatile int8_t x26 = INT8_MIN;
uint32_t x27 = 15U;
volatile uint64_t t5 = 265206LLU;
int8_t x33 = INT8_MIN;
int32_t x38 = INT32_MAX;
static int64_t x39 = 13562793558174LL;
int16_t x42 = -1;
static volatile int16_t x49 = -112;
uint16_t x50 = 4U;
static int32_t x62 = INT32_MAX;
int32_t t13 = 16659;
int64_t t14 = 13058565189LL;
uint8_t x69 = UINT8_MAX;
static int8_t x71 = INT8_MIN;
int16_t x73 = INT16_MIN;
uint8_t x80 = UINT8_MAX;
uint64_t t19 = 27218856482LLU;
volatile uint32_t t21 = 14U;
uint32_t x105 = 2430U;
static uint64_t x107 = UINT64_MAX;
static volatile uint8_t x109 = 46U;
volatile int32_t t24 = -76797;
int16_t x113 = 5;
uint64_t t25 = 155929131LLU;
volatile int32_t t26 = 164;
int16_t x122 = 94;
volatile int8_t x133 = INT8_MIN;
static volatile int8_t x139 = -62;
uint8_t x142 = 3U;
volatile uint32_t t34 = 3881U;
volatile int16_t x158 = INT16_MAX;
static int32_t t36 = -4846;
int16_t x161 = -807;
uint32_t x163 = 330U;
static int16_t x165 = INT16_MIN;
int64_t x170 = INT64_MIN;
int64_t x175 = 6725359836024806LL;
volatile int64_t t43 = -611647LL;
int64_t x189 = -1LL;
static volatile int32_t x190 = INT32_MIN;
static int64_t x202 = INT64_MAX;
volatile int16_t x213 = 26;
int64_t x230 = INT64_MAX;
static int32_t x233 = 289166;
int8_t x235 = -1;
volatile int16_t x237 = INT16_MIN;
static int16_t x238 = INT16_MIN;
static int64_t x242 = INT64_MAX;
uint64_t x244 = UINT64_MAX;
volatile uint64_t t56 = 329326924380694LLU;
int16_t x245 = INT16_MIN;
volatile int32_t t57 = -9;
volatile int16_t x252 = -82;
volatile uint8_t x254 = UINT8_MAX;
volatile int8_t x255 = 0;
volatile int32_t t59 = -116;
int32_t x257 = INT32_MAX;
static int64_t x260 = INT64_MIN;
uint16_t x261 = 153U;
volatile uint16_t x265 = UINT16_MAX;
volatile int32_t x267 = INT32_MIN;
static int32_t t62 = 2719359;
int32_t x269 = INT32_MIN;
static int64_t t64 = 15686291947830540LL;
volatile int32_t t65 = -40526340;
int16_t x283 = INT16_MIN;
uint32_t x285 = 12000U;
volatile int16_t x297 = INT16_MIN;
int16_t x305 = INT16_MIN;
uint16_t x311 = 30U;
uint32_t x312 = 709564U;
int32_t x317 = INT32_MIN;
int64_t x323 = INT64_MIN;
volatile int64_t t76 = 108576LL;
uint32_t x337 = 1856038U;
int16_t x344 = -351;
int32_t t81 = 1;
volatile int32_t x347 = INT32_MIN;
static volatile int32_t x352 = INT32_MAX;
volatile int8_t x354 = 14;
uint16_t x355 = 26755U;
int32_t t86 = -15;
static volatile int32_t x365 = INT32_MIN;
int16_t x367 = -2;
uint16_t x368 = 0U;
int64_t t88 = 1952033042LL;
uint64_t x380 = UINT64_MAX;
int32_t t90 = -1;
int64_t x389 = INT64_MIN;
uint32_t x390 = UINT32_MAX;
static int64_t x403 = INT64_MIN;
volatile int32_t x409 = INT32_MAX;
int64_t x410 = INT64_MAX;
int8_t x411 = INT8_MAX;
static volatile uint32_t t95 = 214U;
volatile int8_t x415 = 2;
volatile int32_t x421 = INT32_MAX;
int64_t x430 = 31197418060012250LL;
int32_t x432 = INT32_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = 13U;
	volatile int32_t t0 = 12;

	t0 = ((x1<x2)&(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	static int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	volatile int32_t t1 = 503362;

	t1 = ((x9<x10)&(x11+x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 0;
	int16_t x14 = -1;
	uint64_t x16 = 2852464LLU;
	static volatile uint64_t t2 = 3676278038LLU;

	t2 = ((x13<x14)&(x15+x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 14U;
	int32_t x18 = INT32_MIN;
	static volatile uint16_t x20 = UINT16_MAX;
	int32_t t3 = 0;

	t3 = ((x17<x18)&(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MAX;
	static int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	volatile int32_t t4 = -57245;

	t4 = ((x21<x22)&(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x25 = 29U;
	uint64_t x28 = UINT64_MAX;

	t5 = ((x25<x26)&(x27+x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x34 = 59743378LLU;
	static volatile int8_t x35 = INT8_MIN;
	int16_t x36 = 25;
	int32_t t6 = 18532;

	t6 = ((x33<x34)&(x35+x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 3720U;
	int32_t x40 = -49783292;
	static int64_t t7 = 24305982LL;

	t7 = ((x37<x38)&(x39+x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	volatile int16_t x43 = INT16_MIN;
	volatile int8_t x44 = 3;
	int32_t t8 = -44678;

	t8 = ((x41<x42)&(x43+x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = -17867LL;
	int64_t x46 = -22273609335LL;
	static int64_t x47 = INT64_MAX;
	volatile int32_t x48 = -1;
	volatile int64_t t9 = -3234766117948349LL;

	t9 = ((x45<x46)&(x47+x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MAX;
	volatile int32_t t10 = -65203451;

	t10 = ((x49<x50)&(x51+x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x53 = UINT32_MAX;
	uint8_t x54 = 41U;
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = -1;
	static volatile int32_t t11 = 392;

	t11 = ((x53<x54)&(x55+x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -156820044;
	int64_t x58 = -478LL;
	int16_t x59 = INT16_MIN;
	int64_t x60 = 16LL;
	int64_t t12 = 16100LL;

	t12 = ((x57<x58)&(x59+x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	int16_t x63 = 1960;
	volatile uint16_t x64 = 108U;

	t13 = ((x61<x62)&(x63+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 10388945763LL;
	uint16_t x66 = 11U;
	int8_t x67 = INT8_MAX;
	int64_t x68 = 3914495573463LL;

	t14 = ((x65<x66)&(x67+x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = INT64_MAX;
	static uint64_t x72 = 4012366LLU;
	volatile uint64_t t15 = 13029950796LLU;

	t15 = ((x69<x70)&(x71+x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x74 = 26U;
	int8_t x75 = INT8_MAX;
	static volatile uint64_t x76 = 2983LLU;
	static volatile uint64_t t16 = 50291194988983LLU;

	t16 = ((x73<x74)&(x75+x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 1374860U;
	volatile uint8_t x78 = 20U;
	int16_t x79 = INT16_MAX;
	volatile int32_t t17 = -1;

	t17 = ((x77<x78)&(x79+x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = 7LL;
	uint16_t x83 = 161U;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t18 = 19760;

	t18 = ((x81<x82)&(x83+x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 3U;
	int64_t x90 = 2LL;
	int16_t x91 = -761;
	static volatile uint64_t x92 = 28763LLU;

	t19 = ((x89<x90)&(x91+x92));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = INT64_MIN;
	static int8_t x94 = INT8_MIN;
	uint32_t x95 = 30012250U;
	static int16_t x96 = -37;
	uint32_t t20 = 120U;

	t20 = ((x93<x94)&(x95+x96));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MIN;
	int8_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	static uint32_t x100 = 7U;

	t21 = ((x97<x98)&(x99+x100));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = 16;
	static uint8_t x103 = UINT8_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t22 = -14662;

	t22 = ((x101<x102)&(x103+x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x106 = 3939314210931LL;
	int64_t x108 = -1LL;
	uint64_t t23 = 128234837149178LLU;

	t23 = ((x105<x106)&(x107+x108));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x110 = -1;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = INT16_MIN;

	t24 = ((x109<x110)&(x111+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x114 = INT64_MIN;
	uint8_t x115 = 17U;
	volatile uint64_t x116 = 2016LLU;

	t25 = ((x113<x114)&(x115+x116));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	static volatile int64_t x118 = -9827395259LL;
	uint8_t x119 = 6U;
	volatile uint8_t x120 = UINT8_MAX;

	t26 = ((x117<x118)&(x119+x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1546548;
	uint16_t x123 = 0U;
	int8_t x124 = INT8_MAX;
	static int32_t t27 = -1;

	t27 = ((x121<x122)&(x123+x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = 169U;
	int32_t x126 = -1;
	int8_t x127 = 18;
	static int8_t x128 = INT8_MAX;
	int32_t t28 = -168598436;

	t28 = ((x125<x126)&(x127+x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -14098270815442709LL;
	static int16_t x130 = -180;
	static int8_t x131 = INT8_MAX;
	static volatile int8_t x132 = 5;
	volatile int32_t t29 = 1;

	t29 = ((x129<x130)&(x131+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x134 = UINT16_MAX;
	volatile int32_t x135 = INT32_MAX;
	int64_t x136 = -340LL;
	volatile int64_t t30 = 4579549462918LL;

	t30 = ((x133<x134)&(x135+x136));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	static volatile int16_t x140 = INT16_MAX;
	int32_t t31 = -1;

	t31 = ((x137<x138)&(x139+x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x143 = 6702269490260LL;
	int64_t x144 = -1LL;
	int64_t t32 = 12308356650041362LL;

	t32 = ((x141<x142)&(x143+x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = 3709098861500LL;
	uint64_t x148 = 2635947363222769751LLU;
	uint64_t t33 = 63894239301LLU;

	t33 = ((x145<x146)&(x147+x148));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = INT8_MIN;
	static uint8_t x150 = 25U;
	uint8_t x151 = 24U;
	uint32_t x152 = 819084U;

	t34 = ((x149<x150)&(x151+x152));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -1;
	int32_t x154 = INT32_MIN;
	int16_t x155 = -1;
	int32_t x156 = -373;
	volatile int32_t t35 = 1;

	t35 = ((x153<x154)&(x155+x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 3U;
	uint8_t x159 = 31U;
	int16_t x160 = 1988;

	t36 = ((x157<x158)&(x159+x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x162 = -1672;
	int32_t x164 = -1;
	uint32_t t37 = 88312U;

	t37 = ((x161<x162)&(x163+x164));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x166 = UINT8_MAX;
	volatile uint32_t x167 = 1076410U;
	int64_t x168 = -1LL;
	int64_t t38 = 564380261320404LL;

	t38 = ((x165<x166)&(x167+x168));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MAX;
	volatile uint32_t x171 = 3110152U;
	volatile int16_t x172 = INT16_MIN;
	volatile uint32_t t39 = 53845U;

	t39 = ((x169<x170)&(x171+x172));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = 1;
	int64_t x174 = INT64_MAX;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t40 = 243330568635868168LLU;

	t40 = ((x173<x174)&(x175+x176));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 15290644LLU;
	volatile int32_t x178 = -51255;
	static int16_t x179 = INT16_MAX;
	volatile int8_t x180 = INT8_MIN;
	static volatile int32_t t41 = 7135131;

	t41 = ((x177<x178)&(x179+x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 504919024LLU;
	static int8_t x182 = 1;
	uint16_t x183 = 5U;
	int8_t x184 = INT8_MIN;
	int32_t t42 = -4462587;

	t42 = ((x181<x182)&(x183+x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x185 = -6;
	int16_t x186 = INT16_MIN;
	int16_t x187 = INT16_MIN;
	int64_t x188 = 16952404145LL;

	t43 = ((x185<x186)&(x187+x188));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x191 = 151LL;
	uint64_t x192 = 32194159949891790LLU;
	static volatile uint64_t t44 = 27532020559564LLU;

	t44 = ((x189<x190)&(x191+x192));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = 104;
	uint64_t x194 = 36885336821729LLU;
	int8_t x195 = INT8_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t45 = -13;

	t45 = ((x193<x194)&(x195+x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x203 = 7108749U;
	uint8_t x204 = 121U;
	volatile uint32_t t46 = 494117331U;

	t46 = ((x201<x202)&(x203+x204));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = 32094U;
	volatile uint16_t x206 = UINT16_MAX;
	int32_t x207 = INT32_MIN;
	uint64_t x208 = 3049040508575076403LLU;
	volatile uint64_t t47 = 0LLU;

	t47 = ((x205<x206)&(x207+x208));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 4441408673LLU;
	int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	int32_t t48 = -200928;

	t48 = ((x209<x210)&(x211+x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = 1953238950387037834LL;
	int8_t x215 = 52;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t49 = -164450729;

	t49 = ((x213<x214)&(x215+x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int32_t x218 = -1;
	int16_t x219 = INT16_MAX;
	volatile int16_t x220 = -776;
	volatile int32_t t50 = 176;

	t50 = ((x217<x218)&(x219+x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = UINT32_MAX;
	uint32_t x223 = 1948726U;
	volatile int32_t x224 = -1;
	volatile uint32_t t51 = 10531534U;

	t51 = ((x221<x222)&(x223+x224));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x225 = INT64_MAX;
	int32_t x226 = -31373326;
	uint64_t x227 = 11139LLU;
	static uint8_t x228 = 2U;
	uint64_t t52 = 49363162396LLU;

	t52 = ((x225<x226)&(x227+x228));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int64_t x231 = -1LL;
	int16_t x232 = -1;
	volatile int64_t t53 = -5712LL;

	t53 = ((x229<x230)&(x231+x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x234 = -1;
	static uint64_t x236 = 7221LLU;
	static volatile uint64_t t54 = 38246998806LLU;

	t54 = ((x233<x234)&(x235+x236));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x239 = 59;
	int32_t x240 = -1;
	static int32_t t55 = -1;

	t55 = ((x237<x238)&(x239+x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	volatile int32_t x243 = INT32_MAX;

	t56 = ((x241<x242)&(x243+x244));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x246 = UINT16_MAX;
	int8_t x247 = -2;
	int32_t x248 = INT32_MAX;

	t57 = ((x245<x246)&(x247+x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	volatile int16_t x250 = -1;
	volatile uint32_t x251 = 514U;
	uint32_t t58 = 28971391U;

	t58 = ((x249<x250)&(x251+x252));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 43U;
	int8_t x256 = -1;

	t59 = ((x253<x254)&(x255+x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x258 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	int64_t t60 = -582666095092315LL;

	t60 = ((x257<x258)&(x259+x260));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x262 = 115U;
	uint64_t x263 = 59637LLU;
	int16_t x264 = -1;
	uint64_t t61 = 54089590442466686LLU;

	t61 = ((x261<x262)&(x263+x264));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x266 = -1;
	volatile uint16_t x268 = UINT16_MAX;

	t62 = ((x265<x266)&(x267+x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x270 = INT64_MAX;
	int32_t x271 = 3295873;
	int8_t x272 = -1;
	volatile int32_t t63 = -287595;

	t63 = ((x269<x270)&(x271+x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = 67001U;
	uint16_t x274 = 20U;
	volatile int64_t x275 = INT64_MIN;
	int32_t x276 = 229909;

	t64 = ((x273<x274)&(x275+x276));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x277 = 53U;
	volatile int64_t x278 = -1LL;
	volatile int8_t x279 = INT8_MAX;
	static int8_t x280 = INT8_MIN;

	t65 = ((x277<x278)&(x279+x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -15LL;
	int32_t x282 = INT32_MAX;
	volatile int16_t x284 = -571;
	volatile int32_t t66 = -1365;

	t66 = ((x281<x282)&(x283+x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t67 = -859;

	t67 = ((x285<x286)&(x287+x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = -13300;
	int16_t x290 = 47;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 7U;
	int64_t t68 = 2404619297139LL;

	t68 = ((x289<x290)&(x291+x292));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = INT32_MIN;
	static uint16_t x295 = 859U;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t69 = 106LLU;

	t69 = ((x293<x294)&(x295+x296));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MAX;
	static uint32_t x300 = 9076U;
	uint32_t t70 = 2849611U;

	t70 = ((x297<x298)&(x299+x300));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x301 = 26543;
	int64_t x302 = INT64_MAX;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MAX;
	volatile int64_t t71 = 91LL;

	t71 = ((x301<x302)&(x303+x304));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x306 = 0U;
	static volatile int16_t x307 = 2;
	uint8_t x308 = 0U;
	volatile int32_t t72 = 8198073;

	t72 = ((x305<x306)&(x307+x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x309 = 1;
	int8_t x310 = INT8_MIN;
	volatile uint32_t t73 = 96233U;

	t73 = ((x309<x310)&(x311+x312));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -1;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = INT32_MIN;
	uint8_t x316 = UINT8_MAX;
	int32_t t74 = 1;

	t74 = ((x313<x314)&(x315+x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x318 = 3369581U;
	volatile uint64_t x319 = UINT64_MAX;
	int32_t x320 = 248;
	static uint64_t t75 = 6597711166LLU;

	t75 = ((x317<x318)&(x319+x320));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 64U;
	static volatile uint32_t x322 = 877542U;
	int32_t x324 = INT32_MAX;

	t76 = ((x321<x322)&(x323+x324));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = 914548U;
	volatile uint32_t x326 = UINT32_MAX;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t x328 = -1;
	volatile int32_t t77 = -1452502;

	t77 = ((x325<x326)&(x327+x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -1;
	int32_t x330 = INT32_MIN;
	volatile uint64_t x331 = 31145LLU;
	volatile int32_t x332 = -1428;
	volatile uint64_t t78 = 54347376333427534LLU;

	t78 = ((x329<x330)&(x331+x332));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x333 = 9137663LLU;
	uint8_t x334 = 1U;
	static volatile int8_t x335 = INT8_MAX;
	uint64_t x336 = 11304688487LLU;
	uint64_t t79 = 8306405LLU;

	t79 = ((x333<x334)&(x335+x336));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t80 = -6;

	t80 = ((x337<x338)&(x339+x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	volatile uint64_t x342 = 57120LLU;
	int8_t x343 = INT8_MAX;

	t81 = ((x341<x342)&(x343+x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x345 = 9U;
	uint32_t x346 = 3352U;
	int16_t x348 = 68;
	volatile int32_t t82 = 128894;

	t82 = ((x345<x346)&(x347+x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 57U;
	uint16_t x350 = 3159U;
	uint64_t x351 = UINT64_MAX;
	static uint64_t t83 = 84230921085598376LLU;

	t83 = ((x349<x350)&(x351+x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x353 = -8558951LL;
	static int16_t x356 = INT16_MIN;
	int32_t t84 = -950897376;

	t84 = ((x353<x354)&(x355+x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = -1;
	uint16_t x359 = 7U;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t85 = 19995164;

	t85 = ((x357<x358)&(x359+x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	int16_t x363 = -1;
	uint16_t x364 = 102U;

	t86 = ((x361<x362)&(x363+x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x366 = 42U;
	volatile int32_t t87 = -2;

	t87 = ((x365<x366)&(x367+x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = 6U;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = -482;
	static int64_t x376 = -96368517243LL;

	t88 = ((x373<x374)&(x375+x376));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -3;
	int64_t x378 = -24293LL;
	volatile int8_t x379 = 1;
	volatile uint64_t t89 = 601422783912188LLU;

	t89 = ((x377<x378)&(x379+x380));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x385 = 154U;
	volatile int8_t x386 = INT8_MAX;
	static int32_t x387 = INT32_MIN;
	uint8_t x388 = 2U;

	t90 = ((x385<x386)&(x387+x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x391 = 24U;
	static uint32_t x392 = 3U;
	volatile uint32_t t91 = 105828302U;

	t91 = ((x389<x390)&(x391+x392));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x393 = 54;
	uint64_t x394 = 10938LLU;
	uint64_t x395 = 1558651LLU;
	uint8_t x396 = 2U;
	uint64_t t92 = 1202465LLU;

	t92 = ((x393<x394)&(x395+x396));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MIN;
	volatile int32_t x402 = INT32_MIN;
	uint32_t x404 = UINT32_MAX;
	volatile int64_t t93 = 195340908LL;

	t93 = ((x401<x402)&(x403+x404));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x405 = -1LL;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	volatile uint32_t x408 = 38902404U;
	uint32_t t94 = 3U;

	t94 = ((x405<x406)&(x407+x408));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x412 = 417353827U;

	t95 = ((x409<x410)&(x411+x412));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x413 = UINT8_MAX;
	int64_t x414 = INT64_MAX;
	uint64_t x416 = 62221096LLU;
	volatile uint64_t t96 = 13426286885952LLU;

	t96 = ((x413<x414)&(x415+x416));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x417 = INT64_MIN;
	static volatile int8_t x418 = -3;
	uint32_t x419 = 480U;
	int64_t x420 = INT64_MIN;
	int64_t t97 = 915244397LL;

	t97 = ((x417<x418)&(x419+x420));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x422 = UINT16_MAX;
	int64_t x423 = -106395015889919LL;
	uint64_t x424 = 2506311139696663LLU;
	uint64_t t98 = 122LLU;

	t98 = ((x421<x422)&(x423+x424));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = 0U;
	uint32_t x431 = 1U;
	volatile uint32_t t99 = 268U;

	t99 = ((x429<x430)&(x431+x432));

	if (t99 != 1U) { NG(); } else { ; }
	
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

