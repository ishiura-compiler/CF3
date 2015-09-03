#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
static uint16_t x10 = UINT16_MAX;
int32_t x11 = INT32_MAX;
volatile int64_t x12 = INT64_MAX;
volatile int64_t t2 = 112LL;
int8_t x15 = INT8_MIN;
int32_t t4 = 432070;
int16_t x28 = -1;
uint16_t x29 = 20U;
int16_t x32 = -1;
uint64_t x42 = 103401097570LLU;
int64_t x46 = -1LL;
volatile uint64_t t11 = 72939169993LLU;
uint16_t x64 = 1U;
static int64_t x78 = 2802988875870894702LL;
int8_t x80 = INT8_MIN;
static volatile int32_t x84 = -1;
volatile int16_t x86 = INT16_MIN;
int8_t x96 = -15;
uint8_t x104 = 24U;
static volatile uint16_t x115 = 3827U;
static uint32_t x121 = 1793381359U;
int16_t x130 = INT16_MIN;
int64_t x133 = -533793748LL;
int32_t x134 = 817113;
volatile int32_t x135 = -9619638;
uint8_t x138 = UINT8_MAX;
int16_t x139 = -1;
uint64_t x141 = 3226384616677948LLU;
uint16_t x145 = 2812U;
int8_t x152 = -1;
static volatile int64_t x154 = INT64_MIN;
uint16_t x155 = 53U;
static int8_t x158 = 0;
uint32_t x162 = 48895U;
uint16_t x167 = 440U;
static uint8_t x168 = 12U;
uint32_t x169 = 1751120390U;
int8_t x170 = INT8_MAX;
volatile int64_t x172 = 195602995241229111LL;
volatile int64_t t42 = 17187046751LL;
static volatile int64_t x173 = INT64_MIN;
volatile int8_t x180 = 1;
volatile uint32_t x185 = 12U;
static int64_t x188 = INT64_MIN;
int32_t x192 = INT32_MAX;
volatile int64_t t48 = 1732LL;
int64_t x201 = -13822738LL;
volatile int64_t x203 = INT64_MIN;
volatile int32_t x204 = -1;
int32_t x207 = INT32_MIN;
volatile int32_t x208 = INT32_MIN;
int8_t x209 = 1;
uint64_t x215 = 27004LLU;
int8_t x216 = 3;
uint32_t x220 = 262001842U;
int32_t x221 = 250870;
int16_t x225 = INT16_MIN;
int16_t x233 = INT16_MAX;
volatile int8_t x236 = -30;
volatile int32_t t61 = -5;
uint8_t x252 = 58U;
int32_t x260 = INT32_MIN;
static int16_t x262 = INT16_MIN;
static int8_t x265 = INT8_MIN;
uint64_t x266 = 458567LLU;
volatile uint16_t x269 = 182U;
volatile int64_t x289 = INT64_MIN;
int64_t x301 = -3LL;
volatile int32_t t75 = 1;
static int8_t x305 = -1;
volatile int16_t x311 = -5896;
int16_t x314 = INT16_MIN;
int16_t x316 = -217;
int16_t x325 = INT16_MAX;
static int64_t x332 = INT64_MAX;
uint16_t x333 = UINT16_MAX;
uint64_t t83 = 545LLU;
volatile int32_t x339 = -1;
int16_t x344 = INT16_MIN;
int16_t x346 = INT16_MIN;
int16_t x351 = -1;
volatile uint64_t x357 = 447LLU;
int16_t x358 = INT16_MIN;
volatile int32_t t89 = -518;
int64_t t90 = -600613559LL;
int32_t x369 = INT32_MIN;
static volatile int32_t t92 = -25852;
int8_t x373 = INT8_MAX;
static uint16_t x379 = 180U;
int8_t x380 = 1;
int32_t t94 = -128;
volatile int64_t x387 = 43383318798365056LL;
static uint64_t x391 = 28LLU;
uint64_t t97 = 1127310603522084643LLU;
static volatile uint64_t x396 = UINT64_MAX;
int32_t x397 = INT32_MIN;
int32_t x400 = -15;
volatile int64_t t99 = INT64_MIN;


