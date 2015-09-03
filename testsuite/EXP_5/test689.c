#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 141;
int8_t x5 = -1;
uint16_t x6 = 13U;
int16_t x7 = INT16_MAX;
int32_t x12 = 425331661;
volatile int64_t t2 = -26543762882LL;
int64_t x18 = -734LL;
static int32_t x19 = -1;
static uint64_t x23 = 517422593769340LLU;
static uint64_t x32 = 10432020325964LLU;
uint64_t t5 = 588188336LLU;
int16_t x36 = INT16_MIN;
volatile int16_t x43 = 83;
volatile int32_t x55 = INT32_MIN;
int32_t x57 = 813;
uint8_t x59 = 8U;
static int32_t x72 = INT32_MIN;
int64_t t15 = -1197830762LL;
int32_t t16 = 11;
static volatile int32_t t18 = 0;
int16_t x85 = -376;
uint64_t x86 = UINT64_MAX;
static volatile uint64_t x92 = 32993694023358994LLU;
uint64_t x95 = 181LLU;
uint64_t t21 = 7357283307293LLU;
uint32_t x100 = 28U;
int16_t x101 = INT16_MIN;
int64_t x114 = -33116097LL;
static volatile int16_t x116 = -1460;
volatile int32_t x118 = INT32_MIN;
static int8_t x120 = INT8_MIN;
uint8_t x122 = 2U;
static volatile uint64_t t28 = 126863LLU;
static int16_t x128 = -3;
int64_t t29 = -912065598LL;
uint64_t x151 = 19960092783662LLU;
uint32_t x160 = UINT32_MAX;
int32_t x163 = INT32_MIN;
int64_t x175 = -1LL;
uint64_t x181 = UINT64_MAX;
int32_t x185 = -1;
uint32_t x187 = 18U;
static int64_t x194 = INT64_MAX;
int64_t t44 = -846233700171LL;
int64_t x197 = INT64_MAX;
int16_t x201 = -1;
uint8_t x204 = UINT8_MAX;
uint32_t x208 = 3U;
int64_t x210 = INT64_MAX;
uint32_t x212 = 1U;
volatile int64_t t48 = 1LL;
uint16_t x213 = 0U;
volatile int32_t x216 = -1;
uint32_t x220 = 2932948U;
int64_t x222 = -1LL;
uint64_t x223 = UINT64_MAX;
int32_t x225 = -1;
uint64_t x228 = 4046735170911LLU;
static int32_t x238 = -3765;
volatile uint32_t t56 = 13209U;
int16_t x247 = -25;
int32_t t57 = 1;
int32_t x251 = INT32_MIN;
int64_t x254 = INT64_MAX;
int16_t x262 = INT16_MAX;
int64_t x265 = 29205996843736LL;
int32_t x266 = -2690961;
static int64_t x268 = -519878042459755245LL;
volatile uint32_t t63 = 1U;
int8_t x274 = 3;
int8_t x275 = 2;
int64_t x281 = -66406480111300049LL;
int64_t x286 = 963852442038LL;
volatile uint64_t t67 = 4688862976676LLU;
int8_t x306 = 41;
volatile uint64_t x309 = UINT64_MAX;
int32_t x310 = INT32_MAX;
uint32_t x313 = 540603U;
uint8_t x315 = 3U;
volatile int16_t x317 = -1;
volatile uint32_t x330 = 403U;
int32_t x335 = INT32_MIN;
uint8_t x338 = 21U;
static int64_t t80 = 30938815322LL;
volatile uint8_t x345 = 5U;
int16_t x346 = -4;
int16_t x348 = 2;
uint32_t x352 = 5U;
uint64_t x357 = 159343699371087LLU;
static int16_t x366 = INT16_MIN;
static int64_t x367 = INT64_MIN;
int32_t x373 = INT32_MIN;
int32_t x384 = -1;
int64_t x387 = -1LL;
static int32_t x402 = INT32_MIN;
int16_t x414 = 214;
int32_t x420 = INT32_MIN;


