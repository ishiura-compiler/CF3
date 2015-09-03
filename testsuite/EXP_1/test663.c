#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -14187;
int32_t x7 = INT32_MIN;
uint64_t x8 = 3033773096062323657LLU;
uint64_t t1 = 72835548708070824LLU;
int8_t x9 = -13;
int8_t x11 = INT8_MAX;
int8_t x15 = -1;
volatile int64_t x21 = 18919LL;
uint32_t x23 = UINT32_MAX;
uint8_t x34 = 1U;
int64_t x39 = INT64_MIN;
int16_t x42 = INT16_MIN;
int64_t x48 = INT64_MAX;
int64_t x55 = -56LL;
int32_t x74 = INT32_MIN;
uint32_t x75 = 115743U;
int8_t x80 = INT8_MIN;
static int64_t t18 = 147LL;
uint64_t x83 = UINT64_MAX;
static int16_t x84 = INT16_MIN;
volatile int16_t x88 = 10;
int8_t x89 = INT8_MIN;
int8_t x90 = INT8_MAX;
static volatile int64_t t21 = 1232268299974LL;
int8_t x95 = INT8_MAX;
volatile int8_t x96 = -23;
uint32_t t23 = 1U;
volatile int64_t t24 = 25526163709317244LL;
int16_t x109 = 0;
static int8_t x115 = INT8_MIN;
volatile int64_t x121 = -3003LL;
volatile uint8_t x127 = 3U;
int8_t x153 = INT8_MIN;
static uint64_t x160 = 487152600224074LLU;
int8_t x162 = -1;
static int8_t x165 = INT8_MIN;
uint64_t x166 = 7LLU;
volatile uint64_t t40 = 288031673333631807LLU;
static int64_t t42 = -485LL;
static int8_t x178 = INT8_MIN;
int32_t x179 = INT32_MAX;
int8_t x180 = INT8_MIN;
volatile int32_t t43 = -215349;
int32_t x185 = -10533679;
int32_t x187 = 2955804;
uint32_t x195 = 962965U;
uint64_t t47 = 447LLU;
uint8_t x198 = UINT8_MAX;
int32_t t51 = -797;
volatile uint16_t x214 = UINT16_MAX;
volatile int64_t t52 = INT64_MAX;
uint32_t x228 = UINT32_MAX;
uint8_t x234 = 44U;
volatile int32_t x236 = INT32_MIN;
volatile int32_t t57 = INT32_MAX;
int16_t x238 = INT16_MIN;
volatile int32_t x243 = 949957;
int64_t t60 = 24381592939407403LL;
int8_t x250 = -1;
static volatile int16_t x251 = 19;
volatile int64_t t62 = 27693189025LL;
int16_t x262 = -1;
int16_t x269 = 91;
uint64_t x271 = UINT64_MAX;
static int8_t x273 = -1;
uint64_t x280 = UINT64_MAX;
int32_t x282 = INT32_MAX;
volatile uint64_t t69 = 11404028067371621LLU;
volatile uint16_t x285 = 6040U;
volatile uint64_t t73 = 16584274347LLU;
uint32_t x301 = 6U;
static volatile uint16_t x302 = UINT16_MAX;
volatile int8_t x306 = -1;
uint8_t x314 = 2U;
volatile uint64_t t77 = 156LLU;
volatile int64_t t78 = -85LL;
static int16_t x323 = -1;
int32_t x333 = 58683;
static volatile int64_t t82 = -8453130LL;
volatile uint32_t t85 = 19692U;
int64_t x349 = INT64_MAX;
uint32_t x352 = 3U;
static uint8_t x356 = UINT8_MAX;
volatile int64_t x364 = INT64_MAX;
uint16_t x373 = UINT16_MAX;
int16_t x379 = INT16_MAX;
int32_t x380 = INT32_MAX;
int32_t x381 = INT32_MIN;
int16_t x382 = -8;
static uint8_t x385 = 0U;
uint16_t x386 = 1U;
int32_t t96 = -470;
volatile uint8_t x398 = 61U;
volatile uint16_t x406 = UINT16_MAX;
int8_t x407 = 0;
int64_t x408 = -1LL;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -1043537729LL;

	t0 = (((x1/x2)|x3)^x4);

	if (t0 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int16_t x6 = 108;

	t1 = (((x5/x6)|x7)^x8);

	if (t1 != 15412970976203473589LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -650LL;
	int32_t x12 = -17;
	int64_t t2 = 1018662055401047LL;

	t2 = (((x9/x10)|x11)^x12);

	if (t2 != -112LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1438;
	uint64_t x14 = 517895371LLU;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t3 = 1905494LLU;

	t3 = (((x13/x14)|x15)^x16);

	if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -360;
	int8_t x18 = -1;
	volatile int64_t x19 = -169658532788771901LL;
	static volatile int8_t x20 = INT8_MIN;
	static volatile int64_t t4 = 60459880043LL;

	t4 = (((x17/x18)|x19)^x20);

	if (t4 != 169658532788771947LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 41;
	int32_t x24 = INT32_MAX;
	volatile int64_t t5 = -482955376LL;

	t5 = (((x21/x22)|x23)^x24);

	if (t5 != 2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -23523451517LL;
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	int32_t x28 = -1;
	volatile int64_t t6 = 28263308408801LL;

	t6 = (((x25/x26)|x27)^x28);

	if (t6 != 9223372036854057929LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 29;
	uint32_t x30 = 1216U;
	int16_t x31 = INT16_MIN;
	int8_t x32 = 14;
	uint32_t t7 = 36717198U;

	t7 = (((x29/x30)|x31)^x32);

	if (t7 != 4294934542U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 2719LLU;

	t8 = (((x33/x34)|x35)^x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 61;
	int64_t x38 = INT64_MIN;
	int16_t x40 = 914;
	volatile int64_t t9 = 1010273583642733189LL;

	t9 = (((x37/x38)|x39)^x40);

	if (t9 != -9223372036854774894LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 0;
	int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = 2608008870655830406LL;

	t10 = (((x41/x42)|x43)^x44);

	if (t10 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 3850181164472838113LLU;
	static int64_t x47 = INT64_MAX;
	static volatile uint64_t t11 = 455183783LLU;

	t11 = (((x45/x46)|x47)^x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MIN;
	int16_t x52 = 4907;
	static volatile int32_t t12 = 788;

	t12 = (((x49/x50)|x51)^x52);

	if (t12 != -27861) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint8_t x54 = UINT8_MAX;
	uint16_t x56 = UINT16_MAX;
	int64_t t13 = 477769106806332LL;

	t13 = (((x53/x54)|x55)^x56);

	if (t13 != -65481LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -13;
	uint8_t x58 = 6U;
	volatile uint64_t x59 = 409616391579654413LLU;
	static uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 0LLU;

	t14 = (((x57/x58)|x59)^x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = 631677151717967LL;
	int8_t x62 = INT8_MIN;
	volatile int64_t x63 = -3691LL;
	static uint32_t x64 = 2U;
	int64_t t15 = -26396403526398LL;

	t15 = (((x61/x62)|x63)^x64);

	if (t15 != -2625LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 23255LLU;
	volatile int32_t x66 = INT32_MIN;
	static uint64_t x67 = 89624853020585LLU;
	static int64_t x68 = -1LL;
	uint64_t t16 = 1116979794244LLU;

	t16 = (((x65/x66)|x67)^x68);

	if (t16 != 18446654448856531030LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	volatile int32_t x76 = INT32_MIN;
	volatile int64_t t17 = -123274255LL;

	t17 = (((x73/x74)|x75)^x76);

	if (t17 != -6442335201LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	volatile int64_t x78 = -1LL;
	uint16_t x79 = 80U;

	t18 = (((x77/x78)|x79)^x80);

	if (t18 != 4294967249LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -1;
	int64_t x82 = -103573926LL;
	volatile uint64_t t19 = 18696022375333784LLU;

	t19 = (((x81/x82)|x83)^x84);

	if (t19 != 32767LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = -7;
	int32_t x87 = -168554813;
	static volatile int32_t t20 = 1377207;

	t20 = (((x85/x86)|x87)^x88);

	if (t20 != -4099) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x91 = 3567711;
	static int64_t x92 = -1LL;

	t21 = (((x89/x90)|x91)^x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 14U;
	int32_t x94 = INT32_MIN;
	volatile int32_t t22 = -56;

	t22 = (((x93/x94)|x95)^x96);

	if (t22 != -106) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 1;
	int16_t x98 = 847;
	static uint32_t x99 = 175795356U;
	uint16_t x100 = UINT16_MAX;

	t23 = (((x97/x98)|x99)^x100);

	if (t23 != 175805283U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = UINT8_MAX;
	volatile int64_t x102 = INT64_MAX;
	int8_t x103 = INT8_MAX;
	static volatile int8_t x104 = INT8_MIN;

	t24 = (((x101/x102)|x103)^x104);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = INT16_MAX;
	int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MAX;
	int64_t x108 = 6LL;
	volatile int64_t t25 = -208708176079294800LL;

	t25 = (((x105/x106)|x107)^x108);

	if (t25 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x110 = INT32_MIN;
	int64_t x111 = -7140534401453057LL;
	int8_t x112 = INT8_MIN;
	int64_t t26 = 347595538857159LL;

	t26 = (((x109/x110)|x111)^x112);

	if (t26 != 7140534401453183LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = UINT8_MAX;
	static int64_t x116 = INT64_MAX;
	int64_t t27 = -87977655484291LL;

	t27 = (((x113/x114)|x115)^x116);

	if (t27 != 9223372032559808638LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	static int8_t x118 = INT8_MIN;
	static int16_t x119 = INT16_MIN;
	uint8_t x120 = 0U;
	static volatile int32_t t28 = 124881114;

	t28 = (((x117/x118)|x119)^x120);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x122 = INT16_MIN;
	int8_t x123 = -1;
	uint32_t x124 = 467092U;
	int64_t t29 = 3572157112749318LL;

	t29 = (((x121/x122)|x123)^x124);

	if (t29 != -467093LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = 75LL;
	uint16_t x128 = 12055U;
	static volatile int64_t t30 = 11LL;

	t30 = (((x125/x126)|x127)^x128);

	if (t30 != 12052LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = -1;
	static uint64_t x130 = 45360203373637692LLU;
	int32_t x131 = 72738;
	static uint32_t x132 = 0U;
	volatile uint64_t t31 = 2060537LLU;

	t31 = (((x129/x130)|x131)^x132);

	if (t31 != 73142LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 48344;

	t32 = (((x133/x134)|x135)^x136);

	if (t32 != -65409) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	static volatile int64_t x138 = 1401LL;
	static uint32_t x139 = 100225U;
	volatile int32_t x140 = -187;
	volatile int64_t t33 = 39177LL;

	t33 = (((x137/x138)|x139)^x140);

	if (t33 != 6583420440295628LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1218438LL;
	int32_t x142 = -4581319;
	int8_t x143 = INT8_MAX;
	int32_t x144 = INT32_MIN;
	int64_t t34 = 208535923952LL;

	t34 = (((x141/x142)|x143)^x144);

	if (t34 != -2147483521LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	uint16_t x146 = 2U;
	volatile int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	static volatile int64_t t35 = 1187236LL;

	t35 = (((x145/x146)|x147)^x148);

	if (t35 != 9223372034707308543LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int16_t x150 = 14172;
	int32_t x151 = 106;
	static volatile int8_t x152 = 7;
	int64_t t36 = -4292LL;

	t36 = (((x149/x150)|x151)^x152);

	if (t36 != -650816542256136LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x154 = UINT8_MAX;
	int64_t x155 = 3139244LL;
	static int16_t x156 = -1;
	int64_t t37 = -218655149761432LL;

	t37 = (((x153/x154)|x155)^x156);

	if (t37 != -3139245LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MAX;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	uint64_t t38 = 1645791015915LLU;

	t38 = (((x157/x158)|x159)^x160);

	if (t38 != 18446256921109320139LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MAX;
	int64_t x163 = -986818LL;
	volatile uint32_t x164 = 1751304U;
	int64_t t39 = -695LL;

	t39 = (((x161/x162)|x163)^x164);

	if (t39 != -1423305LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x167 = 65051352508806365LLU;
	int64_t x168 = INT64_MIN;

	t40 = (((x165/x166)|x167)^x168);

	if (t40 != 11887070882955998429LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = 403LL;
	int64_t x170 = -1LL;
	uint32_t x171 = 612U;
	static volatile uint32_t x172 = 52413U;
	int64_t t41 = -1049625981552449LL;

	t41 = (((x169/x170)|x171)^x172);

	if (t41 != -52528LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -414526888891340LL;
	static int64_t x174 = 252808380901898737LL;
	uint32_t x175 = 426816316U;
	int16_t x176 = INT16_MIN;

	t42 = (((x173/x174)|x175)^x176);

	if (t42 != -426822852LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MIN;

	t43 = (((x177/x178)|x179)^x180);

	if (t43 != -2147483521) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -1;
	uint8_t x182 = 6U;
	static uint8_t x183 = UINT8_MAX;
	int16_t x184 = -1;
	volatile int32_t t44 = 1698;

	t44 = (((x181/x182)|x183)^x184);

	if (t44 != -256) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x186 = 832919679533482LL;
	int32_t x188 = INT32_MIN;
	int64_t t45 = -16727318128LL;

	t45 = (((x185/x186)|x187)^x188);

	if (t45 != -2144527844LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	volatile uint32_t x192 = UINT32_MAX;
	int64_t t46 = 6LL;

	t46 = (((x189/x190)|x191)^x192);

	if (t46 != -4294967296LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x193 = 119944;
	uint64_t x194 = 1432262LLU;
	uint8_t x196 = 0U;

	t47 = (((x193/x194)|x195)^x196);

	if (t47 != 962965LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -163760926;
	uint8_t x199 = 0U;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t48 = 1LLU;

	t48 = (((x197/x198)|x199)^x200);

	if (t48 != 642198LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 19U;
	static volatile uint16_t x202 = 1U;
	int64_t x203 = 53780641LL;
	volatile int16_t x204 = INT16_MIN;
	volatile int64_t t49 = -89LL;

	t49 = (((x201/x202)|x203)^x204);

	if (t49 != -53796685LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	static uint16_t x206 = UINT16_MAX;
	static uint16_t x207 = 0U;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t50 = INT64_MIN;

	t50 = (((x205/x206)|x207)^x208);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x209 = INT8_MIN;
	static int8_t x210 = -1;
	int16_t x211 = -3736;
	static int8_t x212 = -58;

	t51 = (((x209/x210)|x211)^x212);

	if (t51 != 3630) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -1;
	int64_t x215 = INT64_MIN;
	int8_t x216 = -1;

	t52 = (((x213/x214)|x215)^x216);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = 1;
	int8_t x218 = -1;
	static int16_t x219 = 3;
	static int16_t x220 = 7758;
	volatile int32_t t53 = -1;

	t53 = (((x217/x218)|x219)^x220);

	if (t53 != -7759) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = 5638798453387LL;
	static volatile int16_t x222 = 608;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = INT16_MIN;
	volatile int64_t t54 = 2084621397LL;

	t54 = (((x221/x222)|x223)^x224);

	if (t54 != -9274347265LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	volatile int8_t x226 = INT8_MIN;
	static uint64_t x227 = UINT64_MAX;
	uint64_t t55 = 668938085008LLU;

	t55 = (((x225/x226)|x227)^x228);

	if (t55 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MIN;
	volatile int32_t x230 = INT32_MIN;
	volatile int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MAX;
	int64_t t56 = 1670832677LL;

	t56 = (((x229/x230)|x231)^x232);

	if (t56 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 14930U;
	int32_t x235 = -1;

	t57 = (((x233/x234)|x235)^x236);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	int8_t x239 = INT8_MIN;
	static uint8_t x240 = 49U;
	int32_t t58 = 1;

	t58 = (((x237/x238)|x239)^x240);

	if (t58 != -79) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -1;
	static uint16_t x242 = 39U;
	int32_t x244 = INT32_MAX;
	int32_t t59 = -2066607;

	t59 = (((x241/x242)|x243)^x244);

	if (t59 != 2146533690) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x245 = -1;
	volatile int16_t x246 = -1;
	volatile int64_t x247 = -1LL;
	int16_t x248 = -208;

	t60 = (((x245/x246)|x247)^x248);

	if (t60 != 207LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x249 = 22;
	int64_t x252 = INT64_MIN;
	static volatile int64_t t61 = 531518767727110986LL;

	t61 = (((x249/x250)|x251)^x252);

	if (t61 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MAX;
	static int8_t x254 = INT8_MIN;
	static int64_t x255 = INT64_MIN;
	volatile int8_t x256 = -23;

	t62 = (((x253/x254)|x255)^x256);

	if (t62 != 232LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = UINT8_MAX;
	volatile int16_t x258 = 337;
	uint8_t x259 = 2U;
	int16_t x260 = INT16_MIN;
	int32_t t63 = -267902;

	t63 = (((x257/x258)|x259)^x260);

	if (t63 != -32766) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x261 = 12230U;
	int16_t x263 = -1;
	volatile int64_t x264 = -6253908391276LL;
	volatile int64_t t64 = 18689721470205758LL;

	t64 = (((x261/x262)|x263)^x264);

	if (t64 != -6257331341973LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x265 = -3506221637LL;
	int64_t x266 = INT64_MIN;
	static uint16_t x267 = 3U;
	int8_t x268 = INT8_MIN;
	static volatile int64_t t65 = -16904672847LL;

	t65 = (((x265/x266)|x267)^x268);

	if (t65 != -125LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x270 = 15225678U;
	volatile uint64_t x272 = 3LLU;
	uint64_t t66 = 1158269LLU;

	t66 = (((x269/x270)|x271)^x272);

	if (t66 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x274 = -1LL;
	volatile int32_t x275 = INT32_MAX;
	volatile int16_t x276 = 1;
	volatile int64_t t67 = 1LL;

	t67 = (((x273/x274)|x275)^x276);

	if (t67 != 2147483646LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	uint16_t x278 = 6U;
	int32_t x279 = -1;
	uint64_t t68 = 37533580159LLU;

	t68 = (((x277/x278)|x279)^x280);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x281 = INT64_MAX;
	static uint64_t x283 = 359063LLU;
	static int16_t x284 = INT16_MIN;

	t69 = (((x281/x282)|x283)^x284);

	if (t69 != 18446744069414255255LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = 30938696815LLU;
	volatile int64_t x288 = INT64_MIN;
	uint64_t t70 = 57800799293826LLU;

	t70 = (((x285/x286)|x287)^x288);

	if (t70 != 9223372067793472623LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = 12551;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 2U;
	int8_t x292 = INT8_MAX;
	volatile int32_t t71 = 89577;

	t71 = (((x289/x290)|x291)^x292);

	if (t71 != 125) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = 1;
	int8_t x294 = INT8_MAX;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;
	static int64_t t72 = INT64_MAX;

	t72 = (((x293/x294)|x295)^x296);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 54U;
	volatile uint16_t x300 = 40U;

	t73 = (((x297/x298)|x299)^x300);

	if (t73 != 31LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x303 = INT64_MAX;
	volatile int64_t x304 = -1LL;
	static int64_t t74 = INT64_MIN;

	t74 = (((x301/x302)|x303)^x304);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = 60;
	static uint8_t x307 = UINT8_MAX;
	static int16_t x308 = 72;
	volatile int32_t t75 = 141;

	t75 = (((x305/x306)|x307)^x308);

	if (t75 != -73) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = -1;
	int16_t x310 = INT16_MAX;
	uint64_t x311 = 209212LLU;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t76 = 51493808LLU;

	t76 = (((x309/x310)|x311)^x312);

	if (t76 != 18446744071562277180LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x313 = INT64_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	static int64_t x316 = 7963598159893172LL;

	t77 = (((x313/x314)|x315)^x316);

	if (t77 != 18438780475549658443LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x317 = 64U;
	int16_t x318 = -198;
	int64_t x319 = 12841970004145991LL;
	int16_t x320 = 171;

	t78 = (((x317/x318)|x319)^x320);

	if (t78 != 12841970004146156LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = UINT16_MAX;
	int32_t x322 = INT32_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t79 = 29;

	t79 = (((x321/x322)|x323)^x324);

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 657021LL;
	static int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MAX;
	int8_t x328 = -44;
	int64_t t80 = 2055939440185LL;

	t80 = (((x325/x326)|x327)^x328);

	if (t80 != -2147483605LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = 1441231273U;
	int64_t x330 = -230338553LL;
	int64_t x331 = INT64_MIN;
	int16_t x332 = -1;
	volatile int64_t t81 = -775LL;

	t81 = (((x329/x330)|x331)^x332);

	if (t81 != 5LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x334 = INT64_MIN;
	static int64_t x335 = -1LL;
	int64_t x336 = 1LL;

	t82 = (((x333/x334)|x335)^x336);

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = 98LL;
	static uint64_t x338 = UINT64_MAX;
	static int16_t x339 = -1;
	static uint8_t x340 = UINT8_MAX;
	uint64_t t83 = 7458520759681LLU;

	t83 = (((x337/x338)|x339)^x340);

	if (t83 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = INT32_MIN;
	volatile int64_t x342 = 56679462LL;
	uint64_t x343 = 41730977498601LLU;
	int32_t x344 = -229630;
	uint64_t t84 = 4434LLU;

	t84 = (((x341/x342)|x343)^x344);

	if (t84 != 229625LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MAX;
	uint16_t x346 = UINT16_MAX;
	volatile uint32_t x347 = 12324U;
	int16_t x348 = INT16_MIN;

	t85 = (((x345/x346)|x347)^x348);

	if (t85 != 4294946852U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x350 = UINT16_MAX;
	volatile int32_t x351 = 218409748;
	int64_t t86 = -9251418749LL;

	t86 = (((x349/x350)|x351)^x352);

	if (t86 != 140739854248727LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = -1;
	int8_t x354 = INT8_MIN;
	volatile int8_t x355 = -13;
	int32_t t87 = -1;

	t87 = (((x353/x354)|x355)^x356);

	if (t87 != -244) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MIN;
	static int8_t x358 = -1;
	volatile uint16_t x359 = UINT16_MAX;
	int64_t x360 = INT64_MAX;
	volatile int64_t t88 = -12634LL;

	t88 = (((x357/x358)|x359)^x360);

	if (t88 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = UINT64_MAX;
	static int32_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	volatile uint64_t t89 = 423266935LLU;

	t89 = (((x361/x362)|x363)^x364);

	if (t89 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = 4532552866849LL;
	static uint16_t x366 = UINT16_MAX;
	static volatile int8_t x367 = -1;
	uint32_t x368 = 52792U;
	int64_t t90 = 28455164LL;

	t90 = (((x365/x366)|x367)^x368);

	if (t90 != -52793LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x369 = INT32_MAX;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -1;
	volatile int32_t x372 = 0;
	int32_t t91 = -76041363;

	t91 = (((x369/x370)|x371)^x372);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x374 = -21LL;
	static uint32_t x375 = UINT32_MAX;
	static uint16_t x376 = 752U;
	int64_t t92 = -171710LL;

	t92 = (((x373/x374)|x375)^x376);

	if (t92 != -753LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x377 = -1;
	static int16_t x378 = -1;
	volatile int32_t t93 = -7523687;

	t93 = (((x377/x378)|x379)^x380);

	if (t93 != 2147450880) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x383 = -4661;
	uint16_t x384 = 10U;
	volatile int32_t t94 = -8212082;

	t94 = (((x381/x382)|x383)^x384);

	if (t94 != -4671) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = INT16_MAX;
	uint64_t t95 = 34825614973LLU;

	t95 = (((x385/x386)|x387)^x388);

	if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = INT16_MIN;
	volatile uint16_t x390 = UINT16_MAX;
	int16_t x391 = 3;
	uint16_t x392 = 1382U;

	t96 = (((x389/x390)|x391)^x392);

	if (t96 != 1381) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x397 = INT8_MAX;
	static uint8_t x399 = 109U;
	static int64_t x400 = INT64_MIN;
	volatile int64_t t97 = 8334LL;

	t97 = (((x397/x398)|x399)^x400);

	if (t97 != -9223372036854775697LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x401 = INT64_MIN;
	int64_t x402 = 1LL;
	static int8_t x403 = -1;
	int32_t x404 = -1;
	volatile int64_t t98 = 93494852712382874LL;

	t98 = (((x401/x402)|x403)^x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = -1LL;
	volatile int64_t t99 = 4453045168567265848LL;

	t99 = (((x405/x406)|x407)^x408);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

