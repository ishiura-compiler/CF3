#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 1U;
static int64_t x3 = 20908734772LL;
static volatile int32_t t0 = 104983;
int32_t x9 = INT32_MAX;
int32_t x16 = -1;
static int16_t x19 = INT16_MIN;
int16_t x25 = 6217;
static int32_t t7 = -174044629;
uint32_t x34 = UINT32_MAX;
static volatile int32_t t8 = -529189;
volatile int32_t t10 = 5361461;
volatile int32_t t11 = 1029764;
int8_t x55 = -3;
static volatile int8_t x57 = -2;
uint8_t x60 = 9U;
int16_t x61 = -4987;
uint64_t x63 = 2509210854LLU;
int32_t t16 = -14;
uint32_t x69 = 704722032U;
volatile int32_t t17 = -120774270;
static int16_t x74 = INT16_MAX;
volatile int32_t t18 = -701654500;
int32_t t19 = -83467570;
int64_t x90 = -29926210429429549LL;
uint64_t x91 = 58919341092LLU;
volatile int32_t t24 = -4;
int64_t x102 = -834LL;
int32_t t25 = -83023043;
uint32_t x105 = UINT32_MAX;
uint16_t x106 = UINT16_MAX;
int64_t x111 = INT64_MAX;
volatile int16_t x120 = INT16_MIN;
volatile int32_t t30 = -191047861;
volatile uint32_t x126 = 13U;
volatile uint16_t x129 = UINT16_MAX;
uint32_t x132 = 0U;
volatile int64_t x134 = INT64_MIN;
uint8_t x137 = 77U;
static uint32_t x138 = 130778622U;
int32_t x139 = 57922091;
int32_t x147 = INT32_MAX;
static int64_t x148 = -72322LL;
int32_t x151 = INT32_MIN;
int32_t t38 = -7371617;
volatile uint32_t x166 = UINT32_MAX;
int16_t x173 = -952;
uint8_t x174 = 21U;
int32_t x179 = -1;
volatile int32_t t44 = 0;
uint8_t x182 = 1U;
int8_t x184 = -1;
static volatile int32_t t47 = -101885863;
int64_t x200 = -2743119439620LL;
int32_t t50 = -1666;
int32_t x205 = INT32_MIN;
uint32_t x210 = 2U;
static volatile int64_t x212 = INT64_MIN;
volatile int32_t t52 = 101827020;
int64_t x214 = INT64_MAX;
volatile int32_t t53 = 6452;
uint16_t x220 = UINT16_MAX;
uint16_t x223 = 3U;
static int32_t x233 = INT32_MAX;
int32_t t58 = -22689536;
int64_t x240 = INT64_MIN;
int16_t x244 = -1;
int32_t t60 = -5743;
int8_t x247 = -2;
static volatile int64_t x251 = INT64_MIN;
static int32_t t62 = 24030;
uint32_t x261 = 1147996U;
static uint32_t x262 = 7339614U;
int8_t x270 = INT8_MIN;
int16_t x271 = INT16_MIN;
volatile int32_t x276 = -1;
volatile int32_t t70 = -107497;
uint64_t x287 = 4727984LLU;
int32_t x292 = INT32_MAX;
int32_t t72 = 109511;
volatile int32_t t73 = -104644;
int32_t t74 = 827539;
int32_t x310 = INT32_MAX;
uint16_t x313 = 55U;
uint16_t x325 = 19U;
static int16_t x327 = INT16_MIN;
static int32_t t81 = -14692432;
static int8_t x333 = INT8_MAX;
int64_t x338 = INT64_MAX;
volatile uint32_t x341 = 1489U;
uint16_t x343 = UINT16_MAX;
int64_t x346 = 6LL;
int8_t x351 = -44;
int16_t x356 = -1;
int32_t x358 = 10;
int32_t t90 = -250023;
static uint16_t x375 = 374U;
int32_t x381 = -37807749;
volatile int32_t x388 = -1;
volatile int16_t x395 = INT16_MIN;
volatile int16_t x399 = -8;
int32_t t99 = -502884020;


