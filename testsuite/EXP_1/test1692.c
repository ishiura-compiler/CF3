#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x6 = 88LLU;
volatile int8_t x26 = -3;
int8_t x27 = -1;
int32_t x40 = INT32_MIN;
volatile int8_t x45 = -1;
int16_t x51 = INT16_MIN;
uint16_t x53 = UINT16_MAX;
uint8_t x56 = 2U;
int64_t x57 = -846704LL;
volatile uint32_t x58 = 265424186U;
int8_t x59 = INT8_MIN;
volatile int64_t x65 = INT64_MIN;
int32_t x69 = INT32_MIN;
static int64_t x70 = -1LL;
int16_t x87 = INT16_MIN;
int8_t x90 = -1;
int64_t t19 = 9601492139LL;
int16_t x101 = -1;
uint64_t x108 = UINT64_MAX;
int8_t x111 = 3;
uint64_t x114 = 89284285420147LLU;
int16_t x116 = 292;
uint16_t x122 = UINT16_MAX;
int8_t x125 = -1;
uint8_t x126 = 22U;
volatile int64_t t26 = 59LL;
uint8_t x129 = 0U;
int64_t x134 = -30LL;
uint32_t x136 = UINT32_MAX;
int64_t t28 = -110LL;
int32_t t31 = -10286444;
int64_t x153 = -5300120283568LL;
uint8_t x159 = UINT8_MAX;
static int64_t t34 = -18596186530883877LL;
uint32_t x173 = UINT32_MAX;
uint64_t x180 = UINT64_MAX;
volatile uint64_t t39 = 11656994083648LLU;
uint64_t t41 = 1010398173320570LLU;
int32_t x194 = INT32_MAX;
int32_t x200 = 201;
int64_t x203 = -1871930749716LL;
volatile int64_t t44 = 70833341906157747LL;
uint32_t x207 = UINT32_MAX;
volatile uint32_t t45 = 2U;
static int64_t x210 = INT64_MIN;
int16_t x211 = INT16_MIN;
uint64_t t46 = 5940384331045099LLU;
uint32_t t47 = 9041U;
static uint64_t x218 = UINT64_MAX;
static int8_t x229 = INT8_MIN;
static int32_t x234 = INT32_MIN;
static volatile int64_t t52 = INT64_MIN;
volatile uint32_t x238 = UINT32_MAX;
int8_t x241 = -1;
static volatile uint64_t t55 = 29612LLU;
volatile int32_t x259 = 0;
int32_t t57 = 455579;
int8_t x268 = -1;
static int8_t x276 = 3;
uint32_t x285 = 792670127U;
uint16_t x286 = 18333U;
int16_t x288 = -1;
int8_t x293 = INT8_MIN;
uint64_t x294 = 222240053915583LLU;
int16_t x295 = -1;
int32_t x302 = -1;
volatile int64_t t64 = -2768841594196963LL;
static int32_t x307 = -1;
int8_t x312 = 10;
uint8_t x316 = 1U;
int16_t x324 = INT16_MIN;
int16_t x327 = 55;
static int32_t x328 = -500789;
uint32_t t71 = 15U;
uint64_t x337 = 138460LLU;
volatile int64_t x338 = -537833LL;
volatile uint16_t x339 = UINT16_MAX;
static volatile uint16_t x340 = UINT16_MAX;
uint64_t t72 = 1924LLU;
volatile int64_t x342 = INT64_MAX;
volatile int64_t t73 = -525596984LL;
int8_t x362 = INT8_MIN;
volatile int64_t x363 = 1LL;
int16_t x364 = INT16_MIN;
static volatile int64_t t80 = -22545571LL;
volatile int16_t x381 = 8006;
uint8_t x382 = UINT8_MAX;
int64_t x383 = INT64_MIN;
volatile int8_t x386 = INT8_MIN;
static volatile uint64_t t83 = 3792261LLU;
int32_t x390 = INT32_MAX;
int16_t x393 = -1;
int32_t t85 = -3160297;
volatile uint64_t x398 = 3128664LLU;
uint8_t x404 = 5U;
uint32_t x417 = UINT32_MAX;
uint64_t x418 = 492042739LLU;
static volatile uint64_t t91 = 4455484974002085LLU;
static int8_t x428 = INT8_MIN;
volatile int32_t t93 = 9575862;
int16_t x433 = INT16_MIN;
volatile int16_t x466 = INT16_MIN;
uint16_t x468 = UINT16_MAX;
int32_t t98 = -20277843;
static int16_t x475 = -258;
static volatile int32_t t99 = 44145297;


