#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 1333371474LLU;
uint8_t x3 = 54U;
static int32_t x7 = INT32_MIN;
volatile uint32_t t1 = 4U;
volatile uint8_t x10 = 38U;
volatile int64_t t2 = 784773543728947LL;
uint8_t x16 = 1U;
uint8_t x19 = 3U;
int8_t x27 = -10;
static int32_t x32 = -47909;
uint64_t x33 = 484624384211979LLU;
uint32_t x40 = 351129688U;
static volatile int16_t x44 = -11132;
int64_t t11 = INT64_MIN;
int16_t x57 = INT16_MIN;
int32_t t14 = 11496;
uint8_t x66 = 5U;
int32_t t16 = -319;
static int32_t x73 = INT32_MIN;
static int32_t t19 = -223;
static uint8_t x89 = UINT8_MAX;
volatile uint16_t x94 = 61U;
static volatile int32_t t22 = 0;
static int64_t x97 = INT64_MIN;
int8_t x98 = INT8_MIN;
int16_t x104 = INT16_MIN;
static volatile uint16_t x105 = 16487U;
volatile int32_t t25 = -14035;
int16_t x113 = INT16_MIN;
int8_t x128 = INT8_MAX;
static volatile int32_t t31 = 9692;
uint8_t x138 = 6U;
uint32_t x140 = 75145U;
int8_t x145 = INT8_MAX;
static volatile uint32_t t36 = UINT32_MAX;
int64_t x153 = INT64_MIN;
uint32_t x155 = UINT32_MAX;
uint32_t x157 = 16U;
static uint16_t x158 = 4673U;
int8_t x164 = -26;
static uint64_t x181 = UINT64_MAX;
int32_t x185 = INT32_MIN;
uint16_t x193 = 15133U;
int16_t x211 = INT16_MIN;
int8_t x213 = INT8_MAX;
volatile int64_t t52 = 502LL;
uint8_t x221 = 3U;
static int16_t x225 = INT16_MIN;
uint16_t x227 = 624U;
static int16_t x229 = INT16_MIN;
int16_t x231 = INT16_MIN;
int32_t t55 = -123908;
volatile int32_t x236 = INT32_MAX;
int64_t x242 = -1LL;
int64_t x243 = INT64_MIN;
volatile uint16_t x246 = 3U;
int16_t x248 = INT16_MIN;
int64_t x255 = 116293302LL;
int8_t x264 = -13;
int16_t x268 = 189;
int8_t x269 = INT8_MAX;
int8_t x270 = -1;
volatile uint64_t t67 = 1806483915LLU;
static int8_t x287 = INT8_MIN;
volatile int32_t t71 = -7904;
volatile uint8_t x310 = 8U;
static int64_t x311 = -1LL;
volatile int32_t x321 = INT32_MIN;
volatile uint16_t x322 = 19843U;
int64_t x323 = -1LL;
int32_t t76 = -142;
static volatile int16_t x336 = 509;
uint32_t x339 = 37573071U;
uint64_t x343 = UINT64_MAX;
volatile int32_t x347 = INT32_MAX;
volatile uint32_t t83 = UINT32_MAX;
int32_t x354 = INT32_MIN;
int64_t x356 = INT64_MIN;
int64_t x358 = INT64_MIN;
uint32_t x359 = 11609U;
int32_t t85 = -50741539;
int32_t x361 = -1;
uint32_t x368 = UINT32_MAX;
int16_t x370 = INT16_MAX;
uint64_t x375 = 240201LLU;
static uint8_t x386 = 100U;
static int16_t x405 = -58;
uint32_t x407 = 61442U;
uint8_t x409 = UINT8_MAX;
static int32_t x411 = INT32_MAX;
int8_t x415 = 14;


