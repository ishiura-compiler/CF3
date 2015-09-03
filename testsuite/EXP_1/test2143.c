#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int16_t x8 = -1;
int32_t x14 = -1;
static volatile int64_t t3 = 594329463LL;
volatile int8_t x31 = 31;
int8_t x32 = -1;
volatile uint8_t x33 = 74U;
int16_t x34 = -1;
static uint16_t x35 = 0U;
volatile uint32_t t9 = 66662U;
int32_t t10 = 4479;
int64_t x45 = INT64_MIN;
int64_t x46 = INT64_MAX;
int32_t t11 = -549325208;
uint16_t x59 = 14U;
int8_t x66 = INT8_MAX;
int32_t x67 = -1;
int8_t x75 = INT8_MAX;
int16_t x81 = -1;
int16_t x86 = 3903;
int32_t x87 = INT32_MIN;
int32_t x92 = INT32_MIN;
int64_t x96 = INT64_MIN;
volatile int32_t t24 = 251875953;
int32_t x113 = -1;
int16_t x119 = INT16_MIN;
static int16_t x136 = INT16_MAX;
static uint64_t x142 = UINT64_MAX;
int64_t x147 = -69599461419153LL;
int64_t x160 = 9LL;
uint64_t x167 = 31956101LLU;
static volatile int64_t t41 = 5282LL;
static uint64_t x169 = 791201966601839LLU;
int16_t x180 = -1;
static int8_t x187 = INT8_MIN;
int16_t x188 = INT16_MIN;
uint32_t x193 = 10U;
int16_t x195 = INT16_MAX;
static uint32_t x200 = 6912958U;
volatile uint32_t t49 = 3385U;
int8_t x204 = -1;
volatile int32_t t50 = 179257992;
int8_t x214 = -1;
volatile int16_t x222 = 10;
volatile uint32_t x223 = 160U;
static int32_t t56 = -846246;
int32_t x232 = INT32_MIN;
volatile int32_t t57 = 103607202;
int8_t x236 = 1;
volatile int8_t x237 = -56;
uint64_t x239 = 88402853LLU;
int16_t x241 = -1;
volatile int8_t x242 = -1;
uint64_t x245 = 24174LLU;
int16_t x247 = INT16_MIN;
uint16_t x252 = UINT16_MAX;
int64_t x253 = -1LL;
int64_t x254 = INT64_MAX;
static int64_t x257 = 1102901285LL;
int64_t x258 = INT64_MIN;
static uint8_t x267 = UINT8_MAX;
uint16_t x270 = 1008U;
uint16_t x283 = 9656U;
int64_t x287 = INT64_MIN;
static uint16_t x291 = UINT16_MAX;
uint16_t x295 = 6U;
static uint64_t x296 = 151256862580151771LLU;
int64_t x299 = -4539966018762721012LL;
uint64_t t75 = 6441907LLU;
uint16_t x309 = UINT16_MAX;
int16_t x312 = INT16_MIN;
int32_t x317 = -1;
volatile int8_t x318 = 1;
uint64_t x324 = 23495LLU;
int64_t x328 = INT64_MAX;
int64_t x330 = -1LL;
static uint64_t t83 = 148076111279LLU;
int64_t x338 = INT64_MAX;
int64_t x344 = INT64_MIN;
static int16_t x345 = -1442;
uint32_t x351 = 7U;
static uint8_t x354 = 1U;
volatile int32_t t88 = -20877516;
int8_t x360 = -1;
uint32_t x371 = UINT32_MAX;
int32_t t93 = 240371;
uint8_t x377 = 113U;
int32_t x379 = INT32_MIN;
static int32_t x380 = -63765582;
static volatile uint8_t x386 = 9U;
int32_t x387 = INT32_MIN;
int64_t x388 = 929141432481LL;
static volatile int64_t t96 = 3308279LL;
int8_t x389 = -1;
static int32_t t97 = -971827;
int16_t x394 = -9;
int32_t x396 = INT32_MAX;
uint64_t x397 = 1019570129688106586LLU;
static volatile int64_t t99 = -1LL;


