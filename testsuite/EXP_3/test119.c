#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = -1LL;
int8_t x4 = 1;
int8_t x22 = INT8_MIN;
static volatile int8_t x23 = INT8_MIN;
int16_t x24 = -1;
int8_t x25 = INT8_MIN;
static uint16_t x31 = 4724U;
int8_t x35 = INT8_MAX;
int64_t t7 = 1226697579744056285LL;
int64_t x43 = -1LL;
volatile int64_t t9 = 11956400852474LL;
static uint8_t x66 = 8U;
volatile uint8_t x71 = UINT8_MAX;
uint32_t x72 = 114U;
int16_t x77 = INT16_MIN;
static int16_t x85 = INT16_MIN;
volatile uint8_t x89 = UINT8_MAX;
uint32_t x91 = UINT32_MAX;
uint64_t t18 = 1934556348831LLU;
volatile int64_t t20 = 5909276689044910LL;
uint8_t x108 = UINT8_MAX;
volatile int16_t x111 = 1;
static int8_t x116 = -1;
int64_t t24 = 16463LL;
int16_t x122 = 0;
uint32_t t25 = 745781U;
uint32_t t27 = 429U;
int16_t x135 = INT16_MIN;
int32_t x136 = INT32_MAX;
int64_t x142 = -1LL;
uint8_t x144 = 18U;
static volatile int16_t x172 = 24;
static uint16_t x179 = UINT16_MAX;
int32_t t36 = 1;
int64_t x181 = INT64_MIN;
int32_t t39 = 474;
int8_t x201 = INT8_MIN;
volatile uint32_t t42 = 3945U;
int64_t x217 = INT64_MIN;
uint32_t x224 = 1758U;
volatile int32_t x225 = INT32_MIN;
static int32_t x230 = 9052774;
int64_t x231 = INT64_MAX;
static int16_t x236 = -830;
static uint64_t x242 = UINT64_MAX;
int64_t x243 = INT64_MIN;
static volatile int64_t t50 = 1002LL;
static uint64_t x249 = 4LLU;
int8_t x251 = -1;
uint64_t x253 = 160210LLU;
volatile uint64_t x254 = UINT64_MAX;
uint8_t x257 = UINT8_MAX;
int64_t x258 = INT64_MAX;
static int64_t x259 = INT64_MIN;
volatile int64_t x266 = -1LL;
volatile int32_t t56 = 88;
static volatile int8_t x271 = INT8_MAX;
static int16_t x274 = INT16_MIN;
volatile int32_t x282 = INT32_MAX;
int8_t x291 = INT8_MIN;
static int16_t x292 = -41;
volatile int64_t t63 = -1599LL;
volatile int64_t x298 = -2410127076LL;
int64_t x299 = INT64_MAX;
uint16_t x307 = 4U;
static int8_t x321 = INT8_MIN;
int8_t x324 = INT8_MIN;
int64_t x333 = 14050LL;
volatile int8_t x339 = INT8_MAX;
int8_t x340 = INT8_MAX;
volatile int32_t t71 = 49;
int8_t x342 = -1;
int8_t x343 = INT8_MAX;
static int64_t x344 = INT64_MIN;
int64_t t72 = -102341LL;
int16_t x346 = INT16_MIN;
int64_t x351 = INT64_MIN;
int16_t x364 = 6118;
int32_t x373 = INT32_MIN;
uint16_t x374 = 2689U;
int16_t x378 = 3564;
int16_t x387 = -1;
volatile uint32_t t84 = 976U;
static int16_t x405 = INT16_MIN;
int32_t t86 = -825178117;
static volatile int32_t t88 = -18186;
volatile uint32_t x425 = 7U;
uint32_t x426 = 501U;
int16_t x431 = INT16_MIN;
int16_t x438 = 1714;
volatile uint64_t t95 = 1330735660681LLU;
int16_t x448 = INT16_MIN;
uint32_t t96 = 10248U;
volatile uint32_t t97 = 7664U;
int8_t x460 = INT8_MIN;
uint32_t t98 = 3004116U;
volatile int32_t x463 = -5;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint64_t x2 = UINT64_MAX;
	int64_t t0 = -6277LL;

	t0 = ((x1<=x2)-(x3+x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile int16_t x6 = 2;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -354213;

	t1 = ((x5<=x6)-(x7+x8));

	if (t1 != -33022) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = -1LL;
	int64_t x11 = -1LL;
	int8_t x12 = INT8_MAX;
	volatile int64_t t2 = 10LL;

	t2 = ((x9<=x10)-(x11+x12));

	if (t2 != -126LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = -1;
	uint8_t x15 = 0U;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -972748;

	t3 = ((x13<=x14)-(x15+x16));

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = 131133897115640LLU;
	int32_t t4 = 85424297;

	t4 = ((x21<=x22)-(x23+x24));

	if (t4 != 130) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = 6242535;
	int8_t x27 = -1;
	int32_t x28 = INT32_MAX;
	int32_t t5 = 186;

	t5 = ((x25<=x26)-(x27+x28));

	if (t5 != -2147483645) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;
	static uint32_t t6 = 42408652U;

	t6 = ((x29<=x30)-(x31+x32));

	if (t6 != 4294962573U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	volatile int64_t x34 = INT64_MAX;
	int64_t x36 = -1LL;

	t7 = ((x33<=x34)-(x35+x36));

	if (t7 != -125LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 2U;
	int64_t x38 = -14230967239LL;
	int16_t x39 = 1505;
	int32_t x40 = -590;
	static volatile int32_t t8 = 1;

	t8 = ((x37<=x38)-(x39+x40));

	if (t8 != -915) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	volatile int32_t x44 = INT32_MAX;

	t9 = ((x41<=x42)-(x43+x44));

	if (t9 != -2147483646LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	uint8_t x50 = UINT8_MAX;
	uint64_t x51 = 7215465126944021LLU;
	uint64_t x52 = 267412737393LLU;
	volatile uint64_t t10 = 3318172672LLU;

	t10 = ((x49<=x50)-(x51+x52));

	if (t10 != 18439528341169870202LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = -1;
	static int32_t x54 = -1332284;
	uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MIN;
	uint64_t t11 = 6797252750873170LLU;

	t11 = ((x53<=x54)-(x55+x56));

	if (t11 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = 2;
	int64_t x62 = INT64_MAX;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = 8371583LLU;
	uint64_t t12 = 1768631LLU;

	t12 = ((x61<=x62)-(x63+x64));

	if (t12 != 18446744073701180162LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x65 = 5U;
	uint32_t x67 = UINT32_MAX;
	static int16_t x68 = 74;
	static uint32_t t13 = 42025U;

	t13 = ((x65<=x66)-(x67+x68));

	if (t13 != 4294967224U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 1023230307;
	int16_t x70 = -1;
	volatile uint32_t t14 = 726325575U;

	t14 = ((x69<=x70)-(x71+x72));

	if (t14 != 4294966927U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x78 = 63;
	volatile uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	int32_t t15 = -844591;

	t15 = ((x77<=x78)-(x79+x80));

	if (t15 != -126) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MIN;
	static uint8_t x83 = 54U;
	uint16_t x84 = UINT16_MAX;
	int32_t t16 = 0;

	t16 = ((x81<=x82)-(x83+x84));

	if (t16 != -65589) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x86 = 5244340391600084767LLU;
	static volatile int32_t x87 = -334;
	volatile int8_t x88 = INT8_MAX;
	volatile int32_t t17 = 1771922;

	t17 = ((x85<=x86)-(x87+x88));

	if (t17 != 207) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x90 = INT32_MIN;
	volatile uint64_t x92 = 3545394361684632LLU;

	t18 = ((x89<=x90)-(x91+x92));

	if (t18 != 18443198675052899689LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = -4492117062759145075LL;
	static uint16_t x95 = UINT16_MAX;
	int16_t x96 = -15973;
	int32_t t19 = 1666;

	t19 = ((x93<=x94)-(x95+x96));

	if (t19 != -49562) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = 674744811;
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	int64_t x100 = 1675777LL;

	t20 = ((x97<=x98)-(x99+x100));

	if (t20 != -1643009LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x105 = INT16_MAX;
	uint8_t x106 = 5U;
	uint8_t x107 = 1U;
	int32_t t21 = 24;

	t21 = ((x105<=x106)-(x107+x108));

	if (t21 != -256) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x109 = INT32_MAX;
	static uint64_t x110 = 2536853LLU;
	static int8_t x112 = INT8_MIN;
	int32_t t22 = -3550840;

	t22 = ((x109<=x110)-(x111+x112));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = 0;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = 790LLU;
	volatile uint64_t t23 = 0LLU;

	t23 = ((x113<=x114)-(x115+x116));

	if (t23 != 18446744073709550828LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	static int32_t x119 = -54;
	int64_t x120 = 4628LL;

	t24 = ((x117<=x118)-(x119+x120));

	if (t24 != -4574LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = 7;
	uint32_t x123 = 8426473U;
	volatile int8_t x124 = -1;

	t25 = ((x121<=x122)-(x123+x124));

	if (t25 != 4286540824U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 9615707096068398LLU;
	volatile int64_t x126 = INT64_MIN;
	static int16_t x127 = INT16_MAX;
	int16_t x128 = 1013;
	int32_t t26 = -85481;

	t26 = ((x125<=x126)-(x127+x128));

	if (t26 != -33779) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = 27;
	int16_t x130 = -1;
	static uint32_t x131 = UINT32_MAX;
	volatile uint8_t x132 = 12U;

	t27 = ((x129<=x130)-(x131+x132));

	if (t27 != 4294967285U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x133 = 1U;
	static int16_t x134 = -1;
	volatile int32_t t28 = 101;

	t28 = ((x133<=x134)-(x135+x136));

	if (t28 != -2147450879) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = 1475U;
	uint32_t x138 = UINT32_MAX;
	uint16_t x139 = 40U;
	volatile uint32_t x140 = 1759174627U;
	uint32_t t29 = 56144428U;

	t29 = ((x137<=x138)-(x139+x140));

	if (t29 != 2535792630U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 58U;
	int8_t x143 = INT8_MAX;
	int32_t t30 = -1;

	t30 = ((x141<=x142)-(x143+x144));

	if (t30 != -145) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	static volatile uint32_t x150 = 658000U;
	static volatile uint32_t x151 = 46154033U;
	int8_t x152 = 0;
	static volatile uint32_t t31 = 230340230U;

	t31 = ((x149<=x150)-(x151+x152));

	if (t31 != 4248813263U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = INT32_MIN;
	static volatile int16_t x154 = INT16_MIN;
	uint32_t x155 = 87481U;
	uint8_t x156 = 3U;
	volatile uint32_t t32 = 14007166U;

	t32 = ((x153<=x154)-(x155+x156));

	if (t32 != 4294879813U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = -2;
	volatile int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	uint8_t x164 = UINT8_MAX;
	int64_t t33 = -101615103465LL;

	t33 = ((x161<=x162)-(x163+x164));

	if (t33 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MIN;
	int64_t x167 = -6296969LL;
	uint16_t x168 = 703U;
	volatile int64_t t34 = 577648877LL;

	t34 = ((x165<=x166)-(x167+x168));

	if (t34 != 6296266LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x169 = -1;
	uint64_t x170 = 5685190475090949LLU;
	volatile uint8_t x171 = 2U;
	int32_t t35 = -1603;

	t35 = ((x169<=x170)-(x171+x172));

	if (t35 != -26) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = 1;
	static int32_t x178 = 1;
	uint16_t x180 = 1U;

	t36 = ((x177<=x178)-(x179+x180));

	if (t36 != -65535) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x182 = INT32_MIN;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = -15261;
	volatile int32_t t37 = -756684;

	t37 = ((x181<=x182)-(x183+x184));

	if (t37 != 15007) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x193 = 57;
	int64_t x194 = 6794LL;
	static int8_t x195 = 35;
	static int8_t x196 = 8;
	static int32_t t38 = 60;

	t38 = ((x193<=x194)-(x195+x196));

	if (t38 != -42) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 3378U;
	volatile uint16_t x199 = 4U;
	volatile uint16_t x200 = 85U;

	t39 = ((x197<=x198)-(x199+x200));

	if (t39 != -89) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x202 = 253592056304399824LL;
	uint64_t x203 = 39833LLU;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t40 = 4641LLU;

	t40 = ((x201<=x202)-(x203+x204));

	if (t40 != 18446744073709511785LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 2734LLU;
	static int64_t x206 = -33163447LL;
	uint32_t x207 = UINT32_MAX;
	static int16_t x208 = -1;
	volatile uint32_t t41 = 166241631U;

	t41 = ((x205<=x206)-(x207+x208));

	if (t41 != 3U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	uint32_t x212 = UINT32_MAX;

	t42 = ((x209<=x210)-(x211+x212));

	if (t42 != 3U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = INT64_MAX;
	volatile int16_t x214 = 3181;
	int64_t x215 = 7839LL;
	volatile int32_t x216 = INT32_MIN;
	static volatile int64_t t43 = -1008479029371LL;

	t43 = ((x213<=x214)-(x215+x216));

	if (t43 != 2147475809LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x218 = INT16_MAX;
	int64_t x219 = 15054LL;
	int8_t x220 = INT8_MAX;
	int64_t t44 = 167029LL;

	t44 = ((x217<=x218)-(x219+x220));

	if (t44 != -15180LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x221 = INT8_MIN;
	static int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	volatile uint32_t t45 = 12724U;

	t45 = ((x221<=x222)-(x223+x224));

	if (t45 != 2147481890U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MAX;
	volatile uint16_t x228 = 1122U;
	volatile int32_t t46 = 185;

	t46 = ((x225<=x226)-(x227+x228));

	if (t46 != -1248) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = 28U;
	int16_t x232 = INT16_MIN;
	volatile int64_t t47 = 20611560366LL;

	t47 = ((x229<=x230)-(x231+x232));

	if (t47 != -9223372036854743038LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x233 = 3664093U;
	int32_t x234 = INT32_MAX;
	static int64_t x235 = 42490LL;
	int64_t t48 = -463LL;

	t48 = ((x233<=x234)-(x235+x236));

	if (t48 != -41659LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x237 = -3;
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = INT64_MIN;
	uint32_t x240 = 2685U;
	static int64_t t49 = -2044094085014851LL;

	t49 = ((x237<=x238)-(x239+x240));

	if (t49 != 9223372036854773123LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = 1122149U;
	uint16_t x244 = 3U;

	t50 = ((x241<=x242)-(x243+x244));

	if (t50 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x245 = INT8_MIN;
	uint32_t x246 = 15199U;
	int16_t x247 = 1;
	int16_t x248 = INT16_MIN;
	static int32_t t51 = 6781;

	t51 = ((x245<=x246)-(x247+x248));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x250 = INT64_MIN;
	uint64_t x252 = 472LLU;
	uint64_t t52 = 4191289LLU;

	t52 = ((x249<=x250)-(x251+x252));

	if (t52 != 18446744073709551146LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x255 = 34U;
	int8_t x256 = -16;
	int32_t t53 = -6;

	t53 = ((x253<=x254)-(x255+x256));

	if (t53 != -17) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x260 = 8U;
	volatile int64_t t54 = 6LL;

	t54 = ((x257<=x258)-(x259+x260));

	if (t54 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = -1;
	int8_t x263 = 3;
	uint8_t x264 = 2U;
	static int32_t t55 = 4;

	t55 = ((x261<=x262)-(x263+x264));

	if (t55 != -5) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = INT32_MAX;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = 0;

	t56 = ((x265<=x266)-(x267+x268));

	if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = 1729U;
	volatile int64_t x272 = INT64_MIN;
	volatile int64_t t57 = -6498376423254088LL;

	t57 = ((x269<=x270)-(x271+x272));

	if (t57 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x273 = 366893447726LLU;
	uint64_t x275 = 329620808LLU;
	int16_t x276 = INT16_MIN;
	uint64_t t58 = 0LLU;

	t58 = ((x273<=x274)-(x275+x276));

	if (t58 != 18446744073379963577LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = 23;
	static uint16_t x278 = 11890U;
	volatile uint64_t x279 = 5142270453031326475LLU;
	uint8_t x280 = 8U;
	static uint64_t t59 = 15366LLU;

	t59 = ((x277<=x278)-(x279+x280));

	if (t59 != 13304473620678225134LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = 3348387U;
	int16_t x283 = INT16_MIN;
	static uint16_t x284 = 1338U;
	volatile int32_t t60 = -2315625;

	t60 = ((x281<=x282)-(x283+x284));

	if (t60 != 31431) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = 169616LL;
	static uint8_t x286 = 50U;
	static uint64_t x287 = UINT64_MAX;
	volatile int32_t x288 = INT32_MIN;
	uint64_t t61 = 562722105257LLU;

	t61 = ((x285<=x286)-(x287+x288));

	if (t61 != 2147483649LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x289 = INT16_MAX;
	int32_t x290 = -1;
	static volatile int32_t t62 = 2408138;

	t62 = ((x289<=x290)-(x291+x292));

	if (t62 != 169) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = -5730001005LL;
	static uint64_t x294 = 33942927485LLU;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = UINT16_MAX;

	t63 = ((x293<=x294)-(x295+x296));

	if (t63 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = 23;
	int64_t x300 = -14047187242223601LL;
	static volatile int64_t t64 = 483744800475005252LL;

	t64 = ((x297<=x298)-(x299+x300));

	if (t64 != -9209324849612552206LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = 8463450963401620LL;
	uint8_t x302 = 10U;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t65 = 46303LLU;

	t65 = ((x301<=x302)-(x303+x304));

	if (t65 != 129LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x305 = INT64_MIN;
	int64_t x306 = -1LL;
	int8_t x308 = -1;
	static volatile int32_t t66 = -3389898;

	t66 = ((x305<=x306)-(x307+x308));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x313 = 1U;
	int8_t x314 = -1;
	volatile uint32_t x315 = 1943403599U;
	static uint8_t x316 = UINT8_MAX;
	uint32_t t67 = 88966527U;

	t67 = ((x313<=x314)-(x315+x316));

	if (t67 != 2351563442U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MIN;
	int32_t t68 = 6105;

	t68 = ((x321<=x322)-(x323+x324));

	if (t68 != 257) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x325 = INT32_MIN;
	static int32_t x326 = -1;
	int8_t x327 = -1;
	int16_t x328 = 21;
	static int32_t t69 = -1;

	t69 = ((x325<=x326)-(x327+x328));

	if (t69 != -19) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x334 = 27504886024911846LLU;
	volatile uint64_t x335 = UINT64_MAX;
	volatile uint64_t x336 = 226LLU;
	volatile uint64_t t70 = 520206684553142190LLU;

	t70 = ((x333<=x334)-(x335+x336));

	if (t70 != 18446744073709551392LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -387;

	t71 = ((x337<=x338)-(x339+x340));

	if (t71 != -254) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x341 = -1LL;

	t72 = ((x341<=x342)-(x343+x344));

	if (t72 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MIN;
	int16_t x347 = INT16_MIN;
	static volatile int16_t x348 = -58;
	int32_t t73 = -871;

	t73 = ((x345<=x346)-(x347+x348));

	if (t73 != 32827) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x349 = 1;
	int32_t x350 = INT32_MIN;
	static uint8_t x352 = 64U;
	int64_t t74 = 32LL;

	t74 = ((x349<=x350)-(x351+x352));

	if (t74 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = INT64_MAX;
	int32_t x354 = INT32_MIN;
	volatile uint16_t x355 = UINT16_MAX;
	static int16_t x356 = INT16_MIN;
	int32_t t75 = -179821;

	t75 = ((x353<=x354)-(x355+x356));

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	int32_t t76 = -358;

	t76 = ((x361<=x362)-(x363+x364));

	if (t76 != -71653) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x365 = 11843U;
	uint32_t x366 = 0U;
	int16_t x367 = INT16_MIN;
	static uint8_t x368 = 12U;
	volatile int32_t t77 = 0;

	t77 = ((x365<=x366)-(x367+x368));

	if (t77 != 32756) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x369 = -241;
	int32_t x370 = -1;
	int8_t x371 = INT8_MIN;
	volatile uint32_t x372 = 17U;
	volatile uint32_t t78 = 1890256U;

	t78 = ((x369<=x370)-(x371+x372));

	if (t78 != 112U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x375 = 1;
	volatile int16_t x376 = INT16_MAX;
	int32_t t79 = 234666707;

	t79 = ((x373<=x374)-(x375+x376));

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x377 = INT64_MIN;
	uint8_t x379 = UINT8_MAX;
	static uint8_t x380 = 1U;
	int32_t t80 = 89410447;

	t80 = ((x377<=x378)-(x379+x380));

	if (t80 != -255) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x381 = -37186743408692LL;
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = 47621093903LL;
	uint8_t x384 = UINT8_MAX;
	volatile int64_t t81 = -1148749601183537LL;

	t81 = ((x381<=x382)-(x383+x384));

	if (t81 != -47621094157LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MIN;
	uint32_t x386 = 1990958219U;
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t82 = 130891041U;

	t82 = ((x385<=x386)-(x387+x388));

	if (t82 != 2U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = INT8_MIN;
	int32_t x394 = -232497;
	volatile uint8_t x395 = 34U;
	uint32_t x396 = 3U;
	volatile uint32_t t83 = 49009805U;

	t83 = ((x393<=x394)-(x395+x396));

	if (t83 != 4294967259U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x397 = INT64_MAX;
	static uint8_t x398 = 6U;
	int32_t x399 = INT32_MAX;
	volatile uint32_t x400 = 431598U;

	t84 = ((x397<=x398)-(x399+x400));

	if (t84 != 2147052051U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x401 = 1461U;
	volatile int8_t x402 = 11;
	int32_t x403 = -77;
	volatile int64_t x404 = -1LL;
	volatile int64_t t85 = -1023644959648LL;

	t85 = ((x401<=x402)-(x403+x404));

	if (t85 != 78LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x406 = 447028LL;
	int16_t x407 = INT16_MAX;
	int32_t x408 = -65754404;

	t86 = ((x405<=x406)-(x407+x408));

	if (t86 != 65721638) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x409 = UINT64_MAX;
	uint16_t x410 = UINT16_MAX;
	int16_t x411 = -37;
	int8_t x412 = -1;
	int32_t t87 = 3;

	t87 = ((x409<=x410)-(x411+x412));

	if (t87 != 38) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x413 = 1163;
	static int16_t x414 = 3332;
	uint16_t x415 = 13763U;
	volatile int16_t x416 = -1;

	t88 = ((x413<=x414)-(x415+x416));

	if (t88 != -13761) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = -1444;
	int32_t x418 = INT32_MIN;
	int32_t x419 = -1;
	int64_t x420 = -1LL;
	int64_t t89 = -49174082487LL;

	t89 = ((x417<=x418)-(x419+x420));

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = INT32_MAX;
	static volatile uint32_t x422 = UINT32_MAX;
	uint32_t x423 = 23214U;
	uint64_t x424 = 115455764796920LLU;
	uint64_t t90 = 154046LLU;

	t90 = ((x421<=x422)-(x423+x424));

	if (t90 != 18446628617944731483LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x427 = UINT16_MAX;
	volatile int8_t x428 = -7;
	volatile int32_t t91 = 45;

	t91 = ((x425<=x426)-(x427+x428));

	if (t91 != -65527) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x429 = 1555U;
	int64_t x430 = INT64_MIN;
	int16_t x432 = INT16_MIN;
	int32_t t92 = -354;

	t92 = ((x429<=x430)-(x431+x432));

	if (t92 != 65536) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = INT16_MAX;
	int8_t x434 = -1;
	int8_t x435 = INT8_MAX;
	uint64_t x436 = 258497428612LLU;
	static uint64_t t93 = 768741037LLU;

	t93 = ((x433<=x434)-(x435+x436));

	if (t93 != 18446743815212122877LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x437 = -1;
	static int16_t x439 = 470;
	static uint16_t x440 = 213U;
	int32_t t94 = 315444;

	t94 = ((x437<=x438)-(x439+x440));

	if (t94 != -682) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = 1;
	int64_t x443 = INT64_MIN;
	uint64_t x444 = 473611LLU;

	t95 = ((x441<=x442)-(x443+x444));

	if (t95 != 9223372036854302198LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = 1;
	volatile uint32_t x447 = 39122U;

	t96 = ((x445<=x446)-(x447+x448));

	if (t96 != 4294960943U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = 308U;
	volatile uint32_t x450 = 69U;
	int32_t x451 = INT32_MIN;
	uint32_t x452 = 362257461U;

	t97 = ((x449<=x450)-(x451+x452));

	if (t97 != 1785226187U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x457 = 11U;
	int32_t x458 = -1;
	volatile uint32_t x459 = UINT32_MAX;

	t98 = ((x457<=x458)-(x459+x460));

	if (t98 != 129U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 7053099481970LLU;
	uint64_t x462 = UINT64_MAX;
	volatile uint16_t x464 = UINT16_MAX;
	static volatile int32_t t99 = 8587402;

	t99 = ((x461<=x462)-(x463+x464));

	if (t99 != -65529) { NG(); } else { ; }
	
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

