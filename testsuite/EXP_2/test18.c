#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = INT16_MIN;
volatile uint8_t x7 = 12U;
static uint32_t x10 = 129125U;
volatile uint64_t t2 = 90472414593468LLU;
int8_t x26 = 20;
static int32_t x28 = INT32_MIN;
uint8_t x36 = 43U;
int8_t x41 = -1;
uint32_t x47 = 535961152U;
uint32_t x48 = 1U;
volatile uint64_t t10 = 0LLU;
int8_t x50 = 0;
volatile int64_t x57 = INT64_MIN;
int8_t x69 = INT8_MAX;
uint64_t t16 = 16LLU;
uint64_t t17 = 16818935725344788LLU;
int8_t x84 = INT8_MAX;
int16_t x100 = -1;
int16_t x104 = -1;
uint64_t t23 = 4106008164699788963LLU;
int8_t x105 = -1;
volatile uint64_t x108 = 3724LLU;
int16_t x109 = INT16_MIN;
uint16_t x111 = 44U;
int32_t t25 = 21556004;
int8_t x113 = -1;
int32_t x114 = -9;
static volatile int16_t x116 = -1;
int32_t x118 = -3152;
static int32_t x132 = -1;
int64_t x135 = 334419797126801LL;
volatile int16_t x145 = -26;
volatile int32_t x149 = -1;
static volatile int64_t t35 = 26059643418702LL;
int8_t x155 = INT8_MIN;
static int32_t x156 = -1801;
volatile uint64_t x158 = 647280035060710LLU;
volatile uint32_t x161 = 1784074208U;
static int32_t x162 = 13;
static int16_t x164 = -1;
int8_t x168 = INT8_MIN;
int64_t t39 = -15983569047LL;
static volatile int32_t x171 = -133271556;
volatile int8_t x176 = 7;
volatile uint64_t x190 = UINT64_MAX;
volatile uint64_t x194 = 559196777071LLU;
volatile int8_t x195 = 1;
int32_t t47 = 2;
int64_t x206 = -2406085557LL;
volatile uint64_t t49 = 78LLU;
int8_t x217 = INT8_MIN;
uint8_t x218 = UINT8_MAX;
uint8_t x219 = UINT8_MAX;
int8_t x222 = -1;
int16_t x229 = -2;
int8_t x243 = INT8_MAX;
int64_t x249 = -202097721361LL;
int64_t x250 = -2LL;
static int32_t x252 = INT32_MIN;
int16_t x256 = -78;
volatile int8_t x258 = INT8_MAX;
volatile int64_t x259 = INT64_MIN;
int64_t x260 = INT64_MIN;
uint16_t x263 = 14U;
volatile int8_t x266 = -14;
uint64_t x269 = UINT64_MAX;
uint16_t x271 = UINT16_MAX;
static uint8_t x273 = UINT8_MAX;
volatile int8_t x274 = INT8_MIN;
int16_t x276 = 30;
uint32_t x278 = UINT32_MAX;
static volatile uint64_t t62 = 789670LLU;
int8_t x282 = INT8_MIN;
int32_t x283 = -41610603;
int32_t x286 = -1;
uint32_t x289 = 76518U;
int64_t t65 = 3181690LL;
int64_t x310 = 484285788638LL;
int16_t x321 = -1;
int32_t t67 = 240;
int32_t x332 = -1;
int8_t x335 = -7;
uint8_t x337 = 63U;
int32_t x340 = INT32_MIN;
int8_t x346 = INT8_MIN;
uint32_t x347 = 608484U;
volatile int32_t x351 = INT32_MIN;
static int8_t x354 = INT8_MAX;
uint16_t x366 = UINT16_MAX;
volatile uint64_t x370 = UINT64_MAX;
int8_t x375 = -1;
int8_t x381 = INT8_MAX;
static int64_t x382 = INT64_MIN;
uint64_t x383 = 3610LLU;
int32_t x384 = 58;
volatile uint64_t t79 = 1902796854LLU;
int16_t x392 = 1;
volatile int16_t x395 = INT16_MIN;
volatile uint64_t t83 = 2LLU;
int16_t x411 = INT16_MAX;
int64_t x423 = 67237919674875LL;
int8_t x429 = INT8_MAX;
uint32_t x430 = UINT32_MAX;
int64_t x436 = INT64_MIN;
uint32_t x443 = UINT32_MAX;
uint16_t x462 = UINT16_MAX;
static int32_t x463 = 3530;
volatile uint64_t t95 = 533177809LLU;
static volatile int32_t x481 = -1;
volatile int32_t t98 = -53059120;
uint32_t x498 = UINT32_MAX;
uint32_t x500 = 1924176U;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MAX;
	volatile int64_t x3 = -1LL;
	uint8_t x4 = 2U;
	volatile int64_t t0 = -505076444253422LL;

	t0 = ((x1-(x2+x3))%x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = -4;
	static int16_t x8 = -1;
	int32_t t1 = 50197467;

	t1 = ((x5-(x6+x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -9423;
	static int32_t x11 = -443081;
	uint64_t x12 = 106598350LLU;

	t2 = ((x9-(x10+x11))%x12);

	if (t2 != 304533LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = UINT32_MAX;
	int8_t x14 = 37;
	volatile uint8_t x15 = UINT8_MAX;
	static uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 3623LLU;

	t3 = ((x13-(x14+x15))%x16);

	if (t3 != 4294967003LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile int16_t x18 = INT16_MIN;
	volatile int8_t x19 = -1;
	int8_t x20 = -1;
	int32_t t4 = 474;

	t4 = ((x17-(x18+x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int32_t x22 = -6100;
	int32_t x23 = -1;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 468LLU;

	t5 = ((x21-(x22+x23))%x24);

	if (t5 != 38868LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x27 = INT16_MAX;
	static int32_t t6 = -13;

	t6 = ((x25-(x26+x27))%x28);

	if (t6 != 2147450860) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int16_t x30 = INT16_MIN;
	int64_t x31 = -296757613LL;
	int64_t x32 = -195526407258LL;
	int64_t t7 = -137374514LL;

	t7 = ((x29-(x30+x31))%x32);

	if (t7 != 296790636LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	volatile int32_t t8 = -4486741;

	t8 = ((x33-(x34+x35))%x36);

	if (t8 != 42) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -1;
	volatile uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t9 = 76437469985290LL;

	t9 = ((x41-(x42+x43))%x44);

	if (t9 != -65535LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	uint64_t x46 = 4272425212LLU;

	t10 = ((x45-(x46+x47))%x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MAX;
	static int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 502;

	t11 = ((x49-(x50+x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x58 = INT8_MIN;
	static int8_t x59 = 59;
	uint16_t x60 = 63U;
	volatile int64_t t12 = 903130767LL;

	t12 = ((x57-(x58+x59))%x60);

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = 5U;
	static int8_t x62 = 3;
	int64_t x63 = -1LL;
	static uint32_t x64 = UINT32_MAX;
	int64_t t13 = 13642950415735504LL;

	t13 = ((x61-(x62+x63))%x64);

	if (t13 != 3LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = 5311U;
	int8_t x66 = -1;
	int16_t x67 = INT16_MIN;
	volatile int16_t x68 = INT16_MAX;
	static uint32_t t14 = 61513537U;

	t14 = ((x65-(x66+x67))%x68);

	if (t14 != 5313U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x70 = -1809690692994641014LL;
	int8_t x71 = INT8_MAX;
	static uint64_t x72 = UINT64_MAX;
	static uint64_t t15 = 15LLU;

	t15 = ((x69-(x70+x71))%x72);

	if (t15 != 1809690692994641014LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 284823434LLU;
	volatile int32_t x76 = INT32_MIN;

	t16 = ((x73-(x74+x75))%x76);

	if (t16 != 1862725877LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 3U;
	int32_t x78 = 4827281;
	uint64_t x79 = 74139679674LLU;
	uint16_t x80 = 54U;

	t17 = ((x77-(x78+x79))%x80);

	if (t17 != 50LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = INT64_MIN;
	uint64_t x82 = UINT64_MAX;
	static uint32_t x83 = 86U;
	static uint64_t t18 = 1384LLU;

	t18 = ((x81-(x82+x83))%x84);

	if (t18 != 43LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = -480355592LL;
	int32_t x87 = -1;
	uint8_t x88 = 8U;
	static volatile int64_t t19 = 2381799851832075LL;

	t19 = ((x85-(x86+x87))%x88);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -8;
	static uint16_t x90 = UINT16_MAX;
	static int64_t x91 = INT64_MIN;
	static int32_t x92 = -1;
	int64_t t20 = -50215LL;

	t20 = ((x89-(x90+x91))%x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 21;
	uint32_t x94 = 2U;
	volatile int32_t x95 = INT32_MAX;
	int32_t x96 = 242494674;
	volatile uint32_t t21 = 4166U;

	t21 = ((x93-(x94+x95))%x96);

	if (t21 != 207526276U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	static int16_t x98 = 3937;
	static uint16_t x99 = 627U;
	int32_t t22 = -82;

	t22 = ((x97-(x98+x99))%x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x101 = 822LLU;
	volatile int32_t x102 = INT32_MAX;
	static int16_t x103 = INT16_MIN;

	t23 = ((x101-(x102+x103))%x104);

	if (t23 != 18446744071562101559LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x106 = -1;
	uint64_t x107 = 28672826LLU;
	static volatile uint64_t t24 = 149265722252LLU;

	t24 = ((x105-(x106+x107))%x108);

	if (t24 != 2466LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x110 = INT32_MIN;
	volatile int32_t x112 = 218;

	t25 = ((x109-(x110+x111))%x112);

	if (t25 != 198) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x115 = UINT64_MAX;
	volatile uint64_t t26 = 3398252654LLU;

	t26 = ((x113-(x114+x115))%x116);

	if (t26 != 9LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	static uint16_t x119 = 86U;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t27 = 3575848;

	t27 = ((x117-(x118+x119))%x120);

	if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 2692529189LLU;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = -1;
	volatile uint64_t t28 = 3LLU;

	t28 = ((x121-(x122+x123))%x124);

	if (t28 != 9223372039547239462LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	int32_t x126 = -1;
	int8_t x127 = -1;
	int8_t x128 = -1;
	volatile int32_t t29 = -129376719;

	t29 = ((x125-(x126+x127))%x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -28103401404833836LL;
	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	int64_t t30 = 913157938757582LL;

	t30 = ((x129-(x130+x131))%x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = -41;
	int64_t x136 = 30618LL;
	static volatile int64_t t31 = -6160570LL;

	t31 = ((x133-(x134+x135))%x136);

	if (t31 != -1749LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = -1;
	int64_t x138 = 418194997586998021LL;
	int16_t x139 = 0;
	volatile int8_t x140 = -1;
	static int64_t t32 = 7396256569LL;

	t32 = ((x137-(x138+x139))%x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = INT16_MIN;
	int8_t x142 = -16;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MAX;
	volatile int64_t t33 = 162649814363940699LL;

	t33 = ((x141-(x142+x143))%x144);

	if (t33 != 16LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x146 = UINT32_MAX;
	int16_t x147 = 0;
	int64_t x148 = 74636077604153LL;
	volatile int64_t t34 = -255329122163663LL;

	t34 = ((x145-(x146+x147))%x148);

	if (t34 != 4294967271LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x150 = 534U;
	int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;

	t35 = ((x149-(x150+x151))%x152);

	if (t35 != 9223372036854775273LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = 2LL;
	uint8_t x154 = 21U;
	volatile int64_t t36 = -539676225750662LL;

	t36 = ((x153-(x154+x155))%x156);

	if (t36 != 109LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x159 = INT8_MAX;
	int8_t x160 = -1;
	volatile uint64_t t37 = 140826915481898248LLU;

	t37 = ((x157-(x158+x159))%x160);

	if (t37 != 18446096793674491034LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x163 = INT16_MIN;
	uint32_t t38 = 291110U;

	t38 = ((x161-(x162+x163))%x164);

	if (t38 != 1784106963U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -36;
	int8_t x166 = INT8_MIN;
	int64_t x167 = -3228253990578128LL;

	t39 = ((x165-(x166+x167))%x168);

	if (t39 != 44LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x169 = 206837U;
	int8_t x170 = -1;
	volatile int8_t x172 = INT8_MIN;
	uint32_t t40 = 3U;

	t40 = ((x169-(x170+x171))%x172);

	if (t40 != 133478394U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	int64_t x174 = -84046435157389136LL;
	uint64_t x175 = 56795662470717543LLU;
	volatile uint64_t t41 = 413225LLU;

	t41 = ((x173-(x174+x175))%x176);

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = INT32_MAX;
	static uint8_t x178 = 66U;
	uint16_t x179 = 6U;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t42 = 69542;

	t42 = ((x177-(x178+x179))%x180);

	if (t42 != 32696) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = -14751184;
	int32_t x187 = 299;
	int64_t x188 = 4530851704619174LL;
	static uint64_t t43 = 439LLU;

	t43 = ((x185-(x186+x187))%x188);

	if (t43 != 14750884LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = 3;
	uint32_t x191 = 84377U;
	int8_t x192 = 7;
	volatile uint64_t t44 = 269391771595LLU;

	t44 = ((x189-(x190+x191))%x192);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = 1;
	static volatile int8_t x196 = -30;
	uint64_t t45 = 2019303417650439948LLU;

	t45 = ((x193-(x194+x195))%x196);

	if (t45 != 18446743514512774545LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 1U;
	static uint8_t x198 = UINT8_MAX;
	volatile int32_t x199 = INT32_MIN;
	volatile uint16_t x200 = 445U;
	volatile int32_t t46 = 26142315;

	t46 = ((x197-(x198+x199))%x200);

	if (t46 != 169) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1;
	volatile int32_t x202 = INT32_MIN;
	int8_t x203 = 43;
	static uint8_t x204 = UINT8_MAX;

	t47 = ((x201-(x202+x203))%x204);

	if (t47 != 84) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = 6;
	static int32_t x207 = -1;
	int32_t x208 = INT32_MAX;
	volatile int64_t t48 = -95383334203642LL;

	t48 = ((x205-(x206+x207))%x208);

	if (t48 != 258601917LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x209 = INT32_MAX;
	static uint8_t x210 = 35U;
	uint64_t x211 = 13882115313LLU;
	uint8_t x212 = 16U;

	t49 = ((x209-(x210+x211))%x212);

	if (t49 != 11LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x220 = UINT8_MAX;
	volatile int32_t t50 = -1719;

	t50 = ((x217-(x218+x219))%x220);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -1LL;
	int16_t x223 = 2940;
	uint64_t x224 = 6860461288989086LLU;
	uint64_t t51 = 505091303116LLU;

	t51 = ((x221-(x222+x223))%x224);

	if (t51 != 5824128906885508LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x230 = INT16_MIN;
	volatile uint16_t x231 = 211U;
	static volatile uint32_t x232 = UINT32_MAX;
	volatile uint32_t t52 = 25418U;

	t52 = ((x229-(x230+x231))%x232);

	if (t52 != 32555U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	int64_t t53 = 47358678304610LL;

	t53 = ((x241-(x242+x243))%x244);

	if (t53 != 2147483521LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = -1;
	uint32_t x246 = 1992172664U;
	uint16_t x247 = 104U;
	static int8_t x248 = 6;
	uint32_t t54 = 4932U;

	t54 = ((x245-(x246+x247))%x248);

	if (t54 != 5U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x251 = UINT32_MAX;
	volatile int64_t t55 = -42LL;

	t55 = ((x249-(x250+x251))%x252);

	if (t55 != -234258446LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = INT64_MAX;
	int16_t x255 = INT16_MIN;
	volatile int64_t t56 = -73LL;

	t56 = ((x253-(x254+x255))%x256);

	if (t56 != -56LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = 15;
	volatile int64_t t57 = -112881091183637LL;

	t57 = ((x257-(x258+x259))%x260);

	if (t57 != 9223372036854775696LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x261 = 8230U;
	int32_t x262 = -3;
	volatile uint64_t x264 = UINT64_MAX;
	static uint64_t t58 = 12721LLU;

	t58 = ((x261-(x262+x263))%x264);

	if (t58 != 8219LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x265 = 2LL;
	int64_t x267 = -1LL;
	int32_t x268 = -88864976;
	int64_t t59 = -40171322570670LL;

	t59 = ((x265-(x266+x267))%x268);

	if (t59 != 17LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x270 = 0;
	static int32_t x272 = INT32_MAX;
	uint64_t t60 = 2664218491344LLU;

	t60 = ((x269-(x270+x271))%x272);

	if (t60 != 2147418115LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x275 = INT8_MAX;
	volatile int32_t t61 = 4;

	t61 = ((x273-(x274+x275))%x276);

	if (t61 != 16) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x277 = 36399LLU;
	volatile uint16_t x279 = 22528U;
	int32_t x280 = 126331;

	t62 = ((x277-(x278+x279))%x280);

	if (t62 != 13872LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x281 = 209U;
	int8_t x284 = INT8_MIN;
	static uint32_t t63 = 1028407U;

	t63 = ((x281-(x282+x283))%x284);

	if (t63 != 41610940U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = 0;
	uint8_t x287 = 9U;
	volatile uint8_t x288 = 15U;
	volatile int32_t t64 = -6060;

	t64 = ((x285-(x286+x287))%x288);

	if (t64 != -8) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x290 = UINT32_MAX;
	int16_t x291 = -1;
	int64_t x292 = INT64_MAX;

	t65 = ((x289-(x290+x291))%x292);

	if (t65 != 76520LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x309 = 4U;
	uint64_t x311 = 802489598062985LLU;
	int16_t x312 = INT16_MIN;
	volatile uint64_t t66 = 1039083822557LLU;

	t66 = ((x309-(x310+x311))%x312);

	if (t66 != 18445941099825699997LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x322 = 9;
	volatile int16_t x323 = -185;
	uint8_t x324 = 23U;

	t67 = ((x321-(x322+x323))%x324);

	if (t67 != 14) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = 2;
	int32_t x326 = INT32_MAX;
	static int16_t x327 = -1;
	int8_t x328 = INT8_MIN;
	volatile int32_t t68 = 34588262;

	t68 = ((x325-(x326+x327))%x328);

	if (t68 != -124) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x329 = 874U;
	static int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MAX;
	int32_t t69 = -2433;

	t69 = ((x329-(x330+x331))%x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x333 = UINT32_MAX;
	uint32_t x334 = 693453U;
	volatile uint16_t x336 = UINT16_MAX;
	volatile uint32_t t70 = 284846155U;

	t70 = ((x333-(x334+x335))%x336);

	if (t70 != 27439U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = INT8_MIN;
	uint32_t t71 = 2U;

	t71 = ((x337-(x338+x339))%x340);

	if (t71 != 192U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x341 = -1;
	int16_t x342 = -1;
	static volatile uint16_t x343 = 3U;
	int32_t x344 = INT32_MAX;
	int32_t t72 = -112;

	t72 = ((x341-(x342+x343))%x344);

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x348 = INT64_MIN;
	uint64_t t73 = 49355719LLU;

	t73 = ((x345-(x346+x347))%x348);

	if (t73 != 9223372036854167451LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x349 = -3941LL;
	volatile int32_t x350 = 1722684;
	static int64_t x352 = INT64_MIN;
	static int64_t t74 = -5839LL;

	t74 = ((x349-(x350+x351))%x352);

	if (t74 != 2145757023LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x353 = -1;
	int16_t x355 = -12;
	int8_t x356 = -1;
	volatile int32_t t75 = 0;

	t75 = ((x353-(x354+x355))%x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t76 = 34383462;

	t76 = ((x365-(x366+x367))%x368);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x369 = INT64_MAX;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	static uint64_t t77 = 190918988923894LLU;

	t77 = ((x369-(x370+x371))%x372);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x373 = 2U;
	int16_t x374 = -3984;
	static volatile uint16_t x376 = 14U;
	volatile int32_t t78 = -1632095;

	t78 = ((x373-(x374+x375))%x376);

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {


	t79 = ((x381-(x382+x383))%x384);

	if (t79 != 9LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x385 = INT8_MAX;
	int16_t x386 = 16;
	volatile uint16_t x387 = 894U;
	static int16_t x388 = 56;
	int32_t t80 = -152278;

	t80 = ((x385-(x386+x387))%x388);

	if (t80 != -55) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x389 = -18;
	int32_t x390 = INT32_MAX;
	static uint64_t x391 = 1021LLU;
	volatile uint64_t t81 = 17132285392676997LLU;

	t81 = ((x389-(x390+x391))%x392);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MIN;
	static int32_t x396 = INT32_MIN;
	static volatile int64_t t82 = -1LL;

	t82 = ((x393-(x394+x395))%x396);

	if (t82 != -2147418112LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = INT8_MIN;
	uint64_t x398 = 10328826733LLU;
	int16_t x399 = 1;
	uint16_t x400 = UINT16_MAX;

	t83 = ((x397-(x398+x399))%x400);

	if (t83 != 13419LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x401 = 9916135U;
	uint32_t x402 = 3119U;
	static int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;
	uint32_t t84 = 7408805U;

	t84 = ((x401-(x402+x403))%x404);

	if (t84 != 147U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x405 = -1000809;
	static int8_t x406 = INT8_MIN;
	int16_t x407 = -3725;
	static int16_t x408 = 26;
	int32_t t85 = 25539218;

	t85 = ((x405-(x406+x407))%x408);

	if (t85 != -12) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x409 = INT8_MIN;
	static uint32_t x410 = 3296U;
	int32_t x412 = INT32_MIN;
	uint32_t t86 = 9U;

	t86 = ((x409-(x410+x411))%x412);

	if (t86 != 2147447457U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x413 = -1;
	int16_t x414 = INT16_MAX;
	int16_t x415 = 1;
	uint64_t x416 = 255043724LLU;
	volatile uint64_t t87 = 439LLU;

	t87 = ((x413-(x414+x415))%x416);

	if (t87 != 68740783LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x417 = UINT32_MAX;
	volatile uint32_t x418 = 16120U;
	static volatile int32_t x419 = INT32_MIN;
	uint8_t x420 = 14U;
	volatile uint32_t t88 = 13359086U;

	t88 = ((x417-(x418+x419))%x420);

	if (t88 != 9U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = INT32_MIN;
	static uint8_t x422 = 4U;
	static int64_t x424 = -93346615LL;
	int64_t t89 = -773LL;

	t89 = ((x421-(x422+x423))%x424);

	if (t89 != -73362037LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;
	uint32_t t90 = 884617463U;

	t90 = ((x429-(x430+x431))%x432);

	if (t90 != 2147483776U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x433 = 121U;
	uint64_t x434 = UINT64_MAX;
	static uint64_t x435 = 459LLU;
	uint64_t t91 = 1138LLU;

	t91 = ((x433-(x434+x435))%x436);

	if (t91 != 9223372036854775471LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x441 = UINT32_MAX;
	static int8_t x442 = -1;
	uint64_t x444 = 70890554035421LLU;
	volatile uint64_t t92 = 1958047639LLU;

	t92 = ((x441-(x442+x443))%x444);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x457 = 30;
	static int64_t x458 = 46509LL;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = 90U;
	static int64_t t93 = 778142LL;

	t93 = ((x457-(x458+x459))%x460);

	if (t93 != 59LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x461 = 26;
	int8_t x464 = 7;
	volatile int32_t t94 = 1;

	t94 = ((x461-(x462+x463))%x464);

	if (t94 != -5) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x465 = -1;
	uint8_t x466 = 12U;
	volatile uint64_t x467 = 99765918430LLU;
	int16_t x468 = -1;

	t95 = ((x465-(x466+x467))%x468);

	if (t95 != 18446743973943633173LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x482 = -174802130428819LL;
	volatile int8_t x483 = INT8_MAX;
	volatile uint32_t x484 = UINT32_MAX;
	int64_t t96 = -1LL;

	t96 = ((x481-(x482+x483))%x484);

	if (t96 != 1256489486LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x485 = 2075883LLU;
	int64_t x486 = 47834034517768111LL;
	volatile uint64_t x487 = 0LLU;
	int64_t x488 = -1346366925978LL;
	static uint64_t t97 = 6LLU;

	t97 = ((x485-(x486+x487))%x488);

	if (t97 != 18398910039193859388LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x489 = INT8_MIN;
	uint8_t x490 = 28U;
	volatile int8_t x491 = INT8_MIN;
	static int8_t x492 = INT8_MIN;

	t98 = ((x489-(x490+x491))%x492);

	if (t98 != -28) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x497 = UINT16_MAX;
	static uint64_t x499 = 61356LLU;
	uint64_t t99 = 694549959LLU;

	t99 = ((x497-(x498+x499))%x500);

	if (t99 != 910084LLU) { NG(); } else { ; }
	
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

