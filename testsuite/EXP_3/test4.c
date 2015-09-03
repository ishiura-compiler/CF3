#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
static int64_t x4 = INT64_MAX;
uint16_t x26 = UINT16_MAX;
int32_t x31 = -1;
int32_t x38 = INT32_MIN;
static int32_t t5 = 337219;
int64_t t7 = -1140417513157LL;
int64_t x62 = -42574LL;
uint64_t t10 = 1LLU;
int32_t x67 = -180560;
volatile int16_t x68 = -185;
uint16_t x73 = 23U;
volatile int32_t t14 = 0;
volatile uint8_t x97 = 12U;
int8_t x99 = INT8_MIN;
volatile uint32_t x102 = 8580U;
uint8_t x103 = 6U;
uint16_t x108 = 3323U;
uint64_t x111 = 94839LLU;
int16_t x113 = INT16_MIN;
volatile int32_t x114 = INT32_MAX;
volatile uint16_t x118 = UINT16_MAX;
static volatile uint32_t t21 = 483399U;
int32_t x146 = INT32_MAX;
int64_t x147 = INT64_MIN;
uint32_t x148 = UINT32_MAX;
volatile int32_t x152 = 641119209;
volatile int64_t t27 = 50695427376500LL;
uint16_t x157 = UINT16_MAX;
int32_t x160 = -1949;
volatile uint64_t t28 = 7892843901133LLU;
volatile uint64_t x169 = UINT64_MAX;
int16_t x172 = -18;
int8_t x176 = INT8_MIN;
int16_t x186 = -130;
volatile int16_t x189 = -1;
volatile uint32_t t36 = 3U;
static int64_t x199 = -1LL;
int32_t x207 = -1;
uint8_t x211 = 61U;
int16_t x214 = INT16_MAX;
int32_t x220 = -44820;
static int64_t x225 = INT64_MIN;
int8_t x230 = -10;
uint32_t t44 = 20183776U;
int16_t x250 = INT16_MIN;
volatile uint64_t t50 = 321166LLU;
uint64_t t51 = 1LLU;
volatile int32_t x293 = 137966;
volatile uint8_t x296 = 107U;
static volatile uint64_t x303 = UINT64_MAX;
uint32_t x307 = 3117217U;
static int64_t t58 = -5975560715755LL;
uint8_t x310 = 20U;
int16_t x317 = INT16_MAX;
int64_t x319 = 101277335LL;
int32_t x322 = INT32_MIN;
volatile uint16_t x331 = 2U;
uint32_t x332 = 5395U;
volatile uint16_t x335 = UINT16_MAX;
uint64_t x337 = 775365282LLU;
volatile uint64_t t65 = 76312541968LLU;
static int32_t x350 = 916;
uint16_t x357 = 23U;
static volatile int32_t t68 = -154794;
int16_t x367 = 308;
static int8_t x389 = INT8_MIN;
int16_t x392 = 174;
volatile int64_t x395 = 947494890038LL;
uint8_t x410 = UINT8_MAX;
int16_t x419 = -1;
static int16_t x423 = INT16_MAX;
volatile int16_t x424 = INT16_MAX;
int64_t x431 = INT64_MAX;
uint32_t x442 = UINT32_MAX;
int64_t x446 = 268071244LL;
int16_t x450 = INT16_MAX;
int16_t x455 = -7838;
volatile int64_t t85 = 44657704289192LL;
volatile int64_t x466 = INT64_MIN;
uint64_t x467 = 4LLU;
volatile uint64_t t88 = 13LLU;
static int8_t x473 = -1;
int64_t x481 = 0LL;
int8_t x483 = -1;
static uint16_t x490 = 9107U;
uint8_t x500 = 57U;
volatile uint64_t x502 = 2570477131LLU;
volatile uint64_t t96 = 1455LLU;
uint64_t x507 = 33LLU;
volatile int32_t x508 = -29460811;
int64_t t99 = -233LL;


