#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 6;
int32_t x3 = -1;
volatile int32_t x9 = INT32_MIN;
int8_t x12 = INT8_MIN;
int32_t t1 = -52602396;
uint32_t x17 = UINT32_MAX;
static volatile int64_t x19 = INT64_MIN;
volatile int16_t x22 = 0;
int8_t x25 = INT8_MIN;
int32_t x26 = -807226;
static uint16_t x33 = UINT16_MAX;
volatile int32_t x45 = INT32_MIN;
uint64_t x53 = 140LLU;
uint32_t x55 = UINT32_MAX;
uint32_t t12 = 322U;
uint64_t x58 = 1206700201553973LLU;
int16_t x61 = 6;
int16_t x67 = -1;
int8_t x73 = INT8_MIN;
int8_t x75 = -2;
volatile uint8_t x76 = UINT8_MAX;
volatile int32_t t17 = 24899;
uint32_t x80 = UINT32_MAX;
static uint32_t x87 = 3U;
uint8_t x88 = 61U;
static int8_t x95 = INT8_MIN;
int8_t x100 = INT8_MIN;
uint8_t x101 = UINT8_MAX;
uint8_t x110 = UINT8_MAX;
int8_t x115 = -1;
int16_t x117 = -97;
int8_t x120 = -6;
int64_t x121 = -1LL;
int32_t x129 = 70564;
uint8_t x132 = UINT8_MAX;
volatile int32_t t30 = -337920;
volatile int32_t x142 = INT32_MIN;
uint16_t x144 = 0U;
int64_t x148 = -575486060843348LL;
static int64_t t33 = -398850751680124333LL;
int8_t x152 = -1;
static uint64_t x158 = UINT64_MAX;
uint32_t x160 = 82U;
uint16_t x167 = 5U;
uint16_t x177 = UINT16_MAX;
volatile int16_t x182 = 0;
static volatile uint64_t t39 = 742850867LLU;
int64_t x190 = INT64_MIN;
int64_t x191 = INT64_MAX;
uint16_t x192 = UINT16_MAX;
uint64_t x193 = 669215367222399413LLU;
static int16_t x198 = INT16_MAX;
int8_t x217 = -4;
int32_t x218 = INT32_MIN;
int8_t x219 = -1;
int32_t x221 = -190;
static int8_t x223 = INT8_MAX;
static uint64_t x224 = 281LLU;
uint64_t x226 = UINT64_MAX;
static int64_t x228 = -19LL;
volatile int32_t x244 = -1;
int16_t x254 = INT16_MIN;
int8_t x260 = INT8_MIN;
volatile int32_t t57 = -3;
volatile uint64_t t58 = 624LLU;
uint8_t x276 = 1U;
uint64_t t59 = 49437306038310LLU;
int32_t t60 = 4764;
static int8_t x283 = INT8_MIN;
int32_t t62 = 118;
volatile int16_t x293 = 247;
static int32_t x299 = -1;
static int16_t x301 = -1;
static uint32_t t66 = 6985442U;
int64_t x306 = -1LL;
int16_t x308 = INT16_MAX;
uint32_t t67 = 191555U;
int32_t x310 = INT32_MIN;
int16_t x312 = INT16_MAX;
volatile int8_t x316 = INT8_MIN;
int16_t x320 = -1;
uint32_t x321 = 11834U;
volatile uint32_t x329 = 58U;
int64_t x332 = -17LL;
volatile uint32_t x336 = 482U;
int16_t x340 = -2729;
volatile uint16_t x350 = 30U;
int32_t t77 = 1;
int8_t x355 = 1;
uint16_t x356 = 20U;
int64_t x357 = INT64_MIN;
int16_t x359 = INT16_MIN;
uint8_t x363 = UINT8_MAX;
volatile int32_t t81 = -815387703;
static uint16_t x373 = UINT16_MAX;
uint64_t x374 = UINT64_MAX;
volatile int32_t t82 = -46;
uint32_t x387 = UINT32_MAX;
int16_t x388 = 3571;
uint16_t x395 = 0U;
volatile int16_t x399 = 2073;
int32_t t88 = 17216;
volatile int32_t x403 = INT32_MAX;
uint64_t x409 = 648183863709327009LLU;
volatile uint64_t t92 = 3516992546LLU;
static int8_t x424 = 0;
int32_t x434 = INT32_MIN;
volatile int64_t x435 = -1LL;
int32_t x438 = INT32_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	uint16_t x4 = 9U;
	static volatile int32_t t0 = 1645;

	t0 = ((x1<x2)&(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x10 = 15U;
	static volatile uint8_t x11 = UINT8_MAX;

	t1 = ((x9<x10)&(x11-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 846069441U;
	int32_t x14 = 466263306;
	static int64_t x15 = -1LL;
	int16_t x16 = INT16_MAX;
	volatile int64_t t2 = 8954783783762343LL;

	t2 = ((x13<x14)&(x15-x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = -3263172254LL;
	int16_t x20 = -1;
	int64_t t3 = 17074444343451LL;

	t3 = ((x17<x18)&(x19-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -4489;
	volatile uint32_t x23 = UINT32_MAX;
	static int32_t x24 = -1;
	uint32_t t4 = 237U;

	t4 = ((x21<x22)&(x23-x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x27 = -5598769644LL;
	int64_t x28 = 1LL;
	volatile int64_t t5 = -16273366993499LL;

	t5 = ((x25<x26)&(x27-x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x29 = 922825U;
	uint64_t x30 = 441730072346950LLU;
	int64_t x31 = -1LL;
	int16_t x32 = INT16_MIN;
	volatile int64_t t6 = -4491658121390957453LL;

	t6 = ((x29<x30)&(x31-x32));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x34 = 0;
	volatile int16_t x35 = INT16_MIN;
	static int32_t x36 = -201362470;
	static volatile int32_t t7 = 94;

	t7 = ((x33<x34)&(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = -19086;
	int8_t x38 = 1;
	uint8_t x39 = 1U;
	volatile uint8_t x40 = 123U;
	int32_t t8 = -42;

	t8 = ((x37<x38)&(x39-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = 1;
	static volatile uint32_t x42 = 1908U;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = 53;
	volatile uint32_t t9 = 795U;

	t9 = ((x41<x42)&(x43-x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = 32770315731LLU;
	static uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MIN;
	uint32_t t10 = 3204306U;

	t10 = ((x45<x46)&(x47-x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = 46519235918LLU;
	static int8_t x50 = 47;
	int8_t x51 = -2;
	static volatile int32_t x52 = -1;
	static volatile int32_t t11 = -13165798;

	t11 = ((x49<x50)&(x51-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x54 = 246115;
	int8_t x56 = INT8_MIN;

	t12 = ((x53<x54)&(x55-x56));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	static uint64_t x60 = UINT64_MAX;
	volatile uint64_t t13 = 189LLU;

	t13 = ((x57<x58)&(x59-x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x62 = INT16_MAX;
	int64_t x63 = -1LL;
	uint16_t x64 = 68U;
	static volatile int64_t t14 = -257425674677LL;

	t14 = ((x61<x62)&(x63-x64));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	int32_t x66 = 8;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 9365;

	t15 = ((x65<x66)&(x67-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = -1LL;
	static volatile int8_t x72 = INT8_MIN;
	int64_t t16 = -445595956687LL;

	t16 = ((x69<x70)&(x71-x72));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = 15;

	t17 = ((x73<x74)&(x75-x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	volatile int32_t x78 = INT32_MIN;
	static int64_t x79 = -16694353LL;
	volatile int64_t t18 = 3017342LL;

	t18 = ((x77<x78)&(x79-x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 48557262308229LLU;
	static int32_t x82 = -1;
	static int16_t x83 = -2;
	static int16_t x84 = 88;
	int32_t t19 = 6204650;

	t19 = ((x81<x82)&(x83-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x85 = 344228200798783LLU;
	int16_t x86 = INT16_MAX;
	uint32_t t20 = 6U;

	t20 = ((x85<x86)&(x87-x88));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 47U;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	static int32_t x92 = -44685775;
	volatile int32_t t21 = -9;

	t21 = ((x89<x90)&(x91-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 0U;
	int32_t x94 = -1;
	volatile int8_t x96 = -56;
	static volatile int32_t t22 = -922;

	t22 = ((x93<x94)&(x95-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 475175LLU;
	static int32_t x98 = INT32_MAX;
	int16_t x99 = -1;
	int32_t t23 = -141;

	t23 = ((x97<x98)&(x99-x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x102 = 0U;
	int64_t x103 = -1LL;
	volatile int64_t x104 = INT64_MAX;
	volatile int64_t t24 = -60164510258519648LL;

	t24 = ((x101<x102)&(x103-x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 72U;
	static uint16_t x111 = 2279U;
	uint32_t x112 = UINT32_MAX;
	uint32_t t25 = 8012359U;

	t25 = ((x109<x110)&(x111-x112));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t26 = -49230;

	t26 = ((x113<x114)&(x115-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = 11;
	int32_t x119 = 98825548;
	int32_t t27 = 214;

	t27 = ((x117<x118)&(x119-x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = INT32_MAX;
	static int64_t x123 = INT64_MIN;
	static int64_t x124 = -1LL;
	int64_t t28 = -109143463289489LL;

	t28 = ((x121<x122)&(x123-x124));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -35;
	static volatile int8_t x126 = -1;
	int8_t x127 = 46;
	static int8_t x128 = 7;
	static volatile int32_t t29 = 595244699;

	t29 = ((x125<x126)&(x127-x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x130 = INT32_MAX;
	int32_t x131 = INT32_MAX;

	t30 = ((x129<x130)&(x131-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = 3;
	int8_t x134 = 1;
	int64_t x135 = -1LL;
	int16_t x136 = INT16_MIN;
	volatile int64_t t31 = 4415LL;

	t31 = ((x133<x134)&(x135-x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -6;
	uint32_t x143 = UINT32_MAX;
	uint32_t t32 = 0U;

	t32 = ((x141<x142)&(x143-x144));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = INT8_MIN;
	int32_t x146 = 1492;
	static int64_t x147 = -1LL;

	t33 = ((x145<x146)&(x147-x148));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -1474932;
	int32_t x150 = -56509;
	int16_t x151 = INT16_MIN;
	volatile int32_t t34 = -468;

	t34 = ((x149<x150)&(x151-x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MAX;
	uint8_t x154 = 9U;
	int16_t x155 = INT16_MIN;
	int64_t x156 = 3268278LL;
	volatile int64_t t35 = -153239293492468LL;

	t35 = ((x153<x154)&(x155-x156));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint8_t x159 = 19U;
	static volatile uint32_t t36 = 594980385U;

	t36 = ((x157<x158)&(x159-x160));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1201;
	uint8_t x166 = 48U;
	static volatile int64_t x168 = 5404767900363428LL;
	int64_t t37 = -1LL;

	t37 = ((x165<x166)&(x167-x168));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x178 = 7U;
	int16_t x179 = 1611;
	uint16_t x180 = 245U;
	int32_t t38 = -61797;

	t38 = ((x177<x178)&(x179-x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = 119U;
	uint64_t x183 = 159798976106872LLU;
	static int16_t x184 = INT16_MAX;

	t39 = ((x181<x182)&(x183-x184));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 0U;
	static volatile uint16_t x187 = 11U;
	int8_t x188 = 1;
	volatile int32_t t40 = 25624171;

	t40 = ((x185<x186)&(x187-x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = 2;
	volatile int64_t t41 = 57751662720956LL;

	t41 = ((x189<x190)&(x191-x192));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x194 = UINT8_MAX;
	static int32_t x195 = -1;
	volatile uint8_t x196 = 59U;
	int32_t t42 = -3996275;

	t42 = ((x193<x194)&(x195-x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = -1;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = 0;
	int32_t t43 = 372201634;

	t43 = ((x197<x198)&(x199-x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x201 = -1;
	uint32_t x202 = UINT32_MAX;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = -1;
	int32_t t44 = -553084442;

	t44 = ((x201<x202)&(x203-x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	int64_t x208 = -832578LL;
	int64_t t45 = -20783734011072LL;

	t45 = ((x205<x206)&(x207-x208));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = 0;
	uint64_t x210 = 0LLU;
	volatile int8_t x211 = -1;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t46 = 3376142856LL;

	t46 = ((x209<x210)&(x211-x212));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = INT32_MIN;
	uint32_t x214 = 815500726U;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t47 = -3;

	t47 = ((x213<x214)&(x215-x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x220 = INT16_MIN;
	static volatile int32_t t48 = -431505;

	t48 = ((x217<x218)&(x219-x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x222 = 6U;
	uint64_t t49 = 210033LLU;

	t49 = ((x221<x222)&(x223-x224));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = UINT8_MAX;
	volatile uint32_t x227 = 3499U;
	static volatile int64_t t50 = 3629LL;

	t50 = ((x225<x226)&(x227-x228));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MIN;
	int16_t x230 = 88;
	int8_t x231 = INT8_MAX;
	uint32_t x232 = 326627763U;
	static uint32_t t51 = 5572061U;

	t51 = ((x229<x230)&(x231-x232));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x241 = 1269018U;
	uint32_t x242 = UINT32_MAX;
	volatile int8_t x243 = -1;
	volatile int32_t t52 = -4;

	t52 = ((x241<x242)&(x243-x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = -5378LL;
	static int16_t x246 = -8;
	int32_t x247 = 29550;
	volatile int32_t x248 = -65579;
	volatile int32_t t53 = -1987496;

	t53 = ((x245<x246)&(x247-x248));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MIN;
	uint8_t x255 = 1U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t54 = -1624994;

	t54 = ((x253<x254)&(x255-x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x257 = -15;
	int8_t x258 = 1;
	volatile uint8_t x259 = UINT8_MAX;
	static volatile int32_t t55 = -61223;

	t55 = ((x257<x258)&(x259-x260));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x261 = 19;
	int8_t x262 = INT8_MIN;
	int16_t x263 = 3973;
	int8_t x264 = 45;
	volatile int32_t t56 = 9;

	t56 = ((x261<x262)&(x263-x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = 42;
	int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MIN;
	volatile int16_t x268 = -1;

	t57 = ((x265<x266)&(x267-x268));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = 8LLU;
	int16_t x270 = 30;
	static volatile int16_t x271 = INT16_MIN;
	uint64_t x272 = UINT64_MAX;

	t58 = ((x269<x270)&(x271-x272));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	uint64_t x275 = UINT64_MAX;

	t59 = ((x273<x274)&(x275-x276));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x277 = INT64_MIN;
	int8_t x278 = 8;
	uint16_t x279 = UINT16_MAX;
	volatile int16_t x280 = 837;

	t60 = ((x277<x278)&(x279-x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x281 = -3564677558LL;
	int8_t x282 = 14;
	int8_t x284 = INT8_MIN;
	int32_t t61 = 23199;

	t61 = ((x281<x282)&(x283-x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x285 = 2440U;
	int64_t x286 = INT64_MAX;
	static int32_t x287 = -41;
	int32_t x288 = INT32_MIN;

	t62 = ((x285<x286)&(x287-x288));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = INT64_MIN;
	static int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	volatile uint16_t x292 = 266U;
	int32_t t63 = -7;

	t63 = ((x289<x290)&(x291-x292));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x294 = 103682895;
	static int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t64 = 26;

	t64 = ((x293<x294)&(x295-x296));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	uint16_t x298 = UINT16_MAX;
	volatile int32_t x300 = INT32_MIN;
	volatile int32_t t65 = -130389;

	t65 = ((x297<x298)&(x299-x300));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x302 = UINT64_MAX;
	uint32_t x303 = 1042306774U;
	static uint8_t x304 = UINT8_MAX;

	t66 = ((x301<x302)&(x303-x304));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MIN;
	uint32_t x307 = 858U;

	t67 = ((x305<x306)&(x307-x308));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -1;
	uint64_t x311 = UINT64_MAX;
	volatile uint64_t t68 = 30325LLU;

	t68 = ((x309<x310)&(x311-x312));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MAX;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = -13LL;
	int64_t t69 = -832312950112LL;

	t69 = ((x313<x314)&(x315-x316));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x317 = 7350523961657549566LLU;
	volatile uint8_t x318 = UINT8_MAX;
	int64_t x319 = 46LL;
	int64_t t70 = -6777298015737760LL;

	t70 = ((x317<x318)&(x319-x320));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x322 = INT8_MIN;
	static uint64_t x323 = 4LLU;
	int8_t x324 = INT8_MIN;
	uint64_t t71 = 36LLU;

	t71 = ((x321<x322)&(x323-x324));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	int64_t t72 = -2261186383660LL;

	t72 = ((x329<x330)&(x331-x332));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	uint16_t x335 = 637U;
	volatile uint32_t t73 = 3868U;

	t73 = ((x333<x334)&(x335-x336));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = -1;
	volatile int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int32_t t74 = -184458003;

	t74 = ((x337<x338)&(x339-x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = -1;
	int32_t x342 = -65434915;
	int8_t x343 = -1;
	uint16_t x344 = 13786U;
	int32_t t75 = -13927;

	t75 = ((x341<x342)&(x343-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 10U;
	volatile int64_t x346 = INT64_MIN;
	uint32_t x347 = 194U;
	int32_t x348 = 888;
	volatile uint32_t t76 = 1421331824U;

	t76 = ((x345<x346)&(x347-x348));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = 34;
	uint8_t x351 = 14U;
	volatile int32_t x352 = INT32_MAX;

	t77 = ((x349<x350)&(x351-x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = 278795685585806575LLU;
	int16_t x354 = INT16_MAX;
	volatile int32_t t78 = -377;

	t78 = ((x353<x354)&(x355-x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x358 = 11231;
	int8_t x360 = INT8_MAX;
	int32_t t79 = -266;

	t79 = ((x357<x358)&(x359-x360));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 36600087018885161LLU;
	uint16_t x362 = 1519U;
	static uint32_t x364 = UINT32_MAX;
	uint32_t t80 = 970U;

	t80 = ((x361<x362)&(x363-x364));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = -1;
	uint8_t x367 = 2U;
	uint8_t x368 = UINT8_MAX;

	t81 = ((x365<x366)&(x367-x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x375 = 1;
	int16_t x376 = -1041;

	t82 = ((x373<x374)&(x375-x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x377 = INT8_MAX;
	static uint32_t x378 = 25U;
	volatile int64_t x379 = 3328858956428124187LL;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t83 = 163597122498LLU;

	t83 = ((x377<x378)&(x379-x380));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint16_t x382 = 2U;
	volatile int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t84 = -11;

	t84 = ((x381<x382)&(x383-x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x385 = -42;
	uint64_t x386 = 24190LLU;
	volatile uint32_t t85 = 1897411342U;

	t85 = ((x385<x386)&(x387-x388));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = INT64_MAX;
	static int8_t x390 = INT8_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;
	static uint64_t t86 = 161319LLU;

	t86 = ((x389<x390)&(x391-x392));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = INT16_MIN;
	static int64_t x394 = -21819653LL;
	uint16_t x396 = 32U;
	volatile int32_t t87 = -82948357;

	t87 = ((x393<x394)&(x395-x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = -1;
	int64_t x398 = 99416646LL;
	static int16_t x400 = INT16_MAX;

	t88 = ((x397<x398)&(x399-x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MAX;
	int8_t x402 = INT8_MAX;
	static uint8_t x404 = 13U;
	int32_t t89 = -3;

	t89 = ((x401<x402)&(x403-x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x405 = INT32_MAX;
	volatile uint16_t x406 = UINT16_MAX;
	int16_t x407 = -1;
	int32_t x408 = -1;
	volatile int32_t t90 = 176766;

	t90 = ((x405<x406)&(x407-x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MIN;
	int64_t t91 = -2757510639137713LL;

	t91 = ((x409<x410)&(x411-x412));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = INT16_MAX;
	uint16_t x414 = UINT16_MAX;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = 32401193;

	t92 = ((x413<x414)&(x415-x416));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x417 = 15785849U;
	int32_t x418 = -1;
	uint64_t x419 = 9326597323LLU;
	int8_t x420 = INT8_MIN;
	uint64_t t93 = 28747295203LLU;

	t93 = ((x417<x418)&(x419-x420));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = 12400LLU;
	volatile int32_t x422 = -131326578;
	int8_t x423 = 0;
	volatile int32_t t94 = -345;

	t94 = ((x421<x422)&(x423-x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = -2599;
	int16_t x426 = 62;
	int8_t x427 = -24;
	int8_t x428 = 56;
	volatile int32_t t95 = 1987;

	t95 = ((x425<x426)&(x427-x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x429 = INT8_MAX;
	int64_t x430 = INT64_MIN;
	volatile int32_t x431 = INT32_MIN;
	int64_t x432 = 8360LL;
	static int64_t t96 = -1951800056596317681LL;

	t96 = ((x429<x430)&(x431-x432));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MIN;
	static volatile uint8_t x436 = 0U;
	volatile int64_t t97 = -3613284177LL;

	t97 = ((x433<x434)&(x435-x436));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = -1LL;
	static int8_t x439 = -1;
	uint64_t x440 = 51648706LLU;
	static volatile uint64_t t98 = 4151634270189LLU;

	t98 = ((x437<x438)&(x439-x440));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MIN;
	static int8_t x447 = -38;
	static int64_t x448 = INT64_MIN;
	int64_t t99 = -1005368LL;

	t99 = ((x445<x446)&(x447-x448));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

