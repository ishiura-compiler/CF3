#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 0U;
uint32_t x14 = 966018426U;
int8_t x20 = 0;
uint64_t t5 = 0LLU;
uint8_t x28 = UINT8_MAX;
int8_t x30 = 56;
volatile uint16_t x34 = UINT16_MAX;
uint8_t x36 = UINT8_MAX;
static uint8_t x41 = UINT8_MAX;
uint16_t x45 = 24U;
uint16_t x50 = 12U;
uint16_t x51 = 3033U;
uint64_t x52 = 26486744910LLU;
uint16_t x55 = UINT16_MAX;
uint8_t x57 = UINT8_MAX;
int32_t x58 = -3402;
int32_t t14 = 820990720;
volatile int8_t x62 = INT8_MAX;
volatile int64_t t16 = -97110138246398LL;
volatile int64_t t18 = 3881541749142436084LL;
int32_t x78 = INT32_MIN;
int64_t x80 = INT64_MAX;
uint32_t x82 = UINT32_MAX;
uint16_t x84 = UINT16_MAX;
volatile uint32_t t21 = 10U;
int64_t x110 = INT64_MIN;
int32_t x112 = INT32_MIN;
volatile int64_t x118 = INT64_MIN;
int16_t x119 = -1;
int8_t x127 = -1;
int32_t x128 = INT32_MAX;
int32_t t34 = 747667;
int8_t x154 = INT8_MIN;
int64_t x174 = INT64_MAX;
uint32_t x176 = 833659567U;
int8_t x184 = 0;
static volatile int32_t t45 = 10571;
static volatile int32_t x185 = INT32_MAX;
int32_t x188 = -1;
static int8_t x192 = INT8_MAX;
int64_t x194 = 24LL;
volatile int32_t x207 = -17411;
int64_t x211 = INT64_MAX;
volatile int64_t t52 = 97283865010LL;
static uint16_t x214 = 700U;
volatile int32_t x216 = 353;
int16_t x219 = INT16_MIN;
static uint8_t x220 = 1U;
int64_t x221 = INT64_MIN;
uint32_t x226 = 0U;
static int64_t x229 = INT64_MIN;
int32_t x233 = INT32_MIN;
uint16_t x235 = UINT16_MAX;
uint16_t x239 = 7697U;
volatile int64_t x246 = 1060981298623989LL;
static uint64_t x247 = 1556LLU;
volatile int32_t t62 = 6;
static int16_t x254 = -8;
volatile int8_t x258 = 52;
int8_t x261 = 1;
static int64_t t67 = 12LL;
uint16_t x274 = UINT16_MAX;
volatile uint32_t x275 = 212U;
int32_t x276 = 50430;
int32_t x280 = 39478960;
uint16_t x285 = 6U;
volatile int64_t t72 = 1LL;
int16_t x295 = INT16_MIN;
static int16_t x302 = 7;
static int32_t x303 = 417496;
uint8_t x304 = 1U;
int32_t t75 = 8185;
int32_t x308 = -178775;
static volatile uint32_t t76 = 2230U;
int64_t x318 = 4250552029230LL;
volatile int32_t x324 = -15476613;
int32_t t80 = -10176;
volatile int32_t t81 = 78057442;
static volatile uint64_t t83 = 8LLU;
volatile int32_t x340 = -1;
int32_t x347 = -1036355;
int32_t x355 = -1;
int32_t t88 = -2034124;
static int32_t x368 = -14;
static int64_t x370 = -150LL;
int32_t x376 = -1;
uint64_t x378 = 55997LLU;
volatile int8_t x388 = INT8_MAX;
static int8_t x393 = INT8_MAX;
volatile uint32_t x394 = 1129474410U;
int32_t x396 = 6125273;
int32_t t98 = -30;
uint32_t x400 = UINT32_MAX;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static int64_t x2 = 3785LL;
	int64_t x3 = 1LL;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = -54295004407538628LL;

	t0 = ((x1<=x2)&(x3^x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 1064U;
	int16_t x7 = INT16_MAX;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -471045297;

	t1 = ((x5<=x6)&(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = -1;
	int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -224343089;

	t2 = ((x9<=x10)&(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static int16_t x15 = INT16_MAX;
	volatile int64_t x16 = INT64_MIN;
	int64_t t3 = -3578LL;

	t3 = ((x13<=x14)&(x15^x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int16_t x18 = -2;
	static uint32_t x19 = 195569600U;
	volatile uint32_t t4 = 0U;

	t4 = ((x17<=x18)&(x19^x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static volatile int16_t x22 = INT16_MIN;
	uint64_t x23 = 670961086303268LLU;
	volatile uint16_t x24 = UINT16_MAX;

	t5 = ((x21<=x22)&(x23^x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 804443716U;
	int16_t x26 = -7933;
	uint8_t x27 = 0U;
	volatile int32_t t6 = -3874976;

	t6 = ((x25<=x26)&(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = 1981554864612902499LL;
	static int32_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = 474444;

	t7 = ((x29<=x30)&(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MAX;
	int8_t x35 = -1;
	int32_t t8 = 29324;

	t8 = ((x33<=x34)&(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MIN;
	volatile uint32_t x39 = UINT32_MAX;
	uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 74U;

	t9 = ((x37<=x38)&(x39^x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = -32041;
	int32_t x43 = -1;
	static uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 1U;

	t10 = ((x41<=x42)&(x43^x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x46 = UINT8_MAX;
	uint32_t x47 = 41080772U;
	int16_t x48 = INT16_MIN;
	static uint32_t t11 = 5U;

	t11 = ((x45<=x46)&(x47^x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	uint64_t t12 = 4047458931LLU;

	t12 = ((x49<=x50)&(x51^x52));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -7038239881143218LL;
	int64_t x54 = -1LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -938176876;

	t13 = ((x53<=x54)&(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x59 = 17U;
	int16_t x60 = -1;

	t14 = ((x57<=x58)&(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static volatile uint32_t x63 = 197406115U;
	static int16_t x64 = INT16_MAX;
	static volatile uint32_t t15 = 12067U;

	t15 = ((x61<=x62)&(x63^x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	static int32_t x66 = 6;
	int32_t x67 = -1;
	int64_t x68 = INT64_MIN;

	t16 = ((x65<=x66)&(x67^x68));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -1;
	int8_t x70 = INT8_MAX;
	volatile uint32_t x71 = 3655412U;
	int32_t x72 = -1500;
	static volatile uint32_t t17 = 471009697U;

	t17 = ((x69<=x70)&(x71^x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 13U;
	int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	volatile int64_t x76 = INT64_MAX;

	t18 = ((x73<=x74)&(x75^x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	volatile uint8_t x79 = 0U;
	static volatile int64_t t19 = -2013571670027222LL;

	t19 = ((x77<=x78)&(x79^x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint64_t x83 = UINT64_MAX;
	static uint64_t t20 = 10655341289840LLU;

	t20 = ((x81<=x82)&(x83^x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	volatile uint64_t x86 = 1550174LLU;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 60310U;

	t21 = ((x85<=x86)&(x87^x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 127495867;
	int64_t x90 = -1LL;
	int32_t x91 = INT32_MIN;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t22 = 6273457;

	t22 = ((x89<=x90)&(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 506017457U;
	int64_t x94 = -1LL;
	int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MIN;
	int64_t t23 = 4128729104221883104LL;

	t23 = ((x93<=x94)&(x95^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1524;
	int16_t x98 = -6240;
	uint8_t x99 = 4U;
	uint16_t x100 = 173U;
	int32_t t24 = 58332;

	t24 = ((x97<=x98)&(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x102 = -2657099947LL;
	int32_t x103 = INT32_MIN;
	static int64_t x104 = INT64_MIN;
	static int64_t t25 = 1918745LL;

	t25 = ((x101<=x102)&(x103^x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MIN;
	int8_t x107 = -1;
	volatile uint16_t x108 = 436U;
	static volatile int32_t t26 = -3012;

	t26 = ((x105<=x106)&(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int32_t x111 = -1;
	volatile int32_t t27 = 254;

	t27 = ((x109<=x110)&(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = UINT16_MAX;
	volatile int32_t x114 = INT32_MIN;
	volatile int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	int64_t t28 = -1183005495628422LL;

	t28 = ((x113<=x114)&(x115^x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static uint32_t x120 = 2082U;
	uint32_t t29 = 809623U;

	t29 = ((x117<=x118)&(x119^x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MAX;
	int8_t x123 = -1;
	uint32_t x124 = 830287565U;
	uint32_t t30 = 731121995U;

	t30 = ((x121<=x122)&(x123^x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MIN;
	int32_t t31 = 706553087;

	t31 = ((x125<=x126)&(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	uint16_t x131 = 40U;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -904LL;

	t32 = ((x129<=x130)&(x131^x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	static volatile int32_t x134 = INT32_MIN;
	int64_t x135 = -1LL;
	int16_t x136 = -1;
	volatile int64_t t33 = -33465764LL;

	t33 = ((x133<=x134)&(x135^x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	static int64_t x138 = INT64_MIN;
	uint8_t x139 = 5U;
	int8_t x140 = 4;

	t34 = ((x137<=x138)&(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 1LL;
	int8_t x142 = INT8_MAX;
	static uint64_t x143 = 201618110904470LLU;
	volatile int32_t x144 = INT32_MIN;
	uint64_t t35 = 440LLU;

	t35 = ((x141<=x142)&(x143^x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 2U;
	int8_t x146 = -6;
	uint32_t x147 = 13061054U;
	static volatile int32_t x148 = INT32_MIN;
	uint32_t t36 = 70898921U;

	t36 = ((x145<=x146)&(x147^x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -271;
	uint16_t x150 = 0U;
	volatile int16_t x151 = INT16_MIN;
	static int16_t x152 = -1;
	int32_t t37 = -43;

	t37 = ((x149<=x150)&(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 25;
	int32_t x155 = INT32_MIN;
	int16_t x156 = -124;
	volatile int32_t t38 = -13571266;

	t38 = ((x153<=x154)&(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = 13171200LL;
	int16_t x158 = INT16_MAX;
	int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t39 = 245896029LLU;

	t39 = ((x157<=x158)&(x159^x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	volatile uint64_t x162 = 240LLU;
	volatile uint64_t x163 = 3030176005088924616LLU;
	int8_t x164 = INT8_MIN;
	volatile uint64_t t40 = 5828521LLU;

	t40 = ((x161<=x162)&(x163^x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = 16628U;
	volatile int32_t x167 = -23;
	int32_t x168 = -1;
	volatile int32_t t41 = 187426458;

	t41 = ((x165<=x166)&(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 548LLU;
	uint16_t x170 = 25781U;
	volatile int64_t x171 = INT64_MIN;
	int8_t x172 = 25;
	static volatile int64_t t42 = 18101089LL;

	t42 = ((x169<=x170)&(x171^x172));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	uint16_t x175 = 13149U;
	volatile uint32_t t43 = 17606395U;

	t43 = ((x173<=x174)&(x175^x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MAX;
	static volatile int32_t x178 = 4;
	volatile uint8_t x179 = 58U;
	int32_t x180 = INT32_MIN;
	int32_t t44 = 0;

	t44 = ((x177<=x178)&(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -1LL;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MAX;

	t45 = ((x181<=x182)&(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	int32_t t46 = 204;

	t46 = ((x185<=x186)&(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 940847834912429LLU;
	uint16_t x191 = 195U;
	static volatile int32_t t47 = -1;

	t47 = ((x189<=x190)&(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	static int16_t x196 = -5;
	volatile int64_t t48 = -936LL;

	t48 = ((x193<=x194)&(x195^x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	static uint32_t x198 = UINT32_MAX;
	uint8_t x199 = 0U;
	int8_t x200 = -1;
	volatile int32_t t49 = 7626209;

	t49 = ((x197<=x198)&(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = 485LL;
	int64_t x202 = INT64_MIN;
	int64_t x203 = -21955035LL;
	static int32_t x204 = INT32_MAX;
	int64_t t50 = 688147220189206082LL;

	t50 = ((x201<=x202)&(x203^x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 3636684U;
	volatile int32_t x206 = INT32_MIN;
	int32_t x208 = 749272;
	volatile int32_t t51 = 1;

	t51 = ((x205<=x206)&(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -135119419462LL;
	int16_t x210 = -3;
	int32_t x212 = -127;

	t52 = ((x209<=x210)&(x211^x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int32_t x215 = 322;
	int32_t t53 = -221130;

	t53 = ((x213<=x214)&(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -3;
	int64_t x218 = INT64_MIN;
	int32_t t54 = 32493662;

	t54 = ((x217<=x218)&(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = UINT8_MAX;
	int32_t t55 = 0;

	t55 = ((x221<=x222)&(x223^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -1;
	static int64_t x227 = INT64_MIN;
	uint32_t x228 = 66062255U;
	volatile int64_t t56 = -99022LL;

	t56 = ((x225<=x226)&(x227^x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x230 = INT8_MIN;
	static uint32_t x231 = 755520227U;
	int16_t x232 = INT16_MIN;
	uint32_t t57 = 100361624U;

	t57 = ((x229<=x230)&(x231^x232));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MAX;
	static uint64_t x236 = 469105LLU;
	static volatile uint64_t t58 = 396544748454810533LLU;

	t58 = ((x233<=x234)&(x235^x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 12U;
	int32_t x238 = INT32_MIN;
	uint32_t x240 = 552178U;
	uint32_t t59 = 575U;

	t59 = ((x237<=x238)&(x239^x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x241 = 40U;
	static int8_t x242 = 1;
	int16_t x243 = -6;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 1;

	t60 = ((x241<=x242)&(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -601381;
	int64_t x248 = INT64_MIN;
	uint64_t t61 = 13774014128LLU;

	t61 = ((x245<=x246)&(x247^x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 152LLU;
	uint16_t x250 = 0U;
	int32_t x251 = -1;
	int32_t x252 = 7;

	t62 = ((x249<=x250)&(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	static volatile int8_t x255 = INT8_MIN;
	static int32_t x256 = INT32_MIN;
	int32_t t63 = -2313934;

	t63 = ((x253<=x254)&(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int16_t x259 = -1;
	int32_t x260 = INT32_MAX;
	int32_t t64 = -868229;

	t64 = ((x257<=x258)&(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -20;
	volatile int64_t x263 = INT64_MIN;
	uint64_t x264 = 1LLU;
	volatile uint64_t t65 = 859526650LLU;

	t65 = ((x261<=x262)&(x263^x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 56586647;
	static int16_t x266 = -8241;
	static int32_t x267 = INT32_MAX;
	static uint16_t x268 = 138U;
	int32_t t66 = 215562;

	t66 = ((x265<=x266)&(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MAX;
	int64_t x271 = 430543926LL;
	static int16_t x272 = -165;

	t67 = ((x269<=x270)&(x271^x272));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	volatile uint32_t t68 = 47196822U;

	t68 = ((x273<=x274)&(x275^x276));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = UINT8_MAX;
	uint64_t x278 = 593870735204508LLU;
	volatile uint16_t x279 = 6U;
	volatile int32_t t69 = -27351;

	t69 = ((x277<=x278)&(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x281 = -1439543LL;
	uint32_t x282 = 2044378U;
	int64_t x283 = -1LL;
	static int64_t x284 = -5LL;
	static volatile int64_t t70 = -49274423LL;

	t70 = ((x281<=x282)&(x283^x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = 0;
	static int32_t x287 = -1;
	int8_t x288 = -24;
	static int32_t t71 = -4276;

	t71 = ((x285<=x286)&(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	uint8_t x290 = 82U;
	static int16_t x291 = 3;
	volatile int64_t x292 = INT64_MAX;

	t72 = ((x289<=x290)&(x291^x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	int16_t x294 = INT16_MIN;
	static volatile int32_t x296 = INT32_MAX;
	volatile int32_t t73 = 29053;

	t73 = ((x293<=x294)&(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static volatile int8_t x298 = 10;
	volatile int32_t x299 = 24;
	int8_t x300 = INT8_MIN;
	static int32_t t74 = -3419;

	t74 = ((x297<=x298)&(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x301 = INT16_MIN;

	t75 = ((x301<=x302)&(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	volatile uint64_t x306 = 124880LLU;
	uint32_t x307 = 1183847U;

	t76 = ((x305<=x306)&(x307^x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 1U;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = 49;
	static int8_t x312 = INT8_MIN;
	static volatile int32_t t77 = 162108037;

	t77 = ((x309<=x310)&(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = -1LL;
	static volatile int16_t x314 = -1;
	int16_t x315 = -616;
	uint32_t x316 = 28907U;
	static uint32_t t78 = 63656U;

	t78 = ((x313<=x314)&(x315^x316));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile int16_t x319 = INT16_MIN;
	volatile int16_t x320 = -1;
	volatile int32_t t79 = -693580624;

	t79 = ((x317<=x318)&(x319^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	volatile int16_t x322 = INT16_MIN;
	volatile int16_t x323 = 3154;

	t80 = ((x321<=x322)&(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	uint8_t x326 = 112U;
	static uint16_t x327 = 29U;
	static uint16_t x328 = UINT16_MAX;

	t81 = ((x325<=x326)&(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = 0;
	volatile int64_t x330 = INT64_MIN;
	int16_t x331 = 937;
	static int64_t x332 = 21053495LL;
	int64_t t82 = -6351181LL;

	t82 = ((x329<=x330)&(x331^x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	static int16_t x334 = INT16_MIN;
	uint64_t x335 = 35915328649678735LLU;
	uint32_t x336 = UINT32_MAX;

	t83 = ((x333<=x334)&(x335^x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -3;
	int8_t x338 = -1;
	static int64_t x339 = -1LL;
	int64_t t84 = 29658LL;

	t84 = ((x337<=x338)&(x339^x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = 0;
	static uint16_t x343 = 220U;
	int64_t x344 = INT64_MAX;
	int64_t t85 = -100LL;

	t85 = ((x341<=x342)&(x343^x344));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -5;
	static volatile int8_t x346 = -1;
	uint32_t x348 = UINT32_MAX;
	static uint32_t t86 = 315064179U;

	t86 = ((x345<=x346)&(x347^x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	volatile uint8_t x350 = UINT8_MAX;
	volatile uint16_t x351 = 4U;
	uint32_t x352 = 588935997U;
	uint32_t t87 = 293528U;

	t87 = ((x349<=x350)&(x351^x352));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = -1;
	volatile uint64_t x354 = UINT64_MAX;
	uint8_t x356 = 22U;

	t88 = ((x353<=x354)&(x355^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MAX;
	uint8_t x358 = UINT8_MAX;
	uint64_t x359 = 1372282157493983031LLU;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t89 = 26LLU;

	t89 = ((x357<=x358)&(x359^x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	volatile int32_t x362 = INT32_MAX;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int64_t t90 = -632184074LL;

	t90 = ((x361<=x362)&(x363^x364));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = 0;
	int64_t x367 = INT64_MAX;
	int64_t t91 = 1137741779533343LL;

	t91 = ((x365<=x366)&(x367^x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x371 = -1;
	int16_t x372 = -1;
	static volatile int32_t t92 = -108001;

	t92 = ((x369<=x370)&(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = 0;
	int32_t x375 = INT32_MAX;
	volatile int32_t t93 = -4111816;

	t93 = ((x373<=x374)&(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	volatile uint16_t x379 = 259U;
	static volatile uint16_t x380 = 50U;
	int32_t t94 = 340;

	t94 = ((x377<=x378)&(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	static int32_t x382 = -1977489;
	volatile int16_t x383 = 1;
	uint8_t x384 = UINT8_MAX;
	static int32_t t95 = 7;

	t95 = ((x381<=x382)&(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = -7;
	static uint16_t x387 = UINT16_MAX;
	int32_t t96 = -5841;

	t96 = ((x385<=x386)&(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	uint32_t x390 = 58608U;
	int32_t x391 = INT32_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 111159;

	t97 = ((x389<=x390)&(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x395 = -1;

	t98 = ((x393<=x394)&(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 1;
	uint16_t x398 = 18U;
	uint8_t x399 = 2U;
	uint32_t t99 = 822U;

	t99 = ((x397<=x398)&(x399^x400));

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
