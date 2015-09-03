#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -1LL;
int64_t x8 = 503LL;
uint32_t x12 = 391326U;
uint32_t t2 = 393U;
volatile uint64_t x20 = 1986226158019LLU;
int64_t x23 = INT64_MAX;
uint32_t t5 = 207033408U;
uint16_t x26 = 15U;
uint64_t x29 = UINT64_MAX;
static volatile int64_t x35 = 60542LL;
volatile int64_t x36 = -648380759218971491LL;
uint32_t x38 = UINT32_MAX;
static int64_t x49 = 18040184249191910LL;
volatile int32_t x61 = 15;
static volatile int32_t x63 = 729;
static volatile int32_t x69 = -1;
int8_t x78 = -7;
volatile int32_t t20 = 1008;
static int32_t x98 = -1;
int32_t t22 = -51;
uint32_t x115 = 2U;
static volatile uint32_t t25 = 5698U;
uint16_t x120 = 644U;
static int64_t x123 = -16940617LL;
int8_t x124 = -1;
int32_t t27 = 4549;
volatile int32_t t28 = 2371923;
int64_t x131 = INT64_MAX;
int64_t x136 = 6LL;
static volatile int8_t x142 = -6;
uint32_t x146 = UINT32_MAX;
static int64_t x147 = -109LL;
volatile uint32_t x148 = 2056U;
int64_t x151 = INT64_MAX;
static int8_t x153 = INT8_MAX;
int64_t x155 = INT64_MIN;
int64_t x163 = INT64_MIN;
static int64_t x164 = -1681959291135LL;
volatile int8_t x170 = INT8_MIN;
static volatile uint32_t x188 = UINT32_MAX;
int8_t x189 = INT8_MAX;
uint16_t x190 = UINT16_MAX;
int8_t x191 = -1;
int32_t x197 = 193556;
static int64_t t44 = -180432917719971LL;
volatile int64_t x210 = 188834972351695LL;
volatile int32_t t45 = 359;
int16_t x225 = -1;
uint32_t x226 = 340748U;
static int32_t t47 = 56223;
int32_t x230 = INT32_MIN;
int16_t x237 = INT16_MIN;
volatile int32_t t55 = -2;
int32_t t56 = 8793;
volatile int64_t x277 = -4380000614LL;
int32_t x280 = 689457198;
volatile int32_t x284 = 12231697;
volatile int32_t t58 = 32;
uint32_t x296 = 1183U;
static int8_t x298 = -1;
int16_t x300 = INT16_MIN;
static volatile int16_t x301 = -98;
uint32_t x302 = UINT32_MAX;
static int16_t x309 = 0;
int64_t x321 = INT64_MAX;
uint64_t x322 = 141752295164LLU;
static int16_t x323 = 0;
int32_t x326 = INT32_MIN;
int16_t x328 = 5;
int64_t x332 = INT64_MAX;
int32_t x338 = INT32_MIN;
int32_t x343 = -58;
int8_t x352 = 3;
int8_t x357 = INT8_MIN;
static int8_t x359 = -12;
int16_t x362 = INT16_MIN;
uint8_t x370 = UINT8_MAX;
volatile int8_t x371 = INT8_MIN;
static volatile int32_t t80 = 213761;
int8_t x373 = INT8_MAX;
volatile uint64_t x374 = 1LLU;
uint32_t x381 = 40U;
static int64_t x384 = -1LL;
volatile int64_t t83 = 639281312LL;
int32_t t86 = -6080;
int32_t x401 = -1;
volatile uint64_t x406 = 1LLU;
static volatile uint64_t t91 = 1179904994564838073LLU;
volatile int16_t x426 = 1399;
uint8_t x432 = 20U;
static int32_t t94 = 255199719;
uint64_t x434 = UINT64_MAX;
uint32_t x441 = 2575U;
static int16_t x443 = INT16_MIN;
volatile int64_t t97 = 0LL;
static int32_t x450 = INT32_MIN;
static uint8_t x453 = UINT8_MAX;
volatile int32_t t99 = -4;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	volatile uint32_t x3 = 368544235U;
	uint32_t x4 = 3597008U;
	volatile uint32_t t0 = 11U;

	t0 = (((x1/x2)<x3)-x4);

	if (t0 != 4291370289U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint16_t x6 = UINT16_MAX;
	uint32_t x7 = UINT32_MAX;
	volatile int64_t t1 = -128265707611200531LL;

	t1 = (((x5/x6)<x7)-x8);

	if (t1 != -502LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 54U;
	int64_t x10 = INT64_MIN;
	uint32_t x11 = UINT32_MAX;

	t2 = (((x9/x10)<x11)-x12);

	if (t2 != 4294575971U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static volatile uint32_t x14 = 30823362U;
	int8_t x15 = -7;
	uint32_t x16 = 2407U;
	uint32_t t3 = 2835U;

	t3 = (((x13/x14)<x15)-x16);

	if (t3 != 4294964890U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -232394831LL;
	static int64_t x18 = 68282478LL;
	int8_t x19 = INT8_MIN;
	volatile uint64_t t4 = 1448355246332315LLU;

	t4 = (((x17/x18)<x19)-x20);

	if (t4 != 18446742087483393597LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 6372435U;
	uint8_t x22 = 10U;
	uint32_t x24 = 3660932U;

	t5 = (((x21/x22)<x23)-x24);

	if (t5 != 4291306365U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static uint8_t x27 = 95U;
	static int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 32423123;

	t6 = (((x25/x26)<x27)-x28);

	if (t6 != 129) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	uint32_t x31 = 16000U;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 5;

	t7 = (((x29/x30)<x31)-x32);

	if (t7 != 129) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -968986218LL;
	static int8_t x34 = INT8_MAX;
	volatile int64_t t8 = 20398939367LL;

	t8 = (((x33/x34)<x35)-x36);

	if (t8 != 648380759218971492LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -4;
	int8_t x39 = 36;
	int16_t x40 = 1562;
	int32_t t9 = 7271;

	t9 = (((x37/x38)<x39)-x40);

	if (t9 != -1561) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	uint16_t x42 = UINT16_MAX;
	int8_t x43 = 0;
	int64_t x44 = -813258952LL;
	static int64_t t10 = -22129170157734LL;

	t10 = (((x41/x42)<x43)-x44);

	if (t10 != 813258952LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	volatile int64_t x46 = -186583723064188LL;
	uint16_t x47 = 19U;
	uint16_t x48 = 923U;
	int32_t t11 = 1950;

	t11 = (((x45/x46)<x47)-x48);

	if (t11 != -922) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = 7325;
	int32_t t12 = -4178004;

	t12 = (((x49/x50)<x51)-x52);

	if (t12 != -7325) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 186511588049353611LL;
	static int64_t x54 = 5768LL;
	int32_t x55 = 10760;
	uint16_t x56 = 1U;
	volatile int32_t t13 = 26;

	t13 = (((x53/x54)<x55)-x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x62 = 161872;
	int16_t x64 = 1;
	volatile int32_t t14 = -6837;

	t14 = (((x61/x62)<x63)-x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MIN;
	volatile int64_t x71 = INT64_MAX;
	int64_t x72 = 208106LL;
	volatile int64_t t15 = -4LL;

	t15 = (((x69/x70)<x71)-x72);

	if (t15 != -208105LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = 2278U;
	uint64_t x74 = UINT64_MAX;
	static int16_t x75 = INT16_MAX;
	int16_t x76 = -5833;
	static volatile int32_t t16 = -802741;

	t16 = (((x73/x74)<x75)-x76);

	if (t16 != 5834) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -33449070823305439LL;
	int16_t x79 = 228;
	volatile uint32_t x80 = 11312001U;
	static volatile uint32_t t17 = 532951087U;

	t17 = (((x77/x78)<x79)-x80);

	if (t17 != 4283655295U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	volatile int16_t x86 = INT16_MAX;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 5U;
	volatile uint32_t t18 = 5300438U;

	t18 = (((x85/x86)<x87)-x88);

	if (t18 != 4294967291U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	uint32_t x90 = 1U;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = INT16_MIN;
	int32_t t19 = -57789629;

	t19 = (((x89/x90)<x91)-x92);

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	static volatile int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -287534005;

	t20 = (((x93/x94)<x95)-x96);

	if (t20 != 287534005) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 63468417LLU;
	static int64_t x99 = -1LL;
	uint8_t x100 = 8U;
	static int32_t t21 = 95;

	t21 = (((x97/x98)<x99)-x100);

	if (t21 != -7) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 1U;

	t22 = (((x101/x102)<x103)-x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = 0;
	int8_t x106 = INT8_MAX;
	volatile uint32_t x107 = 36171U;
	int8_t x108 = INT8_MIN;
	volatile int32_t t23 = -1;

	t23 = (((x105/x106)<x107)-x108);

	if (t23 != 129) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 18U;
	int32_t x110 = INT32_MIN;
	volatile uint64_t x111 = UINT64_MAX;
	int16_t x112 = 1;
	volatile int32_t t24 = -16778390;

	t24 = (((x109/x110)<x111)-x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	static volatile int32_t x114 = 131715891;
	uint32_t x116 = UINT32_MAX;

	t25 = (((x113/x114)<x115)-x116);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 0U;
	uint64_t x118 = 38709LLU;
	volatile int64_t x119 = 7LL;
	static volatile int32_t t26 = 2;

	t26 = (((x117/x118)<x119)-x120);

	if (t26 != -643) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = UINT32_MAX;

	t27 = (((x121/x122)<x123)-x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MAX;
	static volatile int64_t x127 = 40LL;
	uint16_t x128 = 3201U;

	t28 = (((x125/x126)<x127)-x128);

	if (t28 != -3200) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 109798212;
	int16_t x130 = INT16_MAX;
	int32_t x132 = 5637;
	volatile int32_t t29 = 88;

	t29 = (((x129/x130)<x131)-x132);

	if (t29 != -5636) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = 5;
	uint64_t x134 = UINT64_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	volatile int64_t t30 = 2535152003141LL;

	t30 = (((x133/x134)<x135)-x136);

	if (t30 != -5LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x141 = INT32_MIN;
	int64_t x143 = -1LL;
	int16_t x144 = -1;
	int32_t t31 = -25139044;

	t31 = (((x141/x142)<x143)-x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = 276670731U;
	static uint32_t t32 = 7025U;

	t32 = (((x145/x146)<x147)-x148);

	if (t32 != 4294965240U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	uint16_t x152 = 22594U;
	int32_t t33 = 2083;

	t33 = (((x149/x150)<x151)-x152);

	if (t33 != -22593) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = INT16_MIN;
	volatile int8_t x156 = INT8_MIN;
	static volatile int32_t t34 = 3319;

	t34 = (((x153/x154)<x155)-x156);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = UINT32_MAX;
	int16_t x158 = 2536;
	static volatile int16_t x159 = INT16_MIN;
	int64_t x160 = 15810LL;
	volatile int64_t t35 = 1003LL;

	t35 = (((x157/x158)<x159)-x160);

	if (t35 != -15809LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -5;
	volatile uint16_t x162 = 30685U;
	volatile int64_t t36 = 248983LL;

	t36 = (((x161/x162)<x163)-x164);

	if (t36 != 1681959291135LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x165 = -49164210446001329LL;
	int32_t x166 = INT32_MAX;
	int16_t x167 = 10295;
	volatile uint32_t x168 = 0U;
	volatile uint32_t t37 = 542U;

	t37 = (((x165/x166)<x167)-x168);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	int16_t x171 = 4;
	int16_t x172 = -1;
	volatile int32_t t38 = -33178;

	t38 = (((x169/x170)<x171)-x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 280U;
	int16_t x179 = 1347;
	int8_t x180 = 0;
	volatile int32_t t39 = 12;

	t39 = (((x177/x178)<x179)-x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x181 = 442142294033691LLU;
	static uint64_t x182 = 281680587LLU;
	int16_t x183 = -13;
	int8_t x184 = -1;
	static volatile int32_t t40 = 169;

	t40 = (((x181/x182)<x183)-x184);

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = INT8_MIN;
	volatile int16_t x186 = INT16_MIN;
	uint64_t x187 = 102622437685994LLU;
	static volatile uint32_t t41 = 672218851U;

	t41 = (((x185/x186)<x187)-x188);

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x192 = INT8_MAX;
	int32_t t42 = -454909;

	t42 = (((x189/x190)<x191)-x192);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x198 = -8810968765248612LL;
	volatile int64_t x199 = INT64_MIN;
	uint8_t x200 = 97U;
	volatile int32_t t43 = -29455;

	t43 = (((x197/x198)<x199)-x200);

	if (t43 != -97) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x205 = INT32_MIN;
	uint16_t x206 = UINT16_MAX;
	int32_t x207 = 1056714;
	int64_t x208 = INT64_MAX;

	t44 = (((x205/x206)<x207)-x208);

	if (t44 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x209 = 1;
	static int16_t x211 = INT16_MIN;
	uint16_t x212 = UINT16_MAX;

	t45 = (((x209/x210)<x211)-x212);

	if (t45 != -65535) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = 62;
	int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MAX;
	volatile int64_t t46 = 18996557827LL;

	t46 = (((x217/x218)<x219)-x220);

	if (t46 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x227 = 3U;
	int8_t x228 = INT8_MIN;

	t47 = (((x225/x226)<x227)-x228);

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MAX;
	uint64_t x231 = 1092804684561111LLU;
	int16_t x232 = INT16_MAX;
	volatile int32_t t48 = -96;

	t48 = (((x229/x230)<x231)-x232);

	if (t48 != -32766) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x238 = -8;
	volatile uint32_t x239 = 13103594U;
	static int64_t x240 = -1LL;
	int64_t t49 = -49374145LL;

	t49 = (((x237/x238)<x239)-x240);

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x241 = INT64_MIN;
	uint64_t x242 = UINT64_MAX;
	volatile int64_t x243 = INT64_MAX;
	static int64_t x244 = -573314518087468584LL;
	int64_t t50 = -3523065LL;

	t50 = (((x241/x242)<x243)-x244);

	if (t50 != 573314518087468585LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = -3;
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = 8;
	volatile int16_t x252 = -1;
	volatile int32_t t51 = 1354;

	t51 = (((x249/x250)<x251)-x252);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x253 = -1;
	int8_t x254 = -1;
	static int32_t x255 = INT32_MIN;
	int16_t x256 = -31;
	volatile int32_t t52 = 1;

	t52 = (((x253/x254)<x255)-x256);

	if (t52 != 31) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = 7413;
	uint64_t x258 = 29935LLU;
	volatile int32_t x259 = -1;
	int32_t x260 = 0;
	volatile int32_t t53 = 199480;

	t53 = (((x257/x258)<x259)-x260);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = INT64_MAX;
	int8_t x262 = INT8_MAX;
	int32_t x263 = -68199494;
	static uint8_t x264 = 6U;
	static volatile int32_t t54 = -1;

	t54 = (((x261/x262)<x263)-x264);

	if (t54 != -6) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x265 = 1;
	int8_t x266 = INT8_MAX;
	uint8_t x267 = UINT8_MAX;
	static uint8_t x268 = 23U;

	t55 = (((x265/x266)<x267)-x268);

	if (t55 != -22) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = -1;
	int32_t x270 = INT32_MIN;
	volatile int16_t x271 = INT16_MIN;
	int8_t x272 = -1;

	t56 = (((x269/x270)<x271)-x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x278 = INT8_MIN;
	uint64_t x279 = 24040877179LLU;
	volatile int32_t t57 = -1115;

	t57 = (((x277/x278)<x279)-x280);

	if (t57 != -689457197) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MIN;
	static int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MIN;

	t58 = (((x281/x282)<x283)-x284);

	if (t58 != -12231697) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x285 = -1LL;
	int32_t x286 = INT32_MAX;
	volatile uint32_t x287 = 44U;
	int8_t x288 = -9;
	int32_t t59 = -567;

	t59 = (((x285/x286)<x287)-x288);

	if (t59 != 10) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -1630;
	int16_t x292 = -1;
	volatile int32_t t60 = -28176;

	t60 = (((x289/x290)<x291)-x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x293 = 8525003996LLU;
	volatile int64_t x294 = -7198336771LL;
	static uint32_t x295 = 342399U;
	uint32_t t61 = 17243423U;

	t61 = (((x293/x294)<x295)-x296);

	if (t61 != 4294966114U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MIN;
	int16_t x299 = -7;
	volatile int32_t t62 = 650960789;

	t62 = (((x297/x298)<x299)-x300);

	if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t63 = 307011852;

	t63 = (((x301/x302)<x303)-x304);

	if (t63 != -126) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = UINT16_MAX;
	static int32_t x308 = -80;
	static int32_t t64 = 161;

	t64 = (((x305/x306)<x307)-x308);

	if (t64 != 80) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x310 = -66094697;
	uint64_t x311 = 2951599LLU;
	uint32_t x312 = 34384634U;
	volatile uint32_t t65 = 24182U;

	t65 = (((x309/x310)<x311)-x312);

	if (t65 != 4260582663U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x313 = -1;
	volatile int16_t x314 = -7;
	static uint32_t x315 = UINT32_MAX;
	volatile int32_t x316 = -1;
	volatile int32_t t66 = -300328;

	t66 = (((x313/x314)<x315)-x316);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = 0;
	int8_t x318 = -23;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = 26U;
	int32_t t67 = 494440;

	t67 = (((x317/x318)<x319)-x320);

	if (t67 != -26) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x324 = -1LL;
	volatile int64_t t68 = 601LL;

	t68 = (((x321/x322)<x323)-x324);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x325 = UINT64_MAX;
	volatile uint32_t x327 = 2254021U;
	volatile int32_t t69 = 476999;

	t69 = (((x325/x326)<x327)-x328);

	if (t69 != -4) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x329 = 15;
	int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MIN;
	static int64_t t70 = -90335LL;

	t70 = (((x329/x330)<x331)-x332);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = INT64_MAX;
	int16_t x334 = -11;
	volatile int64_t x335 = INT64_MIN;
	static volatile uint8_t x336 = UINT8_MAX;
	static volatile int32_t t71 = -161473944;

	t71 = (((x333/x334)<x335)-x336);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x337 = 0U;
	int32_t x339 = INT32_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t72 = 3;

	t72 = (((x337/x338)<x339)-x340);

	if (t72 != 129) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = -137LL;
	int8_t x342 = INT8_MIN;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t73 = 25;

	t73 = (((x341/x342)<x343)-x344);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = 31LLU;
	int16_t x346 = -1;
	int32_t x347 = 123;
	static int8_t x348 = -1;
	volatile int32_t t74 = 28692;

	t74 = (((x345/x346)<x347)-x348);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = 1;
	static int8_t x351 = INT8_MAX;
	int32_t t75 = 32;

	t75 = (((x349/x350)<x351)-x352);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = 0;
	static int16_t x354 = INT16_MAX;
	int8_t x355 = -60;
	int16_t x356 = INT16_MIN;
	volatile int32_t t76 = 11;

	t76 = (((x353/x354)<x355)-x356);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x358 = 98914594LLU;
	volatile uint32_t x360 = 1821166692U;
	uint32_t t77 = 42849U;

	t77 = (((x357/x358)<x359)-x360);

	if (t77 != 2473800605U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t78 = 10264U;

	t78 = (((x361/x362)<x363)-x364);

	if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x365 = 258U;
	volatile int16_t x366 = -2919;
	uint16_t x367 = 164U;
	uint16_t x368 = 123U;
	int32_t t79 = 0;

	t79 = (((x365/x366)<x367)-x368);

	if (t79 != -122) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MAX;
	int8_t x372 = INT8_MIN;

	t80 = (((x369/x370)<x371)-x372);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x375 = UINT32_MAX;
	int64_t x376 = -1LL;
	int64_t t81 = 18113785LL;

	t81 = (((x373/x374)<x375)-x376);

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = 6;
	static uint8_t x378 = 1U;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = -30466;
	static volatile int32_t t82 = 68927992;

	t82 = (((x377/x378)<x379)-x380);

	if (t82 != 30467) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x382 = 13U;
	int16_t x383 = INT16_MIN;

	t83 = (((x381/x382)<x383)-x384);

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x385 = 9LLU;
	uint32_t x386 = 1253131U;
	int8_t x387 = INT8_MAX;
	int64_t x388 = -107673523LL;
	volatile int64_t t84 = 3438807007712200LL;

	t84 = (((x385/x386)<x387)-x388);

	if (t84 != 107673524LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = UINT8_MAX;
	volatile int32_t x390 = -1516381;
	static uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t85 = 73;

	t85 = (((x389/x390)<x391)-x392);

	if (t85 != -32766) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	int16_t x395 = 1;
	uint16_t x396 = 73U;

	t86 = (((x393/x394)<x395)-x396);

	if (t86 != -73) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = -1LL;
	uint8_t x398 = 19U;
	int32_t x399 = INT32_MIN;
	int16_t x400 = -4292;
	volatile int32_t t87 = -82263;

	t87 = (((x397/x398)<x399)-x400);

	if (t87 != 4292) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x402 = 820737103316748LLU;
	static int64_t x403 = 196351472LL;
	int8_t x404 = -1;
	static int32_t t88 = 73420;

	t88 = (((x401/x402)<x403)-x404);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = -943;
	volatile uint64_t x407 = UINT64_MAX;
	volatile uint16_t x408 = UINT16_MAX;
	int32_t t89 = 153054;

	t89 = (((x405/x406)<x407)-x408);

	if (t89 != -65534) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = 3;
	static uint16_t x410 = 220U;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MAX;
	static volatile int32_t t90 = -3058090;

	t90 = (((x409/x410)<x411)-x412);

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = INT16_MAX;
	uint64_t x414 = 14521253LLU;
	static uint8_t x415 = 48U;
	static uint64_t x416 = 4LLU;

	t91 = (((x413/x414)<x415)-x416);

	if (t91 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x417 = 96U;
	static volatile int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MIN;
	static uint8_t x420 = UINT8_MAX;
	volatile int32_t t92 = -1;

	t92 = (((x417/x418)<x419)-x420);

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x425 = INT16_MIN;
	int8_t x427 = 1;
	int16_t x428 = INT16_MIN;
	int32_t t93 = -150397870;

	t93 = (((x425/x426)<x427)-x428);

	if (t93 != 32769) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x429 = 189540735624923895LLU;
	int64_t x430 = -1LL;
	static int8_t x431 = INT8_MIN;

	t94 = (((x429/x430)<x431)-x432);

	if (t94 != -19) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = INT16_MIN;
	int16_t x435 = INT16_MIN;
	int64_t x436 = -1LL;
	int64_t t95 = 72087180007891LL;

	t95 = (((x433/x434)<x435)-x436);

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = -27460930330LL;
	volatile uint64_t x438 = 1677LLU;
	volatile int8_t x439 = -1;
	int16_t x440 = -15;
	volatile int32_t t96 = -6356;

	t96 = (((x437/x438)<x439)-x440);

	if (t96 != 16) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x442 = -5;
	int64_t x444 = -485594841010108LL;

	t97 = (((x441/x442)<x443)-x444);

	if (t97 != 485594841010109LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = INT64_MIN;
	int64_t x451 = 8362194488949176LL;
	int8_t x452 = 13;
	static volatile int32_t t98 = 387370;

	t98 = (((x449/x450)<x451)-x452);

	if (t98 != -12) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x454 = 65738362U;
	int64_t x455 = -16998175182LL;
	static int8_t x456 = INT8_MIN;

	t99 = (((x453/x454)<x455)-x456);

	if (t99 != 128) { NG(); } else { ; }
	
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

