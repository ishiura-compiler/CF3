#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
int64_t x3 = INT64_MAX;
int16_t x8 = 2784;
volatile int32_t x11 = -3159160;
volatile int64_t t3 = INT64_MIN;
int16_t x19 = INT16_MIN;
static uint64_t x21 = 4LLU;
static uint64_t x24 = UINT64_MAX;
int32_t x28 = INT32_MAX;
volatile int64_t x32 = INT64_MIN;
int8_t x35 = 1;
int32_t t8 = -19766086;
int8_t x37 = INT8_MIN;
int32_t x41 = INT32_MIN;
int32_t x44 = -10526613;
int8_t x51 = INT8_MIN;
volatile int64_t x53 = INT64_MIN;
uint8_t x54 = 124U;
int32_t x56 = -1;
uint8_t x58 = 1U;
static int8_t x62 = 3;
uint64_t x65 = 11930130972LLU;
int8_t x66 = INT8_MAX;
int64_t x69 = INT64_MIN;
int64_t t17 = 277LL;
uint16_t x82 = UINT16_MAX;
static volatile int64_t t20 = 1370876439806116736LL;
int8_t x92 = INT8_MIN;
uint32_t x93 = UINT32_MAX;
volatile uint32_t x95 = 12225027U;
uint64_t t23 = 2184298634994783LLU;
static volatile int64_t t24 = -38850990LL;
uint32_t x102 = 235847U;
uint64_t t25 = 6LLU;
uint32_t x106 = 2073778U;
static int16_t x107 = INT16_MIN;
volatile int64_t x108 = 210939540865568865LL;
int64_t t26 = 1LL;
uint8_t x109 = 60U;
int16_t x112 = INT16_MIN;
static uint64_t x117 = UINT64_MAX;
int16_t x122 = INT16_MAX;
volatile int32_t x124 = -1;
volatile int64_t x125 = INT64_MIN;
uint64_t x127 = 2897390411041477091LLU;
int16_t x128 = INT16_MIN;
int8_t x134 = INT8_MAX;
uint16_t x141 = 6064U;
volatile int8_t x146 = INT8_MAX;
int16_t x148 = INT16_MIN;
uint64_t x153 = 0LLU;
int16_t x156 = INT16_MAX;
volatile int64_t t39 = -97LL;
int64_t x169 = -1LL;
int64_t x170 = -1LL;
static volatile uint16_t x178 = UINT16_MAX;
uint16_t x184 = 5748U;
int16_t x186 = -48;
volatile int64_t t46 = -10757073LL;
uint64_t x190 = UINT64_MAX;
int32_t x191 = -51761865;
volatile int64_t x193 = -848241929939329212LL;
volatile int8_t x194 = -11;
volatile int64_t t48 = -67342LL;
uint8_t x206 = UINT8_MAX;
int64_t x208 = 0LL;
static int16_t x210 = INT16_MAX;
int64_t x211 = INT64_MIN;
int32_t t53 = 1;
int16_t x218 = 1;
volatile uint16_t x221 = 1U;
int32_t x223 = 96461745;
int32_t x225 = INT32_MIN;
int8_t x232 = INT8_MIN;
static int64_t x234 = -1LL;
volatile int64_t t58 = -950LL;
volatile int32_t t59 = 6784;
volatile int32_t t60 = 128450;
int32_t x246 = INT32_MAX;
static int32_t t61 = 219;
int32_t x252 = INT32_MAX;
static int16_t x257 = INT16_MIN;
volatile uint64_t t63 = 1LLU;
int8_t x263 = INT8_MAX;
static int32_t x275 = INT32_MIN;
volatile int32_t t67 = 49490142;
int64_t t70 = -11038796414109LL;
int64_t t71 = 839191625285192488LL;
uint32_t x302 = 103975632U;
uint32_t x304 = UINT32_MAX;
volatile int64_t t72 = -2065223695158LL;
int8_t x311 = -1;
static uint32_t t74 = UINT32_MAX;
int32_t x322 = -3;
uint8_t x324 = UINT8_MAX;
static int64_t t77 = 12704LL;
int8_t x327 = -1;
uint8_t x330 = 13U;
int8_t x332 = -1;
volatile int8_t x335 = -1;
uint8_t x346 = UINT8_MAX;
uint16_t x347 = UINT16_MAX;
static int32_t t85 = -496515119;
int16_t x363 = 1;
int8_t x365 = -12;
int64_t x369 = -1LL;
static int32_t x373 = -1;
uint64_t x374 = 408297942546782374LLU;
volatile int8_t x378 = 7;
static volatile uint64_t t91 = 5094652637LLU;
int16_t x383 = INT16_MIN;
volatile uint32_t t92 = 9189U;
volatile int64_t t94 = INT64_MIN;
static int64_t x395 = INT64_MIN;
static volatile uint8_t x411 = UINT8_MAX;
static volatile int32_t t98 = -83;
static int8_t x421 = INT8_MIN;
static uint64_t x422 = 536709877LLU;
static uint64_t t99 = 4550459030221240227LLU;


