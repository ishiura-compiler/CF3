#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 62525882LLU;
int16_t x8 = 3;
int16_t x9 = INT16_MIN;
uint64_t t2 = 10034976407366175LLU;
int16_t x17 = INT16_MAX;
volatile int64_t x18 = -2583898757338LL;
static uint64_t x21 = 1713997LLU;
int32_t x22 = 8;
int64_t x26 = INT64_MIN;
static int64_t t6 = -717894171944LL;
volatile uint8_t x31 = 42U;
uint32_t x33 = UINT32_MAX;
int32_t x34 = INT32_MIN;
static uint8_t x36 = 6U;
uint16_t x41 = 14905U;
int16_t x47 = INT16_MAX;
int32_t x49 = -20790036;
int64_t x51 = INT64_MAX;
int64_t x57 = INT64_MAX;
int64_t x69 = INT64_MIN;
int32_t x71 = -1;
int8_t x74 = -1;
uint16_t x81 = UINT16_MAX;
int16_t x82 = 0;
volatile uint16_t x83 = 3U;
uint32_t x87 = 271570437U;
volatile int8_t x89 = -1;
int8_t x91 = INT8_MIN;
uint64_t t23 = 468253724784664LLU;
volatile uint64_t t24 = 1LLU;
uint32_t x102 = 1256628U;
static int8_t x103 = INT8_MIN;
static int32_t t26 = -2;
int64_t x125 = INT64_MIN;
int16_t x127 = -2;
int64_t x135 = INT64_MIN;
volatile int64_t t33 = -186LL;
volatile int32_t x146 = -1;
static uint8_t x152 = UINT8_MAX;
volatile uint32_t x156 = 564U;
uint32_t x161 = UINT32_MAX;
int8_t x162 = INT8_MAX;
static volatile int16_t x168 = INT16_MAX;
int8_t x179 = INT8_MAX;
int16_t x184 = INT16_MIN;
int16_t x187 = INT16_MAX;
uint16_t x191 = UINT16_MAX;
uint8_t x194 = UINT8_MAX;
uint8_t x195 = 1U;
int16_t x197 = 3208;
uint8_t x199 = 3U;
int64_t x203 = INT64_MIN;
int64_t t50 = -2375592048LL;
volatile int64_t x208 = INT64_MIN;
uint16_t x212 = 14U;
static int64_t x215 = INT64_MIN;
int16_t x218 = INT16_MIN;
int8_t x221 = INT8_MIN;
static volatile int8_t x222 = -4;
int32_t x229 = INT32_MIN;
int16_t x231 = INT16_MAX;
int64_t x235 = INT64_MIN;
int16_t x240 = INT16_MAX;
int32_t t59 = 1;
uint16_t x246 = UINT16_MAX;
int16_t x262 = 12;
int16_t x265 = -8;
static int16_t x289 = 59;
static volatile uint64_t t72 = 22037696054471LLU;
volatile uint64_t x294 = 187192843681LLU;
int32_t x295 = -47;
int64_t x298 = -1LL;
static volatile int8_t x301 = -1;
uint64_t x302 = 21207LLU;
static volatile uint64_t t75 = 165LLU;
int16_t x307 = 20;
int64_t x310 = -1LL;
volatile int64_t x312 = -1LL;
int16_t x314 = -15;
uint16_t x316 = 3U;
volatile int32_t x317 = -1;
uint32_t t79 = 63460365U;
uint64_t x323 = 3161710346366205LLU;
uint64_t x338 = 59734627LLU;
static uint8_t x344 = 120U;
int16_t x346 = INT16_MIN;
int64_t x349 = INT64_MIN;
int16_t x350 = -59;
uint16_t x354 = UINT16_MAX;
int64_t x357 = INT64_MIN;
int64_t t90 = INT64_MIN;
volatile int64_t t91 = 7689LL;
int8_t x372 = INT8_MAX;
static volatile int16_t x380 = INT16_MIN;
int8_t x386 = INT8_MIN;
static uint8_t x387 = 3U;
int32_t t96 = 13;
static int16_t x395 = INT16_MAX;
int32_t t98 = 5472593;
int16_t x397 = INT16_MIN;


