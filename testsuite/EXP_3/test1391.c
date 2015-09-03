#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -2;
uint32_t t0 = 58U;
static int32_t x8 = INT32_MIN;
static int8_t x10 = INT8_MIN;
static int32_t t2 = 707105791;
int64_t x20 = -500068225870001466LL;
int32_t x24 = -410;
volatile int32_t t5 = -178153;
uint8_t x37 = 0U;
uint64_t t9 = 20LLU;
volatile int16_t x50 = -1;
volatile int8_t x52 = -1;
int16_t x60 = -11;
static int32_t x70 = -1;
volatile uint8_t x77 = 15U;
volatile int64_t x79 = INT64_MIN;
uint8_t x84 = 21U;
int16_t x99 = 0;
int16_t x106 = INT16_MIN;
volatile int32_t t18 = 361875052;
volatile uint32_t x114 = UINT32_MAX;
int32_t x122 = 0;
int64_t x139 = INT64_MIN;
uint32_t x157 = 827U;
int8_t x169 = INT8_MIN;
volatile int32_t t32 = -8;
static volatile int64_t x184 = -1LL;
volatile uint64_t t34 = 7931441632094626890LLU;
uint64_t x191 = UINT64_MAX;
int16_t x199 = INT16_MIN;
volatile uint32_t x200 = 1U;
int64_t x211 = 212828764416025LL;
int32_t t38 = -955036;
uint64_t t40 = 377247210LLU;
uint64_t t41 = 9365759406558LLU;
uint32_t x225 = 1766389131U;
uint32_t x226 = UINT32_MAX;
int64_t x230 = -1LL;
int32_t x231 = -4040;
volatile int32_t x248 = -344193464;
uint64_t t46 = 47LLU;
static int16_t x251 = INT16_MAX;
volatile int64_t t47 = 0LL;
static int8_t x273 = 3;
int32_t x279 = -260949030;
uint64_t t51 = 670513LLU;
static uint64_t t53 = 117030785LLU;
uint16_t x290 = 0U;
int16_t x304 = -1;
uint16_t x307 = 395U;
volatile uint32_t t59 = 53U;
uint64_t x326 = 2073127721832LLU;
uint64_t x329 = 53916644157220747LLU;
volatile uint16_t x334 = 100U;
int64_t x338 = 4670243163151LL;
int16_t x342 = 26;
int16_t x348 = 30;
volatile int64_t x349 = -1LL;
static int64_t t68 = 1272257241LL;
static int16_t x375 = INT16_MAX;
int16_t x376 = INT16_MAX;
static uint16_t x383 = 1U;
volatile int16_t x386 = INT16_MIN;
volatile uint32_t t73 = 910563U;
static uint8_t x393 = 0U;
int8_t x398 = -1;
static uint64_t x400 = 923568256414712LLU;
uint64_t t75 = 1009329819163367LLU;
uint64_t t76 = 218616640LLU;
int32_t x409 = -1;
static int32_t t77 = 35;
int32_t t79 = 3;
static int32_t x430 = -1;
int32_t x432 = INT32_MAX;
static volatile int64_t x434 = 1LL;
int8_t x437 = INT8_MIN;
int8_t x450 = 1;
int64_t x462 = -1LL;
int64_t x464 = 44653017986LL;
volatile uint8_t x477 = 16U;
int64_t x479 = INT64_MIN;
static uint8_t x486 = 124U;
static int8_t x488 = -1;
int8_t x490 = 32;
static int32_t t93 = 320;
int8_t x501 = INT8_MAX;
static uint32_t x502 = 284U;
int32_t x507 = -1;
volatile int64_t t97 = 34554865535833686LL;
volatile int64_t x522 = -1LL;
int32_t x524 = INT32_MAX;
static volatile uint32_t x527 = 1676032945U;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	uint8_t x3 = 15U;
	volatile int32_t x4 = INT32_MIN;

	t0 = ((x1*x2)^(x3<x4));

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = -1086092660LL;
	uint8_t x7 = 7U;
	volatile int64_t t1 = -11167355497290LL;

	t1 = ((x5*x6)^(x7<x8));

	if (t1 != -71177082473100LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MAX;

	t2 = ((x9*x10)^(x11<x12));

	if (t2 != 4194305) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	static volatile int64_t x14 = -233LL;
	volatile int16_t x15 = INT16_MAX;
	int16_t x16 = INT16_MIN;
	int64_t t3 = -61364LL;

	t3 = ((x13*x14)^(x15<x16));

	if (t3 != 7634944LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int64_t x18 = -1LL;
	int16_t x19 = 2;
	int64_t t4 = -1286LL;

	t4 = ((x17*x18)^(x19<x20));

	if (t4 != 128LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 72U;
	int8_t x22 = -2;
	uint8_t x23 = 126U;

	t5 = ((x21*x22)^(x23<x24));

	if (t5 != -144) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	volatile int16_t x26 = INT16_MAX;
	int32_t x27 = 1085;
	static int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -239505;

	t6 = ((x25*x26)^(x27<x28));

	if (t6 != -1073709056) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = -1LL;
	static volatile int64_t x31 = INT64_MIN;
	static int16_t x32 = INT16_MIN;
	static int64_t t7 = -121LL;

	t7 = ((x29*x30)^(x31<x32));

	if (t7 != 32769LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = 5;
	uint16_t x39 = 1U;
	static int16_t x40 = -1232;
	int32_t t8 = 1;

	t8 = ((x37*x38)^(x39<x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	static uint64_t x42 = 53LLU;
	volatile uint64_t x43 = 41272749142460996LLU;
	int32_t x44 = 7248;

	t9 = ((x41*x42)^(x43<x44));

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 11054439LLU;
	volatile int8_t x51 = -50;
	uint64_t t10 = 858999322825078246LLU;

	t10 = ((x49*x50)^(x51<x52));

	if (t10 != 18446744073698497176LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = UINT8_MAX;
	uint32_t x58 = 5729U;
	uint32_t x59 = 53303744U;
	volatile uint32_t t11 = 1000U;

	t11 = ((x57*x58)^(x59<x60));

	if (t11 != 1460894U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	int64_t x71 = -1LL;
	uint8_t x72 = 118U;
	int32_t t12 = -15388;

	t12 = ((x69*x70)^(x71<x72));

	if (t12 != 32769) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x78 = 0;
	int64_t x80 = INT64_MIN;
	volatile int32_t t13 = 137;

	t13 = ((x77*x78)^(x79<x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = -1;
	volatile uint32_t x82 = 3275U;
	uint16_t x83 = 280U;
	volatile uint32_t t14 = 2U;

	t14 = ((x81*x82)^(x83<x84));

	if (t14 != 4294964021U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x89 = 38;
	int16_t x90 = -14;
	uint8_t x91 = 0U;
	int64_t x92 = -3764846668216LL;
	volatile int32_t t15 = 7308484;

	t15 = ((x89*x90)^(x91<x92));

	if (t15 != -532) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x97 = -1;
	volatile uint8_t x98 = 11U;
	int32_t x100 = 221507;
	static volatile int32_t t16 = -1073338;

	t16 = ((x97*x98)^(x99<x100));

	if (t16 != -12) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = -1LL;
	int64_t x102 = 36843140748LL;
	uint8_t x103 = 8U;
	uint8_t x104 = UINT8_MAX;
	volatile int64_t t17 = 5489804043LL;

	t17 = ((x101*x102)^(x103<x104));

	if (t17 != -36843140747LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -6;
	static int8_t x107 = INT8_MAX;
	static volatile int8_t x108 = 12;

	t18 = ((x105*x106)^(x107<x108));

	if (t18 != 196608) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -4;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	uint32_t t19 = 10U;

	t19 = ((x113*x114)^(x115<x116));

	if (t19 != 4U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = INT32_MIN;
	static int8_t x123 = 12;
	int8_t x124 = -1;
	volatile int32_t t20 = 2428;

	t20 = ((x121*x122)^(x123<x124));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x125 = 49;
	uint64_t x126 = 24294482224071037LLU;
	volatile uint32_t x127 = UINT32_MAX;
	volatile int64_t x128 = INT64_MIN;
	volatile uint64_t t21 = 45248454414431LLU;

	t21 = ((x125*x126)^(x127<x128));

	if (t21 != 1190429628979480813LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x129 = -1276006211839LL;
	uint16_t x130 = 208U;
	static int64_t x131 = INT64_MAX;
	int8_t x132 = 60;
	int64_t t22 = -40576232LL;

	t22 = ((x129*x130)^(x131<x132));

	if (t22 != -265409292062512LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MAX;
	volatile int32_t x135 = INT32_MAX;
	volatile int64_t x136 = 755862233993323644LL;
	volatile uint32_t t23 = 366U;

	t23 = ((x133*x134)^(x135<x136));

	if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x138 = 886U;
	volatile uint8_t x140 = 3U;
	int32_t t24 = 172;

	t24 = ((x137*x138)^(x139<x140));

	if (t24 != -29032447) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = INT32_MIN;
	volatile uint32_t x142 = 373U;
	int32_t x143 = INT32_MIN;
	static int32_t x144 = -1;
	uint32_t t25 = 9U;

	t25 = ((x141*x142)^(x143<x144));

	if (t25 != 2147483649U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = INT16_MIN;
	volatile int8_t x146 = INT8_MAX;
	int64_t x147 = -1LL;
	int32_t x148 = INT32_MAX;
	int32_t t26 = -257520;

	t26 = ((x145*x146)^(x147<x148));

	if (t26 != -4161535) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = 24U;
	int8_t x150 = INT8_MIN;
	static uint64_t x151 = UINT64_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t27 = -62;

	t27 = ((x149*x150)^(x151<x152));

	if (t27 != -3072) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x158 = INT32_MAX;
	volatile int64_t x159 = -1LL;
	static volatile uint32_t x160 = 97710U;
	volatile uint32_t t28 = 3242U;

	t28 = ((x157*x158)^(x159<x160));

	if (t28 != 2147482820U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = -1;
	int8_t x162 = 3;
	uint8_t x163 = 5U;
	int8_t x164 = INT8_MIN;
	int32_t t29 = -86460;

	t29 = ((x161*x162)^(x163<x164));

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x165 = 32U;
	int16_t x166 = -1;
	volatile int32_t x167 = INT32_MIN;
	static int32_t x168 = 11072;
	static volatile int32_t t30 = 2432281;

	t30 = ((x165*x166)^(x167<x168));

	if (t30 != -31) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x170 = -1LL;
	uint32_t x171 = 1U;
	static volatile uint32_t x172 = 929724U;
	volatile int64_t t31 = -186632502LL;

	t31 = ((x169*x170)^(x171<x172));

	if (t31 != 129LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = INT8_MIN;
	static uint8_t x174 = 30U;
	static int64_t x175 = INT64_MAX;
	uint64_t x176 = 15054574463269269LLU;

	t32 = ((x173*x174)^(x175<x176));

	if (t32 != -3840) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MIN;
	volatile uint16_t x183 = 0U;
	int32_t t33 = -1686085;

	t33 = ((x181*x182)^(x183<x184));

	if (t33 != -4161536) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x185 = -57778550675441569LL;
	uint64_t x186 = 4LLU;
	int16_t x187 = INT16_MAX;
	int8_t x188 = 1;

	t34 = ((x185*x186)^(x187<x188));

	if (t34 != 18215629871007785340LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x189 = UINT32_MAX;
	int8_t x190 = -1;
	volatile uint32_t x192 = UINT32_MAX;
	uint32_t t35 = 7429U;

	t35 = ((x189*x190)^(x191<x192));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = -1;
	int64_t x194 = -7454217297LL;
	uint32_t x195 = 4U;
	uint64_t x196 = 6264952LLU;
	int64_t t36 = 201101330750LL;

	t36 = ((x193*x194)^(x195<x196));

	if (t36 != 7454217296LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = 678;
	volatile uint16_t x198 = 7U;
	static volatile int32_t t37 = 2510824;

	t37 = ((x197*x198)^(x199<x200));

	if (t37 != 4746) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x209 = 83U;
	int32_t x210 = -4310;
	uint32_t x212 = 5U;

	t38 = ((x209*x210)^(x211<x212));

	if (t38 != -357730) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MIN;
	volatile uint64_t x215 = 565424449077299LLU;
	volatile int16_t x216 = -13;
	int32_t t39 = 0;

	t39 = ((x213*x214)^(x215<x216));

	if (t39 != 4194305) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x217 = 46LLU;
	volatile int32_t x218 = -1;
	int16_t x219 = 5;
	static int8_t x220 = -3;

	t40 = ((x217*x218)^(x219<x220));

	if (t40 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x221 = 112U;
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = 2;
	int32_t x224 = INT32_MIN;

	t41 = ((x221*x222)^(x223<x224));

	if (t41 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x227 = INT64_MAX;
	uint32_t x228 = 49U;
	uint32_t t42 = 327U;

	t42 = ((x225*x226)^(x227<x228));

	if (t42 != 2528578165U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x229 = INT8_MAX;
	volatile uint16_t x232 = 27U;
	int64_t t43 = 471919LL;

	t43 = ((x229*x230)^(x231<x232));

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	static uint64_t x240 = 751653621LLU;
	volatile int32_t t44 = -97;

	t44 = ((x237*x238)^(x239<x240));

	if (t44 != -8355839) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x241 = 8447179904379869LLU;
	uint32_t x242 = 8037U;
	static volatile int8_t x243 = INT8_MIN;
	volatile int8_t x244 = -1;
	volatile uint64_t t45 = 260967075011LLU;

	t45 = ((x241*x242)^(x243<x244));

	if (t45 != 12549752670372352304LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x245 = -1;
	static uint64_t x246 = UINT64_MAX;
	int8_t x247 = -19;

	t46 = ((x245*x246)^(x247<x248));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = 2530778LL;
	uint16_t x250 = UINT16_MAX;
	int64_t x252 = 2135558278509645666LL;

	t47 = ((x249*x250)^(x251<x252));

	if (t47 != 165854536231LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x257 = 1181751751922554407LLU;
	volatile uint32_t x258 = 19U;
	int8_t x259 = INT8_MAX;
	int32_t x260 = INT32_MAX;
	static volatile uint64_t t48 = 20418986023240LLU;

	t48 = ((x257*x258)^(x259<x260));

	if (t48 != 4006539212818982116LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x269 = -1;
	uint8_t x270 = 6U;
	int16_t x271 = INT16_MIN;
	uint64_t x272 = 19005411961250LLU;
	static int32_t t49 = -22;

	t49 = ((x269*x270)^(x271<x272));

	if (t49 != -6) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x274 = -1;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = -1;
	static volatile int32_t t50 = -3;

	t50 = ((x273*x274)^(x275<x276));

	if (t50 != -3) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x277 = 10853U;
	uint64_t x278 = UINT64_MAX;
	volatile uint16_t x280 = 241U;

	t51 = ((x277*x278)^(x279<x280));

	if (t51 != 18446744073709540762LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x281 = INT8_MAX;
	static uint32_t x282 = 98011127U;
	static int8_t x283 = -1;
	uint16_t x284 = 1341U;
	uint32_t t52 = 2467U;

	t52 = ((x281*x282)^(x283<x284));

	if (t52 != 3857478536U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = 33762;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	volatile int8_t x288 = INT8_MAX;

	t53 = ((x285*x286)^(x287<x288));

	if (t53 != 18446744073709517855LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = INT16_MAX;
	static uint8_t x291 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;
	int32_t t54 = 1973;

	t54 = ((x289*x290)^(x291<x292));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = -1LL;
	volatile uint16_t x294 = UINT16_MAX;
	int8_t x295 = 0;
	uint32_t x296 = 23103135U;
	static int64_t t55 = -215LL;

	t55 = ((x293*x294)^(x295<x296));

	if (t55 != -65536LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x297 = -1LL;
	uint32_t x298 = 18U;
	int32_t x299 = -58;
	uint64_t x300 = UINT64_MAX;
	int64_t t56 = -114LL;

	t56 = ((x297*x298)^(x299<x300));

	if (t56 != -17LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x301 = -1;
	static uint32_t x302 = 1432U;
	int16_t x303 = -1;
	volatile uint32_t t57 = 493828U;

	t57 = ((x301*x302)^(x303<x304));

	if (t57 != 4294965864U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = -1;
	static uint64_t x306 = 34040799270LLU;
	volatile int8_t x308 = -13;
	static volatile uint64_t t58 = 1389209675LLU;

	t58 = ((x305*x306)^(x307<x308));

	if (t58 != 18446744039668752346LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x309 = 34U;
	volatile int16_t x310 = 6511;
	uint16_t x311 = 1555U;
	uint32_t x312 = 6871U;

	t59 = ((x309*x310)^(x311<x312));

	if (t59 != 221375U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x313 = INT64_MAX;
	static int8_t x314 = 1;
	static int16_t x315 = INT16_MAX;
	static int64_t x316 = INT64_MIN;
	int64_t t60 = INT64_MAX;

	t60 = ((x313*x314)^(x315<x316));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = -1;
	int64_t x319 = INT64_MIN;
	uint8_t x320 = 0U;
	volatile int32_t t61 = -457;

	t61 = ((x317*x318)^(x319<x320));

	if (t61 != 32769) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x325 = INT8_MAX;
	static volatile uint8_t x327 = UINT8_MAX;
	int8_t x328 = INT8_MIN;
	static volatile uint64_t t62 = 283LLU;

	t62 = ((x325*x326)^(x327<x328));

	if (t62 != 263287220672664LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x330 = 1U;
	int16_t x331 = -1;
	static int32_t x332 = -1;
	uint64_t t63 = 22512016624LLU;

	t63 = ((x329*x330)^(x331<x332));

	if (t63 != 53916644157220747LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x333 = 6775610336951LLU;
	int64_t x335 = -406344283289LL;
	int8_t x336 = 8;
	volatile uint64_t t64 = 880LLU;

	t64 = ((x333*x334)^(x335<x336));

	if (t64 != 677561033695101LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x339 = 12;
	volatile int8_t x340 = 0;
	static volatile uint64_t t65 = 123882LLU;

	t65 = ((x337*x338)^(x339<x340));

	if (t65 != 18446739403466388465LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int8_t x343 = INT8_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t66 = 96584;

	t66 = ((x341*x342)^(x343<x344));

	if (t66 != 6630) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x345 = 22954122LLU;
	static int16_t x346 = INT16_MAX;
	static int64_t x347 = 13LL;
	volatile uint64_t t67 = 1158573842760266LLU;

	t67 = ((x345*x346)^(x347<x348));

	if (t67 != 752137715575LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x350 = 3U;
	int16_t x351 = 315;
	int8_t x352 = INT8_MIN;

	t68 = ((x349*x350)^(x351<x352));

	if (t68 != -3LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x361 = 204962751U;
	uint32_t x362 = 12266363U;
	static int8_t x363 = 1;
	uint32_t x364 = 585U;
	volatile uint32_t t69 = 49489143U;

	t69 = ((x361*x362)^(x363<x364));

	if (t69 != 2499185092U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MIN;
	int64_t x367 = 510LL;
	volatile int64_t x368 = 120014146LL;
	uint32_t t70 = 121459584U;

	t70 = ((x365*x366)^(x367<x368));

	if (t70 != 2147483649U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x373 = 29U;
	volatile int16_t x374 = INT16_MIN;
	volatile int32_t t71 = -2713;

	t71 = ((x373*x374)^(x375<x376));

	if (t71 != -950272) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x381 = 1482;
	uint32_t x382 = UINT32_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t72 = 293678020U;

	t72 = ((x381*x382)^(x383<x384));

	if (t72 != 4294965815U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x385 = 1U;
	uint8_t x387 = 0U;
	uint16_t x388 = 378U;

	t73 = ((x385*x386)^(x387<x388));

	if (t73 != 4294934529U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x394 = 20823784278469680LL;
	uint8_t x395 = 1U;
	volatile uint16_t x396 = 108U;
	volatile int64_t t74 = -3520LL;

	t74 = ((x393*x394)^(x395<x396));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x397 = 12173389LLU;
	int8_t x399 = 7;

	t75 = ((x397*x398)^(x399<x400));

	if (t75 != 18446744073697378226LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = 219;
	volatile int8_t x408 = INT8_MAX;

	t76 = ((x405*x406)^(x407<x408));

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x410 = INT8_MIN;
	uint16_t x411 = 253U;
	static volatile int8_t x412 = 0;

	t77 = ((x409*x410)^(x411<x412));

	if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x413 = 180397856365978513LL;
	int8_t x414 = -2;
	int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;
	volatile int64_t t78 = -184516118821237751LL;

	t78 = ((x413*x414)^(x415<x416));

	if (t78 != -360795712731957026LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x417 = -1;
	static uint8_t x418 = 30U;
	int16_t x419 = INT16_MIN;
	static int32_t x420 = INT32_MAX;

	t79 = ((x417*x418)^(x419<x420));

	if (t79 != -29) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x425 = INT16_MIN;
	volatile int16_t x426 = INT16_MIN;
	static volatile int32_t x427 = INT32_MIN;
	int32_t x428 = -223;
	volatile int32_t t80 = 1;

	t80 = ((x425*x426)^(x427<x428));

	if (t80 != 1073741825) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x429 = UINT32_MAX;
	volatile int8_t x431 = INT8_MIN;
	static uint32_t t81 = 1197566U;

	t81 = ((x429*x430)^(x431<x432));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x433 = 0;
	int32_t x435 = 49;
	uint8_t x436 = 13U;
	int64_t t82 = -3207323360932LL;

	t82 = ((x433*x434)^(x435<x436));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x438 = -1;
	uint32_t x439 = 110352U;
	int64_t x440 = -1LL;
	volatile int32_t t83 = 461;

	t83 = ((x437*x438)^(x439<x440));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x441 = 0;
	static int32_t x442 = INT32_MIN;
	int64_t x443 = 16171LL;
	static uint16_t x444 = 717U;
	volatile int32_t t84 = -15;

	t84 = ((x441*x442)^(x443<x444));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = 20;
	static int8_t x451 = INT8_MAX;
	int8_t x452 = -11;
	static int32_t t85 = -16;

	t85 = ((x449*x450)^(x451<x452));

	if (t85 != 20) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x453 = 0U;
	int8_t x454 = 1;
	uint32_t x455 = 34857831U;
	uint32_t x456 = 181U;
	int32_t t86 = -591833993;

	t86 = ((x453*x454)^(x455<x456));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x457 = INT8_MIN;
	uint64_t x458 = 15896732039693LLU;
	uint64_t x459 = 1784943726564921LLU;
	static uint16_t x460 = 33U;
	uint64_t t87 = 3540356400LLU;

	t87 = ((x457*x458)^(x459<x460));

	if (t87 != 18444709292008470912LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x461 = INT32_MIN;
	volatile int16_t x463 = INT16_MIN;
	static int64_t t88 = 6LL;

	t88 = ((x461*x462)^(x463<x464));

	if (t88 != 2147483649LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x465 = 12404U;
	int32_t x466 = -1;
	static int32_t x467 = INT32_MIN;
	static int8_t x468 = 2;
	volatile int32_t t89 = 11;

	t89 = ((x465*x466)^(x467<x468));

	if (t89 != -12403) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x469 = 0U;
	static int32_t x470 = INT32_MIN;
	volatile uint8_t x471 = UINT8_MAX;
	volatile int64_t x472 = -1LL;
	volatile int32_t t90 = 204815361;

	t90 = ((x469*x470)^(x471<x472));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x478 = INT16_MIN;
	int32_t x480 = INT32_MIN;
	volatile int32_t t91 = -4605;

	t91 = ((x477*x478)^(x479<x480));

	if (t91 != -524287) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x485 = INT8_MIN;
	volatile uint32_t x487 = UINT32_MAX;
	static volatile int32_t t92 = -7014;

	t92 = ((x485*x486)^(x487<x488));

	if (t92 != -15872) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x489 = 26;
	uint16_t x491 = UINT16_MAX;
	uint8_t x492 = UINT8_MAX;

	t93 = ((x489*x490)^(x491<x492));

	if (t93 != 832) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x497 = INT16_MIN;
	static uint8_t x498 = 9U;
	int64_t x499 = -75563888LL;
	int32_t x500 = -1;
	volatile int32_t t94 = 38596181;

	t94 = ((x497*x498)^(x499<x500));

	if (t94 != -294911) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x503 = 1U;
	static int8_t x504 = INT8_MAX;
	volatile uint32_t t95 = 227295471U;

	t95 = ((x501*x502)^(x503<x504));

	if (t95 != 36069U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x505 = -1;
	int8_t x506 = INT8_MIN;
	static uint8_t x508 = 1U;
	volatile int32_t t96 = 42460903;

	t96 = ((x505*x506)^(x507<x508));

	if (t96 != 129) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x517 = 125983065121923LL;
	volatile uint8_t x518 = UINT8_MAX;
	static int16_t x519 = -808;
	int64_t x520 = INT64_MAX;

	t97 = ((x517*x518)^(x519<x520));

	if (t97 != 32125681606090364LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x521 = 14U;
	int8_t x523 = -1;
	volatile int64_t t98 = -28285LL;

	t98 = ((x521*x522)^(x523<x524));

	if (t98 != -13LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x525 = UINT64_MAX;
	int64_t x526 = INT64_MIN;
	int64_t x528 = INT64_MIN;
	static volatile uint64_t t99 = 614454239663208LLU;

	t99 = ((x525*x526)^(x527<x528));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

