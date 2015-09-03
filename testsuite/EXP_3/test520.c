#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 80U;
volatile int16_t x4 = INT16_MIN;
static volatile int64_t t0 = -96708551462237226LL;
uint64_t x12 = UINT64_MAX;
static volatile int64_t x30 = 92382LL;
int32_t x40 = INT32_MIN;
uint32_t x43 = UINT32_MAX;
volatile int32_t x49 = -45953;
uint64_t x51 = 0LLU;
static int32_t x52 = -1;
static uint16_t x65 = UINT16_MAX;
int16_t x68 = INT16_MAX;
int32_t x70 = INT32_MIN;
static int32_t t13 = -123650;
uint32_t x73 = 279850U;
static uint64_t x74 = 3701809LLU;
volatile int64_t x81 = INT64_MAX;
volatile int64_t x82 = -52933907061100913LL;
uint8_t x84 = 22U;
static int64_t t15 = -3120198219779LL;
static int64_t x86 = 7991231107869LL;
int8_t x100 = -1;
volatile int32_t t19 = -1;
uint32_t x108 = UINT32_MAX;
volatile int64_t t21 = -26702163387676450LL;
int8_t x111 = INT8_MAX;
static int64_t t24 = -35274LL;
int16_t x124 = -1;
uint16_t x127 = 16617U;
static uint32_t x128 = UINT32_MAX;
volatile uint32_t t26 = 2125382U;
int16_t x129 = INT16_MIN;
int8_t x131 = -5;
uint32_t t27 = 554U;
static int32_t x134 = -1;
int32_t x142 = INT32_MAX;
int64_t x143 = 1472090065947480LL;
volatile int16_t x145 = -1;
uint32_t x148 = UINT32_MAX;
uint32_t t31 = 7U;
int64_t x170 = INT64_MAX;
static volatile uint64_t x172 = UINT64_MAX;
int32_t x173 = 509038;
static int8_t x174 = INT8_MAX;
static uint32_t x185 = UINT32_MAX;
volatile uint64_t t40 = 516868LLU;
static uint32_t x190 = 7507231U;
static int64_t x191 = INT64_MAX;
int64_t x196 = -1LL;
volatile uint32_t x200 = 32211947U;
volatile uint16_t x204 = 30U;
volatile uint64_t t45 = 57136748LLU;
int8_t x209 = -1;
int16_t x213 = -1;
volatile uint64_t t47 = 27LLU;
static volatile uint32_t x227 = 367519156U;
volatile int16_t x231 = INT16_MIN;
uint32_t t51 = 1590213U;
int16_t x233 = 59;
uint64_t x236 = 6785001722LLU;
uint32_t x238 = 10U;
static int16_t x244 = 139;
volatile int8_t x246 = -1;
int64_t t56 = -200LL;
uint32_t x257 = 12665969U;
int32_t x260 = -84147;
volatile int64_t t58 = -1241302204LL;
int8_t x273 = -1;
static volatile int8_t x274 = 1;
static uint64_t x275 = 15704LLU;
static uint8_t x280 = 38U;
volatile uint32_t t62 = 53U;
int32_t x284 = 1;
volatile uint32_t t64 = 65407U;
uint16_t x301 = 857U;
static volatile int8_t x304 = 39;
int32_t t66 = -490;
static int8_t x320 = -1;
uint16_t x322 = 46U;
int16_t x323 = INT16_MAX;
static volatile uint32_t x330 = 5132585U;
uint32_t t71 = 16U;
static int16_t x333 = -1;
int32_t t74 = -1;
static volatile uint32_t t75 = 157619U;
int64_t x359 = INT64_MAX;
uint64_t x360 = UINT64_MAX;
int32_t x368 = -447;
uint32_t x369 = 274406U;
uint8_t x372 = 23U;
static uint32_t x374 = 387742981U;
int64_t x378 = INT64_MAX;
int64_t t82 = -6LL;
int16_t x382 = 0;
int64_t x384 = INT64_MIN;
int64_t t84 = 14860LL;
static volatile int32_t x394 = INT32_MIN;
uint64_t x399 = UINT64_MAX;
uint64_t t87 = 5808LLU;
int64_t t88 = 46733LL;
uint32_t t89 = 6267911U;
volatile int64_t t90 = 1313289712808732088LL;
uint16_t x433 = 891U;
int8_t x434 = -1;
uint64_t x441 = UINT64_MAX;
uint16_t x445 = 606U;


