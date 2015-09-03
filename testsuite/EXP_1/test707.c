#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = 17520733352LLU;
int16_t x21 = INT16_MIN;
int8_t x26 = 4;
int32_t x27 = -1;
uint16_t x31 = UINT16_MAX;
int16_t x37 = -1961;
volatile int32_t x41 = INT32_MIN;
int64_t x46 = INT64_MIN;
int64_t x51 = -1LL;
static volatile uint16_t x62 = 12U;
static volatile uint8_t x67 = 4U;
static int32_t x70 = -930;
int64_t x74 = INT64_MIN;
uint8_t x75 = 3U;
uint8_t x97 = 3U;
static volatile int32_t x107 = INT32_MAX;
volatile int16_t x119 = INT16_MIN;
uint8_t x120 = 25U;
int16_t x121 = -1;
int8_t x123 = INT8_MAX;
volatile uint64_t t24 = 23490584LLU;
int32_t x130 = INT32_MIN;
uint16_t x133 = UINT16_MAX;
volatile int64_t t28 = -362867344043767LL;
int32_t x146 = INT32_MIN;
uint64_t x151 = 4542394856630601386LLU;
int32_t t32 = 716;
int64_t x164 = INT64_MAX;
int64_t x168 = -1LL;
int64_t x172 = -4318LL;
int64_t t36 = -86LL;
int8_t x187 = INT8_MIN;
uint64_t t38 = 4308958517554929LLU;
uint8_t x195 = 3U;
int16_t x196 = -1;
int8_t x206 = -6;
static int8_t x210 = INT8_MAX;
int16_t x215 = INT16_MIN;
int8_t x220 = INT8_MIN;
int8_t x222 = INT8_MIN;
uint8_t x223 = 1U;
volatile uint64_t x230 = 1825096LLU;
uint64_t t47 = 593653434LLU;
int64_t x236 = 4719LL;
int64_t t48 = -374818061616716LL;
int16_t x243 = INT16_MIN;
uint64_t x248 = UINT64_MAX;
volatile int8_t x250 = INT8_MIN;
int16_t x252 = -1;
uint64_t t52 = 197545301928142999LLU;
int64_t x253 = INT64_MAX;
volatile int8_t x263 = INT8_MIN;
int64_t t55 = 108645448290141LL;
static uint64_t x280 = 585853594017588LLU;
uint64_t t57 = 31860220274254LLU;
int32_t x281 = INT32_MAX;
uint16_t x288 = 783U;
int16_t x290 = -1;
uint64_t t60 = 11LLU;
uint32_t x293 = UINT32_MAX;
volatile int16_t x295 = -1;
int8_t x297 = -1;
volatile int32_t x300 = -1;
int32_t x309 = INT32_MAX;
uint8_t x319 = UINT8_MAX;
int64_t x320 = INT64_MIN;
int32_t x325 = INT32_MIN;
int16_t x327 = -1;
volatile int32_t x336 = INT32_MAX;
int16_t x337 = 1926;
int32_t x338 = INT32_MAX;
static volatile int32_t x340 = 824840;
uint32_t t71 = 567185878U;
volatile int64_t t72 = 2135066LL;
volatile int8_t x351 = 2;
int32_t t75 = 1500;
volatile int8_t x363 = INT8_MAX;
volatile int64_t t76 = -30LL;
static volatile uint16_t x374 = UINT16_MAX;
uint8_t x382 = 47U;
static uint8_t x384 = 66U;
static uint8_t x386 = 1U;
uint64_t x388 = UINT64_MAX;
volatile int8_t x390 = INT8_MIN;
int16_t x391 = INT16_MIN;
uint32_t x404 = 8032686U;
volatile uint64_t t86 = 149537506985LLU;
int16_t x411 = INT16_MIN;
int64_t x414 = INT64_MAX;
volatile uint32_t t91 = 18268678U;
volatile uint8_t x432 = 1U;
volatile int64_t x433 = INT64_MAX;
int64_t t93 = 68361504635271008LL;
static int8_t x440 = INT8_MIN;
volatile uint8_t x444 = UINT8_MAX;
uint32_t x453 = 647U;
volatile int16_t x463 = -6;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = -6390LL;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = -1571806618582783433LL;

	t0 = (((x1%x2)*x3)%x4);

	if (t0 != -209381130LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x10 = 358727117;
	uint16_t x11 = 0U;
	uint32_t x12 = 1248522231U;
	uint64_t t1 = 381239049211706079LLU;

	t1 = (((x9%x10)*x11)%x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	static int16_t x14 = -113;
	int16_t x15 = 7550;
	uint8_t x16 = 48U;
	int64_t t2 = -537881224780LL;

	t2 = (((x13%x14)*x15)%x16);

	if (t2 != -14LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x22 = -504482455;
	uint8_t x23 = 43U;
	int8_t x24 = INT8_MAX;
	int32_t t3 = 495;

	t3 = (((x21%x22)*x23)%x24);

	if (t3 != -86) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = -1LL;
	int16_t x28 = -1;
	int64_t t4 = 934918077LL;

	t4 = (((x25%x26)*x27)%x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 6955816877266051746LLU;
	uint8_t x30 = UINT8_MAX;
	int32_t x32 = INT32_MIN;
	uint64_t t5 = 253696862576LLU;

	t5 = (((x29%x30)*x31)%x32);

	if (t5 != 1376235LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = -7LL;
	uint64_t x34 = 743099361653027799LLU;
	int32_t x35 = INT32_MIN;
	int16_t x36 = 7475;
	volatile uint64_t t6 = 125LLU;

	t6 = (((x33%x34)*x35)%x36);

	if (t6 != 7322LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x38 = -1;
	int32_t x39 = -1;
	int32_t x40 = -1;
	int32_t t7 = 7023;

	t7 = (((x37%x38)*x39)%x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = 63995913U;
	volatile int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	uint32_t t8 = 171854051U;

	t8 = (((x41%x42)*x43)%x44);

	if (t8 != 228584617U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 86U;
	static uint32_t x47 = 106540827U;
	int32_t x48 = 8353;
	int64_t t9 = 2LL;

	t9 = (((x45%x46)*x47)%x48);

	if (t9 != 5186LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = 1LLU;
	int8_t x50 = INT8_MIN;
	int16_t x52 = 139;
	uint64_t t10 = 704LLU;

	t10 = (((x49%x50)*x51)%x52);

	if (t10 != 12LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x53 = INT64_MAX;
	volatile int32_t x54 = 38;
	volatile uint8_t x55 = UINT8_MAX;
	volatile uint32_t x56 = 2U;
	volatile int64_t t11 = 124360550LL;

	t11 = (((x53%x54)*x55)%x56);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = UINT64_MAX;
	uint8_t x58 = UINT8_MAX;
	uint8_t x59 = 6U;
	uint16_t x60 = UINT16_MAX;
	uint64_t t12 = 2LLU;

	t12 = (((x57%x58)*x59)%x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 7;
	int32_t x63 = -1;
	int32_t x64 = 67;
	int32_t t13 = -8746830;

	t13 = (((x61%x62)*x63)%x64);

	if (t13 != -7) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 4LL;
	static int64_t x66 = INT64_MIN;
	uint16_t x68 = 6889U;
	int64_t t14 = 91161341368053036LL;

	t14 = (((x65%x66)*x67)%x68);

	if (t14 != 16LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 65U;
	int8_t x71 = INT8_MIN;
	int32_t x72 = -238090457;
	int32_t t15 = -12301356;

	t15 = (((x69%x70)*x71)%x72);

	if (t15 != -8320) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	int64_t x76 = INT64_MAX;
	int64_t t16 = 243226469LL;

	t16 = (((x73%x74)*x75)%x76);

	if (t16 != -3LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	volatile int32_t x83 = 1;
	int32_t x84 = INT32_MIN;
	static int64_t t17 = 6107415021009781LL;

	t17 = (((x81%x82)*x83)%x84);

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = INT16_MAX;
	static uint8_t x86 = 2U;
	uint16_t x87 = 816U;
	uint8_t x88 = UINT8_MAX;
	int32_t t18 = -252135832;

	t18 = (((x85%x86)*x87)%x88);

	if (t18 != 51) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	volatile uint64_t x94 = 24116116835704LLU;
	int64_t x95 = 2944273351526867LL;
	int64_t x96 = -1LL;
	volatile uint64_t t19 = 8304670318375874556LLU;

	t19 = (((x93%x94)*x95)%x96);

	if (t19 != 11611759393184918680LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x98 = UINT32_MAX;
	volatile uint32_t x99 = UINT32_MAX;
	int32_t x100 = -1;
	static volatile uint32_t t20 = 90U;

	t20 = (((x97%x98)*x99)%x100);

	if (t20 != 4294967293U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = 166LL;
	int64_t x106 = INT64_MIN;
	static int32_t x108 = 49;
	int64_t t21 = 7622835162LL;

	t21 = (((x105%x106)*x107)%x108);

	if (t21 != 33LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	volatile int32_t x114 = INT32_MIN;
	static uint64_t x115 = UINT64_MAX;
	int16_t x116 = -7263;
	uint64_t t22 = 19LLU;

	t22 = (((x113%x114)*x115)%x116);

	if (t22 != 32768LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = -1;
	volatile int8_t x118 = INT8_MIN;
	volatile int32_t t23 = 0;

	t23 = (((x117%x118)*x119)%x120);

	if (t23 != 18) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x122 = -1;
	uint64_t x124 = 15914LLU;

	t24 = (((x121%x122)*x123)%x124);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x125 = -1;
	int16_t x126 = INT16_MAX;
	volatile uint32_t x127 = 227U;
	int8_t x128 = INT8_MIN;
	volatile uint32_t t25 = 14961U;

	t25 = (((x125%x126)*x127)%x128);

	if (t25 != 4294967069U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x131 = 45U;
	static volatile uint64_t x132 = 3649542936698697315LLU;
	uint64_t t26 = 251843419876183LLU;

	t26 = (((x129%x130)*x131)%x132);

	if (t26 != 96636764115LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x134 = 27677785027739LLU;
	volatile int16_t x135 = 5;
	int8_t x136 = INT8_MIN;
	uint64_t t27 = 61823LLU;

	t27 = (((x133%x134)*x135)%x136);

	if (t27 != 327675LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = 51U;
	int8_t x139 = INT8_MIN;
	static int32_t x140 = INT32_MIN;

	t28 = (((x137%x138)*x139)%x140);

	if (t28 != 3328LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -39;
	uint32_t x142 = 33136U;
	static uint16_t x143 = UINT16_MAX;
	int16_t x144 = 7267;
	uint32_t t29 = 9U;

	t29 = (((x141%x142)*x143)%x144);

	if (t29 != 3956U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x145 = 1197797676727LLU;
	uint8_t x147 = UINT8_MAX;
	static int32_t x148 = -1397821;
	volatile uint64_t t30 = 268342861854LLU;

	t30 = (((x145%x146)*x147)%x148);

	if (t30 != 305438407565385LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -12902887;
	int32_t x150 = -32051102;
	static int16_t x152 = INT16_MAX;
	volatile uint64_t t31 = 1261565524423641LLU;

	t31 = (((x149%x150)*x151)%x152);

	if (t31 != 10006LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	volatile int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	static int16_t x156 = INT16_MAX;

	t32 = (((x153%x154)*x155)%x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x157 = INT8_MAX;
	int16_t x158 = INT16_MAX;
	volatile int8_t x159 = 1;
	volatile int16_t x160 = -1;
	static int32_t t33 = 605;

	t33 = (((x157%x158)*x159)%x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = -1;
	static uint64_t x162 = 4584LLU;
	int16_t x163 = -1;
	static uint64_t t34 = 6LLU;

	t34 = (((x161%x162)*x163)%x164);

	if (t34 != 9223372036854773874LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	volatile uint32_t x166 = UINT32_MAX;
	uint32_t x167 = 2U;
	static int64_t t35 = -45987711557LL;

	t35 = (((x165%x166)*x167)%x168);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 31U;
	int32_t x170 = 63680;
	int8_t x171 = 23;

	t36 = (((x169%x170)*x171)%x172);

	if (t36 != 713LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	int32_t t37 = 79;

	t37 = (((x185%x186)*x187)%x188);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x189 = 28769162140559388LLU;
	uint32_t x190 = 7180U;
	int16_t x191 = -1;
	volatile int16_t x192 = INT16_MIN;

	t38 = (((x189%x190)*x191)%x192);

	if (t38 != 29680LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x193 = INT32_MIN;
	volatile int8_t x194 = INT8_MAX;
	volatile int32_t t39 = -139;

	t39 = (((x193%x194)*x195)%x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x197 = -67262;
	static volatile int8_t x198 = -10;
	uint64_t x199 = 3609079643984841111LLU;
	static volatile int8_t x200 = -1;
	volatile uint64_t t40 = 5530794229708268195LLU;

	t40 = (((x197%x198)*x199)%x200);

	if (t40 != 11228584785739869394LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = -3;
	volatile int32_t x202 = INT32_MIN;
	uint64_t x203 = 1LLU;
	static int16_t x204 = -3045;
	volatile uint64_t t41 = 6758588071371LLU;

	t41 = (((x201%x202)*x203)%x204);

	if (t41 != 3042LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x205 = INT8_MAX;
	int32_t x207 = INT32_MIN;
	volatile int8_t x208 = -1;
	volatile int32_t t42 = 236;

	t42 = (((x205%x206)*x207)%x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x209 = 1978718283U;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile uint32_t t43 = 1933418725U;

	t43 = (((x209%x210)*x211)%x212);

	if (t43 != 70U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int16_t x214 = -1;
	uint8_t x216 = 86U;
	volatile int32_t t44 = 178;

	t44 = (((x213%x214)*x215)%x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x217 = -1;
	int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MAX;
	int64_t t45 = -1840523728077LL;

	t45 = (((x217%x218)*x219)%x220);

	if (t45 != -127LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x221 = 0;
	int32_t x224 = -1;
	static int32_t t46 = 29305242;

	t46 = (((x221%x222)*x223)%x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MIN;
	int8_t x231 = -1;
	uint16_t x232 = 31540U;

	t47 = (((x229%x230)*x231)%x232);

	if (t47 != 22400LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = 1310703676761483516LL;
	int16_t x234 = INT16_MIN;
	static int32_t x235 = 56030;

	t48 = (((x233%x234)*x235)%x236);

	if (t48 != 2054LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = -168630;
	static volatile uint16_t x238 = 434U;
	uint16_t x239 = 6U;
	volatile uint16_t x240 = UINT16_MAX;
	int32_t t49 = 2;

	t49 = (((x237%x238)*x239)%x240);

	if (t49 != -1428) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MIN;
	int64_t x244 = -110391312860049767LL;
	volatile int64_t t50 = 31LL;

	t50 = (((x241%x242)*x243)%x244);

	if (t50 != -1073709056LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x245 = INT64_MIN;
	int16_t x246 = -395;
	int32_t x247 = -674069;
	static uint64_t t51 = 285LLU;

	t51 = (((x245%x246)*x247)%x248);

	if (t51 != 150317387LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = UINT64_MAX;
	static uint8_t x251 = UINT8_MAX;

	t52 = (((x249%x250)*x251)%x252);

	if (t52 != 32385LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x254 = INT32_MIN;
	static int16_t x255 = -1;
	volatile int32_t x256 = 72244;
	volatile int64_t t53 = 264839847567461LL;

	t53 = (((x253%x254)*x255)%x256);

	if (t53 != -30747LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MIN;
	static uint16_t x262 = 294U;
	volatile int64_t x264 = -1LL;
	static int64_t t54 = -23579LL;

	t54 = (((x261%x262)*x263)%x264);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = 36;
	int32_t x266 = -1;
	volatile uint32_t x267 = 2U;
	static int64_t x268 = INT64_MIN;

	t55 = (((x265%x266)*x267)%x268);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = 109486LLU;
	int8_t x271 = INT8_MAX;
	int8_t x272 = -16;
	volatile uint64_t t56 = 533614545851LLU;

	t56 = (((x269%x270)*x271)%x272);

	if (t56 != 8805418LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = -1LL;
	int64_t x278 = 1LL;
	int32_t x279 = -64981104;

	t57 = (((x277%x278)*x279)%x280);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x282 = INT16_MAX;
	int64_t x283 = 0LL;
	int32_t x284 = INT32_MIN;
	static volatile int64_t t58 = -4038LL;

	t58 = (((x281%x282)*x283)%x284);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = -1;
	int64_t x286 = INT64_MIN;
	volatile uint64_t x287 = 1931457894947LLU;
	uint64_t t59 = 34173734820846LLU;

	t59 = (((x285%x286)*x287)%x288);

	if (t59 != 764LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x289 = 0LLU;
	int64_t x291 = -6577479425808135LL;
	int16_t x292 = -13941;

	t60 = (((x289%x290)*x291)%x292);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x294 = UINT32_MAX;
	int8_t x296 = INT8_MAX;
	volatile uint32_t t61 = 265487079U;

	t61 = (((x293%x294)*x295)%x296);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x298 = INT32_MIN;
	volatile int16_t x299 = INT16_MAX;
	int32_t t62 = 1715479;

	t62 = (((x297%x298)*x299)%x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = INT32_MAX;
	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	int32_t x304 = 110981714;
	volatile int32_t t63 = 333943;

	t63 = (((x301%x302)*x303)%x304);

	if (t63 != -16256) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x310 = 45322;
	int32_t x311 = -1187;
	volatile int64_t x312 = INT64_MAX;
	static volatile int64_t t64 = 7303LL;

	t64 = (((x309%x310)*x311)%x312);

	if (t64 != -43495241LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MAX;
	volatile int16_t x315 = INT16_MIN;
	static int32_t x316 = 32328;
	int64_t t65 = 618116787LL;

	t65 = (((x313%x314)*x315)%x316);

	if (t65 != 440LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x317 = INT16_MIN;
	volatile int64_t x318 = INT64_MIN;
	volatile int64_t t66 = -291541031182449LL;

	t66 = (((x317%x318)*x319)%x320);

	if (t66 != -8355840LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x326 = INT64_MIN;
	int32_t x328 = -1;
	int64_t t67 = -476346359830LL;

	t67 = (((x325%x326)*x327)%x328);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x329 = 4U;
	int16_t x330 = INT16_MIN;
	int16_t x331 = 6929;
	volatile uint32_t x332 = 157998U;
	volatile uint32_t t68 = 1U;

	t68 = (((x329%x330)*x331)%x332);

	if (t68 != 27716U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = 4175;
	int16_t x335 = INT16_MIN;
	int32_t t69 = 26263676;

	t69 = (((x333%x334)*x335)%x336);

	if (t69 != 4194304) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x339 = 0U;
	int32_t t70 = -2;

	t70 = (((x337%x338)*x339)%x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x341 = 0U;
	static int16_t x342 = -1;
	static uint32_t x343 = 168U;
	volatile int8_t x344 = INT8_MAX;

	t71 = (((x341%x342)*x343)%x344);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MAX;
	int64_t x347 = INT64_MIN;
	volatile int16_t x348 = INT16_MIN;

	t72 = (((x345%x346)*x347)%x348);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = -670;
	int8_t x350 = INT8_MAX;
	static int64_t x352 = INT64_MAX;
	int64_t t73 = -3340LL;

	t73 = (((x349%x350)*x351)%x352);

	if (t73 != -70LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x354 = UINT16_MAX;
	static volatile int32_t x355 = -412406593;
	static uint16_t x356 = UINT16_MAX;
	volatile int64_t t74 = -112240209517980772LL;

	t74 = (((x353%x354)*x355)%x356);

	if (t74 != 62954LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x357 = -7;
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MAX;
	int8_t x360 = -1;

	t75 = (((x357%x358)*x359)%x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x361 = INT8_MIN;
	volatile int64_t x362 = INT64_MIN;
	uint16_t x364 = 31U;

	t76 = (((x361%x362)*x363)%x364);

	if (t76 != -12LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x365 = 1622187636555792499LL;
	static int16_t x366 = -1;
	int8_t x367 = INT8_MIN;
	static uint8_t x368 = 5U;
	int64_t t77 = 15022919LL;

	t77 = (((x365%x366)*x367)%x368);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x369 = 1172240U;
	int8_t x370 = 14;
	uint32_t x371 = 12U;
	int16_t x372 = -1;
	volatile uint32_t t78 = 1836U;

	t78 = (((x369%x370)*x371)%x372);

	if (t78 != 72U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x373 = UINT8_MAX;
	uint64_t x375 = 344435846LLU;
	int8_t x376 = INT8_MAX;
	uint64_t t79 = 2053372283964LLU;

	t79 = (((x373%x374)*x375)%x376);

	if (t79 != 35LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int32_t x378 = INT32_MIN;
	static int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MIN;
	uint64_t t80 = 1444845645608094LLU;

	t80 = (((x377%x378)*x379)%x380);

	if (t80 != 4611686014132420609LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x381 = -1;
	uint16_t x383 = 42U;
	static int32_t t81 = -82827;

	t81 = (((x381%x382)*x383)%x384);

	if (t81 != -42) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MAX;
	int16_t x387 = -1;
	static volatile uint64_t t82 = 77LLU;

	t82 = (((x385%x386)*x387)%x388);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x389 = 2545LL;
	int32_t x392 = INT32_MAX;
	volatile int64_t t83 = -242989533750LL;

	t83 = (((x389%x390)*x391)%x392);

	if (t83 != -3702784LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 554245404157835LLU;
	uint64_t x395 = 13LLU;
	int16_t x396 = 1;
	uint64_t t84 = 85263774652928LLU;

	t84 = (((x393%x394)*x395)%x396);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = -16252;
	static int8_t x398 = -1;
	int32_t x399 = 0;
	int16_t x400 = 252;
	static int32_t t85 = -2226;

	t85 = (((x397%x398)*x399)%x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = INT64_MIN;
	volatile int64_t x402 = INT64_MIN;
	uint64_t x403 = 974314577076LLU;

	t86 = (((x401%x402)*x403)%x404);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x405 = INT8_MAX;
	volatile int16_t x406 = 6;
	volatile uint32_t x407 = 1499452U;
	uint64_t x408 = 25359LLU;
	uint64_t t87 = 7004927227LLU;

	t87 = (((x405%x406)*x407)%x408);

	if (t87 != 3271LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MAX;
	volatile uint32_t x410 = UINT32_MAX;
	static uint64_t x412 = 248LLU;
	uint64_t t88 = 421953892615418801LLU;

	t88 = (((x409%x410)*x411)%x412);

	if (t88 != 32LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x413 = 32U;
	int32_t x415 = 1;
	uint32_t x416 = UINT32_MAX;
	volatile int64_t t89 = -5LL;

	t89 = (((x413%x414)*x415)%x416);

	if (t89 != 32LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x421 = -1;
	uint32_t x422 = UINT32_MAX;
	int32_t x423 = INT32_MIN;
	volatile int32_t x424 = -61;
	volatile uint32_t t90 = 6156944U;

	t90 = (((x421%x422)*x423)%x424);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x425 = 2U;
	int32_t x426 = -124;
	static uint32_t x427 = 596315181U;
	volatile int16_t x428 = 3;

	t91 = (((x425%x426)*x427)%x428);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x429 = 81023LLU;
	int32_t x430 = 3045;
	int64_t x431 = INT64_MIN;
	uint64_t t92 = 0LLU;

	t92 = (((x429%x430)*x431)%x432);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	int16_t x436 = -1;

	t93 = (((x433%x434)*x435)%x436);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = INT32_MIN;
	int32_t x438 = 43;
	int8_t x439 = -3;
	static volatile int32_t t94 = -5332;

	t94 = (((x437%x438)*x439)%x440);

	if (t94 != 24) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = 3;
	int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	volatile int32_t t95 = -14891296;

	t95 = (((x441%x442)*x443)%x444);

	if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = INT64_MIN;
	volatile uint32_t x446 = 27019U;
	static volatile int8_t x447 = 1;
	volatile uint32_t x448 = UINT32_MAX;
	static volatile int64_t t96 = 264021982387723LL;

	t96 = (((x445%x446)*x447)%x448);

	if (t96 != -14194LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x454 = UINT8_MAX;
	int16_t x455 = INT16_MIN;
	int32_t x456 = INT32_MIN;
	static volatile uint32_t t97 = 60U;

	t97 = (((x453%x454)*x455)%x456);

	if (t97 != 2142994432U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x457 = -132582677;
	int16_t x458 = -1;
	static uint16_t x459 = UINT16_MAX;
	volatile int8_t x460 = 6;
	int32_t t98 = 125787011;

	t98 = (((x457%x458)*x459)%x460);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 112109904192607LLU;
	int32_t x462 = -21536786;
	int64_t x464 = 17361667836427LL;
	static volatile uint64_t t99 = 34180080898259LLU;

	t99 = (((x461%x462)*x463)%x464);

	if (t99 != 11166462001981LLU) { NG(); } else { ; }
	
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

