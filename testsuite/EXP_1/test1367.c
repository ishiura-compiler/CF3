#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = 0U;
volatile int8_t x16 = INT8_MIN;
static int64_t x17 = -1LL;
static uint32_t x18 = UINT32_MAX;
volatile int8_t x20 = INT8_MIN;
volatile int32_t t3 = -62312689;
static int16_t x26 = -93;
volatile int8_t x27 = INT8_MAX;
uint8_t x34 = UINT8_MAX;
uint8_t x35 = UINT8_MAX;
int16_t x37 = INT16_MIN;
volatile int8_t x39 = 11;
int32_t x45 = INT32_MAX;
int16_t x47 = -1;
uint16_t x61 = 8U;
static int64_t x62 = INT64_MIN;
int32_t x63 = 308905400;
static int8_t x71 = INT8_MAX;
volatile int64_t x79 = -1LL;
static int16_t x86 = INT16_MAX;
volatile uint32_t x89 = UINT32_MAX;
int32_t x95 = INT32_MAX;
static int16_t x100 = -63;
int32_t x102 = -1;
uint8_t x106 = 3U;
int32_t x108 = -5405;
uint64_t x110 = UINT64_MAX;
volatile uint8_t x112 = 81U;
int32_t t23 = -1;
static volatile int16_t x117 = -1;
int32_t x121 = -1;
uint32_t x122 = 1502U;
uint64_t x126 = 1LLU;
int64_t x131 = -353296LL;
static int16_t x132 = 444;
static int16_t x136 = 0;
int64_t x141 = -56887999097315LL;
int32_t t30 = -1;
int16_t x147 = INT16_MAX;
uint32_t x157 = 113221U;
uint32_t t32 = 7U;
uint32_t x166 = 1116548U;
static int32_t x168 = 70982;
int8_t x169 = 1;
int8_t x172 = INT8_MIN;
static volatile int64_t t35 = 230801374974796LL;
int64_t x177 = -108530384570729419LL;
static volatile int16_t x178 = INT16_MAX;
int16_t x184 = INT16_MAX;
int64_t x199 = -1LL;
uint64_t t40 = 97940912283LLU;
int64_t x210 = -1LL;
int32_t x221 = INT32_MAX;
static volatile int32_t t46 = -159161;
volatile uint8_t x225 = UINT8_MAX;
static int8_t x226 = INT8_MIN;
uint64_t x227 = UINT64_MAX;
int64_t x235 = INT64_MAX;
uint8_t x245 = 2U;
static uint8_t x246 = 15U;
int64_t x247 = -1LL;
volatile int32_t x253 = -1;
static int32_t x259 = -1;
volatile int16_t x265 = INT16_MIN;
volatile int32_t x274 = INT32_MAX;
int64_t t57 = -28LL;
volatile uint32_t t58 = 66623U;
int8_t x284 = INT8_MIN;
uint32_t t59 = 13U;
int8_t x290 = 0;
uint64_t x293 = 26LLU;
uint64_t x301 = 803321580LLU;
volatile uint64_t x304 = 62275648LLU;
int32_t x312 = 5794268;
int64_t x322 = INT64_MIN;
volatile int64_t x324 = 43632822691663LL;
uint8_t x330 = 59U;
uint64_t x340 = 220426818641LLU;
volatile uint32_t x341 = UINT32_MAX;
volatile int8_t x342 = -38;
volatile int8_t x343 = INT8_MIN;
int64_t x348 = INT64_MIN;
volatile int32_t x353 = 6232695;
uint16_t x355 = 7758U;
int32_t t75 = -748172;
volatile int32_t t76 = 0;
uint64_t x374 = 1023505231627631LLU;
int64_t x376 = -1LL;
int64_t x387 = 1LL;
int8_t x388 = INT8_MIN;
volatile int64_t x398 = -413622888192LL;
int16_t x405 = -1;
int16_t x406 = INT16_MAX;
uint64_t x413 = UINT64_MAX;
volatile int32_t t88 = 76;
int64_t x425 = -1LL;
uint16_t x426 = 6U;
uint64_t x432 = 7503LLU;
static int32_t x433 = -288;
int64_t x441 = -1LL;
int16_t x445 = INT16_MIN;
uint32_t t93 = 894137U;
static int32_t t94 = -48488;
int8_t x464 = -34;
int32_t x470 = -205338806;
int64_t x474 = -1LL;


