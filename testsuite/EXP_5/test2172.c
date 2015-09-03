#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 26U;
int8_t x5 = 45;
int32_t x6 = -7;
int16_t x7 = -13;
int32_t t1 = 17940798;
int64_t x9 = -1LL;
uint8_t x12 = UINT8_MAX;
volatile int64_t t4 = 1019175175LL;
int64_t x23 = -1LL;
uint16_t x30 = 217U;
uint8_t x35 = UINT8_MAX;
int16_t x43 = 158;
int32_t x50 = INT32_MAX;
uint32_t x51 = UINT32_MAX;
static uint8_t x52 = 1U;
int64_t x55 = INT64_MIN;
int8_t x60 = 48;
volatile int64_t t14 = -5923274315802LL;
volatile int16_t x70 = -1;
int64_t t16 = 1333393421281892LL;
int8_t x73 = -10;
uint64_t x79 = UINT64_MAX;
volatile int64_t x86 = INT64_MIN;
static volatile uint32_t x88 = 72468541U;
static uint64_t t20 = 23615LLU;
static volatile int16_t x93 = -1;
uint32_t x99 = 44834877U;
int8_t x104 = INT8_MIN;
volatile uint32_t t24 = 284780065U;
static volatile int64_t x105 = 6041193916753LL;
int8_t x107 = 49;
int8_t x109 = 0;
int16_t x110 = 2207;
volatile int64_t x113 = -86830878089475LL;
static int64_t x115 = -1LL;
uint32_t x119 = 92906U;
static int64_t t29 = 874740483LL;
volatile int8_t x125 = -51;
int32_t x126 = -1;
volatile int16_t x138 = 32;
int64_t x139 = 404479981731957LL;
uint64_t x145 = 556825045LLU;
volatile int8_t x163 = INT8_MAX;
static int32_t x164 = INT32_MIN;
int16_t x168 = INT16_MAX;
uint32_t x169 = 36752U;
uint8_t x171 = UINT8_MAX;
int32_t x174 = INT32_MIN;
int64_t t39 = -144461070921LL;
int16_t x180 = INT16_MAX;
int32_t t40 = 49259431;
int64_t x182 = -1LL;
int8_t x184 = -1;
int16_t x189 = 1;
int8_t x194 = INT8_MIN;
volatile int32_t x201 = -1;
int64_t x204 = INT64_MAX;
uint32_t x210 = UINT32_MAX;
volatile int16_t x212 = INT16_MAX;
uint64_t t47 = 28787523LLU;
static uint8_t x213 = UINT8_MAX;
uint16_t x214 = 31734U;
int32_t x219 = INT32_MIN;
static int8_t x220 = -1;
uint64_t x222 = 29045619557475999LLU;
uint64_t t50 = 6613864LLU;
int8_t x226 = INT8_MAX;
int8_t x229 = INT8_MIN;
static int8_t x231 = -32;
int16_t x232 = -1;
uint32_t t52 = 7201222U;
uint32_t x234 = 6972U;
volatile int64_t t55 = -196LL;
int32_t x250 = INT32_MAX;
static int8_t x255 = INT8_MAX;
int32_t x260 = -664;
volatile uint64_t x261 = UINT64_MAX;
uint32_t x280 = 6108191U;
int32_t x284 = INT32_MIN;
uint8_t x287 = UINT8_MAX;
int64_t x293 = INT64_MIN;
uint64_t x300 = 11232LLU;
static uint64_t t66 = 575781LLU;
int16_t x303 = INT16_MIN;
volatile uint32_t t67 = 99U;
static uint64_t x306 = 17994500294370120LLU;
int64_t x307 = INT64_MIN;
uint8_t x312 = 2U;
uint8_t x315 = 2U;
static volatile int32_t t70 = -1517;
static volatile int32_t t71 = -48744;
int16_t x332 = INT16_MAX;
uint64_t x335 = 641656734235907LLU;
int8_t x343 = INT8_MIN;
int8_t x345 = INT8_MIN;
volatile int32_t x349 = INT32_MAX;
uint8_t x350 = UINT8_MAX;
static int16_t x352 = -1;
static uint64_t x357 = 7180280LLU;
int32_t x360 = -1;
uint16_t x363 = 1U;
static volatile int16_t x368 = INT16_MAX;
int64_t t82 = -127454393059905LL;
volatile int64_t x373 = -2191624587445417049LL;
int8_t x375 = -1;
int16_t x376 = INT16_MIN;
uint8_t x381 = UINT8_MAX;
int8_t x384 = INT8_MAX;
volatile uint32_t x385 = 1710U;
volatile uint8_t x390 = UINT8_MAX;
uint32_t x394 = UINT32_MAX;
static int16_t x401 = 1;
static int16_t x408 = 1;
uint8_t x444 = 2U;


