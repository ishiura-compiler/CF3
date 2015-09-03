#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int32_t x7 = INT32_MIN;
int8_t x8 = -1;
int64_t x13 = INT64_MAX;
static int32_t x20 = 13;
uint32_t x23 = 29U;
static int8_t x25 = INT8_MAX;
int32_t t6 = 336;
uint32_t x39 = UINT32_MAX;
int8_t x41 = INT8_MIN;
static volatile uint16_t x46 = 6U;
uint32_t x65 = 6775087U;
volatile int64_t t17 = -1187005158289LL;
int16_t x82 = 106;
volatile uint64_t t19 = 37945341386366LLU;
int32_t x92 = -131224;
int32_t x96 = -5;
static volatile int32_t x99 = 1;
static uint8_t x105 = 11U;
static volatile int32_t t25 = 24408664;
int32_t x109 = INT32_MAX;
int64_t x121 = INT64_MAX;
int8_t x124 = INT8_MIN;
uint16_t x132 = 2U;
volatile int32_t x140 = INT32_MIN;
int16_t x141 = INT16_MIN;
uint8_t x143 = 60U;
static uint16_t x146 = 103U;
static volatile uint16_t x147 = 2003U;
int16_t x151 = -1;
int8_t x152 = 7;
uint16_t x154 = 4016U;
uint32_t x160 = 895223379U;
int16_t x161 = INT16_MIN;
uint16_t x164 = 2843U;
int32_t t38 = -29;
static int32_t x170 = 40;
volatile int64_t x174 = INT64_MIN;
int16_t x175 = 1;
volatile int32_t x181 = INT32_MIN;
uint64_t x189 = UINT64_MAX;
uint64_t t47 = 11919696244837017LLU;
int64_t x205 = INT64_MIN;
int16_t x220 = INT16_MAX;
static volatile int8_t x221 = INT8_MAX;
static int16_t x227 = -1;
int32_t t54 = -3;
static volatile uint64_t x241 = UINT64_MAX;
volatile int32_t x243 = INT32_MAX;
int16_t x251 = 0;
uint64_t x253 = UINT64_MAX;
volatile int8_t x256 = INT8_MAX;
static int64_t t59 = 1128102420LL;
uint8_t x257 = UINT8_MAX;
volatile uint64_t t60 = 123958LLU;
static int8_t x265 = INT8_MIN;
static uint8_t x268 = UINT8_MAX;
int32_t t63 = -69;
uint64_t x278 = UINT64_MAX;
int8_t x280 = -1;
volatile int64_t x281 = -1LL;
int64_t x288 = -7072432616225304LL;
int16_t x295 = -1;
uint8_t x296 = UINT8_MAX;
int64_t x297 = 737256474282524LL;
volatile int32_t t70 = -197896;
int64_t x301 = -1LL;
int32_t x303 = 46;
volatile uint64_t x305 = 5851215288689531050LLU;
int32_t x306 = -127984417;
int64_t x321 = INT64_MIN;
uint64_t t74 = 1512LLU;
int64_t x333 = 1588128554302632425LL;
uint8_t x335 = 2U;
static volatile int64_t x343 = INT64_MAX;
int8_t x349 = INT8_MAX;
int64_t x351 = 154036LL;
volatile uint64_t t79 = 646183195545LLU;
volatile uint64_t t80 = 65327299840687941LLU;
uint64_t x359 = 502480LLU;
uint16_t x360 = 22U;
uint64_t t81 = 4280272547LLU;
int16_t x362 = INT16_MIN;
static int16_t x363 = 38;
int8_t x364 = INT8_MIN;
int32_t t82 = 4581;
int32_t x374 = -17372;
volatile int8_t x379 = 3;
static int8_t x385 = INT8_MIN;
uint32_t x386 = 5986U;
int64_t t88 = -6015508LL;
static int8_t x394 = INT8_MIN;
int64_t x398 = -871705190122223LL;
static volatile int64_t x400 = 2323943760LL;
int64_t t90 = -4093LL;
volatile int32_t x403 = -1;
volatile uint16_t x412 = UINT16_MAX;
static volatile int64_t t93 = -12LL;
int8_t x417 = INT8_MIN;
static int16_t x422 = -1;
static int8_t x428 = INT8_MIN;
int64_t x429 = 597160791847046486LL;
static uint32_t x430 = 43879U;
volatile uint16_t x432 = 921U;
uint64_t x433 = UINT64_MAX;
int64_t x440 = INT64_MAX;