void f0(void) {
	uint64_t x1 = 1493066044899570242LLU;
	static uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 796879383459LLU;

	t0 = (((x1/x2)|x3)&x4);

	if (t0 != 65535LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = 1;
	static volatile uint16_t x7 = UINT16_MAX;
	static int32_t t1 = -328;

	t1 = (((x5/x6)|x7)&x8);

	if (t1 != 2784) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x10 = 13U;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 712894551207144LLU;

	t2 = (((x9/x10)|x11)&x12);

	if (t2 != 18446744073708502952LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 7U;
	int16_t x14 = 85;
	int64_t x15 = INT64_MIN;
	int64_t x16 = -198979958190512292LL;

	t3 = (((x13/x14)|x15)&x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 4U;
	volatile int16_t x18 = INT16_MAX;
	int32_t x20 = INT32_MAX;
	uint32_t t4 = 0U;

	t4 = (((x17/x18)|x19)&x20);

	if (t4 != 2147450880U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 491151U;
	int32_t x23 = 105185376;
	uint64_t t5 = 34889073428013536LLU;

	t5 = (((x21/x22)|x23)&x24);

	if (t5 != 105185376LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MAX;
	volatile int64_t t6 = 38561095LL;

	t6 = (((x25/x26)|x27)&x28);

	if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MIN;
	int64_t t7 = INT64_MIN;

	t7 = (((x29/x30)|x31)&x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 6U;
	int32_t x34 = INT32_MAX;
	static int32_t x36 = 149;

	t8 = (((x33/x34)|x35)&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	static int64_t x39 = -9569413755LL;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 1068831790LLU;

	t9 = (((x37/x38)|x39)&x40);

	if (t9 != 18446744064140137861LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = INT32_MIN;
	uint16_t x43 = UINT16_MAX;
	static int32_t t10 = 111;

	t10 = (((x41/x42)|x43)&x44);

	if (t10 != 24683) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile uint16_t x46 = UINT16_MAX;
	static volatile uint64_t x47 = 1258167742LLU;
	int64_t x48 = INT64_MIN;
	volatile uint64_t t11 = 195898515509LLU;

	t11 = (((x45/x46)|x47)&x48);

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int16_t x50 = INT16_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	volatile uint64_t t12 = 94328841792430154LLU;

	t12 = (((x49/x50)|x51)&x52);

	if (t12 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x55 = -1;
	int64_t t13 = -3185LL;

	t13 = (((x53/x54)|x55)&x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	volatile int8_t x59 = INT8_MIN;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t14 = INT64_MAX;

	t14 = (((x57/x58)|x59)&x60);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 31U;
	int32_t x63 = -1;
	int8_t x64 = 12;
	int32_t t15 = 58454;

	t15 = (((x61/x62)|x63)&x64);

	if (t15 != 12) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = INT16_MAX;
	static int32_t x68 = -972;
	uint64_t t16 = 13158LLU;

	t16 = (((x65/x66)|x67)&x68);

	if (t16 != 93944884LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = UINT16_MAX;
	uint16_t x71 = 2568U;
	int32_t x72 = -14807;

	t17 = (((x69/x70)|x71)&x72);

	if (t17 != -140739635871224LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	static uint16_t x74 = UINT16_MAX;
	static volatile uint32_t x75 = 14U;
	int32_t x76 = INT32_MAX;
	uint32_t t18 = 2495840U;

	t18 = (((x73/x74)|x75)&x76);

	if (t18 != 14U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = 1;
	static int8_t x78 = INT8_MIN;
	static int32_t x79 = -231;
	int32_t x80 = INT32_MIN;
	int32_t t19 = INT32_MIN;

	t19 = (((x77/x78)|x79)&x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 471046956U;
	int64_t x83 = INT64_MIN;
	int64_t x84 = 742632968796851989LL;

	t20 = (((x81/x82)|x83)&x84);

	if (t20 != 3089LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int16_t x86 = -1;
	volatile int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	int64_t t21 = INT64_MIN;

	t21 = (((x85/x86)|x87)&x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	uint16_t x90 = 749U;
	static int16_t x91 = -186;
	volatile uint64_t t22 = 122504199938LLU;

	t22 = (((x89/x90)|x91)&x92);

	if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 14LLU;
	int16_t x96 = -1;

	t23 = (((x93/x94)|x95)&x96);

	if (t23 != 318484115LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -1;
	int64_t x98 = INT64_MAX;
	uint32_t x99 = 304521203U;
	static uint16_t x100 = UINT16_MAX;

	t24 = (((x97/x98)|x99)&x100);

	if (t24 != 40947LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	uint64_t x103 = 1LLU;
	int16_t x104 = -1;

	t25 = (((x101/x102)|x103)&x104);

	if (t25 != 18211LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;

	t26 = (((x105/x106)|x107)&x108);

	if (t26 != 308281344LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = 932;
	int32_t x111 = INT32_MIN;
	volatile int32_t t27 = INT32_MIN;

	t27 = (((x109/x110)|x111)&x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x113 = -630839253;
	uint16_t x114 = 9U;
	int16_t x115 = -1;
	static uint32_t x116 = 24U;
	uint32_t t28 = 348U;

	t28 = (((x113/x114)|x115)&x116);

	if (t28 != 24U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = -1;
	int64_t x119 = 138417779691934LL;
	int8_t x120 = -1;
	static uint64_t t29 = 38LLU;

	t29 = (((x117/x118)|x119)&x120);

	if (t29 != 138417779691935LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -6204;
	int64_t x123 = INT64_MAX;
	static volatile int64_t t30 = INT64_MAX;

	t30 = (((x121/x122)|x123)&x124);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = INT32_MIN;
	static uint64_t t31 = 7555441374780166112LLU;

	t31 = (((x125/x126)|x127)&x128);

	if (t31 != 2897390415336439808LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	uint32_t x130 = 86U;
	static uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 627241828U;
	volatile uint32_t t32 = 565U;

	t32 = (((x129/x130)|x131)&x132);

	if (t32 != 6423396U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = -47880252;
	int16_t x135 = 54;
	int64_t x136 = INT64_MIN;
	int64_t t33 = INT64_MIN;

	t33 = (((x133/x134)|x135)&x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int8_t x138 = -1;
	static uint32_t x139 = 264905U;
	uint32_t x140 = 51198307U;
	static uint32_t t34 = 96711U;

	t34 = (((x137/x138)|x139)&x140);

	if (t34 != 264257U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 69298304;
	volatile uint64_t x143 = 1775LLU;
	static uint64_t x144 = UINT64_MAX;
	volatile uint64_t t35 = 100822684681190395LLU;

	t35 = (((x141/x142)|x143)&x144);

	if (t35 != 1775LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int16_t x147 = INT16_MAX;
	int32_t t36 = 197933920;

	t36 = (((x145/x146)|x147)&x148);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 203899U;
	static int64_t x150 = -23751106LL;
	static uint64_t x151 = UINT64_MAX;
	volatile uint8_t x152 = 3U;
	uint64_t t37 = 1057LLU;

	t37 = (((x149/x150)|x151)&x152);

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 1U;
	int16_t x155 = INT16_MAX;
	uint64_t t38 = 88627245LLU;

	t38 = (((x153/x154)|x155)&x156);

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static int64_t x158 = 2LL;
	static uint8_t x159 = 10U;
	int16_t x160 = 1;

	t39 = (((x157/x158)|x159)&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = UINT16_MAX;
	static int64_t x162 = 3354137882575LL;
	int32_t x163 = INT32_MAX;
	static uint64_t x164 = 69335364LLU;
	uint64_t t40 = 0LLU;

	t40 = (((x161/x162)|x163)&x164);

	if (t40 != 69335364LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int32_t x166 = -1;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MIN;
	int32_t t41 = INT32_MIN;

	t41 = (((x165/x166)|x167)&x168);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = -1;
	int16_t x172 = -1;
	static volatile int64_t t42 = -2162299858266LL;

	t42 = (((x169/x170)|x171)&x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	static int8_t x174 = INT8_MAX;
	int32_t x175 = -33265;
	int64_t x176 = -460744504440LL;
	volatile int64_t t43 = -4212304876LL;

	t43 = (((x173/x174)|x175)&x176);

	if (t43 != -460744537336LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 90827171U;
	static uint16_t x179 = 13U;
	static volatile int8_t x180 = 6;
	static uint32_t t44 = 22032U;

	t44 = (((x177/x178)|x179)&x180);

	if (t44 != 4U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 13;
	int16_t x182 = -1;
	volatile int8_t x183 = -1;
	static int32_t t45 = 87238692;

	t45 = (((x181/x182)|x183)&x184);

	if (t45 != 5748) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int16_t x187 = INT16_MIN;
	static int64_t x188 = INT64_MAX;

	t46 = (((x185/x186)|x187)&x188);

	if (t46 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t47 = 26LLU;

	t47 = (((x189/x190)|x191)&x192);

	if (t47 != 18446744073657789696LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x195 = UINT16_MAX;
	uint32_t x196 = 1475864U;

	t48 = (((x193/x194)|x195)&x196);

	if (t48 != 1344792LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 0U;
	uint64_t x198 = 7LLU;
	int16_t x199 = -14307;
	static int8_t x200 = -1;
	volatile uint64_t t49 = 170409492478102LLU;

	t49 = (((x197/x198)|x199)&x200);

	if (t49 != 18446744073709537309LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -1;
	volatile int64_t x202 = 613314557104620LL;
	int16_t x203 = -2;
	int64_t x204 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (((x201/x202)|x203)&x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	volatile uint16_t x207 = 2U;
	volatile int64_t t51 = -124853094352LL;

	t51 = (((x205/x206)|x207)&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -10;
	static volatile uint32_t x212 = 1429504U;
	static volatile int64_t t52 = -61569463LL;

	t52 = (((x209/x210)|x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	static int8_t x215 = -1;
	int16_t x216 = INT16_MIN;

	t53 = (((x213/x214)|x215)&x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -72068;
	uint8_t x219 = UINT8_MAX;
	volatile uint64_t x220 = 271406LLU;
	uint64_t t54 = 59129985LLU;

	t54 = (((x217/x218)|x219)&x220);

	if (t54 != 271406LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	int64_t x224 = -14370LL;
	uint64_t t55 = 7998744756220LLU;

	t55 = (((x221/x222)|x223)&x224);

	if (t55 != 96453520LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = -50;
	int16_t x227 = -1851;
	static int64_t x228 = INT64_MIN;
	static int64_t t56 = INT64_MIN;

	t56 = (((x225/x226)|x227)&x228);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	static uint8_t x230 = 1U;
	static int32_t x231 = INT32_MIN;
	volatile int32_t t57 = -105;

	t57 = (((x229/x230)|x231)&x232);

	if (t57 != -2147483520) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 4;
	uint8_t x235 = UINT8_MAX;
	int32_t x236 = INT32_MIN;

	t58 = (((x233/x234)|x235)&x236);

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 37U;
	int32_t x238 = -199310;
	int32_t x239 = 491917;
	static int8_t x240 = 40;

	t59 = (((x237/x238)|x239)&x240);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	static volatile int8_t x242 = INT8_MIN;
	int16_t x243 = -1;
	int32_t x244 = -5249;

	t60 = (((x241/x242)|x243)&x244);

	if (t60 != -5249) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 2U;
	uint8_t x247 = 63U;
	int16_t x248 = 13;

	t61 = (((x245/x246)|x247)&x248);

	if (t61 != 13) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -13;
	int16_t x250 = -1;
	uint64_t x251 = 2600169747073830LLU;
	volatile uint64_t t62 = 165906657LLU;

	t62 = (((x249/x250)|x251)&x252);

	if (t62 != 841042735LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x258 = UINT64_MAX;
	static int16_t x259 = INT16_MIN;
	int64_t x260 = 6465431099118LL;

	t63 = (((x257/x258)|x259)&x260);

	if (t63 != 6465431076864LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MAX;
	volatile uint32_t x264 = 149811U;
	static volatile uint32_t t64 = 53021521U;

	t64 = (((x261/x262)|x263)&x264);

	if (t64 != 51U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = 3U;
	static uint32_t x270 = 481U;
	static int8_t x271 = 28;
	volatile int32_t x272 = -94644658;
	uint32_t t65 = 4511U;

	t65 = (((x269/x270)|x271)&x272);

	if (t65 != 12U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MAX;
	int8_t x274 = -1;
	int16_t x276 = INT16_MIN;
	static volatile int64_t t66 = -204798818599038LL;

	t66 = (((x273/x274)|x275)&x276);

	if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = 64273;
	static uint8_t x278 = 8U;
	int32_t x279 = -243;
	int32_t x280 = -1;

	t67 = (((x277/x278)|x279)&x280);

	if (t67 != -145) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MAX;
	static uint8_t x283 = 4U;
	volatile int32_t x284 = -526;
	static int64_t t68 = 0LL;

	t68 = (((x281/x282)|x283)&x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x289 = INT64_MAX;
	int32_t x290 = 1307;
	uint16_t x291 = 7U;
	uint16_t x292 = 2398U;
	volatile int64_t t69 = 1558147LL;

	t69 = (((x289/x290)|x291)&x292);

	if (t69 != 94LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = 23U;
	volatile int64_t x295 = INT64_MAX;
	int16_t x296 = 22;

	t70 = (((x293/x294)|x295)&x296);

	if (t70 != 22LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	static uint32_t x298 = 977U;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = INT8_MIN;

	t71 = (((x297/x298)|x299)&x300);

	if (t71 != -9440503620108416LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	int16_t x303 = -1;

	t72 = (((x301/x302)|x303)&x304);

	if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = -468959565845303999LL;
	volatile uint8_t x306 = 23U;
	uint8_t x307 = UINT8_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile int64_t t73 = 3LL;

	t73 = (((x305/x306)|x307)&x308);

	if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x309 = 10U;
	int16_t x310 = -1;
	static uint32_t x312 = UINT32_MAX;

	t74 = (((x309/x310)|x311)&x312);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile int8_t x314 = 5;
	int32_t x315 = -1;
	volatile int64_t x316 = 2LL;
	volatile int64_t t75 = 7196204LL;

	t75 = (((x313/x314)|x315)&x316);

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	volatile int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MAX;
	volatile int64_t t76 = 33961426890LL;

	t76 = (((x317/x318)|x319)&x320);

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x321 = -1LL;
	int16_t x323 = -1;

	t77 = (((x321/x322)|x323)&x324);

	if (t77 != 255LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x325 = -1;
	int64_t x326 = -24015784015338LL;
	int8_t x328 = INT8_MAX;
	volatile int64_t t78 = 251LL;

	t78 = (((x325/x326)|x327)&x328);

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = -1LL;
	volatile uint32_t x331 = 879U;
	int64_t t79 = 2811324LL;

	t79 = (((x329/x330)|x331)&x332);

	if (t79 != 879LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = -1786LL;
	static uint64_t x336 = 15735292315LLU;
	volatile uint64_t t80 = 292203LLU;

	t80 = (((x333/x334)|x335)&x336);

	if (t80 != 15735292315LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x337 = INT64_MAX;
	int64_t x338 = -15558954128LL;
	int32_t x339 = 60814;
	volatile uint64_t x340 = 6984LLU;
	uint64_t t81 = 218157204795301283LLU;

	t81 = (((x337/x338)|x339)&x340);

	if (t81 != 6472LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = 7LL;
	int16_t x342 = INT16_MIN;
	int32_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (((x341/x342)|x343)&x344);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x345 = UINT32_MAX;
	static int16_t x348 = -3946;
	volatile uint32_t t83 = 1493448070U;

	t83 = (((x345/x346)|x347)&x348);

	if (t83 != 16904342U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = 41132;
	uint32_t x350 = UINT32_MAX;
	volatile int16_t x351 = 23;
	int8_t x352 = -1;
	static uint32_t t84 = 19U;

	t84 = (((x349/x350)|x351)&x352);

	if (t84 != 23U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = 28;
	static int8_t x354 = 48;
	int8_t x355 = 53;
	int32_t x356 = INT32_MAX;

	t85 = (((x353/x354)|x355)&x356);

	if (t85 != 53) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = UINT16_MAX;
	int32_t x358 = 5491902;
	int8_t x359 = INT8_MIN;
	static uint64_t x360 = 34323990936LLU;
	uint64_t t86 = 2029437052128564LLU;

	t86 = (((x357/x358)|x359)&x360);

	if (t86 != 34323990912LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = 0;
	static volatile int16_t x362 = INT16_MAX;
	uint32_t x364 = 188863U;
	volatile uint32_t t87 = 255U;

	t87 = (((x361/x362)|x363)&x364);

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x366 = 426U;
	int8_t x367 = INT8_MIN;
	static uint8_t x368 = 6U;
	static int32_t t88 = -38;

	t88 = (((x365/x366)|x367)&x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x370 = 12453;
	static int8_t x371 = INT8_MIN;
	volatile int8_t x372 = 1;
	int64_t t89 = -1108495560719825165LL;

	t89 = (((x369/x370)|x371)&x372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x375 = -1;
	int16_t x376 = -29;
	static uint64_t t90 = 25146494304259LLU;

	t90 = (((x373/x374)|x375)&x376);

	if (t90 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x377 = 1434856LLU;
	volatile int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MAX;

	t91 = (((x377/x378)|x379)&x380);

	if (t91 != 204979LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = 25U;
	uint16_t x382 = 12681U;
	volatile uint32_t x384 = UINT32_MAX;

	t92 = (((x381/x382)|x383)&x384);

	if (t92 != 4294934528U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = 7175LLU;
	volatile int16_t x386 = INT16_MIN;
	int32_t x387 = -1;
	int16_t x388 = INT16_MAX;
	uint64_t t93 = 3183359473448841464LLU;

	t93 = (((x385/x386)|x387)&x388);

	if (t93 != 32767LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x389 = -1LL;
	int64_t x390 = 531302376117897858LL;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;

	t94 = (((x389/x390)|x391)&x392);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = 10707271122556LLU;
	uint64_t x394 = UINT64_MAX;
	int16_t x396 = -5;
	static uint64_t t95 = 203225592859LLU;

	t95 = (((x393/x394)|x395)&x396);

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = 46U;
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MAX;
	int8_t x400 = -2;
	static int64_t t96 = -526LL;

	t96 = (((x397/x398)|x399)&x400);

	if (t96 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MIN;
	int8_t x402 = -1;
	uint8_t x403 = 99U;
	int8_t x404 = -1;
	volatile int32_t t97 = -1;

	t97 = (((x401/x402)|x403)&x404);

	if (t97 != 32867) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x409 = 7U;
	volatile int32_t x410 = INT32_MIN;
	int8_t x412 = INT8_MAX;

	t98 = (((x409/x410)|x411)&x412);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x423 = -466;
	int64_t x424 = -1LL;

	t99 = (((x421/x422)|x423)&x424);

	if (t99 != 18446744073709551358LLU) { NG(); } else { ; }
	
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

