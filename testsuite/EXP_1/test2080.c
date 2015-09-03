#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 10473;
static int32_t x10 = INT32_MIN;
int64_t x11 = INT64_MIN;
static volatile uint64_t t3 = 20413917558608LLU;
int16_t x21 = -1;
volatile int8_t x30 = INT8_MAX;
static volatile int8_t x34 = INT8_MIN;
uint32_t x36 = 0U;
static int64_t t8 = 22373871LL;
volatile uint64_t x40 = UINT64_MAX;
static volatile int64_t t10 = -15199450104709362LL;
int8_t x47 = INT8_MAX;
int64_t x52 = INT64_MIN;
int64_t t12 = INT64_MIN;
static volatile uint64_t x53 = UINT64_MAX;
uint64_t x54 = UINT64_MAX;
static volatile uint64_t t13 = 7LLU;
volatile uint32_t x58 = UINT32_MAX;
int32_t x59 = INT32_MAX;
uint16_t x60 = UINT16_MAX;
int64_t x64 = 617176LL;
static uint16_t x69 = 0U;
volatile uint16_t x75 = UINT16_MAX;
int64_t x78 = INT64_MAX;
uint64_t x86 = 42297539130407LLU;
volatile uint64_t t21 = 16413354842712LLU;
uint64_t x90 = 910LLU;
int32_t x91 = -3232;
static int64_t x92 = INT64_MIN;
uint8_t x94 = 0U;
uint16_t x104 = UINT16_MAX;
int16_t x111 = -1625;
static int8_t x116 = INT8_MAX;
static uint8_t x119 = UINT8_MAX;
uint8_t x121 = UINT8_MAX;
static int8_t x132 = 1;
int64_t x135 = INT64_MAX;
static int32_t x144 = -1;
uint64_t t33 = UINT64_MAX;
static int64_t x145 = -34310445371107LL;
int64_t x149 = INT64_MAX;
int8_t x152 = INT8_MIN;
volatile int64_t t35 = 232460LL;
int64_t t36 = 2452118243252100676LL;
uint32_t x159 = UINT32_MAX;
volatile int64_t t39 = INT64_MIN;
int8_t x175 = 1;
uint64_t t43 = 196343LLU;
int8_t x185 = 49;
volatile uint16_t x187 = 84U;
volatile uint16_t x189 = 55U;
uint32_t x198 = 7U;
static int8_t x203 = INT8_MAX;
int64_t x208 = INT64_MAX;
uint32_t x209 = 1U;
static uint8_t x215 = UINT8_MAX;
int8_t x221 = 0;
int8_t x223 = -1;
volatile int64_t x226 = INT64_MIN;
uint8_t x234 = UINT8_MAX;
int16_t x238 = -1;
static int64_t t56 = -7136812223648167LL;
uint32_t x243 = UINT32_MAX;
static volatile int64_t t58 = -730978464869886702LL;
volatile int16_t x257 = -315;
int64_t x260 = 393LL;
int8_t x263 = 18;
int16_t x268 = INT16_MIN;
volatile int64_t t64 = -10272LL;
uint8_t x273 = 1U;
uint64_t x274 = 1837466LLU;
uint8_t x280 = 1U;
int32_t x281 = -281740736;
int64_t x288 = 0LL;
int8_t x291 = -11;
int64_t x293 = INT64_MAX;
int64_t x294 = -110569627889LL;
int64_t x298 = INT64_MIN;
int64_t t72 = 1726442153972531LL;
static int64_t x306 = INT64_MAX;
uint8_t x311 = 5U;
int16_t x312 = INT16_MIN;
int32_t t74 = 0;
uint16_t x313 = 12U;
int64_t x317 = -76431384305LL;
volatile int64_t x321 = -161694760432LL;
volatile int32_t x323 = INT32_MIN;
int16_t x326 = INT16_MAX;
int64_t x328 = -1560665LL;
uint64_t x334 = 27300749832178LLU;
volatile uint64_t x337 = 397553994971LLU;
uint16_t x341 = 964U;
int16_t x350 = -1;
uint64_t x354 = UINT64_MAX;
int16_t x355 = INT16_MIN;
int16_t x356 = INT16_MIN;
uint64_t x358 = UINT64_MAX;
static volatile int32_t x359 = INT32_MIN;
uint8_t x360 = 59U;
uint64_t t86 = 58LLU;
volatile uint64_t t87 = 571255420146LLU;
int16_t x368 = 1314;
volatile uint32_t t88 = 28228743U;
int32_t x371 = INT32_MAX;
uint8_t x375 = 1U;
volatile int8_t x382 = -1;
volatile uint64_t x386 = 101941159543428LLU;
static uint32_t x387 = UINT32_MAX;
volatile uint64_t t93 = 407LLU;
uint16_t x394 = 3746U;
int16_t x398 = INT16_MAX;
int64_t x404 = INT64_MIN;
int64_t x407 = INT64_MIN;
int16_t x409 = -2;
int16_t x411 = 3;
volatile int8_t x412 = INT8_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	uint8_t x2 = 35U;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = -1681;

	t0 = (((x1^x2)/x3)^x4);

	if (t0 != 10473) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 1932954LLU;
	volatile int64_t x6 = INT64_MIN;
	volatile int32_t x7 = -276219573;
	int32_t x8 = -1;
	uint64_t t1 = UINT64_MAX;

	t1 = (((x5^x6)/x7)^x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 1U;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

	t2 = (((x9^x10)/x11)^x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1715294594U;
	int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MAX;
	uint64_t x16 = 53018LLU;

	t3 = (((x13^x14)/x15)^x16);

	if (t3 != 53018LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = INT8_MIN;
	static int32_t x20 = 3218;
	static int32_t t4 = 205689;

	t4 = (((x17^x18)/x19)^x20);

	if (t4 != 3474) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -60211167;
	int8_t x23 = -1;
	int8_t x24 = -10;
	volatile int32_t t5 = 37;

	t5 = (((x21^x22)/x23)^x24);

	if (t5 != 60211156) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static int32_t x26 = -2384441;
	uint64_t x27 = 1109704611489210LLU;
	int64_t x28 = INT64_MIN;
	static uint64_t t6 = 1278613LLU;

	t6 = (((x25^x26)/x27)^x28);

	if (t6 != 9223372036854792431LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -980602271;
	volatile int8_t x31 = 14;
	volatile int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 129832732;

	t7 = (((x29^x30)/x31)^x32);

	if (t7 != -70043121) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x35 = -1LL;

	t8 = (((x33^x34)/x35)^x36);

	if (t8 != 129LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -5;
	static volatile uint64_t t9 = 2LLU;

	t9 = (((x37^x38)/x39)^x40);

	if (t9 != 1844674407370948607LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 151220763597060LL;
	volatile int16_t x42 = -6;
	uint32_t x43 = 107U;
	int16_t x44 = 269;

	t10 = (((x41^x42)/x43)^x44);

	if (t10 != -1413278164197LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 14253279941986933LLU;
	uint16_t x46 = UINT16_MAX;
	uint16_t x48 = UINT16_MAX;
	uint64_t t11 = 38484737LLU;

	t11 = (((x45^x46)/x47)^x48);

	if (t11 != 112230550675799LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -31LL;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;

	t12 = (((x49^x50)/x51)^x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = -57;
	volatile int8_t x56 = INT8_MIN;

	t13 = (((x53^x54)/x55)^x56);

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	static uint32_t t14 = 100392U;

	t14 = (((x57^x58)/x59)^x60);

	if (t14 != 65535U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	volatile int8_t x62 = INT8_MIN;
	int32_t x63 = -1114702;
	volatile int64_t t15 = 47092324LL;

	t15 = (((x61^x62)/x63)^x64);

	if (t15 != 617176LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 2403LLU;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	static volatile uint64_t t16 = 183913868578160LLU;

	t16 = (((x65^x66)/x67)^x68);

	if (t16 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -6999;
	int32_t x71 = -1;
	static int16_t x72 = INT16_MAX;
	static int32_t t17 = -36881;

	t17 = (((x69^x70)/x71)^x72);

	if (t17 != 25768) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint16_t x74 = 11611U;
	int8_t x76 = -1;
	volatile int64_t t18 = -2006LL;

	t18 = (((x73^x74)/x75)^x76);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1832731;
	volatile int64_t x79 = INT64_MAX;
	volatile int32_t x80 = INT32_MAX;
	volatile int64_t t19 = -31LL;

	t19 = (((x77^x78)/x79)^x80);

	if (t19 != 2147483647LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	static int16_t x82 = -222;
	uint32_t x83 = 128788160U;
	int8_t x84 = INT8_MAX;
	static uint32_t t20 = 43U;

	t20 = (((x81^x82)/x83)^x84);

	if (t20 != 94U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 1077U;
	static int32_t x87 = INT32_MAX;
	uint16_t x88 = UINT16_MAX;

	t21 = (((x85^x86)/x87)^x88);

	if (t21 != 45839LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	volatile uint64_t t22 = 339375662493680815LLU;

	t22 = (((x89^x90)/x91)^x92);

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -39;
	static volatile int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	int64_t t23 = 361990329849400105LL;

	t23 = (((x93^x94)/x95)^x96);

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 12044;
	volatile int32_t x98 = -7;
	static volatile int16_t x99 = INT16_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -29575;

	t24 = (((x97^x98)/x99)^x100);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -1;
	int16_t x102 = -1;
	int64_t x103 = 43222651143796LL;
	volatile int64_t t25 = 2598643898LL;

	t25 = (((x101^x102)/x103)^x104);

	if (t25 != 65535LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -5510108;
	int8_t x110 = INT8_MIN;
	int32_t x112 = -1508529;
	volatile int32_t t26 = -218912971;

	t26 = (((x109^x110)/x111)^x112);

	if (t26 != 1509773) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = -1;
	static int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MAX;
	int32_t t27 = 3;

	t27 = (((x113^x114)/x115)^x116);

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t28 = 15340674;

	t28 = (((x117^x118)/x119)^x120);

	if (t28 != -32512) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x122 = 71191U;
	uint8_t x123 = UINT8_MAX;
	volatile uint16_t x124 = UINT16_MAX;
	static uint32_t t29 = 60U;

	t29 = (((x121^x122)/x123)^x124);

	if (t29 != 65255U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = INT32_MIN;
	uint32_t x126 = 3555291U;
	int16_t x127 = INT16_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (((x125^x126)/x127)^x128);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	static uint32_t x130 = UINT32_MAX;
	int16_t x131 = INT16_MAX;
	volatile uint32_t t31 = 2777479U;

	t31 = (((x129^x130)/x131)^x132);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	volatile int64_t t32 = 3LL;

	t32 = (((x133^x134)/x135)^x136);

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = 208973406462199LLU;
	static int32_t x142 = 127700;
	int64_t x143 = -24016464591LL;

	t33 = (((x141^x142)/x143)^x144);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x146 = 10U;
	volatile uint8_t x147 = UINT8_MAX;
	int32_t x148 = 1585108;
	volatile int64_t t34 = 388176586833224851LL;

	t34 = (((x145^x146)/x147)^x148);

	if (t34 != -134549204357LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = INT64_MIN;

	t35 = (((x149^x150)/x151)^x152);

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MAX;
	uint32_t x154 = UINT32_MAX;
	static uint8_t x155 = 1U;
	static int8_t x156 = -1;

	t36 = (((x153^x154)/x155)^x156);

	if (t36 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -1;
	int32_t x158 = -1;
	int16_t x160 = INT16_MAX;
	volatile uint32_t t37 = 24501530U;

	t37 = (((x157^x158)/x159)^x160);

	if (t37 != 32767U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t38 = INT32_MIN;

	t38 = (((x161^x162)/x163)^x164);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;

	t39 = (((x165^x166)/x167)^x168);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = 3837842579594LL;
	static int8_t x170 = -1;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;
	int64_t t40 = 224096LL;

	t40 = (((x169^x170)/x171)^x172);

	if (t40 != 29983145022LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x173 = 35U;
	static int16_t x174 = INT16_MIN;
	int16_t x176 = -304;
	volatile int32_t t41 = 504515;

	t41 = (((x173^x174)/x175)^x176);

	if (t41 != 32499) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x177 = UINT64_MAX;
	int16_t x178 = 1052;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;
	uint64_t t42 = 8745276159918321654LLU;

	t42 = (((x177^x178)/x179)^x180);

	if (t42 != 4294967294LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -58;
	int64_t x182 = INT64_MAX;
	volatile uint64_t x183 = UINT64_MAX;
	int8_t x184 = INT8_MAX;

	t43 = (((x181^x182)/x183)^x184);

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x186 = 24030005;
	static uint16_t x188 = 3U;
	volatile int32_t t44 = 52900394;

	t44 = (((x185^x186)/x187)^x188);

	if (t44 != 286069) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x190 = 3;
	static uint32_t x191 = 7U;
	uint64_t x192 = 997099LLU;
	volatile uint64_t t45 = 29465586625910LLU;

	t45 = (((x189^x190)/x191)^x192);

	if (t45 != 997100LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = 14;
	static volatile int64_t x194 = INT64_MAX;
	static uint32_t x195 = UINT32_MAX;
	int64_t x196 = -1LL;
	int64_t t46 = -841263822721363665LL;

	t46 = (((x193^x194)/x195)^x196);

	if (t46 != -2147483649LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = 1853;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -4;
	uint32_t t47 = 378925754U;

	t47 = (((x197^x198)/x199)^x200);

	if (t47 != 4294967292U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MAX;
	volatile int32_t x202 = INT32_MIN;
	int32_t x204 = INT32_MAX;
	int32_t t48 = -3;

	t48 = (((x201^x202)/x203)^x204);

	if (t48 != -2130574587) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = -95657839LL;
	int8_t x207 = 7;
	volatile int64_t t49 = 194LL;

	t49 = (((x205^x206)/x207)^x208);

	if (t49 != 7905747460174901812LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x210 = 7285U;
	uint32_t x211 = 2849878U;
	volatile int64_t x212 = INT64_MAX;
	static volatile int64_t t50 = INT64_MAX;

	t50 = (((x209^x210)/x211)^x212);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MAX;
	int8_t x214 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t51 = 6943120418694LL;

	t51 = (((x213^x214)/x215)^x216);

	if (t51 != -9187201950435737472LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = -1LL;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int64_t t52 = -8152213354167425LL;

	t52 = (((x217^x218)/x219)^x220);

	if (t52 != -2147483393LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x222 = INT8_MIN;
	uint16_t x224 = 28102U;
	volatile int32_t t53 = -1;

	t53 = (((x221^x222)/x223)^x224);

	if (t53 != 27974) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -1120467160451271224LL;
	uint16_t x227 = 90U;
	static uint64_t x228 = UINT64_MAX;
	uint64_t t54 = 3532082877LLU;

	t54 = (((x225^x226)/x227)^x228);

	if (t54 != 18356711797305068231LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x233 = UINT16_MAX;
	static int64_t x235 = INT64_MIN;
	volatile int32_t x236 = INT32_MAX;
	int64_t t55 = 16079848994LL;

	t55 = (((x233^x234)/x235)^x236);

	if (t55 != 2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = 11;
	uint8_t x239 = UINT8_MAX;
	int64_t x240 = -30155019930643353LL;

	t56 = (((x237^x238)/x239)^x240);

	if (t56 != -30155019930643353LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = 28U;
	volatile int64_t x244 = INT64_MIN;
	uint64_t t57 = 37LLU;

	t57 = (((x241^x242)/x243)^x244);

	if (t57 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MAX;
	uint8_t x246 = 2U;
	int64_t x247 = INT64_MIN;
	uint32_t x248 = 15898U;

	t58 = (((x245^x246)/x247)^x248);

	if (t58 != 15898LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -433459128;
	volatile int64_t x250 = 25LL;
	uint64_t x251 = UINT64_MAX;
	uint64_t x252 = UINT64_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x249^x250)/x251)^x252);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MAX;
	uint16_t x254 = 6U;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = 11U;
	static volatile int32_t t60 = 1;

	t60 = (((x253^x254)/x255)^x256);

	if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	volatile uint64_t t61 = 52LLU;

	t61 = (((x257^x258)/x259)^x260);

	if (t61 != 393LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = -1;
	int32_t x262 = INT32_MIN;
	volatile int32_t x264 = INT32_MAX;
	volatile int32_t t62 = -68069232;

	t62 = (((x261^x262)/x263)^x264);

	if (t62 != 2028179000) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 6LLU;
	int64_t x266 = -1LL;
	static int64_t x267 = INT64_MIN;
	volatile uint64_t t63 = 641751048LLU;

	t63 = (((x265^x266)/x267)^x268);

	if (t63 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = -1;

	t64 = (((x269^x270)/x271)^x272);

	if (t64 != -72057594021150721LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x275 = -20471;
	int32_t x276 = -1;
	uint64_t t65 = UINT64_MAX;

	t65 = (((x273^x274)/x275)^x276);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 1U;
	volatile uint8_t x278 = 34U;
	int16_t x279 = INT16_MIN;
	volatile int32_t t66 = 160704;

	t66 = (((x277^x278)/x279)^x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x282 = INT32_MIN;
	uint32_t x283 = 6034U;
	volatile uint8_t x284 = 74U;
	volatile uint32_t t67 = 3443894U;

	t67 = (((x281^x282)/x283)^x284);

	if (t67 != 309150U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x285 = -332;
	static int64_t x286 = INT64_MAX;
	int32_t x287 = INT32_MAX;
	int64_t t68 = -10091LL;

	t68 = (((x285^x286)/x287)^x288);

	if (t68 != -4294967297LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 10138LLU;
	uint32_t x290 = UINT32_MAX;
	uint16_t x292 = 787U;
	uint64_t t69 = 261401675LLU;

	t69 = (((x289^x290)/x291)^x292);

	if (t69 != 787LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x295 = 2504038LL;
	int64_t x296 = INT64_MIN;
	volatile int64_t t70 = 210243LL;

	t70 = (((x293^x294)/x295)^x296);

	if (t70 != 9223368353455431915LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = INT8_MAX;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	static volatile int64_t t71 = -23832590373976LL;

	t71 = (((x297^x298)/x299)^x300);

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MIN;
	uint32_t x302 = 1908U;
	int64_t x303 = 250138618541LL;
	volatile int16_t x304 = INT16_MAX;

	t72 = (((x301^x302)/x303)^x304);

	if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x305 = 9LLU;
	static int8_t x307 = INT8_MIN;
	volatile int16_t x308 = -169;
	volatile uint64_t t73 = 80789802267567773LLU;

	t73 = (((x305^x306)/x307)^x308);

	if (t73 != 18446744073709551447LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x309 = -1;
	int8_t x310 = 5;

	t74 = (((x309^x310)/x311)^x312);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x314 = 50U;
	int32_t x315 = INT32_MIN;
	int64_t x316 = 1469131LL;
	int64_t t75 = 234623237092LL;

	t75 = (((x313^x314)/x315)^x316);

	if (t75 != 1469131LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x318 = INT16_MIN;
	static uint16_t x319 = 117U;
	int32_t x320 = INT32_MAX;
	volatile int64_t t76 = -98771959497293LL;

	t76 = (((x317^x318)/x319)^x320);

	if (t76 != 1494224088LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x322 = 86816LLU;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t77 = 64160LLU;

	t77 = (((x321^x322)/x323)^x324);

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 16356155U;
	int32_t x327 = -1;
	volatile int64_t t78 = -334603746LL;

	t78 = (((x325^x326)/x327)^x328);

	if (t78 != -1560665LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x330 = -94;
	int8_t x331 = -1;
	uint16_t x332 = 1U;
	int32_t t79 = 50146577;

	t79 = (((x329^x330)/x331)^x332);

	if (t79 != 65442) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = -1;
	int8_t x335 = INT8_MIN;
	int64_t x336 = 37426475LL;
	uint64_t t80 = 283849428133167316LLU;

	t80 = (((x333^x334)/x335)^x336);

	if (t80 != 37426475LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x338 = INT32_MIN;
	volatile int32_t x339 = 829;
	int8_t x340 = INT8_MAX;
	static volatile uint64_t t81 = 274LLU;

	t81 = (((x337^x338)/x339)^x340);

	if (t81 != 22251801778705905LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x342 = 22U;
	static int32_t x343 = INT32_MIN;
	volatile uint32_t x344 = 32U;
	uint32_t t82 = 3780199U;

	t82 = (((x341^x342)/x343)^x344);

	if (t82 != 32U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = 3915LL;
	static int32_t x347 = INT32_MIN;
	static int32_t x348 = 38420922;
	volatile int64_t t83 = 105261013LL;

	t83 = (((x345^x346)/x347)^x348);

	if (t83 != 38420922LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = 1;
	int16_t x351 = INT16_MAX;
	volatile uint32_t x352 = 306U;
	volatile uint32_t t84 = 107U;

	t84 = (((x349^x350)/x351)^x352);

	if (t84 != 306U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x353 = 2U;
	static uint64_t t85 = 1781858949LLU;

	t85 = (((x353^x354)/x355)^x356);

	if (t85 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x357 = -2138403917LL;

	t86 = (((x357^x358)/x359)^x360);

	if (t86 != 59LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = INT64_MIN;
	volatile int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	uint64_t x364 = 136423099291516716LLU;

	t87 = (((x361^x362)/x363)^x364);

	if (t87 != 18310320970271670061LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 365;
	volatile uint32_t x366 = UINT32_MAX;
	int32_t x367 = INT32_MAX;

	t88 = (((x365^x366)/x367)^x368);

	if (t88 != 1315U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = 1371729U;
	uint32_t x370 = 39449U;
	int16_t x372 = -1;
	uint32_t t89 = UINT32_MAX;

	t89 = (((x369^x370)/x371)^x372);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -76393853;
	uint32_t x374 = 13397U;
	int32_t x376 = INT32_MIN;
	static uint32_t t90 = 886017356U;

	t90 = (((x373^x374)/x375)^x376);

	if (t90 != 2071094998U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = 21826LL;
	volatile int64_t x378 = 25LL;
	int64_t x379 = -37225118588LL;
	uint16_t x380 = 7349U;
	int64_t t91 = -46068993939LL;

	t91 = (((x377^x378)/x379)^x380);

	if (t91 != 7349LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = INT64_MIN;
	int64_t x383 = 163432101LL;
	static volatile uint8_t x384 = UINT8_MAX;
	int64_t t92 = -137373831918LL;

	t92 = (((x381^x382)/x383)^x384);

	if (t92 != 56435498054LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 1U;
	volatile int8_t x388 = -1;

	t93 = (((x385^x386)/x387)^x388);

	if (t93 != 18446744073709527880LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = 0;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	int64_t t94 = 1673095474031549LL;

	t94 = (((x389^x390)/x391)^x392);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x393 = INT64_MAX;
	int8_t x395 = -1;
	int64_t x396 = INT64_MIN;
	volatile int64_t t95 = 10359LL;

	t95 = (((x393^x394)/x395)^x396);

	if (t95 != 3747LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int8_t x399 = 1;
	static uint64_t x400 = 444810569259LLU;
	volatile uint64_t t96 = 1214400938LLU;

	t96 = (((x397^x398)/x399)^x400);

	if (t96 != 444810536491LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -1LL;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = INT64_MAX;
	int64_t t97 = INT64_MIN;

	t97 = (((x401^x402)/x403)^x404);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	int8_t x408 = INT8_MAX;
	uint64_t t98 = 18LLU;

	t98 = (((x405^x406)/x407)^x408);

	if (t98 != 127LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x410 = INT32_MIN;
	int32_t t99 = -7;

	t99 = (((x409^x410)/x411)^x412);

	if (t99 != -715827926) { NG(); } else { ; }
	
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