void f0(void) {
	int32_t x2 = -55621;
	int64_t x3 = -122641857LL;
	uint16_t x4 = 14U;
	static int64_t t0 = 48LL;

	t0 = ((x1<=x2)|(x3&x4));

	if (t0 != 15LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 42U;
	uint8_t x6 = 12U;
	volatile uint16_t x7 = 409U;
	uint16_t x8 = 58U;
	int32_t t1 = -51;

	t1 = ((x5<=x6)|(x7&x8));

	if (t1 != 24) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -83152204534LL;

	t2 = ((x9<=x10)|(x11&x12));

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	volatile uint16_t x14 = UINT16_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -71267535129LL;

	t3 = ((x13<=x14)|(x15&x16));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 60;
	uint8_t x18 = 1U;
	static int8_t x19 = -1;
	int32_t x20 = 0;

	t4 = ((x17<=x18)|(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int32_t x22 = -809;
	int8_t x23 = 5;
	volatile int16_t x24 = INT16_MIN;
	static int32_t t5 = 0;

	t5 = ((x21<=x22)|(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 90732U;
	int64_t x26 = INT64_MAX;
	int16_t x27 = INT16_MAX;
	int32_t t6 = -6891928;

	t6 = ((x25<=x26)|(x27&x28));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x30 = UINT8_MAX;
	uint64_t x31 = UINT64_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x29<=x30)|(x31&x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 7U;
	uint8_t x34 = 28U;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = 16056922961756LLU;
	static uint64_t t8 = 3038LLU;

	t8 = ((x33<=x34)|(x35&x36));

	if (t8 != 16056922931201LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	int16_t x38 = -1;
	int64_t x39 = -1LL;
	int8_t x40 = -3;
	volatile int64_t t9 = 74313879994LL;

	t9 = ((x37<=x38)|(x39&x40));

	if (t9 != -3LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	uint8_t x43 = 61U;
	static int8_t x44 = 3;
	int32_t t10 = 2021;

	t10 = ((x41<=x42)|(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 104736;
	uint64_t x47 = 4438680888696LLU;
	static volatile uint8_t x48 = UINT8_MAX;

	t11 = ((x45<=x46)|(x47&x48));

	if (t11 != 120LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	volatile uint16_t x50 = 61U;
	volatile uint8_t x51 = UINT8_MAX;
	uint16_t x52 = 9U;
	volatile int32_t t12 = 267072161;

	t12 = ((x49<=x50)|(x51&x52));

	if (t12 != 9) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int32_t x54 = -1;
	uint32_t x55 = 1706888U;
	volatile uint16_t x56 = 28U;
	uint32_t t13 = 3U;

	t13 = ((x53<=x54)|(x55&x56));

	if (t13 != 9U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 5548178LL;
	static uint16_t x58 = UINT16_MAX;
	static uint16_t x59 = 10U;
	int16_t x60 = -85;
	static volatile int32_t t14 = -17;

	t14 = ((x57<=x58)|(x59&x60));

	if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	volatile uint8_t x62 = 34U;
	static int8_t x63 = INT8_MIN;
	int32_t t15 = 31290943;

	t15 = ((x61<=x62)|(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 3581U;
	int16_t x66 = INT16_MAX;
	int16_t x67 = 264;
	int8_t x68 = 12;
	int32_t t16 = -493017;

	t16 = ((x65<=x66)|(x67&x68));

	if (t16 != 9) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 3U;
	int16_t x70 = -1;
	static int8_t x71 = INT8_MIN;
	int32_t x72 = -13350;
	int32_t t17 = 9245;

	t17 = ((x69<=x70)|(x71&x72));

	if (t17 != -13440) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int8_t x74 = -53;
	static int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MAX;
	volatile int64_t t18 = -76697LL;

	t18 = ((x73<=x74)|(x75&x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 0U;
	uint64_t x79 = 7324213LLU;
	uint64_t t19 = 518309LLU;

	t19 = ((x77<=x78)|(x79&x80));

	if (t19 != 7324161LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 103U;
	int16_t x82 = INT16_MIN;
	int16_t x83 = 1;
	static volatile int32_t t20 = -4;

	t20 = ((x81<=x82)|(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	static int64_t x87 = -47LL;
	static int8_t x88 = INT8_MIN;
	volatile int64_t t21 = -38289789045LL;

	t21 = ((x85<=x86)|(x87&x88));

	if (t21 != -127LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 8258105;
	volatile uint64_t x90 = 110920647138429LLU;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 15640877085397LLU;
	volatile uint64_t t22 = 5879608459090LLU;

	t22 = ((x89<=x90)|(x91&x92));

	if (t22 != 85LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 62LLU;
	volatile int64_t x94 = INT64_MIN;
	volatile int32_t x95 = -105;
	int32_t t23 = 4;

	t23 = ((x93<=x94)|(x95&x96));

	if (t23 != -111) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	volatile int64_t x98 = -1LL;
	uint64_t x99 = 9004022286080357LLU;
	static int32_t x100 = INT32_MIN;
	volatile uint64_t t24 = 13525058134LLU;

	t24 = ((x97<=x98)|(x99&x100));

	if (t24 != 9004020978941953LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x102 = INT16_MAX;
	int32_t x103 = -1;
	volatile int32_t t25 = 1;

	t25 = ((x101<=x102)|(x103&x104));

	if (t25 != 25) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static int16_t x106 = INT16_MIN;
	volatile uint8_t x107 = 13U;
	volatile int8_t x108 = -1;
	int32_t t26 = 93272;

	t26 = ((x105<=x106)|(x107&x108));

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -1;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = -10284;

	t27 = ((x109<=x110)|(x111&x112));

	if (t27 != 65408) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 731494470LL;
	static uint8_t x114 = UINT8_MAX;
	uint8_t x116 = 1U;
	int32_t t28 = 474348;

	t28 = ((x113<=x114)|(x115&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 220U;
	static int32_t x118 = INT32_MIN;
	volatile int16_t x119 = -1;
	static int16_t x120 = -1;
	static int32_t t29 = -252;

	t29 = ((x117<=x118)|(x119&x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = INT8_MIN;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t30 = 7233272958122981733LLU;

	t30 = ((x121<=x122)|(x123&x124));

	if (t30 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -1LL;
	uint8_t x126 = UINT8_MAX;
	static uint32_t x127 = 280799U;
	static int64_t x128 = -1LL;
	volatile int64_t t31 = 2186236522533537546LL;

	t31 = ((x125<=x126)|(x127&x128));

	if (t31 != 280799LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x131 = 762472488U;
	int32_t x132 = 43776773;
	volatile uint32_t t32 = 0U;

	t32 = ((x129<=x130)|(x131&x132));

	if (t32 != 1206273U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = -19203;

	t33 = ((x133<=x134)|(x135&x136));

	if (t33 != 14155) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -1;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -621720457LL;

	t34 = ((x137<=x138)|(x139&x140));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int64_t x143 = 1883080949191LL;
	int64_t x144 = -8786925300LL;
	int64_t t35 = -4401552465711LL;

	t35 = ((x141<=x142)|(x143&x144));

	if (t35 != 1874489125125LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int64_t x147 = -1LL;
	int64_t x148 = -1LL;
	volatile int64_t t36 = 75186138376176588LL;

	t36 = ((x145<=x146)|(x147&x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 0LLU;
	static int32_t x150 = -1;
	uint16_t x151 = 0U;
	volatile int32_t t37 = 0;

	t37 = ((x149<=x150)|(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = UINT64_MAX;
	volatile int64_t x156 = -1LL;
	int64_t t38 = 315LL;

	t38 = ((x153<=x154)|(x155&x156));

	if (t38 != 53LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int64_t x159 = INT64_MIN;
	volatile int64_t x160 = INT64_MAX;
	volatile int64_t t39 = 42635024298840732LL;

	t39 = ((x157<=x158)|(x159&x160));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	int64_t x163 = -182510651720733161LL;
	int16_t x164 = INT16_MAX;
	int64_t t40 = -113973302LL;

	t40 = ((x161<=x162)|(x163&x164));

	if (t40 != 28183LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = -3;
	volatile int32_t t41 = 1762;

	t41 = ((x165<=x166)|(x167&x168));

	if (t41 != 9) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x171 = 77666U;

	t42 = ((x169<=x170)|(x171&x172));

	if (t42 != 68386LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = UINT16_MAX;
	static int8_t x175 = INT8_MIN;
	int32_t x176 = 346795;
	volatile int32_t t43 = -125158641;

	t43 = ((x173<=x174)|(x175&x176));

	if (t43 != 346753) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile int32_t x178 = -1;
	uint64_t x179 = 2808763223LLU;
	uint64_t t44 = 76LLU;

	t44 = ((x177<=x178)|(x179&x180));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = 7;
	volatile uint16_t x182 = UINT16_MAX;
	int32_t x183 = INT32_MAX;
	uint8_t x184 = 0U;
	volatile int32_t t45 = -1992623;

	t45 = ((x181<=x182)|(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = 67U;
	int16_t x187 = INT16_MIN;
	volatile int64_t t46 = -1017435LL;

	t46 = ((x185<=x186)|(x187&x188));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -9;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MAX;
	static int32_t t47 = 931;

	t47 = ((x189<=x190)|(x191&x192));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int8_t x194 = 3;
	static int16_t x195 = 878;
	int64_t x196 = -1LL;

	t48 = ((x193<=x194)|(x195&x196));

	if (t48 != 879LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = 21222153;
	int32_t x198 = -1;
	uint16_t x199 = 7U;
	int64_t x200 = INT64_MIN;
	static volatile int64_t t49 = 121139145457990984LL;

	t49 = ((x197<=x198)|(x199&x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MIN;
	volatile int64_t t50 = -49LL;

	t50 = ((x201<=x202)|(x203&x204));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x205 = UINT32_MAX;
	int64_t x206 = INT64_MAX;
	volatile int32_t t51 = -91161860;

	t51 = ((x205<=x206)|(x207&x208));

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x210 = -1;
	uint16_t x211 = 26342U;
	volatile int32_t x212 = 6795;
	int32_t t52 = 12;

	t52 = ((x209<=x210)|(x211&x212));

	if (t52 != 642) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = UINT16_MAX;
	uint64_t x214 = 482185183LLU;
	volatile uint64_t t53 = 264044066LLU;

	t53 = ((x213<=x214)|(x215&x216));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile uint64_t x218 = 967LLU;
	volatile int8_t x219 = -1;
	uint32_t t54 = 1129025367U;

	t54 = ((x217<=x218)|(x219&x220));

	if (t54 != 262001842U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = INT8_MIN;
	int32_t x223 = 1;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = 2398;

	t55 = ((x221<=x222)|(x223&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -1;
	uint64_t x227 = 32162020LLU;
	volatile int16_t x228 = INT16_MAX;
	static uint64_t t56 = 718LLU;

	t56 = ((x225<=x226)|(x227&x228));

	if (t56 != 16613LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -1;
	int8_t x230 = INT8_MAX;
	static int32_t x231 = -2044;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 501493;

	t57 = ((x229<=x230)|(x231&x232));

	if (t57 != 63493) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	volatile int32_t t58 = -18;

	t58 = ((x233<=x234)|(x235&x236));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 1741U;
	uint8_t x238 = 7U;
	volatile int8_t x239 = INT8_MAX;
	uint8_t x240 = UINT8_MAX;
	int32_t t59 = -732878844;

	t59 = ((x237<=x238)|(x239&x240));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	uint8_t x243 = UINT8_MAX;
	static int64_t x244 = 1272357286121516566LL;
	int64_t t60 = 469221797LL;

	t60 = ((x241<=x242)|(x243&x244));

	if (t60 != 23LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -38;
	int32_t x246 = INT32_MAX;
	int32_t x247 = INT32_MAX;
	int8_t x248 = INT8_MIN;

	t61 = ((x245<=x246)|(x247&x248));

	if (t61 != 2147483521) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x250 = -1;
	uint64_t x251 = UINT64_MAX;
	uint64_t t62 = 787149LLU;

	t62 = ((x249<=x250)|(x251&x252));

	if (t62 != 59LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 2065877U;
	int8_t x254 = -1;
	int64_t x255 = -1345439543972237824LL;
	int32_t x256 = INT32_MAX;
	volatile int64_t t63 = 22444215137601276LL;

	t63 = ((x253<=x254)|(x255&x256));

	if (t63 != 2059759105LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile int8_t x258 = INT8_MIN;
	int16_t x259 = -1;
	volatile int32_t t64 = -66;

	t64 = ((x257<=x258)|(x259&x260));

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MIN;
	uint64_t x263 = 211812LLU;
	uint16_t x264 = UINT16_MAX;
	volatile uint64_t t65 = 7279LLU;

	t65 = ((x261<=x262)|(x263&x264));

	if (t65 != 15204LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = INT32_MIN;
	uint8_t x268 = 2U;
	volatile int32_t t66 = 47539;

	t66 = ((x265<=x266)|(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	static int64_t x272 = -1LL;
	volatile int64_t t67 = INT64_MIN;

	t67 = ((x269<=x270)|(x271&x272));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	int16_t x274 = INT16_MAX;
	static int8_t x275 = 18;
	int64_t x276 = -90867196154968LL;
	int64_t t68 = 2057LL;

	t68 = ((x273<=x274)|(x275&x276));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	static int8_t x278 = INT8_MIN;
	volatile int32_t x279 = -937498833;
	int32_t x280 = INT32_MIN;
	static int32_t t69 = INT32_MIN;

	t69 = ((x277<=x278)|(x279&x280));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = -1;
	int16_t x283 = 6990;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -49511;

	t70 = ((x281<=x282)|(x283&x284));

	if (t70 != 6991) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile int16_t x286 = INT16_MAX;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	int32_t t71 = 19;

	t71 = ((x285<=x286)|(x287&x288));

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MIN;
	uint8_t x291 = 7U;
	int8_t x292 = -42;
	volatile int32_t t72 = -11;

	t72 = ((x289<=x290)|(x291&x292));

	if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int8_t x294 = -5;
	uint64_t x295 = 19209684LLU;
	volatile int8_t x296 = INT8_MIN;
	volatile uint64_t t73 = 1137LLU;

	t73 = ((x293<=x294)|(x295&x296));

	if (t73 != 19209600LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MAX;
	uint32_t x298 = UINT32_MAX;
	static int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	volatile int64_t t74 = 1186438906120916LL;

	t74 = ((x297<=x298)|(x299&x300));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;

	t75 = ((x301<=x302)|(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	int32_t x308 = 110576;
	int32_t t76 = 422413899;

	t76 = ((x305<=x306)|(x307&x308));

	if (t76 != 110464) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	int8_t x310 = -1;
	int16_t x312 = -1;
	int32_t t77 = 13284;

	t77 = ((x309<=x310)|(x311&x312));

	if (t77 != -5895) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	volatile int64_t x315 = INT64_MAX;
	int64_t t78 = 6030192952796172LL;

	t78 = ((x313<=x314)|(x315&x316));

	if (t78 != 9223372036854775591LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	uint64_t x318 = 32479LLU;
	int64_t x319 = 2447499LL;
	uint16_t x320 = 0U;
	static int64_t t79 = 368256839541689LL;

	t79 = ((x317<=x318)|(x319&x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	static uint8_t x322 = 63U;
	volatile uint64_t x323 = 204LLU;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t80 = 1771262705200944LLU;

	t80 = ((x321<=x322)|(x323&x324));

	if (t80 != 204LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -60085110;
	uint64_t x327 = UINT64_MAX;
	static uint8_t x328 = 0U;
	static uint64_t t81 = 57299109428448471LLU;

	t81 = ((x325<=x326)|(x327&x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	int32_t x330 = 0;
	volatile uint32_t x331 = UINT32_MAX;
	volatile int64_t t82 = -1LL;

	t82 = ((x329<=x330)|(x331&x332));

	if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MAX;
	int8_t x335 = INT8_MIN;
	static uint64_t x336 = 580806275445350947LLU;

	t83 = ((x333<=x334)|(x335&x336));

	if (t83 != 580806275445350913LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 1009U;
	static int64_t x338 = INT64_MIN;
	int32_t x340 = 64004625;
	volatile int32_t t84 = 7849;

	t84 = ((x337<=x338)|(x339&x340));

	if (t84 != 64004625) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 49685U;
	int16_t x342 = -1;
	volatile int64_t x343 = -54950175283520159LL;
	int64_t t85 = 27391751838539813LL;

	t85 = ((x341<=x342)|(x343&x344));

	if (t85 != -54950175283544063LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	static int16_t x348 = INT16_MAX;
	int64_t t86 = 338LL;

	t86 = ((x345<=x346)|(x347&x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint32_t x350 = 50U;
	volatile int64_t x352 = -1LL;
	static int64_t t87 = -1051391765684631212LL;

	t87 = ((x349<=x350)|(x351&x352));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 1;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = 14525U;
	int16_t x356 = 116;
	volatile uint32_t t88 = 199414U;

	t88 = ((x353<=x354)|(x355&x356));

	if (t88 != 52U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x359 = INT32_MIN;
	int8_t x360 = 0;

	t89 = ((x357<=x358)|(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 225U;
	int32_t x362 = -130602;
	int64_t x363 = -1LL;
	uint16_t x364 = 236U;

	t90 = ((x361<=x362)|(x363&x364));

	if (t90 != 236LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -5;
	static uint64_t x366 = UINT64_MAX;
	int16_t x367 = -29;
	int16_t x368 = -1;
	static volatile int32_t t91 = -2328059;

	t91 = ((x365<=x366)|(x367&x368));

	if (t91 != -29) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MIN;

	t92 = ((x369<=x370)|(x371&x372));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = -26;
	static int32_t x375 = INT32_MAX;
	uint16_t x376 = 126U;
	int32_t t93 = 20575002;

	t93 = ((x373<=x374)|(x375&x376));

	if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -1;
	int8_t x378 = -1;

	t94 = ((x377<=x378)|(x379&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint64_t x382 = 403006LLU;
	int16_t x383 = 16045;
	int16_t x384 = INT16_MIN;
	int32_t t95 = -109;

	t95 = ((x381<=x382)|(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 2U;
	static int32_t x386 = INT32_MIN;
	int8_t x388 = -1;
	volatile int64_t t96 = 3615178325LL;

	t96 = ((x385<=x386)|(x387&x388));

	if (t96 != 43383318798365056LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = -1;
	static volatile int64_t x390 = INT64_MAX;
	uint32_t x392 = UINT32_MAX;

	t97 = ((x389<=x390)|(x391&x392));

	if (t97 != 29LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -11;
	volatile int64_t x394 = -24804313212LL;
	static uint32_t x395 = UINT32_MAX;
	static uint64_t t98 = 10850LLU;

	t98 = ((x393<=x394)|(x395&x396));

	if (t98 != 4294967295LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;

	t99 = ((x397<=x398)|(x399&x400));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

