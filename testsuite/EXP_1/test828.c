#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x3 = 8U;
uint16_t x5 = UINT16_MAX;
static uint64_t x6 = 304754149682LLU;
int32_t x12 = INT32_MAX;
uint32_t x15 = 152U;
int64_t x16 = -1LL;
static volatile int32_t t3 = -222;
int16_t x19 = 129;
int64_t x20 = 234142096865989040LL;
uint64_t x27 = 136087603606LLU;
uint16_t x28 = 5U;
int32_t t6 = 467;
int32_t t9 = -28;
volatile int8_t x42 = 63;
int32_t t10 = 65071839;
static int32_t x45 = INT32_MIN;
volatile uint8_t x46 = 15U;
uint8_t x48 = 0U;
volatile int32_t t11 = -15;
int64_t x53 = INT64_MIN;
volatile int16_t x54 = -1;
int64_t x56 = -1LL;
volatile int32_t t13 = 21162;
uint8_t x59 = 0U;
int32_t x60 = 5321600;
int32_t t14 = 129333;
uint32_t x61 = UINT32_MAX;
static volatile int16_t x69 = INT16_MIN;
volatile uint8_t x72 = 1U;
static int16_t x76 = INT16_MIN;
uint16_t x79 = 1487U;
int8_t x84 = INT8_MIN;
volatile int32_t t19 = -223;
volatile int16_t x88 = INT16_MAX;
static int32_t t20 = 15;
int64_t x89 = INT64_MIN;
volatile int64_t x90 = INT64_MIN;
volatile int32_t t21 = 13783326;
int64_t x96 = -275802936851626981LL;
volatile int32_t t23 = -1015;
int32_t x109 = INT32_MIN;
uint16_t x113 = 106U;
int32_t t28 = -56529236;
int16_t x122 = INT16_MAX;
int32_t t29 = 926501789;
int32_t x125 = -1;
static int8_t x128 = INT8_MIN;
int32_t t30 = 7;
int16_t x130 = 22;
int32_t t32 = -1056;
static int8_t x137 = INT8_MIN;
static int16_t x142 = -1;
uint32_t x146 = 292U;
int64_t x157 = -1LL;
int16_t x159 = -1;
volatile uint64_t x164 = 5LLU;
volatile int32_t t39 = -88718;
volatile int8_t x165 = INT8_MAX;
int64_t x167 = INT64_MIN;
uint32_t x168 = 15U;
uint8_t x171 = 1U;
volatile int32_t t41 = -90438256;
int16_t x181 = -6;
int16_t x182 = INT16_MIN;
int16_t x192 = 4887;
int8_t x194 = INT8_MAX;
int8_t x195 = 22;
volatile uint32_t x196 = UINT32_MAX;
static int64_t x207 = INT64_MIN;
int32_t t50 = -849;
uint32_t x210 = 1U;
int32_t x212 = -1;
int16_t x214 = -138;
static volatile int32_t t54 = 777817692;
int32_t t55 = -57181609;
static int16_t x232 = -1250;
volatile int32_t t57 = 19769;
int32_t x240 = 1;
uint32_t x244 = UINT32_MAX;
int16_t x248 = -1;
uint8_t x254 = UINT8_MAX;
int16_t x256 = INT16_MIN;
int16_t x260 = INT16_MIN;
volatile int32_t t63 = 75;
int64_t x262 = 9LL;
uint16_t x286 = 357U;
int32_t x291 = -1;
int8_t x292 = INT8_MAX;
int8_t x293 = INT8_MIN;
uint16_t x295 = UINT16_MAX;
volatile int32_t t72 = -25467016;
static volatile uint64_t x300 = 95181333314444037LLU;
int32_t x302 = -163450;
uint16_t x306 = 925U;
static int8_t x315 = INT8_MIN;
volatile uint32_t x317 = 321531921U;
volatile int32_t t78 = 25367862;
int32_t x322 = INT32_MIN;
static volatile int64_t x324 = INT64_MIN;
volatile int32_t t80 = -14001891;
int8_t x336 = INT8_MIN;
static volatile int32_t x340 = INT32_MAX;
static int64_t x350 = INT64_MAX;
int8_t x353 = -4;
int64_t x357 = INT64_MAX;
uint64_t x358 = 64900601583712LLU;
int16_t x360 = -1;
int64_t x362 = -626LL;
int8_t x366 = INT8_MIN;
int8_t x371 = -1;
volatile int64_t x375 = INT64_MIN;
int32_t x377 = -1;
volatile int64_t x383 = -3922173593115140177LL;
uint16_t x384 = 13U;
volatile int32_t t94 = -50822;
int8_t x390 = INT8_MIN;
uint8_t x404 = 42U;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MAX;
	volatile uint8_t x4 = 119U;
	int32_t t0 = 159482304;

	t0 = (((x1%x2)|x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x7 = -1;
	int32_t x8 = -1954027;
	volatile int32_t t1 = 0;

	t1 = (((x5%x6)|x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 46019174700LLU;
	int32_t x10 = INT32_MAX;
	uint64_t x11 = 8440348262993LLU;
	volatile int32_t t2 = 45;

	t2 = (((x9%x10)|x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	int64_t x14 = 3226504840996323LL;

	t3 = (((x13%x14)|x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 12841U;
	int8_t x18 = INT8_MIN;
	int32_t t4 = 5851538;

	t4 = (((x17%x18)|x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = -1;
	int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MIN;
	int8_t x24 = -20;
	int32_t t5 = 90;

	t5 = (((x21%x22)|x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;

	t6 = (((x25%x26)|x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	uint32_t x30 = 52331U;
	uint8_t x31 = 17U;
	int8_t x32 = INT8_MAX;
	int32_t t7 = -2564088;

	t7 = (((x29%x30)|x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 3976U;
	uint8_t x34 = UINT8_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	volatile int64_t x36 = INT64_MIN;
	int32_t t8 = -6;

	t8 = (((x33%x34)|x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	int32_t x38 = -1;
	static int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;

	t9 = (((x37%x38)|x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = UINT8_MAX;

	t10 = (((x41%x42)|x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x47 = INT64_MIN;

	t11 = (((x45%x46)|x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static uint64_t x50 = UINT64_MAX;
	static uint8_t x51 = 13U;
	volatile uint32_t x52 = 15106U;
	static volatile int32_t t12 = 53;

	t12 = (((x49%x50)|x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x55 = 19U;

	t13 = (((x53%x54)|x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int64_t x58 = -1LL;

	t14 = (((x57%x58)|x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 34U;
	volatile uint64_t x63 = UINT64_MAX;
	static int64_t x64 = 7721384LL;
	volatile int32_t t15 = -58022458;

	t15 = (((x61%x62)|x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = INT16_MAX;
	volatile uint8_t x71 = UINT8_MAX;
	static volatile int32_t t16 = 579;

	t16 = (((x69%x70)|x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	uint16_t x74 = 1U;
	static uint64_t x75 = 711344994LLU;
	volatile int32_t t17 = 702;

	t17 = (((x73%x74)|x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -2;
	static int16_t x78 = INT16_MIN;
	volatile uint16_t x80 = 3784U;
	volatile int32_t t18 = -218597;

	t18 = (((x77%x78)|x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -52133097;
	volatile uint64_t x82 = 1888375386566LLU;
	static int32_t x83 = INT32_MIN;

	t19 = (((x81%x82)|x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = 252;
	int32_t x86 = 134;
	int8_t x87 = -1;

	t20 = (((x85%x86)|x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x91 = UINT8_MAX;
	uint8_t x92 = 9U;

	t21 = (((x89%x90)|x91)<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x93 = INT32_MAX;
	static uint32_t x94 = 96U;
	int16_t x95 = INT16_MIN;
	int32_t t22 = -2;

	t22 = (((x93%x94)|x95)<x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x98 = 1561892LLU;
	int64_t x99 = INT64_MAX;
	static int16_t x100 = INT16_MIN;

	t23 = (((x97%x98)|x99)<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x101 = 53;
	static int64_t x102 = -1LL;
	uint32_t x103 = 206947U;
	static volatile uint64_t x104 = UINT64_MAX;
	volatile int32_t t24 = 2;

	t24 = (((x101%x102)|x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	static int32_t x106 = INT32_MIN;
	static uint8_t x107 = UINT8_MAX;
	int16_t x108 = -1;
	volatile int32_t t25 = -14;

	t25 = (((x105%x106)|x107)<x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	volatile uint32_t x112 = 29064583U;
	volatile int32_t t26 = -99946925;

	t26 = (((x109%x110)|x111)<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = -1;
	int16_t x116 = -1;
	int32_t t27 = -32;

	t27 = (((x113%x114)|x115)<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 1657468745889930887LL;
	uint16_t x118 = 10293U;
	int8_t x119 = -1;
	int64_t x120 = INT64_MIN;

	t28 = (((x117%x118)|x119)<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	volatile int8_t x123 = INT8_MIN;
	static int16_t x124 = -18;

	t29 = (((x121%x122)|x123)<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x126 = 1148654089U;
	int8_t x127 = INT8_MIN;

	t30 = (((x125%x126)|x127)<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x129 = 1965420U;
	volatile uint8_t x131 = UINT8_MAX;
	volatile int8_t x132 = -1;
	int32_t t31 = -315;

	t31 = (((x129%x130)|x131)<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int16_t x134 = INT16_MAX;
	volatile int8_t x135 = INT8_MAX;
	volatile int32_t x136 = INT32_MAX;

	t32 = (((x133%x134)|x135)<x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x138 = 10U;
	int8_t x139 = INT8_MIN;
	int8_t x140 = -11;
	volatile int32_t t33 = 1;

	t33 = (((x137%x138)|x139)<x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x143 = 992193081U;
	uint16_t x144 = 26U;
	int32_t t34 = 564454;

	t34 = (((x141%x142)|x143)<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	static uint16_t x147 = 204U;
	volatile int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 687433;

	t35 = (((x145%x146)|x147)<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -6725;
	uint64_t x152 = UINT64_MAX;
	int32_t t36 = 48964;

	t36 = (((x149%x150)|x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -21356832297LL;
	int16_t x154 = INT16_MIN;
	static uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t37 = -1;

	t37 = (((x153%x154)|x155)<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x158 = 58568802259240LLU;
	int32_t x160 = 273492568;
	volatile int32_t t38 = -2299447;

	t38 = (((x157%x158)|x159)<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 63696739U;
	static volatile int64_t x162 = INT64_MIN;
	volatile uint64_t x163 = 2009LLU;

	t39 = (((x161%x162)|x163)<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x166 = INT16_MIN;
	volatile int32_t t40 = -130385;

	t40 = (((x165%x166)|x167)<x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 5915U;
	int16_t x170 = INT16_MAX;
	int16_t x172 = 0;

	t41 = (((x169%x170)|x171)<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MIN;
	int64_t x176 = -34LL;
	int32_t t42 = -1;

	t42 = (((x173%x174)|x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x177 = 4944U;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	volatile int8_t x180 = -1;
	int32_t t43 = 2720;

	t43 = (((x177%x178)|x179)<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x183 = INT32_MAX;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t44 = 507878132;

	t44 = (((x181%x182)|x183)<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MAX;
	uint32_t x186 = 457484873U;
	static int32_t x187 = 6035;
	volatile uint16_t x188 = 8177U;
	static int32_t t45 = -50;

	t45 = (((x185%x186)|x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = 6;
	int8_t x191 = 37;
	static int32_t t46 = 853;

	t46 = (((x189%x190)|x191)<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	volatile int32_t t47 = 632124;

	t47 = (((x193%x194)|x195)<x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = INT8_MAX;
	uint32_t x198 = 33536456U;
	static volatile int64_t x199 = INT64_MIN;
	uint16_t x200 = 1463U;
	int32_t t48 = -769306;

	t48 = (((x197%x198)|x199)<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 16044U;
	volatile int8_t x202 = 12;
	volatile int64_t x203 = 62LL;
	int32_t x204 = INT32_MIN;
	int32_t t49 = -5631543;

	t49 = (((x201%x202)|x203)<x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MAX;
	static int32_t x208 = INT32_MAX;

	t50 = (((x205%x206)|x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x209 = 10U;
	uint32_t x211 = 5U;
	int32_t t51 = 4;

	t51 = (((x209%x210)|x211)<x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = 28590U;
	int16_t x215 = INT16_MIN;
	int16_t x216 = -493;
	int32_t t52 = 167;

	t52 = (((x213%x214)|x215)<x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = 941569138;
	uint64_t x218 = 8695033222459733995LLU;
	int64_t x219 = -23LL;
	static int8_t x220 = 11;
	static volatile int32_t t53 = 1290867;

	t53 = (((x217%x218)|x219)<x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -149690;
	uint32_t x222 = 3338U;
	static uint16_t x223 = UINT16_MAX;
	static int8_t x224 = -41;

	t54 = (((x221%x222)|x223)<x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = -1;
	static volatile int8_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;

	t55 = (((x225%x226)|x227)<x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	uint16_t x230 = 4123U;
	static volatile int64_t x231 = 1243936LL;
	static volatile int32_t t56 = -15107836;

	t56 = (((x229%x230)|x231)<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = INT16_MIN;
	volatile int32_t x234 = 20247;
	int16_t x235 = INT16_MAX;
	static int16_t x236 = -122;

	t57 = (((x233%x234)|x235)<x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MAX;
	volatile uint8_t x238 = 15U;
	int64_t x239 = 58LL;
	static int32_t t58 = -30;

	t58 = (((x237%x238)|x239)<x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MAX;
	volatile uint64_t x243 = 4167776500LLU;
	volatile int32_t t59 = -7063244;

	t59 = (((x241%x242)|x243)<x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = 0;
	int32_t x246 = -1;
	uint64_t x247 = 2827201669171338LLU;
	static int32_t t60 = 4;

	t60 = (((x245%x246)|x247)<x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x249 = INT32_MAX;
	uint32_t x250 = 187549712U;
	volatile int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MIN;
	int32_t t61 = -1043231;

	t61 = (((x249%x250)|x251)<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -1;
	static uint64_t x255 = UINT64_MAX;
	static volatile int32_t t62 = 7233;

	t62 = (((x253%x254)|x255)<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = UINT32_MAX;
	int64_t x258 = INT64_MAX;
	static volatile uint16_t x259 = 7534U;

	t63 = (((x257%x258)|x259)<x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x261 = UINT64_MAX;
	int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MIN;
	volatile int32_t t64 = 327729523;

	t64 = (((x261%x262)|x263)<x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x265 = -10356248290679079LL;
	uint32_t x266 = 27U;
	int64_t x267 = INT64_MIN;
	int32_t x268 = 478712;
	int32_t t65 = -320634988;

	t65 = (((x265%x266)|x267)<x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	static uint8_t x271 = 1U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t66 = -845;

	t66 = (((x269%x270)|x271)<x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = -1LL;
	volatile int32_t x275 = 30849;
	int64_t x276 = -227364631933LL;
	volatile int32_t t67 = 31863;

	t67 = (((x273%x274)|x275)<x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x277 = -1LL;
	static volatile int32_t x278 = INT32_MIN;
	int32_t x279 = -1;
	int64_t x280 = INT64_MAX;
	volatile int32_t t68 = 37;

	t68 = (((x277%x278)|x279)<x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MAX;
	volatile int64_t x283 = INT64_MIN;
	volatile int64_t x284 = INT64_MAX;
	int32_t t69 = -510689;

	t69 = (((x281%x282)|x283)<x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x285 = INT64_MAX;
	int64_t x287 = INT64_MIN;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t70 = 1;

	t70 = (((x285%x286)|x287)<x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = 103729447647337140LL;
	int16_t x290 = INT16_MIN;
	static volatile int32_t t71 = -62;

	t71 = (((x289%x290)|x291)<x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x294 = INT64_MAX;
	volatile int8_t x296 = INT8_MAX;

	t72 = (((x293%x294)|x295)<x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = -173803054LL;
	int16_t x299 = -1;
	volatile int32_t t73 = -101301;

	t73 = (((x297%x298)|x299)<x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = UINT16_MAX;
	volatile int16_t x303 = INT16_MAX;
	static volatile uint64_t x304 = UINT64_MAX;
	int32_t t74 = -3412;

	t74 = (((x301%x302)|x303)<x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MIN;
	static int32_t x307 = INT32_MAX;
	volatile uint32_t x308 = 10071760U;
	volatile int32_t t75 = 6026891;

	t75 = (((x305%x306)|x307)<x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = -1;
	int16_t x311 = INT16_MIN;
	uint64_t x312 = 1412462LLU;
	volatile int32_t t76 = 49;

	t76 = (((x309%x310)|x311)<x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x313 = -8710;
	int32_t x314 = 8486579;
	int32_t x316 = -36372736;
	static int32_t t77 = 830;

	t77 = (((x313%x314)|x315)<x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x318 = 8007U;
	volatile uint16_t x319 = UINT16_MAX;
	int16_t x320 = INT16_MIN;

	t78 = (((x317%x318)|x319)<x320);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x321 = 148LLU;
	volatile uint32_t x323 = 29057040U;
	static int32_t t79 = -94;

	t79 = (((x321%x322)|x323)<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = -1;
	volatile uint32_t x326 = 490218131U;
	int8_t x327 = -1;
	static uint8_t x328 = 13U;

	t80 = (((x325%x326)|x327)<x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = 23U;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t81 = -2774037;

	t81 = (((x329%x330)|x331)<x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = 1;
	volatile uint32_t x334 = UINT32_MAX;
	uint16_t x335 = 4319U;
	volatile int32_t t82 = 47764;

	t82 = (((x333%x334)|x335)<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = -1LL;
	int8_t x338 = -5;
	int32_t x339 = INT32_MIN;
	int32_t t83 = 3;

	t83 = (((x337%x338)|x339)<x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x341 = 85U;
	uint64_t x342 = UINT64_MAX;
	static int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t84 = -705291;

	t84 = (((x341%x342)|x343)<x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MIN;
	int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	volatile int32_t t85 = -4;

	t85 = (((x345%x346)|x347)<x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = 4283530566LL;
	volatile int8_t x351 = -1;
	int64_t x352 = -1LL;
	int32_t t86 = 62139798;

	t86 = (((x349%x350)|x351)<x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x354 = INT8_MIN;
	int32_t x355 = -1;
	int8_t x356 = INT8_MAX;
	int32_t t87 = 1;

	t87 = (((x353%x354)|x355)<x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x359 = 27415U;
	volatile int32_t t88 = 24880;

	t88 = (((x357%x358)|x359)<x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 99U;
	uint32_t x363 = 1U;
	int16_t x364 = INT16_MIN;
	int32_t t89 = -827533;

	t89 = (((x361%x362)|x363)<x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x365 = INT16_MIN;
	static int16_t x367 = 3;
	static volatile int16_t x368 = INT16_MAX;
	static volatile int32_t t90 = 0;

	t90 = (((x365%x366)|x367)<x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -236;
	volatile int8_t x370 = INT8_MIN;
	uint8_t x372 = 24U;
	int32_t t91 = -39;

	t91 = (((x369%x370)|x371)<x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = -280421LL;
	int32_t x374 = INT32_MIN;
	static int32_t x376 = -15792782;
	static int32_t t92 = 277341;

	t92 = (((x373%x374)|x375)<x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x378 = -1;
	int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MAX;
	volatile int32_t t93 = -1;

	t93 = (((x377%x378)|x379)<x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x381 = INT32_MIN;
	int64_t x382 = -1LL;

	t94 = (((x381%x382)|x383)<x384);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = INT8_MAX;
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	static int64_t x388 = -1LL;
	volatile int32_t t95 = 51335;

	t95 = (((x385%x386)|x387)<x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x389 = UINT8_MAX;
	int64_t x391 = -31602303034491056LL;
	static uint64_t x392 = UINT64_MAX;
	volatile int32_t t96 = -13746;

	t96 = (((x389%x390)|x391)<x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = -1;
	int64_t x394 = INT64_MIN;
	uint64_t x395 = 2130LLU;
	static int16_t x396 = INT16_MAX;
	int32_t t97 = -102683533;

	t97 = (((x393%x394)|x395)<x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x398 = 8686U;
	int32_t x399 = INT32_MIN;
	int64_t x400 = 8226387LL;
	int32_t t98 = 207281127;

	t98 = (((x397%x398)|x399)<x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = UINT64_MAX;
	uint64_t x402 = UINT64_MAX;
	volatile int16_t x403 = -6;
	int32_t t99 = 68857;

	t99 = (((x401%x402)|x403)<x404);

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