void f0(void) {
	int32_t x1 = -1;
	volatile uint64_t x2 = 27196810236516512LLU;
	static int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	uint64_t t0 = 8LLU;

	t0 = (((x1&x2)+x3)-x4);

	if (t0 != 27196810236483745LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 0;
	int16_t x7 = 1450;
	static int16_t x8 = -47;
	volatile uint64_t t1 = 254462574983730LLU;

	t1 = (((x5&x6)+x7)-x8);

	if (t1 != 1497LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	uint64_t x18 = 7836LLU;
	uint8_t x19 = 3U;
	int16_t x20 = INT16_MAX;
	static volatile uint64_t t2 = 7829247507937LLU;

	t2 = (((x17&x18)+x19)-x20);

	if (t2 != 18446744073709526688LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x25 = INT16_MIN;
	int8_t x28 = 51;
	static volatile int32_t t3 = 108863854;

	t3 = (((x25&x26)+x27)-x28);

	if (t3 != -32820) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = 18089LL;
	static int8_t x30 = INT8_MIN;
	int32_t x31 = -1;
	int16_t x32 = -5;
	int64_t t4 = 340359969099LL;

	t4 = (((x29&x30)+x31)-x32);

	if (t4 != 18052LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 22U;
	volatile int8_t x34 = INT8_MIN;
	int64_t x35 = -1LL;
	int16_t x36 = INT16_MIN;
	volatile int64_t t5 = 171LL;

	t5 = (((x33&x34)+x35)-x36);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x37 = INT64_MIN;
	uint32_t x38 = 1U;
	static int64_t x39 = -1LL;
	int64_t t6 = -2180013677037LL;

	t6 = (((x37&x38)+x39)-x40);

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	static volatile uint64_t x43 = 112258027149264926LLU;
	int8_t x44 = 0;
	volatile uint64_t t7 = 913718011346248156LLU;

	t7 = (((x41&x42)+x43)-x44);

	if (t7 != 112258027149232158LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x46 = 2U;
	int32_t x47 = -760086;
	static int8_t x48 = -1;
	static int32_t t8 = -82858;

	t8 = (((x45&x46)+x47)-x48);

	if (t8 != -760083) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 11321U;
	uint32_t x50 = UINT32_MAX;
	int16_t x52 = -4;
	uint32_t t9 = 1377U;

	t9 = (((x49&x50)+x51)-x52);

	if (t9 != 4294945853U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 29U;
	static int32_t t10 = 0;

	t10 = (((x53&x54)+x55)-x56);

	if (t10 != 65435) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x60 = 14;
	volatile int64_t t11 = -1LL;

	t11 = (((x57&x58)+x59)-x60);

	if (t11 != 265421698LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1557342793683556763LL;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = -8;
	uint16_t x64 = 26U;
	int64_t t12 = -1826591LL;

	t12 = (((x61&x62)+x63)-x64);

	if (t12 != -1557342795646107682LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x66 = 239U;
	int16_t x67 = -14;
	int64_t x68 = 680656877244LL;
	volatile int64_t t13 = 62756932LL;

	t13 = (((x65&x66)+x67)-x68);

	if (t13 != -680656877258LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x71 = -15656;
	int32_t x72 = INT32_MAX;
	int64_t t14 = -1162174038495LL;

	t14 = (((x69&x70)+x71)-x72);

	if (t14 != -4294982951LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x73 = 11771656U;
	int32_t x74 = INT32_MIN;
	static volatile int32_t x75 = 21;
	int8_t x76 = INT8_MIN;
	volatile uint32_t t15 = 2U;

	t15 = (((x73&x74)+x75)-x76);

	if (t15 != 149U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	volatile int16_t x83 = 14610;
	volatile uint8_t x84 = 9U;
	int32_t t16 = -66;

	t16 = (((x81&x82)+x83)-x84);

	if (t16 != -2147469047) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x85 = UINT8_MAX;
	uint16_t x86 = 0U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t17 = -229889;

	t17 = (((x85&x86)+x87)-x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 214U;
	volatile int8_t x91 = -1;
	int8_t x92 = 40;
	static volatile int32_t t18 = 176986477;

	t18 = (((x89&x90)+x91)-x92);

	if (t18 != 173) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -1;
	int64_t x94 = INT64_MAX;
	int64_t x95 = -39LL;
	uint16_t x96 = UINT16_MAX;

	t19 = (((x93&x94)+x95)-x96);

	if (t19 != 9223372036854710233LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x102 = INT32_MIN;
	static uint16_t x103 = UINT16_MAX;
	static int32_t x104 = INT32_MIN;
	static int32_t t20 = 114;

	t20 = (((x101&x102)+x103)-x104);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -794782196;
	int32_t x106 = INT32_MAX;
	uint32_t x107 = 220126U;
	volatile uint64_t t21 = 529821958065898LLU;

	t21 = (((x105&x106)+x107)-x108);

	if (t21 != 1352921579LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -89;
	int16_t x110 = INT16_MIN;
	static int16_t x112 = 3;
	volatile int32_t t22 = -6879;

	t22 = (((x109&x110)+x111)-x112);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x113 = -124;
	volatile uint8_t x115 = UINT8_MAX;
	uint64_t t23 = 6190855979LLU;

	t23 = (((x113&x114)+x115)-x116);

	if (t23 != 89284285419995LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x117 = INT32_MIN;
	int64_t x118 = -1LL;
	volatile int64_t x119 = -1LL;
	int64_t x120 = -483LL;
	static int64_t t24 = 2006065LL;

	t24 = (((x117&x118)+x119)-x120);

	if (t24 != -2147483166LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = -1;
	int8_t x123 = 14;
	volatile uint8_t x124 = 81U;
	volatile int32_t t25 = -1;

	t25 = (((x121&x122)+x123)-x124);

	if (t25 != 65468) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x127 = 13;
	static int64_t x128 = 280529830130LL;

	t26 = (((x125&x126)+x127)-x128);

	if (t26 != -280529830095LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x130 = UINT8_MAX;
	volatile uint32_t x131 = 101U;
	static uint8_t x132 = UINT8_MAX;
	uint32_t t27 = 883190U;

	t27 = (((x129&x130)+x131)-x132);

	if (t27 != 4294967142U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	uint32_t x135 = 10U;

	t28 = (((x133&x134)+x135)-x136);

	if (t28 != -4295000053LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = 82;
	volatile uint8_t x138 = 7U;
	volatile uint64_t x139 = 1028014141713LLU;
	static uint32_t x140 = 13580U;
	uint64_t t29 = 43419270145947LLU;

	t29 = (((x137&x138)+x139)-x140);

	if (t29 != 1028014128135LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;
	uint64_t t30 = 11967715LLU;

	t30 = (((x141&x142)+x143)-x144);

	if (t30 != 9223372036854742913LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x145 = INT16_MIN;
	uint16_t x146 = UINT16_MAX;
	uint8_t x147 = 11U;
	volatile int32_t x148 = 4166317;

	t31 = (((x145&x146)+x147)-x148);

	if (t31 != -4133538) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 161548LLU;
	uint32_t x150 = 16604U;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = INT64_MAX;
	volatile uint64_t t32 = 2608035606192135183LLU;

	t32 = (((x149&x150)+x151)-x152);

	if (t32 != 9223372036854759437LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x154 = INT16_MIN;
	volatile int16_t x155 = -1;
	int16_t x156 = INT16_MAX;
	volatile int64_t t33 = -16723395596863LL;

	t33 = (((x153&x154)+x155)-x156);

	if (t33 != -5300120322048LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = 1852160907997142743LL;
	int8_t x158 = INT8_MIN;
	int16_t x160 = INT16_MIN;

	t34 = (((x157&x158)+x159)-x160);

	if (t34 != 1852160907997175679LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = 624;
	int8_t x162 = INT8_MIN;
	volatile uint64_t x163 = 4285340301458LLU;
	int8_t x164 = 42;
	uint64_t t35 = 33198164LLU;

	t35 = (((x161&x162)+x163)-x164);

	if (t35 != 4285340301928LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x165 = 6U;
	static volatile uint8_t x166 = UINT8_MAX;
	static volatile int16_t x167 = INT16_MAX;
	static volatile uint16_t x168 = 1494U;
	volatile int32_t t36 = 1;

	t36 = (((x165&x166)+x167)-x168);

	if (t36 != 31279) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x169 = 87851051U;
	volatile int8_t x170 = 0;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	volatile uint32_t t37 = 404U;

	t37 = (((x169&x170)+x171)-x172);

	if (t37 != 4294934656U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x174 = INT64_MAX;
	static int64_t x175 = -1LL;
	int8_t x176 = INT8_MAX;
	volatile int64_t t38 = 5046111832LL;

	t38 = (((x173&x174)+x175)-x176);

	if (t38 != 4294967167LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MAX;

	t39 = (((x177&x178)+x179)-x180);

	if (t39 != 32768LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -3416535;
	int32_t x182 = 130609;
	int16_t x183 = INT16_MAX;
	static volatile int16_t x184 = 13;
	volatile int32_t t40 = 507795475;

	t40 = (((x181&x182)+x183)-x184);

	if (t40 != 155155) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = 67815LLU;
	int64_t x190 = INT64_MAX;
	volatile int16_t x191 = 67;
	volatile int8_t x192 = INT8_MAX;

	t41 = (((x189&x190)+x191)-x192);

	if (t41 != 67755LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = 26400;
	static volatile uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t42 = -65003;

	t42 = (((x193&x194)+x195)-x196);

	if (t42 != 26783) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x197 = 921U;
	int32_t x198 = 80536024;
	static int16_t x199 = INT16_MIN;
	int32_t t43 = 946051;

	t43 = (((x197&x198)+x199)-x200);

	if (t43 != -32561) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x201 = 1U;
	int32_t x202 = INT32_MAX;
	uint32_t x204 = UINT32_MAX;

	t44 = (((x201&x202)+x203)-x204);

	if (t44 != -1876225717010LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	uint32_t x208 = 664U;

	t45 = (((x205&x206)+x207)-x208);

	if (t45 != 4294933863U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 54668LLU;
	uint8_t x212 = 98U;

	t46 = (((x209&x210)+x211)-x212);

	if (t46 != 18446744073709518750LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = INT32_MAX;
	uint32_t x214 = 7287U;
	int32_t x215 = INT32_MIN;
	static int32_t x216 = INT32_MIN;

	t47 = (((x213&x214)+x215)-x216);

	if (t47 != 7287U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 11274430569LLU;
	volatile uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MIN;
	uint64_t t48 = 258432127748LLU;

	t48 = (((x217&x218)+x219)-x220);

	if (t48 != 13421914472LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x221 = INT16_MIN;
	static int8_t x222 = 8;
	uint64_t x223 = 91008671082445721LLU;
	int64_t x224 = -33913LL;
	uint64_t t49 = 372314143LLU;

	t49 = (((x221&x222)+x223)-x224);

	if (t49 != 91008671082479634LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = -1;
	int64_t x226 = -1LL;
	static int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MIN;
	int64_t t50 = -1LL;

	t50 = (((x225&x226)+x227)-x228);

	if (t50 != 2147483774LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x230 = -8051508734LL;
	int32_t x231 = -1;
	uint32_t x232 = 673172550U;
	int64_t t51 = 798081549LL;

	t51 = (((x229&x230)+x231)-x232);

	if (t51 != -8724681287LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = 34;
	volatile int16_t x235 = -1;
	static int64_t x236 = INT64_MAX;

	t52 = (((x233&x234)+x235)-x236);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x237 = 8766767818847368319LLU;
	volatile int8_t x239 = INT8_MIN;
	static int32_t x240 = 247336;
	volatile uint64_t t53 = 5743809LLU;

	t53 = (((x237&x238)+x239)-x240);

	if (t53 != 112553431LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x242 = 14U;
	static int8_t x243 = INT8_MAX;
	int32_t x244 = INT32_MAX;
	uint32_t t54 = 62334U;

	t54 = (((x241&x242)+x243)-x244);

	if (t54 != 2147483790U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = -5;
	static uint16_t x247 = 2024U;
	volatile uint64_t x248 = 2734LLU;

	t55 = (((x245&x246)+x247)-x248);

	if (t55 != 64821LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 88U;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	volatile uint32_t t56 = 13U;

	t56 = (((x249&x250)+x251)-x252);

	if (t56 != 2147483863U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	volatile int16_t x260 = -1;

	t57 = (((x257&x258)+x259)-x260);

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x265 = 12401037042564LLU;
	static uint32_t x266 = 1683U;
	static int16_t x267 = -1;
	static uint64_t t58 = 128002544987964754LLU;

	t58 = (((x265&x266)+x267)-x268);

	if (t58 != 640LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = -1;
	int64_t x270 = -1LL;
	static int32_t x271 = -16;
	volatile int16_t x272 = -1;
	volatile int64_t t59 = -3096259097LL;

	t59 = (((x269&x270)+x271)-x272);

	if (t59 != -16LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = INT64_MAX;
	uint8_t x274 = 118U;
	uint32_t x275 = UINT32_MAX;
	volatile int64_t t60 = 733LL;

	t60 = (((x273&x274)+x275)-x276);

	if (t60 != 4294967410LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x281 = UINT32_MAX;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = -1;
	int16_t x284 = -3;
	volatile uint32_t t61 = 8006U;

	t61 = (((x281&x282)+x283)-x284);

	if (t61 != 257U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x287 = 531236904LL;
	volatile int64_t t62 = 0LL;

	t62 = (((x285&x286)+x287)-x288);

	if (t62 != 531238838LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x296 = -1;
	uint64_t t63 = 27LLU;

	t63 = (((x293&x294)+x295)-x296);

	if (t63 != 222240053915520LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x301 = INT64_MAX;
	int64_t x303 = INT64_MIN;
	volatile int32_t x304 = 1194582;

	t64 = (((x301&x302)+x303)-x304);

	if (t64 != -1194583LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x305 = UINT16_MAX;
	int8_t x306 = INT8_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t65 = -245857386;

	t65 = (((x305&x306)+x307)-x308);

	if (t65 != -129) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = 92573546101862075LL;
	static int16_t x311 = INT16_MAX;
	int64_t t66 = 88480481527400998LL;

	t66 = (((x309&x310)+x311)-x312);

	if (t66 != 92573546101894773LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = 39;
	volatile int32_t x314 = -1;
	uint64_t x315 = 264718482054733LLU;
	volatile uint64_t t67 = 6269984172377LLU;

	t67 = (((x313&x314)+x315)-x316);

	if (t67 != 264718482054771LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = -1;
	volatile int16_t x318 = -1;
	uint16_t x319 = 1605U;
	static volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t68 = 817423LLU;

	t68 = (((x317&x318)+x319)-x320);

	if (t68 != 1605LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MAX;
	int32_t x323 = INT32_MIN;
	volatile int32_t t69 = 728;

	t69 = (((x321&x322)+x323)-x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x325 = UINT16_MAX;
	static volatile int16_t x326 = 27;
	int32_t t70 = 18529;

	t70 = (((x325&x326)+x327)-x328);

	if (t70 != 500871) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = 49348U;
	int32_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	static int32_t x332 = 50017616;

	t71 = (((x329&x330)+x331)-x332);

	if (t71 != 4244999283U) { NG(); } else { ; }
	
}

void f72(void) {


	t72 = (((x337&x338)+x339)-x340);

	if (t72 != 133140LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = INT16_MIN;
	static int16_t x343 = -8;
	static volatile int32_t x344 = -461;

	t73 = (((x341&x342)+x343)-x344);

	if (t73 != 9223372036854743493LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = 3359;
	volatile int8_t x346 = 2;
	static volatile int16_t x347 = -1;
	uint32_t x348 = 809U;
	uint32_t t74 = 6322U;

	t74 = (((x345&x346)+x347)-x348);

	if (t74 != 4294966488U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x349 = 31732077LLU;
	uint64_t x350 = 7938628935LLU;
	int32_t x351 = -191;
	int64_t x352 = -1LL;
	uint64_t t75 = 124286530LLU;

	t75 = (((x349&x350)+x351)-x352);

	if (t75 != 19140743LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x353 = INT8_MIN;
	int8_t x354 = 0;
	int64_t x355 = INT64_MIN;
	int32_t x356 = 0;
	volatile int64_t t76 = INT64_MIN;

	t76 = (((x353&x354)+x355)-x356);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x357 = -1607;
	int64_t x358 = 269480459LL;
	int64_t x359 = INT64_MIN;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t77 = 1372083LLU;

	t77 = (((x357&x358)+x359)-x360);

	if (t77 != 9223372037124255754LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x361 = 123U;
	int64_t t78 = -1216573787086565LL;

	t78 = (((x361&x362)+x363)-x364);

	if (t78 != 32769LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MIN;
	int32_t x371 = 477750454;
	int16_t x372 = INT16_MIN;
	int64_t t79 = -1LL;

	t79 = (((x369&x370)+x371)-x372);

	if (t79 != -9223372036376992586LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MIN;
	volatile int32_t x374 = INT32_MAX;
	volatile int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MAX;

	t80 = (((x373&x374)+x375)-x376);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = -1;
	uint32_t x378 = 7485930U;
	volatile int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MAX;
	uint32_t t81 = 102U;

	t81 = (((x377&x378)+x379)-x380);

	if (t81 != 7485675U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x384 = -1LL;
	int64_t t82 = 3122LL;

	t82 = (((x381&x382)+x383)-x384);

	if (t82 != -9223372036854775737LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x385 = UINT16_MAX;
	uint64_t x387 = 8922191037LLU;
	int16_t x388 = -3818;

	t83 = (((x385&x386)+x387)-x388);

	if (t83 != 8922260263LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x389 = -2322864LL;
	static int64_t x391 = 3501530694096LL;
	int16_t x392 = 1;
	int64_t t84 = 6322248LL;

	t84 = (((x389&x390)+x391)-x392);

	if (t84 != 3503675854879LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x394 = -1;
	static int32_t x395 = 3878;
	int8_t x396 = INT8_MIN;

	t85 = (((x393&x394)+x395)-x396);

	if (t85 != 4005) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x397 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	static uint32_t x400 = 128168U;
	uint64_t t86 = 11041527151976LLU;

	t86 = (((x397&x398)+x399)-x400);

	if (t86 != 18446744073709423320LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = 15;
	volatile uint64_t x403 = UINT64_MAX;
	uint64_t t87 = 10901167LLU;

	t87 = (((x401&x402)+x403)-x404);

	if (t87 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x405 = 102U;
	uint8_t x406 = 0U;
	static int8_t x407 = INT8_MIN;
	static int64_t x408 = -1LL;
	int64_t t88 = 37131912817LL;

	t88 = (((x405&x406)+x407)-x408);

	if (t88 != -127LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x409 = -1;
	int32_t x410 = INT32_MAX;
	int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MAX;
	volatile int32_t t89 = -2616346;

	t89 = (((x409&x410)+x411)-x412);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x413 = 15U;
	int64_t x414 = 3480LL;
	volatile int8_t x415 = 1;
	volatile int16_t x416 = 11;
	static int64_t t90 = 794766648LL;

	t90 = (((x413&x414)+x415)-x416);

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MAX;

	t91 = (((x417&x418)+x419)-x420);

	if (t91 != 492009844LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = -136;
	volatile int16_t x426 = 1;
	int8_t x427 = -29;
	static volatile int32_t t92 = 203;

	t92 = (((x425&x426)+x427)-x428);

	if (t92 != 99) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = INT8_MAX;
	static int8_t x430 = INT8_MIN;
	volatile uint8_t x431 = UINT8_MAX;
	volatile uint16_t x432 = 3U;

	t93 = (((x429&x430)+x431)-x432);

	if (t93 != 252) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x434 = -1;
	volatile int16_t x435 = INT16_MAX;
	int16_t x436 = INT16_MIN;
	volatile int32_t t94 = 15061;

	t94 = (((x433&x434)+x435)-x436);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x437 = UINT32_MAX;
	int8_t x438 = INT8_MAX;
	int8_t x439 = 8;
	int64_t x440 = INT64_MAX;
	volatile int64_t t95 = 6654840985LL;

	t95 = (((x437&x438)+x439)-x440);

	if (t95 != -9223372036854775672LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = 1;
	volatile int64_t x446 = -1759429LL;
	int32_t x447 = -1;
	uint64_t x448 = 3829LLU;
	static volatile uint64_t t96 = 984186957013065LLU;

	t96 = (((x445&x446)+x447)-x448);

	if (t96 != 18446744073709547787LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x453 = 1351167115LLU;
	static int64_t x454 = INT64_MIN;
	uint16_t x455 = UINT16_MAX;
	int16_t x456 = INT16_MAX;
	uint64_t t97 = 180392853LLU;

	t97 = (((x453&x454)+x455)-x456);

	if (t97 != 32768LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x465 = UINT8_MAX;
	static int8_t x467 = 0;

	t98 = (((x465&x466)+x467)-x468);

	if (t98 != -65535) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x473 = 98459316;
	int8_t x474 = INT8_MIN;
	int8_t x476 = 1;

	t99 = (((x473&x474)+x475)-x476);

	if (t99 != 98459005) { NG(); } else { ; }
	
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

