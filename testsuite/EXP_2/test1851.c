#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -62;
static int64_t x2 = -1LL;
volatile int32_t x14 = INT32_MIN;
uint8_t x15 = 0U;
int32_t t2 = 1;
static int32_t x17 = INT32_MIN;
volatile uint64_t x20 = 324328655LLU;
static uint16_t x22 = 61U;
int16_t x23 = -107;
static uint16_t x25 = 104U;
int16_t x26 = 35;
volatile int64_t x34 = -5340352937413LL;
int8_t x35 = INT8_MIN;
static uint16_t x37 = 0U;
volatile int8_t x41 = -1;
int8_t x42 = INT8_MIN;
int64_t x52 = INT64_MIN;
static uint8_t x57 = 15U;
uint16_t x59 = UINT16_MAX;
volatile int64_t t13 = -1LL;
volatile int16_t x64 = INT16_MIN;
int32_t x68 = INT32_MIN;
int64_t x70 = -1LL;
static int16_t x71 = INT16_MIN;
volatile int64_t x76 = INT64_MIN;
static int32_t x77 = INT32_MIN;
uint32_t x90 = UINT32_MAX;
int8_t x97 = INT8_MAX;
int8_t x100 = -1;
static int64_t x104 = INT64_MIN;
uint64_t x105 = 15185167251LLU;
uint64_t t24 = 9LLU;
volatile int64_t x113 = -1LL;
int32_t t27 = -1;
static int64_t t28 = -734LL;
int8_t x131 = INT8_MIN;
int16_t x134 = 0;
volatile uint64_t t31 = 29713958LLU;
uint16_t x137 = 3U;
uint64_t x143 = 2372645129637611LLU;
uint8_t x146 = UINT8_MAX;
int32_t t34 = -981960385;
static int16_t x160 = -1;
static int64_t x171 = INT64_MAX;
int64_t x174 = 59263050725362LL;
volatile int64_t t41 = -2LL;
int8_t x181 = INT8_MIN;
static int8_t x182 = 1;
volatile int32_t t43 = 2;
int8_t x185 = 2;
static int64_t x186 = 16477490220651LL;
int64_t t44 = 7583959LL;
uint32_t x192 = 103U;
int64_t x194 = -275894107971891853LL;
uint8_t x196 = 18U;
int8_t x210 = INT8_MIN;
static int16_t x211 = 7;
int32_t t50 = -21;
int16_t x214 = 0;
volatile int32_t t51 = 27;
uint64_t x224 = UINT64_MAX;
int32_t x225 = INT32_MAX;
int8_t x228 = INT8_MAX;
int32_t t54 = 449885336;
int16_t x232 = INT16_MIN;
static int64_t x233 = INT64_MIN;
int64_t x235 = INT64_MIN;
int16_t x236 = INT16_MIN;
static int64_t x251 = -1151586847079039635LL;
int16_t x258 = INT16_MAX;
static uint64_t t62 = 7517605LLU;
uint64_t t64 = 2LLU;
uint32_t x272 = 5U;
int16_t x275 = -2;
uint16_t x276 = UINT16_MAX;
uint32_t t66 = 1U;
uint8_t x286 = UINT8_MAX;
uint32_t x287 = 12537U;
int8_t x292 = INT8_MIN;
static uint64_t x296 = UINT64_MAX;
int8_t x304 = 2;
uint64_t x312 = 154489LLU;
volatile uint64_t t76 = 8318410LLU;
volatile int64_t x319 = -251LL;
volatile int8_t x325 = 0;
uint32_t t80 = 19879306U;
static uint64_t t81 = 519050864624529LLU;
int32_t x339 = INT32_MIN;
uint16_t x350 = 747U;
int64_t x352 = -1LL;
int32_t x355 = 272520004;
int16_t x357 = 12;
volatile uint8_t x361 = 2U;
static volatile int64_t x363 = 190235222724820LL;
volatile int64_t t88 = 3LL;
int32_t x382 = INT32_MIN;
uint32_t t97 = 3U;
int32_t x405 = -1;


