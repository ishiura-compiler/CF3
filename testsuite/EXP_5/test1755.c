#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
int32_t x5 = -312809765;
int32_t x8 = -1;
int64_t x15 = INT64_MIN;
int32_t t4 = INT32_MIN;
volatile int64_t x23 = -1LL;
volatile uint64_t t6 = 653026LLU;
int32_t x31 = -12917;
int64_t x32 = -1LL;
int64_t t7 = 274784853960436218LL;
volatile int8_t x40 = -7;
volatile int32_t t9 = -2816515;
static int32_t x42 = INT32_MIN;
volatile uint16_t x44 = UINT16_MAX;
static volatile uint64_t t11 = 31286468093186896LLU;
volatile uint8_t x54 = 38U;
volatile uint16_t x56 = UINT16_MAX;
int64_t x64 = -1LL;
int32_t t16 = -16154;
volatile int32_t x69 = INT32_MAX;
uint32_t x72 = 1U;
uint64_t x73 = 3459601776LLU;
volatile int8_t x74 = -1;
static volatile uint32_t x75 = 852713217U;
static volatile uint64_t t18 = 3334528891355LLU;
static volatile int16_t x78 = -1;
static int64_t x84 = 571LL;
int8_t x88 = INT8_MIN;
int64_t t21 = -2869507438075045LL;
uint64_t x94 = 3410771190663002878LLU;
volatile int64_t x101 = 206803906LL;
uint16_t x115 = 6970U;
int64_t x121 = 218238546702931066LL;
uint32_t x128 = 95U;
volatile uint32_t t30 = 88793U;
volatile int16_t x138 = INT16_MAX;
int64_t x147 = -1LL;
uint32_t x160 = 5335142U;
volatile int64_t t40 = -43883779433283LL;
static uint64_t x171 = UINT64_MAX;
static uint64_t t41 = 120622077818634157LLU;
int64_t x174 = -1LL;
static int64_t t42 = 1642476366911700LL;
int16_t x181 = INT16_MAX;
static uint16_t x184 = UINT16_MAX;
static volatile uint8_t x188 = 17U;
int32_t x193 = INT32_MAX;
int32_t x197 = INT32_MIN;
int32_t x198 = -1;
uint8_t x200 = UINT8_MAX;
volatile uint32_t t48 = 6436332U;
volatile uint32_t x201 = 95460031U;
static volatile uint32_t t49 = 12869073U;
int8_t x205 = INT8_MAX;
static int16_t x210 = INT16_MIN;
volatile int32_t x212 = 335;
int8_t x215 = INT8_MAX;
static int16_t x219 = INT16_MIN;
volatile uint64_t t53 = UINT64_MAX;
int32_t x222 = -501364;
uint32_t x224 = 41U;
static int16_t x225 = -1;
int64_t x228 = 1735595292681231864LL;
static uint32_t t56 = 0U;
int32_t x233 = -251896;
static volatile uint8_t x234 = 0U;
uint64_t x236 = 836191157620038LLU;
uint32_t x237 = 1904U;
uint16_t x238 = 1U;
uint32_t t58 = 232091614U;
int8_t x246 = INT8_MIN;
int16_t x248 = INT16_MIN;
int16_t x251 = -2710;
int16_t x252 = INT16_MIN;
int32_t t60 = -1608791;
int32_t x264 = -224;
int64_t x267 = -1LL;
int64_t x270 = INT64_MIN;
int16_t x274 = -1;
uint64_t t67 = 564874221LLU;
static int64_t x285 = 38LL;
uint64_t t70 = 8337644822LLU;
int16_t x297 = INT16_MAX;
static uint64_t x300 = 1216680529323LLU;
volatile int64_t t72 = 565801775LL;
static int32_t x314 = -1;
uint32_t t76 = 107283674U;
uint16_t x323 = 3U;
static int8_t x324 = INT8_MAX;
volatile int32_t t77 = -305880425;
int8_t x325 = INT8_MIN;
volatile int8_t x327 = -2;
static volatile int8_t x328 = 17;
volatile uint16_t x333 = UINT16_MAX;
static volatile int64_t t80 = -134685132538388LL;
int64_t x338 = INT64_MAX;
volatile int16_t x344 = 1;
uint64_t t82 = 3661922036452LLU;
static int64_t x345 = INT64_MAX;
uint8_t x350 = 21U;
int16_t x353 = -26;
volatile uint32_t x356 = 38U;
int8_t x360 = 5;
int32_t x361 = INT32_MAX;
static int32_t x362 = INT32_MIN;
int16_t x370 = -1;
int16_t x371 = INT16_MIN;
static volatile uint32_t t89 = 0U;
int8_t x378 = 2;
int8_t x379 = INT8_MIN;
int16_t x383 = -6228;
volatile int64_t t93 = -957827417760327LL;
volatile uint32_t x389 = UINT32_MAX;
uint16_t x390 = 3U;
int32_t x394 = 14524;
static int16_t x395 = -5;
int16_t x396 = INT16_MAX;
int8_t x397 = -1;
uint64_t x400 = 153383640LLU;
volatile uint64_t x412 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static volatile int8_t x2 = -1;
	uint8_t x3 = 24U;
	volatile int32_t t0 = -49276;

	t0 = (x1^((x2&x3)%x4));

	if (t0 != -104) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 1214326736698838286LLU;
	static int32_t x7 = INT32_MIN;
	uint64_t t1 = 12719030936LLU;

	t1 = (x5^((x6&x7)%x8));

	if (t1 != 17232417337607120603LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int8_t x10 = -1;
	static int32_t x11 = INT32_MIN;
	volatile int64_t x12 = -127LL;
	int64_t t2 = 240LL;

	t2 = (x9^((x10&x11)%x12));

	if (t2 != 120LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static int32_t x14 = -615;
	int32_t x16 = INT32_MIN;
	int64_t t3 = -3019751663456674LL;

	t3 = (x13^((x14&x15)%x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile int32_t x18 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 51U;

	t4 = (x17^((x18&x19)%x20));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	int16_t x22 = -3;
	int16_t x24 = INT16_MIN;
	int64_t t5 = 584977591026794682LL;

	t5 = (x21^((x22&x23)%x24));

	if (t5 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static int64_t x26 = 156108LL;
	uint16_t x27 = 0U;
	static volatile uint64_t x28 = 22445650255505572LLU;

	t6 = (x25^((x26&x27)%x28));

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int32_t x30 = -1;

	t7 = (x29^((x30&x31)%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 0;
	uint16_t x34 = UINT16_MAX;
	volatile int64_t x35 = 1720494110LL;
	int16_t x36 = -55;
	volatile int64_t t8 = 42303414470233LL;

	t8 = (x33^((x34&x35)%x36));

	if (t8 != 28LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int16_t x38 = 7276;
	uint8_t x39 = 6U;

	t9 = (x37^((x38&x39)%x40));

	if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = -1;
	static volatile int32_t x43 = -34;
	volatile int32_t t10 = -690030;

	t10 = (x41^((x42&x43)%x44));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static uint32_t x46 = 57634756U;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = 138LLU;

	t11 = (x45^((x46&x47)%x48));

	if (t11 != 105LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 7932;
	int8_t x50 = INT8_MIN;
	volatile int16_t x51 = INT16_MAX;
	int32_t x52 = 107587;
	int32_t t12 = 59383002;

	t12 = (x49^((x50&x51)%x52));

	if (t12 != 24956) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 3U;
	int8_t x55 = INT8_MIN;
	int32_t t13 = 24449;

	t13 = (x53^((x54&x55)%x56));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	uint8_t x58 = 21U;
	uint32_t x59 = UINT32_MAX;
	static uint16_t x60 = 243U;
	uint32_t t14 = 22082187U;

	t14 = (x57^((x58&x59)%x60));

	if (t14 != 4294967274U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MAX;
	volatile uint64_t x63 = 202266414501559LLU;
	static volatile uint64_t t15 = 37803597442LLU;

	t15 = (x61^((x62&x63)%x64));

	if (t15 != 9223372036854795959LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -9;
	int8_t x66 = -1;
	uint16_t x67 = 3179U;
	static uint16_t x68 = UINT16_MAX;

	t16 = (x65^((x66&x67)%x68));

	if (t16 != -3172) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 9813882;
	static int16_t x71 = -1185;
	uint32_t t17 = 2U;

	t17 = (x69^((x70&x71)%x72));

	if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x76 = -34;

	t18 = (x73^((x74&x75)%x76));

	if (t18 != 4242934385LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MAX;
	uint64_t x79 = 395364542559615LLU;
	volatile int8_t x80 = INT8_MIN;
	volatile uint64_t t19 = 5270309692LLU;

	t19 = (x77^((x78&x79)%x80));

	if (t19 != 395364542564992LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = INT64_MIN;
	static int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	volatile int64_t t20 = -98LL;

	t20 = (x81^((x82&x83)%x84));

	if (t20 != 9223372036854775587LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -2256LL;
	static int8_t x86 = -1;
	uint16_t x87 = UINT16_MAX;

	t21 = (x85^((x86&x87)%x88));

	if (t21 != -2225LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MIN;
	uint64_t t22 = 4LLU;

	t22 = (x93^((x94&x95)%x96));

	if (t22 != 15035972883046546174LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 4U;
	int8_t x98 = -46;
	uint64_t x99 = UINT64_MAX;
	volatile int32_t x100 = -1;
	uint64_t t23 = 101506230956541660LLU;

	t23 = (x97^((x98&x99)%x100));

	if (t23 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x102 = -1LL;
	uint32_t x103 = 4057097U;
	static int8_t x104 = -1;
	static int64_t t24 = -189969402982LL;

	t24 = (x101^((x102&x103)%x104));

	if (t24 != 206803906LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = -9807;
	static volatile int64_t x106 = INT64_MIN;
	uint64_t x107 = 1840LLU;
	uint32_t x108 = 513825U;
	volatile uint64_t t25 = 1933890250696LLU;

	t25 = (x105^((x106&x107)%x108));

	if (t25 != 18446744073709541809LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = UINT32_MAX;
	static int8_t x111 = 1;
	uint8_t x112 = UINT8_MAX;
	volatile uint32_t t26 = 26437091U;

	t26 = (x109^((x110&x111)%x112));

	if (t26 != 4294934529U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -1;
	uint8_t x114 = 3U;
	int16_t x116 = INT16_MAX;
	volatile int32_t t27 = -62;

	t27 = (x113^((x114&x115)%x116));

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = 0;
	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = -1;
	volatile int64_t x120 = INT64_MIN;
	volatile int64_t t28 = -235949LL;

	t28 = (x117^((x118&x119)%x120));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = 12;
	int64_t x123 = -5LL;
	uint32_t x124 = 1169001245U;
	volatile int64_t t29 = 3711491700LL;

	t29 = (x121^((x122&x123)%x124));

	if (t29 != 218238546702931058LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -8209;
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;

	t30 = (x125^((x126&x127)%x128));

	if (t30 != 4294959074U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = INT32_MAX;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = -1;
	static int32_t x132 = -1;
	int32_t t31 = INT32_MAX;

	t31 = (x129^((x130&x131)%x132));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	static int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MAX;
	int32_t t32 = INT32_MAX;

	t32 = (x133^((x134&x135)%x136));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = 171308479992306LLU;
	static uint16_t x139 = 6487U;
	volatile int16_t x140 = -1;
	volatile uint64_t t33 = 7767382509LLU;

	t33 = (x137^((x138&x139)%x140));

	if (t33 != 171308479992306LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = INT8_MIN;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	static volatile uint16_t x144 = 58U;
	static volatile int32_t t34 = -232953;

	t34 = (x141^((x142&x143)%x144));

	if (t34 != 72) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = -1LL;
	uint16_t x146 = UINT16_MAX;
	int64_t x148 = -1LL;
	int64_t t35 = -54075542990868286LL;

	t35 = (x145^((x146&x147)%x148));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	static int8_t x150 = INT8_MAX;
	volatile int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MAX;
	volatile int32_t t36 = 109;

	t36 = (x149^((x150&x151)%x152));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = -1;
	volatile int32_t x156 = INT32_MAX;
	volatile int64_t t37 = 1LL;

	t37 = (x153^((x154&x155)%x156));

	if (t37 != -255LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x157 = INT32_MIN;
	int16_t x158 = -1067;
	int16_t x159 = -1;
	volatile uint32_t t38 = 1695164U;

	t38 = (x157^((x158&x159)%x160));

	if (t38 != 2147660567U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = INT8_MIN;
	uint64_t x162 = 0LLU;
	static int32_t x163 = INT32_MAX;
	uint64_t x164 = 10448355899236964LLU;
	static volatile uint64_t t39 = 8245881174912LLU;

	t39 = (x161^((x162&x163)%x164));

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 19U;
	static int8_t x166 = INT8_MAX;
	int64_t x167 = -1LL;
	int64_t x168 = INT64_MIN;

	t40 = (x165^((x166&x167)%x168));

	if (t40 != 108LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 1;
	volatile int32_t x170 = INT32_MIN;
	static uint16_t x172 = 18U;

	t41 = (x169^((x170&x171)%x172));

	if (t41 != 15LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -15533;
	int64_t x175 = -939795663202990LL;
	volatile int32_t x176 = INT32_MIN;

	t42 = (x173^((x174&x175)%x176));

	if (t42 != 984258049LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = 14564993;
	int16_t x178 = INT16_MAX;
	static int16_t x179 = 305;
	static int32_t x180 = INT32_MAX;
	int32_t t43 = 589050;

	t43 = (x177^((x178&x179)%x180));

	if (t43 != 14565296) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x182 = 3;
	uint64_t x183 = UINT64_MAX;
	uint64_t t44 = 68LLU;

	t44 = (x181^((x182&x183)%x184));

	if (t44 != 32764LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = 769U;
	static volatile uint16_t x187 = UINT16_MAX;
	int64_t t45 = -1834LL;

	t45 = (x185^((x186&x187)%x188));

	if (t45 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MIN;
	static int32_t x190 = INT32_MAX;
	uint8_t x191 = 0U;
	int64_t x192 = INT64_MAX;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x189^((x190&x191)%x192));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x194 = -1;
	int16_t x195 = -292;
	uint64_t x196 = 1513373637000761LLU;
	volatile uint64_t t47 = 2541306973308303853LLU;

	t47 = (x193^((x194&x195)%x196));

	if (t47 != 232811539734808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x199 = 1997250U;

	t48 = (x197^((x198&x199)%x200));

	if (t48 != 2147483738U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x202 = 9U;
	volatile int16_t x203 = -1;
	int8_t x204 = -5;

	t49 = (x201^((x202&x203)%x204));

	if (t49 != 95460027U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x206 = 4511U;
	volatile int16_t x207 = INT16_MIN;
	static int8_t x208 = INT8_MIN;
	volatile uint32_t t50 = 52U;

	t50 = (x205^((x206&x207)%x208));

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	int16_t x211 = -1;
	int32_t t51 = 3677;

	t51 = (x209^((x210&x211)%x212));

	if (t51 != 272) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t52 = 1;

	t52 = (x213^((x214&x215)%x216));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x217 = -1;
	uint64_t x218 = 364LLU;
	uint16_t x220 = 2727U;

	t53 = (x217^((x218&x219)%x220));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MAX;
	volatile int32_t x223 = INT32_MIN;
	int64_t t54 = 359LL;

	t54 = (x221^((x222&x223)%x224));

	if (t54 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x226 = INT16_MIN;
	static volatile uint64_t x227 = 462312LLU;
	uint64_t t55 = 338LLU;

	t55 = (x225^((x226&x227)%x228));

	if (t55 != 18446744073709092863LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x229 = INT8_MIN;
	static int16_t x230 = -1;
	uint32_t x231 = 26276492U;
	uint8_t x232 = UINT8_MAX;

	t56 = (x229^((x230&x231)%x232));

	if (t56 != 4294967185U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x235 = INT32_MIN;
	uint64_t t57 = 103119526769567138LLU;

	t57 = (x233^((x234&x235)%x236));

	if (t57 != 18446744073709299720LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x239 = INT16_MIN;
	int16_t x240 = 14;

	t58 = (x237^((x238&x239)%x240));

	if (t58 != 1904U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 119U;
	uint64_t x247 = 95625621134888LLU;
	static volatile uint64_t t59 = 2LLU;

	t59 = (x245^((x246&x247)%x248));

	if (t59 != 95625621134967LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MIN;

	t60 = (x249^((x250&x251)%x252));

	if (t60 != -62721) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -1;
	static int32_t x258 = INT32_MIN;
	volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = UINT64_MAX;
	uint64_t t61 = 4612LLU;

	t61 = (x257^((x258&x259)%x260));

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 242;
	uint8_t x262 = 28U;
	int64_t x263 = INT64_MIN;
	static volatile int64_t t62 = 1863710LL;

	t62 = (x261^((x262&x263)%x264));

	if (t62 != 242LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	static int32_t x268 = INT32_MIN;
	uint64_t t63 = 22800054253813LLU;

	t63 = (x265^((x266&x267)%x268));

	if (t63 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = UINT32_MAX;
	volatile uint64_t x271 = 7LLU;
	int8_t x272 = -1;
	volatile uint64_t t64 = 187413911071321LLU;

	t64 = (x269^((x270&x271)%x272));

	if (t64 != 4294967295LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 15511U;
	static int32_t x275 = -7;
	uint64_t x276 = UINT64_MAX;
	uint64_t t65 = 1787LLU;

	t65 = (x273^((x274&x275)%x276));

	if (t65 != 18446744073709536110LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x277 = INT64_MAX;
	volatile int64_t x278 = -153884082031LL;
	int64_t x279 = 7107LL;
	int16_t x280 = 9696;
	static volatile int64_t t66 = -10057706854290LL;

	t66 = (x277^((x278&x279)%x280));

	if (t66 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MIN;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	uint64_t x284 = 162792LLU;

	t67 = (x281^((x282&x283)%x284));

	if (t67 != 9223372036854801767LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x286 = 30135784U;
	static uint64_t x287 = 4026LLU;
	static uint8_t x288 = 21U;
	volatile uint64_t t68 = 51578102646165LLU;

	t68 = (x285^((x286&x287)%x288));

	if (t68 != 50LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = 0LL;
	int64_t x290 = INT64_MIN;
	static int64_t x291 = INT64_MAX;
	static uint8_t x292 = UINT8_MAX;
	static int64_t t69 = -5LL;

	t69 = (x289^((x290&x291)%x292));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = INT8_MAX;
	int8_t x294 = -1;
	int16_t x295 = INT16_MAX;
	static uint64_t x296 = UINT64_MAX;

	t70 = (x293^((x294&x295)%x296));

	if (t70 != 32640LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x298 = -1LL;
	static int16_t x299 = INT16_MAX;
	static uint64_t t71 = 283LLU;

	t71 = (x297^((x298&x299)%x300));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x301 = 0U;
	int64_t x302 = 1848113277407446346LL;
	int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MIN;

	t72 = (x301^((x302&x303)%x304));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	uint8_t x307 = 53U;
	static volatile int16_t x308 = -1;
	volatile int64_t t73 = -1169338389239065274LL;

	t73 = (x305^((x306&x307)%x308));

	if (t73 != 65535LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = -1LL;
	int8_t x310 = INT8_MIN;
	int32_t x311 = 0;
	volatile int32_t x312 = INT32_MIN;
	int64_t t74 = 5513LL;

	t74 = (x309^((x310&x311)%x312));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	int16_t x315 = -1;
	volatile int64_t x316 = -1LL;
	static volatile int64_t t75 = -92LL;

	t75 = (x313^((x314&x315)%x316));

	if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = 1;
	int16_t x318 = INT16_MIN;
	uint32_t x319 = 162147511U;
	volatile int16_t x320 = INT16_MAX;

	t76 = (x317^((x318&x319)%x320));

	if (t76 != 4949U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x321 = UINT16_MAX;
	static int16_t x322 = -2958;

	t77 = (x321^((x322&x323)%x324));

	if (t77 != 65533) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x326 = INT16_MIN;
	volatile int32_t t78 = 605611280;

	t78 = (x325^((x326&x327)%x328));

	if (t78 != 119) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x329 = INT32_MIN;
	int32_t x330 = -1;
	uint8_t x331 = 21U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t79 = 233;

	t79 = (x329^((x330&x331)%x332));

	if (t79 != -2147483627) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x334 = -1;
	int64_t x335 = INT64_MIN;
	static int8_t x336 = INT8_MAX;

	t80 = (x333^((x334&x335)%x336));

	if (t80 != -65536LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 24026223311356LL;
	static int16_t x339 = 496;
	int32_t x340 = INT32_MIN;
	static volatile int64_t t81 = 425LL;

	t81 = (x337^((x338&x339)%x340));

	if (t81 != 24026223310860LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 114536433LLU;
	int64_t x343 = 34141943081LL;

	t82 = (x341^((x342&x343)%x344));

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x346 = INT32_MIN;
	int8_t x347 = -51;
	int64_t x348 = -1LL;
	static int64_t t83 = INT64_MAX;

	t83 = (x345^((x346&x347)%x348));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 1435342702LLU;
	volatile uint64_t x351 = 55350412017507136LLU;
	uint8_t x352 = 15U;
	uint64_t t84 = 114033LLU;

	t84 = (x349^((x350&x351)%x352));

	if (t84 != 1435342702LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x354 = 448436;
	int16_t x355 = -13;
	uint32_t t85 = 0U;

	t85 = (x353^((x354&x355)%x356));

	if (t85 != 4294967238U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = INT16_MIN;
	int8_t x358 = -1;
	int32_t x359 = 12124149;
	static volatile int32_t t86 = 1;

	t86 = (x357^((x358&x359)%x360));

	if (t86 != -32764) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x363 = 21U;
	volatile int16_t x364 = -1;
	int32_t t87 = INT32_MAX;

	t87 = (x361^((x362&x363)%x364));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = 1;
	int64_t x366 = INT64_MAX;
	uint8_t x367 = 3U;
	int64_t x368 = INT64_MIN;
	int64_t t88 = 1LL;

	t88 = (x365^((x366&x367)%x368));

	if (t88 != 2LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = -1;
	uint32_t x372 = 203074782U;

	t89 = (x369^((x370&x371)%x372));

	if (t89 != 4264603189U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x373 = -4;
	int64_t x374 = -1LL;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 25548;
	static int64_t t90 = -136LL;

	t90 = (x373^((x374&x375)%x376));

	if (t90 != 7216LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x377 = INT32_MAX;
	int16_t x380 = 1224;
	static int32_t t91 = INT32_MAX;

	t91 = (x377^((x378&x379)%x380));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = -13643;
	int32_t x382 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	static int32_t t92 = 0;

	t92 = (x381^((x382&x383)%x384));

	if (t92 != -13643) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x385 = 517809U;
	int64_t x386 = -1LL;
	int8_t x387 = INT8_MIN;
	static int8_t x388 = INT8_MIN;

	t93 = (x385^((x386&x387)%x388));

	if (t93 != 517809LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x391 = INT32_MAX;
	static int64_t x392 = -1LL;
	volatile int64_t t94 = -168357LL;

	t94 = (x389^((x390&x391)%x392));

	if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 2122U;
	static uint32_t t95 = 2U;

	t95 = (x393^((x394&x395)%x396));

	if (t95 != 12530U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x398 = 6402U;
	static volatile int64_t x399 = -1LL;
	volatile uint64_t t96 = 423855618LLU;

	t96 = (x397^((x398&x399)%x400));

	if (t96 != 18446744073709545213LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x401 = 106032863U;
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MAX;
	int64_t x404 = INT64_MAX;
	int64_t t97 = 244851LL;

	t97 = (x401^((x402&x403)%x404));

	if (t97 != 106032863LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x406 = 37637978;
	static uint64_t x407 = 41670673181LLU;
	int16_t x408 = INT16_MIN;
	volatile uint64_t t98 = 568745263LLU;

	t98 = (x405^((x406&x407)%x408));

	if (t98 != 18446744073675734168LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MAX;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 32U;
	uint64_t t99 = 238LLU;

	t99 = (x409^((x410&x411)%x412));

	if (t99 != 2147483647LLU) { NG(); } else { ; }
	
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

