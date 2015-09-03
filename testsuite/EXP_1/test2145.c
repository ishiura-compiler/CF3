#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
static volatile int32_t t0 = 466675;
int32_t x10 = -1;
int64_t x16 = INT64_MIN;
int32_t x17 = -2581338;
volatile int32_t t4 = 524413661;
static volatile int8_t x23 = 15;
static uint16_t x29 = UINT16_MAX;
uint8_t x30 = 88U;
int32_t t7 = -1;
volatile int64_t t9 = 2436081895810478LL;
int32_t x48 = INT32_MIN;
static int64_t x61 = INT64_MAX;
volatile int16_t x65 = INT16_MIN;
uint16_t x68 = 14U;
static uint16_t x72 = 3080U;
volatile int16_t x80 = INT16_MAX;
int64_t x87 = INT64_MAX;
static int8_t x96 = -1;
static int16_t x112 = INT16_MAX;
volatile int32_t t27 = 122576167;
uint64_t x114 = 141007569LLU;
uint16_t x119 = UINT16_MAX;
uint32_t x124 = 0U;
static volatile int64_t t32 = 609358810209300094LL;
static volatile int32_t x134 = INT32_MAX;
uint32_t t37 = 518176288U;
volatile int8_t x157 = INT8_MIN;
volatile int32_t t39 = 26;
int8_t x161 = 1;
uint32_t x166 = 4697951U;
uint64_t x168 = 20LLU;
uint64_t x172 = 2974168471LLU;
volatile uint64_t t42 = 1LLU;
volatile int16_t x173 = INT16_MIN;
int64_t x180 = -4589065793LL;
uint64_t x181 = 7012427LLU;
int8_t x182 = 15;
static int8_t x186 = 1;
uint64_t x188 = UINT64_MAX;
static uint32_t x189 = 649548056U;
volatile int32_t x192 = INT32_MIN;
int8_t x193 = -1;
int16_t x195 = INT16_MIN;
uint32_t x204 = 26500U;
volatile int32_t x211 = -1;
int8_t x218 = INT8_MAX;
static volatile int64_t x224 = -6989889706298978LL;
int8_t x225 = INT8_MAX;
static uint32_t x226 = UINT32_MAX;
uint32_t x228 = 298U;
static volatile uint32_t t56 = 3565607U;
int64_t x234 = -1LL;
int16_t x236 = -32;
volatile int8_t x241 = INT8_MAX;
static int16_t x244 = -6;
uint64_t x245 = 0LLU;
int32_t x246 = INT32_MIN;
int16_t x248 = INT16_MIN;
int32_t t62 = -198992076;
int64_t x253 = INT64_MAX;
static uint8_t x254 = UINT8_MAX;
volatile int32_t x261 = -2;
static uint64_t t66 = UINT64_MAX;
volatile int32_t t67 = -3015;
uint64_t t71 = 6LLU;
uint64_t x292 = 1805295LLU;
int64_t x296 = -1LL;
uint8_t x297 = 8U;
volatile uint32_t x310 = UINT32_MAX;
volatile int32_t x317 = INT32_MIN;
int64_t x319 = 25879330LL;
int8_t x325 = INT8_MIN;
int8_t x328 = INT8_MAX;
int16_t x333 = -1;
int16_t x334 = -1;
uint16_t x335 = 807U;
int16_t x344 = INT16_MAX;
volatile int32_t t86 = -17;
uint32_t x350 = 5U;
uint64_t x352 = 49610110306LLU;
static volatile uint64_t t87 = 10176196978729LLU;
int32_t x353 = -1;
int32_t x356 = -1;
int32_t x358 = INT32_MIN;
int64_t t91 = -8161349420566311LL;
uint16_t x371 = 7U;
volatile int8_t x373 = INT8_MIN;
int32_t x378 = INT32_MIN;
int64_t x381 = -1785574LL;
int8_t x383 = -1;
static uint32_t t95 = 85U;
volatile uint64_t x387 = 439824LLU;
int32_t x397 = -1850;
int32_t x400 = INT32_MAX;
int32_t t99 = INT32_MAX;


