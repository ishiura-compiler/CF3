#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x5 = 42U;
int64_t x19 = -1LL;
volatile uint8_t x20 = UINT8_MAX;
volatile uint32_t t6 = UINT32_MAX;
static int64_t x38 = INT64_MIN;
static uint64_t x39 = 59193017032317275LLU;
static volatile int64_t x40 = 7623LL;
int8_t x53 = INT8_MIN;
static uint64_t t11 = UINT64_MAX;
static int16_t x63 = -1;
volatile uint64_t t12 = UINT64_MAX;
uint8_t x65 = 1U;
int8_t x84 = -1;
int8_t x85 = -53;
int64_t x92 = 32735488319819LL;
int32_t x108 = 4;
static int8_t x117 = 44;
static uint8_t x119 = 26U;
int64_t x121 = -100020379707325167LL;
static uint8_t x123 = 12U;
static int32_t x130 = -1;
static int8_t x141 = INT8_MAX;
int16_t x142 = -1;
int64_t t30 = 8414640LL;
static int64_t x157 = INT64_MIN;
volatile int32_t x162 = -1;
static volatile int64_t t35 = -685837LL;
volatile uint32_t x178 = 635U;
volatile uint32_t t37 = 1029533580U;
int32_t x185 = -1;
int64_t x194 = -53375162772004LL;
int16_t x200 = INT16_MIN;
int8_t x203 = 8;
volatile uint32_t t43 = UINT32_MAX;
int16_t x205 = 204;
uint8_t x207 = 52U;
int32_t x214 = INT32_MIN;
uint8_t x220 = 0U;
int64_t t47 = -1398992LL;
static volatile uint8_t x225 = 15U;
uint8_t x227 = 31U;
int8_t x239 = INT8_MIN;
volatile int64_t t50 = 236582613432LL;
static int16_t x241 = -1;
uint64_t x243 = 147LLU;
static uint32_t x245 = UINT32_MAX;
volatile int8_t x255 = INT8_MIN;
volatile uint64_t t54 = 140LLU;
int16_t x272 = INT16_MIN;
static volatile int32_t t56 = 0;
uint64_t x275 = UINT64_MAX;
static int64_t x276 = INT64_MIN;
int8_t x284 = INT8_MAX;
volatile uint64_t x301 = 124495592306LLU;
uint64_t t60 = 83350303254682378LLU;
int32_t x305 = INT32_MAX;
int32_t x307 = INT32_MAX;
int64_t x311 = INT64_MIN;
int32_t x315 = INT32_MAX;
uint64_t x323 = 213462529260228716LLU;
volatile int64_t x333 = -35415691209344517LL;
int64_t x345 = 79897526097335LL;
volatile uint8_t x353 = 3U;
int64_t t72 = -29771921756LL;
static int8_t x365 = 1;
int16_t x372 = INT16_MIN;
volatile uint16_t x373 = UINT16_MAX;
uint32_t x374 = 111008U;
int16_t x377 = 2047;
int16_t x387 = -1;
static int32_t t78 = -7;
static uint64_t x390 = 1446LLU;
uint64_t x393 = 7085623525719LLU;
uint64_t t80 = 1228LLU;
int16_t x398 = -1;
int64_t x400 = -1LL;
static volatile uint64_t t82 = 18821077127305934LLU;
int8_t x414 = INT8_MAX;
static int8_t x416 = INT8_MAX;
volatile int8_t x417 = INT8_MIN;
uint16_t x418 = UINT16_MAX;
static uint32_t x426 = UINT32_MAX;
int32_t x436 = -981;
uint64_t t88 = 1726438799LLU;
static uint64_t t90 = UINT64_MAX;
uint16_t x452 = UINT16_MAX;
uint32_t t92 = 1005103U;
static volatile uint64_t x467 = 79683126LLU;
int8_t x468 = 0;
static uint64_t x472 = 1150LLU;
static int16_t x476 = 534;


