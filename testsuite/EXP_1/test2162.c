#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -678281284430400176LL;
uint64_t x5 = 175796958468LLU;
volatile uint64_t x13 = UINT64_MAX;
int64_t x16 = INT64_MAX;
int32_t x17 = INT32_MIN;
uint64_t t4 = 69471865737307961LLU;
int64_t x31 = -1198928644528LL;
int32_t x42 = INT32_MIN;
volatile int16_t x45 = -7;
volatile int32_t t11 = 0;
int32_t t12 = -1842;
static int16_t x59 = -11;
int16_t x65 = 2013;
volatile int32_t x73 = -1;
uint32_t t18 = 420162U;
volatile uint32_t t19 = 1258552U;
uint16_t x87 = UINT16_MAX;
volatile uint64_t t21 = 450519027LLU;
static int32_t x92 = -46069;
int32_t t22 = 757414;
int16_t x97 = INT16_MIN;
volatile int16_t x99 = -1;
volatile uint64_t t24 = 1094657832388LLU;
static uint8_t x104 = UINT8_MAX;
static volatile uint16_t x106 = UINT16_MAX;
volatile int32_t t26 = -1;
int8_t x110 = INT8_MIN;
volatile int8_t x111 = 2;
int16_t x114 = 853;
int16_t x116 = -1174;
uint8_t x117 = 37U;
uint32_t x122 = 14U;
volatile int64_t x128 = INT64_MIN;
static uint32_t x136 = 6U;
int64_t x144 = 331175970866665LL;
int64_t t35 = -195807372730835LL;
uint8_t x159 = 8U;
int64_t x160 = 3224725LL;
int64_t x166 = INT64_MIN;
static int32_t t41 = 4;
static volatile uint64_t t42 = 65659194082245LLU;
int16_t x191 = INT16_MAX;
uint64_t t46 = 2035373175856LLU;
int32_t x196 = -1;
uint64_t t47 = 1108464043981927LLU;
uint64_t x197 = 7445861079702LLU;
uint64_t t48 = 3715280068240331555LLU;
uint32_t x202 = UINT32_MAX;
int16_t x203 = -205;
uint32_t x204 = UINT32_MAX;
int64_t x208 = 24691124497790LL;
volatile uint64_t t51 = 2LLU;
uint32_t x226 = 15944U;
static uint8_t x231 = 8U;
uint16_t x234 = UINT16_MAX;
int32_t t57 = -887;
int8_t x237 = 6;
int16_t x242 = 12;
int8_t x247 = 28;
static int64_t x253 = INT64_MIN;
int64_t x260 = 4046LL;
volatile uint32_t x268 = 3317873U;
int64_t x274 = INT64_MIN;
uint64_t x289 = UINT64_MAX;
volatile int64_t x293 = 94335432LL;
static volatile uint64_t t72 = 17901837158806263LLU;
static volatile uint8_t x297 = 1U;
uint64_t t73 = 10466637LLU;
uint32_t x302 = 47432U;
int8_t x305 = INT8_MAX;
int32_t x312 = -1;
volatile int32_t x315 = INT32_MIN;
uint64_t x318 = 297559584LLU;
int8_t x325 = INT8_MAX;
uint16_t x329 = 2239U;
uint32_t x332 = UINT32_MAX;
static int64_t x336 = -4358LL;
int32_t x338 = INT32_MIN;
uint32_t x339 = 1498310350U;
int16_t x343 = INT16_MIN;
volatile uint64_t t84 = 2303026509LLU;
volatile uint32_t x347 = 16287209U;
uint32_t x354 = 1019016835U;
int32_t x355 = 42843;
int64_t x357 = -4805588132366LL;
int16_t x360 = 163;
volatile uint64_t t88 = 157LLU;
int32_t t91 = -18;
volatile uint64_t t92 = 25468620553365LLU;
static uint64_t x380 = 2250434LLU;
uint8_t x381 = 0U;
volatile int32_t x384 = INT32_MAX;
uint32_t x387 = 105U;
static uint8_t x400 = 63U;
volatile int64_t t98 = -85093LL;
static volatile int64_t x401 = -1LL;