void f0(void) {
	volatile int8_t x1 = -48;
	uint16_t x3 = 0U;
	static uint16_t x4 = UINT16_MAX;

	t0 = (((x1^x2)<x3)^x4);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -7;
	uint8_t x6 = UINT8_MAX;
	static uint64_t x7 = 605645888LLU;
	int16_t x8 = 0;
	int32_t t1 = 926955;

	t1 = (((x5^x6)<x7)^x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	static int64_t x11 = -9794652277912LL;
	volatile uint32_t x12 = UINT32_MAX;
	uint32_t t2 = UINT32_MAX;

	t2 = (((x9^x10)<x11)^x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int8_t x14 = -2;
	int32_t x15 = INT32_MAX;
	volatile int64_t t3 = 152LL;

	t3 = (((x13^x14)<x15)^x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	uint16_t x19 = 1U;
	volatile int32_t x20 = 122712;

	t4 = (((x17^x18)<x19)^x20);

	if (t4 != 122712) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int32_t x22 = -1;
	static int8_t x24 = -1;
	static volatile int32_t t5 = -40152330;

	t5 = (((x21^x22)<x23)^x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile uint64_t x26 = 240LLU;
	static uint32_t x27 = UINT32_MAX;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = INT32_MIN;

	t6 = (((x25^x26)<x27)^x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = INT16_MIN;
	int16_t x32 = -1;

	t7 = (((x29^x30)<x31)^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	uint16_t x36 = 140U;
	int32_t t8 = -555693359;

	t8 = (((x33^x34)<x35)^x36);

	if (t8 != 140) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 7881954U;
	static uint8_t x38 = 1U;
	int16_t x39 = INT16_MIN;
	static int64_t x40 = 3165LL;

	t9 = (((x37^x38)<x39)^x40);

	if (t9 != 3164LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	volatile int8_t x42 = INT8_MIN;
	int32_t x43 = -60798;
	uint64_t x44 = 1381212LLU;
	volatile uint64_t t10 = 1286751026043503484LLU;

	t10 = (((x41^x42)<x43)^x44);

	if (t10 != 1381212LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile int16_t x46 = 100;
	int16_t x47 = INT16_MAX;
	volatile int32_t t11 = -19859136;

	t11 = (((x45^x46)<x47)^x48);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = 3;
	volatile int8_t x51 = INT8_MIN;
	uint64_t x52 = 30847LLU;
	volatile uint64_t t12 = 12793336403LLU;

	t12 = (((x49^x50)<x51)^x52);

	if (t12 != 30847LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 17U;
	uint64_t x54 = 743388983627586635LLU;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -7LL;

	t13 = (((x53^x54)<x55)^x56);

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	static uint32_t x58 = UINT32_MAX;
	int64_t x59 = INT64_MAX;
	int16_t x60 = -31;
	int32_t t14 = -5441;

	t14 = (((x57^x58)<x59)^x60);

	if (t14 != -32) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = INT8_MIN;
	int16_t x63 = -1;
	static int8_t x64 = -48;
	volatile int32_t t15 = 20018359;

	t15 = (((x61^x62)<x63)^x64);

	if (t15 != -47) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	int8_t x67 = INT8_MIN;
	static volatile int32_t t16 = -188;

	t16 = (((x65^x66)<x67)^x68);

	if (t16 != 15) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	uint64_t x71 = 285123433907714LLU;
	static volatile int32_t t17 = 10465271;

	t17 = (((x69^x70)<x71)^x72);

	if (t17 != 3081) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	static uint16_t x74 = UINT16_MAX;
	uint32_t x75 = 483317U;
	int64_t x76 = -1125128351147859986LL;
	int64_t t18 = 63503882LL;

	t18 = (((x73^x74)<x75)^x76);

	if (t18 != -1125128351147859986LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 17005279207690LLU;
	int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MAX;
	volatile int32_t t19 = -1;

	t19 = (((x77^x78)<x79)^x80);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	volatile int32_t x82 = INT32_MIN;
	int64_t x83 = -1LL;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -28;

	t20 = (((x81^x82)<x83)^x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 23129111U;
	int64_t x88 = 39479203LL;
	int64_t t21 = 14231LL;

	t21 = (((x85^x86)<x87)^x88);

	if (t21 != 39479202LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 7;
	uint8_t x90 = 69U;
	int8_t x91 = 1;
	uint16_t x92 = UINT16_MAX;
	static int32_t t22 = -44;

	t22 = (((x89^x90)<x91)^x92);

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -121;
	int16_t x94 = INT16_MIN;
	static int8_t x95 = 3;
	volatile int32_t t23 = 1;

	t23 = (((x93^x94)<x95)^x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	volatile uint16_t x98 = UINT16_MAX;
	int8_t x99 = -1;
	int64_t x100 = 540356080876LL;
	int64_t t24 = 436446761528LL;

	t24 = (((x97^x98)<x99)^x100);

	if (t24 != 540356080876LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = INT8_MIN;
	uint32_t x102 = 58313U;
	int16_t x103 = INT16_MIN;
	int32_t x104 = -61328;
	volatile int32_t t25 = 13591304;

	t25 = (((x101^x102)<x103)^x104);

	if (t25 != -61327) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 53U;
	int16_t x106 = INT16_MIN;
	volatile int16_t x107 = INT16_MAX;
	int16_t x108 = -11205;
	int32_t t26 = 3656420;

	t26 = (((x105^x106)<x107)^x108);

	if (t26 != -11206) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -55519322232LL;
	uint32_t x110 = 733139U;
	static uint8_t x111 = 63U;

	t27 = (((x109^x110)<x111)^x112);

	if (t27 != 32766) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = 400;

	t28 = (((x113^x114)<x115)^x116);

	if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MIN;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t29 = -931515492;

	t29 = (((x117^x118)<x119)^x120);

	if (t29 != 2147483646) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 24984916LLU;
	int8_t x122 = -1;
	static uint8_t x123 = UINT8_MAX;
	static uint32_t t30 = 50851U;

	t30 = (((x121^x122)<x123)^x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 58U;
	uint16_t x126 = 29U;
	uint8_t x127 = 10U;
	uint8_t x128 = 28U;
	static int32_t t31 = -1391;

	t31 = (((x125^x126)<x127)^x128);

	if (t31 != 28) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 51;
	static int8_t x130 = INT8_MAX;
	int32_t x131 = 3;
	int64_t x132 = -51815055456144412LL;

	t32 = (((x129^x130)<x131)^x132);

	if (t32 != -51815055456144412LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint8_t x135 = 124U;
	static volatile int8_t x136 = INT8_MAX;
	volatile int32_t t33 = -8545;

	t33 = (((x133^x134)<x135)^x136);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = UINT8_MAX;
	int64_t x138 = -795399787LL;
	int16_t x139 = INT16_MIN;
	volatile int8_t x140 = INT8_MAX;
	static volatile int32_t t34 = -38;

	t34 = (((x137^x138)<x139)^x140);

	if (t34 != 126) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = INT32_MIN;
	static int8_t x143 = INT8_MAX;
	uint32_t x144 = 495U;
	volatile uint32_t t35 = 15U;

	t35 = (((x141^x142)<x143)^x144);

	if (t35 != 495U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	uint16_t x146 = 50U;
	static volatile uint32_t x147 = UINT32_MAX;
	uint8_t x148 = 15U;
	volatile int32_t t36 = 222751910;

	t36 = (((x145^x146)<x147)^x148);

	if (t36 != 14) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -3625411794043054LL;
	int16_t x150 = -1;
	int64_t x151 = INT64_MAX;
	static volatile uint32_t x152 = UINT32_MAX;

	t37 = (((x149^x150)<x151)^x152);

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 13646068;
	int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = -162496565;

	t38 = (((x153^x154)<x155)^x156);

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x158 = -1LL;
	volatile uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 3734U;

	t39 = (((x157^x158)<x159)^x160);

	if (t39 != 3735) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	volatile int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 31154;

	t40 = (((x161^x162)<x163)^x164);

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = UINT64_MAX;
	uint16_t x167 = 2137U;
	volatile uint64_t t41 = 1811619765732LLU;

	t41 = (((x165^x166)<x167)^x168);

	if (t41 != 20LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 1U;
	uint64_t x170 = UINT64_MAX;
	uint32_t x171 = 771442U;

	t42 = (((x169^x170)<x171)^x172);

	if (t42 != 2974168471LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	static int64_t x175 = -471454LL;
	int32_t x176 = INT32_MIN;
	int32_t t43 = INT32_MIN;

	t43 = (((x173^x174)<x175)^x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x179 = 181134745;
	int64_t t44 = 798899LL;

	t44 = (((x177^x178)<x179)^x180);

	if (t44 != -4589065794LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x183 = 4036899626642707LLU;
	uint64_t x184 = 4747143490866798641LLU;
	volatile uint64_t t45 = 277LLU;

	t45 = (((x181^x182)<x183)^x184);

	if (t45 != 4747143490866798640LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	uint32_t x187 = 12U;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (((x185^x186)<x187)^x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x190 = 1U;
	int64_t x191 = INT64_MAX;
	static volatile int32_t t47 = 45921140;

	t47 = (((x189^x190)<x191)^x192);

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = -1;
	uint16_t x196 = 17U;
	int32_t t48 = 1154;

	t48 = (((x193^x194)<x195)^x196);

	if (t48 != 17) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -2;
	volatile int64_t x198 = 71239232226642411LL;
	int64_t x199 = -1LL;
	uint64_t x200 = 29078912LLU;
	volatile uint64_t t49 = 13355193628423LLU;

	t49 = (((x197^x198)<x199)^x200);

	if (t49 != 29078913LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile int64_t x202 = INT64_MIN;
	int64_t x203 = -1LL;
	uint32_t t50 = 1U;

	t50 = (((x201^x202)<x203)^x204);

	if (t50 != 26501U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	static uint32_t x206 = 2U;
	static int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 443470;

	t51 = (((x205^x206)<x207)^x208);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	uint32_t x210 = 8025386U;
	volatile int8_t x212 = -6;
	int32_t t52 = -5806;

	t52 = (((x209^x210)<x211)^x212);

	if (t52 != -5) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	static int64_t x216 = -1LL;
	static volatile int64_t t53 = 1484902489596LL;

	t53 = (((x213^x214)<x215)^x216);

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -606LL;
	int16_t x219 = -2851;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (((x217^x218)<x219)^x220);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = UINT32_MAX;
	volatile uint16_t x223 = 5U;
	volatile int64_t t55 = 66934637186286LL;

	t55 = (((x221^x222)<x223)^x224);

	if (t55 != -6989889706298978LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x227 = INT8_MIN;

	t56 = (((x225^x226)<x227)^x228);

	if (t56 != 298U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 347756742;
	uint64_t x230 = 6744271338170248LLU;
	static int16_t x231 = -81;
	uint32_t x232 = 20482U;
	volatile uint32_t t57 = 28U;

	t57 = (((x229^x230)<x231)^x232);

	if (t57 != 20483U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x235 = 31949346994625LLU;
	static volatile int32_t t58 = -2859;

	t58 = (((x233^x234)<x235)^x236);

	if (t58 != -32) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	static volatile int64_t x239 = INT64_MIN;
	volatile uint64_t x240 = 1932101963449356LLU;
	uint64_t t59 = 342193068LLU;

	t59 = (((x237^x238)<x239)^x240);

	if (t59 != 1932101963449356LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = 2068;
	uint32_t x243 = 2081680U;
	static volatile int32_t t60 = 628687467;

	t60 = (((x241^x242)<x243)^x244);

	if (t60 != -5) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x247 = -4447;
	int32_t t61 = -4;

	t61 = (((x245^x246)<x247)^x248);

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	int32_t x251 = 58059021;
	int8_t x252 = INT8_MIN;

	t62 = (((x249^x250)<x251)^x252);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x255 = -1LL;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = -7734366;

	t63 = (((x253^x254)<x255)^x256);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x258 = INT64_MAX;
	uint16_t x259 = UINT16_MAX;
	uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = 2010;

	t64 = (((x257^x258)<x259)^x260);

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x262 = 8LL;
	uint16_t x263 = 114U;
	int32_t x264 = INT32_MIN;
	int32_t t65 = 2671;

	t65 = (((x261^x262)<x263)^x264);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = UINT32_MAX;
	uint32_t x266 = UINT32_MAX;
	static int64_t x267 = -171380441LL;
	volatile uint64_t x268 = UINT64_MAX;

	t66 = (((x265^x266)<x267)^x268);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	static int64_t x270 = INT64_MIN;
	volatile uint32_t x271 = 3304U;
	uint8_t x272 = UINT8_MAX;

	t67 = (((x269^x270)<x271)^x272);

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = -22874561537358795LL;
	static int32_t x275 = INT32_MIN;
	volatile int16_t x276 = INT16_MIN;
	int32_t t68 = 272070;

	t68 = (((x273^x274)<x275)^x276);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = 10;
	uint8_t x278 = 3U;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -1;
	static int32_t t69 = 0;

	t69 = (((x277^x278)<x279)^x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 3941LL;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	static uint8_t x284 = UINT8_MAX;
	static int32_t t70 = -157;

	t70 = (((x281^x282)<x283)^x284);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = UINT16_MAX;
	uint16_t x286 = UINT16_MAX;
	static uint64_t x287 = 449698037795334LLU;
	uint64_t x288 = UINT64_MAX;

	t71 = (((x285^x286)<x287)^x288);

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 147U;
	volatile int16_t x290 = INT16_MIN;
	int64_t x291 = -146441LL;
	static uint64_t t72 = 437133254033944LLU;

	t72 = (((x289^x290)<x291)^x292);

	if (t72 != 1805295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	uint16_t x294 = 1U;
	static volatile uint64_t x295 = 1993LLU;
	volatile int64_t t73 = -8793133747986LL;

	t73 = (((x293^x294)<x295)^x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x298 = UINT16_MAX;
	int16_t x299 = -1;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = (((x297^x298)<x299)^x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -1;
	static uint32_t x302 = UINT32_MAX;
	static int32_t x303 = INT32_MIN;
	volatile int16_t x304 = -1;
	volatile int32_t t75 = -26745;

	t75 = (((x301^x302)<x303)^x304);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = INT8_MIN;
	static int32_t x306 = INT32_MIN;
	static volatile uint32_t x307 = UINT32_MAX;
	static int32_t x308 = INT32_MIN;
	int32_t t76 = 25565736;

	t76 = (((x305^x306)<x307)^x308);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MAX;
	static uint16_t x311 = 3U;
	int32_t x312 = INT32_MAX;
	volatile int32_t t77 = INT32_MAX;

	t77 = (((x309^x310)<x311)^x312);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	int8_t x314 = INT8_MIN;
	volatile int64_t x315 = -109196476905LL;
	static volatile int8_t x316 = INT8_MIN;
	int32_t t78 = 0;

	t78 = (((x313^x314)<x315)^x316);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x318 = INT8_MAX;
	volatile uint64_t x320 = 4178084352047741705LLU;
	uint64_t t79 = 115143240024LLU;

	t79 = (((x317^x318)<x319)^x320);

	if (t79 != 4178084352047741704LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	static uint16_t x322 = UINT16_MAX;
	int16_t x323 = -1;
	volatile int32_t x324 = -2941612;
	static int32_t t80 = 339321426;

	t80 = (((x321^x322)<x323)^x324);

	if (t80 != -2941611) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = INT32_MAX;
	int32_t x327 = INT32_MIN;
	int32_t t81 = -66;

	t81 = (((x325^x326)<x327)^x328);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int16_t x330 = INT16_MAX;
	uint32_t x331 = 640080433U;
	int64_t x332 = INT64_MIN;
	int64_t t82 = INT64_MIN;

	t82 = (((x329^x330)<x331)^x332);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x336 = INT8_MAX;
	static int32_t t83 = 1019;

	t83 = (((x333^x334)<x335)^x336);

	if (t83 != 126) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	static int8_t x338 = -1;
	int64_t x339 = INT64_MIN;
	static volatile int8_t x340 = 0;
	int32_t t84 = 3;

	t84 = (((x337^x338)<x339)^x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int16_t x342 = INT16_MIN;
	uint16_t x343 = UINT16_MAX;
	int32_t t85 = -729;

	t85 = (((x341^x342)<x343)^x344);

	if (t85 != 32766) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 1339338U;
	uint32_t x346 = UINT32_MAX;
	uint64_t x347 = 19LLU;
	int16_t x348 = INT16_MAX;

	t86 = (((x345^x346)<x347)^x348);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 839U;
	int8_t x351 = -59;

	t87 = (((x349^x350)<x351)^x352);

	if (t87 != 49610110307LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = 10LL;
	int64_t x355 = INT64_MIN;
	int32_t t88 = 226606;

	t88 = (((x353^x354)<x355)^x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	static uint16_t x359 = UINT16_MAX;
	int64_t x360 = -118LL;
	int64_t t89 = -67LL;

	t89 = (((x357^x358)<x359)^x360);

	if (t89 != -118LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 22354U;
	int16_t x362 = 1;
	int8_t x363 = INT8_MAX;
	volatile int64_t x364 = 10626020LL;
	int64_t t90 = -255LL;

	t90 = (((x361^x362)<x363)^x364);

	if (t90 != 10626020LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = -1;
	int8_t x367 = 3;
	int64_t x368 = -32LL;

	t91 = (((x365^x366)<x367)^x368);

	if (t91 != -32LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 146U;
	int16_t x370 = 673;
	int32_t x372 = 29758749;
	volatile int32_t t92 = -8536;

	t92 = (((x369^x370)<x371)^x372);

	if (t92 != 29758749) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -1;
	uint8_t x375 = 2U;
	volatile uint32_t x376 = 479U;
	volatile uint32_t t93 = 1765823U;

	t93 = (((x373^x374)<x375)^x376);

	if (t93 != 479U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	static int8_t x379 = -2;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (((x377^x378)<x379)^x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MAX;
	uint32_t x384 = UINT32_MAX;

	t95 = (((x381^x382)<x383)^x384);

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 166523U;
	static uint64_t x386 = UINT64_MAX;
	uint8_t x388 = 101U;
	volatile int32_t t96 = -46983104;

	t96 = (((x385^x386)<x387)^x388);

	if (t96 != 101) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	volatile int32_t x390 = -25038248;
	volatile int16_t x391 = -911;
	int8_t x392 = -29;
	int32_t t97 = -468;

	t97 = (((x389^x390)<x391)^x392);

	if (t97 != -29) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = UINT8_MAX;
	int32_t x394 = INT32_MIN;
	static int8_t x395 = INT8_MAX;
	static int64_t x396 = INT64_MAX;
	int64_t t98 = -108LL;

	t98 = (((x393^x394)<x395)^x396);

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = 62497609135130592LLU;
	int32_t x399 = INT32_MAX;

	t99 = (((x397^x398)<x399)^x400);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