void f0(void) {
	static int32_t x1 = 33;
	static int32_t x3 = -98893247;
	int64_t t0 = -907545LL;

	t0 = ((x1+x2)/(x3+x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = 112837607714721LL;
	static int8_t x10 = -1;
	uint32_t x11 = 100249670U;
	int8_t x12 = -1;
	int64_t t1 = 928854743008268600LL;

	t1 = ((x9+x10)/(x11+x12));

	if (t1 != 1125565LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	int64_t x18 = 111795453047653625LL;
	volatile int16_t x19 = INT16_MAX;
	int16_t x20 = -1;
	int64_t t2 = -58993965566LL;

	t2 = ((x17+x18)/(x19+x20));

	if (t2 != 3411934720371LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	volatile uint32_t x27 = 7U;
	volatile int16_t x28 = INT16_MAX;
	volatile uint32_t t3 = 5584389U;

	t3 = ((x25+x26)/(x27+x28));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = 0U;
	uint8_t x30 = UINT8_MAX;
	int16_t x32 = -1;
	int32_t t4 = 248548698;

	t4 = ((x29+x30)/(x31+x32));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MAX;
	volatile int16_t x39 = 176;
	uint8_t x40 = 1U;

	t5 = ((x37+x38)/(x39+x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x41 = 126040914994549842LLU;
	int8_t x42 = INT8_MIN;
	int16_t x43 = -1;
	volatile int8_t x44 = INT8_MAX;
	volatile uint64_t t6 = 790660LLU;

	t6 = ((x41+x42)/(x43+x44));

	if (t6 != 1000324722178965LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = -1;
	int64_t x46 = -1297297734358640LL;
	int8_t x47 = -1;
	static uint32_t x48 = 9009U;

	t7 = ((x45+x46)/(x47+x48));

	if (t7 != -144016178325LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x49 = UINT8_MAX;
	volatile int16_t x50 = -1;
	uint64_t x51 = 22027481075LLU;
	volatile int32_t x52 = INT32_MIN;
	volatile uint64_t t8 = 45861519LLU;

	t8 = ((x49+x50)/(x51+x52));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 16187779LLU;
	uint32_t x58 = UINT32_MAX;
	volatile uint64_t x59 = 1413LLU;
	static int64_t x60 = -1LL;
	uint64_t t9 = 10984575045LLU;

	t9 = ((x57+x58)/(x59+x60));

	if (t9 != 3053225LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 6460496423772693LLU;
	uint16_t x63 = 40U;
	uint32_t x64 = UINT32_MAX;

	t10 = ((x61+x62)/(x63+x64));

	if (t10 != 165653754454618LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x65 = 503472LLU;
	static volatile uint16_t x66 = 202U;
	volatile uint64_t t11 = 107315219183167LLU;

	t11 = ((x65+x66)/(x67+x68));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x74 = 149LLU;
	int8_t x75 = 54;
	uint32_t x76 = UINT32_MAX;
	uint64_t t12 = 427951237LLU;

	t12 = ((x73+x74)/(x75+x76));

	if (t12 != 3LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = -8586;
	volatile int8_t x82 = INT8_MIN;
	int16_t x83 = -10116;
	int32_t x84 = INT32_MAX;
	int32_t t13 = -1;

	t13 = ((x81+x82)/(x83+x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = -1;
	volatile int32_t x86 = 652773277;
	int32_t x87 = -1;
	int32_t x88 = 334287998;

	t14 = ((x85+x86)/(x87+x88));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x93 = 94U;
	volatile uint64_t x94 = 451904213188312410LLU;
	uint64_t x95 = 44671817573LLU;
	static int8_t x96 = -1;
	volatile uint64_t t15 = 499293729LLU;

	t15 = ((x93+x94)/(x95+x96));

	if (t15 != 10116091LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x98 = 479;
	volatile int32_t x100 = 147;
	volatile int32_t t16 = -2089920;

	t16 = ((x97+x98)/(x99+x100));

	if (t16 != 25) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x101 = 64;
	static volatile int64_t x104 = INT64_MIN;
	static int64_t t17 = 1252825038437LL;

	t17 = ((x101+x102)/(x103+x104));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = -390LL;
	uint16_t x107 = UINT16_MAX;
	int64_t t18 = -933293645168982LL;

	t18 = ((x105+x106)/(x107+x108));

	if (t18 != -31187LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -1;
	int8_t x110 = -1;
	static uint8_t x112 = 5U;
	volatile uint64_t t19 = 705LLU;

	t19 = ((x109+x110)/(x111+x112));

	if (t19 != 194495635714537LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x115 = INT8_MAX;
	int8_t x116 = -1;
	static int32_t t20 = -2747;

	t20 = ((x113+x114)/(x115+x116));

	if (t20 != 17043260) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 26587U;
	static volatile int32_t x119 = 6074;
	volatile int32_t x120 = -1692604;

	t21 = ((x117+x118)/(x119+x120));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = 22;
	int64_t x131 = -1LL;
	int8_t x132 = INT8_MIN;
	static int64_t t22 = -269050057195297LL;

	t22 = ((x129+x130)/(x131+x132));

	if (t22 != 16647159LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = INT16_MAX;
	static int8_t x138 = -16;
	int8_t x139 = -1;
	uint32_t x140 = 574632U;
	volatile uint32_t t23 = 232253091U;

	t23 = ((x137+x138)/(x139+x140));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = -37LL;
	int64_t x143 = 128705331140LL;
	int32_t x144 = -1;
	volatile uint64_t t24 = 7034307812772624LLU;

	t24 = ((x141+x142)/(x143+x144));

	if (t24 != 143325407LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x145 = INT8_MIN;
	volatile int64_t t25 = -2815973LL;

	t25 = ((x145+x146)/(x147+x148));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x149 = INT64_MIN;
	int32_t x150 = 10094;
	int8_t x151 = INT8_MAX;
	volatile int64_t t26 = -1309LL;

	t26 = ((x149+x150)/(x151+x152));

	if (t26 != -14386357607LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = -1LL;
	static int32_t x154 = 233;
	static volatile int64_t x155 = -1LL;
	uint32_t x156 = 407U;

	t27 = ((x153+x154)/(x155+x156));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 1760LLU;

	t28 = ((x157+x158)/(x159+x160));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x161 = 865U;
	volatile int8_t x162 = INT8_MAX;
	int32_t x163 = 11476;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t29 = 0;

	t29 = ((x161+x162)/(x163+x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x165 = 0;
	static volatile int32_t x166 = -1609;
	uint16_t x167 = 63U;
	int64_t x168 = -1LL;
	int64_t t30 = 66070LL;

	t30 = ((x165+x166)/(x167+x168));

	if (t30 != -25LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x170 = 0U;
	int8_t x171 = -1;
	uint64_t t31 = 130915186408901597LLU;

	t31 = ((x169+x170)/(x171+x172));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x173 = 0U;
	uint64_t x174 = UINT64_MAX;
	volatile int16_t x175 = -1;
	static uint64_t t32 = 924663895666103LLU;

	t32 = ((x173+x174)/(x175+x176));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = INT64_MAX;
	int8_t x178 = -1;
	volatile int8_t x179 = INT8_MIN;
	static volatile int16_t x180 = INT16_MAX;
	int64_t t33 = 127779736475856530LL;

	t33 = ((x177+x178)/(x179+x180));

	if (t33 != 282587457852715LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = -3;
	int8_t x182 = INT8_MIN;
	int16_t x183 = -1;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t34 = 6;

	t34 = ((x181+x182)/(x183+x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x185 = UINT64_MAX;
	static int8_t x187 = -1;
	uint8_t x188 = 10U;
	uint64_t t35 = 997LLU;

	t35 = ((x185+x186)/(x187+x188));

	if (t35 != 2049638230412172387LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	uint32_t x192 = 987608502U;

	t36 = ((x189+x190)/(x191+x192));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = INT8_MAX;
	uint64_t x198 = UINT64_MAX;
	static int64_t x200 = INT64_MAX;
	volatile uint64_t t37 = 1864238876LLU;

	t37 = ((x197+x198)/(x199+x200));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = -5;
	volatile uint8_t x208 = 23U;
	static int32_t t38 = 902;

	t38 = ((x205+x206)/(x207+x208));

	if (t38 != -6) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = -1;
	volatile int32_t x210 = -1;
	int64_t x212 = -42428960724LL;
	volatile int64_t t39 = -70660301LL;

	t39 = ((x209+x210)/(x211+x212));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x213 = -1LL;
	int32_t x215 = INT32_MIN;
	int64_t x216 = -1LL;
	int64_t t40 = 27LL;

	t40 = ((x213+x214)/(x215+x216));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = INT16_MIN;
	volatile uint32_t x218 = 174402706U;
	volatile int32_t x219 = 12;
	volatile uint32_t t41 = 587U;

	t41 = ((x217+x218)/(x219+x220));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x226 = INT32_MAX;
	int64_t x227 = -1LL;
	int64_t x228 = -1LL;
	static volatile int64_t t42 = -229159119525024027LL;

	t42 = ((x225+x226)/(x227+x228));

	if (t42 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x229 = INT16_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t43 = 27178920;

	t43 = ((x229+x230)/(x231+x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	volatile uint32_t x243 = UINT32_MAX;
	static int16_t x244 = INT16_MIN;

	t44 = ((x241+x242)/(x243+x244));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x249 = 1U;
	int64_t x251 = -213143861013345LL;
	int32_t x252 = INT32_MIN;
	volatile int64_t t45 = -5184261719349450LL;

	t45 = ((x249+x250)/(x251+x252));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MAX;
	uint64_t x256 = 926302486368959LLU;
	volatile uint64_t t46 = 27091LLU;

	t46 = ((x253+x254)/(x255+x256));

	if (t46 != 9957LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x257 = -1LL;
	volatile uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 1959515625U;
	int8_t x260 = INT8_MIN;
	volatile int64_t t47 = 35094LL;

	t47 = ((x257+x258)/(x259+x260));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x261 = 52;
	volatile int16_t x262 = INT16_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	uint16_t x264 = 8U;
	uint32_t t48 = 6U;

	t48 = ((x261+x262)/(x263+x264));

	if (t48 != 613562082U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x265 = -1;
	static int16_t x266 = -29;
	uint64_t x267 = 268116244848LLU;
	int8_t x268 = INT8_MAX;
	volatile uint64_t t49 = 9680741233149286LLU;

	t49 = ((x265+x266)/(x267+x268));

	if (t49 != 68801292LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = 337567251986LLU;
	int32_t x274 = INT32_MIN;
	static int16_t x275 = INT16_MIN;
	volatile uint32_t x276 = UINT32_MAX;

	t50 = ((x273+x274)/(x275+x276));

	if (t50 != 78LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x277 = UINT16_MAX;
	uint64_t x278 = UINT64_MAX;
	static int32_t x279 = 190317;
	int8_t x280 = INT8_MIN;

	t51 = ((x277+x278)/(x279+x280));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = -1;
	int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MAX;
	int32_t t52 = -8297014;

	t52 = ((x281+x282)/(x283+x284));

	if (t52 != 32769) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x285 = 44074;
	int16_t x286 = INT16_MAX;
	int64_t x287 = -1LL;
	int16_t x288 = -1;
	int64_t t53 = -25008329166011LL;

	t53 = ((x285+x286)/(x287+x288));

	if (t53 != -38420LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x289 = -1;
	int16_t x290 = 1;
	uint8_t x291 = 0U;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t54 = -14;

	t54 = ((x289+x290)/(x291+x292));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x294 = 781LLU;
	int16_t x295 = INT16_MIN;
	uint64_t t55 = 58245782948LLU;

	t55 = ((x293+x294)/(x295+x296));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = INT64_MAX;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MAX;
	volatile int64_t t56 = 1318409331620123247LL;

	t56 = ((x297+x298)/(x299+x300));

	if (t56 != 4295032835LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x301 = -1;
	int8_t x302 = INT8_MIN;
	uint8_t x304 = 2U;
	uint64_t t57 = 6LLU;

	t57 = ((x301+x302)/(x303+x304));

	if (t57 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x305 = -48909813335874LL;
	volatile int8_t x306 = INT8_MAX;
	int32_t x308 = -6;

	t58 = ((x305+x306)/(x307+x308));

	if (t58 != -15690247LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x309 = -1;
	volatile int32_t x311 = -1;
	static uint64_t x312 = 203233327488LLU;
	uint64_t t59 = 640LLU;

	t59 = ((x309+x310)/(x311+x312));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x318 = INT8_MAX;
	uint16_t x320 = 57U;
	volatile int64_t t60 = 11098925LL;

	t60 = ((x317+x318)/(x319+x320));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x321 = 1186093LLU;
	int64_t x323 = INT64_MAX;
	int8_t x324 = INT8_MIN;
	volatile uint64_t t61 = 10728820802308031LLU;

	t61 = ((x321+x322)/(x323+x324));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x325 = INT64_MAX;
	static volatile int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	int32_t x328 = -2655;
	volatile int64_t t62 = -691082753LL;

	t62 = ((x325+x326)/(x327+x328));

	if (t62 != 306302206324878LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x329 = 0U;
	volatile int8_t x330 = 13;
	volatile uint32_t t63 = 44864U;

	t63 = ((x329+x330)/(x331+x332));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x333 = INT16_MAX;
	uint32_t x334 = UINT32_MAX;
	volatile int32_t x336 = -52745892;
	uint32_t t64 = 904U;

	t64 = ((x333+x334)/(x335+x336));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x338 = INT8_MIN;
	volatile int32_t x339 = -1;
	int8_t x340 = -1;

	t65 = ((x337+x338)/(x339+x340));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = 2474976443355LL;
	int8_t x351 = -1;
	uint64_t x352 = 1704258139337368LLU;
	volatile uint64_t t66 = 10990LLU;

	t66 = ((x349+x350)/(x351+x352));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x358 = 31U;
	uint8_t x359 = UINT8_MAX;
	static volatile int64_t x360 = -223457529776695LL;
	int64_t t67 = -31LL;

	t67 = ((x357+x358)/(x359+x360));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x361 = 37924;
	int8_t x362 = 3;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = 26760U;

	t68 = ((x361+x362)/(x363+x364));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x365 = 61U;
	static int64_t x366 = 3343074233390491567LL;
	int64_t x368 = INT64_MIN;
	volatile int64_t t69 = 111485LL;

	t69 = ((x365+x366)/(x367+x368));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = 0U;
	int64_t x371 = 51221478794387LL;
	volatile int8_t x372 = INT8_MIN;
	static int64_t t70 = 649775073157LL;

	t70 = ((x369+x370)/(x371+x372));

	if (t70 != -180068LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x373 = INT8_MIN;
	uint8_t x374 = 59U;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = 1;
	static int32_t t71 = -1;

	t71 = ((x373+x374)/(x375+x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x377 = 61U;
	static int64_t x378 = INT64_MIN;
	static int16_t x379 = INT16_MIN;
	uint16_t x380 = UINT16_MAX;
	static volatile int64_t t72 = -1LL;

	t72 = ((x377+x378)/(x379+x380));

	if (t72 != -281483566907399LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 80U;
	int32_t t73 = -3;

	t73 = ((x389+x390)/(x391+x392));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	volatile int64_t t74 = 2LL;

	t74 = ((x393+x394)/(x395+x396));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x405 = 98;
	uint32_t x406 = 227515213U;
	int64_t x407 = -1LL;
	uint32_t x408 = UINT32_MAX;
	static int64_t t75 = 25960340550LL;

	t75 = ((x405+x406)/(x407+x408));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x409 = INT64_MIN;
	int64_t x411 = INT64_MIN;
	volatile int16_t x412 = INT16_MAX;
	volatile int64_t t76 = -1LL;

	t76 = ((x409+x410)/(x411+x412));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x413 = -1LL;
	int16_t x414 = 247;
	int8_t x415 = -1;
	uint64_t x416 = 248195020LLU;
	volatile uint64_t t77 = 985LLU;

	t77 = ((x413+x414)/(x415+x416));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x417 = 22U;
	volatile int8_t x418 = -1;
	int8_t x420 = INT8_MAX;
	volatile int32_t t78 = -31278096;

	t78 = ((x417+x418)/(x419+x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x421 = 1040521310986LL;
	volatile uint8_t x422 = UINT8_MAX;
	volatile int64_t t79 = 68641422614221496LL;

	t79 = ((x421+x422)/(x423+x424));

	if (t79 != 15877579LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x429 = 118U;
	int32_t x430 = -1;
	int8_t x432 = -1;
	int64_t t80 = -12487LL;

	t80 = ((x429+x430)/(x431+x432));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x433 = 71795853372LLU;
	uint32_t x434 = 78U;
	int32_t x435 = INT32_MAX;
	uint64_t x436 = 419942LLU;
	volatile uint64_t t81 = 224994114202LLU;

	t81 = ((x433+x434)/(x435+x436));

	if (t81 != 33LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x441 = 165;
	volatile uint16_t x443 = UINT16_MAX;
	uint16_t x444 = 9U;
	uint32_t t82 = 167U;

	t82 = ((x441+x442)/(x443+x444));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x445 = 0;
	uint64_t x447 = 29053LLU;
	static int32_t x448 = 2;
	volatile uint64_t t83 = 549LLU;

	t83 = ((x445+x446)/(x447+x448));

	if (t83 != 9226LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = INT8_MIN;
	volatile uint64_t x451 = UINT64_MAX;
	uint16_t x452 = UINT16_MAX;
	volatile uint64_t t84 = 23648195628LLU;

	t84 = ((x449+x450)/(x451+x452));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x453 = INT32_MAX;
	int64_t x454 = -1LL;
	static volatile int8_t x456 = INT8_MAX;

	t85 = ((x453+x454)/(x455+x456));

	if (t85 != -278496LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x457 = -1;
	uint16_t x458 = UINT16_MAX;
	int16_t x459 = 0;
	int64_t x460 = -13654601LL;
	volatile int64_t t86 = 1004037929581181LL;

	t86 = ((x457+x458)/(x459+x460));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x461 = UINT64_MAX;
	int32_t x462 = 505446;
	static volatile uint8_t x463 = UINT8_MAX;
	volatile int8_t x464 = INT8_MIN;
	uint64_t t87 = 4689818394LLU;

	t87 = ((x461+x462)/(x463+x464));

	if (t87 != 3979LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x465 = 1210LL;
	uint8_t x468 = UINT8_MAX;

	t88 = ((x465+x466)/(x467+x468));

	if (t88 != 35611475045771339LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x474 = UINT64_MAX;
	static int8_t x475 = INT8_MIN;
	uint8_t x476 = 46U;
	uint64_t t89 = 11708LLU;

	t89 = ((x473+x474)/(x475+x476));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x477 = INT64_MIN;
	static uint8_t x478 = 0U;
	int16_t x479 = -1;
	int8_t x480 = 3;
	volatile int64_t t90 = -18421547672631LL;

	t90 = ((x477+x478)/(x479+x480));

	if (t90 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x482 = INT32_MAX;
	int32_t x484 = 4503;
	volatile int64_t t91 = -18392657074LL;

	t91 = ((x481+x482)/(x483+x484));

	if (t91 != 477006LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x485 = -25;
	int16_t x486 = 3;
	static volatile uint64_t x487 = UINT64_MAX;
	static int8_t x488 = -1;
	uint64_t t92 = 33312309433LLU;

	t92 = ((x485+x486)/(x487+x488));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x489 = INT32_MIN;
	int32_t x491 = INT32_MIN;
	uint16_t x492 = UINT16_MAX;
	static volatile int32_t t93 = -174;

	t93 = ((x489+x490)/(x491+x492));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x493 = 1473;
	uint32_t x494 = 470268U;
	uint8_t x495 = 2U;
	int64_t x496 = -1LL;
	static int64_t t94 = 342825LL;

	t94 = ((x493+x494)/(x495+x496));

	if (t94 != 471741LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x497 = 19251691LL;
	uint8_t x498 = 2U;
	int16_t x499 = INT16_MIN;
	int64_t t95 = -112584686340631LL;

	t95 = ((x497+x498)/(x499+x500));

	if (t95 != -588LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x501 = 5U;
	volatile int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MIN;

	t96 = ((x501+x502)/(x503+x504));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x505 = -1361315;
	uint64_t x506 = 50532688LLU;
	volatile uint64_t t97 = 542LLU;

	t97 = ((x505+x506)/(x507+x508));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x513 = INT16_MIN;
	int64_t x514 = -5483982LL;
	int16_t x515 = 0;
	static int32_t x516 = INT32_MAX;
	int64_t t98 = -1LL;

	t98 = ((x513+x514)/(x515+x516));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x517 = UINT32_MAX;
	int32_t x518 = INT32_MAX;
	static int64_t x519 = INT64_MAX;
	int32_t x520 = -1;

	t99 = ((x517+x518)/(x519+x520));

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

