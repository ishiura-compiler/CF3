#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x12 = 7;
volatile int64_t t2 = -9LL;
int8_t x36 = 1;
static uint16_t x39 = 245U;
uint32_t x40 = UINT32_MAX;
int64_t x43 = -1LL;
static int64_t x47 = INT64_MAX;
static volatile uint16_t x55 = 21U;
volatile int64_t t12 = -65611590636911343LL;
uint32_t x60 = UINT32_MAX;
static int64_t x64 = INT64_MIN;
volatile int64_t x70 = INT64_MIN;
volatile int64_t t16 = 237LL;
int16_t x74 = INT16_MIN;
volatile int64_t x75 = -68973247LL;
int16_t x76 = 5812;
static int8_t x86 = INT8_MIN;
int32_t t20 = -7073;
uint32_t x91 = 1U;
int8_t x95 = -22;
volatile uint64_t x98 = 438759925706281005LLU;
uint64_t t23 = UINT64_MAX;
uint64_t t24 = 20713102853319LLU;
uint64_t x106 = 161LLU;
volatile uint64_t t25 = 895473LLU;
uint32_t x109 = UINT32_MAX;
static int64_t x111 = INT64_MIN;
static int32_t x112 = 32670;
uint64_t x116 = 225626LLU;
static uint16_t x120 = 6U;
int8_t x123 = 0;
static int64_t x124 = 55LL;
static int8_t x125 = 3;
int8_t x126 = INT8_MIN;
int64_t t30 = 16768341579LL;
uint16_t x136 = UINT16_MAX;
static volatile int32_t t33 = -83294;
static int32_t x147 = INT32_MIN;
int16_t x152 = INT16_MIN;
int32_t x167 = INT32_MAX;
static int32_t x169 = INT32_MIN;
static int8_t x171 = -2;
static int32_t x173 = INT32_MIN;
int16_t x181 = -1467;
volatile uint32_t x186 = UINT32_MAX;
int8_t x188 = INT8_MIN;
static uint32_t t44 = 1121U;
int64_t t45 = 130227073LL;
volatile int16_t x193 = -1;
int64_t t46 = 169648585339LL;
uint8_t x198 = 11U;
int32_t x199 = INT32_MIN;
uint16_t x200 = 77U;
volatile int32_t t47 = -101;
uint8_t x201 = UINT8_MAX;
volatile uint64_t x206 = 0LLU;
uint64_t x207 = 124181217405LLU;
static int32_t x208 = INT32_MIN;
int16_t x210 = 980;
int64_t x214 = 66668126321LL;
int64_t x218 = 477LL;
int8_t x227 = 0;
volatile int32_t x234 = INT32_MIN;
int8_t x240 = -11;
static uint32_t x241 = 904U;
int64_t x244 = 203355643171132LL;
int64_t t58 = 13361590602325LL;
int64_t x247 = INT64_MIN;
uint8_t x249 = 127U;
volatile int16_t x251 = -9365;
uint8_t x252 = 2U;
uint64_t x257 = 1065284085LLU;
static volatile int64_t x258 = INT64_MAX;
uint64_t x263 = 939455264218767475LLU;
volatile uint64_t t62 = 33LLU;
int32_t x266 = INT32_MIN;
volatile uint64_t t63 = 1325116105LLU;
int64_t x272 = INT64_MIN;
volatile int64_t x282 = INT64_MAX;
int32_t x284 = INT32_MAX;
volatile int16_t x298 = -1;
volatile int8_t x299 = INT8_MIN;
static int16_t x302 = INT16_MAX;
uint16_t x303 = 748U;
int64_t x309 = -1007LL;
volatile uint16_t x312 = 354U;
int16_t x313 = 172;
int32_t x314 = INT32_MIN;
uint64_t t77 = 2911002LLU;
int32_t x329 = 24643;
volatile int64_t t78 = -1104LL;
int32_t t79 = 1020600140;
int64_t x344 = -1LL;
int64_t x352 = -28LL;
uint64_t x355 = 2672362023111LLU;
uint8_t x356 = 2U;
static volatile int64_t x359 = INT64_MAX;
int8_t x360 = 15;
int32_t x362 = INT32_MIN;
uint64_t t86 = UINT64_MAX;
int64_t x377 = -121290LL;
static volatile int16_t x379 = -1;
int32_t x385 = INT32_MAX;
int8_t x394 = INT8_MIN;
uint32_t x398 = 174423608U;
volatile int64_t t95 = 2102477028252950LL;
volatile int32_t t97 = 12886;
int64_t x415 = -5122424228078338LL;
uint32_t x418 = 114826994U;


