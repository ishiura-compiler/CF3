#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint8_t x3 = 13U;
volatile int32_t t0 = -10;
int8_t x8 = 11;
int8_t x15 = -1;
int32_t x21 = INT32_MIN;
int16_t x26 = INT16_MIN;
uint32_t x30 = 61028U;
volatile int64_t x33 = -699182945LL;
int32_t t7 = -628;
uint8_t x37 = 57U;
volatile uint64_t x44 = 9107570320LLU;
int16_t x49 = INT16_MIN;
int32_t t11 = -45098;
int32_t x61 = -918292477;
int64_t x66 = -1LL;
int16_t x72 = -5;
volatile int64_t x73 = INT64_MIN;
int8_t x82 = INT8_MAX;
int16_t x89 = INT16_MIN;
int16_t x91 = -1;
static int8_t x104 = INT8_MAX;
static uint8_t x112 = 11U;
int64_t x114 = INT64_MIN;
int8_t x117 = -1;
uint8_t x124 = 17U;
volatile int32_t x125 = INT32_MIN;
int8_t x129 = INT8_MIN;
int64_t x133 = 208691LL;
static volatile int16_t x136 = INT16_MAX;
int32_t t32 = -244365;
int16_t x143 = INT16_MIN;
uint32_t x148 = 7341U;
volatile int64_t x153 = INT64_MIN;
int64_t x154 = INT64_MIN;
int32_t t36 = 9;
volatile uint8_t x158 = 83U;
uint8_t x164 = 1U;
volatile int32_t t39 = -2808;
static uint8_t x171 = 5U;
int32_t x177 = INT32_MIN;
volatile int32_t t43 = -218;
uint64_t x188 = UINT64_MAX;
int8_t x193 = INT8_MIN;
int32_t x204 = INT32_MIN;
volatile int32_t t48 = 25389790;
uint8_t x205 = 0U;
static uint32_t x211 = 369U;
int16_t x215 = INT16_MIN;
volatile int32_t x222 = -53;
int32_t x223 = 114098564;
int32_t x224 = 100031;
int32_t x230 = 29618117;
uint8_t x252 = 7U;
volatile int32_t t61 = 26978272;
static int32_t x257 = -1873;
static int16_t x258 = -38;
static uint8_t x262 = 2U;
int8_t x267 = -1;
volatile int64_t x271 = INT64_MAX;
volatile int32_t x272 = 15811278;
int32_t t65 = 737184;
int16_t x275 = INT16_MAX;
volatile int32_t t69 = 2510;
int64_t x289 = -142760477500822639LL;
uint8_t x292 = 21U;
volatile int64_t x293 = INT64_MIN;
static int32_t x303 = INT32_MIN;
uint16_t x304 = UINT16_MAX;
int8_t x305 = -1;
int8_t x309 = INT8_MIN;
int16_t x310 = INT16_MIN;
volatile int16_t x311 = -1;
volatile int64_t x312 = INT64_MAX;
uint32_t x313 = 1680399573U;
volatile int32_t t76 = -906372;
static volatile uint8_t x331 = 13U;
static int32_t t81 = 6;
volatile uint16_t x337 = 479U;
static uint16_t x338 = 14110U;
int64_t x344 = INT64_MIN;
uint8_t x353 = UINT8_MAX;
volatile int8_t x358 = INT8_MIN;
uint16_t x363 = UINT16_MAX;
static int32_t t89 = -308673836;
volatile int32_t x373 = INT32_MIN;
uint8_t x376 = UINT8_MAX;
int32_t t91 = 0;
static int32_t x380 = INT32_MIN;
int8_t x381 = -1;
static int16_t x383 = INT16_MIN;
uint16_t x387 = UINT16_MAX;
static volatile int32_t x390 = -2057;
int64_t x393 = INT64_MIN;
volatile uint64_t x401 = 12LLU;
int16_t x407 = INT16_MIN;
volatile int32_t t99 = -2953938;


