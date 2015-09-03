#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = 11;
volatile uint8_t x8 = UINT8_MAX;
uint8_t x16 = UINT8_MAX;
static int32_t x19 = -1;
int64_t t4 = -528150370039050LL;
static int32_t x22 = INT32_MIN;
int16_t x23 = -1;
volatile uint32_t x43 = 122925921U;
static uint16_t x48 = 3744U;
int64_t x53 = -2094531471283098LL;
static int64_t x57 = INT64_MIN;
int64_t x60 = INT64_MIN;
static volatile int32_t t15 = 7552462;
uint8_t x72 = 4U;
uint32_t t17 = 56082U;
uint32_t x76 = 4666072U;
uint8_t x80 = 15U;
int8_t x81 = INT8_MAX;
int8_t x82 = 0;
volatile int32_t x84 = INT32_MIN;
int32_t x85 = -1;
int32_t x87 = -1;
int8_t x96 = INT8_MIN;
uint8_t x99 = 64U;
uint32_t x101 = UINT32_MAX;
int32_t x111 = -1;
static uint64_t x112 = 1052602360LLU;
int16_t x118 = INT16_MAX;
int16_t x122 = INT16_MIN;
volatile uint32_t x123 = 40U;
uint16_t x124 = 12U;
static uint8_t x127 = 4U;
volatile int64_t t31 = -87080LL;
volatile int64_t t32 = -182346LL;
uint32_t x147 = 25U;
int64_t x151 = INT64_MIN;
uint32_t t38 = 555353U;
int8_t x168 = INT8_MAX;
volatile int16_t x174 = -1;
int32_t t43 = 3;
int32_t x192 = INT32_MAX;
int32_t t47 = -120429;
uint16_t x196 = 15207U;
static volatile int16_t x203 = INT16_MIN;
static volatile int32_t t52 = -1;
volatile uint32_t x217 = 817497U;
int64_t x226 = -461924512886830LL;
uint64_t t56 = 228639270684674291LLU;
volatile int32_t t58 = 402194;
static volatile uint64_t t59 = 2LLU;
volatile uint64_t t60 = 3886LLU;
int64_t x253 = INT64_MIN;
int32_t x256 = INT32_MIN;
static uint16_t x260 = UINT16_MAX;
static int32_t t63 = -1745398;
int16_t x261 = INT16_MAX;
static int8_t x262 = INT8_MAX;
static int32_t x264 = -617011897;
static int32_t t64 = -79855;
int64_t x267 = INT64_MAX;
int32_t x270 = -1;
int64_t t67 = 231635269989LL;
volatile int32_t t68 = -38651;
static uint16_t x281 = UINT16_MAX;
static volatile int32_t x284 = INT32_MIN;
static int32_t x286 = INT32_MAX;
volatile int64_t x287 = -168374689998407LL;
volatile int64_t x292 = -1LL;
static int64_t x306 = -8192505LL;
int16_t x307 = -1;
int8_t x308 = INT8_MIN;
static int32_t x314 = 0;
int64_t x317 = -228015LL;
int32_t x320 = 5513863;
static int32_t x321 = -1699801;
static int64_t x330 = INT64_MAX;
int64_t x333 = -90699241979330LL;
int8_t x335 = 0;
volatile int64_t t83 = 26LL;
static uint8_t x345 = 21U;
volatile int32_t x347 = 9849524;
int32_t x352 = INT32_MIN;
volatile int32_t x358 = INT32_MIN;
volatile int32_t x359 = 48924;
static volatile int64_t x366 = INT64_MIN;
int32_t t89 = -32;
int32_t x372 = -1;
volatile int64_t t90 = 1313343959260LL;
int32_t x382 = INT32_MIN;
uint8_t x384 = 51U;
volatile int16_t x391 = 1;
static int32_t t95 = INT32_MAX;
uint32_t x394 = 22908U;
int32_t t96 = -58;
uint32_t x403 = 4U;
int64_t t98 = INT64_MIN;
volatile int16_t x406 = INT16_MIN;
static volatile int8_t x407 = INT8_MAX;