void f0(void) {
	uint32_t x1 = 70020421U;
	volatile int64_t x2 = 767945649677386185LL;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -465889110465LL;

	t0 = (x1^((x2%x3)+x4));

	if (t0 != -70020432LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x8 = 5U;
	uint32_t t1 = 118439770U;

	t1 = (x5^((x6%x7)+x8));

	if (t1 != 4294967277U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 12U;
	static int8_t x10 = -63;
	int64_t x11 = INT64_MIN;

	t2 = (x9^((x10%x11)+x12));

	if (t2 != 425331586LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int16_t x20 = 3;
	int64_t t3 = -71756LL;

	t3 = (x17^((x18%x19)+x20));

	if (t3 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 6632169U;
	static int16_t x22 = INT16_MIN;
	uint16_t x24 = 2U;
	volatile uint64_t t4 = 4528883161311195LLU;

	t4 = (x21^((x22%x23)+x24));

	if (t4 != 111183232695399LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	uint16_t x31 = UINT16_MAX;

	t5 = (x29^((x30%x31)+x32));

	if (t5 != 18446733641689212747LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 3837070LLU;
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 26135U;
	static volatile uint64_t t6 = 375LLU;

	t6 = (x33^((x34%x35)+x36));

	if (t6 != 18446744073705701215LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x37 = 6LLU;
	uint16_t x38 = 3770U;
	uint8_t x39 = 41U;
	uint64_t x40 = 2035LLU;
	volatile uint64_t t7 = 1923129LLU;

	t7 = (x37^((x38%x39)+x40));

	if (t7 != 2076LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	volatile int16_t x42 = 346;
	uint64_t x44 = 3685LLU;
	volatile uint64_t t8 = 2004388351641839LLU;

	t8 = (x41^((x42%x43)+x44));

	if (t8 != 61836LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x45 = 585653286390LLU;
	int8_t x46 = 0;
	int32_t x47 = 6;
	static uint64_t x48 = 72703975LLU;
	volatile uint64_t t9 = 242913610399422LLU;

	t9 = (x45^((x46%x47)+x48));

	if (t9 != 585725291025LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	static int16_t x50 = 36;
	volatile int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t10 = -951592112;

	t10 = (x49^((x50%x51)+x52));

	if (t10 != 36) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = 89;
	uint16_t x54 = UINT16_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = -324564;

	t11 = (x53^((x54%x55)+x56));

	if (t11 != -2147418202) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = 612417U;
	volatile uint8_t x60 = UINT8_MAX;
	uint32_t t12 = 1214U;

	t12 = (x57^((x58%x59)+x60));

	if (t12 != 557U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -34;
	static volatile int8_t x62 = -1;
	volatile uint64_t x63 = 3LLU;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t13 = 1633129646748157LLU;

	t13 = (x61^((x62%x63)+x64));

	if (t13 != 94LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = INT64_MIN;
	static int16_t x66 = -1;
	static volatile int64_t x67 = INT64_MIN;
	int8_t x68 = -1;
	volatile int64_t t14 = 1528270LL;

	t14 = (x65^((x66%x67)+x68));

	if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	int16_t x71 = -1;

	t15 = (x69^((x70%x71)+x72));

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	static int8_t x74 = INT8_MIN;
	int8_t x75 = 1;
	int32_t x76 = -9;

	t16 = (x73^((x74%x75)+x76));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	uint8_t x78 = UINT8_MAX;
	int32_t x79 = INT32_MIN;
	volatile int64_t x80 = 2608418719934206LL;
	static int64_t t17 = -16948LL;

	t17 = (x77^((x78%x79)+x80));

	if (t17 != -2608418719934462LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 7;
	int32_t x82 = INT32_MIN;
	int32_t x83 = -1;
	int16_t x84 = INT16_MAX;

	t18 = (x81^((x82%x83)+x84));

	if (t18 != 32760) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MIN;
	uint64_t t19 = 3872458233020LLU;

	t19 = (x85^((x86%x87)+x88));

	if (t19 != 32392LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x89 = 478LLU;
	int32_t x90 = 39753630;
	volatile uint32_t x91 = 8081275U;
	uint64_t t20 = 468LLU;

	t20 = (x89^((x90%x91)+x92));

	if (t20 != 32993694030787098LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	static volatile int32_t x94 = -1;
	uint16_t x96 = 3U;

	t21 = (x93^((x94%x95)+x96));

	if (t21 != 9223372036854775854LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = INT64_MIN;
	int32_t x98 = -61690563;
	int8_t x99 = 7;
	int64_t t22 = -27460015LL;

	t22 = (x97^((x98%x99)+x100));

	if (t22 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x102 = 5U;
	static int32_t x103 = INT32_MIN;
	static int32_t x104 = 90642;
	int32_t t23 = 11060;

	t23 = (x101^((x102%x103)+x104));

	if (t23 != -73193) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = 0;
	int32_t x106 = 3198;
	uint32_t x107 = 2779U;
	int16_t x108 = -207;
	volatile uint32_t t24 = 90755U;

	t24 = (x105^((x106%x107)+x108));

	if (t24 != 212U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	int64_t x110 = -1LL;
	uint32_t x111 = UINT32_MAX;
	uint16_t x112 = 422U;
	volatile int64_t t25 = 189720803387LL;

	t25 = (x109^((x110%x111)+x112));

	if (t25 != 474LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	int8_t x115 = -1;
	int64_t t26 = -3072994009LL;

	t26 = (x113^((x114%x115)+x116));

	if (t26 != 1459LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = UINT16_MAX;
	int8_t x119 = INT8_MAX;
	static int32_t t27 = 138504626;

	t27 = (x117^((x118%x119)+x120));

	if (t27 != -65401) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 14674365462968LLU;
	volatile int8_t x123 = -1;
	uint8_t x124 = UINT8_MAX;

	t28 = (x121^((x122%x123)+x124));

	if (t28 != 14674365462855LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x125 = INT32_MAX;
	static int64_t x126 = -1LL;
	uint32_t x127 = 2U;

	t29 = (x125^((x126%x127)+x128));

	if (t29 != -2147483645LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	static volatile int32_t x131 = -384;
	int8_t x132 = 0;
	int32_t t30 = 429181856;

	t30 = (x129^((x130%x131)+x132));

	if (t30 != -2147483521) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = INT8_MAX;
	int32_t x134 = -1;
	int64_t x135 = -51703LL;
	uint64_t x136 = 368363919471436464LLU;
	volatile uint64_t t31 = 483811LLU;

	t31 = (x133^((x134%x135)+x136));

	if (t31 != 368363919471436496LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	uint16_t x138 = 59U;
	static int64_t x139 = -1LL;
	int64_t x140 = INT64_MAX;
	int64_t t32 = INT64_MIN;

	t32 = (x137^((x138%x139)+x140));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = 957321LL;
	int8_t x143 = INT8_MAX;
	uint16_t x144 = 58U;
	int64_t t33 = 104255430655393560LL;

	t33 = (x141^((x142%x143)+x144));

	if (t33 != -9223372036854775628LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	static uint64_t x146 = 2197LLU;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = 30546654766LLU;
	volatile uint64_t t34 = 25473LLU;

	t34 = (x145^((x146%x147)+x148));

	if (t34 != 18446744043162894652LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MIN;
	volatile int64_t x152 = -2218590817953280LL;
	volatile uint64_t t35 = 4004486170415LLU;

	t35 = (x149^((x150%x151)+x152));

	if (t35 != 18444531047870126661LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MIN;
	int16_t x158 = 30;
	int32_t x159 = INT32_MIN;
	uint32_t t36 = 7811U;

	t36 = (x157^((x158%x159)+x160));

	if (t36 != 4294934557U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x161 = -200;
	int16_t x162 = -1;
	int64_t x164 = 2191600541LL;
	int64_t t37 = 519893541455523LL;

	t37 = (x161^((x162%x163)+x164));

	if (t37 != -2191600476LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x165 = -35;
	static uint32_t x166 = 2144U;
	static int8_t x167 = -1;
	uint16_t x168 = 8U;
	volatile uint32_t t38 = 259372U;

	t38 = (x165^((x166%x167)+x168));

	if (t38 != 4294965173U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -7752986LL;
	volatile int32_t x170 = -31805447;
	int64_t x171 = INT64_MAX;
	volatile int32_t x172 = -1;
	volatile int64_t t39 = -124855076143536903LL;

	t39 = (x169^((x170%x171)+x172));

	if (t39 != 26418462LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MAX;
	int64_t x174 = 16325765193LL;
	int8_t x176 = INT8_MIN;
	int64_t t40 = -2592417809LL;

	t40 = (x173^((x174%x175)+x176));

	if (t40 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x182 = 13U;
	int64_t x183 = -1LL;
	static volatile int32_t x184 = INT32_MIN;
	uint64_t t41 = 1LLU;

	t41 = (x181^((x182%x183)+x184));

	if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x186 = INT16_MIN;
	int32_t x188 = -1;
	volatile uint32_t t42 = 1323485779U;

	t42 = (x185^((x186%x187)+x188));

	if (t42 != 4294967282U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 1U;
	uint16_t x190 = 6U;
	uint64_t x191 = 133391726809LLU;
	uint32_t x192 = 1U;
	static volatile uint64_t t43 = 1474068094LLU;

	t43 = (x189^((x190%x191)+x192));

	if (t43 != 6LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x195 = 371;
	int16_t x196 = 2;

	t44 = (x193^((x194%x195)+x196));

	if (t44 != 4294967048LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x198 = INT32_MIN;
	int8_t x199 = 2;
	static volatile int32_t x200 = -1;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x197^((x198%x199)+x200));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x202 = 52641325465283LL;
	static int32_t x203 = INT32_MIN;
	volatile int64_t t46 = 130LL;

	t46 = (x201^((x202%x203)+x204));

	if (t46 != -58802115LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x205 = INT8_MAX;
	int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	uint32_t t47 = 301U;

	t47 = (x205^((x206%x207)+x208));

	if (t47 != 125U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -4;
	static volatile int8_t x211 = INT8_MIN;

	t48 = (x209^((x210%x211)+x212));

	if (t48 != -132LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = -16;
	uint16_t x215 = UINT16_MAX;
	volatile int32_t t49 = -37761;

	t49 = (x213^((x214%x215)+x216));

	if (t49 != -17) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = 956;
	static uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MAX;
	uint32_t t50 = 790040U;

	t50 = (x217^((x218%x219)+x220));

	if (t50 != 2933611U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MAX;
	static int64_t x224 = 24LL;
	uint64_t t51 = 723LLU;

	t51 = (x221^((x222%x223)+x224));

	if (t51 != 32743LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x226 = 39230269100641149LLU;
	volatile int32_t x227 = -1;
	uint64_t t52 = 8953632319959LLU;

	t52 = (x225^((x226%x227)+x228));

	if (t52 != 18407509757873739555LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MIN;
	uint32_t x231 = UINT32_MAX;
	static int16_t x232 = 6581;
	static volatile int64_t t53 = 4270530274972236331LL;

	t53 = (x229^((x230%x231)+x232));

	if (t53 != -2147477046LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -19LL;
	int16_t x234 = INT16_MIN;
	volatile int16_t x235 = -1;
	int16_t x236 = -598;
	int64_t t54 = -300LL;

	t54 = (x233^((x234%x235)+x236));

	if (t54 != 583LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = INT64_MIN;
	static volatile int16_t x239 = INT16_MIN;
	volatile uint16_t x240 = UINT16_MAX;
	int64_t t55 = 5182393LL;

	t55 = (x237^((x238%x239)+x240));

	if (t55 != -9223372036854714038LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 69067400U;
	static uint8_t x242 = 42U;
	int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MIN;

	t56 = (x241^((x242%x243)+x244));

	if (t56 != 4225899810U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = 0;
	int8_t x246 = INT8_MIN;
	uint8_t x248 = 1U;

	t57 = (x245^((x246%x247)+x248));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MAX;
	int64_t x250 = INT64_MAX;
	uint32_t x252 = UINT32_MAX;
	int64_t t58 = -64321176256LL;

	t58 = (x249^((x250%x251)+x252));

	if (t58 != 9223372030412324865LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -64032405;
	static int8_t x255 = INT8_MIN;
	volatile int32_t x256 = INT32_MIN;
	int64_t t59 = 3909694LL;

	t59 = (x253^((x254%x255)+x256));

	if (t59 != 2083451156LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x257 = 3414280797347LLU;
	int32_t x258 = -163153688;
	static volatile uint16_t x259 = 10887U;
	int8_t x260 = INT8_MIN;
	uint64_t t60 = 262937247977654843LLU;

	t60 = (x257^((x258%x259)+x260));

	if (t60 != 18446740659428755341LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x261 = -1;
	int64_t x263 = 497223425350803LL;
	int32_t x264 = -1;
	static int64_t t61 = -44717056LL;

	t61 = (x261^((x262%x263)+x264));

	if (t61 != -32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x267 = -37;
	volatile int64_t t62 = -3351783977101797LL;

	t62 = (x265^((x266%x267)+x268));

	if (t62 != -519849935974687198LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -1;
	volatile uint32_t x270 = 431U;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = 544114713;

	t63 = (x269^((x270%x271)+x272));

	if (t63 != 3750852406U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 5U;
	int32_t x276 = -10972;
	static int32_t t64 = -840502594;

	t64 = (x273^((x274%x275)+x276));

	if (t64 != -10976) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 5U;
	int8_t x278 = INT8_MIN;
	int16_t x279 = 15;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t65 = 2744U;

	t65 = (x277^((x278%x279)+x280));

	if (t65 != 4294967282U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x282 = INT32_MIN;
	uint8_t x283 = 1U;
	static int32_t x284 = 1425330;
	static int64_t t66 = 947LL;

	t66 = (x281^((x282%x283)+x284));

	if (t66 != -66406480110473827LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = UINT64_MAX;
	int64_t x287 = -92009528588LL;
	uint32_t x288 = 1U;

	t67 = (x285^((x286%x287)+x288));

	if (t67 != 18446744029952395456LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x289 = 12;
	int8_t x290 = INT8_MAX;
	int32_t x291 = INT32_MIN;
	int32_t x292 = -1;
	int32_t t68 = -778853;

	t68 = (x289^((x290%x291)+x292));

	if (t68 != 114) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = INT16_MAX;
	volatile uint16_t x296 = 6087U;
	uint64_t t69 = 1LLU;

	t69 = (x293^((x294%x295)+x296));

	if (t69 != 18446744073709545513LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MAX;
	volatile uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = 1253191637385304LLU;
	volatile uint64_t t70 = 66762137838461182LLU;

	t70 = (x297^((x298%x299)+x300));

	if (t70 != 9222118845217390376LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	uint64_t x302 = UINT64_MAX;
	volatile uint8_t x303 = 1U;
	static uint32_t x304 = 108264U;
	static uint64_t t71 = 7LLU;

	t71 = (x301^((x302%x303)+x304));

	if (t71 != 18446744073709443351LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x305 = INT16_MAX;
	volatile int32_t x307 = INT32_MIN;
	static volatile uint32_t x308 = UINT32_MAX;
	volatile uint32_t t72 = 2075247U;

	t72 = (x305^((x306%x307)+x308));

	if (t72 != 32727U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = 10;
	uint64_t t73 = 408908LLU;

	t73 = (x309^((x310%x311)+x312));

	if (t73 != 18446744073709551478LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x314 = INT32_MAX;
	static int8_t x316 = 3;
	static volatile uint32_t t74 = 34U;

	t74 = (x313^((x314%x315)+x316));

	if (t74 != 540607U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x318 = INT16_MIN;
	volatile int8_t x319 = INT8_MIN;
	int16_t x320 = 0;
	static int32_t t75 = -14;

	t75 = (x317^((x318%x319)+x320));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = 81U;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = 8U;
	int16_t x324 = 30;
	int32_t t76 = 29;

	t76 = (x321^((x322%x323)+x324));

	if (t76 != 79) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = -1;
	static int8_t x327 = INT8_MAX;
	int64_t x328 = -1LL;
	volatile int64_t t77 = 5271951LL;

	t77 = (x325^((x326%x327)+x328));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = INT8_MAX;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	uint32_t t78 = 63177U;

	t78 = (x329^((x330%x331)+x332));

	if (t78 != 364U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x333 = UINT16_MAX;
	static int16_t x334 = INT16_MAX;
	int64_t x336 = INT64_MIN;
	volatile int64_t t79 = 1387098589LL;

	t79 = (x333^((x334%x335)+x336));

	if (t79 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x337 = 5577;
	int64_t x339 = INT64_MAX;
	uint8_t x340 = 5U;

	t80 = (x337^((x338%x339)+x340));

	if (t80 != 5587LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x341 = 32U;
	uint64_t x342 = 119245LLU;
	uint64_t x343 = UINT64_MAX;
	volatile int8_t x344 = INT8_MIN;
	uint64_t t81 = 1086051172383011557LLU;

	t81 = (x341^((x342%x343)+x344));

	if (t81 != 119149LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x347 = INT16_MAX;
	int32_t t82 = -78918;

	t82 = (x345^((x346%x347)+x348));

	if (t82 != -5) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x349 = -1;
	static int16_t x350 = -849;
	int64_t x351 = INT64_MIN;
	int64_t t83 = -8060207964191155LL;

	t83 = (x349^((x350%x351)+x352));

	if (t83 != 843LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = 15;
	volatile uint16_t x354 = UINT16_MAX;
	uint8_t x355 = 6U;
	volatile int8_t x356 = INT8_MIN;
	int32_t t84 = -1139;

	t84 = (x353^((x354%x355)+x356));

	if (t84 != -116) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x358 = 245368039888410859LL;
	volatile int8_t x359 = 3;
	static int32_t x360 = -1;
	static volatile uint64_t t85 = 23995LLU;

	t85 = (x357^((x358%x359)+x360));

	if (t85 != 159343699371087LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x361 = 28;
	uint32_t x362 = UINT32_MAX;
	uint64_t x363 = 43226LLU;
	static uint32_t x364 = 0U;
	uint64_t t86 = 11963444LLU;

	t86 = (x361^((x362%x363)+x364));

	if (t86 != 31907LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -5855;
	uint32_t x368 = 22U;
	volatile int64_t t87 = 8409802839640LL;

	t87 = (x365^((x366%x367)+x368));

	if (t87 != 26935LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = 113U;
	uint8_t x370 = 59U;
	int32_t x371 = -75530;
	static uint64_t x372 = 487882143LLU;
	uint64_t t88 = 1836530024LLU;

	t88 = (x369^((x370%x371)+x372));

	if (t88 != 487882155LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x374 = -1;
	int32_t x375 = -30634;
	int16_t x376 = INT16_MIN;
	int32_t t89 = 7;

	t89 = (x373^((x374%x375)+x376));

	if (t89 != 2147450879) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MAX;
	uint8_t x378 = 21U;
	int32_t x379 = INT32_MAX;
	uint32_t x380 = 1U;
	volatile uint32_t t90 = 271U;

	t90 = (x377^((x378%x379)+x380));

	if (t90 != 2147483625U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MAX;
	static volatile uint64_t x383 = UINT64_MAX;
	static volatile uint64_t t91 = 1543546482623LLU;

	t91 = (x381^((x382%x383)+x384));

	if (t91 != 2147450881LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = -1;
	uint32_t x388 = UINT32_MAX;
	volatile int64_t t92 = -214448697018LL;

	t92 = (x385^((x386%x387)+x388));

	if (t92 != -4294967169LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x393 = -1;
	int16_t x394 = -1;
	uint16_t x395 = 1U;
	int8_t x396 = -9;
	int32_t t93 = -242426291;

	t93 = (x393^((x394%x395)+x396));

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -935765369;
	uint32_t x398 = 9911989U;
	static int32_t x399 = INT32_MAX;
	int8_t x400 = -1;
	uint32_t t94 = 299U;

	t94 = (x397^((x398%x399)+x400));

	if (t94 != 3366872115U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = 3995;
	uint8_t x403 = 3U;
	int64_t x404 = -58LL;
	volatile int64_t t95 = 7895448650LL;

	t95 = (x401^((x402%x403)+x404));

	if (t95 != -4001LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	int32_t x407 = 31919933;
	static int32_t x408 = 2;
	volatile int32_t t96 = -11357;

	t96 = (x405^((x406%x407)+x408));

	if (t96 != -131) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x409 = 11268U;
	int64_t x410 = 506816196642LL;
	int64_t x411 = -1LL;
	int64_t x412 = INT64_MIN;
	volatile int64_t t97 = 8LL;

	t97 = (x409^((x410%x411)+x412));

	if (t97 != -9223372036854764540LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = -1;
	uint16_t x415 = 117U;
	static volatile int16_t x416 = 0;
	int32_t t98 = 17576;

	t98 = (x413^((x414%x415)+x416));

	if (t98 != -98) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = -1;
	int64_t x418 = INT64_MIN;
	static int64_t x419 = -1LL;
	volatile int64_t t99 = 12063LL;

	t99 = (x417^((x418%x419)+x420));

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