void f0(void) {
	uint64_t x1 = 643LLU;
	uint64_t x2 = UINT64_MAX;
	static volatile int64_t x3 = -1LL;
	static uint8_t x4 = UINT8_MAX;
	uint64_t t0 = 46431283641LLU;

	t0 = (((x1+x2)+x3)|x4);

	if (t0 != 767LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = -2653;
	int16_t x7 = 0;
	int8_t x8 = INT8_MAX;
	volatile uint32_t t1 = 209U;

	t1 = (((x5+x6)+x7)|x8);

	if (t1 != 4294964735U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -12800;
	static uint8_t x14 = UINT8_MAX;
	int64_t x15 = -1LL;
	static uint8_t x16 = 46U;
	int64_t t2 = 53408463570LL;

	t2 = (((x13+x14)+x15)|x16);

	if (t2 != -12546LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = UINT8_MAX;
	static int8_t x18 = INT8_MAX;
	volatile int64_t t3 = -6828LL;

	t3 = (((x17+x18)+x19)|x20);

	if (t3 != 511LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 3371256277167LLU;
	static volatile uint64_t x22 = 125421847455721LLU;
	volatile int16_t x23 = INT16_MIN;
	static int64_t x24 = -1LL;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (((x21+x22)+x23)|x24);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = INT8_MAX;
	int32_t x30 = -19;
	int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MAX;
	static volatile int64_t t5 = -47207303LL;

	t5 = (((x29+x30)+x31)|x32);

	if (t5 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = -191977;
	uint32_t x35 = 97570542U;
	uint32_t x36 = UINT32_MAX;

	t6 = (((x33+x34)+x35)|x36);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 1U;
	static volatile uint64_t t7 = 51112106037LLU;

	t7 = (((x37+x38)+x39)|x40);

	if (t7 != 9282565053887094239LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 1;
	int32_t x42 = -1;
	int8_t x43 = INT8_MAX;
	int8_t x44 = 30;
	int32_t t8 = -3;

	t8 = (((x41+x42)+x43)|x44);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MIN;
	int32_t x47 = 695009;
	int64_t x48 = INT64_MIN;
	volatile int64_t t9 = -424883829LL;

	t9 = (((x45+x46)+x47)|x48);

	if (t9 != -9223372036854113568LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 2189509U;
	int64_t x50 = -263LL;
	static volatile uint64_t x51 = 1335777343878156173LLU;
	int16_t x52 = INT16_MIN;
	volatile uint64_t t10 = 16014LLU;

	t10 = (((x49+x50)+x51)|x52);

	if (t10 != 18446744073709533003LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = -46;
	int32_t x55 = -340;
	uint64_t x56 = 1326562195393LLU;

	t11 = (((x53+x54)+x55)|x56);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 1U;
	volatile int16_t x62 = -1;
	uint64_t x64 = 82LLU;

	t12 = (((x61+x62)+x63)|x64);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MAX;
	int8_t x68 = INT8_MAX;
	static int64_t t13 = -114539152LL;

	t13 = (((x65+x66)+x67)|x68);

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x73 = UINT64_MAX;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = UINT64_MAX;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (((x73+x74)+x75)|x76);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	static uint32_t x78 = 1527477386U;
	volatile int8_t x79 = -9;
	int16_t x80 = -1;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (((x77+x78)+x79)|x80);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 21755U;
	int32_t x82 = INT32_MIN;
	static uint8_t x83 = UINT8_MAX;
	volatile int32_t t16 = 57325520;

	t16 = (((x81+x82)+x83)|x84);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x86 = -1;
	int8_t x87 = -1;
	volatile uint8_t x88 = 0U;
	volatile int32_t t17 = 20;

	t17 = (((x85+x86)+x87)|x88);

	if (t17 != -55) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -11545;
	static int64_t x90 = INT64_MAX;
	volatile uint16_t x91 = 3467U;
	volatile int64_t t18 = -130LL;

	t18 = (((x89+x90)+x91)|x92);

	if (t18 != 9223372036854767995LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = 11533;
	uint32_t x94 = 3336U;
	uint8_t x95 = 2U;
	volatile int64_t x96 = INT64_MIN;
	int64_t t19 = -5279LL;

	t19 = (((x93+x94)+x95)|x96);

	if (t19 != -9223372036854760937LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 568380539894317LL;
	int16_t x98 = INT16_MAX;
	static int32_t x99 = 5274;
	uint16_t x100 = UINT16_MAX;
	static volatile int64_t t20 = -1599907827200LL;

	t20 = (((x97+x98)+x99)|x100);

	if (t20 != 568380539994111LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = INT64_MIN;
	volatile int8_t x102 = 1;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;
	int64_t t21 = INT64_MIN;

	t21 = (((x101+x102)+x103)|x104);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 317U;
	static int64_t x106 = INT64_MIN;
	uint8_t x107 = 2U;
	int64_t t22 = 161480628429LL;

	t22 = (((x105+x106)+x107)|x108);

	if (t22 != -9223372036854775489LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = UINT32_MAX;
	int8_t x110 = INT8_MAX;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 42612310039LLU;
	uint64_t t23 = 3589355174263386LLU;

	t23 = (((x109+x110)+x111)|x112);

	if (t23 != 42949672959LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x118 = 234560U;
	uint8_t x120 = 9U;
	volatile uint32_t t24 = 51086656U;

	t24 = (((x117+x118)+x119)|x120);

	if (t24 != 234639U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x122 = INT32_MAX;
	static uint32_t x124 = 212280U;
	volatile int64_t t25 = -320017042097334LL;

	t25 = (((x121+x122)+x123)|x124);

	if (t25 != -100020377559761604LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 686LLU;
	static int32_t x126 = INT32_MIN;
	static volatile uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MAX;
	static volatile uint64_t t26 = 225915450167632LLU;

	t26 = (((x125+x126)+x127)|x128);

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = -1;
	int64_t x131 = -1LL;
	static int64_t x132 = INT64_MAX;
	static int64_t t27 = -6725338951115416LL;

	t27 = (((x129+x130)+x131)|x132);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x133 = 1982;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -1;
	int16_t x136 = INT16_MAX;
	volatile int32_t t28 = 7;

	t28 = (((x133+x134)+x135)|x136);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -1;
	volatile uint8_t x138 = 14U;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = 2U;
	int32_t t29 = 13;

	t29 = (((x137+x138)+x139)|x140);

	if (t29 != -32753) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x143 = INT8_MIN;
	volatile int64_t x144 = -57038LL;

	t30 = (((x141+x142)+x143)|x144);

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x145 = UINT16_MAX;
	static uint16_t x146 = 218U;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MAX;
	static int64_t t31 = -23746447781042LL;

	t31 = (((x145+x146)+x147)|x148);

	if (t31 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x149 = 17688010829621576LLU;
	int32_t x150 = -64;
	uint32_t x151 = 1163U;
	static uint32_t x152 = 11265U;
	volatile uint64_t t32 = 17956969795LLU;

	t32 = (((x149+x150)+x151)|x152);

	if (t32 != 17688010829622675LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = UINT16_MAX;
	static int64_t x154 = 738197846727005LL;
	int8_t x155 = INT8_MIN;
	volatile int32_t x156 = 4;
	static volatile int64_t t33 = -506701608730959878LL;

	t33 = (((x153+x154)+x155)|x156);

	if (t33 != 738197846792412LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x158 = UINT64_MAX;
	volatile int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MIN;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x157+x158)+x159)|x160);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = -1LL;
	int32_t x163 = 3985;
	int8_t x164 = INT8_MIN;

	t35 = (((x161+x162)+x163)|x164);

	if (t35 != -113LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = -808619983LL;
	static uint8_t x170 = UINT8_MAX;
	int16_t x171 = -11;
	int64_t x172 = INT64_MAX;
	volatile int64_t t36 = 193844790194LL;

	t36 = (((x169+x170)+x171)|x172);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x177 = 1U;
	static uint8_t x179 = 7U;
	int32_t x180 = 1;

	t37 = (((x177+x178)+x179)|x180);

	if (t37 != 643U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = INT32_MIN;
	uint32_t x182 = 3875U;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t38 = 325746700952LLU;

	t38 = (((x181+x182)+x183)|x184);

	if (t38 != 18446744073709522722LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x186 = 1LLU;
	int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;
	uint64_t t39 = UINT64_MAX;

	t39 = (((x185+x186)+x187)|x188);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = INT32_MAX;
	volatile uint64_t x190 = UINT64_MAX;
	uint32_t x191 = 334745U;
	static int64_t x192 = -1LL;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (((x189+x190)+x191)|x192);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MAX;
	volatile int32_t x195 = -5681;
	int64_t x196 = -1LL;
	volatile int64_t t41 = 1210LL;

	t41 = (((x193+x194)+x195)|x196);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x197 = UINT16_MAX;
	int64_t x198 = 164756487LL;
	volatile int32_t x199 = INT32_MAX;
	volatile int64_t t42 = 99864107513121366LL;

	t42 = (((x197+x198)+x199)|x200);

	if (t42 != -1019LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = -1;
	int16_t x202 = -1;
	uint32_t x204 = UINT32_MAX;

	t43 = (((x201+x202)+x203)|x204);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x206 = UINT64_MAX;
	static uint16_t x208 = 2715U;
	uint64_t t44 = 3LLU;

	t44 = (((x205+x206)+x207)|x208);

	if (t44 != 2815LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x215 = INT32_MIN;
	int32_t x216 = -1;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x213+x214)+x215)|x216);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = -1LL;
	int16_t x219 = -1723;
	static int64_t t46 = -11155LL;

	t46 = (((x217+x218)+x219)|x220);

	if (t46 != -34492LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = UINT16_MAX;
	int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = 3U;

	t47 = (((x221+x222)+x223)|x224);

	if (t47 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x226 = 576U;
	int8_t x228 = INT8_MIN;
	int32_t t48 = -2559;

	t48 = (((x225+x226)+x227)|x228);

	if (t48 != -18) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x233 = 52560523;
	int8_t x234 = -1;
	int16_t x235 = -128;
	uint16_t x236 = 7927U;
	static int32_t t49 = -10213;

	t49 = (((x233+x234)+x235)|x236);

	if (t49 != 52567807) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = UINT8_MAX;
	int16_t x240 = INT16_MAX;

	t50 = (((x237+x238)+x239)|x240);

	if (t50 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x242 = -1;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t51 = 381LLU;

	t51 = (((x241+x242)+x243)|x244);

	if (t51 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x246 = INT64_MIN;
	static int16_t x247 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;
	volatile int64_t t52 = 32354146058035611LL;

	t52 = (((x245+x246)+x247)|x248);

	if (t52 != -9223372032559841281LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = INT16_MAX;
	static int64_t x254 = INT64_MIN;
	uint32_t x256 = 298538U;
	int64_t t53 = 29279844LL;

	t53 = (((x253+x254)+x255)|x256);

	if (t53 != -9223372036854448257LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x261 = 11578337373LLU;
	int64_t x262 = 3311068157LL;
	int64_t x263 = -1LL;
	static volatile int64_t x264 = 120412046702168494LL;

	t54 = (((x261+x262)+x263)|x264);

	if (t54 != 120412051553013247LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = -32424LL;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = INT32_MIN;
	int32_t x268 = -331116;
	int64_t t55 = -113787139467241LL;

	t55 = (((x265+x266)+x267)|x268);

	if (t55 != -3113LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x269 = -14;
	static int16_t x270 = INT16_MIN;
	int16_t x271 = -1515;

	t56 = (((x269+x270)+x271)|x272);

	if (t56 != -1529) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x273 = 393690U;
	volatile int16_t x274 = INT16_MIN;
	volatile uint64_t t57 = 4719205LLU;

	t57 = (((x273+x274)+x275)|x276);

	if (t57 != 9223372036855136729LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = 62;
	uint64_t x282 = 26307456266104LLU;
	int8_t x283 = -1;
	volatile uint64_t t58 = 917349347LLU;

	t58 = (((x281+x282)+x283)|x284);

	if (t58 != 26307456266239LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x285 = INT16_MAX;
	volatile uint64_t x286 = 90698906LLU;
	uint16_t x287 = UINT16_MAX;
	int64_t x288 = INT64_MIN;
	uint64_t t59 = 1921105632630354LLU;

	t59 = (((x285+x286)+x287)|x288);

	if (t59 != 9223372036945573016LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x302 = 0;
	int64_t x303 = INT64_MIN;
	volatile int64_t x304 = 171622527486LL;

	t60 = (((x301+x302)+x303)|x304);

	if (t60 != 9223372311699127294LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x306 = 51U;
	uint16_t x308 = UINT16_MAX;
	static uint32_t t61 = 104436U;

	t61 = (((x305+x306)+x307)|x308);

	if (t61 != 65535U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x309 = INT64_MAX;
	uint64_t x310 = 2LLU;
	volatile int8_t x312 = INT8_MIN;
	volatile uint64_t t62 = 12281287526883779LLU;

	t62 = (((x309+x310)+x311)|x312);

	if (t62 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x313 = 3723983431LLU;
	static int32_t x314 = -2625;
	int64_t x316 = INT64_MIN;
	uint64_t t63 = 16365565LLU;

	t63 = (((x313+x314)+x315)|x316);

	if (t63 != 9223372042726240261LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x321 = 0LLU;
	volatile int32_t x322 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	uint64_t t64 = 4026386LLU;

	t64 = (((x321+x322)+x323)|x324);

	if (t64 != 9436834563967520876LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x329 = 119436225;
	volatile int16_t x330 = 184;
	uint16_t x331 = 30970U;
	static int64_t x332 = INT64_MAX;
	volatile int64_t t65 = INT64_MAX;

	t65 = (((x329+x330)+x331)|x332);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x334 = 1687U;
	volatile uint16_t x335 = 19U;
	int32_t x336 = -1;
	static int64_t t66 = -258807392139021LL;

	t66 = (((x333+x334)+x335)|x336);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x341 = 27U;
	volatile int8_t x342 = -1;
	uint64_t x343 = 83142080888294981LLU;
	int64_t x344 = 644763LL;
	uint64_t t67 = 4061467410452LLU;

	t67 = (((x341+x342)+x343)|x344);

	if (t67 != 83142080888299231LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x346 = UINT32_MAX;
	uint64_t x347 = UINT64_MAX;
	static int32_t x348 = -400706;
	static uint64_t t68 = 408901421579LLU;

	t68 = (((x345+x346)+x347)|x348);

	if (t68 != 18446744073709156287LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = INT64_MIN;
	static uint8_t x350 = 55U;
	int16_t x351 = -9;
	uint8_t x352 = 44U;
	int64_t t69 = -8LL;

	t69 = (((x349+x350)+x351)|x352);

	if (t69 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t70 = 1;

	t70 = (((x353+x354)+x355)|x356);

	if (t70 != -126) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = 2;
	uint8_t x358 = 2U;
	int64_t x359 = INT64_MIN;
	volatile int16_t x360 = INT16_MAX;
	volatile int64_t t71 = -86169516805LL;

	t71 = (((x357+x358)+x359)|x360);

	if (t71 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x361 = 9U;
	int64_t x362 = -1LL;
	int8_t x363 = -1;
	int16_t x364 = INT16_MIN;

	t72 = (((x361+x362)+x363)|x364);

	if (t72 != -32761LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 6691U;
	int16_t x368 = INT16_MAX;
	int32_t t73 = 776442;

	t73 = (((x365+x366)+x367)|x368);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x369 = -1;
	static uint32_t x370 = 32385188U;
	int16_t x371 = -1;
	volatile uint32_t t74 = 2754963U;

	t74 = (((x369+x370)+x371)|x372);

	if (t74 != 4294944930U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x375 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile uint32_t t75 = 18U;

	t75 = (((x373+x374)+x375)|x376);

	if (t75 != 2147680255U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x378 = 9;
	volatile int16_t x379 = -9;
	uint64_t x380 = UINT64_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (((x377+x378)+x379)|x380);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x381 = -13096;
	int8_t x382 = -1;
	int64_t x383 = -1LL;
	uint32_t x384 = 507708241U;
	volatile int64_t t77 = -24861480LL;

	t77 = (((x381+x382)+x383)|x384);

	if (t77 != -12329LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x385 = UINT16_MAX;
	static int16_t x386 = INT16_MIN;
	int32_t x388 = -1;

	t78 = (((x385+x386)+x387)|x388);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x389 = UINT32_MAX;
	int16_t x391 = -1;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t79 = 25LLU;

	t79 = (((x389+x390)+x391)|x392);

	if (t79 != 9223372041149744548LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x394 = 0LLU;
	volatile int64_t x395 = -811898945122614833LL;
	static int16_t x396 = INT16_MAX;

	t80 = (((x393+x394)+x395)|x396);

	if (t80 != 17634852214210494463LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = -1;
	int32_t x399 = -1816;
	static int64_t t81 = -132975748038LL;

	t81 = (((x397+x398)+x399)|x400);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x401 = -1;
	uint64_t x402 = 4996988769347726LLU;
	static int64_t x403 = 1LL;
	uint16_t x404 = 12U;

	t82 = (((x401+x402)+x403)|x404);

	if (t82 != 4996988769347726LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x413 = 5U;
	int16_t x415 = 1;
	int32_t t83 = -476825208;

	t83 = (((x413+x414)+x415)|x416);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x419 = UINT16_MAX;
	uint32_t x420 = UINT32_MAX;
	uint32_t t84 = UINT32_MAX;

	t84 = (((x417+x418)+x419)|x420);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x421 = 0;
	volatile int32_t x422 = INT32_MIN;
	uint64_t x423 = 217LLU;
	static uint64_t x424 = 4879615606LLU;
	uint64_t t85 = 8398549518784532LLU;

	t85 = (((x421+x422)+x423)|x424);

	if (t85 != 18446744072146716415LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x425 = INT64_MIN;
	volatile int64_t x427 = INT64_MAX;
	int32_t x428 = -1;
	volatile int64_t t86 = -5146802245LL;

	t86 = (((x425+x426)+x427)|x428);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x429 = UINT8_MAX;
	int64_t x430 = -1LL;
	int8_t x431 = INT8_MAX;
	int32_t x432 = INT32_MIN;
	static volatile int64_t t87 = 4548008653988467560LL;

	t87 = (((x429+x430)+x431)|x432);

	if (t87 != -2147483267LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x433 = UINT64_MAX;
	int32_t x434 = INT32_MIN;
	static uint32_t x435 = 731479U;

	t88 = (((x433+x434)+x435)|x436);

	if (t88 != 18446744073709550975LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x437 = INT32_MIN;
	static int64_t x438 = -301823596342880LL;
	int8_t x439 = -25;
	int16_t x440 = -1;
	int64_t t89 = 24636LL;

	t89 = (((x437+x438)+x439)|x440);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x445 = UINT64_MAX;
	int16_t x446 = INT16_MIN;
	static int16_t x447 = INT16_MAX;
	volatile int32_t x448 = -7429091;

	t90 = (((x445+x446)+x447)|x448);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x449 = 19623915642743475LLU;
	int8_t x450 = 0;
	uint8_t x451 = 10U;
	static uint64_t t91 = 789498945LLU;

	t91 = (((x449+x450)+x451)|x452);

	if (t91 != 19623915642748927LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x453 = 1;
	static uint32_t x454 = UINT32_MAX;
	static int32_t x455 = INT32_MIN;
	volatile uint8_t x456 = UINT8_MAX;

	t92 = (((x453+x454)+x455)|x456);

	if (t92 != 2147483903U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = -1LL;
	int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MAX;
	int64_t x460 = INT64_MIN;
	int64_t t93 = -265LL;

	t93 = (((x457+x458)+x459)|x460);

	if (t93 != -32642LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x465 = -1;
	static volatile int64_t x466 = INT64_MAX;
	uint64_t t94 = 354860870968287LLU;

	t94 = (((x465+x466)+x467)|x468);

	if (t94 != 9223372036934458932LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x469 = 14U;
	int16_t x470 = -1246;
	uint64_t x471 = UINT64_MAX;
	volatile uint64_t t95 = 126LLU;

	t95 = (((x469+x470)+x471)|x472);

	if (t95 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x473 = 753728496325910LLU;
	volatile uint64_t x474 = UINT64_MAX;
	uint8_t x475 = UINT8_MAX;
	uint64_t t96 = 69198LLU;

	t96 = (((x473+x474)+x475)|x476);

	if (t96 != 753728496326166LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x481 = 6088702;
	volatile uint32_t x482 = UINT32_MAX;
	static int16_t x483 = INT16_MIN;
	int64_t x484 = -1LL;
	int64_t t97 = 1258174473LL;

	t97 = (((x481+x482)+x483)|x484);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x485 = -1;
	static int64_t x486 = -1LL;
	int16_t x487 = -1;
	volatile int16_t x488 = INT16_MIN;
	volatile int64_t t98 = -15005289916LL;

	t98 = (((x485+x486)+x487)|x488);

	if (t98 != -3LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x493 = 7323317LL;
	int16_t x494 = -1;
	int8_t x495 = INT8_MAX;
	int8_t x496 = INT8_MIN;
	volatile int64_t t99 = 1082258204607LL;

	t99 = (((x493+x494)+x495)|x496);

	if (t99 != -77LL) { NG(); } else { ; }
	
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

