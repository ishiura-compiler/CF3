#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
volatile int64_t t0 = 6987205713LL;
static uint32_t x6 = 33U;
uint32_t x10 = UINT32_MAX;
static int64_t x15 = INT64_MIN;
volatile int64_t t3 = 15889977472986732LL;
uint32_t x19 = UINT32_MAX;
int64_t t4 = INT64_MIN;
volatile int64_t t5 = -751590011LL;
int32_t x28 = INT32_MIN;
uint32_t x31 = UINT32_MAX;
int32_t x43 = INT32_MIN;
int16_t x45 = 3891;
static int8_t x48 = 25;
volatile int32_t x49 = INT32_MAX;
volatile int16_t x53 = 0;
uint32_t x61 = 11500075U;
volatile int32_t x64 = INT32_MIN;
volatile uint64_t x65 = UINT64_MAX;
int32_t x66 = -2251;
static volatile int64_t t17 = -1396247555911LL;
int8_t x80 = INT8_MIN;
volatile int32_t t19 = 711754903;
int16_t x86 = 1513;
uint64_t t21 = UINT64_MAX;
volatile int32_t t22 = 3;
uint8_t x96 = UINT8_MAX;
int32_t t23 = -6986859;
uint8_t x101 = 7U;
static int16_t x103 = INT16_MIN;
int8_t x106 = -1;
static int8_t x111 = -9;
int16_t x112 = INT16_MIN;
int8_t x115 = 1;
int64_t t29 = INT64_MIN;
static volatile uint8_t x124 = UINT8_MAX;
int32_t x129 = -1;
uint16_t x130 = 161U;
int64_t t33 = 13205077174744LL;
static volatile uint16_t x145 = 47U;
static volatile int64_t t36 = 2724602625LL;
int8_t x154 = INT8_MAX;
static volatile int16_t x158 = -8444;
static int64_t x163 = -453378636LL;
static volatile int8_t x164 = -1;
int64_t x168 = -1193046766LL;
volatile int64_t x169 = INT64_MIN;
uint64_t x174 = UINT64_MAX;
int16_t x177 = 145;
uint64_t x183 = 473157439945LLU;
int8_t x190 = 2;
uint64_t x196 = 166100LLU;
int32_t x202 = -947;
int64_t x212 = INT64_MAX;
int64_t t52 = 8126LL;
uint32_t x213 = 44009U;
uint32_t t53 = 26U;
uint8_t x232 = UINT8_MAX;
static volatile int32_t t56 = 40839105;
static volatile int32_t x233 = -1;
uint64_t x249 = 116820321297LLU;
uint64_t t61 = 12509901736700741LLU;
uint64_t t62 = 76822573745068LLU;
uint64_t x266 = 467913186LLU;
volatile int16_t x269 = -4;
int16_t x270 = INT16_MAX;
static int32_t x272 = INT32_MIN;
int64_t x274 = INT64_MAX;
uint8_t x276 = 5U;
volatile int64_t t67 = -2018191LL;
int8_t x281 = INT8_MAX;
static int8_t x283 = INT8_MIN;
int16_t x284 = INT16_MIN;
int16_t x287 = 11;
int16_t x289 = INT16_MAX;
static int8_t x301 = -13;
int32_t x307 = INT32_MAX;
int32_t t74 = 7125;
volatile int32_t x310 = INT32_MAX;
volatile uint16_t x313 = UINT16_MAX;
static int32_t x322 = -1;
static int8_t x327 = 52;
uint16_t x329 = UINT16_MAX;
int32_t x331 = INT32_MAX;
uint8_t x333 = UINT8_MAX;
static volatile int64_t t81 = 1100735415LL;
volatile int64_t t84 = 100704149746LL;
uint32_t x354 = 55351U;
uint64_t x359 = UINT64_MAX;
int8_t x369 = -1;
uint32_t x374 = UINT32_MAX;
volatile int16_t x382 = 87;
volatile uint64_t t91 = 736729162428987LLU;
int32_t x389 = INT32_MAX;
int64_t x403 = INT64_MAX;
volatile int64_t t96 = -218373080431LL;
volatile uint64_t x406 = 9755899LLU;
int32_t x411 = INT32_MIN;
static volatile int8_t x414 = INT8_MIN;
int16_t x416 = 8083;
volatile uint32_t t99 = 766269648U;