void f0(void) {
	int8_t x3 = -3;
	int32_t x4 = -1;
	int64_t t0 = 40427LL;

	t0 = ((x1^(x2&x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	static int16_t x10 = INT16_MIN;
	int32_t x11 = 15560777;
	uint16_t x12 = 27U;
	int64_t t1 = -32602LL;

	t1 = ((x9^(x10&x11))%x12);

	if (t1 != -14LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	uint16_t x16 = 37U;

	t2 = ((x13^(x14&x15))%x16);

	if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MAX;
	int32_t x19 = 1783362;
	volatile uint64_t t3 = 27548693907LLU;

	t3 = ((x17^(x18&x19))%x20);

	if (t3 != 149877723LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MAX;
	int32_t x24 = 1244;
	static int32_t t4 = 106823;

	t4 = ((x21^(x22&x23))%x24);

	if (t4 != 106) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x27 = INT64_MIN;
	static int8_t x28 = INT8_MIN;
	volatile int64_t t5 = 113370167LL;

	t5 = ((x25^(x26&x27))%x28);

	if (t5 != 104LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 248;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = 115U;
	uint8_t x32 = UINT8_MAX;
	static int32_t t6 = -189;

	t6 = ((x29^(x30&x31))%x32);

	if (t6 != 248) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -207;
	int8_t x36 = 1;
	int64_t t7 = 238193656267698LL;

	t7 = ((x33^(x34&x35))%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x38 = -1;
	int16_t x39 = INT16_MAX;
	volatile int16_t x40 = INT16_MAX;
	static volatile int32_t t8 = -3;

	t8 = ((x37^(x38&x39))%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x43 = -5;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t9 = 47135167481450006LLU;

	t9 = ((x41^(x42&x43))%x44);

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	static int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MIN;
	volatile int64_t x48 = 13LL;
	volatile int64_t t10 = -9250331156205LL;

	t10 = ((x45^(x46&x47))%x48);

	if (t10 != -11LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x50 = 0U;
	uint8_t x51 = 3U;
	static volatile int64_t t11 = -21555322105LL;

	t11 = ((x49^(x50&x51))%x52);

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 724;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = UINT16_MAX;
	static volatile int8_t x56 = -49;
	volatile int32_t t12 = -742647;

	t12 = ((x53^(x54&x55))%x56);

	if (t12 != 38) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = -471900821LL;
	static volatile int32_t x60 = -22813560;

	t13 = ((x57^(x58&x59))%x60);

	if (t13 != 23908LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static int16_t x62 = 2;
	int16_t x63 = INT16_MIN;
	static volatile int32_t t14 = 6;

	t14 = ((x61^(x62&x63))%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MAX;
	uint16_t x66 = 7U;
	int16_t x67 = INT16_MAX;
	static int32_t t15 = 7386033;

	t15 = ((x65^(x66&x67))%x68);

	if (t15 != 32760) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t16 = 102766LLU;

	t16 = ((x69^(x70&x71))%x72);

	if (t16 != 32767LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	static volatile int64_t t17 = -70008531179LL;

	t17 = ((x73^(x74&x75))%x76);

	if (t17 != 2147450880LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MIN;
	volatile int32_t x79 = -1660;
	int8_t x80 = INT8_MAX;
	volatile int32_t t18 = 534368075;

	t18 = ((x77^(x78&x79))%x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 7043;
	static int32_t x82 = INT32_MIN;
	volatile int32_t x83 = INT32_MIN;
	static int64_t x84 = -1LL;
	volatile int64_t t19 = 1806481631412LL;

	t19 = ((x81^(x82&x83))%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 2402U;
	static int8_t x91 = 7;
	static int64_t x92 = 119260075LL;
	volatile int64_t t20 = -792158603698LL;

	t20 = ((x89^(x90&x91))%x92);

	if (t20 != 2405LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile int16_t x94 = 1117;
	int16_t x95 = -371;
	int64_t x96 = 554291094LL;
	static volatile int64_t t21 = -20905LL;

	t21 = ((x93^(x94&x95))%x96);

	if (t21 != -31731LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = 28601U;
	int64_t x99 = -1LL;
	int64_t t22 = -1LL;

	t22 = ((x97^(x98&x99))%x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = 16LL;
	uint8_t x102 = UINT8_MAX;
	uint16_t x103 = UINT16_MAX;
	int64_t t23 = -226LL;

	t23 = ((x101^(x102&x103))%x104);

	if (t23 != 239LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x106 = 1049610LLU;
	volatile int8_t x107 = INT8_MAX;
	int16_t x108 = -1;

	t24 = ((x105^(x106&x107))%x108);

	if (t24 != 15185167257LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -9344;
	int16_t x110 = -23;
	int16_t x111 = INT16_MIN;
	uint16_t x112 = 25U;
	int32_t t25 = -62;

	t25 = ((x109^(x110&x111))%x112);

	if (t25 != 24) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x114 = INT64_MIN;
	int32_t x115 = 32535226;
	uint32_t x116 = 876788U;
	int64_t t26 = -3101LL;

	t26 = ((x113^(x114&x115))%x116);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MIN;
	int16_t x119 = -1175;
	volatile int16_t x120 = 878;

	t27 = ((x117^(x118&x119))%x120);

	if (t27 != -147) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = INT8_MIN;
	uint16_t x122 = 1411U;
	static volatile int64_t x123 = INT64_MIN;
	volatile int8_t x124 = -1;

	t28 = ((x121^(x122&x123))%x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -1LL;
	int32_t x126 = -1;
	int32_t x127 = -1;
	int64_t x128 = INT64_MAX;
	static int64_t t29 = -829506716239858514LL;

	t29 = ((x125^(x126&x127))%x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 6LLU;
	int8_t x130 = INT8_MIN;
	static uint16_t x132 = UINT16_MAX;
	volatile uint64_t t30 = 107222933221LLU;

	t30 = ((x129^(x130&x131))%x132);

	if (t30 != 65414LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x133 = UINT64_MAX;
	volatile uint32_t x135 = 983557693U;
	static int16_t x136 = INT16_MIN;

	t31 = ((x133^(x134&x135))%x136);

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	volatile int8_t x140 = INT8_MIN;
	int32_t t32 = -910;

	t32 = ((x137^(x138&x139))%x140);

	if (t32 != 124) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	int8_t x144 = -10;
	static volatile uint64_t t33 = 150492952792128LLU;

	t33 = ((x141^(x142&x143))%x144);

	if (t33 != 18444371428579921643LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x147 = 388;
	int8_t x148 = -1;

	t34 = ((x145^(x146&x147))%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = 6;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	int32_t t35 = -4825;

	t35 = ((x149^(x150&x151))%x152);

	if (t35 != -122) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 63;
	static int8_t x154 = INT8_MIN;
	static volatile uint64_t x155 = 527325572727114LLU;
	int64_t x156 = -7605622108631606LL;
	static volatile uint64_t t36 = 21358057927494156LLU;

	t36 = ((x153^(x154&x155))%x156);

	if (t36 != 527325572727103LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = INT8_MAX;
	int8_t x158 = -54;
	int64_t x159 = INT64_MIN;
	volatile int64_t t37 = 58LL;

	t37 = ((x157^(x158&x159))%x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	int32_t x162 = 765620;
	uint8_t x163 = 25U;
	static int64_t x164 = -258207730099LL;
	volatile int64_t t38 = -116412811LL;

	t38 = ((x161^(x162&x163))%x164);

	if (t38 != -69375032235LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = 12U;
	int32_t x167 = INT32_MIN;
	static int8_t x168 = INT8_MIN;
	int32_t t39 = 579883156;

	t39 = ((x165^(x166&x167))%x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	volatile uint16_t x172 = UINT16_MAX;
	int64_t t40 = -934293LL;

	t40 = ((x169^(x170&x171))%x172);

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = INT64_MAX;
	static int64_t x175 = INT64_MIN;
	static int16_t x176 = INT16_MIN;

	t41 = ((x173^(x174&x175))%x176);

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = 1988855896006LLU;
	static int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MAX;
	volatile uint64_t t42 = 15845211LLU;

	t42 = ((x177^(x178&x179))%x180);

	if (t42 != 9223370046137434113LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x183 = 0U;
	volatile int8_t x184 = -1;

	t43 = ((x181^(x182&x183))%x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x187 = INT32_MIN;
	static volatile int64_t x188 = INT64_MIN;

	t44 = ((x185^(x186&x187))%x188);

	if (t44 != 16475494547458LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MAX;
	int64_t x190 = INT64_MAX;
	uint64_t x191 = 7964446293LLU;
	volatile uint64_t t45 = 924855516943650655LLU;

	t45 = ((x189^(x190&x191))%x192);

	if (t45 != 35LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = -1LL;
	int32_t x195 = INT32_MIN;
	int64_t t46 = 1328356836571034194LL;

	t46 = ((x193^(x194&x195))%x196);

	if (t46 != 11LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x197 = 6U;
	int8_t x198 = -6;
	volatile uint8_t x199 = 7U;
	int32_t x200 = INT32_MIN;
	int32_t t47 = 56;

	t47 = ((x197^(x198&x199))%x200);

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = 541;
	static uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 119922014708775LLU;
	int8_t x204 = -1;
	uint64_t t48 = 10860478900LLU;

	t48 = ((x201^(x202&x203))%x204);

	if (t48 != 26170LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	static int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MAX;
	static volatile int64_t t49 = -24908765947884LL;

	t49 = ((x205^(x206&x207))%x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int8_t x212 = INT8_MAX;

	t50 = ((x209^(x210&x211))%x212);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MAX;
	int32_t x215 = INT32_MIN;
	volatile int32_t x216 = -1;

	t51 = ((x213^(x214&x215))%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = 24913324649884LLU;
	volatile int32_t x218 = INT32_MIN;
	volatile uint32_t x219 = UINT32_MAX;
	int16_t x220 = 5;
	uint64_t t52 = 2446444489149807488LLU;

	t52 = ((x217^(x218&x219))%x220);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = -100000679163LL;
	volatile uint64_t x223 = 146187273419691LLU;
	uint64_t t53 = 65LLU;

	t53 = ((x221^(x222&x223))%x224);

	if (t53 != 18446597972343962369LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x226 = -8;
	int8_t x227 = INT8_MIN;

	t54 = ((x225^(x226&x227))%x228);

	if (t54 != -8) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -96645;
	int64_t x230 = INT64_MIN;
	static int32_t x231 = -81900446;
	static int64_t t55 = 609684310274618903LL;

	t55 = ((x229^(x230&x231))%x232);

	if (t55 != 1659LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x234 = 2360402439988616LLU;
	volatile uint64_t t56 = 127397650478LLU;

	t56 = ((x233^(x234&x235))%x236);

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = -64607LL;
	int8_t x238 = -62;
	int16_t x239 = INT16_MAX;
	uint8_t x240 = 18U;
	int64_t t57 = 95405804951064095LL;

	t57 = ((x237^(x238&x239))%x240);

	if (t57 != -15LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	static int8_t x242 = INT8_MAX;
	uint8_t x243 = 3U;
	uint16_t x244 = 30393U;
	volatile int32_t t58 = 0;

	t58 = ((x241^(x242&x243))%x244);

	if (t58 != -5444) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = UINT32_MAX;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = 28;
	uint32_t x248 = 139U;
	static volatile uint64_t t59 = 60LLU;

	t59 = ((x245^(x246&x247))%x248);

	if (t59 != 12LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 86U;
	volatile int32_t x250 = INT32_MIN;
	volatile uint32_t x252 = 15U;
	int64_t t60 = -1LL;

	t60 = ((x249^(x250&x251))%x252);

	if (t60 != -11LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = 9;
	int64_t x254 = INT64_MIN;
	uint32_t x255 = 19U;
	uint16_t x256 = 5U;
	volatile int64_t t61 = -121LL;

	t61 = ((x253^(x254&x255))%x256);

	if (t61 != 4LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x257 = 7927U;
	int16_t x259 = -1;
	static uint64_t x260 = UINT64_MAX;

	t62 = ((x257^(x258&x259))%x260);

	if (t62 != 24840LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = 8;
	static uint64_t x264 = UINT64_MAX;
	volatile uint64_t t63 = 25044780894098245LLU;

	t63 = ((x261^(x262&x263))%x264);

	if (t63 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = INT64_MAX;
	int64_t x266 = -1LL;
	int32_t x267 = INT32_MAX;
	uint64_t x268 = 771913879LLU;

	t64 = ((x265^(x266&x267))%x268);

	if (t64 != 164851968LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	int16_t x271 = 6800;
	uint32_t t65 = 82475668U;

	t65 = ((x269^(x270&x271))%x272);

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 4741U;
	uint32_t x274 = 814U;

	t66 = ((x273^(x274&x275))%x276);

	if (t66 != 4523U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x277 = 392188367020009LLU;
	int32_t x278 = -1;
	volatile int32_t x279 = 5380;
	static uint32_t x280 = 15U;
	volatile uint64_t t67 = 49988453LLU;

	t67 = ((x277^(x278&x279))%x280);

	if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MAX;
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	volatile int32_t t68 = 6181739;

	t68 = ((x281^(x282&x283))%x284);

	if (t68 != -2147450881) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	static int16_t x288 = INT16_MAX;
	volatile uint32_t t69 = 1137125730U;

	t69 = ((x285^(x286&x287))%x288);

	if (t69 != 251U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 376U;
	uint32_t x290 = UINT32_MAX;
	volatile int32_t x291 = INT32_MIN;
	uint32_t t70 = 184130748U;

	t70 = ((x289^(x290&x291))%x292);

	if (t70 != 2147484024U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MAX;
	int8_t x294 = INT8_MIN;
	int32_t x295 = -1542119;
	volatile uint64_t t71 = 51426LLU;

	t71 = ((x293^(x294&x295))%x296);

	if (t71 != 18446744071563610111LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = 631971771714LLU;
	static uint64_t t72 = 4122439095186LLU;

	t72 = ((x297^(x298&x299))%x300);

	if (t72 != 611375745339LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = -5;
	uint16_t x302 = 254U;
	int32_t x303 = -1;
	int32_t t73 = 793004068;

	t73 = ((x301^(x302&x303))%x304);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = 0;
	uint64_t x306 = 6050LLU;
	volatile int8_t x307 = INT8_MIN;
	volatile int64_t x308 = -1LL;
	volatile uint64_t t74 = 7846953024160LLU;

	t74 = ((x305^(x306&x307))%x308);

	if (t74 != 6016LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = -1;
	static uint16_t x310 = 395U;
	int64_t x311 = 1745927765957438800LL;
	uint64_t t75 = 10038944898LLU;

	t75 = ((x309^(x310&x311))%x312);

	if (t75 != 10343LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	uint64_t x315 = UINT64_MAX;
	volatile int32_t x316 = 833680;

	t76 = ((x313^(x314&x315))%x316);

	if (t76 != 446080LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	volatile int64_t x318 = -409519791954LL;
	uint32_t x320 = UINT32_MAX;
	int64_t t77 = 661077829898021504LL;

	t77 = ((x317^(x318&x319))%x320);

	if (t77 != 649584549LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = -10;
	volatile int16_t x322 = INT16_MIN;
	volatile int16_t x323 = INT16_MIN;
	static uint16_t x324 = UINT16_MAX;
	int32_t t78 = 449902159;

	t78 = ((x321^(x322&x323))%x324);

	if (t78 != 32758) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = -1;
	volatile uint32_t x327 = 36142491U;
	uint32_t x328 = 14970U;
	uint32_t t79 = 61675986U;

	t79 = ((x325^(x326&x327))%x328);

	if (t79 != 4911U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 111693U;
	uint8_t x330 = 0U;
	int16_t x331 = -247;
	volatile int32_t x332 = -1;

	t80 = ((x329^(x330&x331))%x332);

	if (t80 != 111693U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x333 = 2;
	int16_t x334 = -1;
	uint64_t x335 = 68862LLU;
	int64_t x336 = INT64_MIN;

	t81 = ((x333^(x334&x335))%x336);

	if (t81 != 68860LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = 1;
	int16_t x338 = INT16_MIN;
	static int16_t x340 = -1;
	volatile int32_t t82 = -39908495;

	t82 = ((x337^(x338&x339))%x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	int32_t x344 = 170919;
	int64_t t83 = -1004060668LL;

	t83 = ((x341^(x342&x343))%x344);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = UINT16_MAX;
	static volatile int16_t x346 = -1;
	int64_t x347 = INT64_MAX;
	volatile uint8_t x348 = 33U;
	static int64_t t84 = 47466341562659240LL;

	t84 = ((x345^(x346&x347))%x348);

	if (t84 != 10LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MAX;
	int32_t x351 = INT32_MIN;
	volatile int64_t t85 = -19543LL;

	t85 = ((x349^(x350&x351))%x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 22U;
	int16_t x354 = INT16_MIN;
	uint64_t x356 = 81799LLU;
	volatile uint64_t t86 = 2476057030930LLU;

	t86 = ((x353^(x354&x355))%x356);

	if (t86 != 26241LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = UINT32_MAX;
	static volatile uint32_t t87 = 227958566U;

	t87 = ((x357^(x358&x359))%x360);

	if (t87 != 2147483660U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x362 = -1;
	volatile int8_t x364 = INT8_MAX;

	t88 = ((x361^(x362&x363))%x364);

	if (t88 != 67LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = INT32_MIN;
	volatile int16_t x366 = -1;
	volatile int8_t x367 = -62;
	int32_t x368 = INT32_MIN;
	volatile int32_t t89 = 18952;

	t89 = ((x365^(x366&x367))%x368);

	if (t89 != 2147483586) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = UINT16_MAX;
	int32_t x370 = -1;
	uint8_t x371 = 3U;
	static uint16_t x372 = 1601U;
	volatile int32_t t90 = -15;

	t90 = ((x369^(x370&x371))%x372);

	if (t90 != 1492) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 1718593LLU;
	volatile int64_t x374 = INT64_MAX;
	uint32_t x375 = 759248U;
	int16_t x376 = -1;
	volatile uint64_t t91 = 2467LLU;

	t91 = ((x373^(x374&x375))%x376);

	if (t91 != 1158289LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	int64_t x378 = INT64_MAX;
	int32_t x379 = 3033160;
	int8_t x380 = 1;
	int64_t t92 = 6868233266464162LL;

	t92 = ((x377^(x378&x379))%x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = 104;
	volatile int16_t x383 = -1;
	static uint16_t x384 = 787U;
	volatile int32_t t93 = 219693847;

	t93 = ((x381^(x382&x383))%x384);

	if (t93 != -579) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = 6657345LL;
	uint32_t x386 = 16384U;
	volatile int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	volatile int64_t t94 = -761921470984380LL;

	t94 = ((x385^(x386&x387))%x388);

	if (t94 != 65LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x389 = UINT16_MAX;
	static int16_t x390 = -2;
	static int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t95 = 457000;

	t95 = ((x389^(x390&x391))%x392);

	if (t95 != -2147418113) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x393 = INT16_MAX;
	int32_t x394 = INT32_MIN;
	static int8_t x395 = -1;
	uint8_t x396 = 31U;
	static int32_t t96 = 255561;

	t96 = ((x393^(x394&x395))%x396);

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x397 = 332105188U;
	uint32_t x398 = 106559836U;
	int16_t x399 = INT16_MAX;
	int16_t x400 = 1;

	t97 = ((x397^(x398&x399))%x400);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x401 = UINT64_MAX;
	int32_t x402 = INT32_MIN;
	uint8_t x403 = 15U;
	volatile int8_t x404 = -1;
	static volatile uint64_t t98 = 11293306757LLU;

	t98 = ((x401^(x402&x403))%x404);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x406 = -1;
	volatile int16_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	int32_t t99 = -3496639;

	t99 = ((x405^(x406&x407))%x408);

	if (t99 != 0) { NG(); } else { ; }
	
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