void f0(void) {
	static uint16_t x1 = 404U;
	static volatile uint16_t x2 = 41U;
	int8_t x3 = 1;
	volatile int16_t x4 = -1;
	int32_t t0 = 1;

	t0 = (x1+((x2&x3)/x4));

	if (t0 != 403) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -44581;
	int16_t x6 = 452;
	volatile int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -1757689014LL;

	t1 = (x5+((x6&x7)/x8));

	if (t1 != -44581LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 193290U;
	volatile int8_t x10 = -1;
	int64_t x11 = INT64_MIN;

	t2 = (x9+((x10&x11)/x12));

	if (t2 != -1317624576693346111LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = -15372466;
	int64_t x16 = -522624LL;
	static uint64_t t3 = 2729778979497316757LLU;

	t3 = (x13+((x14&x15)/x16));

	if (t3 != 255LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 6U;
	volatile int8_t x18 = 1;
	volatile uint32_t x19 = 152364U;
	volatile int16_t x20 = 1106;
	volatile uint32_t t4 = 1830U;

	t4 = (x17+((x18&x19)/x20));

	if (t4 != 6U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -5;
	int16_t x22 = -1;
	int16_t x23 = -1;
	int8_t x24 = 12;
	volatile int32_t t5 = -751122;

	t5 = (x21+((x22&x23)/x24));

	if (t5 != -5) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = 1U;
	int8_t x27 = -1;
	int64_t x28 = INT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25+((x26&x27)/x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static uint64_t x30 = UINT64_MAX;
	volatile int8_t x31 = -5;
	int8_t x32 = INT8_MIN;
	uint64_t t7 = 141296633757LLU;

	t7 = (x29+((x30&x31)/x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = UINT32_MAX;
	static int32_t x34 = -380116;
	static uint8_t x35 = UINT8_MAX;
	uint32_t t8 = 13U;

	t8 = (x33+((x34&x35)/x36));

	if (t8 != 43U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MAX;
	uint32_t t9 = 55656074U;

	t9 = (x37+((x38&x39)/x40));

	if (t9 != 4294967168U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = 6;
	static uint64_t x44 = 1704LLU;
	uint64_t t10 = 65500570172491680LLU;

	t10 = (x41+((x42&x43)/x44));

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static int8_t x46 = 0;
	volatile int32_t x48 = INT32_MIN;
	int64_t t11 = 11072282LL;

	t11 = (x45+((x46&x47)/x48));

	if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = -1;
	int64_t x54 = -3967041618LL;
	int8_t x56 = INT8_MIN;

	t12 = (x53+((x54&x55)/x56));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 16561U;
	int64_t x58 = -977331348836369LL;
	int64_t x59 = INT64_MAX;
	static int64_t t13 = -41119LL;

	t13 = (x57+((x58&x59)/x60));

	if (t13 != 2147272656LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -934744;
	uint64_t x62 = 19LLU;
	int16_t x63 = INT16_MAX;
	volatile uint64_t t14 = 7397746LLU;

	t14 = (x61+((x62&x63)/x64));

	if (t14 != 18446744073708616872LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = 3;
	volatile uint16_t x67 = 119U;
	volatile int8_t x68 = INT8_MIN;
	int64_t t15 = INT64_MIN;

	t15 = (x65+((x66&x67)/x68));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 4346U;
	volatile uint8_t x71 = 26U;
	uint32_t x72 = 28585U;

	t16 = (x69+((x70&x71)/x72));

	if (t16 != 4346LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = 87;
	static volatile int64_t t17 = 26922LL;

	t17 = (x73+((x74&x75)/x76));

	if (t17 != -11780LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 392964U;
	int32_t x78 = -13;
	uint16_t x79 = 21532U;
	int8_t x80 = INT8_MIN;
	volatile uint32_t t18 = 26U;

	t18 = (x77+((x78&x79)/x80));

	if (t18 != 392796U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = 80U;
	int32_t x82 = -830171;
	int64_t x83 = -23165263LL;
	int32_t x84 = -15307;
	static volatile int64_t t19 = -3409198457869555LL;

	t19 = (x81+((x82&x83)/x84));

	if (t19 != 1646LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = UINT16_MAX;
	volatile int32_t x87 = -1;
	int16_t x88 = -1;

	t20 = (x85+((x86&x87)/x88));

	if (t20 != 65663) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	int8_t x90 = -1;
	uint16_t x92 = 2U;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x89+((x90&x91)/x92));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 93528U;
	int8_t x94 = INT8_MIN;
	int32_t x96 = 994491;
	static volatile uint32_t t22 = 7165U;

	t22 = (x93+((x94&x95)/x96));

	if (t22 != 93528U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	uint16_t x99 = 4U;
	int8_t x100 = INT8_MAX;

	t23 = (x97+((x98&x99)/x100));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = 1;
	uint64_t x102 = 40642872273907LLU;
	static volatile int8_t x103 = 7;
	volatile int64_t x104 = INT64_MIN;

	t24 = (x101+((x102&x103)/x104));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int16_t x107 = -1;
	uint8_t x108 = 10U;

	t25 = (x105+((x106&x107)/x108));

	if (t25 != 32783LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = UINT64_MAX;
	volatile uint64_t t26 = 21841LLU;

	t26 = (x109+((x110&x111)/x112));

	if (t26 != 282323610451065LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x113 = -994673187236702536LL;
	volatile int8_t x114 = 30;
	uint32_t x115 = 738535668U;
	uint64_t t27 = 764196808272535LLU;

	t27 = (x113+((x114&x115)/x116));

	if (t27 != 17452070886472849080LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 968U;
	uint8_t x118 = UINT8_MAX;
	static int8_t x119 = INT8_MIN;
	int32_t t28 = 1;

	t28 = (x117+((x118&x119)/x120));

	if (t28 != 989) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int32_t x122 = 150753722;
	int64_t t29 = -4087046LL;

	t29 = (x121+((x122&x123)/x124));

	if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x127 = -1LL;
	int32_t x128 = INT32_MAX;

	t30 = (x125+((x126&x127)/x128));

	if (t30 != 3LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	volatile int64_t x130 = -1LL;
	uint8_t x131 = 4U;
	int8_t x132 = -1;
	int64_t t31 = -5725561LL;

	t31 = (x129+((x130&x131)/x132));

	if (t31 != 65531LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 0U;
	volatile int16_t x134 = -12;
	uint32_t x135 = UINT32_MAX;
	uint32_t t32 = 137U;

	t32 = (x133+((x134&x135)/x136));

	if (t32 != 65536U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int16_t x138 = 11147;
	static int32_t x139 = -2;
	uint16_t x140 = 13U;

	t33 = (x137+((x138&x139)/x140));

	if (t33 != 66392) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x145 = INT8_MAX;
	uint16_t x146 = 205U;
	int64_t x148 = INT64_MAX;
	int64_t t34 = 4147780965324366LL;

	t34 = (x145+((x146&x147)/x148));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x149 = 37;
	static int64_t x150 = -9167897932736028LL;
	int16_t x151 = 0;
	volatile int64_t t35 = -461LL;

	t35 = (x149+((x150&x151)/x152));

	if (t35 != 37LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = -1;
	volatile uint16_t x154 = 772U;
	volatile uint64_t x155 = 5013614660173LLU;
	volatile int16_t x156 = INT16_MIN;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x153+((x154&x155)/x156));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = INT16_MAX;
	int32_t x158 = INT32_MAX;
	int8_t x159 = INT8_MAX;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t37 = -2;

	t37 = (x157+((x158&x159)/x160));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -1LL;
	volatile int16_t x162 = INT16_MIN;
	volatile int16_t x163 = 1945;
	int64_t x164 = 96186775621LL;
	volatile int64_t t38 = 2LL;

	t38 = (x161+((x162&x163)/x164));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = -10;
	volatile uint8_t x166 = UINT8_MAX;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t39 = 10760;

	t39 = (x165+((x166&x167)/x168));

	if (t39 != -10) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x170 = UINT32_MAX;
	int32_t x172 = INT32_MIN;
	uint32_t t40 = 863U;

	t40 = (x169+((x170&x171)/x172));

	if (t40 != 2147483649U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = -8802444675240LL;
	int16_t x175 = -1;
	static int16_t x176 = INT16_MIN;
	static int64_t t41 = -75365546380597LL;

	t41 = (x173+((x174&x175)/x176));

	if (t41 != -1878854355LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 659109;
	int16_t x178 = INT16_MAX;
	static uint8_t x179 = 0U;
	static int32_t x180 = INT32_MAX;
	int32_t t42 = 3702;

	t42 = (x177+((x178&x179)/x180));

	if (t42 != 659109) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x182 = 23U;
	volatile int64_t x183 = -1LL;
	uint32_t x184 = 684970460U;
	volatile int64_t t43 = 32272LL;

	t43 = (x181+((x182&x183)/x184));

	if (t43 != -1467LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x185 = 14107U;
	int8_t x187 = 0;

	t44 = (x185+((x186&x187)/x188));

	if (t44 != 14107U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -1LL;
	int8_t x190 = -1;
	int8_t x191 = -44;
	int64_t x192 = INT64_MAX;

	t45 = (x189+((x190&x191)/x192));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x194 = 0LL;
	static int16_t x195 = INT16_MAX;
	uint8_t x196 = UINT8_MAX;

	t46 = (x193+((x194&x195)/x196));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MAX;

	t47 = (x197+((x198&x199)/x200));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x202 = -473423;
	static int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	int32_t t48 = -32047;

	t48 = (x201+((x202&x203)/x204));

	if (t48 != 491775) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	uint64_t t49 = UINT64_MAX;

	t49 = (x205+((x206&x207)/x208));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	static uint32_t x212 = 17U;
	uint32_t t50 = 213492U;

	t50 = (x209+((x210&x211)/x212));

	if (t50 != 4294934528U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	uint32_t x215 = 293031U;
	uint16_t x216 = UINT16_MAX;
	int64_t t51 = 65623332LL;

	t51 = (x213+((x214&x215)/x216));

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = INT32_MAX;
	uint64_t x219 = 23289504575425LLU;
	uint8_t x220 = UINT8_MAX;
	volatile uint64_t t52 = 439782345387LLU;

	t52 = (x217+((x218&x219)/x220));

	if (t52 != 2147483648LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 658U;
	static uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 21U;
	uint32_t x224 = 30446U;
	volatile uint64_t t53 = 83LLU;

	t53 = (x221+((x222&x223)/x224));

	if (t53 != 658LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;
	static volatile int8_t x228 = -1;
	volatile uint64_t t54 = 2122LLU;

	t54 = (x225+((x226&x227)/x228));

	if (t54 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 3U;
	volatile int16_t x230 = INT16_MIN;
	uint32_t x231 = 264989U;
	static int64_t x232 = 3371639462518948LL;
	int64_t t55 = -1340LL;

	t55 = (x229+((x230&x231)/x232));

	if (t55 != 3LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x233 = 1;
	volatile int8_t x235 = INT8_MAX;
	static int32_t x236 = -1;
	static volatile int32_t t56 = -23528;

	t56 = (x233+((x234&x235)/x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = -256444025;
	static int32_t x238 = -1010538334;
	static volatile int8_t x239 = INT8_MAX;
	int32_t t57 = -7257;

	t57 = (x237+((x238&x239)/x240));

	if (t57 != -256444028) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x242 = 4;
	volatile int32_t x243 = -2;

	t58 = (x241+((x242&x243)/x244));

	if (t58 != 904LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	static int64_t x246 = -1LL;
	volatile int32_t x248 = INT32_MIN;
	volatile int64_t t59 = -16188308187453954LL;

	t59 = (x245+((x246&x247)/x248));

	if (t59 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x250 = -1;
	volatile int32_t t60 = -713055114;

	t60 = (x249+((x250&x251)/x252));

	if (t60 != -4555) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x259 = 117U;
	static int8_t x260 = 1;
	uint64_t t61 = 6743588343166338LLU;

	t61 = (x257+((x258&x259)/x260));

	if (t61 != 1065284202LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = INT8_MIN;
	uint8_t x262 = UINT8_MAX;
	static volatile int32_t x264 = INT32_MIN;

	t62 = (x261+((x262&x263)/x264));

	if (t62 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x265 = 146566034749063689LLU;
	int8_t x267 = INT8_MAX;
	int8_t x268 = 6;

	t63 = (x265+((x266&x267)/x268));

	if (t63 != 146566034749063689LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x269 = INT64_MIN;
	uint16_t x270 = UINT16_MAX;
	static uint8_t x271 = 3U;
	int64_t t64 = INT64_MIN;

	t64 = (x269+((x270&x271)/x272));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = 60257819;
	static int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MAX;
	int64_t t65 = -166274LL;

	t65 = (x273+((x274&x275)/x276));

	if (t65 != -281483506649581LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x277 = UINT32_MAX;
	static uint64_t x278 = UINT64_MAX;
	int32_t x279 = -1;
	volatile int8_t x280 = -1;
	uint64_t t66 = 9621382LLU;

	t66 = (x277+((x278&x279)/x280));

	if (t66 != 4294967296LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = 1;
	uint16_t x283 = 243U;
	volatile int64_t t67 = 208440413755829LL;

	t67 = (x281+((x282&x283)/x284));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x286 = INT16_MAX;
	int32_t x287 = INT32_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x285+((x286&x287)/x288));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x290 = 409088740LLU;
	volatile uint8_t x291 = 0U;
	volatile int8_t x292 = INT8_MIN;
	uint64_t t69 = 1903727901200LLU;

	t69 = (x289+((x290&x291)/x292));

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = -1;
	int32_t x300 = INT32_MIN;
	int32_t t70 = 8;

	t70 = (x297+((x298&x299)/x300));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -766478LL;
	static int32_t x304 = INT32_MAX;
	static volatile int64_t t71 = -305692702LL;

	t71 = (x301+((x302&x303)/x304));

	if (t71 != -766478LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x305 = 90LLU;
	int64_t x306 = 2904251559954909LL;
	int8_t x307 = 19;
	static int64_t x308 = INT64_MAX;
	uint64_t t72 = 37889LLU;

	t72 = (x305+((x306&x307)/x308));

	if (t72 != 90LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x310 = -1;
	int64_t x311 = -89039719LL;
	static volatile int64_t t73 = -3524736702038226448LL;

	t73 = (x309+((x310&x311)/x312));

	if (t73 != -252531LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x315 = 0U;
	volatile int64_t x316 = -1LL;
	int64_t t74 = 15694229663349851LL;

	t74 = (x313+((x314&x315)/x316));

	if (t74 != 172LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = -1;
	volatile int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MAX;
	int8_t x320 = -1;
	volatile int64_t t75 = 2932490453668321891LL;

	t75 = (x317+((x318&x319)/x320));

	if (t75 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = 6;
	int64_t x322 = INT64_MIN;
	static uint64_t x323 = 264869497726LLU;
	static volatile int32_t x324 = INT32_MIN;
	uint64_t t76 = 1652591LLU;

	t76 = (x321+((x322&x323)/x324));

	if (t76 != 6LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -3;
	int16_t x326 = INT16_MIN;
	uint8_t x327 = 79U;
	volatile uint64_t x328 = UINT64_MAX;

	t77 = (x325+((x326&x327)/x328));

	if (t77 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MAX;
	int64_t x332 = INT64_MIN;

	t78 = (x329+((x330&x331)/x332));

	if (t78 != 24643LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	int32_t x334 = 3845;
	static int32_t x335 = INT32_MIN;
	int8_t x336 = 3;

	t79 = (x333+((x334&x335)/x336));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t80 = INT32_MIN;

	t80 = (x337+((x338&x339)/x340));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = UINT16_MAX;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = 1;
	volatile uint64_t t81 = 629971885407657LLU;

	t81 = (x341+((x342&x343)/x344));

	if (t81 != 65535LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = -1;
	int64_t x348 = INT64_MAX;
	int64_t t82 = -206596399015684086LL;

	t82 = (x345+((x346&x347)/x348));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x349 = UINT16_MAX;
	volatile uint8_t x350 = UINT8_MAX;
	uint8_t x351 = 1U;
	static volatile int64_t t83 = 18458590205716LL;

	t83 = (x349+((x350&x351)/x352));

	if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = INT8_MAX;
	static int64_t x354 = INT64_MAX;
	volatile uint64_t t84 = 95386729LLU;

	t84 = (x353+((x354&x355)/x356));

	if (t84 != 1336181011682LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = -1;
	volatile int64_t t85 = 176941884LL;

	t85 = (x357+((x358&x359)/x360));

	if (t85 != 614891471271135367LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -1LL;
	static uint64_t x363 = UINT64_MAX;
	uint64_t x364 = UINT64_MAX;

	t86 = (x361+((x362&x363)/x364));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x365 = 7;
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = 1;
	volatile int64_t t87 = -525268404566LL;

	t87 = (x365+((x366&x367)/x368));

	if (t87 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -6;
	static int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t88 = 27;

	t88 = (x369+((x370&x371)/x372));

	if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MAX;
	int32_t x375 = 159452001;
	volatile uint32_t x376 = 67309U;
	volatile uint32_t t89 = 1026871484U;

	t89 = (x373+((x374&x375)/x376));

	if (t89 != 65535U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x378 = INT16_MAX;
	int32_t x380 = -107;
	static int64_t t90 = -145165LL;

	t90 = (x377+((x378&x379)/x380));

	if (t90 != -121596LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = UINT64_MAX;
	static int64_t x382 = INT64_MIN;
	int8_t x383 = -1;
	uint8_t x384 = 3U;
	uint64_t t91 = 1LLU;

	t91 = (x381+((x382&x383)/x384));

	if (t91 != 15372286728091293013LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x386 = -250708;
	int64_t x387 = -52119LL;
	int64_t x388 = INT64_MIN;
	int64_t t92 = -183581037LL;

	t92 = (x385+((x386&x387)/x388));

	if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = -1;
	uint64_t x390 = 108216764663840LLU;
	int64_t x391 = INT64_MAX;
	int8_t x392 = 15;
	static uint64_t t93 = 171109267367LLU;

	t93 = (x389+((x390&x391)/x392));

	if (t93 != 7214450977588LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	int16_t x395 = -1;
	volatile int16_t x396 = -1;
	int32_t t94 = 60894381;

	t94 = (x393+((x394&x395)/x396));

	if (t94 != -2147483520) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = 6069706302465438LL;
	uint16_t x399 = UINT16_MAX;
	volatile int64_t x400 = -1LL;

	t95 = (x397+((x398&x399)/x400));

	if (t95 != 6069706302433126LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = 0;
	int16_t x406 = INT16_MIN;
	int16_t x407 = 1;
	uint8_t x408 = 6U;
	int32_t t96 = -102;

	t96 = (x405+((x406&x407)/x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = 45U;
	uint8_t x410 = 6U;
	int8_t x411 = -1;
	uint8_t x412 = 1U;

	t97 = (x409+((x410&x411)/x412));

	if (t97 != 51) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MAX;
	static int64_t x416 = INT64_MIN;
	volatile int64_t t98 = -1051950675LL;

	t98 = (x413+((x414&x415)/x416));

	if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = -31;
	uint16_t x419 = 31U;
	uint16_t x420 = UINT16_MAX;
	uint32_t t99 = 90375U;

	t99 = (x417+((x418&x419)/x420));

	if (t99 != 4294967265U) { NG(); } else { ; }
	
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

