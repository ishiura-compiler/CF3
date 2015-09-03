#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 4662U;
int64_t x4 = INT64_MIN;
int32_t x13 = 10103021;
int8_t x14 = 1;
uint32_t x19 = 1451500614U;
static int64_t x26 = 22155936779772773LL;
static volatile uint64_t x31 = UINT64_MAX;
volatile int8_t x35 = INT8_MAX;
int32_t t7 = -531944911;
volatile uint16_t x42 = UINT16_MAX;
volatile int16_t x61 = INT16_MAX;
int64_t x65 = -11LL;
int64_t x72 = -2789744226667435LL;
int32_t t13 = -235907;
volatile int64_t x82 = INT64_MAX;
static volatile int64_t t14 = 89041824LL;
volatile uint32_t t15 = 454155U;
int8_t x91 = 1;
int8_t x97 = -1;
uint8_t x101 = 112U;
volatile uint64_t t20 = 860197108130083570LLU;
int32_t x151 = INT32_MIN;
uint32_t x154 = 199U;
int64_t x157 = INT64_MIN;
int64_t t26 = 18576474LL;
static int16_t x163 = -17;
int32_t x168 = -1;
uint32_t x183 = 101816U;
volatile int8_t x184 = -1;
volatile uint64_t x186 = 4547LLU;
static int32_t x194 = 28;
int16_t x213 = -1;
volatile uint64_t t36 = UINT64_MAX;
int8_t x217 = -1;
int64_t x221 = INT64_MIN;
int8_t x232 = INT8_MAX;
uint16_t x255 = 491U;
volatile int32_t t43 = -15265;
int32_t x258 = INT32_MAX;
int16_t x262 = 0;
volatile uint64_t t46 = 212532776489103LLU;
uint8_t x283 = UINT8_MAX;
uint32_t x305 = 93U;
int32_t x308 = INT32_MIN;
static uint16_t x309 = 108U;
int8_t x312 = -1;
volatile int32_t t51 = 6712144;
volatile int64_t x327 = INT64_MIN;
int32_t x331 = -1;
int64_t x340 = INT64_MAX;
static uint32_t x343 = 2101126U;
static int16_t x352 = -1;
volatile uint64_t t59 = 2936806595920785LLU;
volatile int16_t x373 = 278;
uint16_t x384 = UINT16_MAX;
int8_t x397 = 0;
static int8_t x405 = 3;
volatile uint8_t x409 = 1U;
int32_t x410 = 635882;
uint64_t x411 = 45648794164953LLU;
static uint16_t x412 = 4600U;
static int32_t t66 = -3;
int32_t t67 = 934;
uint16_t x430 = 46U;
int16_t x431 = -442;
int32_t x435 = INT32_MAX;
int64_t x440 = -125000799251834556LL;
volatile int32_t x449 = -1;
int8_t x465 = INT8_MIN;
volatile uint32_t x474 = 952798868U;
volatile int8_t x475 = INT8_MIN;
volatile uint64_t x497 = UINT64_MAX;
uint64_t t77 = 16654164LLU;
uint8_t x506 = UINT8_MAX;
int8_t x508 = INT8_MAX;
int32_t x515 = -1;
int8_t x516 = 8;
int64_t x535 = INT64_MIN;
uint32_t x539 = 30U;
int16_t x552 = 139;
int8_t x554 = INT8_MAX;
int8_t x555 = -1;
int8_t x558 = INT8_MAX;
int32_t t86 = 12883369;
uint32_t x567 = 32U;
volatile int8_t x569 = -14;
volatile int16_t x581 = INT16_MIN;
static uint16_t x596 = 3230U;
volatile int32_t t92 = -9316498;
static uint32_t x606 = UINT32_MAX;
uint8_t x608 = 0U;
int16_t x612 = INT16_MIN;
int32_t x620 = -1;
uint32_t t95 = 1817153915U;
uint16_t x623 = 14U;
uint8_t x629 = 87U;
static int16_t x630 = 60;
uint8_t x638 = 33U;
int32_t x644 = 856048916;
volatile int64_t t99 = INT64_MAX;


