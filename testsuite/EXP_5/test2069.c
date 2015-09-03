#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = INT16_MIN;
int32_t x9 = INT32_MIN;
int64_t x13 = INT64_MIN;
int16_t x21 = INT16_MIN;
int16_t x22 = INT16_MIN;
static uint16_t x25 = 32587U;
volatile int32_t t7 = -1604;
uint32_t x36 = 566694U;
uint16_t x37 = 39U;
volatile int8_t x46 = -6;
volatile int64_t x49 = 2176874397491320LL;
int8_t x50 = INT8_MIN;
int16_t x54 = -13;
int16_t x62 = INT16_MAX;
int32_t x65 = -11628363;
int64_t x66 = INT64_MAX;
int32_t x72 = -1;
int16_t x74 = 31;
uint64_t t18 = 1096253493LLU;
uint32_t x87 = 130U;
volatile uint64_t t21 = 7LLU;
volatile int8_t x89 = 20;
int64_t t22 = -243187692638198LL;
int16_t x103 = -36;
static int16_t x109 = INT16_MAX;
static int16_t x117 = INT16_MIN;
int64_t t26 = 21021995305LL;
int64_t x121 = -892655212LL;
int32_t x133 = -391076388;
static int32_t x138 = -1;
int16_t x140 = -153;
static int16_t x149 = 1;
static int64_t x151 = -218394438790LL;
volatile int64_t x155 = -1LL;
static int32_t x159 = -16660998;
int16_t x160 = -1;
int16_t x164 = INT16_MIN;
uint64_t t35 = 581747732248LLU;
int32_t x166 = INT32_MAX;
int32_t x169 = -30147;
int64_t x171 = INT64_MAX;
static int64_t x172 = INT64_MIN;
int32_t x173 = -1;
int32_t x174 = INT32_MIN;
volatile uint32_t t38 = UINT32_MAX;
int8_t x180 = -1;
int16_t x184 = 8;
int64_t x188 = -558LL;
volatile int16_t x195 = -1;
static int8_t x199 = -1;
static int64_t t47 = 692153LL;
int8_t x215 = 0;
uint64_t x218 = UINT64_MAX;
static volatile int64_t x220 = INT64_MAX;
static volatile uint64_t x221 = UINT64_MAX;
volatile uint16_t x222 = 5U;
uint64_t x224 = UINT64_MAX;
volatile uint64_t t50 = UINT64_MAX;
volatile uint64_t x228 = UINT64_MAX;
uint16_t x261 = 10U;
int32_t x262 = 1453;
int64_t t58 = 56937259900696556LL;
volatile int64_t x275 = -9796910968LL;
int64_t x280 = 16058227409201LL;
int64_t x284 = INT64_MIN;
uint16_t x286 = 472U;
uint32_t x287 = UINT32_MAX;
int8_t x292 = INT8_MIN;
int16_t x294 = -2201;
volatile int64_t t66 = -13LL;
int64_t x301 = -3LL;
int16_t x316 = 25;
uint64_t t70 = 33174223152LLU;
uint32_t x320 = 30219U;
int16_t x333 = -1;
volatile int32_t x335 = 93685;
uint64_t x336 = 943170LLU;
static uint64_t t75 = 505904060049LLU;
int32_t x342 = INT32_MIN;
static uint32_t t76 = 12491108U;
static volatile int64_t t77 = 1646515760515LL;
int64_t x354 = -1LL;
volatile int64_t x364 = 1097778137504548385LL;
static uint16_t x369 = 15U;
int32_t x370 = 348621349;
static uint64_t x371 = UINT64_MAX;
uint32_t x375 = UINT32_MAX;
uint64_t x376 = UINT64_MAX;
volatile uint64_t t83 = 1987157032673616LLU;
static volatile uint8_t x379 = 44U;
volatile int32_t t84 = -272736998;
int8_t x381 = INT8_MIN;
int64_t x382 = INT64_MIN;
int8_t x404 = -1;
static int32_t x407 = -1;
int16_t x408 = -1;
volatile int32_t t93 = -282;
volatile int8_t x426 = -1;
static uint8_t x427 = UINT8_MAX;
volatile uint64_t x437 = 31212721622LLU;
int32_t x441 = -3;
int32_t x443 = -1;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	uint64_t x2 = 3LLU;
	int16_t x3 = -1;
	volatile uint64_t t0 = 144386211445LLU;

	t0 = (x1-((x2^x3)/x4));

	if (t0 != 2147483646LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = 1265;
	int16_t x7 = INT16_MAX;
	int64_t x8 = INT64_MAX;
	static int64_t t1 = -1063918185010102705LL;

	t1 = (x5-((x6^x7)/x8));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 0;
	uint8_t x11 = 44U;
	static uint32_t x12 = 18074960U;
	volatile uint32_t t2 = 2299085U;

	t2 = (x9-((x10^x11)/x12));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	static int64_t x15 = -1LL;
	static int16_t x16 = 9289;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13-((x14^x15)/x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 92U;
	static int32_t x18 = -1;
	int32_t x19 = INT32_MIN;
	int32_t x20 = 7033;
	int32_t t4 = 3938325;

	t4 = (x17-((x18^x19)/x20));

	if (t4 != -305251) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = INT16_MIN;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 31833046107526LLU;

	t5 = (x21-((x22^x23)/x24));

	if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = 5511;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 226842375809966LL;

	t6 = (x25-((x26^x27)/x28));

	if (t6 != 32587LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 1721;
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MAX;
	static int8_t x32 = 9;

	t7 = (x29-((x30^x31)/x32));

	if (t7 != 1721) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = 1;
	int32_t x35 = 25585766;
	static volatile int64_t t8 = 43LL;

	t8 = (x33-((x34^x35)/x36));

	if (t8 != 9223372036854775762LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	int32_t x40 = -756672765;
	int32_t t9 = -148412;

	t9 = (x37-((x38^x39)/x40));

	if (t9 != 39) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 81U;
	uint8_t x42 = 11U;
	uint64_t x43 = 14742049535LLU;
	int64_t x44 = INT64_MIN;
	volatile uint64_t t10 = 16794209779499LLU;

	t10 = (x41-((x42^x43)/x44));

	if (t10 != 81LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static volatile int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t11 = -64;

	t11 = (x45-((x46^x47)/x48));

	if (t11 != -16942088) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x51 = -1;
	int64_t x52 = INT64_MAX;
	volatile int64_t t12 = 705108611LL;

	t12 = (x49-((x50^x51)/x52));

	if (t12 != 2176874397491320LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 35;
	uint8_t x55 = UINT8_MAX;
	uint64_t x56 = 131510380174170999LLU;
	volatile uint64_t t13 = 14LLU;

	t13 = (x53-((x54^x55)/x56));

	if (t13 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x57 = UINT8_MAX;
	volatile uint16_t x58 = UINT16_MAX;
	int16_t x59 = -4294;
	int32_t x60 = -39;
	int32_t t14 = -47;

	t14 = (x57-((x58^x59)/x60));

	if (t14 != -1315) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	volatile int16_t x63 = INT16_MIN;
	uint32_t x64 = 494024U;
	volatile uint32_t t15 = 2U;

	t15 = (x61-((x62^x63)/x64));

	if (t15 != 24074U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = INT16_MAX;
	static int64_t x68 = INT64_MIN;
	volatile int64_t t16 = 998379762137948230LL;

	t16 = (x65-((x66^x67)/x68));

	if (t16 != -11628363LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	int64_t x70 = -286283LL;
	uint32_t x71 = UINT32_MAX;
	static volatile int64_t t17 = -18546314929LL;

	t17 = (x69-((x70^x71)/x72));

	if (t17 != -6442164662LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static volatile int32_t x75 = INT32_MAX;
	uint64_t x76 = UINT64_MAX;

	t18 = (x73-((x74^x75)/x76));

	if (t18 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 136269844801388LL;
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int64_t t19 = 1LL;

	t19 = (x77-((x78^x79)/x80));

	if (t19 != 136269844801388LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 6U;
	int64_t x82 = 771113309688LL;
	int64_t x83 = 672227706739LL;
	int32_t x84 = INT32_MIN;
	volatile int64_t t20 = -251235137182013LL;

	t20 = (x81-((x82^x83)/x84));

	if (t20 != 100LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static uint8_t x86 = UINT8_MAX;
	static uint64_t x88 = 82LLU;

	t21 = (x85-((x86^x87)/x88));

	if (t21 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x90 = -2;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = -1LL;

	t22 = (x89-((x90^x91)/x92));

	if (t22 != -235LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 10953418U;
	static int32_t x102 = INT32_MIN;
	static int16_t x104 = 560;
	static uint32_t t23 = 2166U;

	t23 = (x101-((x102^x103)/x104));

	if (t23 != 7118626U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x110 = INT8_MIN;
	volatile uint64_t x111 = 14326375069181LLU;
	volatile int8_t x112 = -1;
	volatile uint64_t t24 = 147338485353LLU;

	t24 = (x109-((x110^x111)/x112));

	if (t24 != 32767LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	static volatile int16_t x114 = INT16_MAX;
	int8_t x115 = -1;
	int64_t x116 = 57473149354354806LL;
	volatile int64_t t25 = -47994831216074238LL;

	t25 = (x113-((x114^x115)/x116));

	if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x118 = -82;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -1;

	t26 = (x117-((x118^x119)/x120));

	if (t26 != 9223372036854742958LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x122 = INT32_MIN;
	uint8_t x123 = 1U;
	static int16_t x124 = 54;
	volatile int64_t t27 = 127571LL;

	t27 = (x121-((x122^x123)/x124));

	if (t27 != -852886997LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = -1961;
	int16_t x127 = INT16_MAX;
	static int8_t x128 = -25;
	volatile int32_t t28 = -310213121;

	t28 = (x125-((x126^x127)/x128));

	if (t28 != -977) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x134 = -427510853049472901LL;
	int32_t x135 = INT32_MIN;
	volatile int8_t x136 = -1;
	volatile int64_t t29 = 12LL;

	t29 = (x133-((x134^x135)/x136));

	if (t29 != 427510854079827543LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	static int8_t x139 = 1;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x137-((x138^x139)/x140));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 1357722058U;
	int8_t x142 = INT8_MAX;
	volatile uint8_t x143 = 10U;
	int16_t x144 = 14;
	uint32_t t31 = 133946U;

	t31 = (x141-((x142^x143)/x144));

	if (t31 != 1357722050U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x150 = 31630U;
	int16_t x152 = INT16_MIN;
	int64_t t32 = -60194030601LL;

	t32 = (x149-((x150^x151)/x152));

	if (t32 != -6664868LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x153 = 6U;
	int16_t x154 = -1;
	int32_t x156 = -45838;
	int64_t t33 = 14507LL;

	t33 = (x153-((x154^x155)/x156));

	if (t33 != 6LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -1;
	int32_t x158 = 3;
	static int32_t t34 = -11;

	t34 = (x157-((x158^x159)/x160));

	if (t34 != -16661000) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	uint32_t x163 = 16963U;

	t35 = (x161-((x162^x163)/x164));

	if (t35 != 18446462598732840960LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -2;
	uint64_t x167 = 13582909557LLU;
	uint8_t x168 = 1U;
	uint64_t t36 = 302LLU;

	t36 = (x165-((x166^x167)/x168));

	if (t36 != 18446744059375173748LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x170 = UINT16_MAX;
	volatile int64_t t37 = 889745183LL;

	t37 = (x169-((x170^x171)/x172));

	if (t37 != -30147LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x175 = INT16_MIN;
	uint32_t x176 = UINT32_MAX;

	t38 = (x173-((x174^x175)/x176));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x177 = UINT32_MAX;
	static int64_t x178 = INT64_MAX;
	volatile int16_t x179 = -12;
	volatile int64_t t39 = -145099262473473LL;

	t39 = (x177-((x178^x179)/x180));

	if (t39 != -9223372032559808502LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MAX;
	static int32_t x183 = INT32_MIN;
	uint32_t t40 = UINT32_MAX;

	t40 = (x181-((x182^x183)/x184));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = 509882;
	static int32_t x186 = INT32_MIN;
	int8_t x187 = 0;
	static volatile int64_t t41 = 137880LL;

	t41 = (x185-((x186^x187)/x188));

	if (t41 != -3338655LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = 38574;
	int8_t x190 = 7;
	int8_t x191 = INT8_MIN;
	volatile int8_t x192 = -52;
	volatile int32_t t42 = 7286;

	t42 = (x189-((x190^x191)/x192));

	if (t42 != 38572) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MAX;
	static uint64_t x194 = UINT64_MAX;
	uint64_t x196 = 2021749830967066LLU;
	uint64_t t43 = 40028140950511LLU;

	t43 = (x193-((x194^x195)/x196));

	if (t43 != 2147483647LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = 0;
	int16_t x198 = -1007;
	int32_t x200 = INT32_MIN;
	int32_t t44 = 1;

	t44 = (x197-((x198^x199)/x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -7;
	volatile int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	uint8_t x204 = 1U;
	int32_t t45 = -24538754;

	t45 = (x201-((x202^x203)/x204));

	if (t45 != -2147483527) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x205 = 12U;
	static uint16_t x206 = 224U;
	int16_t x207 = INT16_MIN;
	volatile int16_t x208 = INT16_MIN;
	static int32_t t46 = 54;

	t46 = (x205-((x206^x207)/x208));

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x209 = -1LL;
	int64_t x210 = -1LL;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;

	t47 = (x209-((x210^x211)/x212));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x213 = 20U;
	int8_t x214 = 0;
	int8_t x216 = INT8_MIN;
	static int32_t t48 = -249630;

	t48 = (x213-((x214^x215)/x216));

	if (t48 != 20) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = 30U;
	static int8_t x219 = -22;
	uint64_t t49 = 137946183471988694LLU;

	t49 = (x217-((x218^x219)/x220));

	if (t49 != 30LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x223 = INT64_MAX;

	t50 = (x221-((x222^x223)/x224));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = 2295U;
	static uint32_t x226 = 3U;
	int64_t x227 = -9064LL;
	volatile uint64_t t51 = 10LLU;

	t51 = (x225-((x226^x227)/x228));

	if (t51 != 2295LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x229 = UINT16_MAX;
	int16_t x230 = INT16_MAX;
	int8_t x231 = INT8_MIN;
	volatile int64_t x232 = INT64_MIN;
	volatile int64_t t52 = -37198268LL;

	t52 = (x229-((x230^x231)/x232));

	if (t52 != 65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x241 = 1240LLU;
	int32_t x242 = -34;
	uint16_t x243 = 83U;
	static volatile int64_t x244 = INT64_MIN;
	volatile uint64_t t53 = 6626941046732406LLU;

	t53 = (x241-((x242^x243)/x244));

	if (t53 != 1240LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = INT64_MAX;
	uint64_t x246 = 31580LLU;
	int16_t x247 = -1;
	int64_t x248 = INT64_MIN;
	volatile uint64_t t54 = 761173LLU;

	t54 = (x245-((x246^x247)/x248));

	if (t54 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MIN;
	uint64_t x251 = 171256LLU;
	int32_t x252 = -65410296;
	volatile uint64_t t55 = 7320811973795640235LLU;

	t55 = (x249-((x250^x251)/x252));

	if (t55 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x253 = 48;
	int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	uint8_t x256 = UINT8_MAX;
	int32_t t56 = 659386;

	t56 = (x253-((x254^x255)/x256));

	if (t56 != -80) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = 50316401U;
	int64_t x258 = INT64_MIN;
	uint8_t x259 = 1U;
	static volatile uint8_t x260 = 14U;
	int64_t t57 = 1050902043584856LL;

	t57 = (x257-((x258^x259)/x260));

	if (t57 != 658812288397086101LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MAX;

	t58 = (x261-((x262^x263)/x264));

	if (t58 != 10LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = INT64_MIN;
	volatile int32_t x267 = -1;
	uint16_t x268 = 30495U;
	volatile int64_t t59 = 85LL;

	t59 = (x265-((x266^x267)/x268));

	if (t59 != -302457370859767LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x269 = INT8_MIN;
	uint32_t x270 = 6U;
	static int16_t x271 = INT16_MAX;
	static int64_t x272 = INT64_MAX;
	int64_t t60 = -96687LL;

	t60 = (x269-((x270^x271)/x272));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = INT64_MIN;
	static int64_t x274 = -30361LL;
	int8_t x276 = INT8_MIN;
	int64_t t61 = 34081874276LL;

	t61 = (x273-((x274^x275)/x276));

	if (t61 != -9223372036778237677LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = 0;
	volatile int8_t x278 = INT8_MIN;
	uint16_t x279 = 3546U;
	int64_t t62 = 11843307643683LL;

	t62 = (x277-((x278^x279)/x280));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	uint8_t x283 = 50U;
	int64_t t63 = 27971603022104669LL;

	t63 = (x281-((x282^x283)/x284));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x285 = UINT16_MAX;
	volatile int16_t x288 = INT16_MIN;
	uint32_t t64 = 992U;

	t64 = (x285-((x286^x287)/x288));

	if (t64 != 65534U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x289 = 5LLU;
	uint8_t x290 = 9U;
	uint32_t x291 = UINT32_MAX;
	volatile uint64_t t65 = 2972638LLU;

	t65 = (x289-((x290^x291)/x292));

	if (t65 != 4LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MIN;
	int64_t x295 = 292780210LL;
	int8_t x296 = INT8_MIN;

	t66 = (x293-((x294^x295)/x296));

	if (t66 != -2287456LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x302 = -10295;
	int16_t x303 = INT16_MIN;
	volatile int16_t x304 = 315;
	volatile int64_t t67 = -6911656537LL;

	t67 = (x301-((x302^x303)/x304));

	if (t67 != -74LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = 17U;
	volatile uint64_t x306 = 7376557798963371323LLU;
	int32_t x307 = -1;
	volatile int64_t x308 = -1LL;
	uint64_t t68 = 6100531LLU;

	t68 = (x305-((x306^x307)/x308));

	if (t68 != 17LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 239101841379857028LLU;
	int32_t x310 = INT32_MIN;
	volatile int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	uint64_t t69 = 126LLU;

	t69 = (x309-((x310^x311)/x312));

	if (t69 != 239101841379922563LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = INT32_MIN;
	static volatile uint64_t x314 = UINT64_MAX;
	static volatile int32_t x315 = INT32_MIN;

	t70 = (x313-((x314^x315)/x316));

	if (t70 != 18446744071476168623LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MIN;
	volatile uint8_t x318 = 1U;
	static uint16_t x319 = 2U;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x317-((x318^x319)/x320));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MAX;
	static volatile int64_t x322 = -27663422144618LL;
	volatile int8_t x323 = INT8_MIN;
	int64_t x324 = -4532794LL;
	int64_t t72 = -15LL;

	t72 = (x321-((x322^x323)/x324));

	if (t72 != 2153586598LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x325 = 2068589168U;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = 3151;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t73 = 14453430588218079LLU;

	t73 = (x325-((x326^x327)/x328));

	if (t73 != 2068589168LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x334 = 60;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x333-((x334^x335)/x336));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x337 = 86LLU;
	int64_t x338 = 13788009919462166LL;
	int64_t x339 = 445465097699LL;
	static int64_t x340 = -1LL;

	t75 = (x337-((x338^x339)/x340));

	if (t75 != 13788393601322827LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 2796U;
	int32_t x343 = -1;
	int8_t x344 = 1;

	t76 = (x341-((x342^x343)/x344));

	if (t76 != 2147486445U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int16_t x347 = 0;
	volatile int32_t x348 = -69019806;

	t77 = (x345-((x346^x347)/x348));

	if (t77 != -135781183471LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x353 = 51U;
	int32_t x355 = -1432;
	volatile uint64_t x356 = 10LLU;
	uint64_t t78 = 4189234387265351636LLU;

	t78 = (x353-((x354^x355)/x356));

	if (t78 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = -1LL;
	int8_t x358 = -1;
	uint16_t x359 = UINT16_MAX;
	static int16_t x360 = -1;
	volatile int64_t t79 = -26830665484816LL;

	t79 = (x357-((x358^x359)/x360));

	if (t79 != -65537LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -1LL;
	uint64_t x362 = 5549263985320LLU;
	static int64_t x363 = -460353682097585LL;
	uint64_t t80 = 58LLU;

	t80 = (x361-((x362^x363)/x364));

	if (t80 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x365 = 10;
	int8_t x366 = 26;
	static int32_t x367 = -121310980;
	int16_t x368 = INT16_MIN;
	volatile int32_t t81 = 15626564;

	t81 = (x365-((x366^x367)/x368));

	if (t81 != -3692) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x372 = 5U;
	static volatile uint64_t t82 = 1836524593549LLU;

	t82 = (x369-((x370^x371)/x372));

	if (t82 != 14757395259037365578LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x373 = 12U;
	uint8_t x374 = 1U;

	t83 = (x373-((x374^x375)/x376));

	if (t83 != 12LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x377 = -1514;
	volatile int16_t x378 = -1;
	volatile int16_t x380 = 2635;

	t84 = (x377-((x378^x379)/x380));

	if (t84 != -1514) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x383 = 976LLU;
	volatile int32_t x384 = INT32_MAX;
	uint64_t t85 = 101907323229LLU;

	t85 = (x381-((x382^x383)/x384));

	if (t85 != 18446744069414584190LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = 5;
	uint8_t x387 = 7U;
	volatile uint8_t x388 = 3U;
	volatile int32_t t86 = 1;

	t86 = (x385-((x386^x387)/x388));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = -1;
	static int16_t x391 = INT16_MAX;
	int64_t x392 = -39668045267275LL;
	volatile int64_t t87 = -480270319564631470LL;

	t87 = (x389-((x390^x391)/x392));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x397 = INT8_MAX;
	int32_t x398 = -1;
	static int64_t x399 = INT64_MIN;
	uint64_t x400 = 413LLU;
	volatile uint64_t t88 = 2114829191LLU;

	t88 = (x397-((x398^x399)/x400));

	if (t88 != 18424411453765593449LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x401 = 192095561;
	uint8_t x402 = UINT8_MAX;
	volatile int64_t x403 = -1256899LL;
	static volatile int64_t t89 = 10LL;

	t89 = (x401-((x402^x403)/x404));

	if (t89 != 190838795LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = INT32_MAX;
	uint16_t x406 = 7950U;
	static volatile int32_t t90 = -926654158;

	t90 = (x405-((x406^x407)/x408));

	if (t90 != 2147475696) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x409 = -8035;
	uint64_t x410 = UINT64_MAX;
	static volatile int32_t x411 = INT32_MAX;
	uint32_t x412 = UINT32_MAX;
	static volatile uint64_t t91 = 19668325344240LLU;

	t91 = (x409-((x410^x411)/x412));

	if (t91 != 18446744069414576285LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = -1;
	volatile uint8_t x415 = 0U;
	volatile int64_t x416 = 1590731043822594134LL;
	static int64_t t92 = -73509748LL;

	t92 = (x413-((x414^x415)/x416));

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = -1;
	int16_t x418 = INT16_MIN;
	int32_t x419 = -1;
	int8_t x420 = INT8_MIN;

	t93 = (x417-((x418^x419)/x420));

	if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = INT32_MAX;
	volatile uint8_t x423 = 7U;
	int32_t x424 = INT32_MIN;
	int32_t t94 = 1;

	t94 = (x421-((x422^x423)/x424));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x425 = INT32_MAX;
	static uint32_t x428 = 13066818U;
	uint32_t t95 = 198U;

	t95 = (x425-((x426^x427)/x428));

	if (t95 != 2147483319U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = 860712;
	volatile int8_t x430 = INT8_MIN;
	static uint32_t x431 = 1086020U;
	static volatile uint16_t x432 = 5U;
	uint32_t t96 = 17187907U;

	t96 = (x429-((x430^x431)/x432));

	if (t96 != 3437051752U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x433 = UINT64_MAX;
	int16_t x434 = -1;
	uint32_t x435 = 1811845U;
	uint64_t x436 = 458LLU;
	uint64_t t97 = 6925282448085236300LLU;

	t97 = (x433-((x434^x435)/x436));

	if (t97 != 18446744073700177914LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x438 = -1;
	int8_t x439 = 45;
	int32_t x440 = 234;
	static uint64_t t98 = 181201039185LLU;

	t98 = (x437-((x438^x439)/x440));

	if (t98 != 31212721622LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x442 = -47104674;
	static uint64_t x444 = 3853LLU;
	uint64_t t99 = 18058396090LLU;

	t99 = (x441-((x442^x443)/x444));

	if (t99 != 18446744073709539388LLU) { NG(); } else { ; }
	
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

