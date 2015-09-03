#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = UINT32_MAX;
volatile uint32_t t0 = 822257416U;
int32_t x6 = -1542;
uint8_t x7 = 1U;
uint32_t x8 = 466547U;
int8_t x12 = -1;
static uint8_t x26 = UINT8_MAX;
uint16_t x27 = 0U;
static volatile int64_t t6 = 30179LL;
uint32_t t8 = 11U;
static volatile int16_t x40 = 4383;
int32_t x43 = INT32_MIN;
int16_t x44 = -7;
volatile int32_t t13 = -850653;
volatile int64_t t14 = -620223LL;
int8_t x61 = -1;
static volatile int64_t t15 = 2386990978LL;
int64_t t16 = 3498563530183522830LL;
uint32_t x70 = 272402997U;
volatile int64_t x81 = 4683LL;
uint64_t x82 = 8LLU;
int8_t x83 = 2;
static int64_t x85 = -935445811LL;
int16_t x90 = INT16_MIN;
int32_t t22 = -931086;
volatile int8_t x93 = 1;
int64_t x95 = -1LL;
volatile int64_t t23 = -49879862938LL;
int64_t x98 = -3LL;
int32_t x99 = INT32_MIN;
uint32_t x105 = UINT32_MAX;
static int64_t x113 = INT64_MAX;
int16_t x128 = INT16_MIN;
uint32_t t31 = 4174995U;
volatile int32_t t32 = -30;
volatile uint32_t t33 = 112075490U;
int64_t x143 = -29220488LL;
static volatile int64_t t36 = -8260606LL;
int16_t x149 = INT16_MIN;
uint8_t x157 = UINT8_MAX;
static uint64_t t39 = 3394LLU;
int16_t x163 = -3;
int32_t t40 = 3;
int8_t x165 = -3;
static int8_t x167 = INT8_MIN;
static uint16_t x177 = 99U;
uint64_t x179 = UINT64_MAX;
uint64_t x183 = 6LLU;
uint64_t t45 = 8780542665023890922LLU;
static int16_t x185 = -1;
int64_t x187 = -8401067187542LL;
uint64_t t47 = 5963937225LLU;
static uint16_t x198 = 217U;
int32_t x203 = -1;
uint8_t x204 = UINT8_MAX;
volatile int64_t x205 = INT64_MIN;
uint32_t x208 = 3U;
static volatile int64_t x216 = -1LL;
volatile int64_t t53 = 2569479LL;
static uint64_t x217 = 897LLU;
uint64_t x218 = UINT64_MAX;
int32_t x224 = INT32_MIN;
int8_t x228 = INT8_MIN;
volatile uint8_t x232 = 20U;
int32_t t59 = 66435181;
int32_t x248 = INT32_MIN;
int8_t x254 = -1;
int8_t x255 = -1;
int32_t t63 = -591433;
int32_t x280 = -440918;
volatile int64_t t69 = -127404080099955312LL;
int8_t x287 = 6;
int16_t x290 = INT16_MAX;
int8_t x293 = -24;
uint64_t t73 = 8813807713292155LLU;
volatile uint64_t t75 = 16LLU;
uint32_t x312 = 2671230U;
static uint8_t x315 = UINT8_MAX;
uint64_t x316 = UINT64_MAX;
uint16_t x325 = UINT16_MAX;
static volatile int32_t x328 = -1;
uint16_t x330 = 3450U;
int16_t x340 = -1;
int8_t x342 = INT8_MIN;
int8_t x344 = 0;
int32_t x346 = INT32_MIN;
static int32_t x349 = INT32_MIN;
int32_t x352 = 6855191;
volatile int32_t x355 = -163843091;
int8_t x357 = INT8_MIN;
int16_t x362 = 3;
volatile uint64_t x366 = 432730835696941134LLU;
int32_t t92 = -123060417;
uint64_t x373 = 170810661126472LLU;
int32_t x375 = INT32_MIN;
volatile int32_t t94 = 0;
int32_t x390 = -119;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MAX;
	int8_t x4 = INT8_MIN;

	t0 = (((x1^x2)^x3)^x4);

	if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint32_t t1 = 27U;

	t1 = (((x5^x6)^x7)^x8);

	if (t1 != 465015U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	uint64_t x10 = 3455278689931677779LLU;
	int8_t x11 = INT8_MIN;
	volatile uint64_t t2 = 2244464288797LLU;

	t2 = (((x9^x10)^x11)^x12);

	if (t2 != 12678650726786453548LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = 5U;
	static int32_t t3 = 1779;

	t3 = (((x13^x14)^x15)^x16);

	if (t3 != -32646) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 411U;
	static uint8_t x18 = 2U;
	static int64_t x19 = 193LL;
	volatile uint64_t x20 = 10121361754873LLU;
	volatile uint64_t t4 = 58453720723731717LLU;

	t4 = (((x17^x18)^x19)^x20);

	if (t4 != 10121361755041LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 2U;
	uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 2U;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 690LLU;

	t5 = (((x21^x22)^x23)^x24);

	if (t5 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 3542530;
	static int64_t x28 = INT64_MIN;

	t6 = (((x25^x26)^x27)^x28);

	if (t6 != -9223372036851233027LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile int16_t x30 = INT16_MIN;
	static volatile int16_t x31 = 8;
	static volatile uint64_t x32 = UINT64_MAX;
	static uint64_t t7 = 9LLU;

	t7 = (((x29^x30)^x31)^x32);

	if (t7 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	uint32_t x34 = 1U;
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;

	t8 = (((x33^x34)^x35)^x36);

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 6U;
	volatile uint8_t x38 = UINT8_MAX;
	int32_t x39 = INT32_MIN;
	static int32_t t9 = -504796;

	t9 = (((x37^x38)^x39)^x40);

	if (t9 != -2147479066) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	static uint32_t x42 = UINT32_MAX;
	volatile uint32_t t10 = 488944U;

	t10 = (((x41^x42)^x43)^x44);

	if (t10 != 6U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 15U;
	int32_t x46 = 13611;
	volatile int64_t x47 = -1LL;
	uint16_t x48 = UINT16_MAX;
	volatile int64_t t11 = 3522204170LL;

	t11 = (((x45^x46)^x47)^x48);

	if (t11 != -51932LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 6U;
	uint64_t x50 = 306LLU;
	volatile uint8_t x51 = 2U;
	volatile int64_t x52 = -1LL;
	uint64_t t12 = 2177228999467854304LLU;

	t12 = (((x49^x50)^x51)^x52);

	if (t12 != 18446744073709551305LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	int16_t x54 = -8247;
	int8_t x55 = INT8_MAX;
	static int32_t x56 = -1628672;

	t13 = (((x53^x54)^x55)^x56);

	if (t13 != -2145846858) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -63;
	int64_t x58 = INT64_MIN;
	int64_t x59 = 4383300426633647LL;
	uint16_t x60 = 31U;

	t14 = (((x57^x58)^x59)^x60);

	if (t14 != 9218988736428142193LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = INT64_MIN;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = 3;

	t15 = (((x61^x62)^x63)^x64);

	if (t15 != 9223372036854710275LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int32_t x66 = -6978;
	volatile int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;

	t16 = (((x65^x66)^x67)^x68);

	if (t16 != 9223372036854750014LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MAX;
	volatile uint32_t t17 = 900U;

	t17 = (((x69^x70)^x71)^x72);

	if (t17 != 1875053109U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 2U;
	int8_t x76 = 1;
	uint64_t t18 = 124671496700771LLU;

	t18 = (((x73^x74)^x75)^x76);

	if (t18 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 10;
	uint16_t x78 = 2U;
	int16_t x79 = INT16_MIN;
	static int16_t x80 = 1;
	volatile int32_t t19 = -246136;

	t19 = (((x77^x78)^x79)^x80);

	if (t19 != -32759) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 7896LLU;

	t20 = (((x81^x82)^x83)^x84);

	if (t20 != 18446744073709546942LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x86 = UINT16_MAX;
	static uint32_t x87 = 8U;
	int8_t x88 = 1;
	int64_t t21 = -31389086177169LL;

	t21 = (((x85^x86)^x87)^x88);

	if (t21 != -935410373LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	uint16_t x91 = 2U;
	static uint8_t x92 = 1U;

	t22 = (((x89^x90)^x91)^x92);

	if (t22 != 2147450883) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = INT64_MAX;
	int64_t x96 = -59984287244999LL;

	t23 = (((x93^x94)^x95)^x96);

	if (t23 != 9223312052567530808LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -1;
	uint32_t x100 = 5U;
	int64_t t24 = -5462195178LL;

	t24 = (((x97^x98)^x99)^x100);

	if (t24 != -2147483641LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = UINT8_MAX;
	static int8_t x103 = 26;
	int16_t x104 = 4;
	volatile uint64_t t25 = 395265LLU;

	t25 = (((x101^x102)^x103)^x104);

	if (t25 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 2496U;
	int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t26 = 386986U;

	t26 = (((x105^x106)^x107)^x108);

	if (t26 != 2147486144U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 3977257U;
	int8_t x110 = INT8_MIN;
	int64_t x111 = 12LL;
	uint32_t x112 = 108807627U;
	int64_t t27 = 55600764LL;

	t27 = (((x109^x110)^x111)^x112);

	if (t27 != 4190046830LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	volatile uint32_t x116 = 238758U;
	static int64_t t28 = 1LL;

	t28 = (((x113^x114)^x115)^x116);

	if (t28 != 9223372034707530969LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	int32_t x118 = -1;
	volatile int16_t x119 = INT16_MAX;
	uint8_t x120 = 8U;
	static volatile int32_t t29 = -382106131;

	t29 = (((x117^x118)^x119)^x120);

	if (t29 != -32777) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	static volatile int64_t x123 = INT64_MIN;
	static uint8_t x124 = UINT8_MAX;
	int64_t t30 = -7241199LL;

	t30 = (((x121^x122)^x123)^x124);

	if (t30 != -9223372036854743296LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = UINT32_MAX;
	static int8_t x126 = -4;
	volatile int8_t x127 = 62;

	t31 = (((x125^x126)^x127)^x128);

	if (t31 != 4294934589U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 1U;
	int16_t x130 = 7243;
	volatile int32_t x131 = -1;
	int16_t x132 = INT16_MIN;

	t32 = (((x129^x130)^x131)^x132);

	if (t32 != 25525) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x133 = UINT32_MAX;
	static int8_t x134 = 33;
	static uint32_t x135 = 2946055U;
	static uint8_t x136 = UINT8_MAX;

	t33 = (((x133^x134)^x135)^x136);

	if (t33 != 4292021030U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 27U;
	uint64_t x138 = 95161LLU;
	int32_t x139 = -1;
	volatile int8_t x140 = INT8_MIN;
	volatile uint64_t t34 = 218333112893014150LLU;

	t34 = (((x137^x138)^x139)^x140);

	if (t34 != 95197LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -123;
	uint64_t x142 = UINT64_MAX;
	int32_t x144 = -1;
	volatile uint64_t t35 = 130124LLU;

	t35 = (((x141^x142)^x143)^x144);

	if (t35 != 29220605LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 15780508293085898LL;
	int16_t x146 = -215;
	int32_t x147 = INT32_MIN;
	int16_t x148 = 38;

	t36 = (((x145^x146)^x147)^x148);

	if (t36 != 15780506978272709LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = 15;
	static uint64_t x151 = 7464950952596373LLU;
	volatile uint64_t x152 = 141LLU;
	volatile uint64_t t37 = 454LLU;

	t37 = (((x149^x150)^x151)^x152);

	if (t37 != 18439279122756932375LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	int64_t x154 = INT64_MIN;
	static volatile int16_t x155 = 1;
	int8_t x156 = INT8_MAX;
	uint64_t t38 = 309007550999LLU;

	t38 = (((x153^x154)^x155)^x156);

	if (t38 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MIN;
	uint64_t x159 = 1LLU;
	int8_t x160 = INT8_MIN;

	t39 = (((x157^x158)^x159)^x160);

	if (t39 != 254LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	uint8_t x162 = UINT8_MAX;
	int8_t x164 = INT8_MAX;

	t40 = (((x161^x162)^x163)^x164);

	if (t40 != -65406) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MAX;
	int16_t x168 = INT16_MAX;
	int64_t t41 = 31388020526LL;

	t41 = (((x165^x166)^x167)^x168);

	if (t41 != 9223372036854743165LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = 1;
	static volatile int32_t x170 = INT32_MIN;
	volatile int64_t x171 = INT64_MIN;
	int32_t x172 = -1;
	static volatile int64_t t42 = 13759832950LL;

	t42 = (((x169^x170)^x171)^x172);

	if (t42 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x173 = INT32_MIN;
	int32_t x174 = -1;
	volatile int64_t x175 = -1LL;
	static int8_t x176 = INT8_MIN;
	volatile int64_t t43 = -37LL;

	t43 = (((x173^x174)^x175)^x176);

	if (t43 != 2147483520LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -1;
	static uint32_t x180 = 0U;
	volatile uint64_t t44 = 2079294229LLU;

	t44 = (((x177^x178)^x179)^x180);

	if (t44 != 99LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = -24;
	static volatile int32_t x184 = INT32_MIN;

	t45 = (((x181^x182)^x183)^x184);

	if (t45 != 17LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = INT16_MIN;
	int16_t x188 = INT16_MAX;
	volatile int64_t t46 = -603LL;

	t46 = (((x185^x186)^x187)^x188);

	if (t46 != -8401067187542LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 32093534U;
	static volatile int64_t x190 = INT64_MAX;
	uint64_t x191 = UINT64_MAX;
	int64_t x192 = INT64_MIN;

	t47 = (((x189^x190)^x191)^x192);

	if (t47 != 32093534LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x193 = 1U;
	static volatile int8_t x194 = INT8_MAX;
	volatile int8_t x195 = INT8_MAX;
	uint64_t x196 = 105LLU;
	volatile uint64_t t48 = 17849687424432708LLU;

	t48 = (((x193^x194)^x195)^x196);

	if (t48 != 104LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	uint8_t x199 = 4U;
	static int8_t x200 = -1;
	static int32_t t49 = 0;

	t49 = (((x197^x198)^x199)^x200);

	if (t49 != -2147483427) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 1;
	int32_t x202 = INT32_MAX;
	volatile int32_t t50 = 3;

	t50 = (((x201^x202)^x203)^x204);

	if (t50 != -2147483394) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = UINT32_MAX;
	static int64_t x207 = INT64_MIN;
	volatile int64_t t51 = 5892607125LL;

	t51 = (((x205^x206)^x207)^x208);

	if (t51 != 4294967292LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 1U;
	static int32_t x210 = -3514872;
	int8_t x211 = INT8_MAX;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -289;

	t52 = (((x209^x210)^x211)^x212);

	if (t52 != -3497591) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MAX;
	volatile int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;

	t53 = (((x213^x214)^x215)^x216);

	if (t53 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x219 = INT64_MAX;
	uint8_t x220 = 97U;
	static uint64_t t54 = 64428939758656224LLU;

	t54 = (((x217^x218)^x219)^x220);

	if (t54 != 9223372036854776800LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 1926U;
	int16_t x222 = INT16_MIN;
	volatile int64_t x223 = -4407295390LL;
	volatile int64_t t55 = -117495353297459401LL;

	t55 = (((x221^x222)^x223)^x224);

	if (t55 != -6330153500LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	static uint32_t x226 = UINT32_MAX;
	uint16_t x227 = UINT16_MAX;
	volatile uint32_t t56 = 31150133U;

	t56 = (((x225^x226)^x227)^x228);

	if (t56 != 4294901887U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 2915940004679727LL;
	static int8_t x230 = -1;
	int64_t x231 = INT64_MAX;
	int64_t t57 = 4194844956LL;

	t57 = (((x229^x230)^x231)^x232);

	if (t57 != -9220456096850096069LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 551U;
	static int64_t x234 = 513806LL;
	int64_t x235 = INT64_MIN;
	volatile int64_t x236 = INT64_MAX;
	volatile int64_t t58 = -3633LL;

	t58 = (((x233^x234)^x235)^x236);

	if (t58 != -513322LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	uint16_t x239 = UINT16_MAX;
	static int32_t x240 = INT32_MIN;

	t59 = (((x237^x238)^x239)^x240);

	if (t59 != 2147450624) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = 7878;
	static uint64_t x242 = 1LLU;
	static int32_t x243 = -1;
	int64_t x244 = -66913959LL;
	uint64_t t60 = 608907474LLU;

	t60 = (((x241^x242)^x243)^x244);

	if (t60 != 66918497LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 5U;
	static volatile int16_t x246 = INT16_MAX;
	volatile uint8_t x247 = UINT8_MAX;
	int32_t t61 = 14;

	t61 = (((x245^x246)^x247)^x248);

	if (t61 != -2147451131) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = -1;
	int8_t x250 = INT8_MIN;
	volatile int64_t x251 = -374937365438430LL;
	static int64_t x252 = INT64_MAX;
	volatile int64_t t62 = 14249700LL;

	t62 = (((x249^x250)^x251)^x252);

	if (t62 != -9222997099489337438LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	static int8_t x256 = INT8_MIN;

	t63 = (((x253^x254)^x255)^x256);

	if (t63 != -65409) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	volatile uint8_t x258 = 95U;
	int32_t x259 = INT32_MIN;
	uint16_t x260 = UINT16_MAX;
	volatile int64_t t64 = -92077171LL;

	t64 = (((x257^x258)^x259)^x260);

	if (t64 != 9223372034707357600LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -1;
	int64_t x262 = -158039312043820LL;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t65 = 101654248667763363LLU;

	t65 = (((x261^x262)^x263)^x264);

	if (t65 != 158038068687060LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int16_t x266 = INT16_MIN;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = -239546312757176102LL;
	static uint64_t t66 = 43525880439LLU;

	t66 = (((x265^x266)^x267)^x268);

	if (t66 != 239546312757156058LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	int32_t x270 = INT32_MAX;
	static int16_t x271 = 3710;
	uint8_t x272 = 1U;
	volatile int32_t t67 = -91602;

	t67 = (((x269^x270)^x271)^x272);

	if (t67 != 2147480063) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MAX;
	static uint8_t x276 = UINT8_MAX;
	static volatile int64_t t68 = 6207065LL;

	t68 = (((x273^x274)^x275)^x276);

	if (t68 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	uint16_t x279 = UINT16_MAX;

	t69 = (((x277^x278)^x279)^x280);

	if (t69 != -9223372036854367659LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = 1;
	uint8_t x284 = UINT8_MAX;
	int32_t t70 = 293808246;

	t70 = (((x281^x282)^x283)^x284);

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	int32_t x286 = -1;
	static int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = -247;

	t71 = (((x285^x286)^x287)^x288);

	if (t71 != -122) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static uint64_t x291 = UINT64_MAX;
	int64_t x292 = -641729LL;
	uint64_t t72 = 51788LLU;

	t72 = (((x289^x290)^x291)^x292);

	if (t72 != 2146847424LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x294 = UINT32_MAX;
	volatile uint64_t x295 = 21413668223LLU;
	uint16_t x296 = 1U;

	t73 = (((x293^x294)^x295)^x296);

	if (t73 != 21413668201LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	uint64_t x298 = 144587430445LLU;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = INT32_MIN;
	uint64_t t74 = 30648039606826LLU;

	t74 = (((x297^x298)^x299)^x300);

	if (t74 != 18446743928386689618LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MIN;
	volatile uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = -674219376;

	t75 = (((x301^x302)^x303)^x304);

	if (t75 != 1473264272LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	volatile int64_t x306 = INT64_MAX;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	static int64_t t76 = -226LL;

	t76 = (((x305^x306)^x307)^x308);

	if (t76 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -42;
	int16_t x310 = INT16_MIN;
	int8_t x311 = -1;
	volatile uint32_t t77 = 12522245U;

	t77 = (((x309^x310)^x311)^x312);

	if (t77 != 4292297303U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	volatile uint64_t t78 = 8955327915687224248LLU;

	t78 = (((x313^x314)^x315)^x316);

	if (t78 != 65280LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = 0;
	volatile uint8_t x318 = 2U;
	uint32_t x319 = 1372180U;
	int8_t x320 = -20;
	static uint32_t t79 = 3933612U;

	t79 = (((x317^x318)^x319)^x320);

	if (t79 != 4293595130U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 1U;
	uint16_t x322 = 6U;
	uint16_t x323 = 205U;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t80 = 153;

	t80 = (((x321^x322)^x323)^x324);

	if (t80 != -32566) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -76450;
	uint16_t x327 = UINT16_MAX;
	int32_t t81 = -3659;

	t81 = (((x325^x326)^x327)^x328);

	if (t81 != 76449) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = 8;
	uint8_t x331 = UINT8_MAX;
	static uint64_t x332 = UINT64_MAX;
	volatile uint64_t t82 = 3227253318850014LLU;

	t82 = (((x329^x330)^x331)^x332);

	if (t82 != 18446744073709548146LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	volatile int8_t x334 = -1;
	int16_t x335 = INT16_MAX;
	static uint32_t x336 = 1153U;
	volatile uint32_t t83 = 335177U;

	t83 = (((x333^x334)^x335)^x336);

	if (t83 != 4294935678U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile int16_t x338 = -4511;
	static int8_t x339 = -1;
	volatile int32_t t84 = 2343068;

	t84 = (((x337^x338)^x339)^x340);

	if (t84 != 2147479137) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -1;
	int8_t x343 = INT8_MIN;
	volatile int32_t t85 = 1;

	t85 = (((x341^x342)^x343)^x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	uint16_t x347 = 1985U;
	volatile int64_t x348 = -45975112544360LL;
	int64_t t86 = -483920788LL;

	t86 = (((x345^x346)^x347)^x348);

	if (t86 != 45973694810201LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = 0U;
	volatile int32_t x351 = -692;
	static volatile uint32_t t87 = 5228U;

	t87 = (((x349^x350)^x351)^x352);

	if (t87 != 2140628827U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = UINT8_MAX;
	int64_t x356 = -1LL;
	volatile int64_t t88 = 2147405860846576LL;

	t88 = (((x353^x354)^x355)^x356);

	if (t88 != 163843090LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = UINT16_MAX;
	static volatile int32_t x359 = -1;
	int16_t x360 = -1;
	volatile int32_t t89 = 7644;

	t89 = (((x357^x358)^x359)^x360);

	if (t89 != -65409) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 3816;

	t90 = (((x361^x362)^x363)^x364);

	if (t90 != 124) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 10U;
	uint16_t x367 = UINT16_MAX;
	uint64_t x368 = 1313195536935LLU;
	uint64_t t91 = 11306903LLU;

	t91 = (((x365^x366)^x367)^x368);

	if (t91 != 432731865424573852LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -1655;
	volatile uint8_t x370 = 1U;
	uint8_t x371 = 0U;
	uint8_t x372 = 0U;

	t92 = (((x369^x370)^x371)^x372);

	if (t92 != -1656) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = UINT64_MAX;
	volatile int8_t x376 = INT8_MAX;
	volatile uint64_t t93 = 3683258LLU;

	t93 = (((x373^x374)^x375)^x376);

	if (t93 != 170808890113736LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x378 = -120;
	int16_t x379 = 5;
	volatile int16_t x380 = 2;

	t94 = (((x377^x378)^x379)^x380);

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MAX;
	uint32_t x383 = 6426U;
	volatile uint8_t x384 = UINT8_MAX;
	volatile int64_t t95 = 430496147474LL;

	t95 = (((x381^x382)^x383)^x384);

	if (t95 != -9223372036854769254LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	uint64_t x386 = 456344996554LLU;
	int8_t x387 = -7;
	int64_t x388 = 46613190321192LL;
	volatile uint64_t t96 = 8210895498742178LLU;

	t96 = (((x385^x386)^x387)^x388);

	if (t96 != 46242754113252LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int16_t x391 = -1;
	volatile int64_t x392 = -534292662697562482LL;
	int64_t t97 = -59531LL;

	t97 = (((x389^x390)^x391)^x392);

	if (t97 != 8689079374157213432LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	uint16_t x394 = 11U;
	static int32_t x395 = -2391;
	static int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = -749826554;

	t98 = (((x393^x394)^x395)^x396);

	if (t98 != -2339) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x397 = 374U;
	int32_t x398 = INT32_MIN;
	int64_t x399 = 562234827LL;
	uint64_t x400 = 25LLU;
	volatile uint64_t t99 = 2LLU;

	t99 = (((x397^x398)^x399)^x400);

	if (t99 != 18446744072124302500LLU) { NG(); } else { ; }
	
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

