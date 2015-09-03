#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
static int32_t t4 = 27;
int64_t x22 = -1LL;
static uint16_t x35 = UINT16_MAX;
uint64_t x39 = 1374221968681219000LLU;
int64_t x44 = 12LL;
volatile int16_t x54 = INT16_MAX;
volatile uint8_t x58 = UINT8_MAX;
int8_t x73 = 25;
static int8_t x92 = -1;
int32_t x96 = -1740;
static uint64_t x100 = 51LLU;
static volatile int16_t x104 = -1;
volatile uint64_t t22 = 3LLU;
volatile uint64_t x108 = 494179658LLU;
int8_t x109 = INT8_MIN;
uint16_t x117 = 8028U;
int16_t x119 = -1;
uint64_t x121 = 49605498848LLU;
volatile uint64_t x123 = 49740002458985LLU;
volatile uint64_t t27 = 6LLU;
volatile uint64_t x130 = 65645364LLU;
int64_t x132 = INT64_MAX;
static int32_t x133 = 3;
volatile int8_t x140 = INT8_MAX;
int32_t t31 = 958209663;
uint16_t x147 = 671U;
uint32_t x151 = 498064U;
static int8_t x155 = 1;
volatile uint64_t x157 = UINT64_MAX;
static int8_t x159 = 3;
volatile int64_t x166 = -1LL;
int16_t x169 = INT16_MIN;
int8_t x171 = 0;
int64_t x173 = -1LL;
int16_t x177 = INT16_MAX;
volatile int8_t x184 = INT8_MIN;
volatile int32_t t42 = -2292;
static int64_t x188 = 11506700263058LL;
volatile int8_t x190 = -1;
volatile int32_t t44 = 10002;
volatile int64_t x194 = -1379230939386582LL;
volatile uint8_t x198 = UINT8_MAX;
uint8_t x202 = 0U;
int8_t x208 = 16;
static int16_t x216 = INT16_MAX;
volatile int16_t x217 = -1;
int16_t x221 = INT16_MIN;
volatile int64_t x222 = INT64_MIN;
static int64_t t53 = 121979573790LL;
int16_t x229 = 662;
volatile uint8_t x230 = UINT8_MAX;
uint16_t x235 = 968U;
volatile int16_t x243 = INT16_MIN;
uint16_t x258 = UINT16_MAX;
int64_t x270 = INT64_MIN;
int32_t x271 = INT32_MAX;
static uint64_t t64 = 2855533917404769954LLU;
int16_t x275 = INT16_MIN;
int64_t x276 = -1LL;
volatile uint64_t t66 = 49894928586LLU;
uint64_t x287 = 20330110797293LLU;
int64_t x297 = 535726869430858368LL;
int64_t x298 = -4945LL;
int16_t x301 = 2;
uint32_t x302 = 102575062U;
int16_t x303 = INT16_MIN;
int8_t x307 = -1;
uint8_t x310 = UINT8_MAX;
static volatile int64_t t73 = 233489LL;
int32_t x313 = INT32_MAX;
int32_t x327 = INT32_MIN;
uint64_t t77 = UINT64_MAX;
int32_t x331 = INT32_MIN;
uint32_t t79 = UINT32_MAX;
uint16_t x346 = 6237U;
static int32_t x348 = INT32_MAX;
int16_t x349 = -3;
volatile uint64_t x354 = UINT64_MAX;
uint64_t x358 = UINT64_MAX;
uint32_t x362 = 1777063873U;
static uint32_t x365 = UINT32_MAX;
static volatile int16_t x367 = INT16_MIN;
volatile int32_t t90 = 3178;
int32_t x387 = INT32_MIN;
volatile int64_t t92 = 3988LL;
int64_t t94 = 1859LL;
int64_t x401 = INT64_MIN;
int64_t t95 = INT64_MIN;
int64_t x407 = INT64_MIN;
int8_t x408 = INT8_MIN;
uint32_t x412 = UINT32_MAX;
static uint16_t x415 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 107349LLU;

	t0 = (x1-((x2<=x3)%x4));

	if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	volatile int64_t x6 = -4985LL;
	volatile uint8_t x7 = 5U;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -776586;

	t1 = (x5-((x6<=x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -32;
	int32_t x11 = INT32_MAX;
	int64_t x12 = -1LL;
	static volatile int64_t t2 = INT64_MIN;

	t2 = (x9-((x10<=x11)%x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 1;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MIN;
	int64_t x16 = 12724776411364LL;
	volatile int64_t t3 = 254910444007LL;

	t3 = (x13-((x14<=x15)%x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int32_t x18 = 401531;
	static int64_t x19 = INT64_MIN;
	int32_t x20 = -14492;

	t4 = (x17-((x18<=x19)%x20));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x21 = 402649954743080339LLU;
	int32_t x23 = INT32_MAX;
	uint64_t x24 = 13LLU;
	uint64_t t5 = 24146125707147LLU;

	t5 = (x21-((x22<=x23)%x24));

	if (t5 != 402649954743080338LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int16_t x26 = INT16_MIN;
	volatile int32_t x27 = 30337;
	int64_t x28 = -1LL;
	int64_t t6 = -21025LL;

	t6 = (x25-((x26<=x27)%x28));

	if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 346U;
	uint16_t x34 = 0U;
	int32_t x36 = 1;
	int32_t t7 = -59123;

	t7 = (x33-((x34<=x35)%x36));

	if (t7 != 346) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 259535805U;
	static int64_t x38 = 1LL;
	int64_t x40 = INT64_MIN;
	volatile int64_t t8 = -2045951793620011LL;

	t8 = (x37-((x38<=x39)%x40));

	if (t8 != 259535804LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = 0;
	static int16_t x42 = -1;
	uint32_t x43 = 45010856U;
	static volatile int64_t t9 = 2219801274830LL;

	t9 = (x41-((x42<=x43)%x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = 28109115165462LL;
	static int64_t x46 = -1LL;
	volatile int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	int64_t t10 = 244LL;

	t10 = (x45-((x46<=x47)%x48));

	if (t10 != 28109115165461LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1LL;
	static int8_t x50 = 0;
	uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = INT64_MIN;
	volatile int64_t t11 = 14113548006LL;

	t11 = (x49-((x50<=x51)%x52));

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x53 = INT16_MAX;
	int32_t x55 = -1;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = 237;

	t12 = (x53-((x54<=x55)%x56));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = INT8_MAX;
	volatile int32_t x59 = -1;
	volatile int64_t x60 = -1LL;
	int64_t t13 = 252368894LL;

	t13 = (x57-((x58<=x59)%x60));

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 21U;
	int32_t x66 = INT32_MAX;
	int8_t x67 = INT8_MIN;
	static int32_t x68 = INT32_MIN;
	int32_t t14 = 841693;

	t14 = (x65-((x66<=x67)%x68));

	if (t14 != 21) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	static volatile int8_t x70 = INT8_MAX;
	int8_t x71 = -1;
	volatile int64_t x72 = -1LL;
	int64_t t15 = -534899777LL;

	t15 = (x69-((x70<=x71)%x72));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x74 = INT8_MAX;
	volatile int16_t x75 = INT16_MIN;
	volatile int8_t x76 = INT8_MIN;
	static int32_t t16 = 2467;

	t16 = (x73-((x74<=x75)%x76));

	if (t16 != 25) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 8064618LLU;
	volatile uint32_t x78 = UINT32_MAX;
	static int64_t x79 = -1682520393826921LL;
	uint8_t x80 = 6U;
	volatile uint64_t t17 = 193538798LLU;

	t17 = (x77-((x78<=x79)%x80));

	if (t17 != 8064618LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 26886U;
	uint32_t x82 = 59U;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = UINT16_MAX;
	int32_t t18 = 250338;

	t18 = (x81-((x82<=x83)%x84));

	if (t18 != 26885) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 3373365161718537LLU;
	static uint64_t x90 = 293244090349LLU;
	static uint64_t x91 = 2452140407594585LLU;
	uint64_t t19 = 698670LLU;

	t19 = (x89-((x90<=x91)%x92));

	if (t19 != 3373365161718537LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = 23177444LLU;
	static uint64_t x95 = 2308191320837184LLU;
	volatile int32_t t20 = -12;

	t20 = (x93-((x94<=x95)%x96));

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x97 = 13951U;
	static volatile int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	uint64_t t21 = 4301721354148634LLU;

	t21 = (x97-((x98<=x99)%x100));

	if (t21 != 13950LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 387967848166686223LLU;
	uint64_t x102 = 7LLU;
	int32_t x103 = -1;

	t22 = (x101-((x102<=x103)%x104));

	if (t22 != 387967848166686223LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = INT64_MIN;
	static int8_t x106 = INT8_MIN;
	static int8_t x107 = INT8_MIN;
	volatile uint64_t t23 = 8048389620592LLU;

	t23 = (x105-((x106<=x107)%x108));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = 1;
	volatile uint16_t x111 = 283U;
	uint32_t x112 = 96U;
	static volatile uint32_t t24 = 138750905U;

	t24 = (x109-((x110<=x111)%x112));

	if (t24 != 4294967167U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	static uint8_t x114 = 5U;
	volatile int64_t x115 = INT64_MAX;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t25 = 346;

	t25 = (x113-((x114<=x115)%x116));

	if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x118 = 1585LLU;
	int16_t x120 = INT16_MIN;
	volatile int32_t t26 = 135953850;

	t26 = (x117-((x118<=x119)%x120));

	if (t26 != 8027) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x122 = INT32_MIN;
	volatile int8_t x124 = INT8_MIN;

	t27 = (x121-((x122<=x123)%x124));

	if (t27 != 49605498848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MAX;
	static int8_t x126 = -1;
	volatile uint32_t x127 = UINT32_MAX;
	int8_t x128 = -1;
	volatile int64_t t28 = INT64_MAX;

	t28 = (x125-((x126<=x127)%x128));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x129 = UINT32_MAX;
	uint64_t x131 = UINT64_MAX;
	volatile int64_t t29 = -2269447593LL;

	t29 = (x129-((x130<=x131)%x132));

	if (t29 != 4294967294LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 105LLU;
	volatile int16_t x136 = 41;
	int32_t t30 = 72469910;

	t30 = (x133-((x134<=x135)%x136));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	int16_t x139 = -77;

	t31 = (x137-((x138<=x139)%x140));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = INT16_MIN;
	static volatile uint32_t x143 = 3133U;
	int32_t x144 = 658618;
	int32_t t32 = -47;

	t32 = (x141-((x142<=x143)%x144));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = 544;
	int32_t x146 = -1;
	int64_t x148 = 21430329LL;
	static int64_t t33 = 56LL;

	t33 = (x145-((x146<=x147)%x148));

	if (t33 != 543LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	static uint16_t x150 = 109U;
	int64_t x152 = 499015842026155837LL;
	int64_t t34 = 2LL;

	t34 = (x149-((x150<=x151)%x152));

	if (t34 != -2147483649LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = 10U;
	int8_t x156 = -3;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x153-((x154<=x155)%x156));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = INT8_MAX;
	uint32_t x160 = 313031U;
	uint64_t t36 = UINT64_MAX;

	t36 = (x157-((x158<=x159)%x160));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	static int64_t x162 = -1LL;
	uint64_t x163 = 103028LLU;
	int16_t x164 = INT16_MIN;
	static uint32_t t37 = UINT32_MAX;

	t37 = (x161-((x162<=x163)%x164));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MAX;
	int64_t x167 = INT64_MIN;
	int16_t x168 = 1645;
	int32_t t38 = -13878813;

	t38 = (x165-((x166<=x167)%x168));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x170 = -1;
	int8_t x172 = INT8_MAX;
	static int32_t t39 = 119101618;

	t39 = (x169-((x170<=x171)%x172));

	if (t39 != -32769) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 109U;
	int16_t x176 = INT16_MIN;
	static int64_t t40 = 55LL;

	t40 = (x173-((x174<=x175)%x176));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = INT8_MAX;
	uint32_t x179 = 300960U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t41 = 227;

	t41 = (x177-((x178<=x179)%x180));

	if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	volatile uint64_t x182 = UINT64_MAX;
	int16_t x183 = INT16_MAX;

	t42 = (x181-((x182<=x183)%x184));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	static int64_t t43 = -232744906173918407LL;

	t43 = (x185-((x186<=x187)%x188));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = 14697;
	static int16_t x191 = -1;
	int8_t x192 = INT8_MIN;

	t44 = (x189-((x190<=x191)%x192));

	if (t44 != 14696) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MAX;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = 1U;
	static int64_t t45 = INT64_MAX;

	t45 = (x193-((x194<=x195)%x196));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	volatile int8_t x199 = 13;
	volatile int64_t x200 = INT64_MIN;
	int64_t t46 = -323284801939917498LL;

	t46 = (x197-((x198<=x199)%x200));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -10;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t47 = 0;

	t47 = (x201-((x202<=x203)%x204));

	if (t47 != -11) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	static int16_t x206 = 77;
	int64_t x207 = -440LL;
	volatile int32_t t48 = -2;

	t48 = (x205-((x206<=x207)%x208));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = UINT8_MAX;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	int64_t t49 = INT64_MIN;

	t49 = (x209-((x210<=x211)%x212));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = UINT16_MAX;
	static uint8_t x214 = 1U;
	uint64_t x215 = 962443448LLU;
	static int32_t t50 = 23898;

	t50 = (x213-((x214<=x215)%x216));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x218 = 4U;
	static volatile int32_t x219 = INT32_MIN;
	int8_t x220 = -1;
	volatile int32_t t51 = -414523;

	t51 = (x217-((x218<=x219)%x220));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x223 = UINT32_MAX;
	static int8_t x224 = INT8_MIN;
	static volatile int32_t t52 = -88;

	t52 = (x221-((x222<=x223)%x224));

	if (t52 != -32769) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = 37;
	int8_t x226 = INT8_MAX;
	static uint16_t x227 = 18556U;
	static int64_t x228 = -1LL;

	t53 = (x225-((x226<=x227)%x228));

	if (t53 != 37LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x231 = -1;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t54 = 244508883LLU;

	t54 = (x229-((x230<=x231)%x232));

	if (t54 != 662LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1;
	uint8_t x234 = UINT8_MAX;
	int8_t x236 = INT8_MAX;
	volatile int32_t t55 = 7562246;

	t55 = (x233-((x234<=x235)%x236));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = UINT64_MAX;
	static volatile int16_t x238 = INT16_MIN;
	int64_t x239 = -3297599882530LL;
	uint8_t x240 = 1U;
	uint64_t t56 = UINT64_MAX;

	t56 = (x237-((x238<=x239)%x240));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = 781432;
	int8_t x242 = -1;
	uint32_t x244 = 2U;
	uint32_t t57 = 505362451U;

	t57 = (x241-((x242<=x243)%x244));

	if (t57 != 781432U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x245 = INT16_MIN;
	uint16_t x246 = 4U;
	int64_t x247 = INT64_MAX;
	int16_t x248 = -115;
	volatile int32_t t58 = -3820;

	t58 = (x245-((x246<=x247)%x248));

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = -1;
	volatile int32_t x250 = -1;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t59 = -3759556;

	t59 = (x249-((x250<=x251)%x252));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = UINT8_MAX;
	static int32_t x254 = INT32_MIN;
	static int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MAX;
	volatile int32_t t60 = 1816775;

	t60 = (x253-((x254<=x255)%x256));

	if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 119080468069112LLU;
	static volatile int32_t x259 = INT32_MAX;
	uint8_t x260 = 7U;
	volatile uint64_t t61 = 5460927280710727LLU;

	t61 = (x257-((x258<=x259)%x260));

	if (t61 != 119080468069111LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 103U;
	static uint16_t x262 = 756U;
	static int32_t x263 = INT32_MIN;
	static volatile int16_t x264 = -1;
	int32_t t62 = 3360492;

	t62 = (x261-((x262<=x263)%x264));

	if (t62 != 103) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MAX;
	static uint8_t x267 = UINT8_MAX;
	static int8_t x268 = INT8_MIN;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x265-((x266<=x267)%x268));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = 237949362LLU;
	int64_t x272 = -896166273864243LL;

	t64 = (x269-((x270<=x271)%x272));

	if (t64 != 237949361LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 2U;
	static int32_t x274 = -1;
	volatile int64_t t65 = 809867734317283LL;

	t65 = (x273-((x274<=x275)%x276));

	if (t65 != 2LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x281 = -53;
	int32_t x282 = -45;
	static int64_t x283 = INT64_MAX;
	uint64_t x284 = 1427370368320LLU;

	t66 = (x281-((x282<=x283)%x284));

	if (t66 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x285 = -1;
	int8_t x286 = -1;
	int8_t x288 = INT8_MAX;
	static int32_t t67 = -475646;

	t67 = (x285-((x286<=x287)%x288));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 1785U;
	static int16_t x290 = INT16_MAX;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = INT64_MAX;
	static int64_t t68 = 13LL;

	t68 = (x289-((x290<=x291)%x292));

	if (t68 != 1784LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	uint32_t x294 = 397545646U;
	uint16_t x295 = 716U;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t69 = 2198337869655102LLU;

	t69 = (x293-((x294<=x295)%x296));

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x299 = 1U;
	int64_t x300 = -1LL;
	int64_t t70 = -1LL;

	t70 = (x297-((x298<=x299)%x300));

	if (t70 != 535726869430858368LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x304 = INT32_MIN;
	volatile int32_t t71 = -9;

	t71 = (x301-((x302<=x303)%x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	static volatile uint8_t x306 = 0U;
	int64_t x308 = INT64_MAX;
	static volatile int64_t t72 = 359110943825LL;

	t72 = (x305-((x306<=x307)%x308));

	if (t72 != -32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	int64_t x311 = INT64_MAX;
	int64_t x312 = INT64_MIN;

	t73 = (x309-((x310<=x311)%x312));

	if (t73 != -129LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x314 = INT64_MAX;
	volatile int64_t x315 = INT64_MIN;
	int64_t x316 = -2154165009351248314LL;
	volatile int64_t t74 = -3349466092349LL;

	t74 = (x313-((x314<=x315)%x316));

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = -1;
	int16_t x318 = 0;
	int16_t x319 = INT16_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t75 = 6262;

	t75 = (x317-((x318<=x319)%x320));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x321 = 11000813465059048LL;
	int8_t x322 = INT8_MIN;
	int64_t x323 = -1LL;
	int8_t x324 = -1;
	int64_t t76 = 1623420831878LL;

	t76 = (x321-((x322<=x323)%x324));

	if (t76 != 11000813465059048LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = UINT64_MAX;
	static int16_t x326 = 5924;
	int64_t x328 = -738LL;

	t77 = (x325-((x326<=x327)%x328));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = 0;
	volatile int32_t x330 = INT32_MAX;
	int8_t x332 = -1;
	int32_t t78 = 492038505;

	t78 = (x329-((x330<=x331)%x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x333 = UINT32_MAX;
	uint8_t x334 = UINT8_MAX;
	static volatile int16_t x335 = -1;
	uint8_t x336 = 2U;

	t79 = (x333-((x334<=x335)%x336));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 645850U;
	int16_t x338 = -13;
	int32_t x339 = -3381716;
	int64_t x340 = INT64_MIN;
	int64_t t80 = 2699057LL;

	t80 = (x337-((x338<=x339)%x340));

	if (t80 != 645850LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	int64_t x342 = -1LL;
	uint64_t x343 = UINT64_MAX;
	volatile int64_t x344 = -276119851976LL;
	volatile int64_t t81 = -104745LL;

	t81 = (x341-((x342<=x343)%x344));

	if (t81 != 2147483646LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 2U;
	uint64_t x347 = 936464886LLU;
	int32_t t82 = -216;

	t82 = (x345-((x346<=x347)%x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x350 = INT64_MIN;
	volatile int8_t x351 = 13;
	int16_t x352 = -1;
	volatile int32_t t83 = 3;

	t83 = (x349-((x350<=x351)%x352));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = 7;
	int32_t t84 = -31047455;

	t84 = (x353-((x354<=x355)%x356));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = INT16_MAX;
	int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MIN;
	volatile int32_t t85 = -96481176;

	t85 = (x357-((x358<=x359)%x360));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = UINT32_MAX;
	uint8_t x363 = 30U;
	static int32_t x364 = INT32_MIN;
	uint32_t t86 = UINT32_MAX;

	t86 = (x361-((x362<=x363)%x364));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = -1LL;
	volatile int64_t x368 = 177036775198494LL;
	int64_t t87 = -518983070783218LL;

	t87 = (x365-((x366<=x367)%x368));

	if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x369 = 0;
	int8_t x370 = 40;
	int64_t x371 = INT64_MIN;
	volatile int64_t x372 = 306699LL;
	volatile int64_t t88 = -14499639701277223LL;

	t88 = (x369-((x370<=x371)%x372));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -1;
	static volatile int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t89 = -266249123;

	t89 = (x373-((x374<=x375)%x376));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = -1;
	int64_t x378 = 1416926045684LL;
	static uint16_t x379 = 14U;
	int8_t x380 = -56;

	t90 = (x377-((x378<=x379)%x380));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = 142177;
	uint32_t x382 = 663U;
	volatile int16_t x383 = INT16_MIN;
	uint8_t x384 = 15U;
	static volatile int32_t t91 = -67592;

	t91 = (x381-((x382<=x383)%x384));

	if (t91 != 142176) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x385 = UINT8_MAX;
	static int64_t x386 = 2024368383332870LL;
	int64_t x388 = -1LL;

	t92 = (x385-((x386<=x387)%x388));

	if (t92 != 255LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = 52U;
	int64_t x390 = INT64_MAX;
	static int8_t x391 = -1;
	int16_t x392 = INT16_MIN;
	int32_t t93 = -1786;

	t93 = (x389-((x390<=x391)%x392));

	if (t93 != 52) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	static uint16_t x394 = UINT16_MAX;
	int64_t x395 = INT64_MAX;
	static int64_t x396 = -1LL;

	t94 = (x393-((x394<=x395)%x396));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x402 = -1;
	volatile int32_t x403 = INT32_MIN;
	volatile int64_t x404 = INT64_MAX;

	t95 = (x401-((x402<=x403)%x404));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = INT64_MAX;
	static int64_t x406 = 849695LL;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x405-((x406<=x407)%x408));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x409 = UINT32_MAX;
	int32_t x410 = INT32_MIN;
	static volatile int8_t x411 = INT8_MAX;
	static volatile uint32_t t97 = 1202684U;

	t97 = (x409-((x410<=x411)%x412));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = -1;
	uint64_t x414 = 1LLU;
	volatile uint16_t x416 = UINT16_MAX;
	volatile int32_t t98 = 58246887;

	t98 = (x413-((x414<=x415)%x416));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = 153074773846764510LL;
	static int8_t x418 = -1;
	static int32_t x419 = INT32_MIN;
	static uint16_t x420 = UINT16_MAX;
	static volatile int64_t t99 = -204091747552831LL;

	t99 = (x417-((x418<=x419)%x420));

	if (t99 != 153074773846764510LL) { NG(); } else { ; }
	
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

