#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -10;
volatile int8_t x9 = 1;
uint16_t x14 = UINT16_MAX;
int32_t t3 = -9015141;
volatile int64_t x23 = INT64_MIN;
uint8_t x24 = 0U;
static volatile uint16_t x28 = 192U;
int8_t x30 = 1;
uint32_t x31 = 1875U;
int64_t t8 = -4321658569541867810LL;
int32_t x42 = INT32_MAX;
static int8_t x43 = INT8_MAX;
int32_t x45 = INT32_MAX;
static int64_t x46 = -1LL;
static volatile int8_t x55 = 2;
int64_t x58 = 58948LL;
int32_t x60 = INT32_MIN;
static uint32_t t15 = 4U;
volatile int32_t x68 = 231;
int16_t x71 = -886;
uint32_t x72 = 5U;
uint32_t x74 = 1122U;
volatile uint64_t x76 = UINT64_MAX;
int32_t x79 = -1;
int32_t t19 = -6353822;
int16_t x96 = -13558;
int8_t x107 = 24;
volatile uint8_t x108 = 3U;
static int64_t x110 = -2038949861566570053LL;
int32_t x113 = 49514;
volatile int64_t t28 = 1681LL;
uint16_t x119 = 3105U;
static uint32_t x126 = 1983U;
int8_t x128 = INT8_MAX;
uint64_t x132 = UINT64_MAX;
uint16_t x137 = UINT16_MAX;
volatile int64_t x138 = -74LL;
int64_t t34 = 944818650272869LL;
static uint64_t x146 = 85617652811LLU;
volatile uint16_t x149 = UINT16_MAX;
int32_t x150 = INT32_MAX;
int16_t x151 = INT16_MIN;
static volatile uint16_t x154 = 25U;
uint64_t x155 = 7711892406820LLU;
int32_t x160 = 1;
uint32_t x163 = 384312U;
int8_t x167 = 12;
volatile int32_t x175 = INT32_MAX;
int64_t x177 = INT64_MIN;
uint64_t t45 = 5498936335891LLU;
uint32_t x190 = UINT32_MAX;
int32_t x191 = INT32_MIN;
static uint32_t t46 = 188999U;
int64_t x200 = INT64_MIN;
uint32_t x202 = UINT32_MAX;
static int32_t x204 = INT32_MIN;
static int32_t x207 = INT32_MAX;
static volatile int32_t t50 = 238;
int32_t x210 = INT32_MAX;
uint64_t t53 = 734080LLU;
static volatile uint32_t t54 = 58142941U;
int64_t t55 = -3021186131084873845LL;
int8_t x230 = 55;
int32_t x237 = INT32_MIN;
uint16_t x238 = 14044U;
volatile int64_t x245 = INT64_MIN;
static int8_t x251 = INT8_MAX;
volatile uint64_t t61 = 1707213850946080032LLU;
int32_t x253 = 676933;
static int32_t x254 = 2;
int32_t x257 = -1;
volatile int32_t x260 = -1;
uint16_t x261 = 2U;
int64_t t64 = 2LL;
volatile int8_t x265 = INT8_MIN;
int64_t x268 = 1990709LL;
static uint64_t x278 = 196LLU;
uint8_t x281 = 2U;
int64_t t68 = 349465173LL;
int64_t x288 = -19106LL;
volatile int32_t x292 = INT32_MIN;
int64_t t70 = 1668213812083LL;
int64_t x293 = INT64_MIN;
int16_t x294 = INT16_MIN;
volatile uint16_t x295 = UINT16_MAX;
volatile int32_t x298 = -489981182;
volatile int64_t t72 = -15988321146LL;
static uint8_t x305 = UINT8_MAX;
static uint32_t x307 = UINT32_MAX;
volatile int64_t t75 = 2952LL;
int64_t x314 = 24610518184063LL;
static uint32_t x315 = UINT32_MAX;
volatile int64_t t76 = -24729773008357LL;
int16_t x324 = -70;
uint64_t t80 = 5LLU;
int8_t x333 = -1;
uint32_t t81 = 4081U;
int8_t x339 = INT8_MAX;
int8_t x348 = -42;
int64_t x360 = -1LL;
uint8_t x365 = 24U;
static int64_t x366 = INT64_MIN;
volatile int64_t x367 = INT64_MAX;
int64_t x370 = INT64_MIN;
int16_t x377 = 23;
uint16_t x380 = 0U;
int32_t x382 = -1;
uint8_t x389 = UINT8_MAX;
int16_t x397 = -1;
static int64_t x407 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = 0;
	static int64_t x3 = INT64_MIN;
	int64_t x4 = 60089822920626LL;
	static int64_t t0 = -1271009800683LL;

	t0 = (((x1&x2)/x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 31085552260178LLU;
	uint32_t x6 = 396569U;
	static int8_t x7 = INT8_MAX;
	volatile uint64_t t1 = 279836531LLU;

	t1 = (((x5&x6)/x7)&x8);

	if (t1 != 2064LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	int64_t x11 = 17310636LL;
	int64_t x12 = -1LL;
	int64_t t2 = -1070852LL;

	t2 = (((x9&x10)/x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -2;
	int8_t x15 = -50;
	int32_t x16 = INT32_MAX;

	t3 = (((x13&x14)/x15)&x16);

	if (t3 != 2147482338) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -23344;
	volatile int16_t x18 = -1;
	int64_t x19 = -1LL;
	uint32_t x20 = 9309U;
	int64_t t4 = -3700302117582LL;

	t4 = (((x17&x18)/x19)&x20);

	if (t4 != 16LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 5;
	static volatile int32_t x22 = -58635412;
	int64_t t5 = 1396689155214785LL;

	t5 = (((x21&x22)/x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = -1;
	volatile uint64_t t6 = 4069262409023639LLU;

	t6 = (((x25&x26)/x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint16_t x32 = 14U;
	uint32_t t7 = 8155U;

	t7 = (((x29&x30)/x31)&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 849;
	static int64_t x34 = 23167709537LL;
	volatile int16_t x35 = INT16_MIN;
	uint8_t x36 = 3U;

	t8 = (((x33&x34)/x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = UINT16_MAX;
	static volatile int64_t x40 = 70254672030684LL;
	volatile int64_t t9 = 6976LL;

	t9 = (((x37&x38)/x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int64_t x44 = -54289467150189214LL;
	volatile int64_t t10 = 1031754LL;

	t10 = (((x41&x42)/x43)&x44);

	if (t10 != 16909312LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x47 = 4063592U;
	static int32_t x48 = INT32_MIN;
	int64_t t11 = 115LL;

	t11 = (((x45&x46)/x47)&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 10345U;
	int16_t x51 = INT16_MAX;
	volatile int8_t x52 = 12;
	uint32_t t12 = 8903209U;

	t12 = (((x49&x50)/x51)&x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	static volatile uint16_t x54 = UINT16_MAX;
	int16_t x56 = 6077;
	int32_t t13 = 96;

	t13 = (((x53&x54)/x55)&x56);

	if (t13 != 6077) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int64_t x59 = 261589444451LL;
	volatile int64_t t14 = 27704741687LL;

	t14 = (((x57&x58)/x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 2189U;
	int16_t x62 = INT16_MAX;
	static int8_t x63 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;

	t15 = (((x61&x62)/x63)&x64);

	if (t15 != 4294967279U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = -1LL;
	uint8_t x67 = 9U;
	int64_t t16 = -120447446001LL;

	t16 = (((x65&x66)/x67)&x68);

	if (t16 != 226LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 14LLU;
	int32_t x70 = -3;
	volatile uint64_t t17 = 1410LLU;

	t17 = (((x69&x70)/x71)&x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1650U;
	int64_t x75 = INT64_MIN;
	static volatile uint64_t t18 = 228183415603300447LLU;

	t18 = (((x73&x74)/x75)&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -14;
	int16_t x78 = -7;
	uint8_t x80 = 3U;

	t19 = (((x77&x78)/x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = UINT32_MAX;
	volatile int32_t x82 = INT32_MIN;
	volatile uint32_t x83 = 3U;
	int8_t x84 = -26;
	volatile uint32_t t20 = 5U;

	t20 = (((x81&x82)/x83)&x84);

	if (t20 != 715827874U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int32_t x86 = INT32_MAX;
	uint16_t x87 = UINT16_MAX;
	volatile int64_t x88 = -5071176LL;
	int64_t t21 = -1528976285167322LL;

	t21 = (((x85&x86)/x87)&x88);

	if (t21 != 32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1893705254446935193LLU;
	static uint16_t x90 = 22115U;
	int64_t x91 = 23694311448430094LL;
	static uint32_t x92 = UINT32_MAX;
	volatile uint64_t t22 = 160337272484073689LLU;

	t22 = (((x89&x90)/x91)&x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MAX;
	int32_t x95 = -1;
	volatile int32_t t23 = -56151553;

	t23 = (((x93&x94)/x95)&x96);

	if (t23 != -2147450880) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	int8_t x98 = INT8_MIN;
	int16_t x99 = 6230;
	int8_t x100 = INT8_MAX;
	static int32_t t24 = -68108;

	t24 = (((x97&x98)/x99)&x100);

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 310724232U;
	int64_t x102 = INT64_MAX;
	uint16_t x103 = 1U;
	uint16_t x104 = UINT16_MAX;
	int64_t t25 = -26907LL;

	t25 = (((x101&x102)/x103)&x104);

	if (t25 != 18056LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 3U;
	uint8_t x106 = 27U;
	static volatile int32_t t26 = -260;

	t26 = (((x105&x106)/x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -25217421;
	uint32_t x111 = UINT32_MAX;
	int32_t x112 = INT32_MAX;
	int64_t t27 = -2291747502760252962LL;

	t27 = (((x109&x110)/x111)&x112);

	if (t27 != 1672753640LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x114 = -1LL;
	int64_t x115 = 493611LL;
	int8_t x116 = 1;

	t28 = (((x113&x114)/x115)&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 0U;
	static int64_t x118 = INT64_MIN;
	static int32_t x120 = -1110688;
	int64_t t29 = -27LL;

	t29 = (((x117&x118)/x119)&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 86667U;
	static uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MIN;
	uint64_t t30 = 2126074331904260LLU;

	t30 = (((x121&x122)/x123)&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	static int8_t x127 = INT8_MIN;
	static uint32_t t31 = 268229025U;

	t31 = (((x125&x126)/x127)&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = UINT64_MAX;
	int32_t x130 = -1;
	static uint8_t x131 = UINT8_MAX;
	uint64_t t32 = 1462189653171LLU;

	t32 = (((x129&x130)/x131)&x132);

	if (t32 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x139 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	volatile int64_t t33 = 1001116742140995LL;

	t33 = (((x137&x138)/x139)&x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 8U;
	int64_t x142 = INT64_MAX;
	static uint32_t x143 = UINT32_MAX;
	static int32_t x144 = INT32_MIN;

	t34 = (((x141&x142)/x143)&x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	uint8_t x147 = UINT8_MAX;
	static uint64_t x148 = 1051695171639LLU;
	volatile uint64_t t35 = 1084102696LLU;

	t35 = (((x145&x146)/x147)&x148);

	if (t35 != 52LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x152 = -1;
	volatile int32_t t36 = -3786;

	t36 = (((x149&x150)/x151)&x152);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 1235598090901992729LLU;
	uint32_t x156 = 3U;
	uint64_t t37 = 3LLU;

	t37 = (((x153&x154)/x155)&x156);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 362;
	static int64_t x158 = 9LL;
	volatile int8_t x159 = -4;
	int64_t t38 = 252LL;

	t38 = (((x157&x158)/x159)&x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = -1;
	uint64_t x162 = 138243134988LLU;
	uint32_t x164 = UINT32_MAX;
	uint64_t t39 = 2023353LLU;

	t39 = (((x161&x162)/x163)&x164);

	if (t39 != 359715LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = -1;
	uint64_t x166 = 1401074546803124LLU;
	uint8_t x168 = 3U;
	uint64_t t40 = 179266LLU;

	t40 = (((x165&x166)/x167)&x168);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = INT32_MIN;
	int32_t x170 = -1;
	int16_t x171 = INT16_MAX;
	volatile uint16_t x172 = 0U;
	static int32_t t41 = 7700;

	t41 = (((x169&x170)/x171)&x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	static uint16_t x174 = 162U;
	volatile int16_t x176 = INT16_MIN;
	int64_t t42 = 161360233238LL;

	t42 = (((x173&x174)/x175)&x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x178 = 394U;
	static uint8_t x179 = 121U;
	uint64_t x180 = UINT64_MAX;
	uint64_t t43 = 1305LLU;

	t43 = (((x177&x178)/x179)&x180);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -1;
	static uint16_t x182 = 18293U;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = -26591LL;
	int64_t t44 = -6076259836LL;

	t44 = (((x181&x182)/x183)&x184);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x185 = 83694035022771560LLU;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	uint32_t x188 = 167U;

	t45 = (((x185&x186)/x187)&x188);

	if (t45 != 36LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = -78;
	int16_t x192 = INT16_MIN;

	t46 = (((x189&x190)/x191)&x192);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	static int32_t x194 = -2179829;
	static volatile int32_t x195 = -75;
	static uint16_t x196 = 5985U;
	volatile uint32_t t47 = 324171729U;

	t47 = (((x193&x194)/x195)&x196);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = -1LL;
	int8_t x198 = INT8_MAX;
	int64_t x199 = INT64_MIN;
	volatile int64_t t48 = 231LL;

	t48 = (((x197&x198)/x199)&x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MAX;
	volatile int32_t x203 = INT32_MIN;
	static uint32_t t49 = 1701961356U;

	t49 = (((x201&x202)/x203)&x204);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = INT16_MAX;
	volatile int16_t x206 = -11515;
	static int8_t x208 = INT8_MIN;

	t50 = (((x205&x206)/x207)&x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x209 = 427038171U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MAX;
	volatile uint32_t t51 = 140114263U;

	t51 = (((x209&x210)/x211)&x212);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x213 = INT8_MAX;
	int8_t x214 = -1;
	int32_t x215 = INT32_MAX;
	uint8_t x216 = 32U;
	volatile int32_t t52 = -1581662;

	t52 = (((x213&x214)/x215)&x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -39;
	uint32_t x218 = 18092U;
	volatile int64_t x219 = INT64_MIN;
	uint64_t x220 = 519392503LLU;

	t53 = (((x217&x218)/x219)&x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x221 = -1;
	uint8_t x222 = UINT8_MAX;
	int32_t x223 = INT32_MAX;
	uint32_t x224 = 10803145U;

	t54 = (((x221&x222)/x223)&x224);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = INT64_MIN;
	uint8_t x226 = 1U;
	static volatile uint16_t x227 = UINT16_MAX;
	static int64_t x228 = -3487LL;

	t55 = (((x225&x226)/x227)&x228);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x229 = UINT16_MAX;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = -1;
	volatile uint64_t t56 = 7261782LLU;

	t56 = (((x229&x230)/x231)&x232);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = 3LL;
	int8_t x234 = -9;
	static int8_t x235 = -1;
	static uint8_t x236 = 10U;
	static int64_t t57 = -43191LL;

	t57 = (((x233&x234)/x235)&x236);

	if (t57 != 8LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x239 = INT16_MIN;
	int64_t x240 = -1201665256LL;
	static int64_t t58 = 12LL;

	t58 = (((x237&x238)/x239)&x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 592625786LLU;
	static int8_t x242 = INT8_MIN;
	static int64_t x243 = 5883746329251LL;
	int8_t x244 = INT8_MIN;
	static volatile uint64_t t59 = 270182LLU;

	t59 = (((x241&x242)/x243)&x244);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x246 = 60U;
	uint64_t x247 = 748012310787LLU;
	int8_t x248 = INT8_MIN;
	uint64_t t60 = 115964LLU;

	t60 = (((x245&x246)/x247)&x248);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = 7834166025653998572LLU;
	int8_t x250 = INT8_MAX;
	uint8_t x252 = UINT8_MAX;

	t61 = (((x249&x250)/x251)&x252);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x255 = 51207878LLU;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t62 = 1745LLU;

	t62 = (((x253&x254)/x255)&x256);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x258 = INT64_MIN;
	uint32_t x259 = UINT32_MAX;
	int64_t t63 = -203352260244238135LL;

	t63 = (((x257&x258)/x259)&x260);

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x262 = -31LL;
	uint16_t x263 = 288U;
	uint8_t x264 = 57U;

	t64 = (((x261&x262)/x263)&x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x266 = INT8_MIN;
	uint16_t x267 = 1U;
	volatile int64_t t65 = 2LL;

	t65 = (((x265&x266)/x267)&x268);

	if (t65 != 1990656LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	volatile int64_t x274 = -4804LL;
	static volatile uint16_t x275 = 1U;
	int64_t x276 = -1LL;
	int64_t t66 = -3756LL;

	t66 = (((x273&x274)/x275)&x276);

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	uint16_t x279 = 13U;
	static volatile int32_t x280 = INT32_MIN;
	uint64_t t67 = 7544315LLU;

	t67 = (((x277&x278)/x279)&x280);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x282 = INT64_MAX;
	static volatile int64_t x283 = INT64_MIN;
	static volatile int32_t x284 = INT32_MAX;

	t68 = (((x281&x282)/x283)&x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x285 = UINT16_MAX;
	volatile int8_t x286 = 1;
	int64_t x287 = 203118481LL;
	static int64_t t69 = -108508161417843LL;

	t69 = (((x285&x286)/x287)&x288);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x289 = UINT32_MAX;
	uint32_t x290 = 32325334U;
	volatile int64_t x291 = -1LL;

	t70 = (((x289&x290)/x291)&x292);

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x296 = 4218374359838135LL;
	int64_t t71 = -2040462880933LL;

	t71 = (((x293&x294)/x295)&x296);

	if (t71 != 4077634723971072LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -300600581010LL;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = INT64_MIN;

	t72 = (((x297&x298)/x299)&x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 5019474LLU;
	int16_t x302 = -278;
	static int16_t x303 = INT16_MIN;
	int8_t x304 = -1;
	uint64_t t73 = 770LLU;

	t73 = (((x301&x302)/x303)&x304);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x306 = 5497U;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t74 = 1U;

	t74 = (((x305&x306)/x307)&x308);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MAX;
	static int8_t x311 = INT8_MIN;
	uint16_t x312 = 26084U;

	t75 = (((x309&x310)/x311)&x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x313 = 7194U;
	uint16_t x316 = 10896U;

	t76 = (((x313&x314)/x315)&x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x317 = 1668237U;
	int16_t x318 = INT16_MIN;
	static volatile int8_t x319 = 16;
	int8_t x320 = INT8_MAX;
	uint32_t t77 = 49U;

	t77 = (((x317&x318)/x319)&x320);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = 124008LLU;
	static uint8_t x322 = 35U;
	int8_t x323 = -1;
	static uint64_t t78 = 222899413LLU;

	t78 = (((x321&x322)/x323)&x324);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x325 = 1224268;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = INT32_MIN;
	int32_t x328 = -58329;
	uint32_t t79 = 312291920U;

	t79 = (((x325&x326)/x327)&x328);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x329 = 2LLU;
	int16_t x330 = INT16_MIN;
	static int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;

	t80 = (((x329&x330)/x331)&x332);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x334 = 83U;
	uint32_t x335 = 499496U;
	uint16_t x336 = UINT16_MAX;

	t81 = (((x333&x334)/x335)&x336);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = -2;
	static uint8_t x338 = UINT8_MAX;
	static int16_t x340 = INT16_MAX;
	int32_t t82 = 1;

	t82 = (((x337&x338)/x339)&x340);

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = -27;
	uint16_t x342 = UINT16_MAX;
	uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = -1;
	volatile int32_t t83 = -22005467;

	t83 = (((x341&x342)/x343)&x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x345 = INT64_MIN;
	int32_t x346 = -7023762;
	static uint16_t x347 = 5136U;
	volatile int64_t t84 = 12009089012LL;

	t84 = (((x345&x346)/x347)&x348);

	if (t84 != -1795827888795712LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	static volatile uint32_t x350 = 3016589U;
	int8_t x351 = INT8_MIN;
	static int32_t x352 = INT32_MIN;
	static volatile uint32_t t85 = 7930U;

	t85 = (((x349&x350)/x351)&x352);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x353 = 0U;
	static uint16_t x354 = 52U;
	volatile int16_t x355 = INT16_MAX;
	static int8_t x356 = 1;
	int32_t t86 = -53;

	t86 = (((x353&x354)/x355)&x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = -1;
	volatile int16_t x358 = -1;
	int32_t x359 = INT32_MAX;
	static volatile int64_t t87 = 2993096132950LL;

	t87 = (((x357&x358)/x359)&x360);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	uint8_t x362 = 11U;
	int32_t x363 = INT32_MAX;
	uint64_t x364 = 255072LLU;
	uint64_t t88 = 11LLU;

	t88 = (((x361&x362)/x363)&x364);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x368 = 10U;
	int64_t t89 = 77731188008360LL;

	t89 = (((x365&x366)/x367)&x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MAX;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 10U;
	int64_t t90 = -437786530933323571LL;

	t90 = (((x369&x370)/x371)&x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x373 = INT32_MAX;
	static volatile uint8_t x374 = 21U;
	volatile uint16_t x375 = 8005U;
	int32_t x376 = INT32_MAX;
	int32_t t91 = 81;

	t91 = (((x373&x374)/x375)&x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x378 = 2LLU;
	int64_t x379 = -1099367946LL;
	volatile uint64_t t92 = 206933LLU;

	t92 = (((x377&x378)/x379)&x380);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = 124;
	int16_t x383 = INT16_MIN;
	volatile int32_t x384 = -254;
	static int32_t t93 = -8997694;

	t93 = (((x381&x382)/x383)&x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x385 = UINT64_MAX;
	volatile int64_t x386 = -1LL;
	static uint64_t x387 = UINT64_MAX;
	int8_t x388 = -8;
	static volatile uint64_t t94 = 241296LLU;

	t94 = (((x385&x386)/x387)&x388);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x390 = INT32_MIN;
	int32_t x391 = -86;
	uint64_t x392 = 54905803608LLU;
	uint64_t t95 = 12LLU;

	t95 = (((x389&x390)/x391)&x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x393 = 1U;
	static int64_t x394 = INT64_MIN;
	volatile uint8_t x395 = 42U;
	int16_t x396 = -1;
	int64_t t96 = 3088LL;

	t96 = (((x393&x394)/x395)&x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x398 = INT64_MIN;
	volatile uint64_t x399 = UINT64_MAX;
	int16_t x400 = INT16_MIN;
	uint64_t t97 = 1055608353319LLU;

	t97 = (((x397&x398)/x399)&x400);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x401 = UINT32_MAX;
	int8_t x402 = -1;
	int64_t x403 = 1856913785695154683LL;
	int16_t x404 = -1;
	int64_t t98 = 7150317LL;

	t98 = (((x401&x402)/x403)&x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 1U;
	static uint8_t x406 = 1U;
	volatile int64_t x408 = INT64_MIN;
	static volatile int64_t t99 = 175504111LL;

	t99 = (((x405&x406)/x407)&x408);

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