void f0(void) {
	int8_t x1 = 62;
	int64_t x2 = -30248471330LL;
	int8_t x3 = -2;
	volatile int64_t t0 = -2179496128092124896LL;

	t0 = (x1+((x2^x3)|x4));

	if (t0 != 30248471416LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x8 = INT32_MIN;

	t1 = (x5+((x6^x7)|x8));

	if (t1 != -2147483593) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = 1292;
	int8_t x11 = -1;
	volatile int64_t t2 = 35919LL;

	t2 = (x9+((x10^x11)|x12));

	if (t2 != -1282LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 12307U;
	int32_t x14 = -10;
	uint16_t x15 = UINT16_MAX;
	static volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 3197121;

	t3 = (x13+((x14^x15)|x16));

	if (t3 != -53220) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int32_t x18 = -534616241;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -76679425LL;

	t4 = (x17+((x18^x19)|x20));

	if (t4 != -131330LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1047LLU;
	uint32_t x22 = UINT32_MAX;
	static int32_t x24 = INT32_MIN;
	uint64_t t5 = 556380LLU;

	t5 = (x21+((x22^x23)|x24));

	if (t5 != 18446744071562069015LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = 71;
	static int16_t x26 = INT16_MIN;
	volatile uint16_t x27 = 3U;
	static int16_t x28 = -544;
	int32_t t6 = 24254;

	t6 = (x25+((x26^x27)|x28));

	if (t6 != -470) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int16_t x31 = -2;
	int16_t x32 = 3682;
	volatile int32_t t7 = -406;

	t7 = (x29+((x30^x31)|x32));

	if (t7 != -26) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static volatile int16_t x34 = -49;
	int32_t x36 = -60789;
	volatile int32_t t8 = 348399;

	t8 = (x33+((x34^x35)|x36));

	if (t8 != -197) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	uint16_t x39 = UINT16_MAX;
	uint16_t x40 = 9229U;
	int32_t t9 = -59;

	t9 = (x37+((x38^x39)|x40));

	if (t9 != -2147418227) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 6;
	uint64_t x42 = UINT64_MAX;
	static uint32_t x44 = UINT32_MAX;
	uint64_t t10 = 5LLU;

	t10 = (x41+((x42^x43)|x44));

	if (t10 != 5LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 27;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = 2959U;
	uint64_t x48 = 1399946152953LLU;
	uint64_t t11 = 638062488145404355LLU;

	t11 = (x45+((x46^x47)|x48));

	if (t11 != 9223373436800928794LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	uint32_t t12 = 124987U;

	t12 = (x49+((x50^x51)|x52));

	if (t12 != 2147483648U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MIN;
	static uint64_t x54 = 2299471997LLU;
	uint16_t x56 = 7899U;
	volatile uint64_t t13 = 124511LLU;

	t13 = (x53+((x54^x55)|x56));

	if (t13 != 9223372039154253439LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MAX;
	volatile uint16_t x59 = UINT16_MAX;

	t14 = (x57+((x58^x59)|x60));

	if (t14 != -9223372034707357648LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 2384U;
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MAX;
	static int8_t x64 = INT8_MIN;
	int64_t t15 = 2536563683920284736LL;

	t15 = (x61+((x62^x63)|x64));

	if (t15 != 2383LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = UINT16_MAX;
	static int64_t x71 = 5178914822427024LL;
	int64_t x72 = INT64_MIN;

	t16 = (x69+((x70^x71)|x72));

	if (t16 != -5178914822361490LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = 9;
	static uint64_t x75 = 656295567574739307LLU;
	int64_t x76 = -3138224858364867522LL;
	volatile uint64_t t17 = 2013995198216LLU;

	t17 = (x73+((x74^x75)|x76));

	if (t17 != 15959606300627479924LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = UINT16_MAX;
	volatile uint32_t x78 = 115U;
	int16_t x80 = INT16_MAX;
	uint64_t t18 = 477LLU;

	t18 = (x77+((x78^x79)|x80));

	if (t18 != 65534LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MIN;
	uint8_t x82 = 5U;
	int64_t x83 = INT64_MAX;
	int8_t x84 = 7;
	int64_t t19 = 0LL;

	t19 = (x81+((x82^x83)|x84));

	if (t19 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	uint8_t x87 = 2U;

	t20 = (x85+((x86^x87)|x88));

	if (t20 != 9223372036927244350LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -54668026LL;
	volatile uint64_t x90 = 3649811985210LLU;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	uint64_t t21 = 159552556798LLU;

	t21 = (x89+((x90^x91)|x92));

	if (t21 != 18446740423842898379LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x94 = 33316704LLU;
	uint64_t x95 = 2909622016680748956LLU;
	volatile uint32_t x96 = 1574521415U;
	uint64_t t22 = 23849076LLU;

	t22 = (x93+((x94^x95)|x96));

	if (t22 != 2909622016965180158LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = 3958U;
	int64_t x98 = -132975331781LL;
	int16_t x100 = INT16_MIN;
	volatile int64_t t23 = -925850670773LL;

	t23 = (x97+((x98^x99)|x100));

	if (t23 != -6788LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -53;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 13784U;

	t24 = (x101+((x102^x103)|x104));

	if (t24 != 4294967203U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x106 = -1;
	volatile int64_t x108 = INT64_MIN;
	static int64_t t25 = -8887609836LL;

	t25 = (x105+((x106^x107)|x108));

	if (t25 != 6041193916703LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x111 = UINT32_MAX;
	static int16_t x112 = 0;
	uint32_t t26 = 59144800U;

	t26 = (x109+((x110^x111)|x112));

	if (t26 != 4294965088U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x114 = -1;
	uint16_t x116 = 0U;
	int64_t t27 = -1038517246794711LL;

	t27 = (x113+((x114^x115)|x116));

	if (t27 != -86830878089475LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = UINT64_MAX;
	uint64_t x120 = 52971237018759LLU;
	uint64_t t28 = 137601087036143107LLU;

	t28 = (x117+((x118^x119)|x120));

	if (t28 != 9223372036854685079LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -4966LL;
	uint32_t x122 = 9480012U;
	int64_t x123 = 278078404LL;
	int8_t x124 = INT8_MIN;

	t29 = (x121+((x122^x123)|x124));

	if (t29 != -5086LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x127 = 24043105U;
	int32_t x128 = INT32_MIN;
	uint32_t t30 = 327604U;

	t30 = (x125+((x126^x127)|x128));

	if (t30 != 4270924139U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	volatile int64_t t31 = -280889747737328LL;

	t31 = (x137+((x138^x139)|x140));

	if (t31 != -16427LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x141 = 10088964064828039LLU;
	volatile int64_t x142 = 1090447475050LL;
	uint8_t x143 = UINT8_MAX;
	volatile int64_t x144 = -418354928549LL;
	uint64_t t32 = 4LLU;

	t32 = (x141+((x142^x143)|x144));

	if (t32 != 10088963993419878LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x146 = 360;
	int64_t x147 = -1LL;
	int16_t x148 = INT16_MAX;
	volatile uint64_t t33 = 836181976LLU;

	t33 = (x145+((x146^x147)|x148));

	if (t33 != 556825044LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x149 = 5U;
	int64_t x150 = -1LL;
	int8_t x151 = 4;
	uint16_t x152 = UINT16_MAX;
	int64_t t34 = 170119882LL;

	t34 = (x149+((x150^x151)|x152));

	if (t34 != 4LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 8U;
	uint16_t x154 = UINT16_MAX;
	int8_t x155 = 12;
	int32_t x156 = -1;
	int32_t t35 = 47;

	t35 = (x153+((x154^x155)|x156));

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = -3451;
	static int32_t t36 = 484;

	t36 = (x161+((x162^x163)|x164));

	if (t36 != -36102) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x165 = 0U;
	uint8_t x166 = 9U;
	uint8_t x167 = UINT8_MAX;
	volatile int32_t t37 = 114862;

	t37 = (x165+((x166^x167)|x168));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x170 = -4;
	uint16_t x172 = UINT16_MAX;
	uint32_t t38 = 37U;

	t38 = (x169+((x170^x171)|x172));

	if (t38 != 36751U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x173 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 22237U;

	t39 = (x173+((x174^x175)|x176));

	if (t39 != 9223372032559830749LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = 452909;
	volatile int16_t x179 = INT16_MIN;

	t40 = (x177+((x178^x179)|x180));

	if (t40 != -458753) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MAX;
	static int16_t x183 = -14;
	volatile int64_t t41 = -33825595895315189LL;

	t41 = (x181+((x182^x183)|x184));

	if (t41 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = 0U;
	static uint64_t x191 = UINT64_MAX;
	static uint8_t x192 = UINT8_MAX;
	uint64_t t42 = 4608LLU;

	t42 = (x189+((x190^x191)|x192));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	static int32_t x195 = INT32_MAX;
	int64_t x196 = 4613373604676LL;
	volatile int64_t t43 = 1293255522965262520LL;

	t43 = (x193+((x194^x195)|x196));

	if (t43 != -1568787585LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 2U;
	volatile int16_t x198 = INT16_MIN;
	static uint64_t x199 = 472LLU;
	uint64_t x200 = 701LLU;
	uint64_t t44 = 978174257LLU;

	t44 = (x197+((x198^x199)|x200));

	if (t44 != 18446744073709519871LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int64_t t45 = 133720486975882063LL;

	t45 = (x201+((x202^x203)|x204));

	if (t45 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -60;
	static uint16_t x206 = 6192U;
	volatile uint64_t x207 = 6574818010486979LLU;
	uint32_t x208 = 495063943U;
	static volatile uint64_t t46 = 108400469078208064LLU;

	t46 = (x205+((x206^x207)|x208));

	if (t46 != 6574818077594555LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x209 = INT32_MAX;
	static uint64_t x211 = 3780536129623036LLU;

	t47 = (x209+((x210^x211)|x212));

	if (t47 != 3780536899141630LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x215 = INT32_MIN;
	static int64_t x216 = -17406246427183LL;
	volatile int64_t t48 = 67739891379LL;

	t48 = (x213+((x214^x215)|x216));

	if (t48 != -891453194LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 89;
	int16_t x218 = INT16_MIN;
	int32_t t49 = 22427;

	t49 = (x217+((x218^x219)|x220));

	if (t49 != 88) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x221 = 0U;
	static int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MAX;

	t50 = (x221+((x222^x223)|x224));

	if (t50 != 18417698454152062719LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = -1LL;
	int64_t x227 = INT64_MIN;
	static int16_t x228 = INT16_MIN;
	int64_t t51 = -12172127497863LL;

	t51 = (x225+((x226^x227)|x228));

	if (t51 != -32642LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x230 = 3686121U;

	t52 = (x229+((x230^x231)|x232));

	if (t52 != 4294967167U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int64_t x235 = INT64_MAX;
	volatile int64_t x236 = INT64_MAX;
	static volatile uint64_t t53 = 4000LLU;

	t53 = (x233+((x234^x235)|x236));

	if (t53 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = 15804;
	int16_t x238 = INT16_MIN;
	static uint8_t x239 = 6U;
	int32_t x240 = 444030;
	volatile int32_t t54 = 80835;

	t54 = (x237+((x238^x239)|x240));

	if (t54 != 1082) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MAX;

	t55 = (x241+((x242^x243)|x244));

	if (t55 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 37711U;
	static int32_t x251 = -1;
	static uint64_t x252 = 971160LLU;
	volatile uint64_t t56 = 131893479003878417LLU;

	t56 = (x249+((x250^x251)|x252));

	if (t56 != 18446744071563076839LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x253 = 38U;
	uint8_t x254 = 8U;
	static uint16_t x256 = UINT16_MAX;
	int32_t t57 = 0;

	t57 = (x253+((x254^x255)|x256));

	if (t57 != 65573) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = INT16_MIN;
	static int32_t x258 = -609;
	static volatile int32_t x259 = INT32_MIN;
	int32_t t58 = -38891675;

	t58 = (x257+((x258^x259)|x260));

	if (t58 != -33281) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x262 = 73858U;
	uint32_t x263 = 974U;
	uint8_t x264 = 6U;
	uint64_t t59 = 899315683467114LLU;

	t59 = (x261+((x262^x263)|x264));

	if (t59 != 74573LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x265 = -181;
	int32_t x266 = 204;
	int64_t x267 = -1LL;
	static int16_t x268 = INT16_MAX;
	static volatile int64_t t60 = 43251LL;

	t60 = (x265+((x266^x267)|x268));

	if (t60 != -182LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = 850;
	static uint32_t x274 = 123U;
	static uint32_t x275 = 762U;
	static int32_t x276 = INT32_MAX;
	uint32_t t61 = 19U;

	t61 = (x273+((x274^x275)|x276));

	if (t61 != 2147484497U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x277 = -1LL;
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	int64_t t62 = 853056287391008908LL;

	t62 = (x277+((x278^x279)|x280));

	if (t62 != 9223372034713400350LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	int32_t x283 = 38;
	static volatile int32_t t63 = 9533600;

	t63 = (x281+((x282^x283)|x284));

	if (t63 != 32805) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MIN;
	static volatile int64_t x286 = INT64_MAX;
	int8_t x288 = -1;
	volatile int64_t t64 = -379709754988LL;

	t64 = (x285+((x286^x287)|x288));

	if (t64 != -32769LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x294 = 223815U;
	volatile uint8_t x295 = 2U;
	volatile int32_t x296 = INT32_MAX;
	static int64_t t65 = -510257196310259LL;

	t65 = (x293+((x294^x295)|x296));

	if (t65 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -1;
	volatile uint32_t x298 = 2608U;
	uint16_t x299 = 1U;

	t66 = (x297+((x298^x299)|x300));

	if (t66 != 11248LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x302 = 76U;
	uint32_t x304 = UINT32_MAX;

	t67 = (x301+((x302^x303)|x304));

	if (t67 != 4294967167U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x305 = 2;
	uint32_t x308 = UINT32_MAX;
	volatile uint64_t t68 = 479915886195863LLU;

	t68 = (x305+((x306^x307)|x308));

	if (t68 != 9241366541075742721LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x309 = 19U;
	int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MAX;
	int64_t t69 = 1132LL;

	t69 = (x309+((x310^x311)|x312));

	if (t69 != 9223372034707292181LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = INT8_MIN;
	static int8_t x314 = INT8_MAX;
	uint16_t x316 = 0U;

	t70 = (x313+((x314^x315)|x316));

	if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x317 = -391084;
	static int32_t x318 = -1;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = 640U;

	t71 = (x317+((x318^x319)|x320));

	if (t71 != -390317) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x329 = INT16_MAX;
	int8_t x330 = -1;
	int64_t x331 = INT64_MAX;
	volatile int64_t t72 = -60400119953000706LL;

	t72 = (x329+((x330^x331)|x332));

	if (t72 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = 15821;
	int32_t x334 = 587;
	int64_t x336 = INT64_MIN;
	uint64_t t73 = 19419LLU;

	t73 = (x333+((x334^x335)|x336));

	if (t73 != 9224013693589028117LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x337 = -1LL;
	static int16_t x338 = 488;
	volatile int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	static int64_t t74 = 6655063113LL;

	t74 = (x337+((x338^x339)|x340));

	if (t74 != -32281LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = -5253203LL;
	static int32_t x342 = -2809;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int64_t t75 = -791685LL;

	t75 = (x341+((x342^x343)|x344));

	if (t75 != -5187668LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x346 = INT16_MIN;
	volatile int64_t x347 = 714726538696968LL;
	int32_t x348 = INT32_MIN;
	volatile int64_t t76 = 3686LL;

	t76 = (x345+((x346^x347)|x348));

	if (t76 != -1030956920LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x351 = 245931078242LLU;
	uint64_t t77 = 34150768014397LLU;

	t77 = (x349+((x350^x351)|x352));

	if (t77 != 2147483646LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = 1673359552LLU;
	uint32_t x354 = 635657088U;
	int64_t x355 = -1LL;
	int64_t x356 = 12LL;
	static volatile uint64_t t78 = 1435LLU;

	t78 = (x353+((x354^x355)|x356));

	if (t78 != 1037702463LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x358 = 14U;
	uint64_t x359 = UINT64_MAX;
	uint64_t t79 = 532035718009012163LLU;

	t79 = (x357+((x358^x359)|x360));

	if (t79 != 7180279LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x361 = -7;
	volatile uint16_t x362 = 90U;
	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t80 = -164899LL;

	t80 = (x361+((x362^x363)|x364));

	if (t80 != -9223372036854775724LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;
	uint8_t x367 = UINT8_MAX;
	volatile uint64_t t81 = 387437499LLU;

	t81 = (x365+((x366^x367)|x368));

	if (t81 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	static volatile int64_t x371 = -1LL;
	static volatile int32_t x372 = INT32_MAX;

	t82 = (x369+((x370^x371)|x372));

	if (t82 != -2147483650LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x374 = INT64_MIN;
	static int64_t t83 = 129634841552724057LL;

	t83 = (x373+((x374^x375)|x376));

	if (t83 != -2191624587445417050LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x382 = INT32_MAX;
	static int32_t x383 = INT32_MAX;
	volatile int32_t t84 = 770702;

	t84 = (x381+((x382^x383)|x384));

	if (t84 != 382) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MIN;
	int64_t x388 = 17414912LL;
	static int64_t t85 = -91644955LL;

	t85 = (x385+((x386^x387)|x388));

	if (t85 != 2147485230LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MIN;
	static int64_t x391 = INT64_MIN;
	volatile int16_t x392 = INT16_MAX;
	int64_t t86 = -16LL;

	t86 = (x389+((x390^x391)|x392));

	if (t86 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = 1;
	volatile int64_t x395 = INT64_MIN;
	uint32_t x396 = 2336977U;
	int64_t t87 = -150712735625566933LL;

	t87 = (x393+((x394^x395)|x396));

	if (t87 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile uint8_t x398 = UINT8_MAX;
	uint32_t x399 = 5291641U;
	int16_t x400 = -6226;
	volatile uint32_t t88 = 1U;

	t88 = (x397+((x398^x399)|x400));

	if (t88 != 2147483566U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x402 = INT64_MIN;
	static uint16_t x403 = 367U;
	static int32_t x404 = -115645827;
	static int64_t t89 = -16671695600737701LL;

	t89 = (x401+((x402^x403)|x404));

	if (t89 != -115645568LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = 107697;
	int64_t x406 = -9176428829439LL;
	uint64_t x407 = 78523758766LLU;
	volatile uint64_t t90 = 749504931457LLU;

	t90 = (x405+((x406^x407)|x408));

	if (t90 != 18446734956473025120LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -1LL;
	static int16_t x410 = -1;
	static uint8_t x411 = 3U;
	static int32_t x412 = -1;
	volatile int64_t t91 = 209129475LL;

	t91 = (x409+((x410^x411)|x412));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = -162084716997LL;
	volatile uint16_t x414 = 28065U;
	int8_t x415 = INT8_MIN;
	static uint16_t x416 = 85U;
	static int64_t t92 = 27446LL;

	t92 = (x413+((x414^x415)|x416));

	if (t92 != -162084745040LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x417 = 29948893U;
	int16_t x418 = -1;
	uint8_t x419 = UINT8_MAX;
	volatile int16_t x420 = -1;
	uint32_t t93 = 69427687U;

	t93 = (x417+((x418^x419)|x420));

	if (t93 != 29948892U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = 7142265829LLU;
	static int8_t x422 = INT8_MIN;
	uint16_t x423 = 1215U;
	int32_t x424 = INT32_MIN;
	uint64_t t94 = 1954101185541LLU;

	t94 = (x421+((x422^x423)|x424));

	if (t94 != 7142264612LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x425 = UINT16_MAX;
	int64_t x426 = 24184LL;
	int16_t x427 = INT16_MAX;
	volatile int64_t x428 = 171430539324364LL;
	int64_t t95 = 16172329742643LL;

	t95 = (x425+((x426^x427)|x428));

	if (t95 != 171430539389902LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x429 = -2;
	volatile int32_t x430 = 271;
	volatile uint16_t x431 = 1274U;
	uint32_t x432 = 604701364U;
	volatile uint32_t t96 = 40U;

	t96 = (x429+((x430^x431)|x432));

	if (t96 != 604702707U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x433 = -1LL;
	uint8_t x434 = 3U;
	int32_t x435 = 83838758;
	int16_t x436 = -1;
	static volatile int64_t t97 = -311085281291622826LL;

	t97 = (x433+((x434^x435)|x436));

	if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = -1LL;
	int8_t x438 = 38;
	int8_t x439 = -18;
	uint8_t x440 = 9U;
	static volatile int64_t t98 = -844070LL;

	t98 = (x437+((x438^x439)|x440));

	if (t98 != -56LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = UINT16_MAX;
	int32_t x442 = INT32_MIN;
	static uint8_t x443 = UINT8_MAX;
	volatile int32_t t99 = -95464;

	t99 = (x441+((x442^x443)|x444));

	if (t99 != -2147417858) { NG(); } else { ; }
	
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

