#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x12 = 1;
static int8_t x22 = 1;
uint32_t t3 = 5969U;
static volatile int32_t x28 = -5302021;
volatile int8_t x32 = INT8_MIN;
int32_t t5 = -5;
static int64_t x33 = -485LL;
static int8_t x36 = -1;
uint8_t x38 = 1U;
int8_t x40 = INT8_MIN;
int32_t x48 = INT32_MIN;
int64_t x61 = -1LL;
uint8_t x63 = 2U;
static volatile uint32_t t13 = 2133591729U;
uint8_t x86 = 27U;
volatile uint64_t t14 = 34320273642052LLU;
static volatile uint64_t x90 = UINT64_MAX;
int32_t x92 = -2458220;
static int8_t x93 = INT8_MAX;
volatile int64_t x95 = -1LL;
volatile int64_t t16 = 29869824578LL;
int16_t x99 = INT16_MAX;
int16_t x112 = INT16_MAX;
volatile int32_t t21 = -259169;
static int8_t x142 = 0;
volatile uint32_t t26 = 452U;
uint16_t x169 = 2U;
uint64_t x171 = 29LLU;
static int16_t x175 = INT16_MIN;
uint32_t x176 = UINT32_MAX;
volatile uint32_t x177 = 1910522670U;
uint32_t t29 = 3496U;
int8_t x184 = INT8_MIN;
static int32_t x205 = -1;
uint8_t x206 = UINT8_MAX;
static volatile int8_t x221 = INT8_MIN;
volatile int32_t t33 = -18675;
uint64_t t35 = 620867979LLU;
uint16_t x237 = UINT16_MAX;
int32_t x239 = -356047;
uint64_t t36 = 5839LLU;
uint64_t t37 = 66387LLU;
int64_t x259 = -1LL;
uint64_t x261 = UINT64_MAX;
volatile uint8_t x263 = 14U;
int16_t x266 = INT16_MIN;
static volatile int8_t x268 = INT8_MAX;
volatile uint32_t t43 = 40U;
int64_t x284 = INT64_MIN;
int64_t x285 = INT64_MIN;
int16_t x287 = INT16_MIN;
int64_t t46 = 13729LL;
uint32_t x292 = 200306U;
uint8_t x299 = 13U;
uint32_t x305 = UINT32_MAX;
uint64_t x314 = UINT64_MAX;
int32_t x315 = INT32_MIN;
static volatile int16_t x316 = -1;
static uint32_t x321 = 8179U;
int32_t x323 = INT32_MAX;
volatile uint64_t t53 = 16447763LLU;
static int16_t x325 = -22;
uint16_t x337 = 25U;
volatile int32_t t56 = -204694;
uint16_t x351 = UINT16_MAX;
static volatile uint32_t t59 = 180U;
int32_t x361 = INT32_MAX;
int64_t x362 = -1LL;
int8_t x372 = -1;
uint16_t x376 = 3U;
volatile int64_t t63 = 32569807LL;
int64_t x382 = INT64_MIN;
static int64_t t64 = -461831624796LL;
static int8_t x388 = INT8_MIN;
uint32_t x390 = 102112U;
uint16_t x391 = 4U;
int32_t x410 = -1;
volatile uint32_t t71 = 25986U;
uint16_t x423 = 25194U;
volatile uint16_t x424 = 6U;
uint8_t x432 = 0U;
int8_t x462 = 1;
static volatile int32_t t79 = 5412;
uint32_t x481 = 68U;
int16_t x492 = INT16_MIN;
volatile uint64_t t81 = 13858LLU;
volatile int32_t x493 = 316011414;
static volatile int32_t t82 = -52323;
static uint64_t x500 = UINT64_MAX;
int8_t x507 = INT8_MAX;
volatile int32_t t84 = 100;
static uint8_t x513 = 9U;
int64_t t86 = -47414659305LL;
uint64_t t89 = 44709732605346753LLU;
int32_t x536 = -1;
int32_t x550 = INT32_MIN;
int64_t x553 = INT64_MIN;
static int16_t x576 = INT16_MIN;
uint64_t x582 = UINT64_MAX;
volatile uint64_t t98 = 255022919897338672LLU;
int64_t t99 = 946LL;