void f0(void) {
	int32_t x1 = -260504;
	int64_t x2 = -573185512472407687LL;
	uint8_t x3 = UINT8_MAX;
	uint8_t x4 = 37U;

	t0 = (((x1^x2)&x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	volatile int64_t x7 = INT64_MAX;
	uint16_t x8 = UINT16_MAX;
	uint64_t t1 = 22LLU;

	t1 = (((x5^x6)&x7)/x8);

	if (t1 != 140739633189254LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 0U;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	static uint64_t t2 = 5216999277LLU;

	t2 = (((x9^x10)&x11)/x12);

	if (t2 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	volatile int16_t x15 = -20;
	volatile uint64_t t3 = 680225829LLU;

	t3 = (((x13^x14)&x15)/x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;

	t4 = (((x17^x18)&x19)/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 5U;
	static uint8_t x22 = 5U;
	uint8_t x23 = 51U;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = 18446847LL;

	t5 = (((x21^x22)&x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -6753;
	static uint64_t x26 = 181640LLU;
	volatile uint8_t x27 = UINT8_MAX;
	volatile uint64_t x28 = 266426087733635LLU;
	volatile uint64_t t6 = 557909846944080142LLU;

	t6 = (((x25^x26)&x27)/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -28308LL;
	uint8_t x30 = UINT8_MAX;
	int32_t x32 = -93669;
	int64_t t7 = -100LL;

	t7 = (((x29^x30)&x31)/x32);

	if (t7 != 12799631LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	int16_t x34 = 102;
	int32_t x35 = -71563496;
	int32_t x36 = -1;
	int32_t t8 = -165985523;

	t8 = (((x33^x34)&x35)/x36);

	if (t8 != -1816) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 17091U;
	int64_t x38 = -1LL;
	int64_t x39 = INT64_MIN;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 0LLU;

	t9 = (((x37^x38)&x39)/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 252689U;
	int16_t x43 = INT16_MIN;
	volatile int32_t x44 = INT32_MAX;
	uint32_t t10 = 560112U;

	t10 = (((x41^x42)&x43)/x44);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x46 = UINT16_MAX;
	static int32_t x47 = 1063836;
	volatile int16_t x48 = INT16_MIN;

	t11 = (((x45^x46)&x47)/x48);

	if (t11 != -32) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 17U;
	int32_t x50 = -567;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = UINT8_MAX;

	t12 = (((x49^x50)&x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	volatile uint16_t x54 = 7U;
	volatile int16_t x55 = INT16_MIN;
	uint16_t x56 = 2U;
	int64_t t13 = 646LL;

	t13 = (((x53^x54)&x55)/x56);

	if (t13 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -61;
	int32_t x58 = -11185965;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = 453;

	t14 = (((x57^x58)&x59)/x60);

	if (t14 != 43866) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 87131546LLU;
	uint64_t x62 = 31LLU;
	static uint64_t x63 = 3756748389LLU;
	static int16_t x64 = 1;
	volatile uint64_t t15 = 3890629LLU;

	t15 = (((x61^x62)&x63)/x64);

	if (t15 != 86049797LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	int32_t x68 = INT32_MIN;
	int64_t t16 = -51249892360LL;

	t16 = (((x65^x66)&x67)/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 535U;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MAX;
	int32_t x72 = -1;
	static uint32_t t17 = 31771507U;

	t17 = (((x69^x70)&x71)/x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = UINT32_MAX;
	uint16_t x75 = UINT16_MAX;
	int8_t x76 = 1;

	t18 = (((x73^x74)&x75)/x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	static uint32_t x79 = 172U;
	uint32_t x80 = 17U;

	t19 = (((x77^x78)&x79)/x80);

	if (t19 != 10U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = UINT16_MAX;
	static int16_t x82 = INT16_MIN;
	int8_t x83 = 60;
	static int16_t x84 = 8;
	static int32_t t20 = 1305;

	t20 = (((x81^x82)&x83)/x84);

	if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 3;
	static uint64_t x86 = 685392407116961LLU;
	static uint16_t x88 = UINT16_MAX;

	t21 = (((x85^x86)&x87)/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	uint16_t x90 = 314U;
	int32_t x91 = INT32_MIN;

	t22 = (((x89^x90)&x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int64_t x94 = INT64_MAX;
	uint16_t x95 = 31U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = 4932LL;

	t23 = (((x93^x94)&x95)/x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x98 = UINT64_MAX;
	int64_t x100 = 233520743922404LL;

	t24 = (((x97^x98)&x99)/x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = 750U;
	static volatile int32_t t25 = -5;

	t25 = (((x101^x102)&x103)/x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	int32_t x107 = -53767988;
	int32_t x108 = -1;

	t26 = (((x105^x106)&x107)/x108);

	if (t26 != 53805056) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MIN;
	volatile int64_t x112 = -1LL;
	int64_t t27 = 6864875940118LL;

	t27 = (((x109^x110)&x111)/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x115 = UINT8_MAX;
	volatile int32_t t28 = 422;

	t28 = (((x113^x114)&x115)/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -507;
	int8_t x119 = INT8_MIN;
	static volatile int32_t x120 = 136577;
	volatile int32_t t29 = -3254813;

	t29 = (((x117^x118)&x119)/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MAX;
	volatile int32_t x123 = -494921625;
	uint32_t x124 = 10213U;
	volatile uint32_t t30 = 8469U;

	t30 = (((x121^x122)&x123)/x124);

	if (t30 != 161809U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 4U;
	uint32_t x126 = UINT32_MAX;
	uint32_t x127 = UINT32_MAX;
	static volatile int64_t t31 = -3884401663450215072LL;

	t31 = (((x125^x126)&x127)/x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	static volatile int16_t x130 = INT16_MIN;
	uint8_t x131 = UINT8_MAX;
	int64_t x132 = 2LL;
	static volatile int64_t t32 = -869017LL;

	t32 = (((x129^x130)&x131)/x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -1;
	volatile int32_t x134 = INT32_MAX;
	uint16_t x135 = 1465U;
	static volatile uint32_t t33 = 18U;

	t33 = (((x133^x134)&x135)/x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = 0;
	uint8_t x138 = UINT8_MAX;
	int32_t x139 = -1;
	int64_t x140 = 6661501726817LL;
	int64_t t34 = 1543390838832377LL;

	t34 = (((x137^x138)&x139)/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 1U;
	int8_t x142 = INT8_MIN;
	volatile uint8_t x143 = 4U;

	t35 = (((x141^x142)&x143)/x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -2623823938010922LL;
	uint32_t x146 = 21599644U;
	int64_t x147 = INT64_MIN;
	uint8_t x148 = 61U;
	volatile int64_t t36 = 1LL;

	t36 = (((x145^x146)&x147)/x148);

	if (t36 != -151202820276307800LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x149 = 268565829696251710LLU;
	volatile int64_t x150 = -1LL;
	uint8_t x151 = 15U;
	int32_t x152 = INT32_MAX;
	uint64_t t37 = 65572185LLU;

	t37 = (((x149^x150)&x151)/x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = INT16_MIN;
	static int16_t x156 = 15514;
	int32_t t38 = -3592325;

	t38 = (((x153^x154)&x155)/x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int8_t x158 = INT8_MAX;
	int64_t t39 = -549370873324618220LL;

	t39 = (((x157^x158)&x159)/x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x165 = 215885129072LL;
	uint32_t x167 = 394503294U;
	int8_t x168 = 34;
	volatile int64_t t40 = 539953526727599LL;

	t40 = (((x165^x166)&x167)/x168);

	if (t40 != 1730232LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x170 = 1U;
	int16_t x171 = -2342;
	int32_t x172 = INT32_MIN;

	t41 = (((x169^x170)&x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 494LLU;
	int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 14770029629970772LLU;

	t42 = (((x173^x174)&x175)/x176);

	if (t42 != 1248LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = -127;
	int64_t x178 = 0LL;
	static volatile int8_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	static uint64_t t43 = 2791114085LLU;

	t43 = (((x177^x178)&x179)/x180);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	static int32_t t44 = 2646675;

	t44 = (((x181^x182)&x183)/x184);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = INT16_MIN;
	static int64_t x186 = -200681720LL;
	static int64_t x187 = 7028477701971533LL;
	uint16_t x188 = 381U;
	int64_t t45 = -568485944999LL;

	t45 = (((x185^x186)&x187)/x188);

	if (t45 != 383297LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 51U;
	volatile uint64_t x190 = 5392399298LLU;
	int16_t x192 = INT16_MIN;

	t46 = (((x189^x190)&x191)/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 23LLU;

	t47 = (((x193^x194)&x195)/x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x198 = INT16_MAX;
	int8_t x199 = INT8_MIN;
	static int8_t x200 = -1;

	t48 = (((x197^x198)&x199)/x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = INT32_MIN;
	static volatile uint32_t t49 = 256U;

	t49 = (((x201^x202)&x203)/x204);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x205 = -4235631756LL;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MAX;
	volatile int64_t t50 = 360267958533LL;

	t50 = (((x205^x206)&x207)/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x209 = 24;
	static int32_t x210 = 552018449;
	uint32_t x211 = 238809102U;
	static uint64_t x212 = 521870401148613LLU;

	t51 = (((x209^x210)&x211)/x212);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = -10375LL;
	volatile int32_t x214 = INT32_MAX;
	volatile int64_t x215 = -1LL;
	uint64_t x216 = 3232572460424011246LLU;
	uint64_t t52 = 1LLU;

	t52 = (((x213^x214)&x215)/x216);

	if (t52 != 5LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = INT64_MIN;
	static int64_t x218 = -1LL;
	volatile int32_t x219 = -16128;
	volatile int16_t x220 = INT16_MIN;
	int64_t t53 = -1082210093523LL;

	t53 = (((x217^x218)&x219)/x220);

	if (t53 != -281474976710655LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = -19;
	int64_t x223 = INT64_MAX;
	uint16_t x224 = UINT16_MAX;
	volatile int64_t t54 = 8895577LL;

	t54 = (((x221^x222)&x223)/x224);

	if (t54 != 140739635871744LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	static volatile int64_t t55 = 800207162771LL;

	t55 = (((x225^x226)&x227)/x228);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int64_t x232 = INT64_MIN;
	volatile int64_t t56 = 13312066152353877LL;

	t56 = (((x229^x230)&x231)/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x233 = -1;
	int16_t x235 = -6392;
	int32_t x236 = INT32_MIN;

	t57 = (((x233^x234)&x235)/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x238 = INT32_MIN;
	uint8_t x239 = 6U;
	int32_t x240 = INT32_MIN;
	int32_t t58 = 26612308;

	t58 = (((x237^x238)&x239)/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x241 = UINT8_MAX;
	uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MIN;
	uint64_t t59 = 9414935972820378LLU;

	t59 = (((x241^x242)&x243)/x244);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -442563613;
	uint8_t x246 = 16U;
	volatile uint32_t x248 = 2731U;
	static volatile uint32_t t60 = 458541U;

	t60 = (((x245^x246)&x247)/x248);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = 2696763;
	volatile int64_t x250 = INT64_MIN;
	uint32_t x251 = 56347571U;
	int16_t x252 = INT16_MAX;
	volatile int64_t t61 = -347151357482973LL;

	t61 = (((x249^x250)&x251)/x252);

	if (t61 != 18LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = -1;
	volatile int8_t x255 = INT8_MIN;
	volatile int64_t x256 = -1LL;
	volatile int64_t t62 = 84522697696513LL;

	t62 = (((x253^x254)&x255)/x256);

	if (t62 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = -7;
	int64_t x258 = INT64_MIN;
	uint64_t x259 = UINT64_MAX;
	static uint64_t t63 = 1813LLU;

	t63 = (((x257^x258)&x259)/x260);

	if (t63 != 2279627295317542LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = 2U;
	static int32_t x262 = -1;
	int32_t x263 = -1;
	static int64_t x264 = INT64_MIN;
	int64_t t64 = 145032LL;

	t64 = (((x261^x262)&x263)/x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -56701365;
	int16_t x266 = INT16_MAX;
	volatile int16_t x267 = 1100;
	static uint32_t t65 = 849121079U;

	t65 = (((x265^x266)&x267)/x268);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = INT8_MIN;
	int16_t x270 = -1;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = UINT16_MAX;
	int32_t t66 = -384;

	t66 = (((x269^x270)&x271)/x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MAX;
	int16_t x275 = 2842;
	static int16_t x276 = INT16_MIN;
	volatile int64_t t67 = -132281329697100LL;

	t67 = (((x273^x274)&x275)/x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 119U;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	volatile uint64_t x280 = UINT64_MAX;
	volatile uint64_t t68 = 12LLU;

	t68 = (((x277^x278)&x279)/x280);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = -2;
	uint64_t x282 = 1587907894LLU;
	volatile uint32_t x283 = UINT32_MAX;
	static int8_t x284 = INT8_MAX;
	volatile uint64_t t69 = 167379281213LLU;

	t69 = (((x281^x282)&x283)/x284);

	if (t69 != 21315428LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = 13;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	volatile int32_t x288 = INT32_MIN;
	volatile int32_t t70 = 60;

	t70 = (((x285^x286)&x287)/x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x290 = INT16_MAX;
	volatile int8_t x291 = INT8_MIN;
	int16_t x292 = 10066;
	static uint64_t t71 = 496801437741LLU;

	t71 = (((x289^x290)&x291)/x292);

	if (t71 != 1832579383440246LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x294 = 188517778774351223LLU;
	int8_t x295 = INT8_MAX;
	int64_t x296 = -403260788804LL;

	t72 = (((x293^x294)&x295)/x296);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x298 = UINT64_MAX;
	static uint64_t x299 = 1555904205500735LLU;
	uint16_t x300 = 57U;

	t73 = (((x297^x298)&x299)/x300);

	if (t73 != 27296565008784LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x303 = -1LL;
	int16_t x304 = -940;
	int64_t t74 = -13647631213896LL;

	t74 = (((x301^x302)&x303)/x304);

	if (t74 != 9812097911547583LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x306 = INT64_MIN;
	static uint8_t x307 = UINT8_MAX;
	uint8_t x308 = 3U;
	volatile int64_t t75 = -525113208099607209LL;

	t75 = (((x305^x306)&x307)/x308);

	if (t75 != 42LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	int32_t x311 = -1;
	int64_t t76 = -3385LL;

	t76 = (((x309^x310)&x311)/x312);

	if (t76 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x313 = -1LL;
	int8_t x314 = INT8_MAX;
	static volatile uint16_t x316 = UINT16_MAX;
	int64_t t77 = -62224508LL;

	t77 = (((x313^x314)&x315)/x316);

	if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MAX;
	uint32_t x319 = UINT32_MAX;
	static uint16_t x320 = UINT16_MAX;
	static uint64_t t78 = 11LLU;

	t78 = (((x317^x318)&x319)/x320);

	if (t78 != 4540LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 863746133U;
	int64_t x322 = 27LL;
	uint32_t x323 = 1813U;
	int32_t x324 = 612;
	int64_t t79 = -1039897914LL;

	t79 = (((x321^x322)&x323)/x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	int64_t x328 = -1LL;
	volatile int64_t t80 = -501136895LL;

	t80 = (((x325^x326)&x327)/x328);

	if (t80 != 2147483521LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x330 = 20255660LL;
	static uint8_t x331 = 3U;
	int64_t t81 = 10874LL;

	t81 = (((x329^x330)&x331)/x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x333 = 0U;
	volatile int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	int64_t t82 = 1LL;

	t82 = (((x333^x334)&x335)/x336);

	if (t82 != 492768LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = INT16_MAX;
	int32_t x340 = INT32_MIN;
	uint32_t t83 = 407403U;

	t83 = (((x337^x338)&x339)/x340);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = 0;
	int16_t x342 = -12670;
	static uint64_t x344 = UINT64_MAX;

	t84 = (((x341^x342)&x343)/x344);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int16_t x346 = 1;
	uint16_t x348 = UINT16_MAX;
	volatile uint64_t t85 = 1LLU;

	t85 = (((x345^x346)&x347)/x348);

	if (t85 != 248LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x349 = 15U;
	uint32_t x350 = 2062316U;
	int32_t x351 = INT32_MIN;
	volatile uint8_t x352 = UINT8_MAX;
	static uint32_t t86 = 2U;

	t86 = (((x349^x350)&x351)/x352);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MAX;
	uint32_t x356 = 975526224U;
	static uint32_t t87 = 247U;

	t87 = (((x353^x354)&x355)/x356);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x358 = 5;
	static uint64_t x359 = 1181266LLU;

	t88 = (((x357^x358)&x359)/x360);

	if (t88 != 6LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -1;
	int8_t x362 = -7;
	int8_t x363 = INT8_MAX;
	static uint32_t x364 = UINT32_MAX;
	uint32_t t89 = 14868U;

	t89 = (((x361^x362)&x363)/x364);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = 0;
	int16_t x366 = INT16_MAX;
	static int8_t x367 = 1;
	uint16_t x368 = 20U;
	int32_t t90 = -1780123;

	t90 = (((x365^x366)&x367)/x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = UINT16_MAX;
	uint16_t x370 = 6478U;
	volatile int8_t x371 = -1;
	volatile uint8_t x372 = 76U;

	t91 = (((x369^x370)&x371)/x372);

	if (t91 != 777) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MAX;
	uint64_t x375 = UINT64_MAX;
	uint32_t x376 = UINT32_MAX;

	t92 = (((x373^x374)&x375)/x376);

	if (t92 != 4294967297LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = 1786;
	volatile int32_t x378 = INT32_MIN;
	uint32_t x379 = 1191197U;
	volatile uint64_t t93 = 214439451693228LLU;

	t93 = (((x377^x378)&x379)/x380);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x382 = 40U;
	int64_t x383 = -1LL;
	static int64_t t94 = -167LL;

	t94 = (((x381^x382)&x383)/x384);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x385 = INT8_MIN;
	uint64_t x386 = 2091686574LLU;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t95 = 1649824973550LLU;

	t95 = (((x385^x386)&x387)/x388);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = 29401U;
	int16_t x390 = 1485;
	uint8_t x391 = UINT8_MAX;
	uint64_t x392 = 14732453114137272LLU;
	volatile uint64_t t96 = 862763450LLU;

	t96 = (((x389^x390)&x391)/x392);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MAX;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	static volatile int32_t x396 = -1;
	static int64_t t97 = -2051149181573279LL;

	t97 = (((x393^x394)&x395)/x396);

	if (t97 != 2147450881LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x397 = 56782LL;
	static int64_t x398 = INT64_MIN;
	int16_t x399 = -1;

	t98 = (((x397^x398)&x399)/x400);

	if (t98 != -146402730743725698LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x402 = -1;
	volatile int8_t x403 = INT8_MIN;
	volatile int16_t x404 = INT16_MIN;
	int64_t t99 = 128436027LL;

	t99 = (((x401^x402)&x403)/x404);

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

