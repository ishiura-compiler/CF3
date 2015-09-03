#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
uint64_t x18 = UINT64_MAX;
int16_t x20 = 810;
volatile int16_t x36 = INT16_MIN;
static int8_t x39 = INT8_MIN;
int8_t x41 = 4;
int64_t x56 = 677594869LL;
static uint64_t t8 = 341045872840538893LLU;
static uint32_t x64 = UINT32_MAX;
static volatile uint64_t t11 = 6889445142228306081LLU;
int16_t x77 = -1995;
int32_t x84 = 112543646;
static uint64_t x90 = 77414661391996891LLU;
static uint32_t x93 = 922715U;
volatile uint64_t x95 = 23LLU;
int16_t x100 = -7;
int64_t x106 = -1LL;
static uint8_t x108 = 1U;
volatile int64_t t19 = 1943916466499285759LL;
static uint64_t x111 = 1709261629973LLU;
volatile uint32_t t21 = 8U;
static int64_t x120 = 9432LL;
static int64_t x123 = -4050758428466LL;
volatile uint32_t x125 = 8169983U;
uint8_t x128 = 91U;
int8_t x139 = -27;
static int16_t x140 = INT16_MIN;
static volatile int8_t x146 = INT8_MIN;
static volatile int64_t x152 = -18942176250724LL;
uint16_t x156 = UINT16_MAX;
int16_t x158 = INT16_MIN;
int64_t x164 = -7393LL;
volatile int64_t t31 = -56722LL;
int16_t x165 = 219;
volatile int32_t t32 = 15412;
int64_t x179 = -13440342187LL;
int64_t x192 = -1LL;
int16_t x207 = -1;
int64_t t40 = 4129127LL;
uint8_t x211 = UINT8_MAX;
int64_t t42 = -2008287LL;
int64_t x217 = INT64_MAX;
uint8_t x225 = 0U;
uint16_t x227 = 0U;
static int8_t x228 = 17;
uint8_t x229 = UINT8_MAX;
volatile int32_t x239 = INT32_MIN;
uint32_t x240 = 69243260U;
uint32_t t47 = 2U;
static int16_t x241 = INT16_MIN;
int64_t x245 = -3148491LL;
int16_t x257 = INT16_MIN;
int8_t x259 = 29;
int32_t t51 = 388536;
static int64_t x261 = -1LL;
uint32_t x264 = UINT32_MAX;
volatile int64_t t52 = -654187099890LL;
int64_t x281 = -6348080316LL;
volatile uint16_t x282 = UINT16_MAX;
uint16_t x283 = 1455U;
volatile int64_t t54 = 25LL;
uint16_t x290 = UINT16_MAX;
uint64_t t58 = 37497LLU;
volatile int32_t x301 = INT32_MIN;
static int64_t x312 = -1LL;
volatile uint32_t x321 = 28662U;
int32_t x325 = 2091520;
int64_t t63 = -4011393198207068LL;
uint8_t x335 = 55U;
int32_t x340 = INT32_MIN;
static int64_t x346 = INT64_MIN;
static int64_t t68 = 12LL;
uint8_t x350 = 11U;
static uint16_t x357 = UINT16_MAX;
volatile int16_t x369 = 1;
uint64_t x374 = 854LLU;
int64_t x376 = -1LL;
int8_t x384 = INT8_MIN;
static int16_t x385 = -13989;
static int8_t x387 = -7;
int16_t x388 = INT16_MIN;
int64_t x394 = -1058264202LL;
uint64_t x395 = 209968032LLU;
int32_t x398 = -1;
int8_t x402 = INT8_MAX;
volatile int32_t x404 = 670088;
static volatile int8_t x405 = INT8_MIN;
int16_t x406 = 0;
volatile int32_t t80 = 1;
volatile int32_t t82 = -109;
int32_t x425 = -1589651;
int32_t t83 = -426;
int32_t x429 = 572609084;
int64_t t84 = -3006291589561669LL;
int64_t x433 = INT64_MAX;
int8_t x436 = INT8_MIN;
volatile int64_t t85 = 492245445LL;
int8_t x441 = INT8_MAX;
static int16_t x446 = INT16_MIN;
static int8_t x447 = INT8_MIN;
volatile uint64_t t87 = 40610866435LLU;
uint16_t x450 = UINT16_MAX;
volatile int16_t x455 = INT16_MAX;
static uint64_t t90 = 8107LLU;
int16_t x472 = 290;
uint16_t x477 = 124U;
static uint32_t x484 = 1115772U;
uint8_t x490 = 7U;
int64_t t96 = 29441310581LL;
static int64_t t97 = -404997456LL;
uint32_t x507 = 9U;
volatile uint32_t t99 = 16331070U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int16_t x2 = 750;
	uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2-(x3+x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MIN;
	static uint32_t x10 = UINT32_MAX;
	volatile int16_t x11 = INT16_MAX;
	static int32_t x12 = INT32_MIN;
	uint32_t t1 = 3529384U;

	t1 = (x9|(x10-(x11+x12)));

	if (t1 != 4294934528U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = INT64_MAX;
	int64_t x19 = -70470782804558604LL;
	volatile uint64_t t2 = 157LLU;

	t2 = (x17|(x18-(x19+x20)));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = -428638699182LL;
	uint64_t x26 = 48910499LLU;
	int16_t x27 = INT16_MIN;
	volatile uint16_t x28 = 1617U;
	static uint64_t t3 = 20083693450273LLU;

	t3 = (x25|(x26-(x27+x28)));

	if (t3 != 18446743645084109650LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = -186LL;
	static int32_t x34 = -7;
	volatile int16_t x35 = -1;
	volatile int64_t t4 = 51718668LL;

	t4 = (x33|(x34-(x35+x36)));

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MAX;
	int32_t x38 = 6969750;
	uint32_t x40 = 236U;
	volatile uint32_t t5 = 72796U;

	t5 = (x37|(x38-(x39+x40)));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x42 = INT16_MAX;
	static int32_t x43 = INT32_MAX;
	static int32_t x44 = -17880463;
	static int32_t t6 = 531274;

	t6 = (x41|(x42-(x43+x44)));

	if (t6 != -2129570417) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x49 = 886LLU;
	uint32_t x50 = 2095250896U;
	uint32_t x51 = 621301U;
	int64_t x52 = -337349922874LL;
	uint64_t t7 = 15541325346085907LLU;

	t7 = (x49|(x50-(x51+x52)));

	if (t7 != 339444552567LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = INT16_MIN;
	volatile uint64_t x54 = 4368LLU;
	static volatile uint64_t x55 = UINT64_MAX;

	t8 = (x53|(x54-(x55+x56)));

	if (t8 != 18446744073709537820LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = 6075627;
	int16_t x58 = 7640;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = INT64_MIN;
	int64_t t9 = 653201305534891LL;

	t9 = (x57|(x58-(x59+x60)));

	if (t9 != 9223372036854758907LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -1LL;
	int32_t x62 = INT32_MIN;
	static int8_t x63 = 35;
	int64_t t10 = 22890598600413LL;

	t10 = (x61|(x62-(x63+x64)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = -4;
	int8_t x66 = INT8_MAX;
	static volatile uint64_t x67 = 297615978098597190LLU;
	static int16_t x68 = INT16_MIN;

	t11 = (x65|(x66-(x67+x68)));

	if (t11 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = UINT8_MAX;
	int64_t t12 = 31046322650229019LL;

	t12 = (x69|(x70-(x71+x72)));

	if (t12 != -9223372036854743296LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x78 = 85954405904828087LLU;
	int32_t x79 = INT32_MAX;
	int32_t x80 = INT32_MIN;
	uint64_t t13 = 773168325LLU;

	t13 = (x77|(x78-(x79+x80)));

	if (t13 != 18446744073709551293LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = -1;
	static volatile int16_t x82 = INT16_MAX;
	volatile int64_t x83 = INT64_MIN;
	int64_t t14 = 3983500714328067713LL;

	t14 = (x81|(x82-(x83+x84)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -1;
	int16_t x86 = 4;
	volatile int8_t x87 = 0;
	int8_t x88 = INT8_MIN;
	volatile int32_t t15 = -8956591;

	t15 = (x85|(x86-(x87+x88)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 54804LLU;
	int16_t x91 = -7;
	int8_t x92 = -1;
	uint64_t t16 = 5683980LLU;

	t16 = (x89|(x90-(x91+x92)));

	if (t16 != 77414661392029687LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x94 = 11;
	int8_t x96 = -7;
	uint64_t t17 = 201650167LLU;

	t17 = (x93|(x94-(x95+x96)));

	if (t17 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x97 = 1395U;
	int32_t x98 = INT32_MIN;
	volatile int8_t x99 = INT8_MIN;
	volatile int32_t t18 = 63365226;

	t18 = (x97|(x98-(x99+x100)));

	if (t18 != -2147482121) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = INT32_MIN;
	volatile uint8_t x107 = UINT8_MAX;

	t19 = (x105|(x106-(x107+x108)));

	if (t19 != -257LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1;
	int16_t x110 = 42;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x109|(x110-(x111+x112)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x113 = 3U;
	int16_t x114 = INT16_MAX;
	static int16_t x115 = -227;
	volatile uint32_t x116 = UINT32_MAX;

	t21 = (x113|(x114-(x115+x116)));

	if (t21 != 32995U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x117 = 6870192733022709606LLU;
	volatile uint64_t x118 = UINT64_MAX;
	uint64_t x119 = UINT64_MAX;
	uint64_t t22 = 87230378298165LLU;

	t22 = (x117|(x118-(x119+x120)));

	if (t22 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MAX;
	int16_t x124 = INT16_MAX;
	static int64_t t23 = -1LL;

	t23 = (x121|(x122-(x123+x124)));

	if (t23 != -1543215310LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	static uint32_t t24 = 54U;

	t24 = (x125|(x126-(x127+x128)));

	if (t24 != 4294945279U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -3441431;
	int32_t x130 = INT32_MIN;
	static int8_t x131 = INT8_MIN;
	uint16_t x132 = 3U;
	int32_t t25 = -48670163;

	t25 = (x129|(x130-(x131+x132)));

	if (t25 != -3441411) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x137 = 0U;
	static volatile int16_t x138 = INT16_MIN;
	int32_t t26 = 74693412;

	t26 = (x137|(x138-(x139+x140)));

	if (t26 != 27) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x145 = 2810708U;
	int8_t x147 = INT8_MIN;
	uint8_t x148 = 1U;
	uint32_t t27 = UINT32_MAX;

	t27 = (x145|(x146-(x147+x148)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = -23;
	static volatile uint64_t x150 = UINT64_MAX;
	int32_t x151 = -1;
	static uint64_t t28 = 350341066185180680LLU;

	t28 = (x149|(x150-(x151+x152)));

	if (t28 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = 1848LL;
	volatile int8_t x154 = INT8_MAX;
	int8_t x155 = INT8_MAX;
	volatile int64_t t29 = -909674543861399LL;

	t29 = (x153|(x154-(x155+x156)));

	if (t29 != -63687LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = INT64_MIN;
	volatile uint64_t x159 = 100011314193927LLU;
	int32_t x160 = INT32_MIN;
	uint64_t t30 = 114889047184LLU;

	t30 = (x157|(x158-(x159+x160)));

	if (t30 != 18446644064542808569LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = -74;
	int64_t x163 = 0LL;

	t31 = (x161|(x162-(x163+x164)));

	if (t31 != -25449LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x166 = INT32_MIN;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;

	t32 = (x165|(x166-(x167+x168)));

	if (t32 != -2147483173) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x169 = INT16_MIN;
	static volatile int16_t x170 = -1;
	static uint16_t x171 = 7U;
	static uint64_t x172 = 296297LLU;
	uint64_t t33 = 19367478894802859LLU;

	t33 = (x169|(x170-(x171+x172)));

	if (t33 != 18446744073709550223LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 3U;
	static volatile int32_t x174 = 3;
	int8_t x175 = -1;
	volatile int8_t x176 = INT8_MIN;
	int32_t t34 = 4018201;

	t34 = (x173|(x174-(x175+x176)));

	if (t34 != 135) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = 497642U;
	volatile int32_t x180 = -62;
	int64_t t35 = -1709846480488991545LL;

	t35 = (x177|(x178-(x179+x180)));

	if (t35 != -3885LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MIN;
	volatile uint64_t x182 = UINT64_MAX;
	int16_t x183 = -2339;
	static int16_t x184 = 12;
	volatile uint64_t t36 = 8097479LLU;

	t36 = (x181|(x182-(x183+x184)));

	if (t36 != 18446744073709521174LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x189 = INT64_MIN;
	int8_t x190 = -1;
	static int16_t x191 = INT16_MAX;
	int64_t t37 = 6835568LL;

	t37 = (x189|(x190-(x191+x192)));

	if (t37 != -32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x193 = INT8_MIN;
	static int16_t x194 = -1;
	static uint8_t x195 = 6U;
	int32_t x196 = -499899297;
	static volatile int32_t t38 = -1;

	t38 = (x193|(x194-(x195+x196)));

	if (t38 != -102) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x197 = UINT16_MAX;
	uint16_t x198 = 98U;
	uint16_t x199 = UINT16_MAX;
	static int64_t x200 = -1LL;
	int64_t t39 = -1062LL;

	t39 = (x197|(x198-(x199+x200)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = INT64_MIN;
	int8_t x208 = -26;

	t40 = (x205|(x206-(x207+x208)));

	if (t40 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x209 = INT64_MIN;
	int64_t x210 = -1LL;
	int32_t x212 = -1;
	volatile int64_t t41 = -1698180LL;

	t41 = (x209|(x210-(x211+x212)));

	if (t41 != -255LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MIN;
	uint32_t x215 = 2162U;
	volatile int64_t x216 = -430LL;

	t42 = (x213|(x214-(x215+x216)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x218 = 7U;
	int16_t x219 = -5294;
	static int8_t x220 = 26;
	volatile int64_t t43 = INT64_MAX;

	t43 = (x217|(x218-(x219+x220)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x226 = INT16_MIN;
	static volatile int32_t t44 = -193060;

	t44 = (x225|(x226-(x227+x228)));

	if (t44 != -32785) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x230 = 1601502601971227LL;
	int32_t x231 = 118634016;
	int16_t x232 = INT16_MIN;
	int64_t t45 = -4283843207LL;

	t45 = (x229|(x230-(x231+x232)));

	if (t45 != 1601502483369983LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = INT32_MIN;
	int64_t x234 = 1476006147705029LL;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = -1;
	static volatile int64_t t46 = 2575406441259980LL;

	t46 = (x233|(x234-(x235+x236)));

	if (t46 != -165820217LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x237 = INT32_MIN;
	int8_t x238 = -1;

	t47 = (x237|(x238-(x239+x240)));

	if (t47 != 4225724035U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x242 = INT16_MIN;
	int64_t x243 = 0LL;
	static int16_t x244 = 140;
	volatile int64_t t48 = 332557631962LL;

	t48 = (x241|(x242-(x243+x244)));

	if (t48 != -140LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x246 = INT8_MAX;
	int16_t x247 = 1720;
	volatile uint8_t x248 = 60U;
	volatile int64_t t49 = -106137834640651954LL;

	t49 = (x245|(x246-(x247+x248)));

	if (t49 != -577LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = 37661;
	int8_t x254 = INT8_MIN;
	uint64_t x255 = 54LLU;
	uint8_t x256 = UINT8_MAX;
	volatile uint64_t t50 = 3LLU;

	t50 = (x253|(x254-(x255+x256)));

	if (t50 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x258 = INT8_MAX;
	int8_t x260 = INT8_MIN;

	t51 = (x257|(x258-(x259+x260)));

	if (t51 != -32542) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;

	t52 = (x261|(x262-(x263+x264)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x277 = 464;
	static int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MAX;
	static volatile uint32_t x280 = 1U;
	volatile uint32_t t53 = 195056111U;

	t53 = (x277|(x278-(x279+x280)));

	if (t53 != 2147451344U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x284 = UINT8_MAX;

	t54 = (x281|(x282-(x283+x284)));

	if (t54 != -6348080299LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x285 = INT32_MAX;
	uint64_t x286 = 21240191LLU;
	static int64_t x287 = -12017LL;
	static int16_t x288 = INT16_MIN;
	uint64_t t55 = 1LLU;

	t55 = (x285|(x286-(x287+x288)));

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x289 = 0;
	int32_t x291 = INT32_MIN;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t56 = 297;

	t56 = (x289|(x290-(x291+x292)));

	if (t56 != 65536) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x293 = UINT64_MAX;
	int64_t x294 = 459155187189475LL;
	volatile int64_t x295 = -1LL;
	static uint64_t x296 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (x293|(x294-(x295+x296)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x297 = UINT32_MAX;
	uint64_t x298 = 767756664895031871LLU;
	int16_t x299 = INT16_MIN;
	uint16_t x300 = 38U;

	t58 = (x297|(x298-(x299+x300)));

	if (t58 != 767756667226947583LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x302 = 336249301897489LL;
	int16_t x303 = INT16_MIN;
	static int8_t x304 = INT8_MIN;
	volatile int64_t t59 = -18019699377529735LL;

	t59 = (x301|(x302-(x303+x304)));

	if (t59 != -1540189807LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x305 = UINT64_MAX;
	static uint16_t x306 = 25243U;
	volatile int16_t x307 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	uint64_t t60 = UINT64_MAX;

	t60 = (x305|(x306-(x307+x308)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x309 = -1;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = 38;
	uint64_t t61 = UINT64_MAX;

	t61 = (x309|(x310-(x311+x312)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x322 = INT8_MAX;
	int32_t x323 = -18575;
	static volatile int16_t x324 = -1;
	uint32_t t62 = 134U;

	t62 = (x321|(x322-(x323+x324)));

	if (t62 != 28671U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x326 = 194U;
	static int32_t x327 = 94581682;
	int64_t x328 = 4051505525663242LL;

	t63 = (x325|(x326-(x327+x328)));

	if (t63 != -4051505619407098LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x329 = INT16_MAX;
	uint16_t x330 = 1289U;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = 49U;
	volatile uint32_t t64 = 173U;

	t64 = (x329|(x330-(x331+x332)));

	if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x333 = 457U;
	int8_t x334 = INT8_MAX;
	static int64_t x336 = -7872049657736012LL;
	static volatile int64_t t65 = -299LL;

	t65 = (x333|(x334-(x335+x336)));

	if (t65 != 7872049657736157LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x337 = -17;
	int8_t x338 = INT8_MIN;
	int16_t x339 = 11720;
	volatile int32_t t66 = -334742;

	t66 = (x337|(x338-(x339+x340)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = -1LL;
	uint64_t x342 = UINT64_MAX;
	uint8_t x343 = 5U;
	static int8_t x344 = INT8_MIN;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x341|(x342-(x343+x344)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x345 = 20;
	int8_t x347 = 0;
	static int32_t x348 = -1;

	t68 = (x345|(x346-(x347+x348)));

	if (t68 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x349 = -1;
	static volatile uint32_t x351 = 16U;
	int32_t x352 = 374292;
	uint32_t t69 = UINT32_MAX;

	t69 = (x349|(x350-(x351+x352)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x353 = 134915665U;
	volatile int16_t x354 = 996;
	volatile int8_t x355 = -1;
	static int32_t x356 = INT32_MAX;
	static uint32_t t70 = 50U;

	t70 = (x353|(x354-(x355+x356)));

	if (t70 != 2282399735U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x358 = 156254170U;
	int16_t x359 = INT16_MAX;
	int16_t x360 = -1;
	uint32_t t71 = 529250273U;

	t71 = (x357|(x358-(x359+x360)));

	if (t71 != 156237823U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x361 = 10;
	static uint64_t x362 = UINT64_MAX;
	static int64_t x363 = -1LL;
	uint64_t x364 = 8292179152206308004LLU;
	volatile uint64_t t72 = 2640207LLU;

	t72 = (x361|(x362-(x363+x364)));

	if (t72 != 10154564921503243614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x370 = INT64_MAX;
	static uint16_t x371 = 157U;
	int8_t x372 = -1;
	volatile int64_t t73 = 3113761LL;

	t73 = (x369|(x370-(x371+x372)));

	if (t73 != 9223372036854775651LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = INT16_MIN;
	int8_t x375 = -1;
	static uint64_t t74 = 1314080527271191232LLU;

	t74 = (x373|(x374-(x375+x376)));

	if (t74 != 18446744073709519704LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x381 = INT8_MIN;
	int32_t x382 = 60101392;
	int16_t x383 = INT16_MIN;
	volatile int32_t t75 = -498657569;

	t75 = (x381|(x382-(x383+x384)));

	if (t75 != -112) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x386 = -1;
	int32_t t76 = 11;

	t76 = (x385|(x386-(x387+x388)));

	if (t76 != -13985) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x393 = 11;
	static int8_t x396 = INT8_MIN;
	uint64_t t77 = 2539790203949366692LLU;

	t77 = (x393|(x394-(x395+x396)));

	if (t77 != 18446744072441319519LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x397 = UINT64_MAX;
	static volatile int64_t x399 = INT64_MAX;
	int8_t x400 = INT8_MIN;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x397|(x398-(x399+x400)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x401 = INT8_MIN;
	static uint64_t x403 = UINT64_MAX;
	uint64_t t79 = 3994707LLU;

	t79 = (x401|(x402-(x403+x404)));

	if (t79 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x407 = 33U;
	int8_t x408 = -1;

	t80 = (x405|(x406-(x407+x408)));

	if (t80 != -32) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x409 = -28;
	uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MAX;
	uint32_t x412 = UINT32_MAX;
	uint64_t t81 = 1011LLU;

	t81 = (x409|(x410-(x411+x412)));

	if (t81 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x421 = INT32_MIN;
	volatile int8_t x422 = INT8_MIN;
	volatile uint16_t x423 = 1662U;
	static int16_t x424 = INT16_MIN;

	t82 = (x421|(x422-(x423+x424)));

	if (t82 != -2147452670) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x426 = -1;
	int32_t x427 = -29060;
	volatile int8_t x428 = INT8_MIN;

	t83 = (x425|(x426-(x427+x428)));

	if (t83 != -1573265) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x430 = 0U;
	static int64_t x431 = INT64_MAX;
	int8_t x432 = INT8_MIN;

	t84 = (x429|(x430-(x431+x432)));

	if (t84 != -9223372036282166595LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x434 = -237274;
	static volatile uint16_t x435 = UINT16_MAX;

	t85 = (x433|(x434-(x435+x436)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x442 = 0;
	int8_t x443 = 1;
	static int8_t x444 = INT8_MAX;
	volatile int32_t t86 = -23;

	t86 = (x441|(x442-(x443+x444)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x445 = INT8_MIN;
	uint64_t x448 = 638LLU;

	t87 = (x445|(x446-(x447+x448)));

	if (t87 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x449 = UINT64_MAX;
	uint32_t x451 = 280785019U;
	static int32_t x452 = -10298579;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x449|(x450-(x451+x452)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MAX;
	int16_t x456 = 1007;
	static int32_t t89 = 572500;

	t89 = (x453|(x454-(x455+x456)));

	if (t89 != -111) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x457 = INT32_MIN;
	int64_t x458 = -1LL;
	static int32_t x459 = INT32_MIN;
	uint64_t x460 = 13LLU;

	t90 = (x457|(x458-(x459+x460)));

	if (t90 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = INT16_MAX;
	volatile int16_t x462 = 4958;
	int8_t x463 = -19;
	int8_t x464 = INT8_MIN;
	static int32_t t91 = -304255017;

	t91 = (x461|(x462-(x463+x464)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x465 = 2;
	static int32_t x466 = INT32_MAX;
	volatile uint8_t x467 = 3U;
	int8_t x468 = INT8_MAX;
	volatile int32_t t92 = -33;

	t92 = (x465|(x466-(x467+x468)));

	if (t92 != 2147483519) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x469 = -1;
	volatile uint16_t x470 = 7U;
	uint16_t x471 = 15U;
	volatile int32_t t93 = 0;

	t93 = (x469|(x470-(x471+x472)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x478 = INT16_MIN;
	volatile int32_t x479 = 409716315;
	volatile uint8_t x480 = 1U;
	volatile int32_t t94 = -3492;

	t94 = (x477|(x478-(x479+x480)));

	if (t94 != -409748996) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x481 = 0U;
	int16_t x482 = -1;
	int16_t x483 = INT16_MIN;
	uint32_t t95 = 15954U;

	t95 = (x481|(x482-(x483+x484)));

	if (t95 != 4293884291U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x489 = INT64_MAX;
	volatile int64_t x491 = -1LL;
	uint32_t x492 = 56836U;

	t96 = (x489|(x490-(x491+x492)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x493 = 15038U;
	int64_t x494 = 3728750LL;
	uint16_t x495 = 25U;
	uint16_t x496 = UINT16_MAX;

	t97 = (x493|(x494-(x495+x496)));

	if (t97 != 3670014LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x497 = 1;
	static int64_t x498 = INT64_MAX;
	uint16_t x499 = 26834U;
	int32_t x500 = 14310898;
	static int64_t t98 = 33551039248795432LL;

	t98 = (x497|(x498-(x499+x500)));

	if (t98 != 9223372036840438075LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x505 = 12519914;
	static volatile uint16_t x506 = 1538U;
	static int8_t x508 = -2;

	t99 = (x505|(x506-(x507+x508)));

	if (t99 != 12520955U) { NG(); } else { ; }
	
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