void f0(void) {
	uint64_t x1 = 3938580366769683165LLU;
	static uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 7254U;

	t0 = (((x1<x2)-x3)-x4);

	if (t0 != 2147483649U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = -1;
	int8_t x7 = 3;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 456901U;

	t1 = (((x5<x6)-x7)-x8);

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 31521958759717LL;
	static int32_t x14 = -1;
	int8_t x15 = -1;
	int32_t t2 = -14340325;

	t2 = (((x13<x14)-x15)-x16);

	if (t2 != 129) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x19 = -1;

	t3 = (((x17<x18)-x19)-x20);

	if (t3 != 130) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -60;
	int16_t x22 = INT16_MIN;
	static int32_t x23 = -807;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t4 = -5047151;

	t4 = (((x21<x22)-x23)-x24);

	if (t4 != 33575) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t5 = 10718269;

	t5 = (((x25<x26)-x27)-x28);

	if (t5 != 2147483522) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	volatile int16_t x30 = -5;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = 345551642;
	volatile uint32_t t6 = 191292511U;

	t6 = (((x29<x30)-x31)-x32);

	if (t6 != 3949415656U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t7 = 83825776814LLU;

	t7 = (((x33<x34)-x35)-x36);

	if (t7 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MIN;
	int16_t x40 = -277;
	int32_t t8 = 19;

	t8 = (((x37<x38)-x39)-x40);

	if (t8 != 267) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = -10;
	volatile int32_t x43 = -1;
	int8_t x44 = INT8_MIN;
	static int32_t t9 = 447995;

	t9 = (((x41<x42)-x43)-x44);

	if (t9 != 129) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = -571311526;
	volatile uint8_t x48 = 30U;
	volatile int32_t t10 = 44;

	t10 = (((x45<x46)-x47)-x48);

	if (t10 != -29) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	int32_t x54 = -4063;
	volatile int8_t x55 = INT8_MIN;
	int64_t x56 = -1LL;
	volatile int64_t t11 = 155LL;

	t11 = (((x53<x54)-x55)-x56);

	if (t11 != 129LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	uint8_t x58 = 0U;
	uint16_t x59 = 6U;
	static volatile int32_t x60 = -4102;
	static volatile int32_t t12 = -16228704;

	t12 = (((x57<x58)-x59)-x60);

	if (t12 != 4097) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x64 = 12U;
	volatile int32_t t13 = -33492600;

	t13 = (((x61<x62)-x63)-x64);

	if (t13 != -308905412) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -4;
	int8_t x70 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t14 = 1;

	t14 = (((x69<x70)-x71)-x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MAX;
	uint8_t x78 = UINT8_MAX;
	static int16_t x80 = 1799;
	volatile int64_t t15 = 7986LL;

	t15 = (((x77<x78)-x79)-x80);

	if (t15 != -1798LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	int64_t x82 = -179934789LL;
	int8_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t16 = 1;

	t16 = (((x81<x82)-x83)-x84);

	if (t16 != -65534) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = 1;
	uint16_t x87 = 1429U;
	int8_t x88 = INT8_MIN;
	int32_t t17 = 196;

	t17 = (((x85<x86)-x87)-x88);

	if (t17 != -1300) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = 0U;
	uint64_t x91 = 5241LLU;
	int64_t x92 = -109358866565LL;
	uint64_t t18 = 4016327234446LLU;

	t18 = (((x89<x90)-x91)-x92);

	if (t18 != 109358861324LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MAX;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = -364113LL;
	volatile int64_t t19 = 0LL;

	t19 = (((x93<x94)-x95)-x96);

	if (t19 != -2147119533LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x97 = INT8_MIN;
	int8_t x98 = 13;
	volatile uint16_t x99 = UINT16_MAX;
	volatile int32_t t20 = -154984;

	t20 = (((x97<x98)-x99)-x100);

	if (t20 != -65471) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = 15320;
	int16_t x103 = 384;
	uint8_t x104 = 1U;
	volatile int32_t t21 = -57558431;

	t21 = (((x101<x102)-x103)-x104);

	if (t21 != -385) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	int8_t x107 = INT8_MIN;
	volatile int32_t t22 = -223934760;

	t22 = (((x105<x106)-x107)-x108);

	if (t22 != 5533) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	int8_t x111 = INT8_MIN;

	t23 = (((x109<x110)-x111)-x112);

	if (t23 != 48) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -97854569;
	volatile int64_t x114 = INT64_MIN;
	int8_t x115 = -1;
	uint64_t x116 = 42195303740729975LLU;
	uint64_t t24 = 65706611LLU;

	t24 = (((x113<x114)-x115)-x116);

	if (t24 != 18404548769968821642LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x118 = INT64_MAX;
	uint64_t x119 = 1560096771252788LLU;
	int32_t x120 = -1;
	static volatile uint64_t t25 = 228858109077699LLU;

	t25 = (((x117<x118)-x119)-x120);

	if (t25 != 18445183976938298830LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x123 = -2;
	uint64_t x124 = 19778377LLU;
	volatile uint64_t t26 = 16284660LLU;

	t26 = (((x121<x122)-x123)-x124);

	if (t26 != 18446744073689773241LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x125 = INT8_MIN;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = 425733LL;
	volatile int64_t t27 = -26645207628927LL;

	t27 = (((x125<x126)-x127)-x128);

	if (t27 != -491268LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = 1U;
	static uint8_t x130 = 79U;
	volatile int64_t t28 = -1695649LL;

	t28 = (((x129<x130)-x131)-x132);

	if (t28 != 352853LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = INT16_MIN;
	int32_t x134 = -53;
	static int8_t x135 = 3;
	volatile int32_t t29 = 301195;

	t29 = (((x133<x134)-x135)-x136);

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x142 = 8U;
	uint8_t x143 = UINT8_MAX;
	static int8_t x144 = -1;

	t30 = (((x141<x142)-x143)-x144);

	if (t30 != -253) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x145 = INT8_MAX;
	int8_t x146 = -1;
	volatile uint64_t x148 = UINT64_MAX;
	uint64_t t31 = 2351943693LLU;

	t31 = (((x145<x146)-x147)-x148);

	if (t31 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x158 = 6U;
	int8_t x159 = -1;
	uint32_t x160 = UINT32_MAX;

	t32 = (((x157<x158)-x159)-x160);

	if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = -1;
	int8_t x163 = -1;
	int16_t x164 = -1;
	int32_t t33 = 217398;

	t33 = (((x161<x162)-x163)-x164);

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x165 = -1727;
	volatile uint8_t x167 = 22U;
	static volatile int32_t t34 = 615278;

	t34 = (((x165<x166)-x167)-x168);

	if (t34 != -71004) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x170 = INT64_MIN;
	int64_t x171 = -1LL;

	t35 = (((x169<x170)-x171)-x172);

	if (t35 != 129LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x179 = 15660U;
	int32_t x180 = -1;
	volatile uint32_t t36 = 368U;

	t36 = (((x177<x178)-x179)-x180);

	if (t36 != 4294951638U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	static volatile int16_t x183 = -4517;
	int32_t t37 = 978;

	t37 = (((x181<x182)-x183)-x184);

	if (t37 != -28249) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x189 = UINT16_MAX;
	static int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MIN;
	volatile uint64_t x192 = 695630578LLU;
	volatile uint64_t t38 = 613950LLU;

	t38 = (((x189<x190)-x191)-x192);

	if (t38 != 18446744073013921166LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = 6;
	uint16_t x194 = 192U;
	uint32_t x195 = 1016833U;
	volatile int16_t x196 = INT16_MIN;
	volatile uint32_t t39 = 0U;

	t39 = (((x193<x194)-x195)-x196);

	if (t39 != 4293983232U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = UINT8_MAX;
	int32_t x198 = INT32_MIN;
	uint64_t x200 = UINT64_MAX;

	t40 = (((x197<x198)-x199)-x200);

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = -48396947LL;
	static int64_t x202 = -1LL;
	uint8_t x203 = 20U;
	int32_t x204 = INT32_MIN;
	static int32_t t41 = -27859896;

	t41 = (((x201<x202)-x203)-x204);

	if (t41 != 2147483629) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = -1;
	uint64_t x206 = 81375LLU;
	volatile int32_t x207 = -3483661;
	volatile uint8_t x208 = 13U;
	volatile int32_t t42 = 19;

	t42 = (((x205<x206)-x207)-x208);

	if (t42 != 3483648) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x209 = UINT64_MAX;
	int64_t x211 = 110LL;
	static int8_t x212 = -1;
	volatile int64_t t43 = 1440278067785630LL;

	t43 = (((x209<x210)-x211)-x212);

	if (t43 != -109LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x214 = UINT32_MAX;
	static volatile int16_t x215 = -1;
	int16_t x216 = INT16_MIN;
	int32_t t44 = -526270719;

	t44 = (((x213<x214)-x215)-x216);

	if (t44 != 32769) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	uint32_t x219 = 178583940U;
	static volatile uint32_t x220 = 0U;
	volatile uint32_t t45 = 22U;

	t45 = (((x217<x218)-x219)-x220);

	if (t45 != 4116383357U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x222 = INT16_MIN;
	static volatile uint16_t x223 = UINT16_MAX;
	volatile int16_t x224 = INT16_MAX;

	t46 = (((x221<x222)-x223)-x224);

	if (t46 != -98302) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x228 = -423;
	volatile uint64_t t47 = 231886798575LLU;

	t47 = (((x225<x226)-x227)-x228);

	if (t47 != 424LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MIN;
	static uint8_t x234 = UINT8_MAX;
	int8_t x236 = -25;
	static int64_t t48 = -9655LL;

	t48 = (((x233<x234)-x235)-x236);

	if (t48 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = 7;
	int16_t x238 = -1;
	int8_t x239 = INT8_MIN;
	static uint8_t x240 = UINT8_MAX;
	static volatile int32_t t49 = -2;

	t49 = (((x237<x238)-x239)-x240);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x248 = INT8_MIN;
	volatile int64_t t50 = -10526803720770LL;

	t50 = (((x245<x246)-x247)-x248);

	if (t50 != 130LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 3U;
	int16_t x251 = INT16_MAX;
	static int32_t x252 = -1;
	int32_t t51 = -130;

	t51 = (((x249<x250)-x251)-x252);

	if (t51 != -32765) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = -7031012063245526LL;
	static int8_t x256 = INT8_MIN;
	volatile int64_t t52 = 63043929286398LL;

	t52 = (((x253<x254)-x255)-x256);

	if (t52 != 7031012063245654LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x257 = INT64_MIN;
	static volatile uint16_t x258 = 31U;
	static uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t53 = 3152049114254033105LLU;

	t53 = (((x257<x258)-x259)-x260);

	if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x261 = INT64_MIN;
	int64_t x262 = -1LL;
	int32_t x263 = -1;
	volatile uint64_t x264 = 669213537386098LLU;
	static uint64_t t54 = 6900796LLU;

	t54 = (((x261<x262)-x263)-x264);

	if (t54 != 18446074860172165520LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x266 = -5;
	volatile uint16_t x267 = 0U;
	int32_t x268 = 79196030;
	static int32_t t55 = -12368;

	t55 = (((x265<x266)-x267)-x268);

	if (t55 != -79196029) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x269 = INT64_MIN;
	uint64_t x270 = 381617469683LLU;
	static volatile uint64_t x271 = 7589700271702369748LLU;
	int8_t x272 = INT8_MIN;
	uint64_t t56 = 31128LLU;

	t56 = (((x269<x270)-x271)-x272);

	if (t56 != 10857043802007181996LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x273 = INT16_MIN;
	int16_t x275 = INT16_MAX;
	int64_t x276 = -1LL;

	t57 = (((x273<x274)-x275)-x276);

	if (t57 != -32765LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x277 = INT8_MAX;
	static uint64_t x278 = UINT64_MAX;
	uint32_t x279 = 26034799U;
	uint8_t x280 = 0U;

	t58 = (((x277<x278)-x279)-x280);

	if (t58 != 4268932498U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MIN;
	volatile int64_t x282 = INT64_MAX;
	static uint32_t x283 = 5141081U;

	t59 = (((x281<x282)-x283)-x284);

	if (t59 != 4289826344U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x289 = UINT16_MAX;
	int8_t x291 = 11;
	int16_t x292 = INT16_MIN;
	int32_t t60 = 6546720;

	t60 = (((x289<x290)-x291)-x292);

	if (t60 != 32757) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x294 = UINT32_MAX;
	volatile uint8_t x295 = UINT8_MAX;
	volatile uint8_t x296 = UINT8_MAX;
	int32_t t61 = -1;

	t61 = (((x293<x294)-x295)-x296);

	if (t61 != -509) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x297 = 0U;
	int32_t x298 = INT32_MIN;
	static int16_t x299 = -1;
	volatile int16_t x300 = 1637;
	volatile int32_t t62 = -6;

	t62 = (((x297<x298)-x299)-x300);

	if (t62 != -1636) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x302 = INT32_MAX;
	int64_t x303 = INT64_MAX;
	uint64_t t63 = 4715LLU;

	t63 = (((x301<x302)-x303)-x304);

	if (t63 != 9223372036792500162LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MAX;
	uint8_t x310 = 8U;
	int16_t x311 = INT16_MAX;
	volatile int32_t t64 = 52679;

	t64 = (((x309<x310)-x311)-x312);

	if (t64 != -5827035) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x313 = 3395U;
	uint16_t x314 = 10U;
	int16_t x315 = INT16_MIN;
	static volatile int16_t x316 = -1;
	volatile int32_t t65 = 131558284;

	t65 = (((x313<x314)-x315)-x316);

	if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x317 = 6495U;
	int8_t x318 = -3;
	int16_t x319 = -1;
	int8_t x320 = INT8_MIN;
	volatile int32_t t66 = 118;

	t66 = (((x317<x318)-x319)-x320);

	if (t66 != 129) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MIN;
	int32_t x323 = -1;
	volatile int64_t t67 = -561714992268LL;

	t67 = (((x321<x322)-x323)-x324);

	if (t67 != -43632822691662LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = INT32_MAX;
	int8_t x331 = INT8_MIN;
	int16_t x332 = -145;
	volatile int32_t t68 = -430107109;

	t68 = (((x329<x330)-x331)-x332);

	if (t68 != 273) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x333 = INT16_MAX;
	volatile int32_t x334 = -7193;
	int16_t x335 = -217;
	uint16_t x336 = UINT16_MAX;
	int32_t t69 = 2180;

	t69 = (((x333<x334)-x335)-x336);

	if (t69 != -65318) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = 92;
	int8_t x339 = 0;
	volatile uint64_t t70 = 1103LLU;

	t70 = (((x337<x338)-x339)-x340);

	if (t70 != 18446743853282732976LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t71 = 4083;

	t71 = (((x341<x342)-x343)-x344);

	if (t71 != -65407) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x345 = 10U;
	int16_t x346 = INT16_MIN;
	uint16_t x347 = 1025U;
	int64_t t72 = -4446574LL;

	t72 = (((x345<x346)-x347)-x348);

	if (t72 != 9223372036854774783LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x349 = 24U;
	int16_t x350 = -18;
	int8_t x351 = -17;
	volatile int32_t x352 = 4;
	static volatile int32_t t73 = 0;

	t73 = (((x349<x350)-x351)-x352);

	if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x354 = INT32_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	volatile uint32_t t74 = 5555077U;

	t74 = (((x353<x354)-x355)-x356);

	if (t74 != 4294959539U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = 13;
	volatile int16_t x360 = 1;

	t75 = (((x357<x358)-x359)-x360);

	if (t75 != -13) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x361 = -1;
	volatile int32_t x362 = 9;
	int16_t x363 = 12619;
	volatile uint8_t x364 = 24U;

	t76 = (((x361<x362)-x363)-x364);

	if (t76 != -12642) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = INT32_MIN;
	uint16_t x370 = UINT16_MAX;
	static uint8_t x371 = UINT8_MAX;
	int32_t x372 = -161922471;
	int32_t t77 = 1384883;

	t77 = (((x369<x370)-x371)-x372);

	if (t77 != 161922217) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x373 = 3;
	int16_t x375 = -4101;
	int64_t t78 = -453896416174545618LL;

	t78 = (((x373<x374)-x375)-x376);

	if (t78 != 4103LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = 98U;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = 3683060LLU;
	uint8_t x380 = 1U;
	volatile uint64_t t79 = 185727LLU;

	t79 = (((x377<x378)-x379)-x380);

	if (t79 != 18446744073705868556LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x385 = UINT64_MAX;
	static int8_t x386 = INT8_MIN;
	static int64_t t80 = -1LL;

	t80 = (((x385<x386)-x387)-x388);

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x389 = 112906778;
	uint16_t x390 = UINT16_MAX;
	volatile int32_t x391 = -3;
	int16_t x392 = -60;
	static int32_t t81 = 14818749;

	t81 = (((x389<x390)-x391)-x392);

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x397 = INT64_MAX;
	uint16_t x399 = UINT16_MAX;
	uint32_t x400 = 513649587U;
	static uint32_t t82 = 12666959U;

	t82 = (((x397<x398)-x399)-x400);

	if (t82 != 3781252174U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x401 = -1;
	static volatile int8_t x402 = 1;
	int32_t x403 = 144451;
	int8_t x404 = INT8_MIN;
	int32_t t83 = -718056428;

	t83 = (((x401<x402)-x403)-x404);

	if (t83 != -144322) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x407 = -1527;
	int64_t x408 = -1LL;
	volatile int64_t t84 = 767LL;

	t84 = (((x405<x406)-x407)-x408);

	if (t84 != 1529LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = INT64_MAX;
	int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	uint32_t x412 = UINT32_MAX;
	uint32_t t85 = 96728U;

	t85 = (((x409<x410)-x411)-x412);

	if (t85 != 32769U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MIN;
	volatile int32_t t86 = 331;

	t86 = (((x413<x414)-x415)-x416);

	if (t86 != 32896) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x417 = -1;
	int32_t x418 = -1;
	uint64_t x419 = UINT64_MAX;
	int64_t x420 = INT64_MAX;
	static volatile uint64_t t87 = 49130LLU;

	t87 = (((x417<x418)-x419)-x420);

	if (t87 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x421 = 0U;
	int32_t x422 = INT32_MAX;
	static int32_t x423 = 2;
	volatile int16_t x424 = INT16_MAX;

	t88 = (((x421<x422)-x423)-x424);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x427 = 9U;
	uint32_t x428 = 7133U;
	static uint32_t t89 = 446U;

	t89 = (((x425<x426)-x427)-x428);

	if (t89 != 4294960155U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x429 = -175406816440LL;
	int32_t x430 = INT32_MIN;
	static int32_t x431 = 15505021;
	static volatile uint64_t t90 = 2LLU;

	t90 = (((x429<x430)-x431)-x432);

	if (t90 != 18446744073694039093LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x434 = 112782384LLU;
	static int16_t x435 = INT16_MIN;
	uint64_t x436 = 675180LLU;
	uint64_t t91 = 501LLU;

	t91 = (((x433<x434)-x435)-x436);

	if (t91 != 18446744073708909204LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x442 = -1;
	volatile uint64_t x443 = UINT64_MAX;
	uint32_t x444 = 20U;
	volatile uint64_t t92 = 319LLU;

	t92 = (((x441<x442)-x443)-x444);

	if (t92 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x446 = -1;
	uint32_t x447 = UINT32_MAX;
	uint8_t x448 = 51U;

	t93 = (((x445<x446)-x447)-x448);

	if (t93 != 4294967247U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x453 = UINT32_MAX;
	int8_t x454 = 0;
	int16_t x455 = -1;
	uint16_t x456 = 327U;

	t94 = (((x453<x454)-x455)-x456);

	if (t94 != -326) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x457 = INT64_MIN;
	int32_t x458 = -81441;
	int16_t x459 = -1;
	int64_t x460 = 788707102654LL;
	int64_t t95 = 3673LL;

	t95 = (((x457<x458)-x459)-x460);

	if (t95 != -788707102652LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = -1;
	int32_t x462 = -1;
	int16_t x463 = -1;
	int32_t t96 = -3;

	t96 = (((x461<x462)-x463)-x464);

	if (t96 != 35) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x465 = 240385LL;
	int64_t x466 = INT64_MIN;
	int8_t x467 = INT8_MIN;
	int16_t x468 = 0;
	volatile int32_t t97 = 6948;

	t97 = (((x465<x466)-x467)-x468);

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = INT16_MIN;
	int32_t x471 = -1;
	int8_t x472 = -23;
	int32_t t98 = 4374;

	t98 = (((x469<x470)-x471)-x472);

	if (t98 != 24) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x473 = -1;
	volatile uint8_t x475 = UINT8_MAX;
	int32_t x476 = -1;
	static volatile int32_t t99 = 7085;

	t99 = (((x473<x474)-x475)-x476);

	if (t99 != -254) { NG(); } else { ; }
	
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