void f0(void) {
	int16_t x1 = -6;
	static int64_t x2 = 1LL;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -32895540;

	t0 = (x1^((x2<x3)%x4));

	if (t0 != -5) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	volatile int64_t x7 = -1LL;
	int32_t t1 = 511574343;

	t1 = (x5^((x6<x7)%x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x10 = INT16_MIN;
	volatile int64_t x11 = INT64_MIN;
	static int32_t x12 = INT32_MAX;
	int32_t t2 = -929352274;

	t2 = (x9^((x10<x11)%x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	int8_t x14 = -1;
	int8_t x15 = 5;
	static int32_t t3 = 15;

	t3 = (x13^((x14<x15)%x16));

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = 0;
	int8_t x18 = INT8_MAX;
	int64_t x20 = INT64_MIN;

	t4 = (x17^((x18<x19)%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 1U;
	int16_t x24 = -223;
	int32_t t5 = -92226567;

	t5 = (x21^((x22<x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -46;
	static uint16_t x26 = 5304U;
	static int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 22850589LL;

	t6 = (x25^((x26<x27)%x28));

	if (t6 != -46LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	volatile uint8_t x30 = 0U;
	int64_t x31 = INT64_MIN;
	int32_t x32 = -717199;
	volatile int32_t t7 = INT32_MAX;

	t7 = (x29^((x30<x31)%x32));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = 23;
	volatile int8_t x35 = 32;
	int64_t x36 = INT64_MIN;
	static volatile int64_t t8 = 24032059108LL;

	t8 = (x33^((x34<x35)%x36));

	if (t8 != -127LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	static volatile int8_t x40 = -26;
	int32_t t9 = INT32_MIN;

	t9 = (x37^((x38<x39)%x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MIN;
	uint16_t x44 = UINT16_MAX;
	static volatile int32_t t10 = 758962051;

	t10 = (x41^((x42<x43)%x44));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 12;
	static uint64_t x46 = 136304696059LLU;
	uint16_t x47 = 175U;
	volatile int32_t t11 = -19;

	t11 = (x45^((x46<x47)%x48));

	if (t11 != 12) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int64_t x50 = INT64_MIN;
	static int32_t x51 = INT32_MAX;
	volatile int16_t x52 = 1;
	int32_t t12 = 4757534;

	t12 = (x49^((x50<x51)%x52));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x54 = 0;
	int64_t x55 = INT64_MIN;
	int32_t x56 = -1;
	int64_t t13 = 1090136556879619LL;

	t13 = (x53^((x54<x55)%x56));

	if (t13 != -2094531471283098LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = -1LL;
	static int64_t x59 = -96801658671710LL;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x57^((x58<x59)%x60));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 62U;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	static uint8_t x64 = 13U;

	t15 = (x61^((x62<x63)%x64));

	if (t15 != 63) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -12;
	int8_t x66 = -1;
	int16_t x67 = -12456;
	int16_t x68 = INT16_MAX;
	int32_t t16 = 5683;

	t16 = (x65^((x66<x67)%x68));

	if (t16 != -12) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 1U;
	static int8_t x70 = INT8_MAX;
	static uint16_t x71 = 9U;

	t17 = (x69^((x70<x71)%x72));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	static volatile int32_t x74 = -15;
	uint64_t x75 = UINT64_MAX;
	uint32_t t18 = 237013U;

	t18 = (x73^((x74<x75)%x76));

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MAX;
	volatile int32_t t19 = -157601396;

	t19 = (x77^((x78<x79)%x80));

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x83 = INT16_MIN;
	int32_t t20 = 523567;

	t20 = (x81^((x82<x83)%x84));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	int8_t x88 = -1;
	int32_t t21 = -1;

	t21 = (x85^((x86<x87)%x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	uint32_t x90 = 3293542U;
	volatile int8_t x91 = 26;
	uint32_t x92 = 169U;
	volatile uint32_t t22 = 15923237U;

	t22 = (x89^((x90<x91)%x92));

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -56LL;
	int16_t x94 = INT16_MAX;
	int64_t x95 = INT64_MAX;
	volatile int64_t t23 = 0LL;

	t23 = (x93^((x94<x95)%x96));

	if (t23 != -55LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = INT32_MAX;
	int16_t x100 = -2396;
	static int32_t t24 = INT32_MIN;

	t24 = (x97^((x98<x99)%x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MAX;
	static int32_t x103 = -1834688;
	uint8_t x104 = 63U;
	uint32_t t25 = UINT32_MAX;

	t25 = (x101^((x102<x103)%x104));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 6LLU;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = -641;
	uint32_t x108 = 165U;
	uint64_t t26 = 2390460557353960858LLU;

	t26 = (x105^((x106<x107)%x108));

	if (t26 != 6LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -17682;
	volatile int32_t x110 = INT32_MIN;
	uint64_t t27 = 88128643181132LLU;

	t27 = (x109^((x110<x111)%x112));

	if (t27 != 18446744073709533935LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint32_t x114 = 53354106U;
	volatile int64_t x115 = INT64_MIN;
	uint32_t x116 = 129719U;
	uint32_t t28 = 2U;

	t28 = (x113^((x114<x115)%x116));

	if (t28 != 4294934528U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 0;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 2452234821LLU;
	uint64_t t29 = 63670053838LLU;

	t29 = (x117^((x118<x119)%x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	int32_t t30 = 18124008;

	t30 = (x121^((x122<x123)%x124));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	int32_t x126 = INT32_MIN;
	int64_t x128 = INT64_MIN;

	t31 = (x125^((x126<x127)%x128));

	if (t31 != 2147483646LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static int8_t x130 = INT8_MIN;
	int8_t x131 = -1;
	int64_t x132 = 28312820LL;

	t32 = (x129^((x130<x131)%x132));

	if (t32 != -32767LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int8_t x134 = -1;
	uint64_t x135 = 232416364622668LLU;
	int64_t x136 = INT64_MIN;
	static volatile int64_t t33 = 7LL;

	t33 = (x133^((x134<x135)%x136));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	int64_t x139 = -1LL;
	int32_t x140 = 19100;
	volatile int32_t t34 = -174593188;

	t34 = (x137^((x138<x139)%x140));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = 475558972U;
	uint16_t x144 = 9U;
	static volatile int32_t t35 = 42895;

	t35 = (x141^((x142<x143)%x144));

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 81U;
	int16_t x146 = INT16_MIN;
	uint32_t x148 = 6479073U;
	volatile uint32_t t36 = 742U;

	t36 = (x145^((x146<x147)%x148));

	if (t36 != 81U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MIN;
	volatile int64_t x150 = -1LL;
	int8_t x152 = 1;
	volatile int32_t t37 = 1713;

	t37 = (x149^((x150<x151)%x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = INT16_MAX;
	static uint64_t x155 = UINT64_MAX;
	uint8_t x156 = UINT8_MAX;

	t38 = (x153^((x154<x155)%x156));

	if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = UINT16_MAX;
	static int8_t x158 = 1;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = -6;
	int32_t t39 = -12820926;

	t39 = (x157^((x158<x159)%x160));

	if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1343254394LL;
	int8_t x162 = INT8_MIN;
	static int16_t x163 = 0;
	int64_t x164 = 1057540167LL;
	volatile int64_t t40 = -7248551441450LL;

	t40 = (x161^((x162<x163)%x164));

	if (t40 != -1343254393LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	int8_t x167 = -1;
	static int32_t t41 = 514280932;

	t41 = (x165^((x166<x167)%x168));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -1;
	volatile int32_t x170 = -1;
	volatile uint32_t x171 = 16189U;
	static int16_t x172 = INT16_MIN;
	int32_t t42 = -30002841;

	t42 = (x169^((x170<x171)%x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -270;
	int8_t x175 = INT8_MAX;
	int32_t x176 = -7;

	t43 = (x173^((x174<x175)%x176));

	if (t43 != -269) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 7385769U;
	uint16_t x178 = 17853U;
	int16_t x179 = 1668;
	static int16_t x180 = 31;
	uint32_t t44 = 3U;

	t44 = (x177^((x178<x179)%x180));

	if (t44 != 7385769U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	int16_t x182 = 8;
	volatile int16_t x183 = INT16_MAX;
	volatile int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 531187930;

	t45 = (x181^((x182<x183)%x184));

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x186 = 831322;
	int8_t x187 = 0;
	volatile uint32_t x188 = 1578U;
	volatile uint32_t t46 = 1074545U;

	t46 = (x185^((x186<x187)%x188));

	if (t46 != 65535U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 726;
	int32_t x190 = 15;
	int32_t x191 = 4671482;

	t47 = (x189^((x190<x191)%x192));

	if (t47 != 727) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static volatile int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	volatile int64_t t48 = INT64_MIN;

	t48 = (x193^((x194<x195)%x196));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	static uint32_t x198 = 9U;
	volatile uint8_t x199 = 8U;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x197^((x198<x199)%x200));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static int16_t x202 = INT16_MAX;
	uint32_t x204 = 191U;
	uint32_t t50 = 217396U;

	t50 = (x201^((x202<x203)%x204));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x205 = 5363;
	static uint16_t x206 = 1U;
	int32_t x207 = INT32_MIN;
	static volatile int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 1;

	t51 = (x205^((x206<x207)%x208));

	if (t51 != 5363) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = 5516U;
	int64_t x214 = -1LL;
	int8_t x215 = 0;
	static int16_t x216 = -1;

	t52 = (x213^((x214<x215)%x216));

	if (t52 != 5516) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x218 = INT16_MAX;
	int16_t x219 = -1;
	int64_t x220 = -3LL;
	volatile int64_t t53 = 23929022834970LL;

	t53 = (x217^((x218<x219)%x220));

	if (t53 != 817497LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = -1LL;
	int32_t x222 = INT32_MAX;
	static volatile int8_t x223 = 2;
	volatile int16_t x224 = -11153;
	int64_t t54 = 689731840092725LL;

	t54 = (x221^((x222<x223)%x224));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = 468310LL;
	int32_t x227 = 49;
	int64_t x228 = -1LL;
	int64_t t55 = -3785491646LL;

	t55 = (x225^((x226<x227)%x228));

	if (t55 != 468310LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x229 = 57LLU;
	static volatile int32_t x230 = INT32_MIN;
	volatile uint8_t x231 = UINT8_MAX;
	int64_t x232 = 450891LL;

	t56 = (x229^((x230<x231)%x232));

	if (t56 != 56LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MAX;
	int8_t x234 = 0;
	static int32_t x235 = 376430;
	int64_t x236 = INT64_MIN;
	int64_t t57 = -1858182236779816LL;

	t57 = (x233^((x234<x235)%x236));

	if (t57 != 126LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MAX;
	uint16_t x238 = UINT16_MAX;
	int16_t x239 = INT16_MAX;
	int32_t x240 = -7;

	t58 = (x237^((x238<x239)%x240));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MIN;
	uint32_t x242 = 652378239U;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 220590070919697188LLU;

	t59 = (x241^((x242<x243)%x244));

	if (t59 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 37U;
	uint64_t x247 = 7932405568848LLU;
	int32_t x248 = -64986;

	t60 = (x245^((x246<x247)%x248));

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 285U;
	static int64_t x250 = -1LL;
	uint32_t x251 = 8386U;
	static uint64_t x252 = 28240LLU;
	uint64_t t61 = 0LLU;

	t61 = (x249^((x250<x251)%x252));

	if (t61 != 284LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = INT16_MAX;
	static int64_t x255 = -3513418548002504LL;
	static int64_t t62 = INT64_MIN;

	t62 = (x253^((x254<x255)%x256));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = 1643708;
	volatile uint64_t x258 = 108839LLU;
	int8_t x259 = -7;

	t63 = (x257^((x258<x259)%x260));

	if (t63 != 1643709) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x263 = 1U;

	t64 = (x261^((x262<x263)%x264));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MAX;
	int32_t x268 = 426577;
	int32_t t65 = -21925771;

	t65 = (x265^((x266<x267)%x268));

	if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 7047823201LLU;
	volatile uint64_t t66 = 331575046852545LLU;

	t66 = (x269^((x270<x271)%x272));

	if (t66 != 255LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -1;
	static int32_t x274 = -1;
	static int8_t x275 = INT8_MIN;
	volatile int64_t x276 = -1LL;

	t67 = (x273^((x274<x275)%x276));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int32_t x278 = INT32_MIN;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MAX;

	t68 = (x277^((x278<x279)%x280));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x282 = -1730153;
	int8_t x283 = -3;
	volatile int32_t t69 = -26667114;

	t69 = (x281^((x282<x283)%x284));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = INT8_MAX;
	static uint16_t x288 = 2097U;
	int32_t t70 = 154576722;

	t70 = (x285^((x286<x287)%x288));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = 1;
	int64_t x290 = -1LL;
	uint16_t x291 = UINT16_MAX;
	volatile int64_t t71 = -1387927LL;

	t71 = (x289^((x290<x291)%x292));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = 683U;
	int16_t x294 = -1;
	int16_t x295 = -1;
	volatile int32_t x296 = 2680;
	volatile uint32_t t72 = 3U;

	t72 = (x293^((x294<x295)%x296));

	if (t72 != 683U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MIN;
	volatile uint32_t x299 = 453U;
	volatile int16_t x300 = INT16_MIN;
	volatile int64_t t73 = -7759354519LL;

	t73 = (x297^((x298<x299)%x300));

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = INT16_MAX;
	volatile int64_t x302 = INT64_MIN;
	uint32_t x303 = 3890029U;
	int8_t x304 = INT8_MAX;
	volatile int32_t t74 = -203993815;

	t74 = (x301^((x302<x303)%x304));

	if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = -1LL;
	int64_t t75 = 11458LL;

	t75 = (x305^((x306<x307)%x308));

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x309 = 3U;
	uint64_t x310 = 793415926LLU;
	uint32_t x311 = 17469666U;
	int64_t x312 = INT64_MIN;
	static int64_t t76 = 5431555305LL;

	t76 = (x309^((x310<x311)%x312));

	if (t76 != 3LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 3994072U;
	int32_t x315 = -33851;
	int32_t x316 = -279;
	volatile uint32_t t77 = 192804U;

	t77 = (x313^((x314<x315)%x316));

	if (t77 != 3994072U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x318 = 12526292964LLU;
	int64_t x319 = INT64_MIN;
	volatile int64_t t78 = 54142280230773029LL;

	t78 = (x317^((x318<x319)%x320));

	if (t78 != -228016LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x322 = -1LL;
	volatile int32_t x323 = -1;
	int16_t x324 = INT16_MAX;
	int32_t t79 = -223;

	t79 = (x321^((x322<x323)%x324));

	if (t79 != -1699801) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x325 = 0;
	static int16_t x326 = 207;
	int8_t x327 = 0;
	uint8_t x328 = 96U;
	int32_t t80 = 100;

	t80 = (x325^((x326<x327)%x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = INT16_MAX;
	static int32_t x331 = -51;
	volatile int64_t x332 = INT64_MIN;
	int64_t t81 = 6708975005312LL;

	t81 = (x329^((x330<x331)%x332));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x334 = 67U;
	int64_t x336 = INT64_MIN;
	int64_t t82 = -1063543633411185426LL;

	t82 = (x333^((x334<x335)%x336));

	if (t82 != -90699241979330LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x338 = 927323085420LLU;
	uint16_t x339 = 3U;
	int64_t x340 = INT64_MAX;

	t83 = (x337^((x338<x339)%x340));

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = 38363;
	int16_t x342 = INT16_MIN;
	uint32_t x343 = 2574485U;
	uint64_t x344 = 60849734503LLU;
	static uint64_t t84 = 3871932076LLU;

	t84 = (x341^((x342<x343)%x344));

	if (t84 != 38363LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x346 = -460307LL;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t85 = 7611;

	t85 = (x345^((x346<x347)%x348));

	if (t85 != 20) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x350 = 541152746LLU;
	int16_t x351 = -245;
	volatile int32_t t86 = 0;

	t86 = (x349^((x350<x351)%x352));

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 1U;
	int16_t x360 = INT16_MAX;
	int32_t t87 = 50208579;

	t87 = (x357^((x358<x359)%x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = 16852108913822LL;
	int8_t x362 = INT8_MAX;
	int8_t x363 = 1;
	int16_t x364 = -925;
	volatile int64_t t88 = -135070LL;

	t88 = (x361^((x362<x363)%x364));

	if (t88 != 16852108913822LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = 0U;
	int16_t x367 = 103;
	int16_t x368 = -32;

	t89 = (x365^((x366<x367)%x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x369 = -1LL;
	int32_t x370 = 12;
	int64_t x371 = INT64_MIN;

	t90 = (x369^((x370<x371)%x372));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x373 = -2;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t91 = -4029306487417365735LL;

	t91 = (x373^((x374<x375)%x376));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 3273023U;
	static volatile uint8_t x378 = 0U;
	volatile int64_t x379 = 492122342584LL;
	static int8_t x380 = INT8_MAX;
	static uint32_t t92 = 381U;

	t92 = (x377^((x378<x379)%x380));

	if (t92 != 3273022U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x381 = INT64_MIN;
	int32_t x383 = INT32_MAX;
	volatile int64_t t93 = 322LL;

	t93 = (x381^((x382<x383)%x384));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 0U;
	static uint32_t x386 = 35U;
	int8_t x387 = INT8_MIN;
	static volatile uint8_t x388 = UINT8_MAX;
	int32_t t94 = 7161762;

	t94 = (x385^((x386<x387)%x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x389 = INT32_MAX;
	static int16_t x390 = INT16_MAX;
	uint8_t x392 = 1U;

	t95 = (x389^((x390<x391)%x392));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MAX;
	volatile int8_t x395 = -1;
	int32_t x396 = INT32_MIN;

	t96 = (x393^((x394<x395)%x396));

	if (t96 != 2147483646) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MIN;
	static int32_t x398 = 2358459;
	static volatile uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t97 = INT32_MIN;

	t97 = (x397^((x398<x399)%x400));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MIN;
	volatile int32_t x404 = INT32_MIN;

	t98 = (x401^((x402<x403)%x404));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MAX;
	volatile int16_t x408 = -5;
	volatile int32_t t99 = -31;

	t99 = (x405^((x406<x407)%x408));

	if (t99 != 126) { NG(); } else { ; }
	
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

