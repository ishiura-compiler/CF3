#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
int8_t x8 = INT8_MIN;
int32_t t1 = -56864033;
static volatile int64_t x13 = INT64_MIN;
volatile int8_t x15 = INT8_MAX;
uint32_t x19 = 4606U;
volatile uint32_t t3 = 3043071U;
static int64_t x30 = INT64_MIN;
static uint16_t x32 = 227U;
int16_t x45 = INT16_MIN;
uint8_t x72 = UINT8_MAX;
volatile int32_t t15 = 14957980;
static volatile int16_t x74 = -4;
volatile int64_t x78 = -1LL;
static uint32_t x85 = UINT32_MAX;
int8_t x88 = 11;
int32_t t19 = 1;
int16_t x89 = INT16_MAX;
int32_t x106 = INT32_MIN;
volatile int32_t t23 = -227;
int32_t x114 = -1;
static uint8_t x115 = 1U;
static uint32_t x117 = 83268U;
uint32_t x120 = 865U;
int32_t x124 = INT32_MIN;
uint8_t x125 = UINT8_MAX;
uint64_t x127 = 101LLU;
uint64_t t27 = 11801553557034581LLU;
volatile int64_t x135 = INT64_MIN;
volatile int64_t t28 = 8198463LL;
static volatile int32_t t29 = -230653509;
uint8_t x143 = 8U;
static int32_t t30 = 1024234717;
int8_t x153 = 1;
uint8_t x167 = 90U;
uint16_t x168 = 28U;
int32_t t35 = 991258802;
int8_t x175 = INT8_MAX;
int64_t x176 = -1542765165797911434LL;
int32_t x204 = -102;
volatile int32_t t42 = -48;
uint32_t x208 = UINT32_MAX;
static uint16_t x213 = 2U;
volatile int8_t x220 = -50;
int32_t x228 = -1;
int32_t t48 = -2;
int8_t x231 = INT8_MAX;
uint32_t x237 = 5517011U;
int16_t x240 = 0;
int32_t t50 = -11;
uint8_t x242 = 5U;
uint16_t x244 = 3U;
uint64_t t51 = 421715LLU;
int64_t x245 = -1LL;
int8_t x260 = INT8_MIN;
int16_t x264 = INT16_MAX;
uint8_t x266 = 21U;
uint64_t x268 = 5614443LLU;
volatile uint64_t t56 = 16218541122747LLU;
volatile int64_t x269 = INT64_MIN;
volatile int64_t x293 = 3283082190LL;
int16_t x300 = -1;
volatile int16_t x302 = INT16_MIN;
uint64_t x304 = UINT64_MAX;
int32_t x305 = INT32_MIN;
int16_t x306 = INT16_MIN;
uint8_t x307 = UINT8_MAX;
volatile int32_t t66 = -1806651;
static volatile int32_t x320 = INT32_MAX;
uint64_t t69 = 3172767213LLU;
uint16_t x325 = 420U;
int16_t x327 = INT16_MAX;
volatile uint32_t x329 = 4811U;
uint8_t x331 = 63U;
volatile int32_t t71 = 241173;
int32_t t72 = 372785674;
uint8_t x341 = 63U;
int32_t x342 = INT32_MIN;
volatile uint32_t x343 = 14U;
static volatile uint8_t x344 = 2U;
int64_t x349 = INT64_MAX;
static int16_t x354 = -193;
uint16_t x355 = UINT16_MAX;
volatile int64_t t75 = 160263343226LL;
int16_t x363 = INT16_MIN;
int32_t x365 = -1;
static int8_t x366 = INT8_MIN;
int16_t x371 = INT16_MIN;
int16_t x374 = INT16_MIN;
int32_t x377 = -1;
int8_t x380 = INT8_MAX;
int32_t x386 = -1;
uint16_t x387 = 19830U;
uint16_t x394 = 23U;
int16_t x396 = -1;
int8_t x407 = 23;
volatile uint8_t x408 = 21U;
static uint8_t x409 = UINT8_MAX;
int64_t x412 = INT64_MIN;
uint64_t x414 = UINT64_MAX;
uint64_t t87 = 2139LLU;
volatile int64_t t91 = 5LL;
static int32_t t92 = 0;
uint32_t t93 = 12090U;
uint8_t x445 = 0U;
int8_t x451 = -1;
int32_t t95 = -125119;
static volatile int32_t t96 = 13753;
int32_t x465 = INT32_MIN;
static volatile int32_t t99 = -5;


