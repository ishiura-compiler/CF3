#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x19 = INT64_MIN;
static uint32_t x22 = UINT32_MAX;
int32_t x25 = INT32_MIN;
uint8_t x28 = 5U;
int32_t t5 = -1;
int16_t x31 = -1;
static uint32_t x35 = 9012U;
int64_t x38 = -3278402LL;
int16_t x40 = INT16_MAX;
volatile int8_t x51 = 0;
static uint64_t x55 = 17257LLU;
uint64_t t12 = 138513LLU;
int16_t x74 = INT16_MIN;
static uint64_t x75 = UINT64_MAX;
volatile int64_t x76 = INT64_MIN;
volatile uint64_t t15 = 20771268709LLU;
int32_t x82 = 4160487;
static int32_t x84 = INT32_MIN;
volatile int16_t x87 = -17;
int64_t x88 = INT64_MIN;
uint16_t x90 = UINT16_MAX;
int16_t x96 = INT16_MIN;
int8_t x99 = 0;
int64_t t21 = -747579712629LL;
uint16_t x105 = 29U;
int32_t x113 = -461;
int64_t x114 = INT64_MAX;
volatile int32_t x115 = INT32_MIN;
int32_t x124 = INT32_MIN;
int64_t t25 = 112LL;
int32_t x133 = INT32_MIN;
volatile int32_t t27 = 0;
volatile int8_t x137 = INT8_MIN;
uint64_t t28 = 301727273LLU;
uint64_t x146 = 17001LLU;
int64_t x157 = -1LL;
static int32_t x161 = -183714;
static uint16_t x163 = UINT16_MAX;
static uint16_t x166 = 582U;
int8_t x167 = -1;
int8_t x172 = INT8_MIN;
int16_t x175 = -1;
int8_t x178 = INT8_MAX;
volatile int64_t t37 = -3771929903043721LL;
int16_t x191 = -78;
int64_t x195 = INT64_MIN;
volatile uint32_t x202 = 223U;
static volatile int16_t x218 = INT16_MIN;
static volatile int32_t t45 = 1;
uint32_t x226 = 144U;
int16_t x229 = 65;
int64_t x230 = INT64_MAX;
int16_t x232 = INT16_MIN;
static int16_t x236 = -1;
int32_t x240 = -3078052;
int32_t t49 = -173;
static int64_t x242 = INT64_MIN;
int64_t t50 = -1157975324LL;
volatile int8_t x245 = -47;
volatile int16_t x261 = INT16_MAX;
int16_t x267 = -1;
uint16_t x271 = UINT16_MAX;
int64_t x274 = INT64_MAX;
int16_t x276 = -28;
volatile int16_t x286 = INT16_MIN;
int8_t x291 = -1;
volatile int64_t t61 = -268LL;
static int64_t x302 = -201641737LL;
uint64_t x306 = 59623382104677LLU;
int32_t x313 = 267063023;
volatile uint32_t t66 = 263041548U;
uint64_t x323 = UINT64_MAX;
static volatile int16_t x324 = -2732;
volatile int32_t t71 = -187198;
uint16_t x342 = UINT16_MAX;
uint64_t t72 = 3573472509747423LLU;
static uint8_t x360 = 0U;
static volatile int64_t x365 = 21LL;
static int64_t x381 = INT64_MIN;
volatile int8_t x383 = -11;
int64_t t81 = 14LL;
static volatile int32_t x385 = INT32_MIN;
volatile int64_t t82 = 63LL;
static uint8_t x391 = 0U;
volatile uint8_t x392 = UINT8_MAX;
volatile int32_t x394 = INT32_MAX;
int64_t x395 = 71300700851582LL;
static uint64_t x397 = 1290744908895690009LLU;
static uint16_t x398 = UINT16_MAX;
uint16_t x404 = UINT16_MAX;
volatile uint8_t x408 = 10U;
volatile uint32_t t87 = 20329183U;
uint8_t x413 = UINT8_MAX;
int16_t x419 = -1;
static uint32_t t90 = 18368699U;
uint32_t t91 = 36976U;
static int64_t x425 = INT64_MIN;
int64_t t93 = -159LL;
uint64_t x433 = 6720941377998LLU;
uint64_t t94 = 137058526870578LLU;
int16_t x441 = -1;
uint16_t x444 = 3U;
volatile int64_t t96 = -365301847LL;
int32_t x445 = -1;
int8_t x450 = INT8_MIN;
int32_t t98 = 9;
static int8_t x455 = INT8_MAX;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	static uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 1U;
	int16_t x8 = -1;
	uint64_t t0 = 116831LLU;

	t0 = (x5%((x6+x7)^x8));

	if (t0 != 65535LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = -1;
	uint16_t x10 = UINT16_MAX;
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 15U;
	static int32_t t1 = -4005;

	t1 = (x9%((x10+x11)^x12));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = 12410392LL;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = 30U;
	static volatile int64_t t2 = 466547995007805LL;

	t2 = (x13%((x14+x15)^x16));

	if (t2 != -656378LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	uint32_t x18 = 493U;
	int32_t x20 = -1;
	volatile int64_t t3 = -115063LL;

	t3 = (x17%((x18+x19)^x20));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	volatile uint8_t x23 = 67U;
	int64_t x24 = INT64_MIN;
	int64_t t4 = 530947757827LL;

	t4 = (x21%((x22+x23)^x24));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MAX;

	t5 = (x25%((x26+x27)^x28));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x29 = -1LL;
	volatile int32_t x30 = 920;
	static int32_t x32 = 144;
	static int64_t t6 = -1LL;

	t6 = (x29%((x30+x31)^x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 118574052U;
	int16_t x34 = INT16_MIN;
	int16_t x36 = -4027;
	static volatile uint32_t t7 = 38844427U;

	t7 = (x33%((x34+x35)^x36));

	if (t7 != 20502U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	int32_t x39 = 6675852;
	static int64_t t8 = 7435301786LL;

	t8 = (x37%((x38+x39)^x40));

	if (t8 != -2881458LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x49 = 859U;
	int8_t x50 = -22;
	int8_t x52 = INT8_MIN;
	volatile int32_t t9 = -183384;

	t9 = (x49%((x50+x51)^x52));

	if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	static int16_t x54 = 2791;
	uint64_t x56 = 8614974254093536LLU;
	uint64_t t10 = 152LLU;

	t10 = (x53%((x54+x55)^x56));

	if (t10 != 2084195657026960LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -954902095388883LL;
	uint64_t x58 = 1405948847569650LLU;
	static uint16_t x59 = UINT16_MAX;
	int8_t x60 = -1;
	uint64_t t11 = 3748281944074LLU;

	t11 = (x57%((x58+x59)^x60));

	if (t11 != 451046752246303LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 2LLU;
	int32_t x62 = -11620;
	uint32_t x63 = 9573U;
	uint32_t x64 = UINT32_MAX;

	t12 = (x61%((x62+x63)^x64));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 2U;
	int8_t x66 = -1;
	uint32_t x67 = 53216316U;
	uint64_t x68 = 11978009255428LLU;
	volatile uint64_t t13 = 741245LLU;

	t13 = (x65%((x66+x67)^x68));

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x69 = UINT64_MAX;
	static int8_t x70 = INT8_MAX;
	uint16_t x71 = 12143U;
	static int8_t x72 = -1;
	uint64_t t14 = 179523LLU;

	t14 = (x69%((x70+x71)^x72));

	if (t14 != 12270LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -11;

	t15 = (x73%((x74+x75)^x76));

	if (t15 != 65527LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = INT64_MAX;
	static int32_t x78 = INT32_MAX;
	volatile int32_t x79 = -1;
	int8_t x80 = -1;
	int64_t t16 = 1LL;

	t16 = (x77%((x78+x79)^x80));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 12651LLU;
	static int16_t x83 = INT16_MIN;
	uint64_t t17 = 935691065204LLU;

	t17 = (x81%((x82+x83)^x84));

	if (t17 != 12651LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x85 = 1743192324525LLU;
	int64_t x86 = 31974221LL;
	static volatile uint64_t t18 = 1163387929LLU;

	t18 = (x85%((x86+x87)^x88));

	if (t18 != 1743192324525LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x89 = UINT64_MAX;
	volatile int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;
	uint64_t t19 = 54787044LLU;

	t19 = (x89%((x90+x91)^x92));

	if (t19 != 524287LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 7770U;
	static int64_t x94 = INT64_MIN;
	uint8_t x95 = UINT8_MAX;
	static int64_t t20 = -209628308473LL;

	t20 = (x93%((x94+x95)^x96));

	if (t20 != 7770LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x97 = 2U;
	static int8_t x98 = -1;
	static int64_t x100 = 3LL;

	t21 = (x97%((x98+x99)^x100));

	if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x106 = 10;
	int32_t x107 = INT32_MIN;
	static int32_t x108 = INT32_MAX;
	int32_t t22 = -1;

	t22 = (x105%((x106+x107)^x108));

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x116 = UINT32_MAX;
	volatile int64_t t23 = -553903706607839713LL;

	t23 = (x113%((x114+x115)^x116));

	if (t23 != -461LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 386U;
	volatile int64_t t24 = -15905197462516004LL;

	t24 = (x121%((x122+x123)^x124));

	if (t24 != 2097187847LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MAX;
	int8_t x126 = -1;
	int32_t x127 = 53;
	int64_t x128 = 3250056LL;

	t25 = (x125%((x126+x127)^x128));

	if (t25 != 2412367LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = -5670695106337LL;
	int8_t x130 = 3;
	static int64_t x131 = INT64_MIN;
	volatile int8_t x132 = INT8_MAX;
	volatile int64_t t26 = 2860027755LL;

	t26 = (x129%((x130+x131)^x132));

	if (t26 != -5670695106337LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x134 = 125U;
	volatile uint8_t x135 = 7U;
	int16_t x136 = INT16_MIN;

	t27 = (x133%((x134+x135)^x136));

	if (t27 != -2212) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x138 = UINT64_MAX;
	int8_t x139 = 5;
	uint8_t x140 = 56U;

	t28 = (x137%((x138+x139)^x140));

	if (t28 != 8LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 2114LLU;
	int16_t x142 = INT16_MAX;
	int16_t x143 = -57;
	static volatile uint16_t x144 = UINT16_MAX;
	volatile uint64_t t29 = 3079212170LLU;

	t29 = (x141%((x142+x143)^x144));

	if (t29 != 2114LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x145 = 2140788288737LLU;
	uint8_t x147 = UINT8_MAX;
	static int64_t x148 = -620925837272704856LL;
	uint64_t t30 = 78498398901LLU;

	t30 = (x145%((x146+x147)^x148));

	if (t30 != 2140788288737LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -1LL;
	int8_t x150 = INT8_MAX;
	int32_t x151 = -1;
	volatile uint8_t x152 = UINT8_MAX;
	static volatile int64_t t31 = 98875LL;

	t31 = (x149%((x150+x151)^x152));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x158 = INT32_MIN;
	volatile int64_t x159 = -90884211098LL;
	int8_t x160 = 48;
	int64_t t32 = -32590544LL;

	t32 = (x157%((x158+x159)^x160));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x162 = INT8_MIN;
	uint8_t x164 = UINT8_MAX;
	static int32_t t33 = 192871;

	t33 = (x161%((x162+x163)^x164));

	if (t33 != -52898) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 31728781421331821LLU;
	static int8_t x168 = INT8_MIN;
	uint64_t t34 = 45332004564LLU;

	t34 = (x165%((x166+x167)^x168));

	if (t34 != 31728781421331821LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x169 = INT32_MIN;
	uint16_t x170 = 13U;
	uint64_t x171 = 504LLU;
	uint64_t t35 = 2155833852747002511LLU;

	t35 = (x169%((x170+x171)^x172));

	if (t35 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = UINT32_MAX;
	uint32_t x174 = 1U;
	volatile uint64_t x176 = UINT64_MAX;
	uint64_t t36 = 49696513144069LLU;

	t36 = (x173%((x174+x175)^x176));

	if (t36 != 4294967295LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x177 = INT8_MIN;
	volatile int64_t x179 = -164282262603688907LL;
	int16_t x180 = 9;

	t37 = (x177%((x178+x179)^x180));

	if (t37 != -128LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x189 = INT8_MAX;
	uint8_t x190 = 8U;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t38 = 33033845784431LL;

	t38 = (x189%((x190+x191)^x192));

	if (t38 != 127LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x193 = INT16_MAX;
	uint16_t x194 = 32394U;
	volatile int8_t x196 = 1;
	volatile int64_t t39 = 288LL;

	t39 = (x193%((x194+x195)^x196));

	if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = -246;
	volatile int16_t x198 = INT16_MAX;
	volatile int8_t x199 = 20;
	int16_t x200 = -6;
	int32_t t40 = -1;

	t40 = (x197%((x198+x199)^x200));

	if (t40 != -246) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = -5;
	uint16_t x203 = UINT16_MAX;
	volatile int8_t x204 = INT8_MAX;
	volatile uint32_t t41 = 27750976U;

	t41 = (x201%((x202+x203)^x204));

	if (t41 != 25916U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 447138U;
	int64_t x206 = 0LL;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	int64_t t42 = 581406996259362819LL;

	t42 = (x205%((x206+x207)^x208));

	if (t42 != 447138LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MIN;
	static volatile uint16_t x211 = 1U;
	uint64_t x212 = 1013317858992098LLU;
	static volatile uint64_t t43 = 8041875056300LLU;

	t43 = (x209%((x210+x211)^x212));

	if (t43 != 1013315711524893LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x213 = 210U;
	int32_t x214 = -1;
	static volatile uint64_t x215 = UINT64_MAX;
	static volatile int64_t x216 = -1LL;
	volatile uint64_t t44 = 6753838896LLU;

	t44 = (x213%((x214+x215)^x216));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x217 = INT8_MIN;
	int32_t x219 = INT32_MAX;
	int8_t x220 = -1;

	t45 = (x217%((x218+x219)^x220));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = INT32_MAX;
	uint8_t x227 = 7U;
	int64_t x228 = -1LL;
	static volatile int64_t t46 = -264575338246209486LL;

	t46 = (x225%((x226+x227)^x228));

	if (t46 != 135LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x231 = INT32_MIN;
	static volatile int64_t t47 = -249LL;

	t47 = (x229%((x230+x231)^x232));

	if (t47 != 65LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = INT32_MAX;
	uint64_t x234 = 5168LLU;
	static int32_t x235 = -1;
	volatile uint64_t t48 = 3597868367LLU;

	t48 = (x233%((x234+x235)^x236));

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = 0;
	int32_t x239 = -16571567;

	t49 = (x237%((x238+x239)^x240));

	if (t49 != -12578593) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = -1;
	uint32_t x243 = UINT32_MAX;
	static int64_t x244 = -1LL;

	t50 = (x241%((x242+x243)^x244));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x246 = 279U;
	int16_t x247 = INT16_MAX;
	int8_t x248 = -1;
	volatile int32_t t51 = -297;

	t51 = (x245%((x246+x247)^x248));

	if (t51 != -47) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x249 = 36U;
	int8_t x250 = INT8_MIN;
	static int8_t x251 = INT8_MIN;
	static uint64_t x252 = 176210LLU;
	static uint64_t t52 = 3075552631901278LLU;

	t52 = (x249%((x250+x251)^x252));

	if (t52 != 36LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MIN;
	static volatile int8_t x258 = -15;
	static uint32_t x259 = UINT32_MAX;
	uint32_t x260 = 1390445584U;
	volatile uint32_t t53 = 2236U;

	t53 = (x257%((x258+x259)^x260));

	if (t53 != 1390445472U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = -43;
	static uint32_t x264 = 581017165U;
	volatile uint32_t t54 = 34310U;

	t54 = (x261%((x262+x263)^x264));

	if (t54 != 32767U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x265 = -1;
	volatile int64_t x266 = 28414762532240LL;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t55 = 177891LLU;

	t55 = (x265%((x266+x267)^x268));

	if (t55 != 28414762532239LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x269 = -1;
	int32_t x270 = -6320;
	uint16_t x272 = 569U;
	int32_t t56 = -531319;

	t56 = (x269%((x270+x271)^x272));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x275 = -1;
	static volatile int64_t t57 = 5839LL;

	t57 = (x273%((x274+x275)^x276));

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -1;
	uint64_t x278 = UINT64_MAX;
	static volatile int16_t x279 = INT16_MIN;
	volatile uint32_t x280 = 70766583U;
	volatile uint64_t t58 = 756LLU;

	t58 = (x277%((x278+x279)^x280));

	if (t58 != 70733815LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x281 = 811;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = -125;
	int16_t x284 = -23;
	static uint64_t t59 = 1293847258298750357LLU;

	t59 = (x281%((x282+x283)^x284));

	if (t59 != 62LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = INT16_MIN;
	int16_t x287 = 7;
	int32_t x288 = 449623;
	int32_t t60 = 3144;

	t60 = (x285%((x286+x287)^x288));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x289 = -1LL;
	int8_t x290 = -1;
	volatile int8_t x292 = -1;

	t61 = (x289%((x290+x291)^x292));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = -1;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t62 = -32040680;

	t62 = (x293%((x294+x295)^x296));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = -1;
	int64_t x303 = -2LL;
	uint64_t x304 = UINT64_MAX;
	uint64_t t63 = 11851504LLU;

	t63 = (x301%((x302+x303)^x304));

	if (t63 != 79593967LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x305 = 27U;
	int64_t x307 = -1LL;
	int8_t x308 = INT8_MAX;
	static volatile uint64_t t64 = 199134LLU;

	t64 = (x305%((x306+x307)^x308));

	if (t64 != 27LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x309 = 7U;
	uint32_t x310 = UINT32_MAX;
	static volatile int16_t x311 = INT16_MAX;
	static uint16_t x312 = 3U;
	static uint32_t t65 = 1336989U;

	t65 = (x309%((x310+x311)^x312));

	if (t65 != 7U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x314 = UINT32_MAX;
	volatile uint32_t x315 = 1U;
	uint32_t x316 = UINT32_MAX;

	t66 = (x313%((x314+x315)^x316));

	if (t66 != 267063023U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = -1;
	static uint64_t x322 = UINT64_MAX;
	volatile uint64_t t67 = 59474LLU;

	t67 = (x321%((x322+x323)^x324));

	if (t67 != 15LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x325 = 14133U;
	int64_t x326 = 3667116812430LL;
	volatile int64_t x327 = -6085768184628LL;
	int8_t x328 = INT8_MIN;
	volatile int64_t t68 = 5593519966385LL;

	t68 = (x325%((x326+x327)^x328));

	if (t68 != 14133LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x329 = 16383LLU;
	int64_t x330 = 167920LL;
	uint16_t x331 = 11884U;
	int8_t x332 = -3;
	uint64_t t69 = 350531256367LLU;

	t69 = (x329%((x330+x331)^x332));

	if (t69 != 16383LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x333 = INT16_MIN;
	static uint8_t x334 = UINT8_MAX;
	static int64_t x335 = 397179478977LL;
	static int32_t x336 = INT32_MIN;
	volatile int64_t t70 = -55641517974523418LL;

	t70 = (x333%((x334+x335)^x336));

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = -1;
	int32_t x338 = INT32_MIN;
	volatile int32_t x339 = 535599;
	int32_t x340 = INT32_MAX;

	t71 = (x337%((x338+x339)^x340));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = 1237011347LLU;
	uint16_t x343 = UINT16_MAX;
	static int64_t x344 = INT64_MIN;

	t72 = (x341%((x342+x343)^x344));

	if (t72 != 1237011347LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x345 = INT16_MIN;
	uint32_t x346 = UINT32_MAX;
	uint16_t x347 = 406U;
	int64_t x348 = 826028641LL;
	volatile int64_t t73 = 382055861LL;

	t73 = (x345%((x346+x347)^x348));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x349 = UINT16_MAX;
	int16_t x350 = 1361;
	static volatile uint64_t x351 = 48215745319407LLU;
	int16_t x352 = INT16_MIN;
	static volatile uint64_t t74 = 1142524177LLU;

	t74 = (x349%((x350+x351)^x352));

	if (t74 != 65535LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 4496653997LLU;
	uint64_t x355 = 4455253755LLU;
	static int16_t x356 = -1;
	uint64_t t75 = 1125LLU;

	t75 = (x353%((x354+x355)^x356));

	if (t75 != 255LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x357 = 2U;
	volatile int8_t x358 = INT8_MIN;
	static uint32_t x359 = 514333045U;
	volatile uint32_t t76 = 36U;

	t76 = (x357%((x358+x359)^x360));

	if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x366 = INT32_MAX;
	volatile uint32_t x367 = 1038045U;
	static int64_t x368 = -1LL;
	static volatile int64_t t77 = 45839217929LL;

	t77 = (x365%((x366+x367)^x368));

	if (t77 != 21LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x369 = -1;
	int32_t x370 = INT32_MIN;
	static uint8_t x371 = UINT8_MAX;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t78 = 85064;

	t78 = (x369%((x370+x371)^x372));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = 5656U;
	int8_t x374 = INT8_MAX;
	int32_t x375 = -1;
	uint64_t x376 = UINT64_MAX;
	uint64_t t79 = 60124820064438LLU;

	t79 = (x373%((x374+x375)^x376));

	if (t79 != 5656LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x377 = 241446172615341569LL;
	volatile int8_t x378 = INT8_MIN;
	static volatile int8_t x379 = 1;
	uint16_t x380 = 1486U;
	volatile int64_t t80 = -15785440481LL;

	t80 = (x377%((x378+x379)^x380));

	if (t80 != 407LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x382 = 1949U;
	static int16_t x384 = INT16_MIN;

	t81 = (x381%((x382+x383)^x384));

	if (t81 != -17318LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x386 = 48;
	static uint16_t x387 = UINT16_MAX;
	static int64_t x388 = 16776561695LL;

	t82 = (x385%((x386+x387)^x388));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x389 = INT32_MAX;
	int8_t x390 = INT8_MIN;
	int32_t t83 = 10362;

	t83 = (x389%((x390+x391)^x392));

	if (t83 != 7) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x393 = INT64_MIN;
	int8_t x396 = -7;
	volatile int64_t t84 = -79459452893373927LL;

	t84 = (x393%((x394+x395)^x396));

	if (t84 != -63393299693096LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x399 = 291424;
	volatile int64_t x400 = INT64_MIN;
	uint64_t t85 = 426LLU;

	t85 = (x397%((x398+x399)^x400));

	if (t85 != 1290744908895690009LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x401 = INT32_MIN;
	uint8_t x402 = 11U;
	static uint8_t x403 = 1U;
	int32_t t86 = -20015409;

	t86 = (x401%((x402+x403)^x404));

	if (t86 != -32846) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x405 = 9989U;
	volatile int16_t x406 = INT16_MAX;
	static volatile uint16_t x407 = 176U;

	t87 = (x405%((x406+x407)^x408));

	if (t87 != 9989U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = 154078U;
	int8_t x411 = -3;
	uint8_t x412 = 56U;
	volatile uint32_t t88 = 332U;

	t88 = (x409%((x410+x411)^x412));

	if (t88 != 57626U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x414 = -1LL;
	static int16_t x415 = INT16_MAX;
	int32_t x416 = INT32_MIN;
	int64_t t89 = 1155214199584LL;

	t89 = (x413%((x414+x415)^x416));

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x417 = 30002U;
	int8_t x418 = INT8_MIN;
	volatile uint32_t x420 = UINT32_MAX;

	t90 = (x417%((x418+x419)^x420));

	if (t90 != 50U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x421 = 1100812U;
	volatile uint8_t x422 = 46U;
	int8_t x423 = 7;
	int32_t x424 = 159987;

	t91 = (x421%((x422+x423)^x424));

	if (t91 != 141160U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MIN;
	volatile int64_t t92 = 1518672139462LL;

	t92 = (x425%((x426+x427)^x428));

	if (t92 != -4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = UINT32_MAX;
	volatile int64_t x430 = INT64_MIN;
	static int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MIN;

	t93 = (x429%((x430+x431)^x432));

	if (t93 != 4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x434 = 17765U;
	int64_t x435 = INT64_MIN;
	int16_t x436 = -335;

	t94 = (x433%((x434+x435)^x436));

	if (t94 != 6720941377998LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MAX;
	uint32_t x440 = 5U;
	uint32_t t95 = 4684U;

	t95 = (x437%((x438+x439)^x440));

	if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x442 = INT64_MIN;
	uint8_t x443 = UINT8_MAX;

	t96 = (x441%((x442+x443)^x444));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x446 = INT16_MAX;
	static int16_t x447 = INT16_MAX;
	int8_t x448 = INT8_MIN;
	int32_t t97 = 52960;

	t97 = (x445%((x446+x447)^x448));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x449 = INT8_MIN;
	static int16_t x451 = INT16_MIN;
	static int8_t x452 = 5;

	t98 = (x449%((x450+x451)^x452));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = 119662865127LL;
	int64_t x454 = -1LL;
	static uint64_t x456 = 534038LLU;
	static volatile uint64_t t99 = 55681460973330LLU;

	t99 = (x453%((x454+x455)^x456));

	if (t99 != 222687LLU) { NG(); } else { ; }
	
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