void f0(void) {
	int16_t x1 = 1;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = 1;

	t0 = (x1+((x2==x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 72227090U;
	static uint8_t x6 = UINT8_MAX;
	int8_t x8 = -1;

	t1 = (x5+((x6==x7)<x8));

	if (t1 != 72227090U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	int16_t x11 = -1976;
	uint16_t x12 = 155U;

	t2 = (x9+((x10==x11)<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 6U;
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	volatile int32_t t3 = -31479;

	t3 = (x13+((x14==x15)<x16));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 818842U;
	static int64_t x18 = 13LL;
	int8_t x20 = INT8_MAX;
	uint32_t t4 = 1465U;

	t4 = (x17+((x18==x19)<x20));

	if (t4 != 818843U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	int64_t x22 = INT64_MAX;
	int64_t x23 = INT64_MIN;
	volatile int64_t x24 = 291228991961244736LL;
	volatile int32_t t5 = -3480430;

	t5 = (x21+((x22==x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 63U;
	int8_t x26 = -1;
	volatile int16_t x28 = INT16_MIN;
	int32_t t6 = 1504;

	t6 = (x25+((x26==x27)<x28));

	if (t6 != 63) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 146728U;
	static int64_t x30 = INT64_MAX;
	static uint16_t x31 = 7U;
	volatile uint32_t t7 = 195U;

	t7 = (x29+((x30==x31)<x32));

	if (t7 != 146728U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 0;
	uint32_t x35 = UINT32_MAX;
	volatile int32_t x36 = INT32_MIN;
	volatile uint64_t t8 = 626LLU;

	t8 = (x33+((x34==x35)<x36));

	if (t8 != 484624384211979LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -52;
	uint32_t x38 = UINT32_MAX;
	static uint64_t x39 = UINT64_MAX;
	int32_t t9 = 6;

	t9 = (x37+((x38==x39)<x40));

	if (t9 != -51) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 45005U;
	volatile uint32_t x42 = UINT32_MAX;
	int64_t x43 = INT64_MIN;
	volatile uint32_t t10 = 233504520U;

	t10 = (x41+((x42==x43)<x44));

	if (t10 != 45005U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	uint8_t x46 = UINT8_MAX;
	volatile int8_t x47 = -1;
	int64_t x48 = -206517921435779637LL;

	t11 = (x45+((x46==x47)<x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x50 = 414775562502LLU;
	int8_t x51 = 1;
	volatile uint16_t x52 = 704U;
	volatile int32_t t12 = 10532;

	t12 = (x49+((x50==x51)<x52));

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 293292089U;
	volatile int64_t x54 = -6158LL;
	uint32_t x55 = 46837351U;
	static int8_t x56 = INT8_MIN;
	uint32_t t13 = 181140U;

	t13 = (x53+((x54==x55)<x56));

	if (t13 != 293292089U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int64_t x59 = -1LL;
	int32_t x60 = INT32_MIN;

	t14 = (x57+((x58==x59)<x60));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = UINT16_MAX;
	uint16_t x62 = 19980U;
	uint16_t x63 = 718U;
	volatile int32_t x64 = 2315687;
	int32_t t15 = 1;

	t15 = (x61+((x62==x63)<x64));

	if (t15 != 65536) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;

	t16 = (x65+((x66==x67)<x68));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = UINT64_MAX;
	volatile int16_t x75 = -2876;
	volatile uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = 249530;

	t17 = (x73+((x74==x75)<x76));

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 1611835792U;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MAX;
	volatile uint32_t t18 = 300U;

	t18 = (x77+((x78==x79)<x80));

	if (t18 != 1611835793U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	uint64_t x82 = 123139886767937605LLU;
	int8_t x83 = INT8_MAX;
	volatile int8_t x84 = INT8_MIN;

	t19 = (x81+((x82==x83)<x84));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -1;
	volatile int8_t x86 = INT8_MIN;
	volatile int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	static int32_t t20 = 920;

	t20 = (x85+((x86==x87)<x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	static int32_t x92 = 811232;
	volatile int32_t t21 = -168127;

	t21 = (x89+((x90==x91)<x92));

	if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	volatile uint8_t x95 = UINT8_MAX;
	int64_t x96 = -1LL;

	t22 = (x93+((x94==x95)<x96));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x99 = 31242304721459LLU;
	volatile uint16_t x100 = 1U;
	static volatile int64_t t23 = 127990LL;

	t23 = (x97+((x98==x99)<x100));

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -33LL;
	static volatile int32_t x102 = INT32_MAX;
	int64_t x103 = 7880233LL;
	int64_t t24 = -278275225152394LL;

	t24 = (x101+((x102==x103)<x104));

	if (t24 != -33LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x106 = INT16_MIN;
	volatile int16_t x107 = 390;
	static volatile int64_t x108 = -1LL;

	t25 = (x105+((x106==x107)<x108));

	if (t25 != 16487) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 7791036514LLU;
	int64_t x110 = 15LL;
	int64_t x111 = INT64_MIN;
	int64_t x112 = 1739212007584658LL;
	static volatile uint64_t t26 = 21LLU;

	t26 = (x109+((x110==x111)<x112));

	if (t26 != 7791036515LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x114 = 21597U;
	static uint64_t x115 = 631523756110039LLU;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t27 = 7861;

	t27 = (x113+((x114==x115)<x116));

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = 3;
	static uint64_t x118 = 101429LLU;
	uint32_t x119 = 39U;
	int64_t x120 = INT64_MIN;
	volatile int32_t t28 = 20511239;

	t28 = (x117+((x118==x119)<x120));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 2009U;
	uint32_t x122 = UINT32_MAX;
	uint16_t x123 = 56U;
	int64_t x124 = -32913688297LL;
	int32_t t29 = 2535;

	t29 = (x121+((x122==x123)<x124));

	if (t29 != 2009) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x125 = INT32_MIN;
	int32_t x126 = 0;
	static volatile uint8_t x127 = UINT8_MAX;
	volatile int32_t t30 = -364727293;

	t30 = (x125+((x126==x127)<x128));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 248U;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile uint64_t x132 = 3370429LLU;

	t31 = (x129+((x130==x131)<x132));

	if (t31 != 249) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1;
	int16_t x134 = 0;
	static int16_t x135 = INT16_MAX;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t32 = 78;

	t32 = (x133+((x134==x135)<x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 48U;
	volatile int32_t x139 = INT32_MIN;
	volatile int32_t t33 = 195;

	t33 = (x137+((x138==x139)<x140));

	if (t33 != 49) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -1833;
	uint32_t x142 = UINT32_MAX;
	static int64_t x143 = -3884LL;
	int16_t x144 = INT16_MIN;
	static int32_t t34 = 0;

	t34 = (x141+((x142==x143)<x144));

	if (t34 != -1833) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x146 = 2;
	int8_t x147 = INT8_MAX;
	int8_t x148 = INT8_MIN;
	int32_t t35 = 13432;

	t35 = (x145+((x146==x147)<x148));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x149 = UINT32_MAX;
	volatile uint8_t x150 = UINT8_MAX;
	volatile int16_t x151 = -1;
	int64_t x152 = INT64_MIN;

	t36 = (x149+((x150==x151)<x152));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x154 = 6961U;
	int64_t x156 = INT64_MAX;
	int64_t t37 = 18LL;

	t37 = (x153+((x154==x155)<x156));

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x159 = 13;
	int32_t x160 = INT32_MIN;
	volatile uint32_t t38 = 686U;

	t38 = (x157+((x158==x159)<x160));

	if (t38 != 16U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	int8_t x162 = -1;
	int8_t x163 = -1;
	static volatile int64_t t39 = -631044LL;

	t39 = (x161+((x162==x163)<x164));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = INT8_MIN;
	static int64_t x166 = -1LL;
	uint16_t x167 = 3123U;
	volatile uint64_t x168 = UINT64_MAX;
	static int32_t t40 = -6467809;

	t40 = (x165+((x166==x167)<x168));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 45U;
	int8_t x174 = -1;
	static int8_t x175 = INT8_MAX;
	uint64_t x176 = UINT64_MAX;
	int32_t t41 = 25992;

	t41 = (x173+((x174==x175)<x176));

	if (t41 != 46) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	static int64_t x178 = INT64_MIN;
	uint8_t x179 = 78U;
	static int64_t x180 = -1LL;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x177+((x178==x179)<x180));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = 89;
	int8_t x183 = -1;
	int32_t x184 = INT32_MIN;
	uint64_t t43 = UINT64_MAX;

	t43 = (x181+((x182==x183)<x184));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x186 = -1;
	uint64_t x187 = 32240734027LLU;
	static uint64_t x188 = 80LLU;
	static volatile int32_t t44 = -566203742;

	t44 = (x185+((x186==x187)<x188));

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x189 = 2;
	static int64_t x190 = -1LL;
	volatile int64_t x191 = 12LL;
	int16_t x192 = 4001;
	static int32_t t45 = -561631579;

	t45 = (x189+((x190==x191)<x192));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x194 = INT8_MAX;
	uint16_t x195 = 14318U;
	int16_t x196 = -1;
	volatile int32_t t46 = 50388434;

	t46 = (x193+((x194==x195)<x196));

	if (t46 != 15133) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x197 = -2;
	volatile uint8_t x198 = 1U;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -1;
	volatile int32_t t47 = -1252559;

	t47 = (x197+((x198==x199)<x200));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	uint8_t x202 = 0U;
	int32_t x203 = -1;
	uint32_t x204 = 9382557U;
	int32_t t48 = 100;

	t48 = (x201+((x202==x203)<x204));

	if (t48 != 65536) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -26;
	uint64_t x206 = UINT64_MAX;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t49 = -7;

	t49 = (x205+((x206==x207)<x208));

	if (t49 != -26) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x209 = 43838703095LLU;
	static int8_t x210 = INT8_MIN;
	uint64_t x212 = 317792LLU;
	uint64_t t50 = 4313651875LLU;

	t50 = (x209+((x210==x211)<x212));

	if (t50 != 43838703096LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x214 = 2870;
	int16_t x215 = -1;
	int32_t x216 = -1;
	int32_t t51 = -12;

	t51 = (x213+((x214==x215)<x216));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	static int8_t x218 = INT8_MIN;
	int32_t x219 = 129;
	int32_t x220 = -1451639;

	t52 = (x217+((x218==x219)<x220));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x222 = 440733548710730LLU;
	volatile int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t53 = -98139;

	t53 = (x221+((x222==x223)<x224));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x226 = INT64_MIN;
	static volatile int64_t x228 = -242083420242530LL;
	int32_t t54 = 47376315;

	t54 = (x225+((x226==x227)<x228));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x230 = 143U;
	static uint32_t x232 = 616U;

	t55 = (x229+((x230==x231)<x232));

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = UINT16_MAX;
	static int8_t x234 = INT8_MIN;
	uint8_t x235 = 0U;
	int32_t t56 = -358887;

	t56 = (x233+((x234==x235)<x236));

	if (t56 != 65536) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = -217774LL;
	uint64_t x238 = 36489299650LLU;
	uint32_t x239 = 2465U;
	volatile int8_t x240 = 4;
	int64_t t57 = -6131716091986LL;

	t57 = (x237+((x238==x239)<x240));

	if (t57 != -217773LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 173U;
	uint8_t x244 = UINT8_MAX;
	static volatile uint32_t t58 = 255U;

	t58 = (x241+((x242==x243)<x244));

	if (t58 != 174U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = -504342908438798LL;
	int64_t x247 = INT64_MAX;
	volatile int64_t t59 = 48017618LL;

	t59 = (x245+((x246==x247)<x248));

	if (t59 != -504342908438798LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x250 = 1400U;
	int64_t x251 = INT64_MIN;
	static int16_t x252 = 851;
	int64_t t60 = 3LL;

	t60 = (x249+((x250==x251)<x252));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x253 = 251U;
	int16_t x254 = 6;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t61 = -1568032;

	t61 = (x253+((x254==x255)<x256));

	if (t61 != 252) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x261 = -221;
	uint32_t x262 = UINT32_MAX;
	volatile uint8_t x263 = 1U;
	int32_t t62 = 5694;

	t62 = (x261+((x262==x263)<x264));

	if (t62 != -221) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = -1;
	static int16_t x266 = -1;
	uint64_t x267 = 99713902LLU;
	int32_t t63 = 9730085;

	t63 = (x265+((x266==x267)<x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x271 = UINT16_MAX;
	volatile int8_t x272 = INT8_MAX;
	int32_t t64 = -112232;

	t64 = (x269+((x270==x271)<x272));

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x273 = -3;
	volatile uint16_t x274 = 43U;
	static int16_t x275 = 1720;
	static int16_t x276 = INT16_MIN;
	int32_t t65 = -56400050;

	t65 = (x273+((x274==x275)<x276));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x277 = UINT16_MAX;
	int64_t x278 = INT64_MIN;
	int32_t x279 = -742;
	int32_t x280 = -1;
	volatile int32_t t66 = 183;

	t66 = (x277+((x278==x279)<x280));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = 63729581LLU;
	volatile int8_t x282 = INT8_MIN;
	int64_t x283 = 2687423777LL;
	static uint16_t x284 = UINT16_MAX;

	t67 = (x281+((x282==x283)<x284));

	if (t67 != 63729582LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x285 = 142227691217411427LLU;
	int8_t x286 = INT8_MIN;
	volatile int8_t x288 = -1;
	uint64_t t68 = 179706052089LLU;

	t68 = (x285+((x286==x287)<x288));

	if (t68 != 142227691217411427LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = -65;
	static int16_t x290 = INT16_MAX;
	volatile uint8_t x291 = 54U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t69 = -39153517;

	t69 = (x289+((x290==x291)<x292));

	if (t69 != -65) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MIN;
	static int8_t x298 = -1;
	int8_t x299 = INT8_MAX;
	int32_t x300 = 6233;
	static volatile int32_t t70 = 0;

	t70 = (x297+((x298==x299)<x300));

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 2U;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = INT16_MIN;

	t71 = (x301+((x302==x303)<x304));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 6531U;
	int64_t x306 = INT64_MAX;
	uint8_t x307 = 3U;
	volatile int16_t x308 = 7913;
	static volatile uint32_t t72 = 18U;

	t72 = (x305+((x306==x307)<x308));

	if (t72 != 6532U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	static volatile int16_t x312 = INT16_MIN;
	int32_t t73 = 246275709;

	t73 = (x309+((x310==x311)<x312));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = -1;
	uint32_t x314 = 837877331U;
	int8_t x315 = -16;
	volatile int16_t x316 = 48;
	volatile int32_t t74 = 6278;

	t74 = (x313+((x314==x315)<x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 370397020383018LLU;
	uint64_t x318 = 991859105491926936LLU;
	int8_t x319 = INT8_MIN;
	static int64_t x320 = 20838924580LL;
	volatile uint64_t t75 = 5733953LLU;

	t75 = (x317+((x318==x319)<x320));

	if (t75 != 370397020383019LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x324 = INT64_MAX;

	t76 = (x321+((x322==x323)<x324));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x325 = INT8_MIN;
	static volatile int8_t x326 = INT8_MIN;
	uint8_t x327 = 15U;
	static volatile int32_t x328 = INT32_MAX;
	volatile int32_t t77 = 208207568;

	t77 = (x325+((x326==x327)<x328));

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = -1LL;
	int16_t x330 = 19;
	int16_t x331 = INT16_MIN;
	static volatile int32_t x332 = -1;
	int64_t t78 = 1LL;

	t78 = (x329+((x330==x331)<x332));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x333 = UINT16_MAX;
	uint32_t x334 = 17U;
	static int32_t x335 = INT32_MIN;
	int32_t t79 = -1;

	t79 = (x333+((x334==x335)<x336));

	if (t79 != 65536) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MAX;
	int16_t x340 = 101;
	static int64_t t80 = -15LL;

	t80 = (x337+((x338==x339)<x340));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1740;
	volatile int16_t x344 = INT16_MIN;
	int32_t t81 = -1912806;

	t81 = (x341+((x342==x343)<x344));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int32_t x346 = INT32_MIN;
	static int8_t x348 = -21;
	uint64_t t82 = UINT64_MAX;

	t82 = (x345+((x346==x347)<x348));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	volatile uint16_t x351 = 341U;
	volatile int64_t x352 = INT64_MIN;

	t83 = (x349+((x350==x351)<x352));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = UINT64_MAX;
	uint16_t x355 = UINT16_MAX;
	uint64_t t84 = UINT64_MAX;

	t84 = (x353+((x354==x355)<x356));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 0U;
	int64_t x360 = INT64_MIN;

	t85 = (x357+((x358==x359)<x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x362 = INT8_MIN;
	uint32_t x363 = 2U;
	uint32_t x364 = 327008U;
	volatile int32_t t86 = -3;

	t86 = (x361+((x362==x363)<x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = 12;
	int64_t x366 = -77701246887155992LL;
	static int8_t x367 = INT8_MIN;
	volatile int32_t t87 = -361704196;

	t87 = (x365+((x366==x367)<x368));

	if (t87 != 13) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x371 = 2LLU;
	int64_t x372 = 202LL;
	volatile int32_t t88 = -591544;

	t88 = (x369+((x370==x371)<x372));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x374 = 1866826845655672139LL;
	int32_t x376 = -129250049;
	uint64_t t89 = UINT64_MAX;

	t89 = (x373+((x374==x375)<x376));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = -1;
	uint64_t x378 = 45135LLU;
	volatile uint8_t x379 = 1U;
	volatile int64_t x380 = -1LL;
	int32_t t90 = -341518;

	t90 = (x377+((x378==x379)<x380));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = UINT64_MAX;
	static uint64_t x382 = 255483847479930LLU;
	static int16_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	static volatile uint64_t t91 = 1120LLU;

	t91 = (x381+((x382==x383)<x384));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x385 = -1;
	volatile int64_t x387 = -1LL;
	int8_t x388 = 30;
	int32_t t92 = 1;

	t92 = (x385+((x386==x387)<x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = 34654765LL;
	volatile int16_t x390 = INT16_MAX;
	int8_t x391 = 1;
	int32_t x392 = 1;
	volatile int64_t t93 = -968829LL;

	t93 = (x389+((x390==x391)<x392));

	if (t93 != 34654766LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = -36;
	int8_t x394 = INT8_MAX;
	int8_t x395 = INT8_MAX;
	uint16_t x396 = 954U;
	static volatile int32_t t94 = -3;

	t94 = (x393+((x394==x395)<x396));

	if (t94 != -35) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MAX;
	uint32_t x398 = 3455U;
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x397+((x398==x399)<x400));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = UINT16_MAX;
	static uint64_t x402 = 6759202459542345925LLU;
	static int8_t x403 = 1;
	uint16_t x404 = UINT16_MAX;
	static int32_t t96 = 1656;

	t96 = (x401+((x402==x403)<x404));

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x406 = INT8_MAX;
	int64_t x408 = -1LL;
	int32_t t97 = 3679647;

	t97 = (x405+((x406==x407)<x408));

	if (t97 != -58) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x410 = INT32_MAX;
	int64_t x412 = INT64_MAX;
	volatile int32_t t98 = -425;

	t98 = (x409+((x410==x411)<x412));

	if (t98 != 256) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = -8403049LL;
	int32_t x414 = INT32_MIN;
	int32_t x416 = 1136721;
	int64_t t99 = -2499814055LL;

	t99 = (x413+((x414==x415)<x416));

	if (t99 != -8403048LL) { NG(); } else { ; }
	
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

