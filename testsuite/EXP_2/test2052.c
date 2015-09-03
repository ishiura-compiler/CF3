#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1534446569947LL;
int16_t x3 = INT16_MIN;
int64_t x4 = -1LL;
volatile uint8_t x6 = 31U;
int32_t x9 = INT32_MIN;
int64_t x10 = INT64_MIN;
int32_t x12 = INT32_MAX;
int64_t t2 = -65323LL;
static int16_t x13 = INT16_MIN;
static volatile int32_t t3 = 846;
int16_t x17 = INT16_MIN;
static int64_t x31 = -3353LL;
static int64_t x32 = -1LL;
int32_t t8 = -3;
uint64_t t9 = 389083824008LLU;
volatile uint32_t t12 = 186U;
uint16_t x58 = 7U;
uint16_t x77 = 5428U;
volatile int8_t x80 = -1;
static int32_t x85 = INT32_MIN;
static uint8_t x103 = 5U;
uint64_t x105 = UINT64_MAX;
uint64_t x123 = 8263286587LLU;
int16_t x126 = -2;
int16_t x128 = INT16_MIN;
volatile uint32_t x129 = 2U;
uint16_t x133 = 9U;
int8_t x135 = INT8_MAX;
int32_t t31 = 109693;
volatile uint64_t t32 = 3LLU;
int8_t x149 = INT8_MAX;
static int64_t x150 = INT64_MIN;
volatile uint64_t t35 = 30401432055LLU;
int8_t x154 = -1;
volatile int32_t t36 = 4286340;
volatile uint32_t x158 = 15266U;
static int64_t x163 = INT64_MIN;
int64_t x166 = INT64_MAX;
uint64_t x173 = UINT64_MAX;
int64_t x185 = 349538850193984LL;
static int64_t x186 = INT64_MAX;
volatile int32_t x203 = INT32_MIN;
static int16_t x207 = 112;
int8_t x214 = -62;
static int64_t x216 = INT64_MIN;
static int8_t x220 = -1;
int64_t t53 = -698925408LL;
int64_t t54 = -10464LL;
volatile int8_t x237 = INT8_MIN;
int16_t x252 = INT16_MAX;
volatile uint64_t t57 = 38355341711972LLU;
int64_t x257 = INT64_MIN;
static int16_t x265 = 175;
int32_t t61 = -272174731;
int32_t x269 = -316566085;
static volatile int64_t x276 = -19026LL;
int16_t x278 = INT16_MIN;
int16_t x283 = INT16_MAX;
static uint64_t x288 = 57153611559LLU;
volatile uint64_t t66 = 3000885909055LLU;
uint8_t x289 = UINT8_MAX;
uint32_t x301 = 252224770U;
volatile uint32_t t69 = 161288772U;
int16_t x306 = 71;
uint32_t x312 = UINT32_MAX;
volatile uint32_t t73 = 6176U;
int64_t x322 = -4166749892541465LL;
int64_t x323 = 400LL;
static uint32_t x327 = UINT32_MAX;
int8_t x328 = -1;
static volatile int32_t x335 = -1;
static uint64_t x336 = UINT64_MAX;
uint32_t x338 = UINT32_MAX;
static volatile uint64_t t78 = 6120027414005589228LLU;
volatile uint32_t x341 = UINT32_MAX;
int64_t x342 = 563115260985LL;
int32_t t80 = 151954918;
static uint64_t x353 = 74785932999584LLU;
uint32_t x354 = 322572U;
uint64_t t82 = 14251070LLU;
int8_t x362 = INT8_MAX;
static uint16_t x368 = 15U;
volatile int64_t t85 = 1954479764193LL;
static uint64_t t86 = 27456LLU;
int8_t x380 = -2;
static volatile int32_t t88 = -13;
int16_t x385 = -1;
static int32_t x387 = -1;
volatile int32_t t90 = INT32_MIN;
static int32_t x395 = 1;
volatile int16_t x396 = 1478;
int64_t x402 = INT64_MIN;
int64_t t94 = -2443190221738831LL;
int8_t x406 = -1;
static int8_t x408 = INT8_MIN;
static int64_t t96 = -125720102962239558LL;
int32_t x427 = INT32_MIN;
static volatile int32_t t98 = 227986866;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int64_t t0 = 2148164631LL;

	t0 = ((x1-(x2^x3))&x4);

	if (t0 != -1534446597797LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int64_t x7 = -11086837935046LL;
	uint8_t x8 = 0U;
	int64_t t1 = 63LL;

	t1 = ((x5-(x6^x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x11 = 0U;

	t2 = ((x9-(x10^x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MIN;
	uint8_t x16 = 2U;

	t3 = ((x13-(x14^x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 27U;
	static int8_t x19 = -1;
	int64_t x20 = INT64_MIN;
	int64_t t4 = INT64_MIN;

	t4 = ((x17-(x18^x19))&x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	volatile int32_t x24 = 512679870;
	static volatile int64_t t5 = -7383547883368LL;

	t5 = ((x21-(x22^x23))&x24);

	if (t5 != 512622592LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int16_t x30 = 235;
	volatile int64_t t6 = 49394315190152247LL;

	t6 = ((x29-(x30^x31))&x32);

	if (t6 != 3571LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MIN;
	uint64_t x34 = UINT64_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	volatile int64_t x36 = INT64_MIN;
	static volatile uint64_t t7 = 2580825034362532LLU;

	t7 = ((x33-(x34^x35))&x36);

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = INT16_MIN;
	volatile int32_t x39 = INT32_MIN;
	static volatile uint16_t x40 = 4U;

	t8 = ((x37-(x38^x39))&x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 12U;
	uint64_t x42 = 310LLU;
	static int16_t x43 = -1;
	static uint32_t x44 = UINT32_MAX;

	t9 = ((x41-(x42^x43))&x44);

	if (t9 != 323LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 237U;
	uint8_t x46 = 23U;
	uint8_t x47 = UINT8_MAX;
	uint32_t x48 = 18U;
	volatile uint32_t t10 = 31996060U;

	t10 = ((x45-(x46^x47))&x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = 20733966LL;
	uint8_t x50 = UINT8_MAX;
	uint8_t x51 = 3U;
	volatile uint64_t x52 = 802117929LLU;
	uint64_t t11 = 6LLU;

	t11 = ((x49-(x50^x51))&x52);

	if (t11 != 17586432LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MAX;
	static uint16_t x55 = 20U;
	uint8_t x56 = 86U;

	t12 = ((x53-(x54^x55))&x56);

	if (t12 != 20U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MIN;
	int16_t x59 = -1;
	uint8_t x60 = 5U;
	int64_t t13 = 1198158726961LL;

	t13 = ((x57-(x58^x59))&x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -24;
	int8_t x62 = 1;
	int64_t x63 = 34215LL;
	static int32_t x64 = -1;
	volatile int64_t t14 = -6LL;

	t14 = ((x61-(x62^x63))&x64);

	if (t14 != -34238LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MIN;
	volatile uint8_t x71 = 1U;
	int16_t x72 = INT16_MIN;
	volatile int32_t t15 = 7;

	t15 = ((x69-(x70^x71))&x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 193106687LL;
	volatile int16_t x74 = -906;
	int16_t x75 = INT16_MIN;
	static int32_t x76 = -1;
	int64_t t16 = -522885253LL;

	t16 = ((x73-(x74^x75))&x76);

	if (t16 != 193074825LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x78 = 848U;
	static volatile int32_t x79 = INT32_MIN;
	static uint32_t t17 = 2788512U;

	t17 = ((x77-(x78^x79))&x80);

	if (t17 != 2147488228U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -244565650895282982LL;
	uint8_t x82 = 25U;
	static int64_t x83 = 119369LL;
	int32_t x84 = -1;
	volatile int64_t t18 = -118LL;

	t18 = ((x81-(x82^x83))&x84);

	if (t18 != -244565650895402358LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MIN;
	int8_t x88 = 1;
	static int32_t t19 = 32;

	t19 = ((x85-(x86^x87))&x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = -815;
	uint32_t x90 = 1791U;
	int8_t x91 = INT8_MIN;
	static int8_t x92 = 26;
	volatile uint32_t t20 = 33538U;

	t20 = ((x89-(x90^x91))&x92);

	if (t20 != 18U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 57U;
	int8_t x94 = INT8_MIN;
	static int16_t x95 = INT16_MAX;
	uint16_t x96 = 30U;
	int32_t t21 = -1442764;

	t21 = ((x93-(x94^x95))&x96);

	if (t21 != 26) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = -8993951;
	volatile int64_t x98 = -1LL;
	static volatile uint8_t x99 = 5U;
	volatile int64_t x100 = 215017136531088638LL;
	static int64_t t22 = -1154LL;

	t22 = ((x97-(x98^x99))&x100);

	if (t22 != 215017136522166374LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x101 = 98179U;
	int32_t x102 = INT32_MAX;
	int32_t x104 = INT32_MAX;
	static uint32_t t23 = 15U;

	t23 = ((x101-(x102^x103))&x104);

	if (t23 != 98185U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x106 = -1;
	static volatile int16_t x107 = -1;
	volatile int16_t x108 = -121;
	uint64_t t24 = 153092LLU;

	t24 = ((x105-(x106^x107))&x108);

	if (t24 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = 0;
	uint64_t x110 = 13438857203LLU;
	volatile int32_t x111 = -280;
	uint64_t x112 = 43875396756LLU;
	volatile uint64_t t25 = 1740294270245LLU;

	t25 = ((x109-(x110^x111))&x112);

	if (t25 != 9143856260LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 2191623185431LL;
	uint16_t x114 = 14U;
	volatile int16_t x115 = -1;
	volatile int16_t x116 = INT16_MAX;
	volatile int64_t t26 = 1122122540820LL;

	t26 = ((x113-(x114^x115))&x116);

	if (t26 != 25638LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 2856U;
	static uint64_t x118 = UINT64_MAX;
	int16_t x119 = 4;
	uint16_t x120 = UINT16_MAX;
	static uint64_t t27 = 30163415409018LLU;

	t27 = ((x117-(x118^x119))&x120);

	if (t27 != 2861LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = 219577877128761462LLU;
	static int32_t x122 = -28894853;
	static uint16_t x124 = UINT16_MAX;
	volatile uint64_t t28 = 80672904435LLU;

	t28 = ((x121-(x122^x123))&x124);

	if (t28 != 43574LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int16_t x127 = -1;
	int32_t t29 = -51;

	t29 = ((x125-(x126^x127))&x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 104271805439LLU;
	int16_t x132 = INT16_MAX;
	volatile uint64_t t30 = 5459502682295428LLU;

	t30 = ((x129-(x130^x131))&x132);

	if (t30 != 1282LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x134 = -1;
	int32_t x136 = INT32_MIN;

	t31 = ((x133-(x134^x135))&x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x137 = 617U;
	uint8_t x138 = 46U;
	uint64_t x139 = 42762006626388LLU;
	static int32_t x140 = INT32_MAX;

	t32 = ((x137-(x138^x139))&x140);

	if (t32 != 835256815LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MAX;
	static int32_t x142 = -1;
	int16_t x143 = -4;
	uint8_t x144 = 16U;
	int32_t t33 = 288;

	t33 = ((x141-(x142^x143))&x144);

	if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = -1716532;
	static int32_t x146 = -188972;
	uint64_t x147 = 14480271875LLU;
	int32_t x148 = -335384;
	volatile uint64_t t34 = 3LLU;

	t34 = ((x145-(x146^x147))&x148);

	if (t34 != 14478360800LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MIN;

	t35 = ((x149-(x150^x151))&x152);

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 1;
	uint8_t x155 = 4U;
	volatile uint16_t x156 = 0U;

	t36 = ((x153-(x154^x155))&x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t x160 = INT32_MIN;
	static volatile uint32_t t37 = 212961U;

	t37 = ((x157-(x158^x159))&x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = -3;
	uint16_t x164 = 6U;
	static volatile int64_t t38 = -93741480LL;

	t38 = ((x161-(x162^x163))&x164);

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = INT16_MAX;
	int32_t x167 = 671255428;
	int8_t x168 = INT8_MAX;
	static volatile int64_t t39 = 49055LL;

	t39 = ((x165-(x166^x167))&x168);

	if (t39 != 4LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x169 = INT32_MAX;
	int8_t x170 = 0;
	uint16_t x171 = 584U;
	volatile int64_t x172 = INT64_MIN;
	static volatile int64_t t40 = -5LL;

	t40 = ((x169-(x170^x171))&x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x174 = UINT16_MAX;
	uint8_t x175 = 3U;
	uint32_t x176 = 1909U;
	uint64_t t41 = 495875470LLU;

	t41 = ((x173-(x174^x175))&x176);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 182U;
	static int64_t x178 = -3685LL;
	static int16_t x179 = INT16_MAX;
	static int16_t x180 = -175;
	int64_t t42 = -1LL;

	t42 = ((x177-(x178^x179))&x180);

	if (t42 != 29264LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = INT64_MIN;
	static uint8_t x182 = 4U;
	static volatile int32_t x183 = -115736;
	int8_t x184 = INT8_MIN;
	volatile int64_t t43 = -9LL;

	t43 = ((x181-(x182^x183))&x184);

	if (t43 != -9223372036854660096LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x187 = INT64_MIN;
	volatile int8_t x188 = INT8_MIN;
	static volatile int64_t t44 = 893583021174765271LL;

	t44 = ((x185-(x186^x187))&x188);

	if (t44 != 349538850193920LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	volatile uint32_t x198 = 37155U;
	int32_t x199 = 348219229;
	uint16_t x200 = 12540U;
	static uint32_t t45 = 437U;

	t45 = ((x197-(x198^x199))&x200);

	if (t45 != 128U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x201 = 3429738U;
	static int32_t x202 = INT32_MIN;
	int16_t x204 = INT16_MIN;
	uint32_t t46 = 2021U;

	t46 = ((x201-(x202^x203))&x204);

	if (t46 != 3407872U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MIN;
	volatile int64_t x208 = 85601977034LL;
	volatile int64_t t47 = -435467315889926LL;

	t47 = ((x205-(x206^x207))&x208);

	if (t47 != 10LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -11367249116LL;
	int32_t x210 = -3194931;
	volatile uint64_t x211 = UINT64_MAX;
	static volatile int8_t x212 = INT8_MIN;
	uint64_t t48 = 8483212644690LLU;

	t48 = ((x209-(x210^x211))&x212);

	if (t48 != 18446744062339107456LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -20LL;
	static uint32_t x215 = 1U;
	int64_t t49 = INT64_MIN;

	t49 = ((x213-(x214^x215))&x216);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = 773670409100223LL;
	int64_t x218 = INT64_MAX;
	uint8_t x219 = 0U;
	volatile int64_t t50 = 783618306628LL;

	t50 = ((x217-(x218^x219))&x220);

	if (t50 != -9222598366445675584LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = -1LL;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = UINT16_MAX;
	volatile uint32_t x224 = UINT32_MAX;
	int64_t t51 = 932094335447341LL;

	t51 = ((x221-(x222^x223))&x224);

	if (t51 != 32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 314U;
	uint8_t x226 = 102U;
	volatile int32_t x227 = INT32_MAX;
	volatile uint8_t x228 = UINT8_MAX;
	volatile int32_t t52 = 20493965;

	t52 = ((x225-(x226^x227))&x228);

	if (t52 != 161) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -1LL;
	uint8_t x230 = 125U;
	static uint16_t x231 = 248U;
	static int8_t x232 = INT8_MIN;

	t53 = ((x229-(x230^x231))&x232);

	if (t53 != -256LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	volatile int32_t x234 = INT32_MAX;
	static int16_t x235 = INT16_MIN;
	uint8_t x236 = 6U;

	t54 = ((x233-(x234^x235))&x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = INT64_MAX;
	int16_t x239 = -50;
	int16_t x240 = INT16_MAX;
	volatile int64_t t55 = -5048894LL;

	t55 = ((x237-(x238^x239))&x240);

	if (t55 != 32591LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = -1;
	int8_t x246 = 44;
	int8_t x247 = 6;
	volatile int32_t x248 = 6095542;
	int32_t t56 = -76171158;

	t56 = ((x245-(x246^x247))&x248);

	if (t56 != 6095508) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x249 = INT64_MIN;
	static uint64_t x250 = 0LLU;
	uint32_t x251 = UINT32_MAX;

	t57 = ((x249-(x250^x251))&x252);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = INT8_MIN;
	int64_t x254 = -8455830670976LL;
	static int32_t x255 = 26048;
	int8_t x256 = INT8_MAX;
	int64_t t58 = 2524804LL;

	t58 = ((x253-(x254^x255))&x256);

	if (t58 != 64LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x258 = 15;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = -383;
	static uint64_t t59 = 900258877LLU;

	t59 = ((x257-(x258^x259))&x260);

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int8_t x262 = -1;
	volatile int16_t x263 = INT16_MAX;
	uint16_t x264 = 4761U;
	volatile int32_t t60 = -655880;

	t60 = ((x261-(x262^x263))&x264);

	if (t60 != 153) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x266 = INT32_MIN;
	int8_t x267 = -1;
	int8_t x268 = -1;

	t61 = ((x265-(x266^x267))&x268);

	if (t61 != -2147483472) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x270 = INT8_MIN;
	volatile uint16_t x271 = UINT16_MAX;
	static int32_t x272 = INT32_MIN;
	int32_t t62 = INT32_MIN;

	t62 = ((x269-(x270^x271))&x272);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x273 = 17356981LLU;
	volatile uint8_t x274 = 20U;
	int8_t x275 = INT8_MIN;
	uint64_t t63 = 7413576253193LLU;

	t63 = ((x273-(x274^x275))&x276);

	if (t63 != 17338656LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = 1;
	volatile uint32_t x279 = 1U;
	int32_t x280 = -1;
	static uint32_t t64 = 116614U;

	t64 = ((x277-(x278^x279))&x280);

	if (t64 != 32768U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x281 = INT8_MIN;
	static int32_t x282 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	int64_t t65 = -1904LL;

	t65 = ((x281-(x282^x283))&x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x285 = 780LLU;
	volatile int8_t x286 = INT8_MIN;
	int16_t x287 = -2819;

	t66 = ((x285-(x286^x287))&x288);

	if (t66 != 57153611527LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x290 = INT32_MIN;
	static int32_t x291 = -309186117;
	static int64_t x292 = 9482447809957305LL;
	volatile int64_t t67 = -64943LL;

	t67 = ((x289-(x290^x291))&x292);

	if (t67 != 9482445980192000LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = -2142246436867099663LL;
	uint8_t x298 = 1U;
	volatile int16_t x299 = INT16_MIN;
	int8_t x300 = -1;
	int64_t t68 = 40LL;

	t68 = ((x297-(x298^x299))&x300);

	if (t68 != -2142246436867066896LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = -1;
	volatile uint16_t x304 = 53U;

	t69 = ((x301-(x302^x303))&x304);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MAX;
	volatile int16_t x307 = INT16_MIN;
	uint32_t x308 = 182300U;
	volatile uint32_t t70 = 1U;

	t70 = ((x305-(x306^x307))&x308);

	if (t70 != 32792U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	uint16_t x311 = 189U;
	volatile uint32_t t71 = 605U;

	t71 = ((x309-(x310^x311))&x312);

	if (t71 != 194U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = INT16_MIN;
	int8_t x314 = -1;
	volatile int32_t x315 = 766;
	int8_t x316 = INT8_MAX;
	int32_t t72 = 488895148;

	t72 = ((x313-(x314^x315))&x316);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MAX;
	uint32_t x318 = 1369U;
	volatile int32_t x319 = -1614986;
	static uint16_t x320 = UINT16_MAX;

	t73 = ((x317-(x318^x319))&x320);

	if (t73 != 41552U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x321 = 12463458U;
	volatile int8_t x324 = 46;
	int64_t t74 = -3476693LL;

	t74 = ((x321-(x322^x323))&x324);

	if (t74 != 42LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = 11U;
	static int16_t x326 = INT16_MIN;
	volatile uint32_t t75 = 481U;

	t75 = ((x325-(x326^x327))&x328);

	if (t75 != 4294934540U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MIN;
	uint32_t x332 = 330793329U;
	uint32_t t76 = 5U;

	t76 = ((x329-(x330^x331))&x332);

	if (t76 != 330760449U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x333 = INT32_MIN;
	uint16_t x334 = 109U;
	uint64_t t77 = 230648944759LLU;

	t77 = ((x333-(x334^x335))&x336);

	if (t77 != 18446744071562068078LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = UINT16_MAX;
	static int16_t x339 = -1;
	volatile uint64_t x340 = 2LLU;

	t78 = ((x337-(x338^x339))&x340);

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x343 = UINT64_MAX;
	uint16_t x344 = 5329U;
	volatile uint64_t t79 = 680858100LLU;

	t79 = ((x341-(x342^x343))&x344);

	if (t79 != 5137LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x345 = -3;
	static int8_t x346 = 2;
	int8_t x347 = 0;
	static int16_t x348 = 0;

	t80 = ((x345-(x346^x347))&x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = -1LL;
	uint8_t x350 = UINT8_MAX;
	static uint32_t x351 = 43548U;
	int32_t x352 = -7;
	volatile int64_t t81 = -368LL;

	t81 = ((x349-(x350^x351))&x352);

	if (t81 != -43752LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x355 = 359955386488LL;
	int64_t x356 = INT64_MAX;

	t82 = ((x353-(x354^x355))&x356);

	if (t82 != 74425977323308LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x357 = UINT32_MAX;
	static int16_t x358 = -2;
	int64_t x359 = INT64_MIN;
	static volatile uint64_t x360 = 164885494770729LLU;
	static uint64_t t83 = 2LLU;

	t83 = ((x357-(x358^x359))&x360);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x361 = INT8_MIN;
	int64_t x363 = INT64_MIN;
	volatile int64_t x364 = 2240885009402232LL;
	int64_t t84 = -26771LL;

	t84 = ((x361-(x362^x363))&x364);

	if (t84 != 2240885009402112LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MAX;
	int16_t x367 = -1007;

	t85 = ((x365-(x366^x367))&x368);

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = 179;
	uint64_t x371 = 37175945105395939LLU;
	volatile int8_t x372 = -1;

	t86 = ((x369-(x370^x371))&x372);

	if (t86 != 9186196091749380015LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = INT8_MIN;
	volatile int8_t x374 = INT8_MAX;
	uint32_t x375 = 209298009U;
	int64_t x376 = -7515222000673463LL;
	int64_t t87 = -1719335LL;

	t87 = ((x373-(x374^x375))&x376);

	if (t87 != 33840456LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x377 = -45;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;

	t88 = ((x377-(x378^x379))&x380);

	if (t88 != -46) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = 1LLU;
	static int32_t x382 = 48152;
	int32_t x383 = -92;
	static volatile int32_t x384 = -122781;
	volatile uint64_t t89 = 72239660LLU;

	t89 = ((x381-(x382^x383))&x384);

	if (t89 != 8257LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x386 = INT32_MIN;
	int16_t x388 = INT16_MIN;

	t90 = ((x385-(x386^x387))&x388);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = INT16_MAX;
	int32_t x390 = -1;
	int8_t x391 = -9;
	int64_t x392 = -1LL;
	static volatile int64_t t91 = -468129967LL;

	t91 = ((x389-(x390^x391))&x392);

	if (t91 != 32759LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x393 = 2232U;
	uint8_t x394 = UINT8_MAX;
	volatile int32_t t92 = -42;

	t92 = ((x393-(x394^x395))&x396);

	if (t92 != 1410) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = 327LLU;
	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = INT64_MAX;
	uint16_t x400 = 6050U;
	volatile uint64_t t93 = 4LLU;

	t93 = ((x397-(x398^x399))&x400);

	if (t93 != 256LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = -32734888;
	static int64_t x403 = -495128423LL;
	static uint8_t x404 = 24U;

	t94 = ((x401-(x402^x403))&x404);

	if (t94 != 24LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = -15;
	volatile int16_t x407 = -872;
	static int32_t t95 = 81;

	t95 = ((x405-(x406^x407))&x408);

	if (t95 != -896) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = -1LL;
	static volatile int8_t x414 = -2;
	int16_t x415 = INT16_MAX;
	static uint8_t x416 = 88U;

	t96 = ((x413-(x414^x415))&x416);

	if (t96 != 88LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = 1;
	uint64_t x418 = 29LLU;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t97 = 510237338011LLU;

	t97 = ((x417-(x418^x419))&x420);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = INT8_MIN;
	int32_t x426 = INT32_MIN;
	int16_t x428 = INT16_MIN;

	t98 = ((x425-(x426^x427))&x428);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = INT32_MAX;
	volatile int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	static volatile int16_t x432 = 2504;
	volatile int32_t t99 = 439688;

	t99 = ((x429-(x430^x431))&x432);

	if (t99 != 72) { NG(); } else { ; }
	
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