void f0(void) {
	static volatile int16_t x2 = -599;
	volatile int16_t x4 = INT16_MIN;

	t0 = (((x1%x2)==x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x6 = 652;
	volatile int64_t x7 = -1LL;
	volatile int32_t t1 = -81161;

	t1 = (((x5%x6)==x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static uint8_t x14 = 8U;
	volatile int8_t x16 = -1;
	volatile int32_t t2 = -8481;

	t2 = (((x13%x14)==x15)<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	int64_t x18 = INT64_MIN;
	static int16_t x19 = INT16_MIN;
	static volatile uint32_t x20 = UINT32_MAX;
	volatile int32_t t3 = -531754;

	t3 = (((x17%x18)==x19)<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x22 = INT64_MAX;
	uint16_t x23 = 3734U;
	static int64_t x24 = -1LL;
	volatile int32_t t4 = -40;

	t4 = (((x21%x22)==x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -1LL;
	volatile int32_t x27 = 9;
	static int64_t x28 = INT64_MAX;
	static volatile int32_t t5 = 20;

	t5 = (((x25%x26)==x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	uint8_t x31 = 26U;
	volatile int8_t x32 = 1;
	int32_t t6 = -58282;

	t6 = (((x29%x30)==x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = 24;
	uint64_t x35 = 2669693864424803LLU;
	int16_t x36 = INT16_MAX;

	t7 = (((x33%x34)==x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x38 = UINT16_MAX;
	int8_t x39 = -28;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t8 = -1;

	t8 = (((x37%x38)==x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int8_t x42 = -1;
	int32_t x43 = -1;
	int32_t t9 = -152990;

	t9 = (((x41%x42)==x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	volatile int8_t x46 = INT8_MIN;
	static uint16_t x47 = 30198U;
	volatile int8_t x48 = 0;
	int32_t t10 = -151201708;

	t10 = (((x45%x46)==x47)<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x50 = 1548U;
	static volatile int16_t x51 = -1;
	volatile int16_t x52 = INT16_MIN;

	t11 = (((x49%x50)==x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x57 = -1LL;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 5577U;
	int8_t x60 = -7;
	int32_t t12 = -27207697;

	t12 = (((x57%x58)==x59)<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MIN;
	uint64_t x63 = 406LLU;
	int16_t x64 = -1;
	volatile int32_t t13 = -330039500;

	t13 = (((x61%x62)==x63)<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x65 = 5U;
	int8_t x67 = -6;
	uint64_t x68 = 1351LLU;
	int32_t t14 = 0;

	t14 = (((x65%x66)==x67)<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int64_t x70 = 841306200391910LL;
	int16_t x71 = -1;
	int32_t t15 = -64925812;

	t15 = (((x69%x70)==x71)<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x74 = INT8_MIN;
	volatile int64_t x75 = -1LL;
	int32_t x76 = 1;
	static int32_t t16 = 20147749;

	t16 = (((x73%x74)==x75)<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	int64_t x79 = 32910050625LL;
	volatile uint64_t x80 = UINT64_MAX;
	int32_t t17 = 13831;

	t17 = (((x77%x78)==x79)<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x81 = 244473847U;
	static int32_t x83 = -20648;
	int32_t x84 = -1;
	volatile int32_t t18 = -725;

	t18 = (((x81%x82)==x83)<x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 224;
	volatile int16_t x86 = 5815;
	volatile int16_t x87 = -525;
	int16_t x88 = -1;
	volatile int32_t t19 = -995854;

	t19 = (((x85%x86)==x87)<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x90 = 70950U;
	int8_t x92 = INT8_MAX;
	int32_t t20 = -1132;

	t20 = (((x89%x90)==x91)<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = -1LL;
	volatile uint8_t x94 = 14U;
	volatile int32_t x95 = -612;
	volatile uint64_t x96 = UINT64_MAX;
	static int32_t t21 = -129;

	t21 = (((x93%x94)==x95)<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 1310U;
	int16_t x98 = 7428;
	int8_t x99 = -1;
	int8_t x100 = -15;
	volatile int32_t t22 = 2376;

	t22 = (((x97%x98)==x99)<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 6872U;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = INT32_MAX;
	volatile int32_t t23 = -21906111;

	t23 = (((x101%x102)==x103)<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 1U;
	uint16_t x106 = 400U;
	volatile uint8_t x107 = 43U;
	volatile int8_t x108 = INT8_MIN;
	int32_t t24 = -54592427;

	t24 = (((x105%x106)==x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = INT16_MIN;
	int16_t x110 = -11;
	int32_t x111 = -1;
	volatile int32_t t25 = -1421;

	t25 = (((x109%x110)==x111)<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = INT32_MAX;
	int64_t x115 = INT64_MIN;
	static int16_t x116 = 109;
	int32_t t26 = 999;

	t26 = (((x113%x114)==x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = UINT16_MAX;
	int32_t t27 = -2942;

	t27 = (((x117%x118)==x119)<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = 12754544755LLU;
	int64_t x122 = -6163487LL;
	static uint64_t x123 = 486671630755LLU;
	volatile int32_t t28 = 30002;

	t28 = (((x121%x122)==x123)<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MIN;
	int32_t x127 = -37986542;
	int32_t x128 = INT32_MIN;
	int32_t t29 = 87114;

	t29 = (((x125%x126)==x127)<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = 8;
	volatile int64_t x131 = 13401786341LL;
	static uint64_t x132 = UINT64_MAX;
	int32_t t30 = 166;

	t30 = (((x129%x130)==x131)<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x134 = INT16_MIN;
	static int64_t x135 = INT64_MIN;
	static volatile int32_t t31 = 178;

	t31 = (((x133%x134)==x135)<x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	static int32_t x138 = INT32_MAX;
	static int16_t x139 = -124;
	int16_t x140 = -13;

	t32 = (((x137%x138)==x139)<x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	int16_t x142 = -1;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t33 = -1031386295;

	t33 = (((x141%x142)==x143)<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MAX;
	volatile uint8_t x146 = 19U;
	volatile int64_t x147 = -423354546LL;
	int32_t t34 = -2350;

	t34 = (((x145%x146)==x147)<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 25LLU;
	volatile uint8_t x150 = 17U;
	static uint8_t x151 = 3U;
	uint8_t x152 = 1U;
	int32_t t35 = 484593919;

	t35 = (((x149%x150)==x151)<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x155 = -2;
	uint64_t x156 = 1000794LLU;

	t36 = (((x153%x154)==x155)<x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 2245U;
	int32_t x159 = INT32_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t37 = -25661223;

	t37 = (((x157%x158)==x159)<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -1LL;
	static uint64_t x162 = UINT64_MAX;
	int8_t x163 = 0;
	int32_t t38 = -506;

	t38 = (((x161%x162)==x163)<x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x165 = 1U;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = -1;
	int64_t x168 = INT64_MAX;

	t39 = (((x165%x166)==x167)<x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 43;
	static int64_t x170 = INT64_MIN;
	volatile int64_t x172 = 8622433914802LL;
	volatile int32_t t40 = 121913;

	t40 = (((x169%x170)==x171)<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	uint64_t x174 = 2003626492500LLU;
	volatile int16_t x175 = INT16_MAX;
	int32_t x176 = INT32_MAX;
	volatile int32_t t41 = 149225;

	t41 = (((x173%x174)==x175)<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MAX;
	int64_t x179 = 133943LL;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t42 = -13927;

	t42 = (((x177%x178)==x179)<x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x181 = 233380737U;
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	static int16_t x184 = INT16_MIN;

	t43 = (((x181%x182)==x183)<x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = 6374272338332LL;
	uint16_t x186 = 2259U;
	int8_t x187 = INT8_MAX;
	static int32_t t44 = -9476;

	t44 = (((x185%x186)==x187)<x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MAX;
	static volatile uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	volatile int32_t t45 = 33323514;

	t45 = (((x189%x190)==x191)<x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x194 = 9;
	int32_t x195 = INT32_MIN;
	uint32_t x196 = 7651U;
	volatile int32_t t46 = 1;

	t46 = (((x193%x194)==x195)<x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 988U;
	uint16_t x200 = UINT16_MAX;
	int32_t t47 = -161442074;

	t47 = (((x197%x198)==x199)<x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	static int64_t x202 = 259LL;
	int32_t x203 = INT32_MIN;

	t48 = (((x201%x202)==x203)<x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x206 = 6609LLU;
	static int64_t x207 = INT64_MAX;
	int8_t x208 = -1;
	static int32_t t49 = -5292;

	t49 = (((x205%x206)==x207)<x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x209 = 9999LLU;
	int64_t x210 = -1615809707811LL;
	volatile int8_t x212 = 0;
	int32_t t50 = -34;

	t50 = (((x209%x210)==x211)<x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = INT64_MAX;
	int8_t x214 = -1;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t51 = -13238093;

	t51 = (((x213%x214)==x215)<x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = UINT8_MAX;
	static int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MAX;
	int16_t x220 = INT16_MAX;
	static int32_t t52 = 2390;

	t52 = (((x217%x218)==x219)<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int32_t t53 = -31829211;

	t53 = (((x221%x222)==x223)<x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = INT32_MIN;
	uint64_t x226 = 1597513466717653LLU;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = -1;
	int32_t t54 = 8844493;

	t54 = (((x225%x226)==x227)<x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = 69U;
	static int64_t x231 = INT64_MAX;
	static uint64_t x232 = 3933396752LLU;
	volatile int32_t t55 = -12910;

	t55 = (((x229%x230)==x231)<x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = -497826LL;
	int32_t x234 = INT32_MIN;
	static int64_t x235 = INT64_MAX;
	volatile int32_t x236 = -3;
	int32_t t56 = -459667;

	t56 = (((x233%x234)==x235)<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 23U;
	volatile int32_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = -1LL;
	static int32_t t57 = 7;

	t57 = (((x237%x238)==x239)<x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = 512LL;
	int8_t x242 = 3;
	int64_t x243 = 396453150LL;
	uint64_t x244 = UINT64_MAX;
	static int32_t t58 = 0;

	t58 = (((x241%x242)==x243)<x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = 5;
	static int32_t x246 = -1;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -1;
	volatile int32_t t59 = -13677;

	t59 = (((x245%x246)==x247)<x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MAX;
	int32_t x251 = INT32_MAX;
	volatile int32_t t60 = 75875841;

	t60 = (((x249%x250)==x251)<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x253 = 140527426LLU;
	int8_t x254 = INT8_MAX;
	int64_t x255 = -1LL;
	uint64_t x256 = UINT64_MAX;

	t61 = (((x253%x254)==x255)<x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t62 = -44097;

	t62 = (((x257%x258)==x259)<x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = INT16_MIN;
	int32_t x263 = -1;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t63 = 7096036;

	t63 = (((x261%x262)==x263)<x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	static int64_t x266 = 1LL;
	uint8_t x268 = 0U;
	volatile int32_t t64 = -766961044;

	t64 = (((x265%x266)==x267)<x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = -1;
	static volatile int16_t x270 = 2;

	t65 = (((x269%x270)==x271)<x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = 1U;
	uint32_t x274 = UINT32_MAX;
	int8_t x276 = 3;
	int32_t t66 = -3674225;

	t66 = (((x273%x274)==x275)<x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MAX;
	static int64_t x278 = INT64_MIN;
	uint8_t x279 = 5U;
	int8_t x280 = INT8_MAX;
	static int32_t t67 = 3641;

	t67 = (((x277%x278)==x279)<x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x281 = 1624127553647LLU;
	int32_t x282 = -2;
	int32_t x283 = 818;
	int8_t x284 = INT8_MIN;
	static int32_t t68 = 941019;

	t68 = (((x281%x282)==x283)<x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MAX;
	volatile int16_t x286 = 299;
	uint16_t x287 = 1314U;
	int8_t x288 = -1;

	t69 = (((x285%x286)==x287)<x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x290 = INT32_MAX;
	static int64_t x291 = INT64_MIN;
	volatile int32_t t70 = -92107;

	t70 = (((x289%x290)==x291)<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 62682345LLU;
	static uint8_t x295 = UINT8_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t71 = -388826834;

	t71 = (((x293%x294)==x295)<x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -1;
	int16_t x298 = 43;
	static uint16_t x299 = 9885U;
	int64_t x300 = INT64_MAX;
	volatile int32_t t72 = 488687887;

	t72 = (((x297%x298)==x299)<x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = INT64_MIN;
	uint64_t x302 = 13LLU;
	int32_t t73 = -13715808;

	t73 = (((x301%x302)==x303)<x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = 375;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = 1U;
	volatile int32_t t74 = -1;

	t74 = (((x305%x306)==x307)<x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t t75 = 87301729;

	t75 = (((x309%x310)==x311)<x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x314 = -345820617LL;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = -1;

	t76 = (((x313%x314)==x315)<x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = -7178LL;
	volatile int8_t x318 = INT8_MAX;
	static uint16_t x319 = 15U;
	int16_t x320 = -3705;
	int32_t t77 = 990274;

	t77 = (((x317%x318)==x319)<x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = 12033U;
	volatile int64_t x324 = 4LL;
	volatile int32_t t78 = -1685457;

	t78 = (((x321%x322)==x323)<x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x325 = UINT32_MAX;
	uint8_t x326 = 5U;
	static int64_t x327 = 4443809956456211263LL;
	int8_t x328 = -7;
	volatile int32_t t79 = 365;

	t79 = (((x325%x326)==x327)<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MAX;
	int64_t x330 = -1LL;
	int32_t x332 = INT32_MAX;
	volatile int32_t t80 = -5775605;

	t80 = (((x329%x330)==x331)<x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = INT32_MIN;
	int16_t x334 = -1;
	uint8_t x335 = 14U;
	uint8_t x336 = 11U;

	t81 = (((x333%x334)==x335)<x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x339 = INT64_MIN;
	uint8_t x340 = 3U;
	volatile int32_t t82 = 48561884;

	t82 = (((x337%x338)==x339)<x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x341 = UINT32_MAX;
	static uint32_t x342 = 87399U;
	int16_t x343 = -1;
	int32_t t83 = 33;

	t83 = (((x341%x342)==x343)<x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	uint64_t x347 = 8462LLU;
	int64_t x348 = 4LL;
	int32_t t84 = -628932;

	t84 = (((x345%x346)==x347)<x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x349 = UINT64_MAX;
	int16_t x350 = -1;
	volatile uint8_t x351 = 1U;
	volatile int64_t x352 = 14238047740LL;
	int32_t t85 = 9574228;

	t85 = (((x349%x350)==x351)<x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x354 = 30;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	static int32_t t86 = -10304761;

	t86 = (((x353%x354)==x355)<x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x357 = UINT32_MAX;
	volatile int64_t x359 = -2404979060692833LL;
	volatile int32_t x360 = 1;
	static int32_t t87 = 146225763;

	t87 = (((x357%x358)==x359)<x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = 0;
	volatile uint16_t x362 = UINT16_MAX;
	int8_t x364 = -1;
	volatile int32_t t88 = 66938456;

	t88 = (((x361%x362)==x363)<x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	uint16_t x366 = 1U;
	static int8_t x367 = INT8_MIN;
	volatile uint32_t x368 = 3527345U;

	t89 = (((x365%x366)==x367)<x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x369 = -15;
	static volatile int8_t x370 = INT8_MAX;
	volatile int16_t x371 = 45;
	static uint32_t x372 = UINT32_MAX;
	int32_t t90 = 2239615;

	t90 = (((x369%x370)==x371)<x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x374 = -122;
	uint16_t x375 = 47U;

	t91 = (((x373%x374)==x375)<x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MIN;
	static int8_t x379 = -12;
	int32_t t92 = 15778938;

	t92 = (((x377%x378)==x379)<x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x382 = 11U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t93 = -245268;

	t93 = (((x381%x382)==x383)<x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x385 = 0;
	static volatile int32_t x386 = -9;
	int32_t x388 = INT32_MIN;
	int32_t t94 = -540633231;

	t94 = (((x385%x386)==x387)<x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 7LLU;
	static int8_t x391 = 25;
	uint8_t x392 = 59U;
	static int32_t t95 = 3;

	t95 = (((x389%x390)==x391)<x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x394 = -1;
	volatile int8_t x395 = -9;
	int8_t x396 = 0;
	int32_t t96 = 287565797;

	t96 = (((x393%x394)==x395)<x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x397 = INT8_MIN;
	int64_t x398 = -3240579895931LL;
	int32_t x399 = -134819;
	int16_t x400 = -35;
	static volatile int32_t t97 = 878724405;

	t97 = (((x397%x398)==x399)<x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x402 = 1898U;
	uint8_t x403 = 12U;
	volatile int64_t x404 = -1LL;
	int32_t t98 = 2687;

	t98 = (((x401%x402)==x403)<x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	int32_t x408 = -668536449;

	t99 = (((x405%x406)==x407)<x408);

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