void f0(void) {
	int64_t x1 = -1LL;
	volatile uint16_t x2 = 142U;
	int8_t x4 = -21;

	t0 = (x1^((x2^x3)/x4));

	if (t0 != 10LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 441;
	volatile int32_t x7 = INT32_MIN;
	volatile uint16_t x8 = 729U;
	uint32_t t1 = 106U;

	t1 = (x5^((x6^x7)/x8));

	if (t1 != 2945720U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static volatile uint8_t x11 = 3U;
	int8_t x12 = 1;
	static int64_t t2 = -37LL;

	t2 = (x9^((x10^x11)/x12));

	if (t2 != 9223372032559808515LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static volatile int64_t x14 = INT64_MIN;
	uint32_t x16 = 16888291U;

	t3 = (x13^((x14^x15)/x16));

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	volatile int16_t x18 = -7101;
	volatile int64_t x20 = INT64_MIN;

	t4 = (x17^((x18^x19)/x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	uint16_t x24 = 68U;

	t5 = (x21^((x22^x23)/x24));

	if (t5 != -135637824071393280LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int16_t x26 = -1;
	int8_t x27 = 1;
	int32_t t6 = -79015;

	t6 = (x25^((x26^x27)/x28));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -8;
	int16_t x30 = -3284;
	uint64_t x32 = 72LLU;
	uint64_t t7 = 21LLU;

	t7 = (x29^((x30^x31)/x32));

	if (t7 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int64_t x34 = INT64_MIN;
	int16_t x35 = -105;
	uint32_t x36 = 172U;
	static volatile int64_t t8 = 8050673180LL;

	t8 = (x33^((x34^x35)/x36));

	if (t8 != 53624256028266591LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	uint32_t x38 = 55791517U;
	volatile int32_t x39 = INT32_MAX;
	uint16_t x40 = UINT16_MAX;
	uint32_t t9 = 7U;

	t9 = (x37^((x38^x39)/x40));

	if (t9 != 2147515565U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 14237218766154696LLU;
	volatile uint32_t x42 = 3960U;
	int8_t x44 = INT8_MAX;
	volatile uint64_t t10 = 1140882985LLU;

	t10 = (x41^((x42^x43)/x44));

	if (t10 != 14237218749509615LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	uint16_t x47 = 10U;
	int32_t t11 = -16;

	t11 = (x45^((x46^x47)/x48));

	if (t11 != 3891) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	static volatile uint32_t x51 = UINT32_MAX;
	uint32_t x52 = 11349U;
	static int64_t t12 = 14507509143083LL;

	t12 = (x49^((x50^x51)/x52));

	if (t12 != -2147105205LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 12002U;
	int8_t x55 = -6;
	volatile uint16_t x56 = 15683U;
	uint32_t t13 = 13U;

	t13 = (x53^((x54^x55)/x56));

	if (t13 != 273860U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -1LL;
	int32_t x58 = -1802198;
	static uint16_t x59 = 962U;
	volatile uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x57^((x58^x59)/x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = -253312;
	static volatile uint8_t x63 = UINT8_MAX;
	uint32_t t15 = 86U;

	t15 = (x61^((x62^x63)/x64));

	if (t15 != 11500075U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x67 = UINT64_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	uint64_t t16 = UINT64_MAX;

	t16 = (x65^((x66^x67)/x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -15;
	int64_t x70 = -484006822096LL;
	static int8_t x71 = 0;
	int8_t x72 = 2;

	t17 = (x69^((x70^x71)/x72));

	if (t17 != 242003411049LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static volatile int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	volatile uint8_t x76 = 46U;
	int32_t t18 = -1236114;

	t18 = (x73^((x74^x75)/x76));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = 32;
	static volatile uint8_t x79 = UINT8_MAX;

	t19 = (x77^((x78^x79)/x80));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -3137602364110680057LL;
	static uint64_t x82 = 2249227506868LLU;
	int64_t x83 = INT64_MAX;
	volatile int64_t x84 = INT64_MAX;
	volatile uint64_t t20 = 773934990LLU;

	t20 = (x81^((x82^x83)/x84));

	if (t20 != 15309141709598871559LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static uint64_t x87 = UINT64_MAX;
	int32_t x88 = -1;

	t21 = (x85^((x86^x87)/x88));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	volatile int32_t x90 = INT32_MAX;
	int16_t x91 = INT16_MIN;
	static volatile int8_t x92 = INT8_MAX;

	t22 = (x89^((x90^x91)/x92));

	if (t22 != 16909061) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	volatile int16_t x94 = -1;
	volatile uint8_t x95 = 3U;

	t23 = (x93^((x94^x95)/x96));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 12U;
	uint32_t x98 = 3478U;
	int64_t x99 = 1076939970935LL;
	int64_t x100 = INT64_MAX;
	volatile int64_t t24 = -1116186487305LL;

	t24 = (x97^((x98^x99)/x100));

	if (t24 != 12LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MAX;
	volatile int32_t x104 = -1;
	int32_t t25 = 1;

	t25 = (x101^((x102^x103)/x104));

	if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MAX;
	static uint8_t x107 = 31U;
	int8_t x108 = INT8_MIN;
	static int64_t t26 = INT64_MAX;

	t26 = (x105^((x106^x107)/x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint8_t x110 = 2U;
	uint32_t t27 = UINT32_MAX;

	t27 = (x109^((x110^x111)/x112));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 2;
	int16_t x114 = -1;
	int32_t x116 = INT32_MAX;
	int32_t t28 = -2218;

	t28 = (x113^((x114^x115)/x116));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = INT8_MAX;
	int16_t x119 = -1;
	uint16_t x120 = 2957U;

	t29 = (x117^((x118^x119)/x120));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	static int8_t x122 = INT8_MIN;
	uint8_t x123 = 0U;
	volatile int32_t t30 = -1209042;

	t30 = (x121^((x122^x123)/x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	volatile uint16_t x126 = UINT16_MAX;
	int32_t x127 = 481292565;
	int8_t x128 = INT8_MIN;
	volatile int64_t t31 = -2749770548LL;

	t31 = (x125^((x126^x127)/x128));

	if (t31 != -9223372036851016164LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x131 = 12;
	static int32_t x132 = -1;
	static int32_t t32 = 142;

	t32 = (x129^((x130^x131)/x132));

	if (t32 != 172) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -116678049614LL;
	volatile int16_t x134 = 6852;
	volatile int16_t x135 = -3424;
	int16_t x136 = INT16_MAX;

	t33 = (x133^((x134^x135)/x136));

	if (t33 != -116678049614LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 23078629U;
	int8_t x138 = INT8_MAX;
	volatile int16_t x139 = -1550;
	static uint32_t x140 = UINT32_MAX;
	static uint32_t t34 = 76893041U;

	t34 = (x137^((x138^x139)/x140));

	if (t34 != 23078629U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	static uint64_t x143 = UINT64_MAX;
	int32_t x144 = -1;
	uint64_t t35 = 59847006347142LLU;

	t35 = (x141^((x142^x143)/x144));

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = 5;
	int64_t x147 = -143905579LL;
	volatile int16_t x148 = INT16_MIN;

	t36 = (x145^((x146^x147)/x148));

	if (t36 != 4360LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 7371438549422LL;
	static int8_t x150 = INT8_MIN;
	int32_t x151 = 45;
	int16_t x152 = INT16_MIN;
	volatile int64_t t37 = 535563397131786962LL;

	t37 = (x149^((x150^x151)/x152));

	if (t37 != 7371438549422LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 10864U;
	int64_t x155 = -1LL;
	int64_t x156 = -1LL;
	static int64_t t38 = 225964LL;

	t38 = (x153^((x154^x155)/x156));

	if (t38 != 10992LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 1667974U;
	int8_t x159 = -3;
	int32_t x160 = INT32_MAX;
	static uint32_t t39 = 0U;

	t39 = (x157^((x158^x159)/x160));

	if (t39 != 1667974U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	static uint16_t x162 = 27949U;
	volatile uint64_t t40 = 19LLU;

	t40 = (x161^((x162^x163)/x164));

	if (t40 != 18446744073256145048LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MAX;
	int16_t x167 = -13;
	int64_t t41 = -2106121LL;

	t41 = (x165^((x166^x167)/x168));

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -75;
	int64_t x171 = 128400748272LL;
	int16_t x172 = INT16_MIN;
	volatile int64_t t42 = -259790064147635017LL;

	t42 = (x169^((x170^x171)/x172));

	if (t42 != -9223372036850857329LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int16_t x175 = -1;
	static volatile int16_t x176 = INT16_MIN;
	volatile uint64_t t43 = 5064019897834396LLU;

	t43 = (x173^((x174^x175)/x176));

	if (t43 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x178 = -189;
	int64_t x179 = INT64_MIN;
	int64_t x180 = 59407LL;
	int64_t t44 = 8588028704482LL;

	t44 = (x177^((x178^x179)/x180));

	if (t44 != 155257327198196LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x182 = 0;
	int8_t x184 = 3;
	uint64_t t45 = 53396LLU;

	t45 = (x181^((x182^x183)/x184));

	if (t45 != 9223372194573922456LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MIN;
	static uint8_t x187 = 6U;
	int64_t x188 = INT64_MAX;
	int64_t t46 = -70LL;

	t46 = (x185^((x186^x187)/x188));

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MAX;
	int32_t x191 = 90;
	int16_t x192 = 3;
	int32_t t47 = -139672;

	t47 = (x189^((x190^x191)/x192));

	if (t47 != 32738) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	static int32_t x195 = -7443253;
	volatile uint64_t t48 = 9172298894465LLU;

	t48 = (x193^((x194^x195)/x196));

	if (t48 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -1LL;
	int64_t x198 = INT64_MAX;
	int16_t x199 = 1;
	static int16_t x200 = -2;
	static volatile int64_t t49 = 13117731367LL;

	t49 = (x197^((x198^x199)/x200));

	if (t49 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 1434631;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	int32_t t50 = 9;

	t50 = (x201^((x202^x203)/x204));

	if (t50 != -1415244) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 60444LLU;
	int8_t x206 = INT8_MIN;
	volatile uint16_t x207 = UINT16_MAX;
	int16_t x208 = 47;
	uint64_t t51 = 33LLU;

	t51 = (x205^((x206^x207)/x208));

	if (t51 != 18446744073709491853LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = INT8_MAX;
	volatile int32_t x210 = INT32_MAX;
	volatile int32_t x211 = INT32_MIN;

	t52 = (x209^((x210^x211)/x212));

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = 1836U;
	int32_t x215 = 21850;
	static int8_t x216 = 2;

	t53 = (x213^((x214^x215)/x216));

	if (t53 != 33490U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = -1;
	int64_t x218 = 0LL;
	static int32_t x219 = 8364373;
	uint32_t x220 = UINT32_MAX;
	int64_t t54 = 63878584555073LL;

	t54 = (x217^((x218^x219)/x220));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 508098LLU;
	uint32_t x222 = UINT32_MAX;
	static volatile int64_t x223 = INT64_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 1900657900459411LLU;

	t55 = (x221^((x222^x223)/x224));

	if (t55 != 508098LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = -2;
	volatile int32_t x231 = -66;

	t56 = (x229^((x230^x231)/x232));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x234 = 124280991501208648LLU;
	int64_t x235 = INT64_MIN;
	volatile int16_t x236 = -1;
	uint64_t t57 = UINT64_MAX;

	t57 = (x233^((x234^x235)/x236));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x237 = 414LLU;
	int32_t x238 = INT32_MAX;
	static int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MAX;
	volatile uint64_t t58 = 550872793972105883LLU;

	t58 = (x237^((x238^x239)/x240));

	if (t58 != 414LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x241 = INT32_MIN;
	uint32_t x242 = 24U;
	int32_t x243 = INT32_MIN;
	uint32_t x244 = UINT32_MAX;
	uint32_t t59 = 2886U;

	t59 = (x241^((x242^x243)/x244));

	if (t59 != 2147483648U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x245 = -473;
	uint8_t x246 = UINT8_MAX;
	static int16_t x247 = INT16_MIN;
	int32_t x248 = -7;
	int32_t t60 = -175855;

	t60 = (x245^((x246^x247)/x248));

	if (t60 != -5117) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x250 = INT16_MIN;
	volatile int64_t x251 = INT64_MIN;
	uint8_t x252 = 21U;

	t61 = (x249^((x250^x251)/x252));

	if (t61 != 439208291334693905LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x253 = 24U;
	int16_t x254 = INT16_MAX;
	int16_t x255 = 19;
	uint64_t x256 = 388514LLU;

	t62 = (x253^((x254^x255)/x256));

	if (t62 != 24LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = 150845466664564321LL;
	volatile uint64_t x260 = 33937024574995812LLU;
	volatile uint64_t t63 = 3370LLU;

	t63 = (x257^((x258^x259)/x260));

	if (t63 != 18446744073709551076LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -443;
	int8_t x262 = -1;
	int64_t x263 = INT64_MIN;
	int32_t x264 = INT32_MAX;
	volatile int64_t t64 = 3LL;

	t64 = (x261^((x262^x263)/x264));

	if (t64 != -4294967737LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x265 = INT32_MIN;
	volatile int32_t x267 = -1;
	int32_t x268 = INT32_MAX;
	uint64_t t65 = 6151797832126787LLU;

	t65 = (x265^((x266^x267)/x268));

	if (t65 != 18446744062972133379LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x271 = INT8_MIN;
	static volatile int32_t t66 = 23777505;

	t66 = (x269^((x270^x271)/x272));

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x273 = 5606715U;
	volatile int16_t x275 = 4818;

	t67 = (x273^((x274^x275)/x276));

	if (t67 != 1844674407374264558LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -24917320;
	int16_t x278 = -1;
	int64_t x279 = 255836936703603040LL;
	uint16_t x280 = UINT16_MAX;
	volatile int64_t t68 = 264695LL;

	t68 = (x277^((x278^x279)/x280));

	if (t68 != 3903800190912LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x282 = INT32_MIN;
	static volatile int32_t t69 = -14938;

	t69 = (x281^((x282^x283)/x284));

	if (t69 != -65410) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = 23583LL;
	volatile int32_t x288 = INT32_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x285^((x286^x287)/x288));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x290 = 1493334665504800LL;
	int64_t x291 = INT64_MIN;
	int32_t x292 = 212637;
	int64_t t71 = -606643LL;

	t71 = (x289^((x290^x291)/x292));

	if (t71 != -43369115931608LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = 424;
	volatile int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;
	volatile int64_t t72 = 9LL;

	t72 = (x293^((x294^x295)/x296));

	if (t72 != -343LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = INT16_MIN;
	int16_t x304 = 4;
	static volatile uint32_t t73 = 4921U;

	t73 = (x301^((x302^x303)/x304));

	if (t73 != 4294959116U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 0U;
	static uint16_t x306 = UINT16_MAX;
	static int8_t x308 = -2;

	t74 = (x305^((x306^x307)/x308));

	if (t74 != -1073709056) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 1U;
	static int64_t x311 = INT64_MAX;
	int32_t x312 = -618436;
	volatile int64_t t75 = 14LL;

	t75 = (x309^((x310^x311)/x312));

	if (t75 != -14914028346842LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x314 = 930U;
	int64_t x315 = INT64_MIN;
	volatile uint64_t x316 = 960906920560072LLU;
	volatile uint64_t t76 = 1LLU;

	t76 = (x313^((x314^x315)/x316));

	if (t76 != 55937LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x317 = 62U;
	int8_t x318 = INT8_MIN;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t77 = 166336479137754370LLU;

	t77 = (x317^((x318^x319)/x320));

	if (t77 != 62LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = UINT8_MAX;
	static uint16_t x323 = 0U;
	static int16_t x324 = INT16_MIN;
	int32_t t78 = 1;

	t78 = (x321^((x322^x323)/x324));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = 25;
	uint64_t x326 = 232LLU;
	volatile int8_t x328 = INT8_MIN;
	static uint64_t t79 = 122845688543LLU;

	t79 = (x325^((x326^x327)/x328));

	if (t79 != 25LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x330 = 20;
	int64_t x332 = INT64_MIN;
	int64_t t80 = 7762921860701801LL;

	t80 = (x329^((x330^x331)/x332));

	if (t80 != 65535LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = -1LL;
	volatile int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MIN;

	t81 = (x333^((x334^x335)/x336));

	if (t81 != -4294967042LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MAX;
	int16_t x338 = INT16_MAX;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = 5;
	volatile uint64_t t82 = 29984426LLU;

	t82 = (x337^((x338^x339)/x340));

	if (t82 != 3689348814741903846LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = -1;
	static int8_t x346 = 15;
	int32_t x347 = 7660;
	int64_t x348 = -232585595LL;
	volatile int64_t t83 = 313924458LL;

	t83 = (x345^((x346^x347)/x348));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x349 = 671321091LL;
	int64_t x350 = INT64_MIN;
	int8_t x351 = -1;
	int16_t x352 = -1;

	t84 = (x349^((x350^x351)/x352));

	if (t84 != -9223372036183454718LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -6;
	static volatile uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 228586610U;
	static volatile uint32_t t85 = 795243U;

	t85 = (x353^((x354^x355)/x356));

	if (t85 != 4294967290U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = -1;
	uint8_t x358 = 0U;
	int8_t x360 = INT8_MAX;
	volatile uint64_t t86 = 1373521444983093LLU;

	t86 = (x357^((x358^x359)/x360));

	if (t86 != 18301494120373255933LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = 1;
	volatile int32_t x363 = -1;
	volatile int64_t x364 = 30LL;
	static volatile int64_t t87 = INT64_MIN;

	t87 = (x361^((x362^x363)/x364));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x370 = INT32_MIN;
	static int32_t x371 = INT32_MIN;
	uint32_t x372 = UINT32_MAX;
	uint32_t t88 = UINT32_MAX;

	t88 = (x369^((x370^x371)/x372));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = INT32_MIN;
	static int32_t x375 = -1;
	int16_t x376 = INT16_MIN;
	static volatile uint32_t t89 = 30440U;

	t89 = (x373^((x374^x375)/x376));

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -1;
	volatile int64_t x378 = -1LL;
	int32_t x379 = 136808090;
	static int16_t x380 = INT16_MIN;
	volatile int64_t t90 = -1913LL;

	t90 = (x377^((x378^x379)/x380));

	if (t90 != -4176LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = 8466819911967LLU;
	uint16_t x383 = 989U;
	int32_t x384 = -1;

	t91 = (x381^((x382^x383)/x384));

	if (t91 != 18446735606889639273LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x385 = -12;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = 13713;
	int8_t x388 = INT8_MIN;
	static int32_t t92 = 994321;

	t92 = (x385^((x386^x387)/x388));

	if (t92 != 408) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	volatile uint16_t x392 = UINT16_MAX;
	static volatile int32_t t93 = 121274988;

	t93 = (x389^((x390^x391)/x392));

	if (t93 != -2147450881) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x393 = 1U;
	uint64_t x394 = 283384061LLU;
	static int64_t x395 = 161856523057157LL;
	volatile int16_t x396 = INT16_MIN;
	static uint64_t t94 = 3760519LLU;

	t94 = (x393^((x394^x395)/x396));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x397 = -6;
	uint64_t x398 = UINT64_MAX;
	static uint32_t x399 = 89U;
	int8_t x400 = -1;
	uint64_t t95 = 177104LLU;

	t95 = (x397^((x398^x399)/x400));

	if (t95 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -1;
	int16_t x404 = 73;

	t96 = (x401^((x402^x403)/x404));

	if (t96 != 126347562148721145LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = UINT16_MAX;
	volatile uint16_t x407 = 1U;
	static uint16_t x408 = UINT16_MAX;
	volatile uint64_t t97 = 11062247380LLU;

	t97 = (x405^((x406^x407)/x408));

	if (t97 != 65387LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x409 = INT64_MAX;
	int64_t x410 = INT64_MIN;
	uint16_t x412 = 24U;
	int64_t t98 = -105518LL;

	t98 = (x409^((x410^x411)/x412));

	if (t98 != 8839064868741971967LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x413 = 123U;
	int32_t x415 = INT32_MIN;

	t99 = (x413^((x414^x415)/x416));

	if (t99 != 265652U) { NG(); } else { ; }
	
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