void f0(void) {
	int32_t x1 = 0;
	int16_t x3 = 202;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = -202;

	t0 = (((x1^x2)<x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	volatile int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = 1017917381;

	t1 = (((x5^x6)<x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -51;
	int32_t x10 = INT32_MIN;
	volatile int32_t x11 = INT32_MIN;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -4032120;

	t2 = (((x9^x10)<x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x15 = -1LL;
	int64_t x16 = INT64_MIN;

	t3 = (((x13^x14)<x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int16_t x20 = -788;
	volatile int32_t t4 = 30304;

	t4 = (((x17^x18)<x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 1U;
	volatile int8_t x24 = -1;
	int32_t t5 = 5088;

	t5 = (((x21^x22)<x23)&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int32_t x26 = -1;
	uint16_t x27 = UINT16_MAX;
	static int64_t x28 = -1LL;
	int64_t t6 = 177141LL;

	t6 = (((x25^x26)<x27)&x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x29 = 9U;
	volatile int8_t x30 = 6;
	volatile int32_t t7 = 2414;

	t7 = (((x29^x30)<x31)&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x36 = -1;
	int32_t t8 = 3352;

	t8 = (((x33^x34)<x35)&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = 202;
	volatile int8_t x39 = -27;
	static uint32_t x40 = 5394U;

	t9 = (((x37^x38)<x39)&x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 17U;
	int8_t x42 = 0;
	int64_t x43 = INT64_MAX;
	int32_t x44 = INT32_MIN;

	t10 = (((x41^x42)<x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x47 = UINT8_MAX;
	volatile int32_t x48 = 84446;

	t11 = (((x45^x46)<x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 1698002071690LLU;
	volatile int8_t x50 = -41;
	int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -776;

	t12 = (((x49^x50)<x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint8_t x54 = 3U;
	volatile uint16_t x55 = 15528U;
	static volatile int8_t x56 = -1;
	volatile int32_t t13 = -403824;

	t13 = (((x53^x54)<x55)&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = UINT16_MAX;
	int64_t x60 = INT64_MIN;
	int64_t t14 = -1485407988LL;

	t14 = (((x57^x58)<x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = -28915141078516660LL;
	int64_t x63 = INT64_MIN;
	volatile int32_t x64 = INT32_MAX;
	static volatile int32_t t15 = 926112658;

	t15 = (((x61^x62)<x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	static uint32_t x68 = 45949U;
	volatile uint32_t t16 = 57U;

	t16 = (((x65^x66)<x67)&x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 103207168;
	static int64_t x70 = INT64_MIN;
	int64_t x71 = 286523763753LL;
	uint64_t x72 = 22689429186484056LLU;
	volatile uint64_t t17 = 214201LLU;

	t17 = (((x69^x70)<x71)&x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int32_t x74 = 290;
	int64_t x76 = 15871677916677LL;
	int64_t t18 = 600391213791476657LL;

	t18 = (((x73^x74)<x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MAX;
	static int16_t x79 = -4;
	volatile uint32_t x80 = 315U;
	volatile uint32_t t19 = 3214U;

	t19 = (((x77^x78)<x79)&x80);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	int64_t x83 = INT64_MAX;
	int32_t x84 = INT32_MIN;
	int32_t t20 = -1;

	t20 = (((x81^x82)<x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1231345U;
	int8_t x88 = 6;
	int32_t t21 = -7019711;

	t21 = (((x85^x86)<x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = 504LL;
	uint16_t x90 = UINT16_MAX;
	uint8_t x91 = UINT8_MAX;
	static int32_t t22 = -1;

	t22 = (((x89^x90)<x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -5;
	volatile int32_t x94 = -1;
	static int64_t x95 = -1LL;
	static volatile int64_t t23 = -1131259389885262995LL;

	t23 = (((x93^x94)<x95)&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	volatile uint16_t x98 = 37U;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = 12U;

	t24 = (((x97^x98)<x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = 11365035261087LL;
	static volatile uint32_t x102 = 1317380U;
	volatile int8_t x103 = 19;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t25 = -7932;

	t25 = (((x101^x102)<x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 892297LLU;
	uint8_t x106 = 0U;
	uint8_t x107 = 0U;
	volatile int8_t x108 = INT8_MIN;
	int32_t t26 = -60917727;

	t26 = (((x105^x106)<x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 3U;
	volatile int32_t x110 = INT32_MAX;
	uint32_t x111 = 1902U;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = -3982;

	t27 = (((x109^x110)<x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	volatile int64_t x116 = -1LL;
	volatile int64_t t28 = 127978185902LL;

	t28 = (((x113^x114)<x115)&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 3U;
	static uint32_t x118 = 27373967U;
	int32_t x120 = 0;
	int32_t t29 = 485;

	t29 = (((x117^x118)<x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 167014U;
	static int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	static uint8_t x124 = 99U;
	volatile int32_t t30 = -60203647;

	t30 = (((x121^x122)<x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 20937465830610957LLU;
	int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MAX;
	volatile uint64_t x128 = 61307648931803LLU;
	uint64_t t31 = 26551835568935565LLU;

	t31 = (((x125^x126)<x127)&x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static int16_t x130 = 14;
	int64_t x131 = 38LL;
	static int16_t x132 = INT16_MIN;
	static int32_t t32 = -3863144;

	t32 = (((x129^x130)<x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = INT8_MIN;
	int16_t x135 = 58;
	static int32_t t33 = 1396096;

	t33 = (((x133^x134)<x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 21667U;
	int8_t x138 = INT8_MIN;
	int64_t x139 = 2882LL;
	int64_t x140 = -1LL;
	int64_t t34 = -816870183127LL;

	t34 = (((x137^x138)<x139)&x140);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	static uint32_t x143 = UINT32_MAX;
	volatile int32_t x144 = INT32_MIN;
	int32_t t35 = -33021423;

	t35 = (((x141^x142)<x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint16_t x146 = 6U;
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 426216;

	t36 = (((x145^x146)<x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	volatile int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	int32_t x152 = -1;
	int32_t t37 = -27;

	t37 = (((x149^x150)<x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	uint8_t x154 = UINT8_MAX;
	uint32_t x155 = 21U;
	int64_t x156 = INT64_MIN;
	static int64_t t38 = 58LL;

	t38 = (((x153^x154)<x155)&x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 104088069LL;
	volatile uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 1U;
	static int64_t t39 = 9LL;

	t39 = (((x157^x158)<x159)&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int32_t x162 = 412031;
	uint16_t x163 = 1U;
	int32_t x164 = INT32_MAX;
	static volatile int32_t t40 = 955495;

	t40 = (((x161^x162)<x163)&x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static uint16_t x166 = UINT16_MAX;
	volatile int64_t x168 = -1LL;

	t41 = (((x165^x166)<x167)&x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -692;
	int64_t x171 = -8205267138259LL;
	int16_t x172 = 1;
	volatile int32_t t42 = -9;

	t42 = (((x169^x170)<x171)&x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 0U;
	volatile int32_t x174 = INT32_MAX;
	uint64_t x175 = 7445561371502268LLU;
	static int16_t x176 = 0;
	static int32_t t43 = 475;

	t43 = (((x173^x174)<x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MAX;
	int64_t x178 = -1LL;
	uint32_t x179 = UINT32_MAX;
	static volatile int32_t t44 = -2;

	t44 = (((x177^x178)<x179)&x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 0;
	static int16_t x182 = 804;
	int8_t x183 = INT8_MAX;
	static int8_t x184 = INT8_MIN;
	int32_t t45 = -9334332;

	t45 = (((x181^x182)<x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MAX;
	volatile int32_t t46 = -3;

	t46 = (((x185^x186)<x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -20;
	int32_t x190 = -1;
	static uint16_t x191 = 2396U;
	int8_t x192 = -1;
	volatile int32_t t47 = 338;

	t47 = (((x189^x190)<x191)&x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x194 = 71;
	uint32_t x196 = 1954171U;
	volatile uint32_t t48 = 2690412U;

	t48 = (((x193^x194)<x195)&x196);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	static int16_t x198 = INT16_MIN;
	uint32_t x199 = 0U;

	t49 = (((x197^x198)<x199)&x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	uint64_t x202 = 26245854445478908LLU;
	volatile int16_t x203 = INT16_MAX;

	t50 = (((x201^x202)<x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 646U;
	int8_t x206 = INT8_MAX;
	int8_t x207 = -1;
	int32_t x208 = -32214994;
	volatile int32_t t51 = 691;

	t51 = (((x205^x206)<x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = -1;
	static volatile int64_t x211 = -335153LL;
	int64_t x212 = INT64_MIN;
	static int64_t t52 = -996165126855549LL;

	t52 = (((x209^x210)<x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -1LL;
	int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -8;

	t53 = (((x213^x214)<x215)&x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = -28;
	int32_t x218 = -3854;
	volatile int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = 22008106LL;

	t54 = (((x217^x218)<x219)&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t55 = -17090633684369365LL;

	t55 = (((x221^x222)<x223)&x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	uint8_t x226 = 8U;
	int8_t x227 = INT8_MIN;
	int32_t x228 = -32618;

	t56 = (((x225^x226)<x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	volatile uint16_t x230 = 1U;
	volatile uint32_t x231 = 3253152U;

	t57 = (((x229^x230)<x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 0U;
	volatile uint32_t x234 = UINT32_MAX;
	int32_t x235 = INT32_MIN;
	static int32_t t58 = -1909193;

	t58 = (((x233^x234)<x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -21;
	static int32_t x240 = INT32_MIN;
	int32_t t59 = 1;

	t59 = (((x237^x238)<x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x243 = 9U;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = -936;

	t60 = (((x241^x242)<x243)&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = INT8_MIN;
	int8_t x248 = -1;
	int32_t t61 = -991793681;

	t61 = (((x245^x246)<x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	uint8_t x250 = 1U;
	int8_t x251 = -1;
	static volatile int32_t t62 = -128723437;

	t62 = (((x249^x250)<x251)&x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x255 = 0;
	int32_t x256 = -1;
	int32_t t63 = -297408673;

	t63 = (((x253^x254)<x255)&x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x259 = 55U;
	int8_t x260 = 2;
	volatile int32_t t64 = 79;

	t64 = (((x257^x258)<x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = -63815202459023880LL;
	int16_t x262 = INT16_MIN;
	static volatile int16_t x263 = -1;
	static volatile int32_t x264 = INT32_MIN;
	static int32_t t65 = 35659;

	t65 = (((x261^x262)<x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 0;
	uint32_t x266 = UINT32_MAX;
	int32_t x268 = -1;
	volatile int32_t t66 = -230250;

	t66 = (((x265^x266)<x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x271 = 406564014U;
	int16_t x272 = -13;
	static int32_t t67 = 1;

	t67 = (((x269^x270)<x271)&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -20LL;
	int8_t x274 = INT8_MIN;
	static uint64_t x275 = UINT64_MAX;
	volatile int64_t x276 = INT64_MIN;
	int64_t t68 = 1423313506LL;

	t68 = (((x273^x274)<x275)&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = -1;
	uint16_t x279 = 19332U;
	static int8_t x280 = -1;
	int32_t t69 = 43;

	t69 = (((x277^x278)<x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 6477248160LL;
	static int64_t x282 = -1LL;
	volatile int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 338643;

	t70 = (((x281^x282)<x283)&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	static int32_t t71 = 5834981;

	t71 = (((x285^x286)<x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 2;
	int8_t x290 = INT8_MIN;
	int16_t x292 = 87;
	static volatile int32_t t72 = 6534;

	t72 = (((x289^x290)<x291)&x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	uint32_t x294 = 12884891U;
	uint64_t t73 = 89LLU;

	t73 = (((x293^x294)<x295)&x296);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 17U;
	int8_t x298 = 8;
	volatile uint32_t x300 = 7656U;
	volatile uint32_t t74 = 2401741U;

	t74 = (((x297^x298)<x299)&x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MAX;
	int8_t x303 = INT8_MAX;
	uint64_t x304 = 8477334889076LLU;

	t75 = (((x301^x302)<x303)&x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 1U;
	uint64_t x306 = UINT64_MAX;
	static int8_t x307 = -1;
	uint16_t x308 = 58U;
	volatile int32_t t76 = -1534;

	t76 = (((x305^x306)<x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x310 = -1706946609779LL;
	volatile uint16_t x311 = 3U;
	volatile int32_t t77 = 208;

	t77 = (((x309^x310)<x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	int64_t x315 = -3248810LL;
	uint8_t x316 = 2U;
	volatile int32_t t78 = -13652;

	t78 = (((x313^x314)<x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x319 = INT8_MIN;
	uint64_t x320 = 15940049872976410LLU;
	volatile uint64_t t79 = 239261453127LLU;

	t79 = (((x317^x318)<x319)&x320);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = UINT64_MAX;
	static volatile int8_t x322 = INT8_MIN;
	static uint8_t x323 = 1U;
	volatile uint64_t t80 = 306LLU;

	t80 = (((x321^x322)<x323)&x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint8_t x326 = UINT8_MAX;
	static uint32_t x327 = UINT32_MAX;
	volatile int64_t t81 = 21123324997787LL;

	t81 = (((x325^x326)<x327)&x328);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 6139555266179023LLU;
	int8_t x331 = -1;
	volatile int64_t x332 = -32926240367LL;
	volatile int64_t t82 = 34LL;

	t82 = (((x329^x330)<x331)&x332);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	int32_t x334 = 6;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = 144876LLU;

	t83 = (((x333^x334)<x335)&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	int8_t x339 = 1;
	uint32_t x340 = 285236034U;
	uint32_t t84 = 4372U;

	t84 = (((x337^x338)<x339)&x340);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int64_t x342 = INT64_MIN;
	int64_t x343 = -1LL;
	int64_t t85 = 3LL;

	t85 = (((x341^x342)<x343)&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = -1LL;
	static int16_t x347 = -1;
	static int16_t x348 = -1;
	volatile int32_t t86 = 2044086;

	t86 = (((x345^x346)<x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 0U;
	volatile int64_t x350 = -1LL;
	static int8_t x352 = -17;
	int32_t t87 = 61562788;

	t87 = (((x349^x350)<x351)&x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 1;
	int32_t x355 = INT32_MIN;
	int32_t x356 = -1;

	t88 = (((x353^x354)<x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 46U;
	static uint64_t x358 = 5569364LLU;
	int64_t x359 = INT64_MIN;
	int32_t t89 = 1;

	t89 = (((x357^x358)<x359)&x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	static volatile uint8_t x362 = 113U;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = 154822;

	t90 = (((x361^x362)<x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	int32_t x368 = -1;
	int32_t t91 = -18507;

	t91 = (((x365^x366)<x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 1751618LL;
	static volatile uint8_t x370 = 96U;
	int16_t x372 = 508;
	int32_t t92 = 15;

	t92 = (((x369^x370)<x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = 37652LL;
	uint8_t x374 = 4U;
	uint8_t x375 = UINT8_MAX;
	volatile int8_t x376 = INT8_MAX;

	t93 = (((x373^x374)<x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = 10627561668LL;
	volatile int32_t t94 = 467;

	t94 = (((x377^x378)<x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = UINT32_MAX;
	static int16_t x382 = INT16_MAX;
	volatile int8_t x383 = -4;
	int8_t x384 = 5;
	int32_t t95 = -6194;

	t95 = (((x381^x382)<x383)&x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;

	t96 = (((x385^x386)<x387)&x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MIN;
	int16_t x391 = 252;
	int8_t x392 = INT8_MAX;

	t97 = (((x389^x390)<x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = 6;
	int64_t x395 = INT64_MIN;
	int32_t t98 = 5;

	t98 = (((x393^x394)<x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x398 = -17;
	int16_t x399 = INT16_MIN;
	volatile int64_t x400 = -1750LL;

	t99 = (((x397^x398)<x399)&x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

