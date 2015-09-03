#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
int32_t t2 = -209996671;
int64_t x13 = -1LL;
int64_t x16 = 4191614534112450660LL;
volatile int64_t t3 = -226684LL;
uint8_t x21 = 52U;
volatile int64_t t5 = -3618883LL;
uint64_t x26 = 91382LLU;
volatile int32_t t9 = 147631338;
uint32_t x41 = UINT32_MAX;
int32_t x43 = 33580934;
uint16_t x44 = 27774U;
uint8_t x46 = 3U;
volatile int32_t x49 = INT32_MAX;
static volatile int16_t x54 = -1;
int32_t t13 = -20300;
static int64_t x59 = INT64_MIN;
uint16_t x71 = UINT16_MAX;
static volatile int64_t t17 = -506208352546134LL;
volatile int16_t x73 = INT16_MAX;
int32_t t19 = 36;
int8_t x83 = -1;
volatile int32_t x88 = INT32_MIN;
volatile int16_t x91 = 21;
int16_t x96 = -1694;
int8_t x98 = -1;
volatile uint32_t t24 = 28814273U;
int32_t t25 = -10;
volatile int8_t x108 = INT8_MIN;
volatile uint64_t t27 = 427423LLU;
int64_t x115 = INT64_MIN;
volatile int64_t t28 = -494548LL;
volatile uint64_t x120 = UINT64_MAX;
static uint64_t t29 = UINT64_MAX;
static volatile int16_t x125 = INT16_MAX;
uint8_t x126 = 1U;
uint16_t x131 = 1U;
int32_t x134 = -1;
int8_t x135 = INT8_MIN;
int8_t x137 = INT8_MIN;
int64_t x138 = INT64_MIN;
uint8_t x149 = 0U;
volatile uint32_t x151 = 1583349U;
volatile uint32_t t37 = UINT32_MAX;
volatile int8_t x154 = -23;
uint64_t x156 = UINT64_MAX;
int32_t x160 = 3485931;
uint32_t x164 = 236760782U;
volatile uint64_t x177 = 1226951LLU;
int32_t x178 = INT32_MIN;
int64_t x183 = 4569952607330LL;
volatile uint32_t t46 = 3160153U;
int64_t x194 = INT64_MIN;
volatile int8_t x200 = INT8_MAX;
volatile int64_t t51 = -9887932346910178LL;
static int16_t x209 = INT16_MIN;
static int64_t x210 = INT64_MAX;
int16_t x211 = INT16_MIN;
static int64_t x212 = INT64_MIN;
uint64_t x217 = 1804247010LLU;
static uint8_t x220 = 57U;
int32_t x227 = 95763;
static volatile int8_t x229 = INT8_MIN;
static int64_t x234 = -34724923344LL;
uint16_t x235 = 40U;
static int64_t t58 = -4529941106284846LL;
int32_t x238 = INT32_MAX;
int8_t x241 = 0;
int16_t x249 = 15421;
uint32_t x251 = 373592496U;
int64_t t62 = -396834LL;
volatile int64_t x254 = INT64_MIN;
volatile int8_t x259 = INT8_MAX;
int32_t x264 = INT32_MAX;
static volatile int64_t t65 = -31983364347LL;
static uint32_t x265 = 19012636U;
int16_t x272 = 0;
int8_t x278 = INT8_MIN;
uint32_t x285 = UINT32_MAX;
volatile uint32_t t71 = 7490155U;
volatile int16_t x296 = INT16_MIN;
volatile int16_t x298 = -44;
int64_t x303 = -1LL;
uint64_t x305 = UINT64_MAX;
volatile int32_t x306 = -1;
volatile int8_t x318 = INT8_MIN;
int32_t x320 = -1;
int8_t x327 = -1;
static int32_t x330 = -1;
static int8_t x333 = -1;
int16_t x335 = 3602;
int64_t t85 = INT64_MAX;
int8_t x347 = 0;
volatile uint64_t t87 = 36LLU;
uint16_t x356 = 1241U;
volatile int64_t x358 = -1LL;
int32_t x359 = -1;
volatile int8_t x363 = INT8_MIN;
int32_t x365 = INT32_MAX;
volatile int16_t x368 = INT16_MIN;
int32_t x370 = -21622223;
int64_t x371 = 729163LL;
int64_t t92 = -895304LL;
volatile uint64_t t94 = 2038933312785LLU;
int64_t x384 = INT64_MIN;
volatile uint16_t x386 = 29U;
int16_t x389 = INT16_MAX;
int32_t x391 = 1;
volatile int64_t t98 = -268LL;
uint64_t t99 = UINT64_MAX;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int32_t x2 = -1;
	int64_t x3 = INT64_MAX;
	int32_t x4 = INT32_MAX;
	int64_t t0 = 14620095613LL;

	t0 = ((x1^(x2&x3))|x4);

	if (t0 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 6U;
	static int64_t x6 = 335362612737LL;
	static int32_t x8 = -1;
	int64_t t1 = -181872696109204776LL;

	t1 = ((x5^(x6&x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 7316U;
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = -1;
	static int16_t x12 = -1;

	t2 = ((x9^(x10&x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	int32_t x15 = -1;

	t3 = ((x13^(x14&x15))|x16);

	if (t3 != 4191614534428917759LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = 1;
	int64_t x19 = -408151591449924LL;
	static int32_t x20 = -1;
	int64_t t4 = 11396140464573LL;

	t4 = ((x17^(x18&x19))|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x22 = 1U;
	static int64_t x23 = -3LL;
	int32_t x24 = -1;

	t5 = ((x21^(x22&x23))|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	int64_t x27 = INT64_MIN;
	int16_t x28 = -1;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x25^(x26&x27))|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int16_t x30 = -48;
	volatile int8_t x31 = INT8_MIN;
	volatile int32_t x32 = INT32_MIN;
	int32_t t7 = -1043190;

	t7 = ((x29^(x30&x31))|x32);

	if (t7 != -2147483521) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int32_t x34 = 3;
	uint16_t x35 = 2U;
	volatile uint64_t x36 = UINT64_MAX;
	static uint64_t t8 = UINT64_MAX;

	t8 = ((x33^(x34&x35))|x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;

	t9 = ((x37^(x38&x39))|x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	volatile uint32_t t10 = 22U;

	t10 = ((x41^(x42&x43))|x44);

	if (t10 != 4261412863U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -42;
	static int64_t x47 = INT64_MIN;
	static volatile int8_t x48 = -1;
	volatile int64_t t11 = -65266LL;

	t11 = ((x45^(x46&x47))|x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	uint16_t x52 = 0U;
	volatile int64_t t12 = 7460198LL;

	t12 = ((x49^(x50&x51))|x52);

	if (t12 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 340872684;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = -1;

	t13 = ((x53^(x54&x55))|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MAX;
	int32_t x60 = -48553;
	int64_t t14 = -21213517964123LL;

	t14 = ((x57^(x58&x59))|x60);

	if (t14 != -32769LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int64_t x62 = INT64_MIN;
	static uint16_t x63 = 3696U;
	static uint64_t x64 = UINT64_MAX;
	static uint64_t t15 = UINT64_MAX;

	t15 = ((x61^(x62&x63))|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	static volatile uint8_t x66 = 8U;
	volatile uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MIN;
	static volatile uint64_t t16 = 21010157LLU;

	t16 = ((x65^(x66&x67))|x68);

	if (t16 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = -1;
	int64_t x72 = -1LL;

	t17 = ((x69^(x70&x71))|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	volatile uint16_t x76 = 6U;
	uint64_t t18 = 116954673138LLU;

	t18 = ((x73^(x74&x75))|x76);

	if (t18 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static int8_t x78 = INT8_MIN;
	static volatile uint16_t x79 = 28726U;
	int8_t x80 = -1;

	t19 = ((x77^(x78&x79))|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = 71626639817LL;
	int64_t x82 = -906980LL;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 273281720731903LL;

	t20 = ((x81^(x82&x83))|x84);

	if (t20 != -71626792747LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = 391LLU;
	static volatile uint16_t x87 = UINT16_MAX;
	uint64_t t21 = 10963039142LLU;

	t21 = ((x85^(x86&x87))|x88);

	if (t21 != 18446744073709551111LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MAX;
	int32_t x92 = -1;
	int32_t t22 = 48340;

	t22 = ((x89^(x90&x91))|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	int16_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	volatile int32_t t23 = 165123882;

	t23 = ((x93^(x94&x95))|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MAX;
	int32_t x99 = INT32_MAX;
	uint32_t x100 = 378674U;

	t24 = ((x97^(x98&x99))|x100);

	if (t24 != 2147483570U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 41U;
	volatile uint8_t x102 = 31U;
	volatile uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MAX;

	t25 = ((x101^(x102&x103))|x104);

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	uint8_t x106 = 1U;
	uint64_t x107 = 2448701730LLU;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x105^(x106&x107))|x108);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -58;
	static uint32_t x110 = 81U;
	volatile int8_t x111 = 0;
	static volatile uint64_t x112 = 745488336128099947LLU;

	t27 = ((x109^(x110&x111))|x112);

	if (t27 != 745488339833978863LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	uint32_t x114 = UINT32_MAX;
	int16_t x116 = 6674;

	t28 = ((x113^(x114&x115))|x116);

	if (t28 != -9223372036854769134LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static int16_t x118 = INT16_MIN;
	uint32_t x119 = 5U;

	t29 = ((x117^(x118&x119))|x120);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 8;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = ((x121^(x122&x123))|x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 85U;
	volatile uint32_t t31 = 24058U;

	t31 = ((x125^(x126&x127))|x128);

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 1716U;
	volatile int16_t x130 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -271491049LL;

	t32 = ((x129^(x130&x131))|x132);

	if (t32 != -9223372036854774092LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 21512449;
	volatile uint8_t x136 = 0U;
	volatile int32_t t33 = -19875165;

	t33 = ((x133^(x134&x135))|x136);

	if (t33 != -21512575) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MAX;
	int64_t t34 = INT64_MAX;

	t34 = ((x137^(x138&x139))|x140);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	uint8_t x142 = 5U;
	uint8_t x143 = UINT8_MAX;
	static int8_t x144 = INT8_MAX;
	int32_t t35 = -2455;

	t35 = ((x141^(x142&x143))|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 53U;
	volatile int16_t x146 = INT16_MAX;
	int64_t x147 = INT64_MIN;
	uint16_t x148 = 0U;
	static volatile int64_t t36 = -29194851562LL;

	t36 = ((x145^(x146&x147))|x148);

	if (t36 != 53LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MIN;
	int8_t x152 = -1;

	t37 = ((x149^(x150&x151))|x152);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 984U;
	int8_t x155 = INT8_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x153^(x154&x155))|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 11391U;
	static int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	static uint32_t t39 = 1490864363U;

	t39 = ((x157^(x158&x159))|x160);

	if (t39 != 4294950143U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -52LL;
	static int16_t x162 = -1;
	int8_t x163 = INT8_MAX;
	volatile int64_t t40 = -242912466203681LL;

	t40 = ((x161^(x162&x163))|x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 20U;
	volatile int8_t x166 = INT8_MAX;
	int32_t x167 = -13;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t41 = 76LL;

	t41 = ((x165^(x166&x167))|x168);

	if (t41 != -9223372036854775705LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = -1LL;
	int32_t x170 = INT32_MIN;
	volatile int32_t x171 = 29994313;
	static int16_t x172 = INT16_MAX;
	volatile int64_t t42 = 219651LL;

	t42 = ((x169^(x170&x171))|x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 167U;
	volatile uint16_t x174 = 3457U;
	uint64_t x175 = 184906510LLU;
	uint16_t x176 = 947U;
	static volatile uint64_t t43 = 25531669308LLU;

	t43 = ((x173^(x174&x175))|x176);

	if (t43 != 951LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x179 = INT32_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile uint64_t t44 = 9LLU;

	t44 = ((x177^(x178&x179))|x180);

	if (t44 != 18446744071563294975LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int8_t x182 = INT8_MIN;
	int64_t x184 = INT64_MAX;
	volatile int64_t t45 = -1214315348LL;

	t45 = ((x181^(x182&x183))|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 17864U;
	static int16_t x186 = INT16_MIN;
	uint32_t x187 = 198072U;
	static int32_t x188 = INT32_MIN;

	t46 = ((x185^(x186&x187))|x188);

	if (t46 != 2147698120U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 233358560644164LL;
	int32_t x190 = 6299;
	int16_t x191 = INT16_MIN;
	int64_t x192 = 3782454101753865LL;
	int64_t t47 = 308824151LL;

	t47 = ((x189^(x190&x191))|x192);

	if (t47 != 3927727176272973LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int32_t x195 = 397582490;
	int8_t x196 = -1;
	volatile int64_t t48 = 2500860503735041LL;

	t48 = ((x193^(x194&x195))|x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 250LLU;
	int8_t x198 = INT8_MAX;
	int32_t x199 = INT32_MIN;
	volatile uint64_t t49 = 15105049643477LLU;

	t49 = ((x197^(x198&x199))|x200);

	if (t49 != 255LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = -1LL;
	int32_t x202 = INT32_MAX;
	static uint16_t x203 = 1U;
	uint32_t x204 = 109U;
	static volatile int64_t t50 = -155303896206376LL;

	t50 = ((x201^(x202&x203))|x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static int64_t x206 = -1LL;
	int8_t x207 = -1;
	volatile int32_t x208 = INT32_MIN;

	t51 = ((x205^(x206&x207))|x208);

	if (t51 != -2147450881LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t t52 = INT64_MIN;

	t52 = ((x209^(x210&x211))|x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 6;
	int16_t x214 = 42;
	uint8_t x215 = 25U;
	uint64_t x216 = 1515LLU;
	uint64_t t53 = 3660035LLU;

	t53 = ((x213^(x214&x215))|x216);

	if (t53 != 1519LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -2;
	volatile uint32_t x219 = 450759U;
	volatile uint64_t t54 = 110422LLU;

	t54 = ((x217^(x218&x219))|x220);

	if (t54 != 1804369725LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	volatile int32_t x222 = INT32_MIN;
	int16_t x223 = -297;
	volatile int8_t x224 = INT8_MIN;
	static volatile int64_t t55 = 18651341666750577LL;

	t55 = ((x221^(x222&x223))|x224);

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 16212162733187400LL;
	int16_t x226 = -1476;
	static uint32_t x228 = 1U;
	int64_t t56 = -221LL;

	t56 = ((x225^(x226&x227))|x228);

	if (t56 != 16212162733265753LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 2281553000664LLU;
	int8_t x231 = 0;
	uint16_t x232 = 2U;
	uint64_t t57 = 124593754081194LLU;

	t57 = ((x229^(x230&x231))|x232);

	if (t57 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -1;
	static int16_t x236 = -14;

	t58 = ((x233^(x234&x235))|x236);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 1U;
	uint8_t x239 = 6U;
	int8_t x240 = INT8_MAX;
	int32_t t59 = 98692590;

	t59 = ((x237^(x238&x239))|x240);

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x242 = 1087943U;
	int32_t x243 = INT32_MIN;
	static uint32_t x244 = UINT32_MAX;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = ((x241^(x242&x243))|x244);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	static int32_t x246 = 586614;
	int8_t x247 = INT8_MIN;
	static uint32_t x248 = 6U;
	uint32_t t61 = 26388U;

	t61 = ((x245^(x246&x247))|x248);

	if (t61 != 2148070150U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x250 = 17821U;
	static int64_t x252 = INT64_MIN;

	t62 = ((x249^(x250&x251))|x252);

	if (t62 != -9223372036854760019LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 138465U;
	uint8_t x255 = UINT8_MAX;
	uint8_t x256 = 0U;
	static volatile int64_t t63 = -33949664639LL;

	t63 = ((x253^(x254&x255))|x256);

	if (t63 != 138465LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int8_t x258 = 3;
	uint32_t x260 = 0U;
	volatile uint32_t t64 = 669083U;

	t64 = ((x257^(x258&x259))|x260);

	if (t64 != 252U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 8729;
	int64_t x262 = INT64_MAX;
	int64_t x263 = 6985551060LL;

	t65 = ((x261^(x262&x263))|x264);

	if (t65 != 8589934591LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MAX;
	static int16_t x267 = -1;
	uint64_t x268 = 211973717078711213LLU;
	uint64_t t66 = 813068LLU;

	t66 = ((x265^(x266&x267))|x268);

	if (t66 != 211973717095513071LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 1;
	int64_t x270 = INT64_MIN;
	int8_t x271 = 2;
	volatile int64_t t67 = -26630273LL;

	t67 = ((x269^(x270&x271))|x272);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 352U;
	volatile uint16_t x274 = UINT16_MAX;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;
	static uint32_t t68 = 6197U;

	t68 = ((x273^(x274&x275))|x276);

	if (t68 != 65535U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	static volatile int64_t x280 = INT64_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = ((x277^(x278&x279))|x280);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = UINT32_MAX;
	static uint32_t x282 = 1865292U;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = -51;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = ((x281^(x282&x283))|x284);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = 28;
	int16_t x288 = INT16_MIN;

	t71 = ((x285^(x286&x287))|x288);

	if (t71 != 4294967267U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	volatile int32_t x290 = INT32_MIN;
	volatile uint32_t x291 = 805633480U;
	uint8_t x292 = 23U;
	static volatile uint32_t t72 = 58U;

	t72 = ((x289^(x290&x291))|x292);

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = 3U;
	uint8_t x295 = UINT8_MAX;
	int32_t t73 = -1;

	t73 = ((x293^(x294&x295))|x296);

	if (t73 != -32765) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	volatile uint64_t x299 = 9382LLU;
	int32_t x300 = -1;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x297^(x298&x299))|x300);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile uint32_t x302 = 138738U;
	uint32_t x304 = 997243478U;
	int64_t t75 = 0LL;

	t75 = ((x301^(x302&x303))|x304);

	if (t75 != -132490LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x307 = INT16_MAX;
	int64_t x308 = -1LL;
	static uint64_t t76 = UINT64_MAX;

	t76 = ((x305^(x306&x307))|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x309 = 96U;
	int16_t x310 = -1;
	volatile int64_t x311 = INT64_MIN;
	uint16_t x312 = UINT16_MAX;
	volatile int64_t t77 = 51583248761LL;

	t77 = ((x309^(x310&x311))|x312);

	if (t77 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	static int8_t x314 = INT8_MIN;
	uint32_t x315 = 31U;
	int64_t x316 = 21LL;
	volatile int64_t t78 = 33437LL;

	t78 = ((x313^(x314&x315))|x316);

	if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 2U;
	volatile int16_t x319 = -1;
	volatile int32_t t79 = -50777;

	t79 = ((x317^(x318&x319))|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -609763;
	int32_t x322 = INT32_MIN;
	int32_t x323 = 6002;
	volatile int32_t x324 = -167320;
	int32_t t80 = -105076951;

	t80 = ((x321^(x322&x323))|x324);

	if (t80 != -3459) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = INT64_MIN;
	static int16_t x328 = INT16_MIN;
	static uint64_t t81 = UINT64_MAX;

	t81 = ((x325^(x326&x327))|x328);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 2999794;
	uint64_t x331 = UINT64_MAX;
	volatile uint16_t x332 = 15848U;
	uint64_t t82 = 9999LLU;

	t82 = ((x329^(x330&x331))|x332);

	if (t82 != 18446744073706553325LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x334 = UINT32_MAX;
	static int8_t x336 = -46;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = ((x333^(x334&x335))|x336);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = 35;
	static int8_t x339 = INT8_MAX;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -1;

	t84 = ((x337^(x338&x339))|x340);

	if (t84 != -93) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = 38925532891445282LL;
	volatile uint8_t x342 = UINT8_MAX;
	uint16_t x343 = 106U;
	int64_t x344 = INT64_MAX;

	t85 = ((x341^(x342&x343))|x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 2U;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = 52;

	t86 = ((x345^(x346&x347))|x348);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = UINT32_MAX;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = -41;
	uint64_t x352 = 17LLU;

	t87 = ((x349^(x350&x351))|x352);

	if (t87 != 4294901817LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MAX;
	static uint16_t x355 = 247U;
	int32_t t88 = 573068;

	t88 = ((x353^(x354&x355))|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = INT16_MIN;
	int16_t x360 = -118;
	volatile int64_t t89 = -1204925LL;

	t89 = ((x357^(x358&x359))|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	volatile int16_t x362 = 0;
	int16_t x364 = INT16_MIN;
	int32_t t90 = -17439;

	t90 = ((x361^(x362&x363))|x364);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t t91 = -57574678454762LL;

	t91 = ((x365^(x366&x367))|x368);

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	uint16_t x372 = 158U;

	t92 = ((x369^(x370&x371))|x372);

	if (t92 != -131074LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	volatile int64_t x374 = 3022LL;
	volatile int64_t x375 = -133453526LL;
	int8_t x376 = 1;
	int64_t t93 = 221321369632874328LL;

	t93 = ((x373^(x374&x375))|x376);

	if (t93 != -30453LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x377 = 51661604437196LLU;
	int8_t x378 = 0;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -12;

	t94 = ((x377^(x378&x379))|x380);

	if (t94 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -16;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	volatile int64_t t95 = 3691595146709LL;

	t95 = ((x381^(x382&x383))|x384);

	if (t95 != -16LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int64_t x387 = -452LL;
	uint64_t x388 = 618968071942LLU;
	volatile uint64_t t96 = 3682LLU;

	t96 = ((x385^(x386&x387))|x388);

	if (t96 != 622770257895LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -5;
	uint64_t x392 = 877982LLU;
	uint64_t t97 = 19870294LLU;

	t97 = ((x389^(x390&x391))|x392);

	if (t97 != 884734LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MAX;
	static int64_t x394 = INT64_MIN;
	volatile uint8_t x395 = 42U;
	static uint8_t x396 = 2U;

	t98 = ((x393^(x394&x395))|x396);

	if (t98 != 32767LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = UINT64_MAX;
	int64_t x398 = 74LL;
	static uint8_t x399 = 6U;
	volatile int8_t x400 = INT8_MAX;

	t99 = ((x397^(x398&x399))|x400);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

