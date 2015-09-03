#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -217348608;
static volatile int64_t x10 = INT64_MIN;
int8_t x11 = -3;
static volatile int16_t x19 = INT16_MAX;
uint16_t x28 = 54U;
volatile int32_t x29 = -287;
static int64_t x34 = INT64_MIN;
static int64_t x38 = -1LL;
volatile int64_t t9 = -31177598094080782LL;
int8_t x41 = -1;
static int64_t x52 = -939647291151748725LL;
uint32_t x56 = UINT32_MAX;
static int64_t x59 = INT64_MIN;
int64_t x62 = -77412LL;
static volatile int64_t x64 = INT64_MIN;
int32_t x69 = INT32_MIN;
int16_t x73 = 4;
volatile int64_t x74 = INT64_MAX;
static uint32_t x77 = 274117810U;
uint32_t x79 = 416572U;
int32_t x83 = INT32_MAX;
int8_t x84 = INT8_MIN;
int32_t t19 = 391923;
int64_t x91 = -1LL;
uint16_t x92 = UINT16_MAX;
volatile uint64_t t22 = 39996759397LLU;
int32_t x97 = INT32_MIN;
int64_t x99 = 1LL;
static volatile uint64_t t24 = 3013698468478LLU;
volatile uint16_t x112 = 3684U;
int64_t x123 = 91624LL;
static int64_t x126 = INT64_MIN;
volatile int64_t x128 = INT64_MAX;
static int16_t x129 = INT16_MIN;
uint8_t x136 = UINT8_MAX;
static uint32_t x138 = 794U;
volatile uint64_t x140 = 376LLU;
uint64_t x149 = 89329597724173LLU;
int8_t x155 = INT8_MAX;
uint16_t x157 = 5387U;
uint64_t x160 = 14734LLU;
uint64_t x181 = 1697LLU;
int16_t x193 = INT16_MIN;
static uint64_t x208 = UINT64_MAX;
int32_t x216 = INT32_MAX;
int64_t x221 = 5949766512291LL;
int8_t x227 = INT8_MAX;
static uint16_t x235 = 1U;
static int16_t x236 = INT16_MIN;
volatile int32_t x245 = INT32_MIN;
volatile uint64_t t56 = 1423828LLU;
uint64_t x261 = 637290149212936LLU;
int32_t x262 = 59412832;
int16_t x265 = INT16_MIN;
static int32_t x267 = 33223301;
int8_t x268 = 30;
int32_t t60 = -97632068;
int64_t x281 = 267806LL;
static int64_t x289 = 2578559606LL;
int32_t x299 = INT32_MAX;
int32_t x303 = -927839676;
int8_t x312 = INT8_MIN;
int64_t x316 = -176435LL;
int32_t x317 = INT32_MIN;
uint8_t x320 = 37U;
int8_t x322 = -38;
static int16_t x328 = 2;
int64_t x331 = INT64_MAX;
static volatile uint8_t x335 = UINT8_MAX;
volatile int64_t t75 = -246508068979943906LL;
uint64_t t76 = 12424LLU;
uint16_t x355 = 39U;
volatile int8_t x357 = INT8_MAX;
static volatile uint64_t t80 = 9264LLU;
int16_t x363 = INT16_MAX;
uint8_t x372 = UINT8_MAX;
int64_t x380 = 176077LL;
uint16_t x386 = 15316U;
volatile uint32_t x387 = UINT32_MAX;
volatile uint64_t t86 = 12358236226LLU;
static volatile int8_t x389 = INT8_MAX;
int8_t x399 = -1;
int8_t x415 = INT8_MIN;
int32_t t92 = 465107188;
volatile int64_t t93 = -12LL;
volatile uint16_t x425 = 5U;
uint32_t t96 = 27512U;
int64_t x434 = -57LL;
volatile int64_t t97 = -5789223026LL;
static int64_t x442 = -1LL;
static uint32_t x443 = 17339684U;
int32_t x448 = INT32_MAX;