void f0(void) {
	volatile uint64_t x1 = 0LLU;
	static int32_t x2 = -92610988;
	static int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = 6U;

	t0 = (((x1^x2)^x3)&x4);

	if (t0 != 4LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -166;
	int8_t x6 = 37;
	static volatile int16_t x7 = INT16_MIN;
	volatile int32_t t1 = -31527;

	t1 = (((x5^x6)^x7)&x8);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 5813LLU;
	uint16_t x11 = 3269U;
	int32_t x12 = INT32_MIN;

	t2 = (((x9^x10)^x11)&x12);

	if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 106U;
	volatile int8_t x14 = -1;
	uint32_t x15 = 23123629U;
	static uint16_t x16 = UINT16_MAX;
	volatile uint32_t t3 = 0U;

	t3 = (((x13^x14)^x15)&x16);

	if (t3 != 10552U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 231231990LLU;
	static volatile uint64_t t4 = 102222643LLU;

	t4 = (((x17^x18)^x19)&x20);

	if (t4 != 25170128LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x23 = 5;
	int64_t x24 = INT64_MAX;
	volatile uint64_t t5 = 385512271LLU;

	t5 = (((x21^x22)^x23)&x24);

	if (t5 != 1713984LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 0;
	int64_t x27 = INT64_MIN;
	static uint16_t x28 = UINT16_MAX;

	t6 = (((x25^x26)^x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile uint64_t x30 = 2933064107354417819LLU;
	volatile uint16_t x32 = 754U;
	volatile uint64_t t7 = 222LLU;

	t7 = (((x29^x30)^x31)&x32);

	if (t7 != 688LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x35 = -1;
	uint32_t t8 = 3951894U;

	t8 = (((x33^x34)^x35)&x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint16_t x38 = 16192U;
	volatile int16_t x39 = -1;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 3;

	t9 = (((x37^x38)^x39)&x40);

	if (t9 != 16192) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 5189247U;
	uint16_t x43 = 1U;
	uint32_t x44 = 730480U;
	uint32_t t10 = 6432U;

	t10 = (((x41^x42)^x43)&x44);

	if (t10 != 721984U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -465177035;
	int32_t x46 = -1029376889;
	static int16_t x48 = -1396;
	int32_t t11 = -933544;

	t11 = (((x45^x46)^x47)&x48);

	if (t11 != 652310540) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	uint64_t x52 = 103584268811462472LLU;
	static volatile uint64_t t12 = 12670159997LLU;

	t12 = (((x49^x50)^x51)&x52);

	if (t12 != 1123072LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 62U;
	uint64_t x54 = 1026LLU;
	int64_t x55 = -1LL;
	uint16_t x56 = 430U;
	volatile uint64_t t13 = 24992727739LLU;

	t13 = (((x53^x54)^x55)&x56);

	if (t13 != 386LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x58 = 9U;
	uint16_t x59 = UINT16_MAX;
	volatile int16_t x60 = 295;
	volatile int64_t t14 = 855870204LL;

	t14 = (((x57^x58)^x59)&x60);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 1988U;
	uint16_t x62 = 2486U;
	volatile int64_t x63 = -84571LL;
	int8_t x64 = -1;
	int64_t t15 = -156943143247827LL;

	t15 = (((x61^x62)^x63)&x64);

	if (t15 != -82985LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	volatile int8_t x68 = -1;
	volatile int64_t t16 = 244845068LL;

	t16 = (((x65^x66)^x67)&x68);

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x70 = 106437054625LLU;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t17 = 1228413900690777LLU;

	t17 = (((x69^x70)^x71)&x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 7U;
	volatile uint16_t x75 = 1657U;
	int16_t x76 = INT16_MIN;
	uint32_t t18 = 50U;

	t18 = (((x73^x74)^x75)&x76);

	if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -48431403;
	int32_t x78 = INT32_MIN;
	uint64_t x79 = 54668126883LLU;
	volatile int64_t x80 = 64186941281LL;
	volatile uint64_t t19 = 90776531LLU;

	t19 = (((x77^x78)^x79)&x80);

	if (t19 != 54782104672LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x84 = 0U;
	volatile int32_t t20 = 42776;

	t20 = (((x81^x82)^x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x85 = 48623158455681203LLU;
	int16_t x86 = -1;
	static int8_t x88 = INT8_MIN;
	volatile uint64_t t21 = 1694302LLU;

	t21 = (((x85^x86)^x87)&x88);

	if (t21 != 18398120914983840000LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	uint64_t x92 = 77378309139329808LLU;
	static uint64_t t22 = 1162286653LLU;

	t22 = (((x89^x90)^x91)&x92);

	if (t22 != 77378309139300368LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	int32_t x94 = -730;
	uint16_t x95 = 559U;
	volatile int32_t x96 = 6;

	t23 = (((x93^x94)^x95)&x96);

	if (t23 != 6LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	volatile int8_t x98 = INT8_MIN;
	uint64_t x99 = 198063363LLU;
	int64_t x100 = -14095LL;

	t24 = (((x97^x98)^x99)&x100);

	if (t24 != 198068353LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x104 = 17;
	volatile uint32_t t25 = 13571505U;

	t25 = (((x101^x102)^x103)&x104);

	if (t25 != 16U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 47U;
	int8_t x106 = 13;
	int16_t x107 = 167;
	int8_t x108 = -1;

	t26 = (((x105^x106)^x107)&x108);

	if (t26 != 133) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int8_t x110 = 32;
	volatile int16_t x111 = -16;
	int8_t x112 = INT8_MAX;
	static int32_t t27 = 51171;

	t27 = (((x109^x110)^x111)&x112);

	if (t27 != 47) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 382789;
	int32_t x114 = -106521;
	volatile uint8_t x115 = 1U;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 0;

	t28 = (((x113^x114)^x115)&x116);

	if (t28 != 2147190947) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 2U;
	uint16_t x118 = 1U;
	int64_t x119 = INT64_MIN;
	int32_t x120 = -1;
	volatile int64_t t29 = -2989020603766217637LL;

	t29 = (((x117^x118)^x119)&x120);

	if (t29 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = -2131138674422583LL;
	int32_t x122 = -59;
	volatile int8_t x123 = 1;
	int16_t x124 = INT16_MIN;
	int64_t t30 = -6893991865LL;

	t30 = (((x121^x122)^x123)&x124);

	if (t30 != 2131138674393088LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	volatile int8_t x128 = INT8_MAX;
	int64_t t31 = -48741773326355LL;

	t31 = (((x125^x126)^x127)&x128);

	if (t31 != 126LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x129 = UINT16_MAX;
	int8_t x130 = INT8_MIN;
	volatile uint8_t x131 = 0U;
	static int8_t x132 = INT8_MIN;
	int32_t t32 = 0;

	t32 = (((x129^x130)^x131)&x132);

	if (t32 != -65536) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 15U;
	static int8_t x134 = -1;
	int64_t x136 = -1LL;

	t33 = (((x133^x134)^x135)&x136);

	if (t33 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = UINT16_MAX;
	int64_t x138 = INT64_MIN;
	uint64_t x139 = 19160781998290LLU;
	int8_t x140 = INT8_MIN;
	static volatile uint64_t t34 = 291313929LLU;

	t34 = (((x137^x138)^x139)&x140);

	if (t34 != 9223391197636736768LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = -1LL;
	int64_t x143 = 1LL;
	static int64_t x144 = -19316998LL;
	volatile int64_t t35 = -15433471113269LL;

	t35 = (((x141^x142)^x143)&x144);

	if (t35 != 9223372036835458810LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	int8_t x147 = INT8_MIN;
	int64_t x148 = -2652LL;
	static volatile int64_t t36 = -17198994447010LL;

	t36 = (((x145^x146)^x147)&x148);

	if (t36 != 62848LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int8_t x150 = -16;
	int16_t x151 = 9554;
	static volatile uint64_t t37 = 64205LLU;

	t37 = (((x149^x150)^x151)&x152);

	if (t37 != 93LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -12508LL;
	int16_t x154 = INT16_MIN;
	int8_t x155 = 25;
	volatile int64_t t38 = 6142LL;

	t38 = (((x153^x154)^x155)&x156);

	if (t38 != 564LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 19U;
	int32_t x158 = INT32_MAX;
	uint64_t x159 = UINT64_MAX;
	static volatile int64_t x160 = -1LL;
	volatile uint64_t t39 = 7723074LLU;

	t39 = (((x157^x158)^x159)&x160);

	if (t39 != 18446744071562067987LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x163 = -1;
	int32_t x164 = -1;
	uint32_t t40 = 356U;

	t40 = (((x161^x162)^x163)&x164);

	if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int32_t x166 = -37771;
	int16_t x167 = INT16_MIN;
	int32_t t41 = -4723695;

	t41 = (((x165^x166)^x167)&x168);

	if (t41 != 5002) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 1072167415U;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MAX;
	int32_t x172 = INT32_MIN;
	volatile int64_t t42 = 7794918LL;

	t42 = (((x169^x170)^x171)&x172);

	if (t42 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	volatile int16_t x174 = INT16_MAX;
	uint32_t x175 = 516U;
	uint64_t x176 = 280852285760772LLU;
	uint64_t t43 = 25460391908LLU;

	t43 = (((x173^x174)^x175)&x176);

	if (t43 != 79308032LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	volatile uint8_t x178 = 3U;
	int32_t x180 = 56;
	static int32_t t44 = 212;

	t44 = (((x177^x178)^x179)&x180);

	if (t44 != 56) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 30463677479057265LL;
	int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	int64_t t45 = -496405170467272LL;

	t45 = (((x181^x182)^x183)&x184);

	if (t45 != 30463677479026688LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = 12752168548172522LL;
	static int64_t x188 = INT64_MAX;
	static int64_t t46 = 5LL;

	t46 = (((x185^x186)^x187)&x188);

	if (t46 != 9210619867113094421LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = 8U;
	volatile uint32_t x192 = 1984U;
	volatile uint32_t t47 = 5U;

	t47 = (((x189^x190)^x191)&x192);

	if (t47 != 1984U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int16_t x196 = INT16_MAX;
	int64_t t48 = -163312653402007LL;

	t48 = (((x193^x194)^x195)&x196);

	if (t48 != 32513LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MIN;
	volatile int64_t x200 = INT64_MIN;
	int64_t t49 = INT64_MIN;

	t49 = (((x197^x198)^x199)&x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 1195;
	volatile int8_t x202 = 6;
	static int16_t x204 = -4;

	t50 = (((x201^x202)^x203)&x204);

	if (t50 != -9223372036854774612LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	static int64_t x206 = -3LL;
	uint32_t x207 = 0U;
	volatile int64_t t51 = INT64_MIN;

	t51 = (((x205^x206)^x207)&x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 94030489LL;
	uint8_t x210 = 97U;
	uint32_t x211 = 1776U;
	volatile int64_t t52 = 216LL;

	t52 = (((x209^x210)^x211)&x212);

	if (t52 != 8LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = 1U;
	volatile int16_t x216 = 17;
	static int64_t t53 = 46LL;

	t53 = (((x213^x214)^x215)&x216);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static uint32_t x219 = UINT32_MAX;
	static int64_t x220 = 15LL;
	volatile int64_t t54 = 1LL;

	t54 = (((x217^x218)^x219)&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x223 = 3982621068LLU;
	int8_t x224 = INT8_MAX;
	volatile uint64_t t55 = 904559719LLU;

	t55 = (((x221^x222)^x223)&x224);

	if (t55 != 112LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 466384;
	static uint16_t x226 = 379U;
	uint8_t x227 = 1U;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = 109067549;

	t56 = (((x225^x226)^x227)&x228);

	if (t56 != 170) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x230 = UINT64_MAX;
	static uint32_t x232 = UINT32_MAX;
	uint64_t t57 = 7099620LLU;

	t57 = (((x229^x230)^x231)&x232);

	if (t57 != 2147450880LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	static int8_t x234 = INT8_MIN;
	volatile int16_t x236 = INT16_MIN;
	uint64_t t58 = 2823081LLU;

	t58 = (((x233^x234)^x235)&x236);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MAX;
	uint16_t x239 = 3U;

	t59 = (((x237^x238)^x239)&x240);

	if (t59 != 32515) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 70351642;
	int16_t x242 = -1;
	int32_t x243 = 352;
	uint64_t x244 = 2828440315LLU;
	volatile uint64_t t60 = 247220618730LLU;

	t60 = (((x241^x242)^x243)&x244);

	if (t60 != 2827387009LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 535871U;
	int64_t x247 = INT64_MIN;
	uint8_t x248 = UINT8_MAX;
	volatile int64_t t61 = -1500741762LL;

	t61 = (((x245^x246)^x247)&x248);

	if (t61 != 192LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	volatile int64_t x252 = 2191311570843LL;
	int64_t t62 = -1578462102364029LL;

	t62 = (((x249^x250)^x251)&x252);

	if (t62 != 2191311570843LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 75300683U;
	static volatile uint32_t x255 = 1231249404U;
	uint32_t x256 = 103U;
	uint64_t t63 = 20LLU;

	t63 = (((x253^x254)^x255)&x256);

	if (t63 != 64LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -1;
	uint16_t x259 = UINT16_MAX;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = 2865748226717LL;

	t64 = (((x257^x258)^x259)&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -1;
	int8_t x263 = INT8_MIN;
	static int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -193500591;

	t65 = (((x261^x262)^x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t66 = -66251099979LL;

	t66 = (((x265^x266)^x267)&x268);

	if (t66 != -32648LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	int64_t x272 = 203388811LL;
	volatile int64_t t67 = 21LL;

	t67 = (((x269^x270)^x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 817148336846027LLU;
	uint16_t x274 = 118U;
	int64_t x275 = -1LL;
	int32_t x276 = INT32_MIN;
	uint64_t t68 = 648457LLU;

	t68 = (((x273^x274)^x275)&x276);

	if (t68 != 18445926923969232896LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 264424U;
	volatile int32_t x278 = INT32_MAX;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;
	uint32_t t69 = 635576769U;

	t69 = (((x277^x278)^x279)&x280);

	if (t69 != 2147747991U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MAX;
	int16_t x282 = INT16_MAX;
	volatile uint32_t x283 = 6720U;
	int64_t x284 = 429997983LL;
	int64_t t70 = 0LL;

	t70 = (((x281^x282)^x283)&x284);

	if (t70 != 9600LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -5;
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MAX;
	volatile int64_t t71 = -478117041895246258LL;

	t71 = (((x285^x286)^x287)&x288);

	if (t71 != 9223372034707292283LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = 76028467088277160LLU;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MIN;

	t72 = (((x289^x290)^x291)&x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 996;
	static volatile int32_t x296 = -342745;
	uint64_t t73 = 797683970LLU;

	t73 = (((x293^x294)^x295)&x296);

	if (t73 != 18446743886516371716LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MIN;
	int32_t x299 = INT32_MAX;
	int16_t x300 = INT16_MIN;
	volatile int64_t t74 = 68548452714277LL;

	t74 = (((x297^x298)^x299)&x300);

	if (t74 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x303 = 0;
	int64_t x304 = 1327625657272LL;

	t75 = (((x301^x302)^x303)&x304);

	if (t75 != 1327625636136LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = 434U;
	int8_t x306 = INT8_MAX;
	int16_t x308 = -1938;
	int32_t t76 = -34442585;

	t76 = (((x305^x306)^x307)&x308);

	if (t76 != 72) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	uint32_t x311 = UINT32_MAX;
	static volatile int64_t t77 = 28150706LL;

	t77 = (((x309^x310)^x311)&x312);

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	static uint32_t x315 = 78728U;
	static volatile uint32_t t78 = 1719U;

	t78 = (((x313^x314)^x315)&x316);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x318 = 8693874U;
	static volatile uint8_t x319 = UINT8_MAX;
	static uint16_t x320 = 926U;

	t79 = (((x317^x318)^x319)&x320);

	if (t79 != 786U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x322 = 1U;
	uint32_t x324 = 155230193U;
	volatile uint64_t t80 = 3LLU;

	t80 = (((x321^x322)^x323)&x324);

	if (t80 != 134253808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = -1LL;
	static uint16_t x326 = 1912U;
	static int32_t x327 = -507;
	int64_t x328 = -12714365540519LL;
	static int64_t t81 = 189627141586548831LL;

	t81 = (((x325^x326)^x327)&x328);

	if (t81 != 1536LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 1;
	int64_t x330 = INT64_MIN;
	uint32_t x331 = 0U;
	uint8_t x332 = UINT8_MAX;
	static volatile int64_t t82 = -3593794LL;

	t82 = (((x329^x330)^x331)&x332);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -110;
	uint8_t x334 = 2U;
	int64_t x335 = INT64_MIN;
	int64_t x336 = -1LL;
	int64_t t83 = 50465736LL;

	t83 = (((x333^x334)^x335)&x336);

	if (t83 != 9223372036854775696LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	volatile uint16_t x339 = UINT16_MAX;
	uint16_t x340 = 4027U;
	static volatile uint64_t t84 = 84476229780LLU;

	t84 = (((x337^x338)^x339)&x340);

	if (t84 != 2595LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 2U;
	int16_t x342 = INT16_MAX;
	static volatile int16_t x343 = INT16_MIN;
	volatile int32_t t85 = 3;

	t85 = (((x341^x342)^x343)&x344);

	if (t85 != 120) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	static uint64_t x347 = 10LLU;
	uint16_t x348 = 62U;
	uint64_t t86 = 20502709LLU;

	t86 = (((x345^x346)^x347)&x348);

	if (t86 != 52LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x351 = UINT32_MAX;
	static int32_t x352 = INT32_MAX;
	volatile int64_t t87 = -77298764460349926LL;

	t87 = (((x349^x350)^x351)&x352);

	if (t87 != 58LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 98;
	static int8_t x355 = INT8_MAX;
	static int16_t x356 = INT16_MAX;
	volatile int32_t t88 = -894718917;

	t88 = (((x353^x354)^x355)&x356);

	if (t88 != 32738) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x358 = 1221031124848072454LLU;
	int16_t x359 = -42;
	int64_t x360 = INT64_MIN;
	volatile uint64_t t89 = 1564643998208LLU;

	t89 = (((x357^x358)^x359)&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 22U;
	int8_t x362 = INT8_MIN;
	static int64_t x363 = 25LL;
	volatile int64_t x364 = INT64_MIN;

	t90 = (((x361^x362)^x363)&x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	int64_t x366 = -1LL;
	int64_t x367 = -8635698623704LL;
	int8_t x368 = 1;

	t91 = (((x365^x366)^x367)&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 15;
	int8_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int32_t t92 = -32343232;

	t92 = (((x369^x370)^x371)&x372);

	if (t92 != 112) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static int32_t x374 = -525807860;
	int8_t x375 = -34;
	int8_t x376 = INT8_MAX;
	int32_t t93 = 2834130;

	t93 = (((x373^x374)^x375)&x376);

	if (t93 != 82) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MAX;
	volatile uint32_t t94 = 463U;

	t94 = (((x377^x378)^x379)&x380);

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	uint8_t x382 = UINT8_MAX;
	volatile uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = INT16_MIN;
	int64_t t95 = 6LL;

	t95 = (((x381^x382)^x383)&x384);

	if (t95 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 3U;
	int8_t x388 = 2;

	t96 = (((x385^x386)^x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	static volatile int8_t x390 = INT8_MIN;
	static uint8_t x391 = UINT8_MAX;
	uint64_t x392 = 1564387943LLU;
	static uint64_t t97 = 3652877199533362998LLU;

	t97 = (((x389^x390)^x391)&x392);

	if (t97 != 1564344320LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 3U;
	int32_t x394 = INT32_MIN;
	uint8_t x396 = UINT8_MAX;

	t98 = (((x393^x394)^x395)&x396);

	if (t98 != 252) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x398 = -1;
	uint8_t x399 = 5U;
	int32_t x400 = -40281962;
	int32_t t99 = -64673;

	t99 = (((x397^x398)^x399)&x400);

	if (t99 != 22674) { NG(); } else { ; }
	
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

