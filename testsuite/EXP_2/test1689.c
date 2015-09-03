#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MIN;
volatile int32_t x6 = INT32_MIN;
uint16_t x10 = 0U;
uint8_t x15 = 10U;
int64_t t4 = -17790741658888163LL;
volatile uint16_t x33 = 251U;
static uint32_t x38 = 2U;
int64_t x42 = INT64_MAX;
static int32_t x44 = INT32_MAX;
static volatile int32_t x48 = INT32_MIN;
uint64_t t12 = UINT64_MAX;
uint32_t x61 = 408960U;
volatile int16_t x64 = -1;
int32_t t17 = -114;
volatile uint64_t x75 = 1606377LLU;
volatile uint32_t t21 = 775U;
int64_t x91 = -374LL;
volatile int32_t t23 = 10;
static int32_t t24 = 5737839;
int16_t x112 = -3606;
static uint8_t x116 = UINT8_MAX;
static volatile int32_t t28 = -34828;
static uint8_t x118 = 77U;
int16_t x123 = INT16_MAX;
volatile int32_t t30 = INT32_MAX;
volatile uint32_t x128 = 172015760U;
int16_t x130 = INT16_MIN;
int16_t x135 = -1;
uint64_t t34 = 1955996754696547901LLU;
uint64_t x145 = 261669LLU;
static int8_t x149 = 0;
uint32_t t37 = 32U;
static uint8_t x158 = 2U;
int32_t x159 = INT32_MIN;
uint64_t x162 = UINT64_MAX;
static int16_t x163 = INT16_MIN;
static int32_t t42 = 1052;
static int32_t x177 = 756146657;
uint8_t x180 = 0U;
int16_t x186 = INT16_MAX;
volatile int32_t t46 = -1529;
int32_t x199 = INT32_MIN;
volatile int8_t x214 = INT8_MAX;
static int64_t x216 = -1LL;
int32_t x217 = -19238;
uint64_t x220 = UINT64_MAX;
uint8_t x222 = 6U;
int64_t x233 = -1LL;
int64_t t58 = -518674299413800LL;
int32_t x244 = INT32_MAX;
static int32_t x253 = INT32_MIN;
uint8_t x259 = 16U;
int64_t x260 = INT64_MAX;
int8_t x266 = INT8_MIN;
uint16_t x272 = 3U;
int64_t x275 = 30924LL;
static uint16_t x277 = 78U;
uint8_t x291 = 117U;
volatile int32_t t72 = 369;
int16_t x293 = -1;
int64_t x301 = -14242072906634537LL;
volatile int16_t x304 = -1874;
int8_t x305 = 10;
int64_t x309 = INT64_MIN;
uint64_t x310 = 1LLU;
uint64_t x315 = UINT64_MAX;
static uint8_t x318 = 0U;
static int32_t t81 = -1142;
int16_t x337 = INT16_MAX;
static int32_t x345 = -1;
int32_t x349 = INT32_MAX;
static int32_t x353 = INT32_MAX;
static int16_t x368 = -1;
uint32_t x371 = UINT32_MAX;
static uint8_t x373 = 14U;
static int16_t x374 = -1;
volatile int16_t x377 = INT16_MIN;
int32_t t94 = 102;
int8_t x381 = INT8_MIN;
uint16_t x385 = UINT16_MAX;
int16_t x390 = INT16_MIN;
int16_t x392 = INT16_MAX;
int8_t x396 = INT8_MIN;
static uint32_t x400 = 2U;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int32_t x2 = 217;
	uint32_t x3 = 3055714U;
	volatile int8_t x4 = -1;
	static volatile int32_t t0 = 1713062;

	t0 = ((x1^(x2<=x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = -5393238644614432LL;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x5^(x6<=x7))|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = 533909701609472842LL;

	t2 = ((x9^(x10<=x11))|x12);

	if (t2 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 8142U;
	int16_t x16 = 479;
	static uint32_t t3 = UINT32_MAX;

	t3 = ((x13^(x14<=x15))|x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static uint64_t x18 = 30209LLU;
	int32_t x19 = INT32_MAX;
	volatile int64_t x20 = -33372LL;

	t4 = ((x17^(x18<=x19))|x20);

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = -1;
	uint32_t x22 = 1394U;
	int64_t x23 = INT64_MAX;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = ((x21^(x22<=x23))|x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -256659207LL;
	uint32_t x26 = UINT32_MAX;
	uint8_t x27 = UINT8_MAX;
	static volatile int16_t x28 = INT16_MIN;
	volatile int64_t t6 = 0LL;

	t6 = ((x25^(x26<=x27))|x28);

	if (t6 != -20231LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int16_t x30 = INT16_MAX;
	uint64_t x31 = UINT64_MAX;
	uint8_t x32 = 127U;
	volatile int32_t t7 = -5337;

	t7 = ((x29^(x30<=x31))|x32);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	uint8_t x35 = 7U;
	int32_t x36 = -856357;
	int32_t t8 = 331880467;

	t8 = ((x33^(x34<=x35))|x36);

	if (t8 != -856325) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 437U;
	int8_t x39 = INT8_MIN;
	static int64_t x40 = INT64_MIN;
	int64_t t9 = -62706LL;

	t9 = ((x37^(x38<=x39))|x40);

	if (t9 != -9223372036854775372LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MAX;
	uint8_t x43 = 0U;
	volatile int64_t t10 = INT64_MAX;

	t10 = ((x41^(x42<=x43))|x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = 12843U;
	volatile int8_t x47 = 0;
	int32_t t11 = INT32_MIN;

	t11 = ((x45^(x46<=x47))|x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = -3;
	uint64_t x52 = UINT64_MAX;

	t12 = ((x49^(x50<=x51))|x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = INT64_MAX;
	volatile int16_t x55 = -1;
	int64_t x56 = 3LL;
	int64_t t13 = -180499935364888LL;

	t13 = ((x53^(x54<=x55))|x56);

	if (t13 != 65535LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = 2U;
	volatile int8_t x59 = INT8_MIN;
	int64_t x60 = -1LL;
	volatile int64_t t14 = -307819664LL;

	t14 = ((x57^(x58<=x59))|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 28U;
	uint8_t x63 = 15U;
	static volatile uint32_t t15 = UINT32_MAX;

	t15 = ((x61^(x62<=x63))|x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 0;
	int32_t x66 = -1;
	uint64_t x67 = 452630837943095111LLU;
	int64_t x68 = INT64_MAX;
	int64_t t16 = INT64_MAX;

	t16 = ((x65^(x66<=x67))|x68);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = 106509;
	int16_t x71 = -1;
	uint16_t x72 = 5576U;

	t17 = ((x69^(x70<=x71))|x72);

	if (t17 != -56) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint16_t x74 = 9923U;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 2;

	t18 = ((x73^(x74<=x75))|x76);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = 249979219LL;
	int16_t x78 = INT16_MIN;
	int16_t x79 = 18;
	volatile int8_t x80 = INT8_MIN;
	static int64_t t19 = -176369LL;

	t19 = ((x77^(x78<=x79))|x80);

	if (t19 != -46LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int8_t x83 = 0;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -33225;

	t20 = ((x81^(x82<=x83))|x84);

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 2454;
	static volatile int8_t x86 = 1;
	int64_t x87 = -1LL;
	uint32_t x88 = 109U;

	t21 = ((x85^(x86<=x87))|x88);

	if (t21 != 2559U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	static int32_t x90 = -1;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = INT32_MAX;

	t22 = ((x89^(x90<=x91))|x92);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	uint8_t x94 = 30U;
	uint64_t x95 = 700898402472973356LLU;
	uint8_t x96 = 80U;

	t23 = ((x93^(x94<=x95))|x96);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = 6U;
	int64_t x98 = INT64_MAX;
	uint64_t x99 = UINT64_MAX;
	static int8_t x100 = INT8_MAX;

	t24 = ((x97^(x98<=x99))|x100);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 6U;
	static int32_t x102 = 622668;
	uint8_t x103 = UINT8_MAX;
	volatile int16_t x104 = INT16_MIN;
	volatile uint32_t t25 = 0U;

	t25 = ((x101^(x102<=x103))|x104);

	if (t25 != 4294934534U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static int64_t x106 = 210842429397508LL;
	int8_t x107 = INT8_MIN;
	static uint16_t x108 = 117U;
	static volatile int32_t t26 = 10194346;

	t26 = ((x105^(x106<=x107))|x108);

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 16;
	volatile uint64_t x110 = 2031LLU;
	volatile int64_t x111 = -15159590LL;
	volatile int32_t t27 = 1;

	t27 = ((x109^(x110<=x111))|x112);

	if (t27 != -3589) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	uint32_t x114 = 402U;
	uint64_t x115 = 94986259LLU;

	t28 = ((x113^(x114<=x115))|x116);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	int8_t x119 = INT8_MIN;
	volatile uint32_t x120 = 759601896U;
	uint32_t t29 = UINT32_MAX;

	t29 = ((x117^(x118<=x119))|x120);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MAX;
	uint8_t x122 = UINT8_MAX;
	uint8_t x124 = 23U;

	t30 = ((x121^(x122<=x123))|x124);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = ((x125^(x126<=x127))|x128);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	volatile int64_t x131 = INT64_MAX;
	int32_t x132 = -1;
	volatile int32_t t32 = -4;

	t32 = ((x129^(x130<=x131))|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	volatile uint16_t x134 = 2U;
	uint64_t x136 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = ((x133^(x134<=x135))|x136);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 456991935969LLU;
	static volatile uint8_t x138 = 64U;
	int32_t x139 = -35311;
	static int16_t x140 = INT16_MIN;

	t34 = ((x137^(x138<=x139))|x140);

	if (t34 != 18446744073709522401LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	int32_t x142 = INT32_MIN;
	volatile uint16_t x143 = 324U;
	int64_t x144 = INT64_MAX;
	volatile int64_t t35 = -140136843LL;

	t35 = ((x141^(x142<=x143))|x144);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x146 = 296482U;
	static int16_t x147 = 0;
	int32_t x148 = 70838;
	static volatile uint64_t t36 = 505LLU;

	t36 = ((x145^(x146<=x147))|x148);

	if (t36 != 261815LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x150 = -1;
	int16_t x151 = -1;
	uint32_t x152 = 10417943U;

	t37 = ((x149^(x150<=x151))|x152);

	if (t37 != 10417943U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = 39U;
	volatile int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	static int64_t x156 = 2123935269865LL;
	volatile int64_t t38 = -860292378LL;

	t38 = ((x153^(x154<=x155))|x156);

	if (t38 != 2123935269871LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = 25115103599288600LLU;
	int8_t x160 = -4;
	volatile uint64_t t39 = 3254495710847723LLU;

	t39 = ((x157^(x158<=x159))|x160);

	if (t39 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 929017929LLU;
	int32_t x164 = -1;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x161^(x162<=x163))|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	volatile uint32_t x166 = UINT32_MAX;
	int32_t x167 = -1;
	int64_t x168 = INT64_MAX;
	static int64_t t41 = INT64_MAX;

	t41 = ((x165^(x166<=x167))|x168);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static volatile uint32_t x170 = UINT32_MAX;
	uint32_t x171 = 48873U;
	int8_t x172 = INT8_MAX;

	t42 = ((x169^(x170<=x171))|x172);

	if (t42 != -32641) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	uint16_t x174 = 766U;
	int8_t x175 = -1;
	int16_t x176 = -1;
	static int32_t t43 = -6248998;

	t43 = ((x173^(x174<=x175))|x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	uint16_t x179 = 20U;
	int32_t t44 = -16611;

	t44 = ((x177^(x178<=x179))|x180);

	if (t44 != 756146657) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	uint8_t x182 = UINT8_MAX;
	int8_t x183 = INT8_MAX;
	volatile int32_t x184 = -471;
	int32_t t45 = -1735600;

	t45 = ((x181^(x182<=x183))|x184);

	if (t45 != -87) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 61U;
	int32_t x187 = INT32_MIN;
	int8_t x188 = -1;

	t46 = ((x185^(x186<=x187))|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = -247;
	volatile int8_t x192 = INT8_MAX;
	volatile int64_t t47 = -6834507LL;

	t47 = ((x189^(x190<=x191))|x192);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint16_t x194 = 102U;
	int32_t x195 = INT32_MIN;
	int8_t x196 = -18;
	int32_t t48 = -513662;

	t48 = ((x193^(x194<=x195))|x196);

	if (t48 != -18) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = -1;
	int64_t x200 = INT64_MIN;
	static int64_t t49 = -46116LL;

	t49 = ((x197^(x198<=x199))|x200);

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MIN;
	volatile uint8_t x203 = 116U;
	int8_t x204 = INT8_MIN;
	static int32_t t50 = -22;

	t50 = ((x201^(x202<=x203))|x204);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 270924362441LLU;
	int8_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MAX;
	volatile uint64_t t51 = 3203LLU;

	t51 = ((x205^(x206<=x207))|x208);

	if (t51 != 270924362495LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MIN;
	volatile uint32_t x210 = 16129U;
	static uint16_t x211 = 633U;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = -86;

	t52 = ((x209^(x210<=x211))|x212);

	if (t52 != -2147483393) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x215 = INT16_MAX;
	static int64_t t53 = 434298603662242LL;

	t53 = ((x213^(x214<=x215))|x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	volatile int16_t x219 = -3915;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x217^(x218<=x219))|x220);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1155;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 9;

	t55 = ((x221^(x222<=x223))|x224);

	if (t55 != -1156) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 0U;
	static int8_t x226 = -5;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -1316;

	t56 = ((x225^(x226<=x227))|x228);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	int8_t x231 = 12;
	static uint32_t x232 = 1U;
	int64_t t57 = 24224515295LL;

	t57 = ((x229^(x230<=x231))|x232);

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = 0U;
	int8_t x235 = -1;
	int64_t x236 = INT64_MIN;

	t58 = ((x233^(x234<=x235))|x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1LL;
	volatile uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 0U;
	int32_t x240 = 33486;
	int64_t t59 = 802080530106LL;

	t59 = ((x237^(x238<=x239))|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1874225LL;
	volatile uint8_t x242 = 0U;
	static volatile uint16_t x243 = 2U;
	volatile int64_t t60 = -1023907494LL;

	t60 = ((x241^(x242<=x243))|x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 252109LL;
	volatile int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int64_t t61 = 4LL;

	t61 = ((x245^(x246<=x247))|x248);

	if (t61 != 262143LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -29;
	int32_t x250 = 147380176;
	int64_t x251 = INT64_MAX;
	uint64_t x252 = 6833403908034LLU;
	volatile uint64_t t62 = 206721805118971469LLU;

	t62 = ((x249^(x250<=x251))|x252);

	if (t62 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 29U;
	uint16_t x255 = UINT16_MAX;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -9264281;

	t63 = ((x253^(x254<=x255))|x256);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x257 = 50U;
	volatile int32_t x258 = INT32_MAX;
	volatile int64_t t64 = INT64_MAX;

	t64 = ((x257^(x258<=x259))|x260);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 80050279LL;
	int64_t x262 = -1LL;
	int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	static int64_t t65 = -16809048504756674LL;

	t65 = ((x261^(x262<=x263))|x264);

	if (t65 != -2067433369LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 2848U;
	uint32_t x267 = UINT32_MAX;
	static uint32_t x268 = UINT32_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = ((x265^(x266<=x267))|x268);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	int64_t x270 = 266LL;
	int16_t x271 = INT16_MIN;
	volatile int64_t t67 = 3863LL;

	t67 = ((x269^(x270<=x271))|x272);

	if (t67 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 86U;
	int64_t x274 = -183355241684LL;
	int64_t x276 = -1LL;
	int64_t t68 = -1LL;

	t68 = ((x273^(x274<=x275))|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = INT8_MIN;
	volatile uint16_t x279 = 157U;
	volatile int32_t x280 = INT32_MAX;
	static volatile int32_t t69 = INT32_MAX;

	t69 = ((x277^(x278<=x279))|x280);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	uint8_t x282 = UINT8_MAX;
	int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = -6557LL;

	t70 = ((x281^(x282<=x283))|x284);

	if (t70 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	volatile uint32_t x286 = 17999336U;
	int8_t x287 = -4;
	volatile int64_t x288 = INT64_MIN;
	static int64_t t71 = 1067948286LL;

	t71 = ((x285^(x286<=x287))|x288);

	if (t71 != -32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x290 = 4078U;
	static int32_t x292 = -1;

	t72 = ((x289^(x290<=x291))|x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x294 = 171;
	int32_t x295 = 1;
	int16_t x296 = -1;
	int32_t t73 = 204519135;

	t73 = ((x293^(x294<=x295))|x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MAX;
	int8_t x298 = -1;
	int16_t x299 = -58;
	volatile int64_t x300 = -416LL;
	int64_t t74 = -220884735LL;

	t74 = ((x297^(x298<=x299))|x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x302 = -1LL;
	volatile int32_t x303 = -9;
	int64_t t75 = -2016219104LL;

	t75 = ((x301^(x302<=x303))|x304);

	if (t75 != -1281LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = UINT8_MAX;
	static int16_t x307 = -1;
	uint32_t x308 = UINT32_MAX;
	uint32_t t76 = UINT32_MAX;

	t76 = ((x305^(x306<=x307))|x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x311 = 701U;
	int32_t x312 = INT32_MIN;
	int64_t t77 = -6934066960516226LL;

	t77 = ((x309^(x310<=x311))|x312);

	if (t77 != -2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 34U;
	uint16_t x314 = 1U;
	int16_t x316 = 8;
	int32_t t78 = -14;

	t78 = ((x313^(x314<=x315))|x316);

	if (t78 != 43) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 162U;
	uint8_t x319 = 17U;
	int64_t x320 = INT64_MIN;
	int64_t t79 = 3485297611LL;

	t79 = ((x317^(x318<=x319))|x320);

	if (t79 != -9223372036854775645LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = 11879915LL;
	volatile int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MAX;
	int64_t x324 = 337LL;
	int64_t t80 = -191479041LL;

	t80 = ((x321^(x322<=x323))|x324);

	if (t80 != 11879931LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	uint64_t x327 = 4377245161LLU;
	int32_t x328 = INT32_MIN;

	t81 = ((x325^(x326<=x327))|x328);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x329 = INT32_MIN;
	volatile int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	int64_t t82 = 15169410191373LL;

	t82 = ((x329^(x330<=x331))|x332);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	static uint32_t x334 = UINT32_MAX;
	int64_t x335 = 390175LL;
	int8_t x336 = -1;
	int32_t t83 = 0;

	t83 = ((x333^(x334<=x335))|x336);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x338 = 29249367435LL;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -3136;
	volatile int32_t t84 = 806113736;

	t84 = ((x337^(x338<=x339))|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	int16_t x342 = INT16_MIN;
	int8_t x343 = INT8_MAX;
	int8_t x344 = INT8_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = ((x341^(x342<=x343))|x344);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -59;
	uint64_t x347 = UINT64_MAX;
	uint64_t x348 = 42720LLU;
	uint64_t t86 = 1447667341485476LLU;

	t86 = ((x345^(x346<=x347))|x348);

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x350 = UINT64_MAX;
	int32_t x351 = INT32_MIN;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x349^(x350<=x351))|x352);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	int8_t x355 = 3;
	static int8_t x356 = INT8_MAX;
	volatile int32_t t88 = INT32_MAX;

	t88 = ((x353^(x354<=x355))|x356);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = 23335U;
	int32_t x359 = -354893621;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = ((x357^(x358<=x359))|x360);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = -1;
	int64_t x362 = -235325285393556604LL;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = 0;
	volatile int32_t t90 = 402910496;

	t90 = ((x361^(x362<=x363))|x364);

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -1;
	int8_t x366 = -1;
	static int16_t x367 = -1;
	static volatile int32_t t91 = 92;

	t91 = ((x365^(x366<=x367))|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = UINT32_MAX;
	static uint64_t x370 = 2629239101LLU;
	int32_t x372 = INT32_MAX;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = ((x369^(x370<=x371))|x372);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x375 = 14U;
	static int8_t x376 = INT8_MIN;
	int32_t t93 = 45027;

	t93 = ((x373^(x374<=x375))|x376);

	if (t93 != -113) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = -4;
	volatile int64_t x379 = INT64_MAX;
	volatile uint16_t x380 = UINT16_MAX;

	t94 = ((x377^(x378<=x379))|x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 119838;

	t95 = ((x381^(x382<=x383))|x384);

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = UINT64_MAX;
	uint64_t x387 = UINT64_MAX;
	static int16_t x388 = -1;
	int32_t t96 = -14416632;

	t96 = ((x385^(x386<=x387))|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 8485633U;
	uint64_t x391 = UINT64_MAX;
	uint32_t t97 = 154813U;

	t97 = ((x389^(x390<=x391))|x392);

	if (t97 != 8486911U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = INT8_MAX;
	uint8_t x394 = UINT8_MAX;
	int16_t x395 = -6955;
	volatile int32_t t98 = -2555450;

	t98 = ((x393^(x394<=x395))|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MAX;
	static int32_t x398 = 187382432;
	volatile int8_t x399 = -3;
	uint32_t t99 = 50144623U;

	t99 = ((x397^(x398<=x399))|x400);

	if (t99 != 2147483647U) { NG(); } else { ; }
	
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