void f0(void) {
	int64_t x5 = INT64_MIN;
	int32_t x6 = -1;
	volatile int32_t t0 = -1990854;

	t0 = (((x5<=x6)|x7)+x8);

	if (t0 != -32895) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	volatile int16_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	static int32_t x12 = INT32_MIN;

	t1 = (((x9<=x10)|x11)+x12);

	if (t1 != -2147418113) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MIN;
	static int8_t x16 = INT8_MAX;
	volatile int32_t t2 = -853223;

	t2 = (((x13<=x14)|x15)+x16);

	if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = INT8_MIN;
	uint32_t x18 = UINT32_MAX;
	static int8_t x20 = 19;

	t3 = (((x17<=x18)|x19)+x20);

	if (t3 != 4626U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	static uint32_t x26 = 9197U;
	uint32_t x27 = 130821152U;
	uint64_t x28 = 4102017363300683LLU;
	uint64_t t4 = 15317821LLU;

	t4 = (((x25<=x26)|x27)+x28);

	if (t4 != 4102017494121835LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1;
	int8_t x31 = INT8_MAX;
	static volatile int32_t t5 = 955752;

	t5 = (((x29<=x30)|x31)+x32);

	if (t5 != 354) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	static int8_t x34 = INT8_MAX;
	static int16_t x35 = INT16_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	static uint32_t t6 = 356184U;

	t6 = (((x33<=x34)|x35)+x36);

	if (t6 != 32766U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = 2604221;
	int64_t x38 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = INT64_MAX;
	uint64_t t7 = 1016489LLU;

	t7 = (((x37<=x38)|x39)+x40);

	if (t7 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 0U;
	uint16_t x42 = 1U;
	int16_t x43 = -606;
	int16_t x44 = 104;
	volatile int32_t t8 = 1238294;

	t8 = (((x41<=x42)|x43)+x44);

	if (t8 != -501) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x46 = 3;
	uint32_t x47 = 63U;
	uint32_t x48 = 952U;
	uint32_t t9 = 15828803U;

	t9 = (((x45<=x46)|x47)+x48);

	if (t9 != 1015U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -4172;
	int32_t x50 = -58;
	volatile int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t10 = 21849;

	t10 = (((x49<=x50)|x51)+x52);

	if (t10 != -32895) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = INT16_MAX;
	int16_t x54 = INT16_MAX;
	volatile uint8_t x55 = UINT8_MAX;
	static uint16_t x56 = 30248U;
	volatile int32_t t11 = -3684252;

	t11 = (((x53<=x54)|x55)+x56);

	if (t11 != 30503) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	static volatile uint16_t x58 = 2211U;
	static int64_t x59 = 1185LL;
	uint16_t x60 = 32636U;
	volatile int64_t t12 = 52908LL;

	t12 = (((x57<=x58)|x59)+x60);

	if (t12 != 33821LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x61 = 5U;
	static int8_t x62 = -3;
	static uint32_t x63 = 2244U;
	int64_t x64 = -1LL;
	volatile int64_t t13 = 110LL;

	t13 = (((x61<=x62)|x63)+x64);

	if (t13 != 2243LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1185883;
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = 24;
	volatile int32_t t14 = -51854546;

	t14 = (((x65<=x66)|x67)+x68);

	if (t14 != 65559) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x69 = INT16_MIN;
	uint16_t x70 = 1U;
	int32_t x71 = INT32_MIN;

	t15 = (((x69<=x70)|x71)+x72);

	if (t15 != -2147483392) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = INT32_MIN;
	uint64_t x75 = 2LLU;
	volatile uint32_t x76 = 103U;
	static uint64_t t16 = 498LLU;

	t16 = (((x73<=x74)|x75)+x76);

	if (t16 != 106LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x77 = -240085LL;
	static uint16_t x79 = UINT16_MAX;
	int32_t x80 = -15245;
	volatile int32_t t17 = 0;

	t17 = (((x77<=x78)|x79)+x80);

	if (t17 != 50290) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -5;
	volatile int16_t x82 = -1;
	static uint16_t x83 = UINT16_MAX;
	volatile int16_t x84 = 0;
	volatile int32_t t18 = 1;

	t18 = (((x81<=x82)|x83)+x84);

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = -6624246;
	int8_t x87 = -1;

	t19 = (((x85<=x86)|x87)+x88);

	if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -109140;
	int8_t x91 = INT8_MIN;
	int8_t x92 = 3;
	static int32_t t20 = 8;

	t20 = (((x89<=x90)|x91)+x92);

	if (t20 != -125) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x93 = 510928527941282LL;
	static int32_t x94 = INT32_MIN;
	int16_t x95 = 19;
	static volatile int8_t x96 = 3;
	volatile int32_t t21 = -100;

	t21 = (((x93<=x94)|x95)+x96);

	if (t21 != 22) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = 718;
	int64_t x107 = -1LL;
	int16_t x108 = 1;
	int64_t t22 = 680364LL;

	t22 = (((x105<=x106)|x107)+x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x109 = 6U;
	int16_t x110 = -1;
	volatile int16_t x111 = -1;
	int8_t x112 = INT8_MIN;

	t23 = (((x109<=x110)|x111)+x112);

	if (t23 != -129) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x113 = 0U;
	int32_t x116 = -1;
	static volatile int32_t t24 = 0;

	t24 = (((x113<=x114)|x115)+x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x118 = 1;
	int16_t x119 = INT16_MIN;
	uint32_t t25 = 305U;

	t25 = (((x117<=x118)|x119)+x120);

	if (t25 != 4294935393U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = INT32_MIN;
	uint8_t x122 = 7U;
	int8_t x123 = 33;
	int32_t t26 = -1387853;

	t26 = (((x121<=x122)|x123)+x124);

	if (t26 != -2147483615) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x126 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;

	t27 = (((x125<=x126)|x127)+x128);

	if (t27 != 4294967396LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = -98;
	static int64_t x136 = INT64_MAX;

	t28 = (((x133<=x134)|x135)+x136);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x137 = INT16_MIN;
	volatile uint64_t x138 = 1751665155562774101LLU;
	uint16_t x139 = UINT16_MAX;
	volatile int32_t x140 = -29;

	t29 = (((x137<=x138)|x139)+x140);

	if (t29 != 65506) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = 0;
	int32_t x142 = 1;
	static int8_t x144 = INT8_MIN;

	t30 = (((x141<=x142)|x143)+x144);

	if (t30 != -119) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = 809422972677405LL;
	static int16_t x146 = 5;
	static uint8_t x147 = UINT8_MAX;
	int32_t x148 = 57;
	int32_t t31 = 1;

	t31 = (((x145<=x146)|x147)+x148);

	if (t31 != 312) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = UINT8_MAX;
	uint8_t x150 = 0U;
	static uint8_t x151 = UINT8_MAX;
	volatile int8_t x152 = 3;
	static volatile int32_t t32 = -1362965;

	t32 = (((x149<=x150)|x151)+x152);

	if (t32 != 258) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x154 = INT32_MAX;
	int8_t x155 = -1;
	uint8_t x156 = UINT8_MAX;
	int32_t t33 = 62;

	t33 = (((x153<=x154)|x155)+x156);

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = INT32_MAX;
	int64_t x166 = -1LL;
	volatile int32_t t34 = 42;

	t34 = (((x165<=x166)|x167)+x168);

	if (t34 != 118) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = 22;
	volatile int16_t x170 = -1;
	int16_t x171 = 377;
	int32_t x172 = -9607;

	t35 = (((x169<=x170)|x171)+x172);

	if (t35 != -9230) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int64_t x174 = -1LL;
	static volatile int64_t t36 = -23131419678LL;

	t36 = (((x173<=x174)|x175)+x176);

	if (t36 != -1542765165797911307LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MAX;
	volatile uint32_t x182 = 271U;
	uint32_t x183 = 0U;
	volatile int16_t x184 = INT16_MIN;
	volatile uint32_t t37 = 0U;

	t37 = (((x181<=x182)|x183)+x184);

	if (t37 != 4294934528U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = 116U;
	int8_t x186 = -4;
	int64_t x187 = INT64_MIN;
	volatile int32_t x188 = 0;
	int64_t t38 = INT64_MIN;

	t38 = (((x185<=x186)|x187)+x188);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x189 = 8U;
	int16_t x190 = INT16_MIN;
	int32_t x191 = 71896601;
	int32_t x192 = -1;
	int32_t t39 = 3893;

	t39 = (((x189<=x190)|x191)+x192);

	if (t39 != 71896600) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = 10U;
	static volatile uint32_t x194 = 4U;
	int16_t x195 = -1;
	volatile int64_t x196 = -2LL;
	volatile int64_t t40 = 3LL;

	t40 = (((x193<=x194)|x195)+x196);

	if (t40 != -3LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = 0U;
	int16_t x199 = INT16_MIN;
	static int16_t x200 = INT16_MIN;
	int32_t t41 = 3905;

	t41 = (((x197<=x198)|x199)+x200);

	if (t41 != -65535) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = 1;
	static int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MAX;

	t42 = (((x201<=x202)|x203)+x204);

	if (t42 != 2147483545) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x205 = UINT64_MAX;
	static int8_t x206 = 11;
	int32_t x207 = -1411439;
	volatile uint32_t t43 = 1178127U;

	t43 = (((x205<=x206)|x207)+x208);

	if (t43 != 4293555856U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = -1;
	int32_t x210 = INT32_MAX;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	int64_t t44 = INT64_MIN;

	t44 = (((x209<=x210)|x211)+x212);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x214 = 120U;
	uint32_t x215 = 40612282U;
	uint8_t x216 = 0U;
	volatile uint32_t t45 = 63U;

	t45 = (((x213<=x214)|x215)+x216);

	if (t45 != 40612283U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x217 = UINT64_MAX;
	int64_t x218 = -2547765211610986LL;
	uint8_t x219 = 72U;
	volatile int32_t t46 = 246163;

	t46 = (((x217<=x218)|x219)+x220);

	if (t46 != 22) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x221 = INT8_MIN;
	int64_t x222 = -14668993691LL;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 16252U;
	volatile uint32_t t47 = 1474817467U;

	t47 = (((x221<=x222)|x223)+x224);

	if (t47 != 16251U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x225 = INT8_MIN;
	uint16_t x226 = 5411U;
	volatile int16_t x227 = -2;

	t48 = (((x225<=x226)|x227)+x228);

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = 362;
	int16_t x230 = INT16_MIN;
	int16_t x232 = -1;
	static volatile int32_t t49 = -12830;

	t49 = (((x229<=x230)|x231)+x232);

	if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x238 = -1;
	uint8_t x239 = UINT8_MAX;

	t50 = (((x237<=x238)|x239)+x240);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x241 = UINT8_MAX;
	static volatile uint64_t x243 = 11627282531482082LLU;

	t51 = (((x241<=x242)|x243)+x244);

	if (t51 != 11627282531482085LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x246 = 35159316356612251LLU;
	volatile int32_t x247 = 0;
	static int16_t x248 = INT16_MIN;
	static volatile int32_t t52 = -543;

	t52 = (((x245<=x246)|x247)+x248);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = 1009LLU;
	uint8_t x254 = 9U;
	int16_t x255 = 0;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t53 = 1;

	t53 = (((x253<=x254)|x255)+x256);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x257 = 117422U;
	int8_t x258 = INT8_MIN;
	volatile uint8_t x259 = 2U;
	int32_t t54 = -2621;

	t54 = (((x257<=x258)|x259)+x260);

	if (t54 != -125) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = 51322358;
	int32_t x262 = 29;
	static uint8_t x263 = 0U;
	static volatile int32_t t55 = -31551;

	t55 = (((x261<=x262)|x263)+x264);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x265 = 755;
	int16_t x267 = 13350;

	t56 = (((x265<=x266)|x267)+x268);

	if (t56 != 5627793LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x270 = -1;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MIN;
	volatile int64_t t57 = -8123892LL;

	t57 = (((x269<=x270)|x271)+x272);

	if (t57 != -32769LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x273 = 0U;
	uint8_t x274 = 38U;
	uint8_t x275 = 2U;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t58 = 1;

	t58 = (((x273<=x274)|x275)+x276);

	if (t58 != -125) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = -1;
	int16_t x278 = -1;
	static int64_t x279 = INT64_MIN;
	static volatile int32_t x280 = 44462317;
	volatile int64_t t59 = -25409LL;

	t59 = (((x277<=x278)|x279)+x280);

	if (t59 != -9223372036810313490LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = -10LL;
	static int8_t x283 = 19;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t60 = 665171417;

	t60 = (((x281<=x282)|x283)+x284);

	if (t60 != 274) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x285 = -1LL;
	int8_t x286 = INT8_MIN;
	int16_t x287 = 213;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t61 = -82699603;

	t61 = (((x285<=x286)|x287)+x288);

	if (t61 != 85) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = 13037LLU;
	volatile uint16_t x295 = 1U;
	int16_t x296 = -25;
	int32_t t62 = -6752;

	t62 = (((x293<=x294)|x295)+x296);

	if (t62 != -24) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = INT64_MIN;
	static int16_t x298 = 215;
	uint8_t x299 = UINT8_MAX;
	int32_t t63 = -1;

	t63 = (((x297<=x298)|x299)+x300);

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = -1614;
	int8_t x303 = -1;
	volatile uint64_t t64 = 8233190777LLU;

	t64 = (((x301<=x302)|x303)+x304);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x308 = INT64_MIN;
	int64_t t65 = -245LL;

	t65 = (((x305<=x306)|x307)+x308);

	if (t65 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x309 = 0;
	static int32_t x310 = -3;
	int32_t x311 = INT32_MAX;
	int32_t x312 = INT32_MIN;

	t66 = (((x309<=x310)|x311)+x312);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MAX;
	static int64_t x316 = -1LL;
	volatile int64_t t67 = -256348984203LL;

	t67 = (((x313<=x314)|x315)+x316);

	if (t67 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x317 = INT16_MAX;
	uint32_t x318 = 75U;
	static int64_t x319 = 228683201LL;
	int64_t t68 = 95997218LL;

	t68 = (((x317<=x318)|x319)+x320);

	if (t68 != 2376166848LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = INT64_MAX;
	volatile uint32_t x322 = 15072U;
	uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MIN;

	t69 = (((x321<=x322)|x323)+x324);

	if (t69 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x326 = 24;
	volatile uint8_t x328 = 42U;
	volatile int32_t t70 = -8024;

	t70 = (((x325<=x326)|x327)+x328);

	if (t70 != 32809) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x330 = 44U;
	int16_t x332 = INT16_MIN;

	t71 = (((x329<=x330)|x331)+x332);

	if (t71 != -32705) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = -1;
	volatile uint8_t x334 = 1U;
	volatile uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 6U;

	t72 = (((x333<=x334)|x335)+x336);

	if (t72 != 261) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t t73 = 187486967U;

	t73 = (((x341<=x342)|x343)+x344);

	if (t73 != 16U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x350 = 0U;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t74 = -16756502;

	t74 = (((x349<=x350)|x351)+x352);

	if (t74 != -256) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = UINT64_MAX;
	static volatile int64_t x356 = -1LL;

	t75 = (((x353<=x354)|x355)+x356);

	if (t75 != 65534LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x361 = INT16_MAX;
	static uint16_t x362 = 38U;
	int8_t x364 = -15;
	volatile int32_t t76 = -904;

	t76 = (((x361<=x362)|x363)+x364);

	if (t76 != -32783) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -1;
	volatile uint64_t t77 = 12603413269215589LLU;

	t77 = (((x365<=x366)|x367)+x368);

	if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = -1LL;
	int32_t x370 = INT32_MIN;
	int64_t x372 = INT64_MAX;
	volatile int64_t t78 = -951013468559971LL;

	t78 = (((x369<=x370)|x371)+x372);

	if (t78 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = 2888U;
	int8_t x375 = 1;
	static volatile uint8_t x376 = 0U;
	volatile int32_t t79 = -19745022;

	t79 = (((x373<=x374)|x375)+x376);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x378 = UINT8_MAX;
	uint64_t x379 = UINT64_MAX;
	uint64_t t80 = 3543078LLU;

	t80 = (((x377<=x378)|x379)+x380);

	if (t80 != 126LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = -1;
	static volatile int8_t x382 = INT8_MIN;
	int8_t x383 = -2;
	int32_t x384 = INT32_MAX;
	static volatile int32_t t81 = -11779;

	t81 = (((x381<=x382)|x383)+x384);

	if (t81 != 2147483645) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = -1;
	volatile uint16_t x388 = UINT16_MAX;
	static volatile int32_t t82 = -16;

	t82 = (((x385<=x386)|x387)+x388);

	if (t82 != 85366) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MIN;
	int32_t x391 = -13;
	int8_t x392 = 1;
	int32_t t83 = -16020;

	t83 = (((x389<=x390)|x391)+x392);

	if (t83 != -12) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x393 = -1;
	static uint64_t x395 = 80469211720862832LLU;
	volatile uint64_t t84 = 1000140294953999348LLU;

	t84 = (((x393<=x394)|x395)+x396);

	if (t84 != 80469211720862832LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x405 = 0U;
	int8_t x406 = INT8_MAX;
	volatile int32_t t85 = 15542;

	t85 = (((x405<=x406)|x407)+x408);

	if (t85 != 44) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x410 = 29LLU;
	static int64_t x411 = INT64_MAX;
	static volatile int64_t t86 = -42079018LL;

	t86 = (((x409<=x410)|x411)+x412);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x413 = INT64_MIN;
	int32_t x415 = INT32_MAX;
	uint64_t x416 = 68330042879716LLU;

	t87 = (((x413<=x414)|x415)+x416);

	if (t87 != 68332190363363LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = 2;
	int32_t x418 = INT32_MIN;
	static int32_t x419 = INT32_MIN;
	static volatile int64_t x420 = 5496346710LL;
	int64_t t88 = 346940599LL;

	t88 = (((x417<=x418)|x419)+x420);

	if (t88 != 3348863062LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x426 = 1U;
	int16_t x427 = INT16_MIN;
	int8_t x428 = -46;
	int32_t t89 = -19926875;

	t89 = (((x425<=x426)|x427)+x428);

	if (t89 != -32813) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x429 = 0U;
	uint64_t x430 = UINT64_MAX;
	volatile int16_t x431 = -1;
	static volatile int8_t x432 = INT8_MIN;
	int32_t t90 = 24633192;

	t90 = (((x429<=x430)|x431)+x432);

	if (t90 != -129) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x433 = 106244135973LLU;
	volatile int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	int64_t x436 = 350LL;

	t91 = (((x433<=x434)|x435)+x436);

	if (t91 != -32418LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = -1LL;
	int16_t x438 = -1;
	static uint16_t x439 = 175U;
	uint16_t x440 = 19121U;

	t92 = (((x437<=x438)|x439)+x440);

	if (t92 != 19296) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x441 = UINT64_MAX;
	static uint64_t x442 = UINT64_MAX;
	uint32_t x443 = UINT32_MAX;
	static int8_t x444 = -1;

	t93 = (((x441<=x442)|x443)+x444);

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x446 = 29U;
	int32_t x447 = 12947261;
	volatile int16_t x448 = INT16_MIN;
	int32_t t94 = 176774;

	t94 = (((x445<=x446)|x447)+x448);

	if (t94 != 12914493) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x449 = UINT32_MAX;
	static volatile int8_t x450 = INT8_MIN;
	int16_t x452 = -8874;

	t95 = (((x449<=x450)|x451)+x452);

	if (t95 != -8875) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x453 = INT8_MAX;
	int64_t x454 = INT64_MAX;
	int32_t x455 = 60125;
	int32_t x456 = 42;

	t96 = (((x453<=x454)|x455)+x456);

	if (t96 != 60167) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = INT64_MAX;
	static volatile int8_t x458 = INT8_MAX;
	uint16_t x459 = UINT16_MAX;
	volatile int16_t x460 = INT16_MAX;
	int32_t t97 = 29;

	t97 = (((x457<=x458)|x459)+x460);

	if (t97 != 98302) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = -37;
	int64_t x462 = 1300LL;
	int64_t x463 = -104LL;
	int8_t x464 = INT8_MIN;
	volatile int64_t t98 = -23291599LL;

	t98 = (((x461<=x462)|x463)+x464);

	if (t98 != -231LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x466 = 2698LLU;
	int8_t x467 = INT8_MIN;
	int16_t x468 = INT16_MAX;

	t99 = (((x465<=x466)|x467)+x468);

	if (t99 != 32639) { NG(); } else { ; }
	
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