void f0(void) {
	uint8_t x1 = 3U;
	volatile uint16_t x2 = 234U;
	uint16_t x3 = 2U;
	volatile uint8_t x4 = 1U;

	t0 = ((x1^(x2%x3))-x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = -1LL;
	volatile uint64_t t1 = 3809620987496349854LLU;

	t1 = ((x5^(x6%x7))-x8);

	if (t1 != 32513LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static int8_t x12 = INT8_MAX;
	int64_t t2 = 1132728LL;

	t2 = ((x9^(x10%x11))-x12);

	if (t2 != -126LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = 0;
	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = 73U;
	int64_t t3 = 5102578564LL;

	t3 = ((x13^(x14%x15))-x16);

	if (t3 != -32841LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -21409605159LL;
	volatile int32_t x18 = INT32_MIN;
	volatile uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t4 = 200135528427234LLU;

	t4 = ((x17^(x18%x19))-x20);

	if (t4 != 21409605160LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -428;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = 1978U;
	int64_t x24 = -35709307398160LL;
	int64_t t5 = -2020LL;

	t5 = ((x21^(x22%x23))-x24);

	if (t5 != 35709307399684LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int16_t x26 = -1;
	uint32_t x27 = 50296U;
	volatile uint32_t t6 = 21670441U;

	t6 = ((x25^(x26%x27))-x28);

	if (t6 != 4294926274U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MAX;
	int32_t x32 = -1;
	volatile int64_t t7 = -245077871069804LL;

	t7 = ((x29^(x30%x31))-x32);

	if (t7 != -286LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	volatile int64_t t8 = 3LL;

	t8 = ((x33^(x34%x35))-x36);

	if (t8 != 32640LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static int32_t x39 = INT32_MAX;
	volatile int16_t x40 = -1;

	t9 = ((x37^(x38%x39))-x40);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x42 = 13U;
	volatile int64_t x43 = -114682439734082LL;
	int16_t x44 = INT16_MAX;
	volatile int64_t t10 = -1217LL;

	t10 = ((x41^(x42%x43))-x44);

	if (t10 != -32781LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x49 = 3781U;
	int64_t x50 = INT64_MIN;
	static uint32_t x51 = 509672U;
	int64_t t11 = 4325LL;

	t11 = ((x49^(x50%x51))-x52);

	if (t11 != 939647291151581634LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 545316015LLU;
	int8_t x54 = INT8_MAX;
	volatile uint64_t x55 = 1LLU;
	volatile uint64_t t12 = 210030LLU;

	t12 = ((x53^(x54%x55))-x56);

	if (t12 != 18446744069959900336LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 1;
	uint8_t x58 = 1U;
	int8_t x60 = INT8_MAX;
	int64_t t13 = 13LL;

	t13 = ((x57^(x58%x59))-x60);

	if (t13 != -127LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x63 = INT64_MAX;
	volatile int64_t t14 = -2407282LL;

	t14 = ((x61^(x62%x63))-x64);

	if (t14 != 9223372036854698339LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 1529627585LLU;
	static volatile uint32_t x66 = UINT32_MAX;
	int32_t x67 = -4192501;
	uint64_t x68 = 36547657788LLU;
	volatile uint64_t t15 = 558248478LLU;

	t15 = ((x65^(x66%x67))-x68);

	if (t15 != 18446744038689913593LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = 198;
	static int32_t x71 = INT32_MIN;
	int32_t x72 = -378;
	volatile int32_t t16 = 100;

	t16 = ((x69^(x70%x71))-x72);

	if (t16 != -2147483072) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = INT32_MIN;
	int64_t t17 = 84893666206463LL;

	t17 = ((x73^(x74%x75))-x76);

	if (t17 != 2147483771LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x78 = 75U;
	int16_t x80 = INT16_MIN;
	uint32_t t18 = 3408686U;

	t18 = ((x77^(x78%x79))-x80);

	if (t18 != 274150649U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = -24973;

	t19 = ((x81^(x82%x83))-x84);

	if (t19 != 25203) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -6346;
	int64_t x86 = INT64_MAX;
	uint16_t x87 = 151U;
	int32_t x88 = -203900900;
	volatile int64_t t20 = 347LL;

	t20 = ((x85^(x86%x87))-x88);

	if (t20 != 203894549LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = 474;
	int64_t x90 = 60388LL;
	int64_t t21 = -3673456487141374LL;

	t21 = ((x89^(x90%x91))-x92);

	if (t21 != -65061LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 42;
	int8_t x94 = INT8_MIN;
	volatile uint64_t x95 = 2892611568035949383LLU;
	int32_t x96 = -1;

	t22 = ((x93^(x94%x95))-x96);

	if (t22 != 1091074665493855229LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = -1;
	int32_t x100 = INT32_MAX;
	volatile int64_t t23 = -2LL;

	t23 = ((x97^(x98%x99))-x100);

	if (t23 != -4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = -1LL;
	volatile int16_t x102 = 3861;
	static uint64_t x103 = 1650284LLU;
	uint16_t x104 = 37U;

	t24 = ((x101^(x102%x103))-x104);

	if (t24 != 18446744073709547717LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = 19U;
	int16_t x108 = INT16_MIN;
	volatile uint32_t t25 = 1234U;

	t25 = ((x105^(x106%x107))-x108);

	if (t25 != 32643U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = 5649157705368600LLU;
	uint8_t x110 = UINT8_MAX;
	volatile uint8_t x111 = 29U;
	volatile uint64_t t26 = 0LLU;

	t26 = ((x109^(x110%x111))-x112);

	if (t26 != 5649157705364907LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = 301LLU;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 1U;
	volatile int16_t x120 = INT16_MAX;
	uint64_t t27 = 214386006795449338LLU;

	t27 = ((x117^(x118%x119))-x120);

	if (t27 != 18446744073709519150LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = 576252LL;
	static int16_t x122 = -71;
	uint32_t x124 = UINT32_MAX;
	static volatile int64_t t28 = -126765637675717LL;

	t28 = ((x121^(x122%x123))-x124);

	if (t28 != -4295543482LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x125 = UINT8_MAX;
	int32_t x127 = INT32_MIN;
	volatile int64_t t29 = 1LL;

	t29 = ((x125^(x126%x127))-x128);

	if (t29 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = 1;
	uint32_t x131 = 964992U;
	int32_t x132 = 370021;
	uint32_t t30 = 1077602525U;

	t30 = ((x129^(x130%x131))-x132);

	if (t30 != 4294564508U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 117U;
	int8_t x134 = INT8_MIN;
	volatile int64_t x135 = INT64_MIN;
	int64_t t31 = 4646737105169LL;

	t31 = ((x133^(x134%x135))-x136);

	if (t31 != -266LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	int16_t x139 = -4398;
	volatile uint64_t t32 = 14906LLU;

	t32 = ((x137^(x138%x139))-x140);

	if (t32 != 4294966050LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = 1160;
	int16_t x142 = 3;
	volatile uint8_t x143 = 17U;
	static volatile uint32_t x144 = 0U;
	volatile uint32_t t33 = 573U;

	t33 = ((x141^(x142%x143))-x144);

	if (t33 != 1163U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x150 = 4043906173730LLU;
	volatile uint32_t x151 = 40U;
	static int32_t x152 = 239424437;
	volatile uint64_t t34 = 51635036055742LLU;

	t34 = ((x149^(x150%x151))-x152);

	if (t34 != 89329358299730LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x153 = -438437174;
	uint16_t x154 = 5197U;
	volatile uint8_t x156 = 4U;
	volatile int32_t t35 = 4662695;

	t35 = ((x153^(x154%x155))-x156);

	if (t35 != -438437189) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x158 = 1057LLU;
	uint32_t x159 = UINT32_MAX;
	uint64_t t36 = 71030920088207726LLU;

	t36 = ((x157^(x158%x159))-x160);

	if (t36 != 18446744073709541276LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MAX;
	static uint8_t x162 = 0U;
	int64_t x163 = INT64_MIN;
	int8_t x164 = -1;
	int64_t t37 = 783244LL;

	t37 = ((x161^(x162%x163))-x164);

	if (t37 != 32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -1LL;
	uint32_t x166 = 709U;
	uint16_t x167 = 14U;
	volatile int8_t x168 = INT8_MIN;
	volatile int64_t t38 = -1LL;

	t38 = ((x165^(x166%x167))-x168);

	if (t38 != 118LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x173 = 28U;
	uint32_t x174 = 97346319U;
	uint32_t x175 = 4U;
	int16_t x176 = 626;
	static volatile uint32_t t39 = 1U;

	t39 = ((x173^(x174%x175))-x176);

	if (t39 != 4294966701U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x177 = -1;
	uint8_t x178 = UINT8_MAX;
	static uint8_t x179 = 15U;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t40 = 11570285721LLU;

	t40 = ((x177^(x178%x179))-x180);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = -7;
	int16_t x183 = -1342;
	volatile int32_t x184 = INT32_MIN;
	uint64_t t41 = 1081744443431LLU;

	t41 = ((x181^(x182%x183))-x184);

	if (t41 != 2147481944LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MAX;
	static volatile int8_t x186 = -1;
	int64_t x187 = INT64_MIN;
	int8_t x188 = -24;
	volatile int64_t t42 = -1111203673944249611LL;

	t42 = ((x185^(x186%x187))-x188);

	if (t42 != -104LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = INT32_MAX;
	static int8_t x190 = -1;
	int8_t x191 = 1;
	volatile uint16_t x192 = UINT16_MAX;
	static volatile int32_t t43 = -15954842;

	t43 = ((x189^(x190%x191))-x192);

	if (t43 != 2147418112) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x194 = UINT16_MAX;
	static uint16_t x195 = 108U;
	int32_t x196 = -1;
	int32_t t44 = -4385801;

	t44 = ((x193^(x194%x195))-x196);

	if (t44 != -32680) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x197 = INT64_MAX;
	volatile uint32_t x198 = UINT32_MAX;
	static int32_t x199 = -1552;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int64_t t45 = 43LL;

	t45 = ((x197^(x198%x199))-x200);

	if (t45 != 9223372036854708721LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x205 = 6U;
	uint64_t x206 = 34835140579659LLU;
	int8_t x207 = 14;
	uint64_t t46 = 239993078510LLU;

	t46 = ((x205^(x206%x207))-x208);

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x213 = -2LL;
	static int64_t x214 = INT64_MIN;
	uint64_t x215 = 14210810LLU;
	uint64_t t47 = 1030233414151834LLU;

	t47 = ((x213^(x214%x215))-x216);

	if (t47 != 18446744071552349279LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x217 = -9160;
	int8_t x218 = -1;
	volatile uint64_t x219 = 1516981895674481LLU;
	volatile uint8_t x220 = 35U;
	volatile uint64_t t48 = 516674011LLU;

	t48 = ((x217^(x218%x219))-x220);

	if (t48 != 18446499851401679908LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x222 = -858;
	volatile int16_t x223 = INT16_MIN;
	uint16_t x224 = 14696U;
	volatile int64_t t49 = 66577518713LL;

	t49 = ((x221^(x222%x223))-x224);

	if (t49 != -5949766526819LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 1U;
	int64_t x226 = -1LL;
	uint16_t x228 = UINT16_MAX;
	int64_t t50 = -103666742794048LL;

	t50 = ((x225^(x226%x227))-x228);

	if (t50 != -65537LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MIN;
	int64_t x231 = -1LL;
	volatile int8_t x232 = 1;
	int64_t t51 = -4134LL;

	t51 = ((x229^(x230%x231))-x232);

	if (t51 != 4294967294LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = -1;
	static int32_t x234 = -1;
	volatile int32_t t52 = 7687832;

	t52 = ((x233^(x234%x235))-x236);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = -1LL;
	static volatile int16_t x242 = INT16_MIN;
	uint32_t x243 = 175806U;
	int16_t x244 = 3;
	volatile int64_t t53 = 3237LL;

	t53 = ((x241^(x242%x243))-x244);

	if (t53 != -169758LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x246 = INT32_MIN;
	uint16_t x247 = 6396U;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t54 = 16604568U;

	t54 = ((x245^(x246%x247))-x248);

	if (t54 != 2147482585U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x249 = 21;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	int32_t x252 = -1;
	static volatile uint64_t t55 = 15465542614358LLU;

	t55 = ((x249^(x250%x251))-x252);

	if (t55 != 9223372036854775787LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = 3U;
	uint8_t x254 = 3U;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = UINT64_MAX;

	t56 = ((x253^(x254%x255))-x256);

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	uint64_t x260 = 390982587011932323LLU;
	volatile uint64_t t57 = 227117981810956424LLU;

	t57 = ((x257^(x258%x259))-x260);

	if (t57 != 18055761486697684828LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = 1610;
	uint64_t t58 = 337103LLU;

	t58 = ((x261^(x262%x263))-x264);

	if (t58 != 637290191576094LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x266 = UINT64_MAX;
	volatile uint64_t t59 = 3767510121161415LLU;

	t59 = ((x265^(x266%x267))-x268);

	if (t59 != 18446744073689193837LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -10;
	int32_t x270 = -1;
	volatile int8_t x271 = INT8_MIN;
	volatile int16_t x272 = 1;

	t60 = ((x269^(x270%x271))-x272);

	if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x277 = 1760U;
	uint8_t x278 = 59U;
	static uint64_t x279 = 13064057284943LLU;
	int16_t x280 = -8131;
	uint64_t t61 = 4309352LLU;

	t61 = ((x277^(x278%x279))-x280);

	if (t61 != 9886LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	volatile uint32_t x284 = 1770337U;
	volatile int64_t t62 = 269827387396LL;

	t62 = ((x281^(x282%x283))-x284);

	if (t62 != -1502531LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x285 = 12301LLU;
	volatile int64_t x286 = INT64_MAX;
	int8_t x287 = 1;
	int32_t x288 = -229;
	volatile uint64_t t63 = 12643158762LLU;

	t63 = ((x285^(x286%x287))-x288);

	if (t63 != 12530LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x290 = UINT16_MAX;
	int64_t x291 = -1LL;
	int64_t x292 = INT64_MAX;
	volatile int64_t t64 = -103840LL;

	t64 = ((x289^(x290%x291))-x292);

	if (t64 != -9223372034276216201LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = 193479;
	int64_t x294 = -10LL;
	uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 7U;
	volatile int64_t t65 = -5370LL;

	t65 = ((x293^(x294%x295))-x296);

	if (t65 != -193494LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x297 = 1234346262144603LLU;
	static volatile int16_t x298 = 3436;
	uint64_t x300 = UINT64_MAX;
	uint64_t t66 = 48480929271LLU;

	t66 = ((x297^(x298%x299))-x300);

	if (t66 != 1234346262145848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 74136819LL;
	uint32_t x302 = UINT32_MAX;
	uint64_t x304 = 62660024LLU;
	volatile uint64_t t67 = 97232423054882LLU;

	t67 = ((x301^(x302%x303))-x304);

	if (t67 != 795503504LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	volatile int64_t t68 = 6568836683LL;

	t68 = ((x309^(x310%x311))-x312);

	if (t68 != -2147483520LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x313 = 27U;
	volatile int16_t x314 = -1;
	volatile int16_t x315 = INT16_MIN;
	volatile int64_t t69 = -124732711725LL;

	t69 = ((x313^(x314%x315))-x316);

	if (t69 != 176407LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x318 = UINT16_MAX;
	uint16_t x319 = 1403U;
	volatile int32_t t70 = -836326;

	t70 = ((x317^(x318%x319))-x320);

	if (t70 != -2147482688) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = -1;
	int64_t x323 = 5430029LL;
	volatile uint64_t x324 = UINT64_MAX;
	uint64_t t71 = 3702LLU;

	t71 = ((x321^(x322%x323))-x324);

	if (t71 != 38LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x325 = -9684730329099LL;
	int32_t x326 = INT32_MAX;
	uint8_t x327 = 7U;
	int64_t t72 = 1743398LL;

	t72 = ((x325^(x326%x327))-x328);

	if (t72 != -9684730329102LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 91U;
	volatile uint64_t x332 = UINT64_MAX;
	uint64_t t73 = 0LLU;

	t73 = ((x329^(x330%x331))-x332);

	if (t73 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x333 = 4U;
	int16_t x334 = INT16_MAX;
	static int32_t x336 = INT32_MAX;
	int32_t t74 = -3512604;

	t74 = ((x333^(x334%x335))-x336);

	if (t74 != -2147483524) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = 4727;
	uint8_t x338 = 0U;
	volatile int64_t x339 = -1LL;
	uint16_t x340 = 7171U;

	t75 = ((x337^(x338%x339))-x340);

	if (t75 != -2444LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 483U;
	volatile uint64_t x342 = 937339778696855LLU;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = 1;

	t76 = ((x341^(x342%x343))-x344);

	if (t76 != 937339778697075LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MAX;
	static volatile int64_t x346 = -5LL;
	uint32_t x347 = 94U;
	uint32_t x348 = 159526914U;
	volatile int64_t t77 = -1061999062LL;

	t77 = ((x345^(x346%x347))-x348);

	if (t77 != -159559678LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x349 = 2686107287978LLU;
	uint16_t x350 = 70U;
	int64_t x351 = -133705944287LL;
	int16_t x352 = INT16_MIN;
	static uint64_t t78 = 73924446056361LLU;

	t78 = ((x349^(x350%x351))-x352);

	if (t78 != 2686107320812LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x353 = INT8_MIN;
	volatile int64_t x354 = INT64_MAX;
	static uint64_t x356 = 54LLU;
	volatile uint64_t t79 = 304520171LLU;

	t79 = ((x353^(x354%x355))-x356);

	if (t79 != 18446744073709551441LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x358 = 2695840286356954LLU;
	static volatile int16_t x359 = 13708;
	int16_t x360 = 7125;

	t80 = ((x357^(x358%x359))-x360);

	if (t80 != 18446744073709548528LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = 268608125382LL;
	int16_t x362 = INT16_MAX;
	static volatile uint8_t x364 = 124U;
	volatile int64_t t81 = 1LL;

	t81 = ((x361^(x362%x363))-x364);

	if (t81 != 268608125258LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x369 = 0U;
	int64_t x370 = 987548971686454LL;
	uint16_t x371 = UINT16_MAX;
	int64_t t82 = 5387874843LL;

	t82 = ((x369^(x370%x371))-x372);

	if (t82 != 1294LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x373 = 156U;
	static volatile int16_t x374 = 50;
	uint32_t x375 = UINT32_MAX;
	uint32_t x376 = 36992U;
	uint32_t t83 = 566U;

	t83 = ((x373^(x374%x375))-x376);

	if (t83 != 4294930478U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = 38;
	uint16_t x378 = 7473U;
	volatile int16_t x379 = INT16_MAX;
	volatile int64_t t84 = -16172874038LL;

	t84 = ((x377^(x378%x379))-x380);

	if (t84 != -168630LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = -1LL;
	uint32_t x382 = 8450U;
	volatile int32_t x383 = INT32_MAX;
	volatile int32_t x384 = 186338;
	volatile int64_t t85 = 13490408LL;

	t85 = ((x381^(x382%x383))-x384);

	if (t85 != -194789LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x388 = -1;

	t86 = ((x385^(x386%x387))-x388);

	if (t86 != 18446744073709536300LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x390 = UINT64_MAX;
	volatile int8_t x391 = INT8_MIN;
	uint64_t x392 = UINT64_MAX;
	uint64_t t87 = 176529LLU;

	t87 = ((x389^(x390%x391))-x392);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 14599224232391LLU;
	volatile uint16_t x394 = 22638U;
	static int8_t x395 = INT8_MIN;
	static uint64_t x396 = 9715612LLU;
	uint64_t t88 = 114248230LLU;

	t88 = ((x393^(x394%x395))-x396);

	if (t88 != 14599214516749LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x397 = 8U;
	int32_t x398 = INT32_MIN;
	int8_t x400 = INT8_MAX;
	int32_t t89 = -17999864;

	t89 = ((x397^(x398%x399))-x400);

	if (t89 != -119) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = 0;
	volatile int32_t x402 = INT32_MAX;
	volatile int32_t x403 = INT32_MIN;
	static int16_t x404 = 72;
	int32_t t90 = 302087;

	t90 = ((x401^(x402%x403))-x404);

	if (t90 != 2147483575) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x405 = 116371;
	int64_t x406 = -39832330LL;
	int8_t x407 = -1;
	int64_t x408 = INT64_MAX;
	volatile int64_t t91 = -531613392LL;

	t91 = ((x405^(x406%x407))-x408);

	if (t91 != -9223372036854659436LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = 168005;
	int8_t x414 = INT8_MIN;
	uint8_t x416 = 16U;

	t92 = ((x413^(x414%x415))-x416);

	if (t92 != 167989) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x417 = 3025U;
	int8_t x418 = INT8_MIN;
	int64_t x419 = -204LL;
	int32_t x420 = INT32_MAX;

	t93 = ((x417^(x418%x419))-x420);

	if (t93 != -2147486638LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x421 = INT64_MIN;
	uint16_t x422 = 73U;
	uint64_t x423 = 4940817251679821LLU;
	uint16_t x424 = 13U;
	volatile uint64_t t94 = 9LLU;

	t94 = ((x421^(x422%x423))-x424);

	if (t94 != 9223372036854775868LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x426 = -65;
	int16_t x427 = 659;
	volatile int8_t x428 = 1;
	volatile int32_t t95 = 1849;

	t95 = ((x425^(x426%x427))-x428);

	if (t95 != -71) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x429 = 12U;
	uint8_t x430 = 3U;
	static int32_t x431 = INT32_MIN;
	uint32_t x432 = 8703U;

	t96 = ((x429^(x430%x431))-x432);

	if (t96 != 4294958608U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x433 = UINT8_MAX;
	static int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;

	t97 = ((x433^(x434%x435))-x436);

	if (t97 != 2147483448LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = INT64_MIN;
	int8_t x444 = 2;
	int64_t t98 = 60238462938200072LL;

	t98 = ((x441^(x442%x443))-x444);

	if (t98 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = UINT64_MAX;
	uint64_t x446 = UINT64_MAX;
	int8_t x447 = -1;
	uint64_t t99 = 1495364283160456660LLU;

	t99 = ((x445^(x446%x447))-x448);

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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

