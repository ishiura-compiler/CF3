#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 1530LLU;
int32_t x12 = 444261802;
uint32_t x19 = 934U;
int8_t x25 = -1;
int32_t x26 = -427;
int32_t x29 = INT32_MIN;
volatile int64_t x37 = 511364LL;
int64_t t7 = 64266LL;
uint8_t x51 = UINT8_MAX;
uint16_t x58 = 0U;
int16_t x59 = INT16_MIN;
static int32_t t12 = 31517336;
uint64_t x69 = UINT64_MAX;
uint64_t x71 = 27213LLU;
int16_t x72 = INT16_MAX;
int8_t x73 = -50;
volatile int8_t x75 = INT8_MAX;
volatile int32_t t17 = -50516;
int32_t x81 = INT32_MIN;
static uint16_t x89 = 82U;
int8_t x90 = -1;
uint64_t x95 = 1LLU;
static volatile uint64_t t21 = 957063269407024LLU;
int64_t x100 = 117LL;
volatile int64_t x105 = INT64_MAX;
int64_t x108 = INT64_MAX;
volatile int8_t x115 = 15;
volatile int64_t x116 = -1LL;
static int64_t t26 = -496289025594465511LL;
int16_t x119 = INT16_MAX;
uint16_t x122 = 2376U;
uint32_t x124 = 497355506U;
int8_t x129 = -1;
int64_t t32 = -1016007653862057LL;
uint32_t t33 = 2U;
uint8_t x147 = UINT8_MAX;
volatile int16_t x148 = -1;
volatile int32_t t34 = 0;
static volatile int16_t x150 = -78;
int16_t x155 = INT16_MIN;
uint8_t x159 = UINT8_MAX;
int32_t x160 = -1624207;
uint8_t x164 = UINT8_MAX;
int8_t x166 = -7;
volatile uint32_t t39 = 105U;
volatile uint32_t x169 = 171637U;
volatile int32_t x178 = INT32_MAX;
uint16_t x179 = 0U;
static volatile int32_t t42 = -25354;
static uint8_t x185 = 2U;
int8_t x191 = -15;
static uint32_t t46 = 824U;
int8_t x203 = INT8_MAX;
static int64_t x204 = -1LL;
uint8_t x207 = UINT8_MAX;
uint64_t x217 = 219034920544767097LLU;
uint16_t x219 = UINT16_MAX;
static int64_t x222 = 2526433356LL;
uint8_t x223 = UINT8_MAX;
static volatile int32_t t51 = -4682;
int64_t x240 = INT64_MIN;
volatile int64_t x241 = 9457LL;
int32_t x254 = INT32_MAX;
uint64_t x259 = UINT64_MAX;
static uint32_t x273 = UINT32_MAX;
int32_t x277 = INT32_MIN;
uint64_t x279 = 838777LLU;
int32_t x282 = INT32_MIN;
static volatile int32_t t62 = -4;
static int32_t x304 = -1;
static volatile int32_t x306 = INT32_MIN;
uint8_t x308 = 0U;
uint32_t x310 = UINT32_MAX;
uint16_t x319 = 1U;
uint32_t x329 = 13878055U;
volatile uint32_t x333 = 500422U;
uint64_t t71 = 21LLU;
int32_t x345 = INT32_MIN;
int8_t x347 = INT8_MIN;
int16_t x348 = INT16_MIN;
uint8_t x350 = 114U;
uint32_t x355 = 6U;
int32_t x356 = INT32_MAX;
int64_t x361 = 23837847LL;
int64_t x368 = -1LL;
uint64_t t80 = 185186475774LLU;
int8_t x376 = 0;
volatile int32_t x378 = -1;
volatile uint8_t x380 = 0U;
volatile uint32_t x383 = 18072U;
static uint8_t x385 = UINT8_MAX;
static volatile uint32_t x388 = UINT32_MAX;
volatile uint32_t t84 = 357904495U;
int32_t x393 = INT32_MIN;
int64_t x414 = -1LL;
uint64_t x420 = 39549LLU;
int16_t x427 = INT16_MIN;
volatile int32_t t93 = -6073190;
static int8_t x436 = INT8_MIN;
int8_t x441 = INT8_MIN;
int16_t x448 = -373;
static int64_t x453 = -1440290952605360LL;
int32_t t99 = -5514;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	volatile uint16_t x2 = 7871U;
	uint64_t x3 = 27LLU;
	uint32_t x4 = 13579U;

	t0 = (((x1<=x2)*x3)*x4);

	if (t0 != 366633LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	static uint8_t x7 = 0U;
	static int64_t x8 = INT64_MAX;
	volatile int64_t t1 = 21147290560028LL;

	t1 = (((x5<=x6)*x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static int8_t x10 = -1;
	static int32_t x11 = -1;
	static volatile int32_t t2 = -250475;

	t2 = (((x9<=x10)*x11)*x12);

	if (t2 != -444261802) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int16_t x18 = -1;
	volatile int64_t x20 = -1LL;
	int64_t t3 = 3478147LL;

	t3 = (((x17<=x18)*x19)*x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 4;
	int8_t x22 = -1;
	static uint32_t x23 = 0U;
	volatile int32_t x24 = INT32_MAX;
	uint32_t t4 = 1U;

	t4 = (((x21<=x22)*x23)*x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	uint32_t t5 = 40209U;

	t5 = (((x25<=x26)*x27)*x28);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = -21;
	int8_t x31 = INT8_MIN;
	static uint64_t x32 = 7292394LLU;
	volatile uint64_t t6 = 3631308LLU;

	t6 = (((x29<=x30)*x31)*x32);

	if (t6 != 18446744072776125184LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x38 = 0U;
	static int8_t x39 = INT8_MIN;
	static int64_t x40 = -1137439LL;

	t7 = (((x37<=x38)*x39)*x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = 5U;
	int32_t x42 = 901;
	volatile int64_t x43 = INT64_MIN;
	uint64_t x44 = 11343515292059LLU;
	uint64_t t8 = 630910488LLU;

	t8 = (((x41<=x42)*x43)*x44);

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -15LL;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 12U;
	static volatile uint64_t t9 = 6LLU;

	t9 = (((x45<=x46)*x47)*x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = 2238U;
	volatile int32_t x50 = -1;
	int16_t x52 = INT16_MIN;
	int32_t t10 = -2096;

	t10 = (((x49<=x50)*x51)*x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x53 = 3U;
	static int32_t x54 = INT32_MAX;
	uint32_t x55 = 339692U;
	volatile int8_t x56 = INT8_MIN;
	uint32_t t11 = 123101U;

	t11 = (((x53<=x54)*x55)*x56);

	if (t11 != 4251486720U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x57 = UINT64_MAX;
	volatile uint8_t x60 = 119U;

	t12 = (((x57<=x58)*x59)*x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	volatile uint32_t x62 = 706425U;
	int8_t x63 = INT8_MIN;
	static int64_t x64 = INT64_MIN;
	int64_t t13 = 216126LL;

	t13 = (((x61<=x62)*x63)*x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 38U;
	uint8_t x66 = 28U;
	int64_t x67 = INT64_MAX;
	static int8_t x68 = 0;
	int64_t t14 = 1809042345LL;

	t14 = (((x65<=x66)*x67)*x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x70 = 36461LLU;
	volatile uint64_t t15 = 1196424775586547529LLU;

	t15 = (((x69<=x70)*x71)*x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x74 = -1;
	int8_t x76 = -1;
	static volatile int32_t t16 = 49;

	t16 = (((x73<=x74)*x75)*x76);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	volatile int32_t x78 = INT32_MAX;
	volatile int8_t x79 = 1;
	static uint16_t x80 = 60U;

	t17 = (((x77<=x78)*x79)*x80);

	if (t17 != 60) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = INT16_MIN;
	int32_t x83 = -1;
	static int8_t x84 = -1;
	int32_t t18 = 8;

	t18 = (((x81<=x82)*x83)*x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 167U;
	uint32_t x86 = 48684U;
	volatile uint64_t x87 = 385198LLU;
	uint8_t x88 = UINT8_MAX;
	uint64_t t19 = 11579879386LLU;

	t19 = (((x85<=x86)*x87)*x88);

	if (t19 != 98225490LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x91 = -1;
	static int64_t x92 = INT64_MAX;
	static volatile int64_t t20 = 29807657966752LL;

	t20 = (((x89<=x90)*x91)*x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x93 = UINT64_MAX;
	static uint16_t x94 = UINT16_MAX;
	int32_t x96 = -1;

	t21 = (((x93<=x94)*x95)*x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 4400657625049228LLU;
	int32_t x98 = INT32_MIN;
	static int16_t x99 = -1;
	int64_t t22 = -2161947753531918445LL;

	t22 = (((x97<=x98)*x99)*x100);

	if (t22 != -117LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -13;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 9822U;
	static int16_t x104 = INT16_MIN;
	int32_t t23 = -113;

	t23 = (((x101<=x102)*x103)*x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x106 = 1U;
	static uint64_t x107 = 4338285LLU;
	static volatile uint64_t t24 = 8956615004602827LLU;

	t24 = (((x105<=x106)*x107)*x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -9118809;
	volatile uint8_t x110 = UINT8_MAX;
	int16_t x111 = INT16_MIN;
	static volatile int8_t x112 = INT8_MIN;
	volatile int32_t t25 = -967561749;

	t25 = (((x109<=x110)*x111)*x112);

	if (t25 != 4194304) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MIN;
	int32_t x114 = INT32_MIN;

	t26 = (((x113<=x114)*x115)*x116);

	if (t26 != -15LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MIN;
	uint8_t x120 = 0U;
	volatile int32_t t27 = -812061787;

	t27 = (((x117<=x118)*x119)*x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 1057148LLU;
	volatile int64_t x123 = INT64_MIN;
	int64_t t28 = -11044LL;

	t28 = (((x121<=x122)*x123)*x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MIN;
	uint64_t x127 = 53248309369800841LLU;
	int64_t x128 = -1LL;
	uint64_t t29 = 43818597LLU;

	t29 = (((x125<=x126)*x127)*x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x130 = 1300245U;
	static int16_t x131 = 788;
	static uint64_t x132 = 44199916060103LLU;
	volatile uint64_t t30 = 94897766179LLU;

	t30 = (((x129<=x130)*x131)*x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 1664U;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = -1LL;
	int16_t x136 = INT16_MIN;
	static int64_t t31 = 4321389445920566LL;

	t31 = (((x133<=x134)*x135)*x136);

	if (t31 != 32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	volatile int64_t x139 = -1LL;
	static int8_t x140 = 35;

	t32 = (((x137<=x138)*x139)*x140);

	if (t32 != -35LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 1948U;
	uint32_t x142 = 74U;
	static volatile uint32_t x143 = 10344343U;
	uint16_t x144 = 2388U;

	t33 = (((x141<=x142)*x143)*x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = INT16_MIN;
	static int64_t x146 = -1LL;

	t34 = (((x145<=x146)*x147)*x148);

	if (t34 != -255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -99169695756279LL;
	static int32_t x151 = INT32_MIN;
	volatile uint64_t x152 = UINT64_MAX;
	uint64_t t35 = 91034329LLU;

	t35 = (((x149<=x150)*x151)*x152);

	if (t35 != 2147483648LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int64_t x156 = INT64_MAX;
	int64_t t36 = 201257600076269LL;

	t36 = (((x153<=x154)*x155)*x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 1LLU;
	int8_t x158 = -1;
	static volatile int32_t t37 = -50;

	t37 = (((x157<=x158)*x159)*x160);

	if (t37 != -414172785) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x162 = -1;
	volatile uint16_t x163 = 1365U;
	int32_t t38 = 0;

	t38 = (((x161<=x162)*x163)*x164);

	if (t38 != 348075) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -47;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MIN;

	t39 = (((x165<=x166)*x167)*x168);

	if (t39 != 32768U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x170 = 21U;
	int64_t x171 = -1LL;
	static int32_t x172 = INT32_MIN;
	volatile int64_t t40 = 867232212LL;

	t40 = (((x169<=x170)*x171)*x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 1479U;
	int64_t x174 = INT64_MIN;
	static int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MAX;
	static volatile int64_t t41 = 27103LL;

	t41 = (((x173<=x174)*x175)*x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x177 = 2U;
	int8_t x180 = INT8_MAX;

	t42 = (((x177<=x178)*x179)*x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x186 = 299U;
	static volatile int8_t x187 = INT8_MIN;
	static int16_t x188 = INT16_MAX;
	static volatile int32_t t43 = -10;

	t43 = (((x185<=x186)*x187)*x188);

	if (t43 != -4194176) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 59453919385627LLU;
	uint32_t x190 = UINT32_MAX;
	static int8_t x192 = INT8_MAX;
	volatile int32_t t44 = -1329381;

	t44 = (((x189<=x190)*x191)*x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = INT64_MAX;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 0U;
	int16_t x196 = 0;
	static int32_t t45 = 2184;

	t45 = (((x193<=x194)*x195)*x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 580U;
	uint32_t x199 = 14U;
	static int16_t x200 = 234;

	t46 = (((x197<=x198)*x199)*x200);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 1U;
	uint8_t x202 = 62U;
	int64_t t47 = 554324447522825281LL;

	t47 = (((x201<=x202)*x203)*x204);

	if (t47 != -127LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x205 = 1;
	static volatile int16_t x206 = -29;
	static int32_t x208 = INT32_MIN;
	int32_t t48 = -1;

	t48 = (((x205<=x206)*x207)*x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x209 = 19U;
	uint16_t x210 = 395U;
	uint64_t x211 = UINT64_MAX;
	static int16_t x212 = -1;
	static uint64_t t49 = 25224LLU;

	t49 = (((x209<=x210)*x211)*x212);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x218 = INT16_MAX;
	static int64_t x220 = 14602378726968095LL;
	int64_t t50 = 255537LL;

	t50 = (((x217<=x218)*x219)*x220);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 31U;
	uint16_t x224 = 924U;

	t51 = (((x221<=x222)*x223)*x224);

	if (t51 != 235620) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x229 = INT64_MAX;
	int16_t x230 = 3893;
	static volatile uint8_t x231 = 46U;
	static uint8_t x232 = UINT8_MAX;
	static int32_t t52 = 64;

	t52 = (((x229<=x230)*x231)*x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 23288U;
	volatile uint8_t x234 = 57U;
	int32_t x235 = 1;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t53 = 32U;

	t53 = (((x233<=x234)*x235)*x236);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x237 = 0U;
	int64_t x238 = -1062182525LL;
	int64_t x239 = -824729LL;
	static volatile int64_t t54 = 879LL;

	t54 = (((x237<=x238)*x239)*x240);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x242 = -42;
	int8_t x243 = -1;
	volatile uint8_t x244 = 0U;
	int32_t t55 = 2753688;

	t55 = (((x241<=x242)*x243)*x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = -1;
	int8_t x246 = INT8_MAX;
	volatile uint8_t x247 = UINT8_MAX;
	static int16_t x248 = -1;
	volatile int32_t t56 = -1091;

	t56 = (((x245<=x246)*x247)*x248);

	if (t56 != -255) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = -1;
	int8_t x255 = INT8_MIN;
	volatile int16_t x256 = INT16_MAX;
	int32_t t57 = -484996045;

	t57 = (((x253<=x254)*x255)*x256);

	if (t57 != -4194176) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x257 = 10196445372818LLU;
	static int64_t x258 = INT64_MIN;
	int8_t x260 = 1;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x257<=x258)*x259)*x260);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = 1278231676594973LLU;
	int8_t x271 = -1;
	int64_t x272 = -1LL;
	static int64_t t59 = -83LL;

	t59 = (((x269<=x270)*x271)*x272);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x274 = 26651;
	int32_t x275 = 145474740;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t60 = 1790;

	t60 = (((x273<=x274)*x275)*x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x278 = -31727LL;
	uint64_t x280 = 0LLU;
	static volatile uint64_t t61 = 4232898054793613772LLU;

	t61 = (((x277<=x278)*x279)*x280);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int32_t x283 = INT32_MAX;
	int8_t x284 = 3;

	t62 = (((x281<=x282)*x283)*x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = 14;
	static uint8_t x295 = UINT8_MAX;
	int16_t x296 = 50;
	static volatile int32_t t63 = -35742;

	t63 = (((x293<=x294)*x295)*x296);

	if (t63 != 12750) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MAX;
	int8_t x298 = -1;
	int16_t x299 = INT16_MIN;
	volatile int64_t x300 = 0LL;
	volatile int64_t t64 = 132340335738LL;

	t64 = (((x297<=x298)*x299)*x300);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = -1383;
	int64_t x302 = INT64_MIN;
	static uint32_t x303 = 181488U;
	uint32_t t65 = 63U;

	t65 = (((x301<=x302)*x303)*x304);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = -1;
	int8_t x307 = -1;
	volatile int32_t t66 = 1;

	t66 = (((x305<=x306)*x307)*x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x309 = -7306;
	static uint8_t x311 = UINT8_MAX;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t67 = 14;

	t67 = (((x309<=x310)*x311)*x312);

	if (t67 != -32640) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x317 = 12U;
	uint8_t x318 = 18U;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t68 = 162487736;

	t68 = (((x317<=x318)*x319)*x320);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = -3;
	int8_t x322 = -5;
	int8_t x323 = INT8_MAX;
	volatile int16_t x324 = -1;
	int32_t t69 = -318;

	t69 = (((x321<=x322)*x323)*x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x330 = 3U;
	uint64_t x331 = UINT64_MAX;
	static int8_t x332 = INT8_MIN;
	uint64_t t70 = 86906LLU;

	t70 = (((x329<=x330)*x331)*x332);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x334 = 31U;
	uint8_t x335 = 6U;
	uint64_t x336 = 67693366209LLU;

	t71 = (((x333<=x334)*x335)*x336);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x337 = 25;
	int32_t x338 = INT32_MIN;
	int64_t x339 = -1LL;
	int8_t x340 = INT8_MIN;
	int64_t t72 = -3227LL;

	t72 = (((x337<=x338)*x339)*x340);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = -1;
	volatile uint8_t x342 = UINT8_MAX;
	int64_t x343 = INT64_MIN;
	volatile uint8_t x344 = 1U;
	static int64_t t73 = INT64_MIN;

	t73 = (((x341<=x342)*x343)*x344);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x346 = 33;
	static volatile int32_t t74 = -163032124;

	t74 = (((x345<=x346)*x347)*x348);

	if (t74 != 4194304) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = 41LL;
	static int16_t x351 = 3;
	uint32_t x352 = 41U;
	volatile uint32_t t75 = 230U;

	t75 = (((x349<=x350)*x351)*x352);

	if (t75 != 123U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x353 = INT32_MIN;
	volatile int32_t x354 = 1023745;
	volatile uint32_t t76 = 117U;

	t76 = (((x353<=x354)*x355)*x356);

	if (t76 != 4294967290U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	volatile int64_t x358 = INT64_MIN;
	int32_t x359 = -1;
	int8_t x360 = -60;
	volatile int32_t t77 = -5566902;

	t77 = (((x357<=x358)*x359)*x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x362 = 33025088;
	int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = 10707U;
	uint32_t t78 = 10U;

	t78 = (((x361<=x362)*x363)*x364);

	if (t78 != 4293596800U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = 264533;
	int16_t x367 = -15930;
	int64_t t79 = 242920084474771LL;

	t79 = (((x365<=x366)*x367)*x368);

	if (t79 != 15930LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x369 = UINT32_MAX;
	uint32_t x370 = 13073U;
	volatile uint64_t x371 = UINT64_MAX;
	static uint16_t x372 = 128U;

	t80 = (((x369<=x370)*x371)*x372);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = 15;
	int32_t x374 = -1;
	uint16_t x375 = 770U;
	int32_t t81 = 4082;

	t81 = (((x373<=x374)*x375)*x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x377 = -1LL;
	int16_t x379 = INT16_MIN;
	int32_t t82 = -1572490;

	t82 = (((x377<=x378)*x379)*x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = 392984521U;
	uint16_t x382 = 78U;
	volatile uint16_t x384 = UINT16_MAX;
	static volatile uint32_t t83 = 168U;

	t83 = (((x381<=x382)*x383)*x384);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x386 = -1;
	volatile int8_t x387 = -1;

	t84 = (((x385<=x386)*x387)*x388);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = -7702594;
	int32_t x390 = -126364796;
	static int32_t x391 = -1;
	volatile int64_t x392 = INT64_MIN;
	int64_t t85 = 179212537258LL;

	t85 = (((x389<=x390)*x391)*x392);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x394 = -873;
	int16_t x395 = INT16_MAX;
	uint32_t x396 = 1522450764U;
	volatile uint32_t t86 = 12147U;

	t86 = (((x393<=x394)*x395)*x396);

	if (t86 != 99040948U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = 1;
	int8_t x402 = INT8_MIN;
	uint32_t x403 = 70U;
	int8_t x404 = -1;
	uint32_t t87 = 332U;

	t87 = (((x401<=x402)*x403)*x404);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x405 = UINT64_MAX;
	static int64_t x406 = INT64_MIN;
	static int16_t x407 = -1;
	static volatile int64_t x408 = INT64_MIN;
	volatile int64_t t88 = 7654159150349LL;

	t88 = (((x405<=x406)*x407)*x408);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = INT64_MAX;
	int16_t x410 = INT16_MIN;
	uint8_t x411 = 1U;
	static int16_t x412 = INT16_MAX;
	volatile int32_t t89 = 238807;

	t89 = (((x409<=x410)*x411)*x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x413 = INT64_MAX;
	volatile int64_t x415 = -1067927987434382LL;
	int8_t x416 = -1;
	static int64_t t90 = 130099LL;

	t90 = (((x413<=x414)*x415)*x416);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int16_t x418 = 14;
	int32_t x419 = 18;
	uint64_t t91 = 117990991842612LLU;

	t91 = (((x417<=x418)*x419)*x420);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = INT64_MIN;
	int64_t x422 = INT64_MAX;
	uint64_t x423 = UINT64_MAX;
	int64_t x424 = INT64_MIN;
	uint64_t t92 = 1LLU;

	t92 = (((x421<=x422)*x423)*x424);

	if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = INT64_MIN;
	int16_t x426 = INT16_MIN;
	int16_t x428 = INT16_MAX;

	t93 = (((x425<=x426)*x427)*x428);

	if (t93 != -1073709056) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x433 = INT64_MIN;
	int64_t x434 = -20111243650841LL;
	static int16_t x435 = INT16_MAX;
	static volatile int32_t t94 = 184140;

	t94 = (((x433<=x434)*x435)*x436);

	if (t94 != -4194176) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x437 = 5U;
	int64_t x438 = -280022249LL;
	uint32_t x439 = 6U;
	int8_t x440 = INT8_MAX;
	volatile uint32_t t95 = 372U;

	t95 = (((x437<=x438)*x439)*x440);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MIN;
	uint16_t x444 = 3533U;
	volatile int64_t t96 = 8023093LL;

	t96 = (((x441<=x442)*x443)*x444);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MAX;
	uint32_t x447 = 39U;
	volatile uint32_t t97 = 17U;

	t97 = (((x445<=x446)*x447)*x448);

	if (t97 != 4294952749U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x449 = UINT16_MAX;
	static int8_t x450 = INT8_MIN;
	int32_t x451 = 3605;
	int16_t x452 = INT16_MAX;
	static int32_t t98 = 855196898;

	t98 = (((x449<=x450)*x451)*x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x454 = -1286;
	uint8_t x455 = 0U;
	volatile int8_t x456 = -9;

	t99 = (((x453<=x454)*x455)*x456);

	if (t99 != 0) { NG(); } else { ; }
	
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