void f0(void) {
	volatile uint8_t x1 = 22U;
	int64_t x3 = -761LL;

	t0 = ((x1+x2)^(x3/x4));

	if (t0 != 102LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	static uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 7U;
	volatile uint64_t t1 = 4326722780727105112LLU;

	t1 = ((x9+x10)^(x11/x12));

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 21974714560LLU;
	int16_t x14 = -1;
	volatile int16_t x15 = INT16_MIN;
	int8_t x16 = -5;
	static volatile uint64_t t2 = 236327700217554186LLU;

	t2 = ((x13+x14)^(x15/x16));

	if (t2 != 21974716710LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = UINT8_MAX;
	static uint64_t x22 = 3808629127204033LLU;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = -1;
	volatile uint64_t t3 = 123LLU;

	t3 = ((x21+x22)^(x23/x24));

	if (t3 != 3808629127204289LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	volatile int64_t x26 = -242342455LL;
	volatile int16_t x27 = INT16_MIN;
	uint16_t x28 = 26U;
	int64_t t4 = -137912290437LL;

	t4 = ((x25+x26)^(x27/x28));

	if (t4 != -1905140004LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	uint32_t x31 = 46U;
	volatile int8_t x32 = -1;
	static volatile int64_t t5 = 46998005873LL;

	t5 = ((x29+x30)^(x31/x32));

	if (t5 != 59614LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = 57704457;
	volatile int8_t x34 = INT8_MIN;
	volatile int64_t x35 = -1LL;
	uint32_t x36 = 295193U;
	int64_t t6 = 0LL;

	t6 = ((x33+x34)^(x35/x36));

	if (t6 != 57704329LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x37 = 411587899732223997LLU;
	uint32_t x38 = 2U;
	int64_t x39 = 178120734LL;
	static uint64_t t7 = 2454077102493404LLU;

	t7 = ((x37+x38)^(x39/x40));

	if (t7 != 411587899732223999LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x41 = -1;
	uint16_t x42 = UINT16_MAX;
	uint16_t x44 = UINT16_MAX;
	static uint32_t t8 = 100U;

	t8 = ((x41+x42)^(x43/x44));

	if (t8 != 131071U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x50 = INT16_MIN;
	volatile uint64_t t9 = 16105755LLU;

	t9 = ((x49+x50)^(x51/x52));

	if (t9 != 18446744073709472895LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x53 = UINT16_MAX;
	int16_t x54 = -1;
	static uint32_t x55 = UINT32_MAX;
	volatile uint8_t x56 = UINT8_MAX;
	static volatile uint32_t t10 = 51464U;

	t10 = ((x53+x54)^(x55/x56));

	if (t10 != 16908031U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 2;
	uint8_t x58 = 9U;
	int32_t x59 = -67324;
	uint8_t x60 = UINT8_MAX;
	static int32_t t11 = 17;

	t11 = ((x57+x58)^(x59/x60));

	if (t11 != -269) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x66 = 88;
	int64_t x67 = -1LL;
	volatile int64_t t12 = 78882322785774447LL;

	t12 = ((x65+x66)^(x67/x68));

	if (t12 != 65623LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x69 = 1U;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = UINT8_MAX;

	t13 = ((x69+x70)^(x71/x72));

	if (t13 != 2147483521) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = -1;
	volatile uint64_t t14 = 1004211209606LLU;

	t14 = ((x73+x74)^(x75/x76));

	if (t14 != 3981658LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x83 = 2757U;

	t15 = ((x81+x82)^(x83/x84));

	if (t15 != 9170438129793674995LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x87 = -1;
	int64_t x88 = -14725484LL;
	volatile int64_t t16 = -1291LL;

	t16 = ((x85+x86)^(x87/x88));

	if (t16 != 7991231107741LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = 30;
	volatile uint8_t x90 = 1U;
	uint16_t x91 = 679U;
	int8_t x92 = 1;
	int32_t t17 = -13134253;

	t17 = ((x89+x90)^(x91/x92));

	if (t17 != 696) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MAX;
	volatile int64_t x94 = INT64_MIN;
	int64_t x95 = -1LL;
	static int8_t x96 = INT8_MIN;
	volatile int64_t t18 = 2883543438LL;

	t18 = ((x93+x94)^(x95/x96));

	if (t18 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = 162680;
	int8_t x99 = INT8_MIN;

	t19 = ((x97+x98)^(x99/x100));

	if (t19 != 163063) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = -1;
	static int64_t x102 = -3115134764056LL;
	int32_t x103 = INT32_MIN;
	volatile int32_t x104 = INT32_MIN;
	int64_t t20 = 65547770849LL;

	t20 = ((x101+x102)^(x103/x104));

	if (t20 != -3115134764058LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x105 = 1960U;
	uint16_t x106 = 2967U;
	int64_t x107 = 573LL;

	t21 = ((x105+x106)^(x107/x108));

	if (t21 != 4927LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = INT64_MIN;
	volatile uint16_t x110 = UINT16_MAX;
	int64_t x112 = 71663420125LL;
	volatile int64_t t22 = 27LL;

	t22 = ((x109+x110)^(x111/x112));

	if (t22 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x113 = INT32_MAX;
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = INT8_MAX;
	uint8_t x116 = UINT8_MAX;
	uint64_t t23 = 213411LLU;

	t23 = ((x113+x114)^(x115/x116));

	if (t23 != 2147483646LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x117 = INT8_MAX;
	static int8_t x118 = INT8_MIN;
	volatile int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MIN;

	t24 = ((x117+x118)^(x119/x120));

	if (t24 != 72057594037927934LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MAX;
	volatile int16_t x123 = -2998;
	int32_t t25 = 365912514;

	t25 = ((x121+x122)^(x123/x124));

	if (t25 != 29897) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x125 = UINT16_MAX;
	int8_t x126 = -1;

	t26 = ((x125+x126)^(x127/x128));

	if (t26 != 65534U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x130 = 71457;
	uint32_t x132 = UINT32_MAX;

	t27 = ((x129+x130)^(x131/x132));

	if (t27 != 38689U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	volatile uint8_t x135 = 3U;
	uint16_t x136 = 594U;
	volatile int64_t t28 = -121444248657LL;

	t28 = ((x133+x134)^(x135/x136));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MIN;
	uint16_t x144 = UINT16_MAX;
	int64_t t29 = 6114133LL;

	t29 = ((x141+x142)^(x143/x144));

	if (t29 != 22634501929LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x146 = -1;
	volatile uint8_t x147 = UINT8_MAX;
	volatile uint32_t t30 = 120U;

	t30 = ((x145+x146)^(x147/x148));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MAX;
	int32_t x150 = 65398281;
	int32_t x151 = INT32_MIN;
	uint32_t x152 = 2U;

	t31 = ((x149+x150)^(x151/x152));

	if (t31 != 1139140232U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 7946305LLU;
	int64_t x154 = -1LL;
	static volatile int8_t x155 = -1;
	int32_t x156 = -507564;
	uint64_t t32 = 191267736383991360LLU;

	t32 = ((x153+x154)^(x155/x156));

	if (t32 != 7946304LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = -227888LL;
	static volatile int32_t x160 = INT32_MAX;
	volatile int64_t t33 = -15598439854386255LL;

	t33 = ((x157+x158)^(x159/x160));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = 3108U;
	uint32_t x162 = 50U;
	int32_t x163 = -1;
	volatile int16_t x164 = 70;
	uint32_t t34 = 10887145U;

	t34 = ((x161+x162)^(x163/x164));

	if (t34 != 3158U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = -52;
	int16_t x167 = INT16_MIN;
	volatile int64_t x168 = -1LL;
	volatile int64_t t35 = 60047634396LL;

	t35 = ((x165+x166)^(x167/x168));

	if (t35 != -52LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x171 = 1U;
	volatile uint64_t t36 = 472394107LLU;

	t36 = ((x169+x170)^(x171/x172));

	if (t36 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x175 = INT32_MAX;
	volatile int8_t x176 = INT8_MIN;
	int32_t t37 = -30321044;

	t37 = ((x173+x174)^(x175/x176));

	if (t37 != -16268052) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = INT32_MIN;
	static uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MAX;
	static int8_t x180 = INT8_MAX;
	static int64_t t38 = -118539827111469LL;

	t38 = ((x177+x178)^(x179/x180));

	if (t38 != 72624978274533246LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 77U;
	static volatile uint64_t x182 = 124832LLU;
	uint16_t x183 = UINT16_MAX;
	int32_t x184 = -40;
	uint64_t t39 = 224104004LLU;

	t39 = ((x181+x182)^(x183/x184));

	if (t39 != 18446744073709428343LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x186 = 9U;
	volatile uint64_t x187 = 14LLU;
	int16_t x188 = -18;

	t40 = ((x185+x186)^(x187/x188));

	if (t40 != 8LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x189 = UINT8_MAX;
	static uint64_t x192 = 1LLU;
	static volatile uint64_t t41 = 1155621911785990LLU;

	t41 = ((x189+x190)^(x191/x192));

	if (t41 != 9223372036847268321LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MIN;
	int64_t x194 = -1LL;
	volatile uint16_t x195 = 407U;
	volatile int64_t t42 = -1523361019659470LL;

	t42 = ((x193+x194)^(x195/x196));

	if (t42 != 278LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = 0LL;
	int16_t x198 = 49;
	int32_t x199 = -18776429;
	int64_t t43 = -1483313887769442209LL;

	t43 = ((x197+x198)^(x199/x200));

	if (t43 != 181LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x201 = 1;
	int8_t x202 = INT8_MIN;
	int16_t x203 = -14909;
	volatile int32_t t44 = 1352;

	t44 = ((x201+x202)^(x203/x204));

	if (t44 != 401) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -123031956LL;
	uint64_t x206 = 1LLU;
	uint64_t x207 = 23536674983739LLU;
	volatile int16_t x208 = INT16_MAX;

	t45 = ((x205+x206)^(x207/x208));

	if (t45 != 18446744072945851779LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = 19;
	int64_t x211 = 41307641918LL;
	int8_t x212 = -1;
	volatile int64_t t46 = 27LL;

	t46 = ((x209+x210)^(x211/x212));

	if (t46 != -41307641904LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x214 = 55U;
	uint64_t x215 = UINT64_MAX;
	static int32_t x216 = INT32_MAX;

	t47 = ((x213+x214)^(x215/x216));

	if (t47 != 8589934642LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = -1;
	int64_t x218 = 93043251205LL;
	int64_t x219 = -107LL;
	uint8_t x220 = UINT8_MAX;
	volatile int64_t t48 = -5347775079LL;

	t48 = ((x217+x218)^(x219/x220));

	if (t48 != 93043251204LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -651;
	uint32_t x222 = 14060U;
	int16_t x223 = -1;
	int16_t x224 = -1;
	static volatile uint32_t t49 = 16109U;

	t49 = ((x221+x222)^(x223/x224));

	if (t49 != 13408U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MIN;
	volatile int32_t x226 = INT32_MAX;
	int8_t x228 = INT8_MIN;
	static int64_t t50 = 9513608537LL;

	t50 = ((x225+x226)^(x227/x228));

	if (t50 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = 35533;
	volatile uint32_t x230 = UINT32_MAX;
	uint32_t x232 = 122462863U;

	t51 = ((x229+x230)^(x231/x232));

	if (t51 != 35567U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x234 = 97U;
	volatile int8_t x235 = -1;
	volatile uint64_t t52 = 2584LLU;

	t52 = ((x233+x234)^(x235/x236));

	if (t52 != 2718753166LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x237 = 6LLU;
	uint64_t x239 = UINT64_MAX;
	volatile uint32_t x240 = UINT32_MAX;
	volatile uint64_t t53 = 15271070758LLU;

	t53 = ((x237+x238)^(x239/x240));

	if (t53 != 4294967313LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 3551306LLU;
	uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 4760287292469449212LLU;
	uint64_t t54 = 49LLU;

	t54 = ((x241+x242)^(x243/x244));

	if (t54 != 34246671172109527LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = -1;
	int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MAX;
	int64_t t55 = 1444380905467LL;

	t55 = ((x245+x246)^(x247/x248));

	if (t55 != -4294967300LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = 8395;
	static int64_t x250 = -155835LL;
	volatile int32_t x251 = 206953818;
	static int8_t x252 = INT8_MIN;

	t56 = ((x249+x250)^(x251/x252));

	if (t56 != 1741910LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x253 = UINT64_MAX;
	static int64_t x254 = -1LL;
	int8_t x255 = -30;
	uint32_t x256 = UINT32_MAX;
	uint64_t t57 = 1857616210LLU;

	t57 = ((x253+x254)^(x255/x256));

	if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x258 = 2666947533987LL;
	static uint16_t x259 = UINT16_MAX;

	t58 = ((x257+x258)^(x259/x260));

	if (t58 != 2666960199956LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MIN;
	int8_t x263 = 1;
	int16_t x264 = -1;
	static volatile int64_t t59 = 1630905626444LL;

	t59 = ((x261+x262)^(x263/x264));

	if (t59 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	int64_t x270 = -3781LL;
	uint32_t x271 = 81454477U;
	volatile int32_t x272 = -1;
	volatile int64_t t60 = 14LL;

	t60 = ((x269+x270)^(x271/x272));

	if (t60 != -3526LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x276 = INT16_MAX;
	uint64_t t61 = 280850060477254451LLU;

	t61 = ((x273+x274)^(x275/x276));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MIN;
	static volatile uint32_t x278 = 20626U;
	uint8_t x279 = UINT8_MAX;

	t62 = ((x277+x278)^(x279/x280));

	if (t62 != 2147504276U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -387;
	volatile int16_t x283 = 149;
	int32_t t63 = -33;

	t63 = ((x281+x282)^(x283/x284));

	if (t63 != -33048) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MIN;
	uint32_t x286 = 261U;
	static int16_t x287 = INT16_MIN;
	uint16_t x288 = 3U;

	t64 = ((x285+x286)^(x287/x288));

	if (t64 != 21587U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x297 = INT8_MIN;
	static uint16_t x298 = 3U;
	int32_t x299 = -1;
	int32_t x300 = INT32_MIN;
	int32_t t65 = -2;

	t65 = ((x297+x298)^(x299/x300));

	if (t65 != -125) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x302 = 1140U;
	int32_t x303 = -1;

	t66 = ((x301+x302)^(x303/x304));

	if (t66 != 1997) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x310 = 41355U;
	int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t67 = 24987941707664LL;

	t67 = ((x309+x310)^(x311/x312));

	if (t67 != 2147525002LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x313 = 5596803717LLU;
	int32_t x314 = -10024;
	uint8_t x315 = 19U;
	static int8_t x316 = INT8_MIN;
	uint64_t t68 = 61LLU;

	t68 = ((x313+x314)^(x315/x316));

	if (t68 != 5596793693LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 5U;
	int16_t x318 = INT16_MAX;
	static uint32_t x319 = 35U;
	uint32_t t69 = 12590329U;

	t69 = ((x317+x318)^(x319/x320));

	if (t69 != 32772U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = INT8_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t70 = 9;

	t70 = ((x321+x322)^(x323/x324));

	if (t70 != -84) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x329 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;

	t71 = ((x329+x330)^(x331/x332));

	if (t71 != 5132840U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x334 = -1;
	volatile uint64_t x335 = 3027734171618LLU;
	int16_t x336 = -977;
	volatile uint64_t t72 = 41LLU;

	t72 = ((x333+x334)^(x335/x336));

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = 14051;
	static int16_t x338 = -1;
	int32_t x339 = -34143;
	int8_t x340 = INT8_MAX;
	int32_t t73 = -44;

	t73 = ((x337+x338)^(x339/x340));

	if (t73 != -14314) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = 1;
	int8_t x342 = INT8_MAX;
	volatile int8_t x343 = INT8_MAX;
	int16_t x344 = 1;

	t74 = ((x341+x342)^(x343/x344));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = 105U;
	static uint8_t x351 = 25U;
	int16_t x352 = INT16_MIN;

	t75 = ((x349+x350)^(x351/x352));

	if (t75 != 104U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x353 = -1;
	static int16_t x354 = -709;
	static int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t76 = 102;

	t76 = ((x353+x354)^(x355/x356));

	if (t76 != -710) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = -26;
	uint64_t t77 = 12102997LLU;

	t77 = ((x357+x358)^(x359/x360));

	if (t77 != 18446744073709518822LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = 0U;
	volatile int16_t x362 = -4;
	int64_t x363 = 25LL;
	static int64_t x364 = INT64_MIN;
	static volatile int64_t t78 = -257769403671652LL;

	t78 = ((x361+x362)^(x363/x364));

	if (t78 != -4LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x365 = INT64_MIN;
	volatile uint16_t x366 = 105U;
	volatile uint16_t x367 = 3436U;
	static int64_t t79 = 711171462458LL;

	t79 = ((x365+x366)^(x367/x368));

	if (t79 != 9223372036854775696LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MIN;
	int64_t t80 = -7301175605056LL;

	t80 = ((x369+x370)^(x371/x372));

	if (t80 != -401016175515727600LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = INT16_MIN;
	int8_t x375 = 46;
	uint16_t x376 = UINT16_MAX;
	uint32_t t81 = 527U;

	t81 = ((x373+x374)^(x375/x376));

	if (t81 != 387710213U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MIN;
	int16_t x379 = 15546;
	static int32_t x380 = -1;

	t82 = ((x377+x378)^(x379/x380));

	if (t82 != 15545LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x381 = -1LL;
	int32_t x383 = INT32_MIN;
	int64_t t83 = 650376LL;

	t83 = ((x381+x382)^(x383/x384));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = -1LL;
	volatile int32_t x386 = INT32_MIN;
	int64_t x387 = -7131344LL;
	static int32_t x388 = INT32_MIN;

	t84 = ((x385+x386)^(x387/x388));

	if (t84 != -2147483649LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 35148064LLU;
	uint64_t t85 = 252LLU;

	t85 = ((x389+x390)^(x391/x392));

	if (t85 != 18446743548879959914LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 32777502LLU;
	int32_t x395 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;
	uint64_t t86 = 12221017627683096LLU;

	t86 = ((x393+x394)^(x395/x396));

	if (t86 != 18446744071594845470LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = 1;
	volatile int16_t x400 = 6;

	t87 = ((x397+x398)^(x399/x400));

	if (t87 != 15372286728091282091LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x401 = 35;
	volatile int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MAX;
	int64_t x404 = 2595LL;

	t88 = ((x401+x402)^(x403/x404));

	if (t88 != -2147483601LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = INT32_MIN;
	uint32_t x406 = UINT32_MAX;
	int8_t x407 = INT8_MAX;
	static volatile int8_t x408 = INT8_MIN;

	t89 = ((x405+x406)^(x407/x408));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = 1U;
	int16_t x411 = 2212;
	int64_t x412 = 31509379568692322LL;

	t90 = ((x409+x410)^(x411/x412));

	if (t90 != -32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = -836396353;
	uint16_t x414 = UINT16_MAX;
	volatile int8_t x415 = INT8_MIN;
	uint16_t x416 = 1872U;
	volatile int32_t t91 = 213623;

	t91 = ((x413+x414)^(x415/x416));

	if (t91 != -836330818) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x429 = INT16_MIN;
	static volatile int8_t x430 = INT8_MIN;
	uint16_t x431 = 3U;
	static int32_t x432 = INT32_MIN;
	volatile int32_t t92 = 3;

	t92 = ((x429+x430)^(x431/x432));

	if (t92 != -32896) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x435 = 60641LLU;
	int32_t x436 = 288933;
	volatile uint64_t t93 = 8055304612307936LLU;

	t93 = ((x433+x434)^(x435/x436));

	if (t93 != 890LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x442 = -1;
	int64_t x443 = -1LL;
	int64_t x444 = -2439650849756712562LL;
	volatile uint64_t t94 = 4LLU;

	t94 = ((x441+x442)^(x443/x444));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x446 = INT16_MIN;
	uint16_t x447 = UINT16_MAX;
	static uint8_t x448 = 63U;
	volatile int32_t t95 = 7119;

	t95 = ((x445+x446)^(x447/x448));

	if (t95 != -31154) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x449 = UINT32_MAX;
	int32_t x450 = INT32_MIN;
	int16_t x451 = 23;
	volatile int16_t x452 = INT16_MIN;
	volatile uint32_t t96 = 23760U;

	t96 = ((x449+x450)^(x451/x452));

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = 87008;
	volatile int16_t x454 = -1;
	int16_t x455 = -1;
	uint16_t x456 = 2U;
	volatile int32_t t97 = 1;

	t97 = ((x453+x454)^(x455/x456));

	if (t97 != 87007) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x457 = 6939186244281478LLU;
	static int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MIN;
	int64_t x460 = INT64_MAX;
	volatile uint64_t t98 = 10488152LLU;

	t98 = ((x457+x458)^(x459/x460));

	if (t98 != 6939186244248710LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = -622;
	volatile int8_t x466 = INT8_MIN;
	volatile int64_t x467 = -16035846LL;
	int32_t x468 = INT32_MIN;
	volatile int64_t t99 = -6944LL;

	t99 = ((x465+x466)^(x467/x468));

	if (t99 != -750LL) { NG(); } else { ; }
	
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

