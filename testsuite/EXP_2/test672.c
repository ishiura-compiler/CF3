#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x9 = 1719714;
int32_t x16 = -1;
uint64_t x33 = 819266333LLU;
uint8_t x37 = UINT8_MAX;
uint32_t x38 = UINT32_MAX;
uint16_t x40 = UINT16_MAX;
uint64_t x41 = UINT64_MAX;
int32_t x45 = -1;
uint8_t x48 = 78U;
volatile int32_t t11 = -25331056;
int32_t x49 = INT32_MIN;
static int16_t x52 = -1;
int32_t t13 = 3;
int8_t x61 = INT8_MIN;
volatile int32_t t15 = -977;
uint16_t x68 = 1U;
volatile int32_t t16 = -26241130;
static uint8_t x70 = 2U;
int16_t x72 = INT16_MIN;
int64_t x73 = INT64_MIN;
int8_t x75 = -1;
uint64_t x77 = 6LLU;
volatile int32_t x78 = INT32_MIN;
static volatile uint16_t x80 = 5U;
int32_t t19 = 2;
uint64_t x82 = UINT64_MAX;
static int32_t t20 = -446515563;
int8_t x87 = INT8_MIN;
int32_t x93 = -42547830;
int64_t x94 = INT64_MAX;
int32_t t24 = -44;
int64_t x107 = INT64_MIN;
static uint64_t x110 = UINT64_MAX;
static int8_t x117 = 17;
int32_t t28 = -436;
uint16_t x122 = 18020U;
int16_t x126 = INT16_MIN;
static uint8_t x127 = 84U;
volatile int32_t t31 = 424735;
int16_t x140 = -1;
uint8_t x145 = UINT8_MAX;
volatile int32_t t35 = 543651;
uint16_t x154 = UINT16_MAX;
volatile uint8_t x156 = 4U;
volatile int32_t t37 = 3001;
volatile int8_t x159 = -1;
uint16_t x168 = 16873U;
volatile int64_t x171 = INT64_MIN;
volatile int32_t t41 = 28165;
volatile int32_t x181 = INT32_MAX;
int8_t x183 = -48;
int32_t t43 = 55031;
static int16_t x192 = INT16_MIN;
volatile int32_t t46 = 265758991;
int64_t x205 = 8148529LL;
int64_t x206 = INT64_MIN;
static int32_t t52 = -2729514;
volatile int32_t x228 = -1;
int32_t t53 = -1851109;
static int16_t x229 = 258;
int32_t t56 = -35309;
int8_t x244 = INT8_MAX;
int16_t x248 = INT16_MIN;
int32_t t59 = 5900930;
int16_t x253 = INT16_MIN;
uint8_t x254 = 1U;
int16_t x255 = -1;
int32_t t60 = 3400;
int8_t x258 = INT8_MIN;
uint32_t x260 = 950U;
static int8_t x266 = INT8_MIN;
int64_t x268 = INT64_MIN;
static volatile int32_t t64 = 531;
uint8_t x274 = 3U;
volatile uint8_t x275 = 22U;
volatile uint16_t x276 = UINT16_MAX;
volatile int32_t t65 = 0;
int32_t x279 = -58136140;
int32_t x281 = -69482860;
static int64_t x282 = -1LL;
static int64_t x285 = 739304405630637LL;
int32_t x289 = 210575;
int32_t x291 = INT32_MIN;
int32_t t69 = 22;
int16_t x294 = INT16_MIN;
int32_t t71 = -898;
volatile int32_t t72 = -1163645;
int32_t x310 = 6711;
static int16_t x317 = 2343;
static volatile uint8_t x319 = 30U;
int32_t x331 = 261511307;
static int8_t x340 = 19;
uint64_t x342 = 10324176809803LLU;
int64_t x345 = 1LL;
int16_t x353 = -1;
int32_t t83 = -187415;
int64_t x359 = INT64_MIN;
int64_t x364 = INT64_MAX;
static uint64_t x367 = 762667LLU;
int8_t x370 = INT8_MAX;
volatile int32_t t88 = -4882;
int8_t x379 = 32;
uint32_t x383 = UINT32_MAX;
int32_t x390 = INT32_MIN;
static uint8_t x391 = 15U;
static uint16_t x392 = 2U;
static int32_t x394 = INT32_MAX;
int32_t x395 = INT32_MIN;
int16_t x396 = -1;
int32_t x397 = INT32_MAX;
uint8_t x404 = UINT8_MAX;
volatile int32_t t95 = -1;
static uint32_t x405 = UINT32_MAX;
int16_t x407 = -8;
int64_t x415 = INT64_MIN;
static int16_t x419 = INT16_MIN;
static volatile int32_t t99 = 7961;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MAX;
	int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -3139;

	t0 = ((x1^(x2/x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int16_t x6 = INT16_MIN;
	uint8_t x7 = 31U;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -1;

	t1 = ((x5^(x6/x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MAX;
	uint64_t x12 = 157494LLU;
	int32_t t2 = 122;

	t2 = ((x9^(x10/x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 192965499492862LL;
	volatile uint64_t x14 = 2105775LLU;
	int64_t x15 = -2144573LL;
	int32_t t3 = -3015905;

	t3 = ((x13^(x14/x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int8_t x18 = -3;
	static int16_t x19 = INT16_MIN;
	volatile int32_t x20 = INT32_MAX;
	int32_t t4 = 4;

	t4 = ((x17^(x18/x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = -1;
	static volatile int16_t x23 = INT16_MIN;
	static volatile int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -28904;

	t5 = ((x21^(x22/x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = -234879;
	uint8_t x26 = 101U;
	uint16_t x27 = 4U;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -3917076;

	t6 = ((x25^(x26/x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 843146097U;
	int16_t x30 = INT16_MIN;
	int16_t x31 = -1;
	uint32_t x32 = 63398720U;
	volatile int32_t t7 = -962790940;

	t7 = ((x29^(x30/x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 911U;
	int32_t x35 = -1;
	int8_t x36 = -10;
	volatile int32_t t8 = 34;

	t8 = ((x33^(x34/x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x39 = 28U;
	int32_t t9 = 6;

	t9 = ((x37^(x38/x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = 10282;
	uint16_t x43 = UINT16_MAX;
	uint64_t x44 = 8LLU;
	volatile int32_t t10 = 1;

	t10 = ((x41^(x42/x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	int16_t x47 = INT16_MIN;

	t11 = ((x45^(x46/x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 5343145LLU;
	uint8_t x51 = 59U;
	volatile int32_t t12 = 17;

	t12 = ((x49^(x50/x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 9855123068851LLU;
	int8_t x54 = -1;
	int32_t x55 = INT32_MAX;
	static int64_t x56 = 158435393224309171LL;

	t13 = ((x53^(x54/x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	volatile int64_t x59 = -1LL;
	volatile int64_t x60 = 19110884890353LL;
	int32_t t14 = -449455352;

	t14 = ((x57^(x58/x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	int8_t x64 = -25;

	t15 = ((x61^(x62/x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	uint8_t x66 = 1U;
	volatile uint16_t x67 = 2621U;

	t16 = ((x65^(x66/x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile uint16_t x71 = 2U;
	int32_t t17 = -40;

	t17 = ((x69^(x70/x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = 0;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = 67625;

	t18 = ((x73^(x74/x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x79 = INT32_MIN;

	t19 = ((x77^(x78/x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	static volatile int64_t x83 = 56515929768LL;
	uint16_t x84 = 10U;

	t20 = ((x81^(x82/x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	volatile int16_t x86 = INT16_MAX;
	static int64_t x88 = INT64_MIN;
	static int32_t t21 = 434;

	t21 = ((x85^(x86/x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 22U;
	int64_t x90 = INT64_MIN;
	static uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MAX;
	static volatile int32_t t22 = 633;

	t22 = ((x89^(x90/x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = INT64_MIN;
	uint8_t x96 = 0U;
	volatile int32_t t23 = 1;

	t23 = ((x93^(x94/x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	volatile uint16_t x102 = 464U;
	int16_t x103 = -1;
	int8_t x104 = INT8_MIN;

	t24 = ((x101^(x102/x103))<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 97611920107319446LL;
	volatile uint64_t x106 = 6LLU;
	int16_t x108 = INT16_MAX;
	static int32_t t25 = -145;

	t25 = ((x105^(x106/x107))<x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = -1LL;
	int16_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t26 = 196952127;

	t26 = ((x109^(x110/x111))<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 1053205490U;
	int16_t x114 = -12410;
	volatile int32_t x115 = INT32_MAX;
	uint64_t x116 = UINT64_MAX;
	int32_t t27 = 684911262;

	t27 = ((x113^(x114/x115))<x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x118 = -1LL;
	int64_t x119 = -1LL;
	static int8_t x120 = 31;

	t28 = ((x117^(x118/x119))<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x123 = -33;
	uint16_t x124 = 26733U;
	volatile int32_t t29 = 12966241;

	t29 = ((x121^(x122/x123))<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MAX;
	uint32_t x128 = 354U;
	volatile int32_t t30 = -6392;

	t30 = ((x125^(x126/x127))<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 0;
	uint64_t x130 = 20381LLU;
	uint16_t x131 = UINT16_MAX;
	static volatile int64_t x132 = INT64_MIN;

	t31 = ((x129^(x130/x131))<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	int16_t x134 = -1;
	uint8_t x135 = 13U;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t32 = -8984539;

	t32 = ((x133^(x134/x135))<x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 7345U;
	volatile int64_t x138 = -1LL;
	uint64_t x139 = 1LLU;
	int32_t t33 = 523264248;

	t33 = ((x137^(x138/x139))<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = 60877134372435604LLU;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t34 = 2;

	t34 = ((x141^(x142/x143))<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = INT8_MIN;
	uint32_t x147 = UINT32_MAX;
	int32_t x148 = INT32_MAX;

	t35 = ((x145^(x146/x147))<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	static int64_t x151 = -1627530LL;
	int64_t x152 = INT64_MAX;
	static int32_t t36 = 21;

	t36 = ((x149^(x150/x151))<x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -1;
	int16_t x155 = -49;

	t37 = ((x153^(x154/x155))<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x157 = UINT16_MAX;
	uint16_t x158 = UINT16_MAX;
	static volatile int16_t x160 = INT16_MAX;
	volatile int32_t t38 = -4960;

	t38 = ((x157^(x158/x159))<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	int32_t t39 = 11;

	t39 = ((x165^(x166/x167))<x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 202275888U;
	int8_t x170 = -1;
	int64_t x172 = -1LL;
	static int32_t t40 = 26989;

	t40 = ((x169^(x170/x171))<x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = 10746U;
	volatile int32_t x174 = -224371;
	volatile int64_t x175 = 9039737846LL;
	int64_t x176 = INT64_MAX;

	t41 = ((x173^(x174/x175))<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = UINT8_MAX;
	static int32_t x178 = -1;
	volatile uint16_t x179 = 12643U;
	static uint8_t x180 = UINT8_MAX;
	int32_t t42 = -7738;

	t42 = ((x177^(x178/x179))<x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x182 = 14U;
	volatile int64_t x184 = INT64_MIN;

	t43 = ((x181^(x182/x183))<x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x185 = 28;
	int16_t x186 = -1;
	int64_t x187 = INT64_MIN;
	int16_t x188 = -1;
	static volatile int32_t t44 = -64317710;

	t44 = ((x185^(x186/x187))<x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x189 = -1;
	int64_t x190 = INT64_MIN;
	uint16_t x191 = UINT16_MAX;
	static int32_t t45 = 115740324;

	t45 = ((x189^(x190/x191))<x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	int8_t x195 = -1;
	int64_t x196 = 5196246000670409LL;

	t46 = ((x193^(x194/x195))<x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MIN;
	static volatile int64_t x198 = INT64_MIN;
	uint8_t x199 = 24U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t47 = -1404601;

	t47 = ((x197^(x198/x199))<x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 0U;
	static int8_t x202 = -1;
	static int64_t x203 = 9LL;
	uint16_t x204 = 53U;
	static volatile int32_t t48 = -997567675;

	t48 = ((x201^(x202/x203))<x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x207 = INT64_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	int32_t t49 = -14;

	t49 = ((x205^(x206/x207))<x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MIN;
	volatile int8_t x214 = INT8_MAX;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 152739694LLU;
	int32_t t50 = 1;

	t50 = ((x213^(x214/x215))<x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = INT32_MIN;
	uint64_t x218 = 909LLU;
	int16_t x219 = 76;
	int32_t x220 = 700;
	volatile int32_t t51 = 0;

	t51 = ((x217^(x218/x219))<x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = -1;
	int8_t x222 = -1;
	int32_t x223 = -1379316;
	volatile int64_t x224 = 1071610652LL;

	t52 = ((x221^(x222/x223))<x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = -857;
	int16_t x226 = 1;
	int8_t x227 = INT8_MIN;

	t53 = ((x225^(x226/x227))<x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x230 = 2867064U;
	static int16_t x231 = INT16_MAX;
	uint16_t x232 = 3U;
	static volatile int32_t t54 = 775;

	t54 = ((x229^(x230/x231))<x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x233 = -1;
	static volatile int64_t x234 = -1LL;
	int16_t x235 = -1848;
	int64_t x236 = INT64_MIN;
	volatile int32_t t55 = 55;

	t55 = ((x233^(x234/x235))<x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	int16_t x238 = -16107;
	volatile uint64_t x239 = 3956165140425286004LLU;
	static int32_t x240 = -10602464;

	t56 = ((x237^(x238/x239))<x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x242 = -1LL;
	static volatile int32_t x243 = INT32_MIN;
	volatile int32_t t57 = -21753;

	t57 = ((x241^(x242/x243))<x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = 5556U;
	volatile int64_t x247 = -7807558436945719LL;
	int32_t t58 = -1;

	t58 = ((x245^(x246/x247))<x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	static uint64_t x250 = 352248549078814526LLU;
	static int8_t x251 = -1;
	int64_t x252 = -1LL;

	t59 = ((x249^(x250/x251))<x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x256 = UINT8_MAX;

	t60 = ((x253^(x254/x255))<x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = 28;
	int64_t x259 = -64921169810LL;
	volatile int32_t t61 = 64969;

	t61 = ((x257^(x258/x259))<x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x261 = INT32_MAX;
	static int8_t x262 = INT8_MIN;
	uint16_t x263 = 92U;
	int16_t x264 = -1;
	volatile int32_t t62 = 0;

	t62 = ((x261^(x262/x263))<x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int16_t x267 = -3534;
	int32_t t63 = -2;

	t63 = ((x265^(x266/x267))<x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MAX;
	static uint16_t x272 = UINT16_MAX;

	t64 = ((x269^(x270/x271))<x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MAX;

	t65 = ((x273^(x274/x275))<x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x277 = UINT16_MAX;
	int64_t x278 = -3783992LL;
	volatile int16_t x280 = -1;
	volatile int32_t t66 = -262104273;

	t66 = ((x277^(x278/x279))<x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x283 = 44697LL;
	volatile int32_t x284 = INT32_MAX;
	volatile int32_t t67 = -18413;

	t67 = ((x281^(x282/x283))<x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x286 = 8U;
	int64_t x287 = INT64_MIN;
	static volatile int16_t x288 = -3;
	int32_t t68 = 24508;

	t68 = ((x285^(x286/x287))<x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x290 = -1;
	volatile int8_t x292 = INT8_MAX;

	t69 = ((x289^(x290/x291))<x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x293 = INT16_MAX;
	uint8_t x295 = 2U;
	static volatile int32_t x296 = 1;
	volatile int32_t t70 = 4149;

	t70 = ((x293^(x294/x295))<x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = INT64_MAX;
	int64_t x302 = 57LL;
	int64_t x303 = INT64_MIN;
	int64_t x304 = 1LL;

	t71 = ((x301^(x302/x303))<x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x305 = 280074355U;
	static uint32_t x306 = 103U;
	int32_t x307 = INT32_MIN;
	volatile int32_t x308 = -99231372;

	t72 = ((x305^(x306/x307))<x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x309 = 11724U;
	int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	int32_t t73 = 35766559;

	t73 = ((x309^(x310/x311))<x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x318 = 6U;
	int32_t x320 = -1;
	volatile int32_t t74 = -1475049;

	t74 = ((x317^(x318/x319))<x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x322 = 37LLU;
	int8_t x323 = 9;
	static int16_t x324 = INT16_MIN;
	static volatile int32_t t75 = -75;

	t75 = ((x321^(x322/x323))<x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	static volatile int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = UINT8_MAX;
	int32_t t76 = 12;

	t76 = ((x325^(x326/x327))<x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x329 = INT16_MIN;
	volatile uint64_t x330 = UINT64_MAX;
	uint32_t x332 = 21855399U;
	int32_t t77 = 1;

	t77 = ((x329^(x330/x331))<x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MIN;
	static uint32_t x335 = 914602U;
	int64_t x336 = 115924849941494412LL;
	int32_t t78 = 1037090714;

	t78 = ((x333^(x334/x335))<x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = 7;
	static uint8_t x339 = 1U;
	volatile int32_t t79 = 1;

	t79 = ((x337^(x338/x339))<x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x341 = INT8_MAX;
	int16_t x343 = 4071;
	static int16_t x344 = -1;
	static int32_t t80 = -65364941;

	t80 = ((x341^(x342/x343))<x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x346 = INT32_MAX;
	volatile int32_t x347 = INT32_MIN;
	volatile uint64_t x348 = 92047LLU;
	int32_t t81 = 40;

	t81 = ((x345^(x346/x347))<x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x349 = 858614U;
	int32_t x350 = -1;
	static uint64_t x351 = 828952651LLU;
	int32_t x352 = -1;
	volatile int32_t t82 = 483179600;

	t82 = ((x349^(x350/x351))<x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x354 = INT32_MAX;
	static volatile int8_t x355 = INT8_MIN;
	volatile uint32_t x356 = 19265185U;

	t83 = ((x353^(x354/x355))<x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = 231722121;
	volatile uint8_t x358 = 2U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t84 = 1;

	t84 = ((x357^(x358/x359))<x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x362 = 0U;
	int16_t x363 = INT16_MIN;
	static volatile int32_t t85 = -22;

	t85 = ((x361^(x362/x363))<x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x365 = UINT8_MAX;
	volatile uint8_t x366 = 48U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t86 = -27;

	t86 = ((x365^(x366/x367))<x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x369 = -254;
	int64_t x371 = INT64_MIN;
	static int32_t x372 = INT32_MIN;
	int32_t t87 = 113881731;

	t87 = ((x369^(x370/x371))<x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x373 = 178U;
	int8_t x374 = -2;
	volatile int64_t x375 = -1LL;
	volatile int16_t x376 = 65;

	t88 = ((x373^(x374/x375))<x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x377 = 1U;
	volatile uint16_t x378 = UINT16_MAX;
	volatile int64_t x380 = -1LL;
	int32_t t89 = 13;

	t89 = ((x377^(x378/x379))<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x381 = INT8_MIN;
	static int16_t x382 = -130;
	uint8_t x384 = UINT8_MAX;
	int32_t t90 = -711498;

	t90 = ((x381^(x382/x383))<x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x385 = -177543LL;
	int32_t x386 = INT32_MIN;
	static volatile int64_t x387 = INT64_MIN;
	int32_t x388 = 341;
	volatile int32_t t91 = -23;

	t91 = ((x385^(x386/x387))<x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x389 = INT8_MIN;
	volatile int32_t t92 = 1;

	t92 = ((x389^(x390/x391))<x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = -1;
	volatile int32_t t93 = -1;

	t93 = ((x393^(x394/x395))<x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MAX;
	static uint8_t x400 = UINT8_MAX;
	volatile int32_t t94 = 380197836;

	t94 = ((x397^(x398/x399))<x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 10U;
	volatile uint16_t x402 = 0U;
	static volatile uint8_t x403 = 89U;

	t95 = ((x401^(x402/x403))<x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x406 = 8152U;
	static volatile int64_t x408 = -1LL;
	int32_t t96 = 107839534;

	t96 = ((x405^(x406/x407))<x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = INT8_MIN;
	static uint32_t x410 = 59U;
	int32_t x411 = -1;
	int8_t x412 = -61;
	static int32_t t97 = -42480;

	t97 = ((x409^(x410/x411))<x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x413 = 0U;
	volatile int16_t x414 = -653;
	static volatile int32_t x416 = 0;
	int32_t t98 = -2;

	t98 = ((x413^(x414/x415))<x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MIN;
	int16_t x418 = INT16_MIN;
	uint32_t x420 = 7838U;

	t99 = ((x417^(x418/x419))<x420);

	if (t99 != 1) { NG(); } else { ; }
	
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