void f0(void) {
	static int32_t x1 = -1;
	static int32_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 2296U;

	t0 = (((x1+x2)^x3)*x4);

	if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int16_t x6 = INT16_MIN;
	volatile int8_t x7 = INT8_MIN;
	static volatile int8_t x8 = 0;
	int32_t t1 = 27;

	t1 = (((x5+x6)^x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 230U;
	volatile int16_t x10 = -1;
	int32_t x11 = 26024;
	static volatile int32_t t2 = 318935;

	t2 = (((x9+x10)^x11)*x12);

	if (t2 != 25933) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	static int16_t x23 = 0;
	static volatile int16_t x24 = -1;

	t3 = (((x21+x22)^x23)*x24);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MIN;
	int64_t x27 = 0LL;
	int64_t t4 = -2802182LL;

	t4 = (((x25+x26)^x27)*x28);

	if (t4 != -22772006113744507LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = 6;
	static int32_t x30 = -1;
	volatile int8_t x31 = INT8_MAX;

	t5 = (((x29+x30)^x31)*x32);

	if (t5 != -15616) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x34 = UINT8_MAX;
	int8_t x35 = 7;
	volatile int64_t t6 = 53251868033578368LL;

	t6 = (((x33+x34)^x35)*x36);

	if (t6 != 227LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 9U;
	static int8_t x39 = -3;
	volatile int32_t t7 = -58279;

	t7 = (((x37+x38)^x39)*x40);

	if (t7 != 1152) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	static int8_t x42 = 2;
	int16_t x43 = 5360;
	volatile uint32_t x44 = 27973707U;
	volatile uint32_t t8 = 54354024U;

	t8 = (((x41+x42)^x43)*x44);

	if (t8 != 1457584795U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 0;
	uint64_t x46 = 21513831501631LLU;
	int16_t x47 = 30;
	volatile uint64_t t9 = 875704LLU;

	t9 = (((x45+x46)^x47)*x48);

	if (t9 != 8492549126993477632LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = INT8_MIN;
	volatile int16_t x55 = INT16_MAX;
	int64_t x56 = -19666062LL;
	volatile int64_t t10 = -141143831047763045LL;

	t10 = (((x53+x54)^x55)*x56);

	if (t10 != 644417519616LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = INT64_MIN;
	volatile uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = 1904098149LLU;
	uint64_t t11 = 14153LLU;

	t11 = (((x57+x58)^x59)*x60);

	if (t11 != 17401348921695764480LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x62 = 4;
	int32_t x64 = INT32_MIN;
	volatile int64_t t12 = 378142396LL;

	t12 = (((x61+x62)^x63)*x64);

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x73 = INT8_MIN;
	uint16_t x74 = 6363U;
	uint16_t x75 = 415U;
	static uint32_t x76 = UINT32_MAX;

	t13 = (((x73+x74)^x75)*x76);

	if (t13 != 4294960700U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x85 = 9838U;
	uint64_t x87 = 480434LLU;
	volatile int16_t x88 = -39;

	t14 = (((x85+x86)^x87)*x88);

	if (t14 != 18446744073690519811LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x91 = 93489U;
	uint64_t t15 = 2553LLU;

	t15 = (((x89+x90)^x91)*x92);

	if (t15 != 5279217072174360LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x94 = -1;
	int8_t x96 = INT8_MIN;

	t16 = (((x93+x94)^x95)*x96);

	if (t16 != 16256LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x97 = -1;
	uint8_t x98 = 13U;
	uint32_t x100 = 64507U;
	uint32_t t17 = 566U;

	t17 = (((x97+x98)^x99)*x100);

	if (t17 != 2112926785U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = -1;
	static int8_t x106 = 0;
	volatile uint8_t x107 = 0U;
	int16_t x108 = -1;
	static volatile int32_t t18 = 15789;

	t18 = (((x105+x106)^x107)*x108);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = -19897;
	int8_t x110 = INT8_MAX;
	volatile int8_t x111 = 55;
	volatile int32_t t19 = 66;

	t19 = (((x109+x110)^x111)*x112);

	if (t19 != -646394609) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = UINT8_MAX;
	static int64_t x115 = -1LL;
	int64_t x116 = -554LL;
	volatile int64_t t20 = -2LL;

	t20 = (((x113+x114)^x115)*x116);

	if (t20 != 141270LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x121 = 14U;
	volatile uint16_t x122 = 125U;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;

	t21 = (((x121+x122)^x123)*x124);

	if (t21 != 1069187072) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = -1;
	volatile uint8_t x134 = 36U;
	int16_t x135 = -1;
	uint64_t x136 = 4LLU;
	uint64_t t22 = 31377752718LLU;

	t22 = (((x133+x134)^x135)*x136);

	if (t22 != 18446744073709551472LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x141 = 6;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = 82U;
	volatile int32_t t23 = 129575873;

	t23 = (((x141+x142)^x143)*x144);

	if (t23 != -10004) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x149 = INT16_MIN;
	volatile int64_t x150 = -91673186746185LL;
	int8_t x151 = -1;
	volatile int8_t x152 = INT8_MIN;
	volatile int64_t t24 = 1756816805057704802LL;

	t24 = (((x149+x150)^x151)*x152);

	if (t24 != -11734167907705856LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x153 = INT8_MIN;
	volatile uint32_t x154 = 21490U;
	uint16_t x155 = 11U;
	int32_t x156 = INT32_MIN;
	volatile uint32_t t25 = 3U;

	t25 = (((x153+x154)^x155)*x156);

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x157 = -1;
	uint32_t x158 = 833207448U;
	int8_t x159 = INT8_MIN;
	static uint32_t x160 = 28U;

	t26 = (((x157+x158)^x159)*x160);

	if (t26 != 2439992964U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x170 = -7181;
	volatile uint8_t x172 = UINT8_MAX;
	volatile uint64_t t27 = 28476725541887LLU;

	t27 = (((x169+x170)^x171)*x172);

	if (t27 != 18446744073707717656LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x173 = UINT8_MAX;
	int8_t x174 = INT8_MIN;
	static volatile uint32_t t28 = 195687381U;

	t28 = (((x173+x174)^x175)*x176);

	if (t28 != 32641U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x178 = 6545U;
	uint16_t x179 = UINT16_MAX;
	static uint32_t x180 = UINT32_MAX;

	t29 = (((x177+x178)^x179)*x180);

	if (t29 != 2384420032U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x181 = 1;
	static int8_t x182 = INT8_MIN;
	int64_t x183 = 503246088848LL;
	int64_t t30 = -9321LL;

	t30 = (((x181+x182)^x183)*x184);

	if (t30 != 64415499384704LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x189 = 1U;
	static int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	int32_t x192 = 854610;
	volatile int32_t t31 = 28981;

	t31 = (((x189+x190)^x191)*x192);

	if (t31 != -110244690) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x207 = 935U;
	static volatile int8_t x208 = INT8_MIN;
	int32_t t32 = 0;

	t32 = (((x205+x206)^x207)*x208);

	if (t32 != -109696) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x222 = 24U;
	static int8_t x223 = -15;
	static uint8_t x224 = 9U;

	t33 = (((x221+x222)^x223)*x224);

	if (t33 != 945) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x225 = 232LLU;
	static int16_t x226 = -1;
	int64_t x227 = -20782715LL;
	uint32_t x228 = 128617U;
	uint64_t t34 = 6LLU;

	t34 = (((x225+x226)^x227)*x228);

	if (t34 != 18446741400694594866LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x233 = 3U;
	uint16_t x234 = 13797U;
	static uint64_t x235 = UINT64_MAX;
	static volatile int8_t x236 = 3;

	t35 = (((x233+x234)^x235)*x236);

	if (t35 != 18446744073709510213LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x238 = 835858489LLU;
	static int8_t x240 = INT8_MIN;

	t36 = (((x237+x238)^x239)*x240);

	if (t36 != 107024972672LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x241 = -25677860109LL;
	int64_t x242 = -1LL;
	uint64_t x243 = 12LLU;
	int32_t x244 = INT32_MIN;

	t37 = (((x241+x242)^x243)*x244);

	if (t37 != 18249296528667574272LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x249 = UINT8_MAX;
	uint32_t x250 = 837U;
	int8_t x251 = 6;
	int64_t x252 = -415211727LL;
	int64_t t38 = -2473862259882354790LL;

	t38 = (((x249+x250)^x251)*x252);

	if (t38 != -452580782430LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x253 = UINT8_MAX;
	uint32_t x254 = UINT32_MAX;
	uint8_t x255 = 53U;
	uint32_t x256 = 14628724U;
	volatile uint32_t t39 = 1518145766U;

	t39 = (((x253+x254)^x255)*x256);

	if (t39 != 2969630972U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x257 = -1658386;
	uint32_t x258 = 1U;
	static int8_t x260 = -1;
	int64_t t40 = 189LL;

	t40 = (((x257+x258)^x259)*x260);

	if (t40 != 4293308912LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x262 = INT8_MAX;
	static int16_t x264 = INT16_MIN;
	uint64_t t41 = 2012LLU;

	t41 = (((x261+x262)^x263)*x264);

	if (t41 != 18446744073705881600LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x265 = 41U;
	uint8_t x267 = UINT8_MAX;
	static volatile int32_t t42 = 564984;

	t42 = (((x265+x266)^x267)*x268);

	if (t42 != -4134358) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x269 = INT16_MIN;
	static uint32_t x270 = 95U;
	int8_t x271 = -7;
	uint32_t x272 = 896876U;

	t43 = (((x269+x270)^x271)*x272);

	if (t43 != 3538310152U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x277 = 1911;
	int8_t x278 = INT8_MIN;
	int16_t x279 = 6931;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t44 = 1;

	t44 = (((x277+x278)^x279)*x280);

	if (t44 != 1951260) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x281 = -13;
	uint64_t x282 = 213065048422351LLU;
	uint32_t x283 = 3036817U;
	volatile uint64_t t45 = 132286929242LLU;

	t45 = (((x281+x282)^x283)*x284);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x286 = 37851549;
	int8_t x288 = -1;

	t46 = (((x285+x286)^x287)*x288);

	if (t46 != -9223372036816900509LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	volatile int32_t x291 = 3062979;
	volatile uint32_t t47 = 46U;

	t47 = (((x289+x290)^x291)*x292);

	if (t47 != 2917113302U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = UINT64_MAX;
	static volatile int8_t x296 = -1;
	volatile uint64_t t48 = 2786979600104298LLU;

	t48 = (((x293+x294)^x295)*x296);

	if (t48 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x297 = UINT64_MAX;
	static volatile uint8_t x298 = UINT8_MAX;
	uint64_t x300 = 5694LLU;
	static volatile uint64_t t49 = 6023052LLU;

	t49 = (((x297+x298)^x299)*x300);

	if (t49 != 1383642LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x306 = -7941;
	int32_t x307 = -1;
	static int32_t x308 = -1;
	uint32_t t50 = 0U;

	t50 = (((x305+x306)^x307)*x308);

	if (t50 != 4294959355U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x313 = INT32_MIN;
	uint64_t t51 = 119633749LLU;

	t51 = (((x313+x314)^x315)*x316);

	if (t51 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = INT16_MIN;
	static int16_t x318 = -1;
	int32_t x319 = INT32_MIN;
	static int64_t x320 = -1LL;
	int64_t t52 = -547504LL;

	t52 = (((x317+x318)^x319)*x320);

	if (t52 != -2147450879LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x322 = 230342088778666977LLU;
	static uint8_t x324 = UINT8_MAX;

	t53 = (((x321+x322)^x323)*x324);

	if (t53 != 3397000327810358997LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x326 = -1LL;
	static int8_t x327 = INT8_MIN;
	int32_t x328 = -1;
	static volatile int64_t t54 = -3608813188739LL;

	t54 = (((x325+x326)^x327)*x328);

	if (t54 != -105LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x333 = 6591LL;
	int32_t x334 = 1684;
	static int16_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int64_t t55 = 2102916235854034LL;

	t55 = (((x333+x334)^x335)*x336);

	if (t55 != 1059328LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x338 = INT8_MIN;
	static int32_t x339 = 49503;
	volatile int8_t x340 = INT8_MIN;

	t56 = (((x337+x338)^x339)*x340);

	if (t56 != 6331648) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x345 = 1683U;
	int16_t x346 = -7;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = -1;
	int32_t t57 = 351875395;

	t57 = (((x345+x346)^x347)*x348);

	if (t57 != -1651) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = INT32_MIN;
	static uint16_t x350 = 8U;
	int16_t x352 = -1;
	int32_t t58 = -51;

	t58 = (((x349+x350)^x351)*x352);

	if (t58 != 2147418121) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x353 = -1;
	uint32_t x354 = 27470U;
	uint16_t x355 = 4U;
	int8_t x356 = -29;

	t59 = (((x353+x354)^x355)*x356);

	if (t59 != 4294170811U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x363 = INT8_MIN;
	static uint16_t x364 = 196U;
	int64_t t60 = -28812004LL;

	t60 = (((x361+x362)^x363)*x364);

	if (t60 != -420906770312LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x369 = 468405912U;
	int64_t x370 = INT64_MIN;
	static int32_t x371 = INT32_MIN;
	volatile int64_t t61 = -234371501518042LL;

	t61 = (((x369+x370)^x371)*x372);

	if (t61 != -9223372035175698072LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x373 = UINT32_MAX;
	static int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	volatile uint32_t t62 = 2459U;

	t62 = (((x373+x374)^x375)*x376);

	if (t62 != 97917U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x377 = INT16_MIN;
	static int16_t x378 = INT16_MIN;
	volatile int32_t x379 = -68905;
	int64_t x380 = 6830055LL;

	t63 = (((x377+x378)^x379)*x380);

	if (t63 != 872218513665LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t x383 = -1;
	static int8_t x384 = 0;

	t64 = (((x381+x382)^x383)*x384);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x385 = 13U;
	uint8_t x386 = UINT8_MAX;
	volatile int8_t x387 = INT8_MIN;
	int32_t t65 = 67;

	t65 = (((x385+x386)^x387)*x388);

	if (t65 != 47616) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x389 = -1;
	int8_t x392 = INT8_MIN;
	uint32_t t66 = 4U;

	t66 = (((x389+x390)^x391)*x392);

	if (t66 != 4281897600U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x393 = -3;
	static volatile int32_t x394 = 7;
	uint64_t x395 = UINT64_MAX;
	int32_t x396 = -3097;
	static uint64_t t67 = 74318890079335640LLU;

	t67 = (((x393+x394)^x395)*x396);

	if (t67 != 15485LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x401 = 354U;
	static uint16_t x402 = 23U;
	uint16_t x403 = UINT16_MAX;
	static int32_t x404 = -1;
	volatile int32_t t68 = 3812;

	t68 = (((x401+x402)^x403)*x404);

	if (t68 != -65158) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x409 = UINT32_MAX;
	static int16_t x411 = -5418;
	static volatile int16_t x412 = -1;
	uint32_t t69 = 1874527U;

	t69 = (((x409+x410)^x411)*x412);

	if (t69 != 4294961880U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x413 = 4583419LL;
	uint32_t x414 = 152354543U;
	volatile uint32_t x415 = UINT32_MAX;
	static volatile int32_t x416 = 6065060;
	int64_t t70 = -206LL;

	t70 = (((x413+x414)^x415)*x416);

	if (t70 != 25097396186404980LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x417 = INT32_MIN;
	uint32_t x418 = UINT32_MAX;
	uint32_t x419 = 3154U;
	volatile int32_t x420 = INT32_MIN;

	t71 = (((x417+x418)^x419)*x420);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x421 = 2343312LL;
	int32_t x422 = 37;
	volatile int64_t t72 = -155944LL;

	t72 = (((x421+x422)^x423)*x424);

	if (t72 != 14014266LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x429 = INT8_MAX;
	int8_t x430 = 3;
	static uint64_t x431 = UINT64_MAX;
	volatile uint64_t t73 = 12827809167015LLU;

	t73 = (((x429+x430)^x431)*x432);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x437 = 2;
	uint16_t x438 = 109U;
	int16_t x439 = -1;
	int8_t x440 = INT8_MIN;
	volatile int32_t t74 = 65213663;

	t74 = (((x437+x438)^x439)*x440);

	if (t74 != 14336) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x441 = 9543396045622LLU;
	int32_t x442 = -1;
	int32_t x443 = INT32_MAX;
	static int16_t x444 = 10;
	volatile uint64_t t75 = 1031604770436LLU;

	t75 = (((x441+x442)^x443)*x444);

	if (t75 != 95412911341540LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x445 = INT8_MAX;
	volatile uint16_t x446 = UINT16_MAX;
	uint32_t x447 = UINT32_MAX;
	int64_t x448 = 29490LL;
	volatile int64_t t76 = 677228771765LL;

	t76 = (((x445+x446)^x447)*x448);

	if (t76 != 126656649157170LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x453 = 117854852322466330LLU;
	static volatile int32_t x454 = INT32_MIN;
	int16_t x455 = -1;
	uint64_t x456 = 25342555838LLU;
	uint64_t t77 = 3310146793448LLU;

	t77 = (((x453+x454)^x455)*x456);

	if (t77 != 17698293882487205366LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x457 = -1;
	int8_t x458 = 1;
	int8_t x459 = 20;
	uint64_t x460 = UINT64_MAX;
	uint64_t t78 = 2820LLU;

	t78 = (((x457+x458)^x459)*x460);

	if (t78 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x461 = 63762;
	volatile int16_t x463 = INT16_MAX;
	static int32_t x464 = 47;

	t79 = (((x461+x462)^x463)*x464);

	if (t79 != 1623380) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x482 = -1;
	int64_t x483 = INT64_MAX;
	int16_t x484 = -1;
	int64_t t80 = 975880882769LL;

	t80 = (((x481+x482)^x483)*x484);

	if (t80 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x489 = 130882101306547LLU;
	uint64_t x490 = 3264898760LLU;
	static uint8_t x491 = UINT8_MAX;

	t81 = (((x489+x490)^x491)*x492);

	if (t81 != 14157892393893756928LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x494 = INT8_MIN;
	static int8_t x495 = -8;
	int16_t x496 = -1;

	t82 = (((x493+x494)^x495)*x496);

	if (t82 != 316011282) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x497 = 516U;
	static int8_t x498 = -1;
	uint16_t x499 = 39U;
	volatile uint64_t t83 = 15LLU;

	t83 = (((x497+x498)^x499)*x500);

	if (t83 != 18446744073709551068LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x505 = -1;
	int8_t x506 = 0;
	static int8_t x508 = INT8_MIN;

	t84 = (((x505+x506)^x507)*x508);

	if (t84 != 16384) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x509 = INT16_MAX;
	volatile int32_t x510 = -123;
	uint16_t x511 = 30338U;
	int16_t x512 = INT16_MAX;
	int32_t t85 = -65;

	t85 = (((x509+x510)^x511)*x512);

	if (t85 != 75691770) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x514 = UINT8_MAX;
	volatile int8_t x515 = INT8_MAX;
	int64_t x516 = -1LL;

	t86 = (((x513+x514)^x515)*x516);

	if (t86 != -375LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x517 = -1;
	int32_t x518 = -2312360;
	static int64_t x519 = 1119189977857LL;
	uint64_t x520 = UINT64_MAX;
	static uint64_t t87 = 8635LLU;

	t87 = (((x517+x518)^x519)*x520);

	if (t87 != 1119187665834LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x521 = -234;
	int64_t x522 = INT64_MAX;
	static uint8_t x523 = 6U;
	int16_t x524 = -1;
	volatile int64_t t88 = 109635461725843LL;

	t88 = (((x521+x522)^x523)*x524);

	if (t88 != -9223372036854775571LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x525 = -383480LL;
	uint64_t x526 = 3882LLU;
	int32_t x527 = -1;
	int8_t x528 = 24;

	t89 = (((x525+x526)^x527)*x528);

	if (t89 != 9110328LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x533 = -1975668;
	int64_t x534 = 7992941987744315LL;
	volatile uint16_t x535 = 65U;
	int64_t t90 = -20875LL;

	t90 = (((x533+x534)^x535)*x536);

	if (t90 != -7992941985768582LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x541 = UINT64_MAX;
	int16_t x542 = -1;
	static volatile int16_t x543 = INT16_MAX;
	int16_t x544 = INT16_MAX;
	static uint64_t t91 = 255667637438LLU;

	t91 = (((x541+x542)^x543)*x544);

	if (t91 != 18446744072635875327LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x549 = 0U;
	static uint16_t x551 = UINT16_MAX;
	volatile uint32_t x552 = 148853U;
	volatile uint32_t t92 = 40U;

	t92 = (((x549+x550)^x551)*x552);

	if (t92 != 3312630411U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x554 = 503241LLU;
	int64_t x555 = INT64_MAX;
	int64_t x556 = INT64_MAX;
	uint64_t t93 = 47366232LLU;

	t93 = (((x553+x554)^x555)*x556);

	if (t93 != 503242LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x561 = INT16_MIN;
	uint32_t x562 = 1U;
	uint16_t x563 = 41U;
	int16_t x564 = INT16_MIN;
	static uint32_t t94 = 2851U;

	t94 = (((x561+x562)^x563)*x564);

	if (t94 != 1072431104U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x565 = INT16_MIN;
	uint32_t x566 = 7468233U;
	static uint16_t x567 = UINT16_MAX;
	uint16_t x568 = 1U;
	uint32_t t95 = 2122U;

	t95 = (((x565+x566)^x567)*x568);

	if (t95 != 7441206U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x573 = INT8_MAX;
	int32_t x574 = -1;
	int8_t x575 = -7;
	static volatile int32_t t96 = -7271;

	t96 = (((x573+x574)^x575)*x576);

	if (t96 != 3964928) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x577 = -1;
	static int8_t x578 = -1;
	uint16_t x579 = 15600U;
	uint64_t x580 = 3027441600LLU;
	volatile uint64_t t97 = 7744808962893078362LLU;

	t97 = (((x577+x578)^x579)*x580);

	if (t97 != 18446696839565708416LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x581 = -107;
	uint16_t x583 = UINT16_MAX;
	static int64_t x584 = INT64_MIN;

	t98 = (((x581+x582)^x583)*x584);

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x585 = 75753LL;
	int16_t x586 = -1;
	static uint32_t x587 = 199U;
	int8_t x588 = 0;

	t99 = (((x585+x586)^x587)*x588);

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