void f0(void) {
	uint8_t x2 = 1U;
	int8_t x4 = 55;

	t0 = (x1<=((x2^x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = -1LL;
	int64_t x7 = -1LL;
	uint32_t x8 = 2325222U;
	volatile int32_t t1 = -14;

	t1 = (x5<=((x6^x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = -27;
	int64_t x12 = -1LL;
	int32_t t2 = -58449;

	t2 = (x9<=((x10^x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 103371U;
	int16_t x14 = INT16_MIN;
	static uint32_t x15 = UINT32_MAX;
	volatile int32_t t3 = 12268;

	t3 = (x13<=((x14^x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int16_t x18 = INT16_MAX;
	static volatile uint32_t x20 = 40U;
	volatile int32_t t4 = 125;

	t4 = (x17<=((x18^x19)==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint32_t x22 = UINT32_MAX;
	uint16_t x23 = 27U;
	int32_t x24 = -1;
	volatile int32_t t5 = 5;

	t5 = (x21<=((x22^x23)==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -259077;
	uint32_t x27 = 6904U;
	volatile int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 8682;

	t6 = (x25<=((x26^x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 1U;
	int16_t x30 = INT16_MIN;
	int32_t x31 = -1;
	int64_t x32 = INT64_MAX;

	t7 = (x29<=((x30^x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = UINT8_MAX;
	uint16_t x35 = 136U;
	int16_t x36 = -1;

	t8 = (x33<=((x34^x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int64_t x38 = 1929546214895718LL;
	static uint64_t x39 = 5992645LLU;
	static int8_t x40 = -15;
	int32_t t9 = 213;

	t9 = (x37<=((x38^x39)==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = 48;
	int32_t x43 = -12;
	uint16_t x44 = 795U;

	t10 = (x41<=((x42^x43)==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -3;
	uint8_t x46 = 22U;
	volatile int32_t x47 = -752944801;
	uint32_t x48 = 4443U;

	t11 = (x45<=((x46^x47)==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = -89;
	int8_t x52 = -1;
	volatile int32_t t12 = 21;

	t12 = (x49<=((x50^x51)==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 60U;
	volatile int16_t x54 = -1;
	static volatile int64_t x56 = INT64_MIN;
	static int32_t t13 = 0;

	t13 = (x53<=((x54^x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x58 = 437U;
	uint32_t x59 = 718604U;
	volatile int32_t t14 = -315267;

	t14 = (x57<=((x58^x59)==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x62 = 879U;
	volatile int64_t x64 = INT64_MIN;
	int32_t t15 = -261388;

	t15 = (x61<=((x62^x63)==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint8_t x66 = 8U;
	int16_t x67 = INT16_MIN;
	volatile uint16_t x68 = 92U;

	t16 = (x65<=((x66^x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x70 = -2;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 105327736LLU;

	t17 = (x69<=((x70^x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 203LLU;
	int8_t x75 = INT8_MIN;
	static volatile int16_t x76 = INT16_MIN;

	t18 = (x73<=((x74^x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 24067882U;
	static uint64_t x78 = UINT64_MAX;
	volatile int64_t x79 = INT64_MIN;
	uint64_t x80 = 513LLU;

	t19 = (x77<=((x78^x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 2070867U;
	int8_t x82 = INT8_MIN;
	volatile uint32_t x83 = 7170283U;
	int8_t x84 = -1;
	volatile int32_t t20 = 402185730;

	t20 = (x81<=((x82^x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -2;
	int64_t x86 = INT64_MAX;
	uint8_t x87 = UINT8_MAX;
	volatile uint64_t x88 = 683976235859LLU;
	static volatile int32_t t21 = 27955196;

	t21 = (x85<=((x86^x87)==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x92 = -1LL;
	int32_t t22 = 48531486;

	t22 = (x89<=((x90^x91)==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 181378772708LL;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	static int32_t x96 = INT32_MAX;
	volatile int32_t t23 = -1112123;

	t23 = (x93<=((x94^x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -349625388;
	int8_t x98 = INT8_MAX;
	int8_t x99 = 0;
	static volatile int8_t x100 = INT8_MAX;

	t24 = (x97<=((x98^x99)==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	static uint32_t x103 = UINT32_MAX;
	int16_t x104 = -1;

	t25 = (x101<=((x102^x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x107 = -49427685205216602LL;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t26 = -15982091;

	t26 = (x105<=((x106^x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	uint64_t x112 = 6993885186488637440LLU;
	volatile int32_t t27 = 238042447;

	t27 = (x109<=((x110^x111)==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 0;
	static int64_t x114 = INT64_MIN;
	int32_t x115 = 2345;
	static int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = 32;

	t28 = (x113<=((x114^x115)==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 91U;
	int64_t x118 = 20LL;
	int8_t x119 = INT8_MAX;
	volatile int32_t t29 = 10;

	t29 = (x117<=((x118^x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	volatile uint32_t x122 = 19489641U;
	static volatile int16_t x123 = 14;
	volatile uint32_t x124 = UINT32_MAX;

	t30 = (x121<=((x122^x123)==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile int64_t x127 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = -13186;

	t31 = (x125<=((x126^x127)==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	volatile uint64_t x131 = 719838314LLU;
	int32_t t32 = 973182350;

	t32 = (x129<=((x130^x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	static uint16_t x135 = UINT16_MAX;
	int64_t x136 = -22347LL;
	volatile int32_t t33 = 9530;

	t33 = (x133<=((x134^x135)==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x140 = INT64_MAX;
	volatile int32_t t34 = 7;

	t34 = (x137<=((x138^x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 339U;
	static int32_t x142 = INT32_MIN;
	volatile int8_t x143 = INT8_MAX;
	volatile int32_t x144 = -1;
	int32_t t35 = -873;

	t35 = (x141<=((x142^x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	volatile int32_t t36 = -46;

	t36 = (x145<=((x146^x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = -1;
	int16_t x152 = -7746;
	static int32_t t37 = -5996974;

	t37 = (x149<=((x150^x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -398260819;
	uint32_t x154 = 974486230U;
	int32_t x155 = INT32_MIN;
	static uint32_t x156 = 735U;

	t38 = (x153<=((x154^x155)==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -91;
	int8_t x158 = -21;
	int8_t x159 = 15;
	int32_t x160 = INT32_MIN;
	int32_t t39 = 1;

	t39 = (x157<=((x158^x159)==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = 72;
	int16_t x162 = -8999;
	static uint16_t x163 = 201U;
	int32_t x164 = -1;
	static volatile int32_t t40 = 2;

	t40 = (x161<=((x162^x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 3;
	uint8_t x167 = 14U;
	uint32_t x168 = 274U;
	int32_t t41 = -4;

	t41 = (x165<=((x166^x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int16_t x170 = -708;
	int32_t x171 = INT32_MAX;
	int8_t x172 = -1;
	volatile int32_t t42 = -33332247;

	t42 = (x169<=((x170^x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x175 = INT32_MIN;
	volatile int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = 0;

	t43 = (x173<=((x174^x175)==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	int32_t x178 = INT32_MIN;
	uint8_t x180 = 1U;

	t44 = (x177<=((x178^x179)==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 641465069U;
	static volatile int32_t x183 = INT32_MIN;
	volatile int32_t t45 = -5;

	t45 = (x181<=((x182^x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 0;
	uint8_t x186 = 28U;
	volatile uint64_t x187 = 55953520LLU;
	uint64_t x188 = 80391198055103687LLU;
	int32_t t46 = -105385;

	t46 = (x185<=((x186^x187)==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	static int64_t x190 = -7875303365LL;
	int8_t x191 = INT8_MAX;
	static int32_t x192 = INT32_MAX;

	t47 = (x189<=((x190^x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 3829LLU;
	int32_t x194 = -17;
	int64_t x195 = INT64_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = -128997;

	t48 = (x193<=((x194^x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 593U;
	int32_t t49 = 14;

	t49 = (x197<=((x198^x199)==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x202 = 5;
	uint64_t x203 = UINT64_MAX;
	volatile int8_t x204 = INT8_MIN;

	t50 = (x201<=((x202^x203)==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 28U;
	int64_t x207 = INT64_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = 356;

	t51 = (x205<=((x206^x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -106465531944LL;
	uint32_t x211 = UINT32_MAX;

	t52 = (x209<=((x210^x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 7U;
	volatile int16_t x215 = -1;
	static int64_t x216 = INT64_MIN;

	t53 = (x213<=((x214^x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MIN;
	volatile uint8_t x219 = 6U;
	volatile int32_t t54 = 365903;

	t54 = (x217<=((x218^x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 282145293344LLU;
	volatile int8_t x222 = 43;
	uint16_t x224 = 126U;
	volatile int32_t t55 = 4232;

	t55 = (x221<=((x222^x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = 4;
	uint16_t x227 = 1U;
	volatile uint64_t x228 = 689625749000892LLU;
	volatile int32_t t56 = 245874;

	t56 = (x225<=((x226^x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	static int64_t x230 = -1186230657435LL;
	static uint32_t x231 = 125U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 3428621;

	t57 = (x229<=((x230^x231)==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MAX;
	uint16_t x236 = UINT16_MAX;

	t58 = (x233<=((x234^x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = 3;
	int8_t x238 = INT8_MIN;
	int32_t x239 = -59;
	int32_t t59 = -4;

	t59 = (x237<=((x238^x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 183857U;
	static volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = -610;

	t60 = (x241<=((x242^x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 3U;
	int32_t x246 = INT32_MIN;
	volatile int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 626317;

	t61 = (x245<=((x246^x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = -1LL;
	uint64_t x252 = 1396488644008LLU;

	t62 = (x249<=((x250^x251)==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 12;
	uint32_t x254 = 1235U;
	uint64_t x255 = 11341084LLU;
	static volatile int8_t x256 = -1;
	volatile int32_t t63 = -3823015;

	t63 = (x253<=((x254^x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 16U;
	int64_t x258 = -143364828250790LL;
	int8_t x259 = INT8_MIN;
	volatile int8_t x260 = -1;
	int32_t t64 = 88592563;

	t64 = (x257<=((x258^x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = INT16_MAX;
	static int64_t x264 = -1LL;
	int32_t t65 = -125202;

	t65 = (x261<=((x262^x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	static uint64_t x266 = 6613915LLU;
	int16_t x267 = 1069;
	int8_t x268 = -1;
	volatile int32_t t66 = -39;

	t66 = (x265<=((x266^x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 5499;
	uint64_t x272 = 436LLU;
	volatile int32_t t67 = 52;

	t67 = (x269<=((x270^x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	static int8_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	static volatile int32_t t68 = -38;

	t68 = (x273<=((x274^x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 0U;
	int32_t x278 = 2041;
	static int64_t x279 = INT64_MIN;
	int32_t x280 = -1;
	volatile int32_t t69 = -37839613;

	t69 = (x277<=((x278^x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	volatile uint64_t x282 = 2797986624877LLU;
	int16_t x283 = -1;
	static volatile int64_t x284 = INT64_MIN;

	t70 = (x281<=((x282^x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = 2001LLU;
	volatile int8_t x288 = 1;
	int32_t t71 = 34914821;

	t71 = (x285<=((x286^x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 63U;
	volatile int64_t x290 = 48686893LL;
	uint64_t x291 = 21815LLU;

	t72 = (x289<=((x290^x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static volatile int64_t x294 = 242547LL;
	uint16_t x295 = 961U;
	static int16_t x296 = INT16_MIN;

	t73 = (x293<=((x294^x295)==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = 356U;
	uint16_t x298 = 72U;
	volatile int32_t x299 = INT32_MIN;
	volatile uint16_t x300 = 39U;

	t74 = (x297<=((x298^x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 971825294516074LLU;
	int64_t x302 = INT64_MIN;
	volatile int16_t x303 = -2;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = -19668368;

	t75 = (x301<=((x302^x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = -1LL;
	uint64_t x306 = UINT64_MAX;
	static int32_t x307 = -1;
	static int16_t x308 = -1;
	int32_t t76 = -1271127;

	t76 = (x305<=((x306^x307)==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	static uint64_t x312 = 406150891449921LLU;
	volatile int32_t t77 = -28;

	t77 = (x309<=((x310^x311)==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	int64_t x315 = INT64_MIN;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -485153111;

	t78 = (x313<=((x314^x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = 3;
	int8_t x319 = INT8_MIN;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -1017780141;

	t79 = (x317<=((x318^x319)==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	int8_t x322 = 19;
	int32_t x323 = 1;
	int16_t x324 = 15;
	volatile int32_t t80 = -417269;

	t80 = (x321<=((x322^x323)==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x326 = 152U;
	int8_t x328 = -1;

	t81 = (x325<=((x326^x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 0;
	int32_t x330 = -1;
	int64_t x331 = 42756699656LL;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -231911;

	t82 = (x329<=((x330^x331)==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MAX;
	uint8_t x335 = 5U;
	static int64_t x336 = -488693403LL;
	int32_t t83 = -34552518;

	t83 = (x333<=((x334^x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 63613987;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = UINT32_MAX;
	static volatile int32_t t84 = 64464232;

	t84 = (x337<=((x338^x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = -1;
	volatile int32_t x344 = INT32_MIN;
	int32_t t85 = 244758;

	t85 = (x341<=((x342^x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 0;
	int32_t x347 = -1;
	int32_t x348 = 19526849;
	volatile int32_t t86 = 1;

	t86 = (x345<=((x346^x347)==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MAX;
	int8_t x350 = -1;
	int16_t x352 = -1;
	int32_t t87 = 340657;

	t87 = (x349<=((x350^x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	volatile int32_t x354 = INT32_MIN;
	static int8_t x355 = 1;
	static int32_t t88 = 2045305;

	t88 = (x353<=((x354^x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	int64_t x359 = -4469351006360852140LL;
	volatile int16_t x360 = INT16_MIN;
	static volatile int32_t t89 = -20745;

	t89 = (x357<=((x358^x359)==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 55U;
	static int64_t x362 = INT64_MIN;
	uint8_t x363 = 6U;
	uint16_t x364 = 71U;

	t90 = (x361<=((x362^x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	uint8_t x366 = 1U;
	static int32_t x367 = INT32_MIN;
	static uint8_t x368 = UINT8_MAX;
	int32_t t91 = 10;

	t91 = (x365<=((x366^x367)==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int64_t x370 = INT64_MAX;
	static int64_t x371 = -1LL;
	static uint32_t x372 = 3U;
	volatile int32_t t92 = -387;

	t92 = (x369<=((x370^x371)==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 475652475LLU;
	int64_t x374 = -377318074836LL;
	volatile int32_t x376 = INT32_MAX;
	int32_t t93 = -50;

	t93 = (x373<=((x374^x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 2U;
	int32_t x378 = -1;
	volatile uint64_t x379 = 125LLU;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = -3931201;

	t94 = (x377<=((x378^x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x382 = UINT8_MAX;
	int16_t x383 = 1;
	uint32_t x384 = UINT32_MAX;
	static int32_t t95 = -196323112;

	t95 = (x381<=((x382^x383)==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -1LL;
	int8_t x386 = -1;
	static volatile int32_t x387 = INT32_MAX;
	volatile int32_t t96 = -1118;

	t96 = (x385<=((x386^x387)==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 12799716LLU;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MAX;
	static int32_t t97 = 228265729;

	t97 = (x389<=((x390^x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	volatile int8_t x394 = INT8_MAX;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = 2;

	t98 = (x393<=((x394^x395)==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 723929280383019LLU;
	static int64_t x398 = -31083LL;
	int32_t x400 = -92593073;

	t99 = (x397<=((x398^x399)==x400));

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