void f0(void) {
	uint8_t x2 = 7U;
	volatile uint8_t x3 = 0U;
	int64_t x4 = -1LL;
	static volatile int64_t t0 = -351LL;

	t0 = ((x1<=x2)+(x3-x4));

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 3U;
	uint16_t x6 = 5874U;
	volatile int32_t t1 = 0;

	t1 = ((x5<=x6)+(x7-x8));

	if (t1 != -2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 13U;
	int64_t x10 = -1LL;
	int8_t x11 = 0;
	uint16_t x12 = 13U;
	int32_t t2 = 217832;

	t2 = ((x9<=x10)+(x11-x12));

	if (t2 != -13) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	volatile uint8_t x15 = UINT8_MAX;
	uint8_t x16 = 11U;
	volatile int32_t t3 = 0;

	t3 = ((x13<=x14)+(x15-x16));

	if (t3 != 244) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = INT64_MAX;
	volatile int64_t x19 = 61163286220LL;
	int64_t t4 = -4086920586LL;

	t4 = ((x17<=x18)+(x19-x20));

	if (t4 != 61163286208LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int64_t x22 = 217045640LL;
	int32_t x24 = INT32_MIN;
	uint32_t t5 = 626U;

	t5 = ((x21<=x22)+(x23-x24));

	if (t5 != 2147483678U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;
	int32_t x27 = -1;
	volatile int8_t x28 = INT8_MIN;

	t6 = ((x25<=x26)+(x27-x28));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = -1;
	volatile uint32_t t7 = 279U;

	t7 = ((x29<=x30)+(x31-x32));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MIN;
	int32_t x35 = 1;
	int32_t x36 = -4292;
	volatile int32_t t8 = 1;

	t8 = ((x33<=x34)+(x35-x36));

	if (t8 != 4294) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint8_t x38 = 76U;
	volatile int32_t x40 = INT32_MAX;
	volatile uint32_t t9 = 458900U;

	t9 = ((x37<=x38)+(x39-x40));

	if (t9 != 2147483649U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	volatile int16_t x43 = 15;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = 244697626;

	t10 = ((x41<=x42)+(x43-x44));

	if (t10 != 144) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	uint32_t x47 = 15658U;
	int16_t x48 = -1;
	static uint32_t t11 = 105277930U;

	t11 = ((x45<=x46)+(x47-x48));

	if (t11 != 15659U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint32_t x50 = UINT32_MAX;
	volatile int8_t x51 = -57;
	int64_t x52 = 881416383LL;
	volatile int64_t t12 = 397811778868152LL;

	t12 = ((x49<=x50)+(x51-x52));

	if (t12 != -881416439LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 6;
	static int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MAX;
	uint64_t x60 = 71763LLU;
	uint64_t t13 = 8583659048877278223LLU;

	t13 = ((x57<=x58)+(x59-x60));

	if (t13 != 2147411884LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 11429171620997023LLU;
	volatile int16_t x62 = 0;
	static volatile int32_t x63 = INT32_MIN;
	int16_t x64 = -1;
	static volatile int32_t t14 = -470822710;

	t14 = ((x61<=x62)+(x63-x64));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = 14026722;
	uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MIN;
	volatile uint64_t t15 = 29LLU;

	t15 = ((x65<=x66)+(x67-x68));

	if (t15 != 32768LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 196689LLU;
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = INT64_MAX;
	uint8_t x72 = 4U;
	volatile int64_t t16 = -921114628434331LL;

	t16 = ((x69<=x70)+(x71-x72));

	if (t16 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int8_t x74 = -24;
	int64_t x75 = -1442940148LL;
	uint32_t x76 = UINT32_MAX;

	t17 = ((x73<=x74)+(x75-x76));

	if (t17 != -5737907443LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -15535;
	int16_t x78 = INT16_MIN;
	uint8_t x79 = 2U;
	static volatile uint8_t x80 = 75U;
	static volatile int32_t t18 = 2;

	t18 = ((x77<=x78)+(x79-x80));

	if (t18 != -73) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -4736867969916669LL;
	static int32_t x83 = INT32_MAX;
	volatile uint64_t x84 = 48LLU;

	t19 = ((x81<=x82)+(x83-x84));

	if (t19 != 2147483600LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	static int64_t x86 = -1LL;
	int64_t x87 = INT64_MAX;
	static volatile int16_t x88 = INT16_MAX;
	static int64_t t20 = 2577637996736168571LL;

	t20 = ((x85<=x86)+(x87-x88));

	if (t20 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = -1LL;
	uint32_t x90 = UINT32_MAX;
	int8_t x91 = 1;
	volatile int32_t t21 = 4233922;

	t21 = ((x89<=x90)+(x91-x92));

	if (t21 != 131226) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = INT8_MIN;
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = -1;
	int32_t t22 = 17553;

	t22 = ((x93<=x94)+(x95-x96));

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x97 = -1;
	static volatile uint8_t x98 = 60U;
	int8_t x100 = INT8_MIN;
	int32_t t23 = -12;

	t23 = ((x97<=x98)+(x99-x100));

	if (t23 != 130) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 37466;
	static int16_t x102 = INT16_MAX;
	int64_t x103 = 459LL;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t24 = 428500243LLU;

	t24 = ((x101<=x102)+(x103-x104));

	if (t24 != 460LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = -146;
	int32_t x107 = INT32_MAX;
	uint8_t x108 = UINT8_MAX;

	t25 = ((x105<=x106)+(x107-x108));

	if (t25 != 2147483392) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = 3123LLU;
	uint32_t x111 = 6943U;
	uint16_t x112 = 196U;
	volatile uint32_t t26 = 11292431U;

	t26 = ((x109<=x110)+(x111-x112));

	if (t26 != 6747U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	static volatile uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = 0;
	static volatile int32_t t27 = -86867;

	t27 = ((x113<=x114)+(x115-x116));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = INT16_MAX;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = -9;
	volatile int32_t t28 = 982306498;

	t28 = ((x117<=x118)+(x119-x120));

	if (t28 != -32759) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x122 = 439708026541240LLU;
	uint64_t x123 = UINT64_MAX;
	static uint64_t t29 = 3LLU;

	t29 = ((x121<=x122)+(x123-x124));

	if (t29 != 127LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x129 = 1534946056U;
	static volatile int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MAX;
	static int32_t t30 = 838;

	t30 = ((x129<=x130)+(x131-x132));

	if (t30 != 32766) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	static volatile int8_t x135 = -1;
	int16_t x136 = -1;
	int32_t t31 = -636362291;

	t31 = ((x133<=x134)+(x135-x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = 15;
	int8_t x138 = -1;
	int8_t x139 = -1;
	volatile int32_t t32 = INT32_MAX;

	t32 = ((x137<=x138)+(x139-x140));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x142 = 6417061U;
	int64_t x144 = -1LL;
	volatile int64_t t33 = 6397149LL;

	t33 = ((x141<=x142)+(x143-x144));

	if (t33 != 61LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	static int8_t x148 = -1;
	volatile int32_t t34 = 2048780;

	t34 = ((x145<=x146)+(x147-x148));

	if (t34 != 2004) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -553747725947810678LL;
	int64_t x150 = -475447662575317349LL;
	static volatile int32_t t35 = -60;

	t35 = ((x149<=x150)+(x151-x152));

	if (t35 != -7) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MAX;
	int32_t x155 = 1049;
	int16_t x156 = INT16_MAX;
	volatile int32_t t36 = 380748;

	t36 = ((x153<=x154)+(x155-x156));

	if (t36 != -31717) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = -1LL;
	int16_t x158 = -1;
	static uint16_t x159 = UINT16_MAX;
	uint32_t t37 = 28U;

	t37 = ((x157<=x158)+(x159-x160));

	if (t37 != 3399809453U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x162 = -1;
	int8_t x163 = INT8_MIN;

	t38 = ((x161<=x162)+(x163-x164));

	if (t38 != -2970) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = INT16_MIN;
	int16_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	int32_t t39 = 682;

	t39 = ((x165<=x166)+(x167-x168));

	if (t39 != -256) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = INT16_MIN;
	uint16_t x171 = 24774U;
	int8_t x172 = 47;
	int32_t t40 = 1;

	t40 = ((x169<=x170)+(x171-x172));

	if (t40 != 24728) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = 152;
	int16_t x176 = INT16_MAX;
	volatile int32_t t41 = -126136;

	t41 = ((x173<=x174)+(x175-x176));

	if (t41 != -32766) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 3166277970537541LLU;
	static volatile uint16_t x178 = 27U;
	uint16_t x179 = 1172U;
	volatile int16_t x180 = 1;
	static volatile int32_t t42 = 417394473;

	t42 = ((x177<=x178)+(x179-x180));

	if (t42 != 1171) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = 1;
	uint64_t x183 = 1860543959113LLU;
	uint8_t x184 = UINT8_MAX;
	volatile uint64_t t43 = 66226036022633576LLU;

	t43 = ((x181<=x182)+(x183-x184));

	if (t43 != 1860543958859LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = 704423U;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t44 = 23737U;

	t44 = ((x185<=x186)+(x187-x188));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = INT8_MIN;
	int32_t x191 = -1;
	volatile int16_t x192 = 27;
	static volatile int32_t t45 = 1989300;

	t45 = ((x189<=x190)+(x191-x192));

	if (t45 != -28) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -8;
	int8_t x194 = INT8_MAX;
	static volatile uint64_t x195 = 317579LLU;
	volatile uint8_t x196 = 0U;
	uint64_t t46 = 3197408LLU;

	t46 = ((x193<=x194)+(x195-x196));

	if (t46 != 317580LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = INT64_MAX;
	int16_t x198 = INT16_MIN;
	int16_t x199 = -1;
	uint64_t x200 = UINT64_MAX;

	t47 = ((x197<=x198)+(x199-x200));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MAX;
	static volatile uint64_t x202 = 18LLU;
	int8_t x203 = 1;
	int16_t x204 = -1;
	volatile int32_t t48 = 15;

	t48 = ((x201<=x202)+(x203-x204));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x206 = 16U;
	volatile uint8_t x207 = UINT8_MAX;
	static int8_t x208 = -9;
	int32_t t49 = -279;

	t49 = ((x205<=x206)+(x207-x208));

	if (t49 != 265) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	static int16_t x214 = INT16_MAX;
	uint32_t x215 = 86710U;
	volatile int32_t x216 = -1644097;
	static uint32_t t50 = 0U;

	t50 = ((x213<=x214)+(x215-x216));

	if (t50 != 1730808U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x217 = -156;
	static int16_t x218 = 4882;
	uint16_t x219 = 70U;
	volatile int32_t t51 = 9306783;

	t51 = ((x217<=x218)+(x219-x220));

	if (t51 != -32696) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x222 = UINT8_MAX;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = 2227597943799979LLU;
	volatile uint64_t t52 = 448690888283LLU;

	t52 = ((x221<=x222)+(x223-x224));

	if (t52 != 9221144438910975830LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	volatile int8_t x226 = INT8_MIN;
	uint16_t x228 = 2449U;
	volatile int32_t t53 = -21895;

	t53 = ((x225<=x226)+(x227-x228));

	if (t53 != -2449) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = -1;
	volatile uint16_t x230 = UINT16_MAX;
	int16_t x231 = INT16_MIN;
	int32_t x232 = -409896371;

	t54 = ((x229<=x230)+(x231-x232));

	if (t54 != 409863604) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = -1114471499409LL;
	volatile uint8_t x239 = 1U;
	static volatile int64_t x240 = 3964324640342708452LL;
	volatile int64_t t55 = -726LL;

	t55 = ((x237<=x238)+(x239-x240));

	if (t55 != -3964324640342708451LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x242 = -296326LL;
	static uint64_t x244 = 15770246LLU;
	uint64_t t56 = 149496492598765LLU;

	t56 = ((x241<=x242)+(x243-x244));

	if (t56 != 2131713401LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x245 = -118;
	int8_t x246 = INT8_MIN;
	static uint64_t x247 = 15428952944789LLU;
	int16_t x248 = INT16_MIN;
	uint64_t t57 = 3556143376232000848LLU;

	t57 = ((x245<=x246)+(x247-x248));

	if (t57 != 15428952977557LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MIN;
	uint8_t x250 = UINT8_MAX;
	volatile uint32_t x252 = 7966966U;
	uint32_t t58 = 11483U;

	t58 = ((x249<=x250)+(x251-x252));

	if (t58 != 4287000331U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x254 = 1U;
	static int64_t x255 = INT64_MAX;

	t59 = ((x253<=x254)+(x255-x256));

	if (t59 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x258 = 1870581998071LLU;
	volatile uint64_t x259 = 12450981254215385LLU;
	int8_t x260 = INT8_MAX;

	t60 = ((x257<=x258)+(x259-x260));

	if (t60 != 12450981254215259LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = -5937;
	volatile int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	static int8_t x264 = 4;
	volatile int32_t t61 = -86814489;

	t61 = ((x261<=x262)+(x263-x264));

	if (t61 != -32771) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x266 = -10356927;
	int32_t x267 = INT32_MAX;
	static int32_t t62 = 1;

	t62 = ((x265<=x266)+(x267-x268));

	if (t62 != 2147483392) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MIN;
	volatile int16_t x270 = -219;
	int16_t x271 = -6;
	volatile uint8_t x272 = 1U;

	t63 = ((x269<=x270)+(x271-x272));

	if (t63 != -6) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 0U;
	volatile int16_t x274 = -1;
	volatile int64_t x275 = -1LL;
	static int32_t x276 = INT32_MIN;
	int64_t t64 = 994429LL;

	t64 = ((x273<=x274)+(x275-x276));

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MIN;
	int32_t x279 = -1;
	static volatile int32_t t65 = -35;

	t65 = ((x277<=x278)+(x279-x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x282 = 3447U;
	static volatile int16_t x283 = INT16_MAX;
	static uint64_t x284 = 149694189429196LLU;
	static volatile uint64_t t66 = 9513LLU;

	t66 = ((x281<=x282)+(x283-x284));

	if (t66 != 18446594379520155188LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = -1;
	uint8_t x286 = 6U;
	int16_t x287 = 13158;
	int64_t t67 = -245401221756LL;

	t67 = ((x285<=x286)+(x287-x288));

	if (t67 != 7072432616238463LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 5U;
	volatile uint64_t x290 = UINT64_MAX;
	int32_t x291 = -21338;
	uint64_t x292 = 2878000172LLU;
	uint64_t t68 = 294LLU;

	t68 = ((x289<=x290)+(x291-x292));

	if (t68 != 18446744070831530107LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	uint16_t x294 = 31U;
	int32_t t69 = -61416;

	t69 = ((x293<=x294)+(x295-x296));

	if (t69 != -255) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	int32_t x300 = INT32_MIN;

	t70 = ((x297<=x298)+(x299-x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x302 = 971909U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t71 = 1;

	t71 = ((x301<=x302)+(x303-x304));

	if (t71 != 32815) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x307 = -296662087365781LL;
	int16_t x308 = INT16_MIN;
	volatile int64_t t72 = 17485018LL;

	t72 = ((x305<=x306)+(x307-x308));

	if (t72 != -296662087333012LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x313 = INT8_MAX;
	int32_t x314 = 2076588;
	volatile uint64_t x315 = UINT64_MAX;
	int16_t x316 = INT16_MIN;
	volatile uint64_t t73 = 96251607LLU;

	t73 = ((x313<=x314)+(x315-x316));

	if (t73 != 32768LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x322 = 2229506190593639LLU;
	uint64_t x323 = 2763324LLU;
	int16_t x324 = -902;

	t74 = ((x321<=x322)+(x323-x324));

	if (t74 != 2764226LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x334 = INT8_MIN;
	int32_t x336 = -171;
	volatile int32_t t75 = -1;

	t75 = ((x333<=x334)+(x335-x336));

	if (t75 != 173) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = 0;
	int8_t x338 = INT8_MIN;
	uint64_t x339 = 15485039748LLU;
	static uint64_t x340 = UINT64_MAX;
	volatile uint64_t t76 = 19232LLU;

	t76 = ((x337<=x338)+(x339-x340));

	if (t76 != 15485039749LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x341 = 1LL;
	static uint32_t x342 = UINT32_MAX;
	volatile uint16_t x344 = UINT16_MAX;
	int64_t t77 = 2178182914344001913LL;

	t77 = ((x341<=x342)+(x343-x344));

	if (t77 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x345 = 264U;
	static volatile uint8_t x346 = 68U;
	volatile int64_t x347 = -3681LL;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t78 = -37959182LL;

	t78 = ((x345<=x346)+(x347-x348));

	if (t78 != -4294970976LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x350 = INT64_MAX;
	uint64_t x352 = UINT64_MAX;

	t79 = ((x349<=x350)+(x351-x352));

	if (t79 != 154038LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -4664LL;
	volatile uint8_t x354 = 1U;
	volatile uint64_t x355 = 1287447LLU;
	uint8_t x356 = 47U;

	t80 = ((x353<=x354)+(x355-x356));

	if (t80 != 1287401LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x357 = -1;
	uint64_t x358 = 15813LLU;

	t81 = ((x357<=x358)+(x359-x360));

	if (t81 != 502458LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x361 = -26;

	t82 = ((x361<=x362)+(x363-x364));

	if (t82 != 166) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x365 = INT64_MIN;
	int16_t x366 = 46;
	static int64_t x367 = INT64_MIN;
	uint64_t x368 = 161948335230419745LLU;
	uint64_t t83 = 13023LLU;

	t83 = ((x365<=x366)+(x367-x368));

	if (t83 != 9061423701624356064LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x373 = 1U;
	uint8_t x375 = 2U;
	int16_t x376 = INT16_MIN;
	int32_t t84 = -220;

	t84 = ((x373<=x374)+(x375-x376));

	if (t84 != 32770) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x377 = INT16_MIN;
	int32_t x378 = 1426464;
	int8_t x380 = -2;
	volatile int32_t t85 = 21057931;

	t85 = ((x377<=x378)+(x379-x380));

	if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x381 = 418;
	int8_t x382 = -2;
	static volatile int64_t x383 = -1LL;
	int16_t x384 = -1;
	volatile int64_t t86 = 8241020985096LL;

	t86 = ((x381<=x382)+(x383-x384));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x387 = -1;
	static uint64_t x388 = 19628907LLU;
	uint64_t t87 = 15020LLU;

	t87 = ((x385<=x386)+(x387-x388));

	if (t87 != 18446744073689922708LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x389 = INT16_MIN;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = -93063LL;
	uint8_t x392 = 30U;

	t88 = ((x389<=x390)+(x391-x392));

	if (t88 != -93092LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x393 = -1;
	int16_t x395 = -11014;
	uint64_t x396 = UINT64_MAX;
	static uint64_t t89 = 19506LLU;

	t89 = ((x393<=x394)+(x395-x396));

	if (t89 != 18446744073709540603LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x397 = 13580LLU;
	int16_t x399 = -1;

	t90 = ((x397<=x398)+(x399-x400));

	if (t90 != -2323943760LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = 5393973140LL;
	volatile uint8_t x402 = 1U;
	int64_t x404 = -1LL;
	int64_t t91 = -411773242LL;

	t91 = ((x401<=x402)+(x403-x404));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x405 = INT64_MIN;
	int64_t x406 = 1468LL;
	uint16_t x407 = 825U;
	int32_t x408 = 377;
	volatile int32_t t92 = -89756;

	t92 = ((x405<=x406)+(x407-x408));

	if (t92 != 449) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x409 = INT8_MIN;
	uint8_t x410 = 1U;
	volatile int64_t x411 = -1LL;

	t93 = ((x409<=x410)+(x411-x412));

	if (t93 != -65535LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x418 = -1LL;
	volatile int8_t x419 = INT8_MAX;
	uint8_t x420 = UINT8_MAX;
	static int32_t t94 = 6277876;

	t94 = ((x417<=x418)+(x419-x420));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x421 = INT64_MAX;
	int32_t x423 = INT32_MIN;
	int64_t x424 = -1LL;
	volatile int64_t t95 = -250LL;

	t95 = ((x421<=x422)+(x423-x424));

	if (t95 != -2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = -1LL;
	static int8_t x426 = 0;
	uint64_t x427 = 1010032343982LLU;
	uint64_t t96 = 609968604LLU;

	t96 = ((x425<=x426)+(x427-x428));

	if (t96 != 1010032344111LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x431 = 62494631728674281LLU;
	uint64_t t97 = 53385320LLU;

	t97 = ((x429<=x430)+(x431-x432));

	if (t97 != 62494631728673360LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x434 = 2950186LL;
	static int32_t x435 = INT32_MIN;
	int32_t x436 = INT32_MIN;
	static int32_t t98 = -714;

	t98 = ((x433<=x434)+(x435-x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x437 = -10;
	int32_t x438 = -1;
	static volatile int8_t x439 = INT8_MAX;
	volatile int64_t t99 = -672713864LL;

	t99 = ((x437<=x438)+(x439-x440));

	if (t99 != -9223372036854775679LL) { NG(); } else { ; }
	
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

