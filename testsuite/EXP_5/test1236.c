#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = INT64_MAX;
int32_t t1 = -3773105;
uint8_t x14 = 8U;
uint16_t x18 = 203U;
volatile int64_t t4 = -891919392LL;
uint16_t x23 = 5973U;
volatile int8_t x30 = -1;
int32_t x34 = INT32_MIN;
static int32_t x36 = INT32_MIN;
static int16_t x39 = 1925;
volatile uint8_t x40 = 3U;
uint16_t x45 = 25U;
uint64_t x46 = 36530553LLU;
static uint32_t x52 = 4030U;
volatile int64_t t12 = -89816LL;
static uint32_t x65 = 349U;
static int16_t x66 = INT16_MAX;
int8_t x70 = INT8_MIN;
uint8_t x71 = UINT8_MAX;
int32_t t19 = -11261738;
volatile int64_t x84 = INT64_MIN;
int8_t x90 = -1;
int32_t t22 = INT32_MIN;
int32_t t23 = -397977628;
static uint32_t x98 = 10448874U;
uint64_t t24 = UINT64_MAX;
int16_t x114 = 0;
static int64_t x121 = -1LL;
int32_t x126 = INT32_MIN;
uint64_t x129 = 222LLU;
volatile int32_t x130 = -1;
int32_t x140 = INT32_MAX;
int16_t x146 = INT16_MIN;
int32_t x152 = -255532272;
int8_t x153 = 1;
uint64_t x160 = UINT64_MAX;
volatile int32_t x164 = -1;
volatile int64_t t41 = -882566LL;
int64_t x173 = -222298122322LL;
int64_t x175 = 10235303LL;
static uint16_t x182 = 0U;
int64_t t45 = -488211392379LL;
static int16_t x201 = -1;
int16_t x205 = INT16_MAX;
static volatile int32_t x210 = 1;
static volatile int64_t t50 = INT64_MAX;
volatile uint16_t x213 = 13U;
volatile uint32_t x216 = UINT32_MAX;
int64_t x233 = INT64_MAX;
uint64_t x240 = 4178535613625084LLU;
volatile int32_t x260 = INT32_MAX;
int32_t x264 = 1410;
uint64_t t64 = 1LLU;
static int32_t x270 = -14315329;
static uint64_t x279 = 125406LLU;
int16_t x281 = -1;
int16_t x292 = -1;
static volatile int32_t x298 = 292409219;
int32_t x311 = -35232056;
static int16_t x317 = INT16_MIN;
int64_t x318 = 4796715506129LL;
static volatile int64_t x326 = INT64_MAX;
int32_t t78 = 826367964;
int16_t x329 = INT16_MIN;
int16_t x333 = -15725;
uint32_t x337 = 3945352U;
uint32_t x341 = 5U;
uint8_t x344 = UINT8_MAX;
volatile int64_t x347 = INT64_MIN;
uint8_t x349 = UINT8_MAX;
uint8_t x358 = UINT8_MAX;
int16_t x360 = INT16_MIN;
uint32_t x364 = UINT32_MAX;
int32_t t90 = -434635809;
int64_t t92 = -53749360LL;
uint16_t x385 = UINT16_MAX;
int64_t x391 = INT64_MIN;
int32_t t95 = INT32_MAX;
uint8_t x400 = 2U;
int64_t x402 = 4LL;
volatile int8_t x403 = INT8_MIN;
uint64_t x404 = 973054850237253LLU;
uint64_t t98 = UINT64_MAX;
static volatile int16_t x412 = -1;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	int16_t x3 = -1;
	volatile uint8_t x4 = 7U;

	t0 = (x1+((x2==x3)%x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = -1;
	uint16_t x6 = 121U;
	int64_t x7 = 754974918141491781LL;
	volatile int8_t x8 = INT8_MIN;

	t1 = (x5+((x6==x7)%x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint32_t x10 = 0U;
	int8_t x11 = -1;
	uint16_t x12 = 795U;
	volatile int32_t t2 = -91755;

	t2 = (x9+((x10==x11)%x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1U;
	int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 30030085899017623LL;

	t3 = (x13+((x14==x15)%x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile int8_t x19 = -1;
	volatile int64_t x20 = -1LL;

	t4 = (x17+((x18==x19)%x20));

	if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 91U;
	uint64_t x22 = 2740LLU;
	uint8_t x24 = 1U;
	static volatile uint32_t t5 = 1167269348U;

	t5 = (x21+((x22==x23)%x24));

	if (t5 != 91U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 26U;
	int32_t x26 = 6505872;
	static int8_t x27 = INT8_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = -1;

	t6 = (x25+((x26==x27)%x28));

	if (t6 != 26) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 501U;
	uint16_t x31 = 5924U;
	static uint16_t x32 = 697U;
	volatile int32_t t7 = -3910;

	t7 = (x29+((x30==x31)%x32));

	if (t7 != 501) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 21982773226437LLU;
	int16_t x35 = INT16_MIN;
	uint64_t t8 = 956537924877437LLU;

	t8 = (x33+((x34==x35)%x36));

	if (t8 != 21982773226437LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int32_t x38 = 25839;
	static volatile int32_t t9 = 341183;

	t9 = (x37+((x38==x39)%x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 32U;
	uint32_t x42 = 0U;
	static int8_t x43 = INT8_MIN;
	volatile uint16_t x44 = 1U;
	int32_t t10 = -4933;

	t10 = (x41+((x42==x43)%x44));

	if (t10 != 32) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x47 = 2;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = -3107341585860LL;

	t11 = (x45+((x46==x47)%x48));

	if (t11 != 25LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -458136490399758LL;
	int32_t x50 = -1;
	volatile int16_t x51 = -12;

	t12 = (x49+((x50==x51)%x52));

	if (t12 != -458136490399758LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = 0U;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -17949;

	t13 = (x53+((x54==x55)%x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x57+((x58==x59)%x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	uint32_t x62 = 370574635U;
	static int8_t x63 = -1;
	int16_t x64 = 921;
	static volatile int32_t t15 = -17;

	t15 = (x61+((x62==x63)%x64));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x67 = INT64_MIN;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = 561918859928242771LLU;

	t16 = (x65+((x66==x67)%x68));

	if (t16 != 349LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = UINT64_MAX;

	t17 = (x69+((x70==x71)%x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	volatile int32_t x74 = INT32_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	static volatile int8_t x76 = 1;
	int32_t t18 = 16420;

	t18 = (x73+((x74==x75)%x76));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int8_t x78 = INT8_MIN;
	uint64_t x79 = UINT64_MAX;
	static int32_t x80 = 60;

	t19 = (x77+((x78==x79)%x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int64_t x82 = INT64_MIN;
	int16_t x83 = -1;
	int64_t t20 = -2LL;

	t20 = (x81+((x82==x83)%x84));

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 2388717583236LLU;
	int64_t x86 = 746476LL;
	int8_t x87 = INT8_MAX;
	int64_t x88 = INT64_MIN;
	volatile uint64_t t21 = 130213187LLU;

	t21 = (x85+((x86==x87)%x88));

	if (t21 != 2388717583236LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	volatile int32_t x91 = INT32_MIN;
	static volatile uint8_t x92 = UINT8_MAX;

	t22 = (x89+((x90==x91)%x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int64_t x94 = -3440314LL;
	static int16_t x95 = INT16_MAX;
	int32_t x96 = 85;

	t23 = (x93+((x94==x95)%x96));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static volatile uint16_t x99 = 4134U;
	static volatile uint64_t x100 = 82LLU;

	t24 = (x97+((x98==x99)%x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	volatile uint32_t x104 = 42249588U;
	volatile int64_t t25 = 612430375923943LL;

	t25 = (x101+((x102==x103)%x104));

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	static int16_t x110 = -1;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t26 = 1;

	t26 = (x109+((x110==x111)%x112));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 0;
	volatile uint16_t x115 = UINT16_MAX;
	int32_t x116 = 324;
	int32_t t27 = 244;

	t27 = (x113+((x114==x115)%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -5;
	static int16_t x118 = -119;
	static int64_t x119 = INT64_MAX;
	volatile int16_t x120 = -1;
	int32_t t28 = -3;

	t28 = (x117+((x118==x119)%x120));

	if (t28 != -5) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = 21074837LL;
	int8_t x123 = -1;
	static uint8_t x124 = UINT8_MAX;
	int64_t t29 = -1858LL;

	t29 = (x121+((x122==x123)%x124));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int64_t x127 = INT64_MIN;
	uint8_t x128 = 7U;
	uint32_t t30 = UINT32_MAX;

	t30 = (x125+((x126==x127)%x128));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x131 = 1;
	int64_t x132 = 839LL;
	volatile uint64_t t31 = 11273556LLU;

	t31 = (x129+((x130==x131)%x132));

	if (t31 != 222LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	volatile int64_t x134 = -1LL;
	uint32_t x135 = 190733921U;
	int16_t x136 = -165;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x133+((x134==x135)%x136));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	volatile uint16_t x139 = UINT16_MAX;
	int64_t t33 = INT64_MIN;

	t33 = (x137+((x138==x139)%x140));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = 104026643675059LL;
	static int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MIN;
	volatile uint16_t x144 = 9U;
	int64_t t34 = -2657LL;

	t34 = (x141+((x142==x143)%x144));

	if (t34 != 104026643675059LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	int64_t x148 = 3779525310602LL;
	int64_t t35 = -8743202488259LL;

	t35 = (x145+((x146==x147)%x148));

	if (t35 != -32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 8760931491151811LLU;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = -6;
	uint64_t t36 = 1805LLU;

	t36 = (x149+((x150==x151)%x152));

	if (t36 != 8760931491151811LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = INT64_MIN;
	static int64_t x156 = INT64_MAX;
	volatile int64_t t37 = 16143078471LL;

	t37 = (x153+((x154==x155)%x156));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = 0;
	int64_t x158 = INT64_MIN;
	volatile int16_t x159 = INT16_MIN;
	uint64_t t38 = 9LLU;

	t38 = (x157+((x158==x159)%x160));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x161 = -1;
	static volatile uint16_t x162 = UINT16_MAX;
	volatile int32_t x163 = INT32_MIN;
	volatile int32_t t39 = -3313;

	t39 = (x161+((x162==x163)%x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = INT16_MAX;
	static uint16_t x166 = 11073U;
	int64_t x167 = -1LL;
	int32_t x168 = -1;
	int32_t t40 = -134833;

	t40 = (x165+((x166==x167)%x168));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -6569;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = UINT16_MAX;
	static int64_t x172 = INT64_MIN;

	t41 = (x169+((x170==x171)%x172));

	if (t41 != -6569LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x174 = 12U;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t42 = -24917382146224238LL;

	t42 = (x173+((x174==x175)%x176));

	if (t42 != -222298122322LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	int8_t x178 = INT8_MIN;
	uint16_t x179 = 0U;
	int16_t x180 = INT16_MIN;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x177+((x178==x179)%x180));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = INT64_MIN;
	static volatile int64_t t44 = -6708LL;

	t44 = (x181+((x182==x183)%x184));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = 56554405149LL;
	int32_t x186 = -16678103;
	int32_t x187 = 127;
	int16_t x188 = 1;

	t45 = (x185+((x186==x187)%x188));

	if (t45 != 56554405149LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x189 = 52207;
	volatile int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MAX;
	volatile int8_t x192 = 4;
	volatile int32_t t46 = -19033680;

	t46 = (x189+((x190==x191)%x192));

	if (t46 != 52207) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = -1;
	volatile int8_t x194 = INT8_MAX;
	volatile uint16_t x195 = 2379U;
	int32_t x196 = INT32_MAX;
	volatile int32_t t47 = 24910;

	t47 = (x193+((x194==x195)%x196));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x202 = UINT8_MAX;
	uint32_t x203 = 3U;
	int64_t x204 = INT64_MAX;
	int64_t t48 = 2456172942765678LL;

	t48 = (x201+((x202==x203)%x204));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MIN;
	static int64_t x208 = INT64_MIN;
	static volatile int64_t t49 = -1980590844778425526LL;

	t49 = (x205+((x206==x207)%x208));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MAX;
	int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MIN;

	t50 = (x209+((x210==x211)%x212));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x214 = INT32_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	static volatile uint32_t t51 = 998166269U;

	t51 = (x213+((x214==x215)%x216));

	if (t51 != 13U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = 5;
	static volatile int8_t x218 = 1;
	volatile uint32_t x219 = 205136594U;
	volatile uint16_t x220 = UINT16_MAX;
	int32_t t52 = 185;

	t52 = (x217+((x218==x219)%x220));

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 58U;
	int16_t x222 = INT16_MIN;
	static uint8_t x223 = 68U;
	uint32_t x224 = UINT32_MAX;
	uint32_t t53 = 81U;

	t53 = (x221+((x222==x223)%x224));

	if (t53 != 58U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x225 = 7U;
	volatile uint32_t x226 = 134U;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = 43;
	volatile uint32_t t54 = 18905U;

	t54 = (x225+((x226==x227)%x228));

	if (t54 != 7U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x229 = -1;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t55 = 33261090;

	t55 = (x229+((x230==x231)%x232));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x234 = -1;
	uint8_t x235 = 112U;
	static int32_t x236 = 55;
	volatile int64_t t56 = INT64_MAX;

	t56 = (x233+((x234==x235)%x236));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	uint8_t x238 = 23U;
	volatile int8_t x239 = INT8_MIN;
	uint64_t t57 = 301656LLU;

	t57 = (x237+((x238==x239)%x240));

	if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = INT8_MIN;
	volatile int64_t x242 = INT64_MIN;
	int32_t x243 = -6;
	int64_t x244 = -1LL;
	int64_t t58 = 7327LL;

	t58 = (x241+((x242==x243)%x244));

	if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	static volatile int16_t x246 = INT16_MAX;
	int16_t x247 = 1;
	int32_t x248 = -1;
	int64_t t59 = INT64_MIN;

	t59 = (x245+((x246==x247)%x248));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 82U;
	int8_t x250 = -3;
	uint8_t x251 = 1U;
	int64_t x252 = -2697143LL;
	int64_t t60 = 0LL;

	t60 = (x249+((x250==x251)%x252));

	if (t60 != 82LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	volatile int16_t x255 = 1;
	volatile int64_t x256 = INT64_MIN;
	int64_t t61 = 30156713831LL;

	t61 = (x253+((x254==x255)%x256));

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = INT16_MAX;
	int8_t x258 = -1;
	volatile int32_t x259 = INT32_MIN;
	int32_t t62 = -11565937;

	t62 = (x257+((x258==x259)%x260));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	int32_t x263 = -1;
	int32_t t63 = -75965716;

	t63 = (x261+((x262==x263)%x264));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = -211;
	int16_t x266 = 1;
	int8_t x267 = -1;
	uint64_t x268 = 5603953328489290231LLU;

	t64 = (x265+((x266==x267)%x268));

	if (t64 != 18446744073709551405LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x269 = UINT64_MAX;
	static volatile uint32_t x271 = 1265651U;
	int32_t x272 = INT32_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = (x269+((x270==x271)%x272));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	uint64_t x274 = UINT64_MAX;
	int32_t x275 = 33834205;
	int16_t x276 = -1;
	int32_t t66 = 3077503;

	t66 = (x273+((x274==x275)%x276));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x277 = 13694;
	volatile int32_t x278 = -404876;
	static int16_t x280 = INT16_MAX;
	volatile int32_t t67 = 14923632;

	t67 = (x277+((x278==x279)%x280));

	if (t67 != 13694) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x282 = INT64_MAX;
	int64_t x283 = INT64_MIN;
	int16_t x284 = -20;
	volatile int32_t t68 = -578823061;

	t68 = (x281+((x282==x283)%x284));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = 270231LL;
	static int8_t x286 = INT8_MIN;
	int8_t x287 = 23;
	int64_t x288 = INT64_MIN;
	int64_t t69 = 38217409465LL;

	t69 = (x285+((x286==x287)%x288));

	if (t69 != 270231LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x289 = UINT64_MAX;
	uint64_t x290 = 0LLU;
	uint8_t x291 = UINT8_MAX;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x289+((x290==x291)%x292));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -208;
	volatile uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 3U;
	int8_t x296 = -9;
	static int32_t t71 = -9;

	t71 = (x293+((x294==x295)%x296));

	if (t71 != -208) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x297 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	int16_t x300 = -2258;
	volatile int32_t t72 = -915;

	t72 = (x297+((x298==x299)%x300));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 1U;
	int8_t x302 = 54;
	uint16_t x303 = 30423U;
	int8_t x304 = INT8_MIN;
	int32_t t73 = 9809764;

	t73 = (x301+((x302==x303)%x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = -59;
	int8_t x306 = -4;
	int32_t x307 = -62798496;
	volatile int64_t x308 = INT64_MIN;
	volatile int64_t t74 = -505LL;

	t74 = (x305+((x306==x307)%x308));

	if (t74 != -59LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = INT32_MAX;
	volatile uint64_t x310 = 325472760510LLU;
	int8_t x312 = 33;
	volatile int32_t t75 = INT32_MAX;

	t75 = (x309+((x310==x311)%x312));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x319 = UINT32_MAX;
	static volatile int16_t x320 = -1;
	static volatile int32_t t76 = 0;

	t76 = (x317+((x318==x319)%x320));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = INT8_MAX;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = UINT16_MAX;
	static volatile int16_t x324 = INT16_MIN;
	static int32_t t77 = 1;

	t77 = (x321+((x322==x323)%x324));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x327 = 4357U;
	int16_t x328 = INT16_MAX;

	t78 = (x325+((x326==x327)%x328));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x330 = -1LL;
	int32_t x331 = 325308;
	uint8_t x332 = 2U;
	int32_t t79 = 8319;

	t79 = (x329+((x330==x331)%x332));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x334 = 765745;
	static int16_t x335 = INT16_MIN;
	volatile int64_t x336 = 5755031291LL;
	static volatile int64_t t80 = 627LL;

	t80 = (x333+((x334==x335)%x336));

	if (t80 != -15725LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x338 = INT8_MAX;
	static int16_t x339 = INT16_MAX;
	static volatile uint8_t x340 = UINT8_MAX;
	volatile uint32_t t81 = 63278251U;

	t81 = (x337+((x338==x339)%x340));

	if (t81 != 3945352U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	uint32_t t82 = 16U;

	t82 = (x341+((x342==x343)%x344));

	if (t82 != 5U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = -15;
	static int8_t x348 = 8;
	volatile int32_t t83 = -619369338;

	t83 = (x345+((x346==x347)%x348));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x350 = 57U;
	volatile int32_t x351 = -95;
	uint32_t x352 = UINT32_MAX;
	static uint32_t t84 = 258911U;

	t84 = (x349+((x350==x351)%x352));

	if (t84 != 255U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 22U;
	int8_t x354 = INT8_MAX;
	static uint64_t x355 = 40833121455541805LLU;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t85 = 384513736LLU;

	t85 = (x353+((x354==x355)%x356));

	if (t85 != 22LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x357 = 2;
	static uint32_t x359 = UINT32_MAX;
	static volatile int32_t t86 = 18274;

	t86 = (x357+((x358==x359)%x360));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x361 = INT8_MIN;
	static uint32_t x362 = 259U;
	uint16_t x363 = 27374U;
	uint32_t t87 = 14159U;

	t87 = (x361+((x362==x363)%x364));

	if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 58446;
	static volatile uint8_t x366 = 3U;
	volatile uint8_t x367 = 10U;
	int32_t x368 = 42338849;
	volatile int32_t t88 = 501119789;

	t88 = (x365+((x366==x367)%x368));

	if (t88 != 58446) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MIN;
	int32_t x371 = -1;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t89 = 178087587;

	t89 = (x369+((x370==x371)%x372));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x373 = 50U;
	int64_t x374 = INT64_MIN;
	int64_t x375 = 52757438426LL;
	uint16_t x376 = 168U;

	t90 = (x373+((x374==x375)%x376));

	if (t90 != 50) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x377 = -1LL;
	static int8_t x378 = -26;
	volatile int32_t x379 = 118368084;
	int8_t x380 = -1;
	int64_t t91 = 28684282LL;

	t91 = (x377+((x378==x379)%x380));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x381 = -22869881098LL;
	int64_t x382 = INT64_MIN;
	static int16_t x383 = -109;
	int64_t x384 = INT64_MAX;

	t92 = (x381+((x382==x383)%x384));

	if (t92 != -22869881098LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x386 = 10013700LLU;
	int64_t x387 = INT64_MAX;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t93 = 0;

	t93 = (x385+((x386==x387)%x388));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MIN;
	volatile int16_t x390 = 49;
	int16_t x392 = INT16_MIN;
	int32_t t94 = -50698413;

	t94 = (x389+((x390==x391)%x392));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = INT32_MAX;
	static int16_t x394 = INT16_MAX;
	int32_t x395 = INT32_MIN;
	static int16_t x396 = INT16_MAX;

	t95 = (x393+((x394==x395)%x396));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -94941763;
	static int64_t x398 = -1LL;
	static uint8_t x399 = 99U;
	volatile int32_t t96 = 0;

	t96 = (x397+((x398==x399)%x400));

	if (t96 != -94941763) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x401+((x402==x403)%x404));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = -1LL;
	int32_t x406 = INT32_MIN;
	volatile int32_t x407 = INT32_MAX;
	volatile uint64_t x408 = 64192LLU;

	t98 = (x405+((x406==x407)%x408));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MAX;
	static int8_t x410 = INT8_MAX;
	uint8_t x411 = 3U;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x409+((x410==x411)%x412));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