void f0(void) {
	static uint16_t x1 = 18255U;
	uint8_t x2 = UINT8_MAX;
	volatile int32_t t0 = 6412;

	t0 = (x1&(x2<<(x3<x4)));

	if (t0 != 79) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 8925552LLU;
	uint32_t x7 = 106742U;
	uint64_t x8 = 982333272504LLU;
	volatile uint64_t t1 = 1LLU;

	t1 = (x5&(x6<<(x7<x8)));

	if (t1 != 17851104LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -166;
	volatile int64_t x10 = 178104028776709870LL;
	uint64_t x11 = UINT64_MAX;
	int8_t x12 = INT8_MAX;
	int64_t t2 = -799125818LL;

	t2 = (x9&(x10<<(x11<x12)));

	if (t2 != 178104028776709706LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x15 = -16102389;
	static volatile uint16_t x16 = UINT16_MAX;
	int32_t t3 = 445223466;

	t3 = (x13&(x14<<(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 392045;
	uint8_t x18 = 4U;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = -6682514;

	t4 = (x17&(x18<<(x19<x20)));

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = 254LLU;
	int16_t x27 = 4;
	static int64_t x28 = -1LL;
	static uint64_t t5 = 602961894417300LLU;

	t5 = (x25&(x26<<(x27<x28)));

	if (t5 != 100LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 6;
	uint8_t x30 = UINT8_MAX;
	volatile int64_t x32 = -2047710720804668338LL;
	int32_t t6 = 11522377;

	t6 = (x29&(x30<<(x31<x32)));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	uint16_t x34 = 4U;
	int64_t x36 = -1LL;

	t7 = (x33&(x34<<(x35<x36)));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 16088876596LLU;
	uint8_t x38 = 36U;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = INT64_MIN;
	volatile uint64_t t8 = 61945416788228LLU;

	t8 = (x37&(x38<<(x39<x40)));

	if (t8 != 36LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	uint16_t x43 = 1U;
	int64_t x44 = -9155480146LL;
	volatile uint32_t t9 = 2428U;

	t9 = (x41&(x42<<(x43<x44)));

	if (t9 != 65535U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x62 = 198U;
	int32_t x63 = INT32_MIN;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t10 = 0;

	t10 = (x61&(x62<<(x63<x64)));

	if (t10 != 396) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x66 = UINT8_MAX;
	int64_t x67 = -7387924685178051LL;
	uint32_t x68 = UINT32_MAX;
	int64_t t11 = 59251LL;

	t11 = (x65&(x66<<(x67<x68)));

	if (t11 != 500LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = UINT32_MAX;
	volatile uint16_t x70 = 19U;
	uint32_t x71 = UINT32_MAX;
	uint32_t t12 = 3231U;

	t12 = (x69&(x70<<(x71<x72)));

	if (t12 != 19U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = UINT8_MAX;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = 117;
	volatile uint16_t x80 = UINT16_MAX;

	t13 = (x77&(x78<<(x79<x80)));

	if (t13 != 254) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = INT64_MIN;
	int8_t x83 = 1;
	int32_t x84 = -714;

	t14 = (x81&(x82<<(x83<x84)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 6U;
	volatile uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MIN;
	static uint8_t x88 = 47U;

	t15 = (x85&(x86<<(x87<x88)));

	if (t15 != 6U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = INT64_MAX;
	static int8_t x90 = 7;
	static int8_t x92 = 2;
	int64_t t16 = -583838143602LL;

	t16 = (x89&(x90<<(x91<x92)));

	if (t16 != 14LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x98 = INT8_MAX;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = -1;
	int32_t t17 = 2442;

	t17 = (x97&(x98<<(x99<x100)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x102 = 508730438581008LLU;
	static uint8_t x103 = 1U;
	volatile int32_t x104 = -1;
	uint64_t t18 = 1648676329405973525LLU;

	t18 = (x101&(x102<<(x103<x104)));

	if (t18 != 16LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = 2467LLU;
	uint8_t x122 = UINT8_MAX;
	uint8_t x123 = UINT8_MAX;
	static int64_t x124 = INT64_MIN;
	static volatile uint64_t t19 = 1956542LLU;

	t19 = (x121&(x122<<(x123<x124)));

	if (t19 != 163LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x125 = 7892908666450LLU;
	static uint16_t x126 = 1U;
	volatile uint32_t x127 = UINT32_MAX;
	int16_t x128 = INT16_MAX;

	t20 = (x125&(x126<<(x127<x128)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x129 = -109156784887988LL;
	int64_t x130 = 236846268LL;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 3U;
	int64_t t21 = 254082LL;

	t21 = (x129&(x130<<(x131<x132)));

	if (t21 != 68985868LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = INT16_MIN;
	volatile uint64_t x134 = UINT64_MAX;
	int64_t x135 = 1176865352LL;
	uint8_t x136 = 41U;
	uint64_t t22 = 584949148690631LLU;

	t22 = (x133&(x134<<(x135<x136)));

	if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = 173004857316LL;
	static volatile uint16_t x138 = UINT16_MAX;
	int32_t x139 = -1;
	int64_t x140 = -1968574LL;
	int64_t t23 = 290252329640091755LL;

	t23 = (x137&(x138<<(x139<x140)));

	if (t23 != 40932LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x149 = INT32_MIN;
	volatile int8_t x150 = 54;
	volatile int16_t x152 = -1;
	volatile int32_t t24 = 9589501;

	t24 = (x149&(x150<<(x151<x152)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x153 = 40627269LLU;
	uint64_t x155 = 2268124153762692LLU;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t25 = 1198843LLU;

	t25 = (x153&(x154<<(x155<x156)));

	if (t25 != 4LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MAX;
	int16_t x160 = -1;

	t26 = (x157&(x158<<(x159<x160)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = -18060173256198000LL;
	static uint32_t x162 = UINT32_MAX;
	int32_t x164 = -1;
	volatile int64_t t27 = 5573LL;

	t27 = (x161&(x162<<(x163<x164)));

	if (t27 != 1014724752LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x165 = -65344LL;
	static volatile int16_t x166 = 98;
	int32_t x167 = 48;
	static int64_t t28 = -5172828150738LL;

	t28 = (x165&(x166<<(x167<x168)));

	if (t28 != 64LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x177 = -1847;
	volatile uint64_t x178 = UINT64_MAX;
	volatile int64_t x179 = -1LL;
	int8_t x180 = INT8_MAX;
	volatile uint64_t t29 = 61445228628488665LLU;

	t29 = (x177&(x178<<(x179<x180)));

	if (t29 != 18446744073709549768LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = 0;
	int64_t t30 = 571610LL;

	t30 = (x181&(x182<<(x183<x184)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x185 = 934;
	volatile int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	uint64_t t31 = 188174LLU;

	t31 = (x185&(x186<<(x187<x188)));

	if (t31 != 902LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x189 = INT64_MIN;
	uint32_t x190 = 1U;
	int64_t x191 = INT64_MAX;
	int8_t x192 = 13;
	int64_t t32 = 806566365LL;

	t32 = (x189&(x190<<(x191<x192)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x193 = 70U;
	volatile int8_t x195 = 12;
	int32_t x196 = 28871512;
	int32_t t33 = 628794;

	t33 = (x193&(x194<<(x195<x196)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x205 = -53328477LL;
	int32_t x206 = 1;
	int8_t x207 = 0;
	int16_t x208 = INT16_MAX;
	volatile int64_t t34 = -1LL;

	t34 = (x205&(x206<<(x207<x208)));

	if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x209 = INT16_MAX;
	volatile uint8_t x210 = 4U;
	static int32_t x211 = -1;
	volatile uint64_t x212 = 55526042016798LLU;
	volatile int32_t t35 = -13916571;

	t35 = (x209&(x210<<(x211<x212)));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MAX;
	uint8_t x216 = 120U;

	t36 = (x213&(x214<<(x215<x216)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x218 = INT8_MAX;
	static volatile int32_t x219 = INT32_MAX;
	volatile int32_t x220 = 5897;
	static volatile int32_t t37 = -494685160;

	t37 = (x217&(x218<<(x219<x220)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x222 = 45LLU;
	volatile int8_t x223 = -2;
	static int32_t x224 = INT32_MAX;
	uint64_t t38 = 12532153034697LLU;

	t38 = (x221&(x222<<(x223<x224)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	uint32_t x227 = 19536U;
	int32_t x228 = -54622;
	static uint64_t t39 = 14LLU;

	t39 = (x225&(x226<<(x227<x228)));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MAX;
	uint64_t x231 = 1063981716LLU;
	int32_t t40 = 795105;

	t40 = (x229&(x230<<(x231<x232)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x237 = UINT64_MAX;
	static int64_t x238 = INT64_MAX;
	static uint32_t x239 = 212U;
	static int64_t x240 = -135314LL;
	uint64_t t41 = 66253942290091797LLU;

	t41 = (x237&(x238<<(x239<x240)));

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = 71;
	int16_t x251 = INT16_MIN;
	int64_t x252 = 8425044825152230LL;
	int32_t t42 = -29774;

	t42 = (x249&(x250<<(x251<x252)));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x253 = 5U;
	uint16_t x254 = 401U;
	static int64_t x256 = 629605427203LL;

	t43 = (x253&(x254<<(x255<x256)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x257 = INT32_MIN;
	int8_t x259 = 4;
	int64_t x260 = INT64_MIN;
	volatile int32_t t44 = -102960265;

	t44 = (x257&(x258<<(x259<x260)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t45 = -6212;

	t45 = (x261&(x262<<(x263<x264)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MAX;
	int8_t x272 = 6;

	t46 = (x269&(x270<<(x271<x272)));

	if (t46 != 32767LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x273 = INT64_MIN;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t47 = -6939LL;

	t47 = (x273&(x274<<(x275<x276)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x281 = -1;
	uint32_t x282 = 435U;
	int16_t x284 = -1;
	volatile uint32_t t48 = 874U;

	t48 = (x281&(x282<<(x283<x284)));

	if (t48 != 435U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x297 = -415;
	uint64_t x298 = 1584630941880LLU;
	int16_t x299 = INT16_MIN;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint64_t t49 = 407282205738LLU;

	t49 = (x297&(x298<<(x299<x300)));

	if (t49 != 3169261883488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x306 = INT64_MAX;
	volatile int32_t x307 = INT32_MIN;
	int64_t t50 = -24693732500LL;

	t50 = (x305&(x306<<(x307<x308)));

	if (t50 != 93LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x310 = 0U;
	int64_t x311 = INT64_MIN;

	t51 = (x309&(x310<<(x311<x312)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x321 = -1;
	static uint64_t x322 = 10191LLU;
	uint32_t x323 = 1721380536U;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t52 = 2083LLU;

	t52 = (x321&(x322<<(x323<x324)));

	if (t52 != 20382LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x325 = INT16_MIN;
	static int8_t x326 = INT8_MAX;
	int8_t x328 = -1;
	volatile int32_t t53 = -2;

	t53 = (x325&(x326<<(x327<x328)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x329 = 33950;
	uint64_t x330 = UINT64_MAX;
	int8_t x332 = -1;
	volatile uint64_t t54 = 2056914LLU;

	t54 = (x329&(x330<<(x331<x332)));

	if (t54 != 33950LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x337 = INT16_MIN;
	int8_t x338 = 7;
	int8_t x339 = INT8_MAX;
	int32_t t55 = 11513466;

	t55 = (x337&(x338<<(x339<x340)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x341 = 99862154U;
	uint16_t x342 = UINT16_MAX;
	volatile int64_t x344 = 763450242495LL;
	uint32_t t56 = 21158653U;

	t56 = (x341&(x342<<(x343<x344)));

	if (t56 != 116362U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x349 = UINT8_MAX;
	uint64_t x350 = 32439515692625983LLU;
	uint32_t x351 = 5U;
	uint64_t t57 = 144902554059125811LLU;

	t57 = (x349&(x350<<(x351<x352)));

	if (t57 != 126LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x357 = 254U;
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = -100625561154803388LL;
	volatile int32_t x360 = INT32_MAX;
	static volatile int32_t t58 = -5702;

	t58 = (x357&(x358<<(x359<x360)));

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x369 = 6493LLU;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = -1;
	uint8_t x372 = 1U;

	t59 = (x369&(x370<<(x371<x372)));

	if (t59 != 6492LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x374 = 168148;
	int64_t x375 = INT64_MIN;
	int16_t x376 = -19;
	volatile int32_t t60 = -431;

	t60 = (x373&(x374<<(x375<x376)));

	if (t60 != 256) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x381 = -4058933;
	static uint64_t x382 = 15LLU;
	int64_t x383 = INT64_MIN;
	volatile uint64_t t61 = 680LLU;

	t61 = (x381&(x382<<(x383<x384)));

	if (t61 != 10LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x385 = 2U;
	int32_t x386 = INT32_MAX;
	int64_t x387 = 23246LL;
	volatile int16_t x388 = -177;
	static volatile int32_t t62 = 19;

	t62 = (x385&(x386<<(x387<x388)));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x398 = 392063LL;
	volatile int64_t x399 = -18LL;
	int32_t x400 = INT32_MAX;
	volatile int64_t t63 = -941153552924907LL;

	t63 = (x397&(x398<<(x399<x400)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x401 = 2925215LLU;
	uint16_t x402 = 3U;
	static int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	volatile uint64_t t64 = 8LLU;

	t64 = (x401&(x402<<(x403<x404)));

	if (t64 != 3LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x406 = 18U;
	volatile int16_t x407 = INT16_MAX;
	static uint8_t x408 = 11U;
	static volatile int32_t t65 = -34316791;

	t65 = (x405&(x406<<(x407<x408)));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {


	t66 = (x409&(x410<<(x411<x412)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x413 = INT8_MIN;
	uint8_t x414 = 15U;
	int32_t x415 = INT32_MIN;
	static uint16_t x416 = UINT16_MAX;

	t67 = (x413&(x414<<(x415<x416)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x429 = -11139637;
	int64_t x432 = INT64_MAX;
	static int32_t t68 = -135081;

	t68 = (x429&(x430<<(x431<x432)));

	if (t68 != 72) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MAX;
	static volatile int32_t x436 = -1;
	int64_t t69 = -251727LL;

	t69 = (x433&(x434<<(x435<x436)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x437 = -1;
	uint8_t x438 = 17U;
	int16_t x439 = -1;
	int32_t t70 = -14829;

	t70 = (x437&(x438<<(x439<x440)));

	if (t70 != 17) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x445 = INT8_MIN;
	uint32_t x446 = UINT32_MAX;
	volatile uint32_t x447 = 2898U;
	volatile int8_t x448 = -1;
	volatile uint32_t t71 = 120737U;

	t71 = (x445&(x446<<(x447<x448)));

	if (t71 != 4294967168U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x450 = 19U;
	int16_t x451 = 1;
	static uint8_t x452 = 0U;
	int32_t t72 = -91;

	t72 = (x449&(x450<<(x451<x452)));

	if (t72 != 19) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x466 = 12U;
	int64_t x467 = -202LL;
	volatile int8_t x468 = 61;
	int32_t t73 = 11;

	t73 = (x465&(x466<<(x467<x468)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x473 = 3U;
	static int16_t x476 = -9538;
	volatile uint32_t t74 = 67921U;

	t74 = (x473&(x474<<(x475<x476)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x477 = 5LLU;
	int32_t x478 = 3;
	uint64_t x479 = 463635096377828952LLU;
	static uint8_t x480 = 0U;
	uint64_t t75 = 65684419LLU;

	t75 = (x477&(x478<<(x479<x480)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x498 = UINT32_MAX;
	static int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MIN;
	uint64_t t76 = 7996379LLU;

	t76 = (x497&(x498<<(x499<x500)));

	if (t76 != 4294967295LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x501 = 139704055467481LLU;
	int8_t x502 = 9;
	uint32_t x503 = 47922199U;
	static int64_t x504 = -21LL;

	t77 = (x501&(x502<<(x503<x504)));

	if (t77 != 9LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x505 = 1119U;
	uint32_t x507 = 1573516U;
	int32_t t78 = 61661;

	t78 = (x505&(x506<<(x507<x508)));

	if (t78 != 95) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x513 = 4646LL;
	uint64_t x514 = 123192LLU;
	static volatile uint64_t t79 = 115432246172LLU;

	t79 = (x513&(x514<<(x515<x516)));

	if (t79 != 544LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x517 = INT64_MIN;
	uint16_t x518 = UINT16_MAX;
	uint8_t x519 = 1U;
	int8_t x520 = INT8_MIN;
	int64_t t80 = -10LL;

	t80 = (x517&(x518<<(x519<x520)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x533 = INT64_MIN;
	uint64_t x534 = UINT64_MAX;
	uint16_t x536 = UINT16_MAX;
	volatile uint64_t t81 = 292LLU;

	t81 = (x533&(x534<<(x535<x536)));

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x537 = -497331LL;
	uint16_t x538 = 2282U;
	int8_t x540 = INT8_MAX;
	int64_t t82 = 22385053998970985LL;

	t82 = (x537&(x538<<(x539<x540)));

	if (t82 != 324LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x541 = UINT16_MAX;
	volatile uint8_t x542 = 22U;
	volatile int8_t x543 = INT8_MAX;
	static int8_t x544 = INT8_MIN;
	int32_t t83 = -173;

	t83 = (x541&(x542<<(x543<x544)));

	if (t83 != 22) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x549 = 15;
	int16_t x550 = 293;
	int8_t x551 = -1;
	static int32_t t84 = -17170134;

	t84 = (x549&(x550<<(x551<x552)));

	if (t84 != 10) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x553 = 472;
	static volatile uint32_t x556 = 259415U;
	int32_t t85 = 863822;

	t85 = (x553&(x554<<(x555<x556)));

	if (t85 != 88) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x557 = INT16_MAX;
	int8_t x559 = -34;
	int64_t x560 = -2047529395LL;

	t86 = (x557&(x558<<(x559<x560)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x565 = -1;
	static volatile int8_t x566 = 5;
	int16_t x568 = 124;
	static int32_t t87 = 343892716;

	t87 = (x565&(x566<<(x567<x568)));

	if (t87 != 10) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x570 = 1;
	static uint32_t x571 = 183469U;
	volatile int32_t x572 = 25;
	volatile int32_t t88 = -60;

	t88 = (x569&(x570<<(x571<x572)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x582 = 5996356143563358137LLU;
	uint16_t x583 = 3U;
	int8_t x584 = 3;
	volatile uint64_t t89 = 18563294565333LLU;

	t89 = (x581&(x582<<(x583<x584)));

	if (t89 != 5996356143563341824LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x593 = 154105U;
	uint16_t x594 = 919U;
	uint32_t x595 = UINT32_MAX;
	uint32_t t90 = 139704U;

	t90 = (x593&(x594<<(x595<x596)));

	if (t90 != 401U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x597 = UINT16_MAX;
	static volatile int8_t x598 = 0;
	volatile uint8_t x599 = UINT8_MAX;
	uint64_t x600 = UINT64_MAX;
	static int32_t t91 = 40652;

	t91 = (x597&(x598<<(x599<x600)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x601 = -1;
	int8_t x602 = INT8_MAX;
	int8_t x603 = -1;
	int64_t x604 = -16238974318LL;

	t92 = (x601&(x602<<(x603<x604)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x605 = -1;
	volatile int16_t x607 = INT16_MIN;
	uint32_t t93 = 511U;

	t93 = (x605&(x606<<(x607<x608)));

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x609 = INT8_MIN;
	uint8_t x610 = UINT8_MAX;
	volatile int16_t x611 = INT16_MIN;
	int32_t t94 = -1532;

	t94 = (x609&(x610<<(x611<x612)));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x617 = INT16_MAX;
	volatile uint32_t x618 = UINT32_MAX;
	uint32_t x619 = UINT32_MAX;

	t95 = (x617&(x618<<(x619<x620)));

	if (t95 != 32767U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x621 = 1861;
	uint8_t x622 = UINT8_MAX;
	static int32_t x624 = -578658379;
	volatile int32_t t96 = -3070;

	t96 = (x621&(x622<<(x623<x624)));

	if (t96 != 69) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x631 = INT16_MIN;
	volatile uint8_t x632 = 3U;
	int32_t t97 = 465;

	t97 = (x629&(x630<<(x631<x632)));

	if (t97 != 80) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x637 = 208U;
	int64_t x639 = -1LL;
	volatile uint32_t x640 = 280286U;
	volatile int32_t t98 = 485091680;

	t98 = (x637&(x638<<(x639<x640)));

	if (t98 != 64) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x641 = -1;
	int64_t x642 = INT64_MAX;
	uint32_t x643 = UINT32_MAX;

	t99 = (x641&(x642<<(x643<x644)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

