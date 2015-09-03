#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
int64_t t0 = -639205853LL;
int64_t x8 = INT64_MIN;
uint16_t x9 = 41U;
static int16_t x10 = INT16_MAX;
static int8_t x12 = -1;
static int32_t t2 = -1;
int64_t t3 = 84340005855002LL;
int8_t x17 = INT8_MIN;
volatile uint32_t x18 = 0U;
int16_t x20 = INT16_MIN;
int16_t x35 = 6;
static int32_t x39 = INT32_MIN;
volatile int32_t x41 = INT32_MIN;
volatile int32_t x46 = -572730;
volatile uint64_t t11 = 5LLU;
static uint64_t t12 = 1968317613814314910LLU;
uint8_t x66 = 11U;
volatile int8_t x68 = INT8_MIN;
static int32_t x72 = -4532502;
volatile int32_t t17 = 15;
volatile int64_t x76 = INT64_MIN;
uint16_t x81 = 23U;
static int16_t x83 = INT16_MAX;
int32_t x87 = -1;
int16_t x88 = -1;
int32_t x90 = -2805;
uint8_t x91 = UINT8_MAX;
int16_t x92 = -1;
volatile int32_t t22 = 200141535;
uint32_t x93 = UINT32_MAX;
volatile int32_t t24 = INT32_MIN;
uint16_t x111 = UINT16_MAX;
static int32_t x112 = INT32_MIN;
uint32_t x113 = 92U;
volatile int64_t x116 = INT64_MAX;
static int8_t x119 = INT8_MAX;
uint32_t x121 = 21U;
static int8_t x123 = INT8_MIN;
int32_t x126 = INT32_MIN;
uint32_t x131 = 7U;
static uint32_t x135 = 10529214U;
volatile uint64_t t35 = 2888465156392731996LLU;
int32_t x152 = -178055412;
uint32_t x165 = 38U;
int64_t x167 = 19425LL;
static uint8_t x174 = 0U;
int16_t x180 = -6;
int32_t t44 = -4084;
int16_t x181 = -970;
int32_t x183 = -11882103;
uint16_t x186 = UINT16_MAX;
int8_t x187 = INT8_MIN;
int16_t x189 = INT16_MIN;
static int32_t x191 = INT32_MIN;
volatile uint32_t t47 = 39U;
volatile int16_t x194 = -218;
int32_t x199 = INT32_MIN;
int64_t t49 = 711897836411LL;
uint64_t x204 = 508310275LLU;
uint64_t t50 = 33773435311955LLU;
uint32_t x205 = UINT32_MAX;
int16_t x207 = INT16_MAX;
uint64_t t51 = 114135LLU;
int16_t x209 = INT16_MIN;
uint32_t x213 = 6663619U;
int8_t x219 = 0;
int64_t x223 = INT64_MIN;
int64_t x234 = 31203390907439234LL;
int64_t x237 = INT64_MAX;
uint32_t x238 = 6256784U;
uint8_t x241 = UINT8_MAX;
static volatile uint16_t x256 = UINT16_MAX;
int32_t x263 = INT32_MIN;
static int16_t x264 = INT16_MIN;
int32_t x265 = -1;
volatile int32_t x272 = -660362550;
int8_t x277 = -11;
static int8_t x286 = INT8_MIN;
volatile int64_t t72 = 11580955866753215LL;
volatile int8_t x297 = -1;
int8_t x303 = INT8_MAX;
int8_t x308 = INT8_MIN;
int8_t x320 = 3;
static int32_t x322 = INT32_MIN;
int64_t x329 = -1LL;
uint16_t x335 = 11849U;
static uint64_t t83 = 237397570510LLU;
static int32_t x338 = 2970;
int32_t x342 = INT32_MAX;
static int16_t x344 = INT16_MIN;
uint16_t x345 = UINT16_MAX;
static volatile int32_t x347 = INT32_MIN;
static int8_t x353 = INT8_MIN;
int8_t x358 = -1;
static int32_t t90 = 2775;
volatile uint32_t t93 = 39287U;
volatile int32_t x378 = INT32_MAX;
volatile int64_t t95 = -101571761LL;
uint16_t x385 = 7U;
int32_t x386 = INT32_MIN;
int64_t x389 = INT64_MIN;
int8_t x396 = INT8_MIN;
uint8_t x400 = 2U;


void f0(void) {
	int32_t x1 = 252618;
	volatile int64_t x3 = INT64_MAX;
	uint8_t x4 = 4U;

	t0 = ((x1^x2)&(x3^x4));

	if (t0 != 9223372036854523185LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int8_t x6 = -16;
	int64_t x7 = INT64_MIN;
	int64_t t1 = -8021703693350LL;

	t1 = ((x5^x6)&(x7^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = INT16_MIN;

	t2 = ((x9^x10)&(x11^x12));

	if (t2 != 32726) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 28U;
	static int16_t x14 = INT16_MIN;
	uint8_t x15 = 44U;
	static int64_t x16 = 37451165555LL;

	t3 = ((x13^x14)&(x15^x16));

	if (t3 != 37451137052LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x19 = 33315597688798689LLU;
	volatile uint64_t t4 = 81LLU;

	t4 = ((x17^x18)&(x19^x20));

	if (t4 != 4064804224LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 1574869983LL;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 804U;
	volatile int64_t x24 = INT64_MIN;
	static int64_t t5 = -20137LL;

	t5 = ((x21^x22)&(x23^x24));

	if (t5 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static int8_t x26 = -1;
	static uint64_t x27 = UINT64_MAX;
	uint16_t x28 = 766U;
	volatile uint64_t t6 = 398431272888LLU;

	t6 = ((x25^x26)&(x27^x28));

	if (t6 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	int8_t x31 = -1;
	uint64_t x32 = 2804369576LLU;
	volatile uint64_t t7 = 1168643100LLU;

	t7 = ((x29^x30)&(x31^x32));

	if (t7 != 14167LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1647969265495997941LLU;
	uint64_t x34 = UINT64_MAX;
	uint32_t x36 = 466489748U;
	volatile uint64_t t8 = 13270529347LLU;

	t8 = ((x33^x34)&(x35^x36));

	if (t8 != 289931266LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 20745;
	int32_t x38 = 16034;
	static int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = 8;

	t9 = ((x37^x38)&(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x42 = INT64_MAX;
	int32_t x43 = INT32_MIN;
	volatile int16_t x44 = -1;
	int64_t t10 = 349LL;

	t10 = ((x41^x42)&(x43^x44));

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 48646015877LLU;
	uint16_t x47 = UINT16_MAX;
	uint64_t x48 = UINT64_MAX;

	t11 = ((x45^x46)&(x47^x48));

	if (t11 != 18446744025062965248LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = 6U;
	static int16_t x50 = -15;
	int16_t x51 = 0;
	uint64_t x52 = UINT64_MAX;

	t12 = ((x49^x50)&(x51^x52));

	if (t12 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 36163;
	int16_t x54 = -1;
	static uint32_t x55 = 13U;
	volatile uint32_t x56 = 3U;
	uint32_t t13 = 2716295U;

	t13 = ((x53^x54)&(x55^x56));

	if (t13 != 12U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int16_t x58 = -1;
	volatile uint8_t x59 = 62U;
	static volatile int32_t x60 = INT32_MAX;
	int64_t t14 = 351920466105LL;

	t14 = ((x57^x58)&(x59^x60));

	if (t14 != 2147483585LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	volatile int64_t x62 = INT64_MAX;
	volatile uint64_t x63 = 12207807202090LLU;
	int16_t x64 = 0;
	uint64_t t15 = 21878LLU;

	t15 = ((x61^x62)&(x63^x64));

	if (t15 != 810LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = INT16_MAX;
	int16_t x67 = -1;
	volatile int32_t t16 = -443154;

	t16 = ((x65^x66)&(x67^x68));

	if (t16 != 116) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -25;
	volatile int8_t x70 = -1;
	uint8_t x71 = 11U;

	t17 = ((x69^x70)&(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 58327561367392LLU;
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = INT16_MAX;
	uint64_t t18 = 1575161013005LLU;

	t18 = ((x73^x74)&(x75^x76));

	if (t18 != 9223372036854804320LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -236742337LL;
	int64_t x78 = INT64_MIN;
	static uint64_t x79 = 68495431949940944LLU;
	volatile int8_t x80 = 31;
	volatile uint64_t t19 = 716313943259711516LLU;

	t19 = ((x77^x78)&(x79^x80));

	if (t19 != 68495431914526735LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = 1958829U;
	volatile int64_t x84 = 365275LL;
	int64_t t20 = -134959737675362LL;

	t20 = ((x81^x82)&(x83^x84));

	if (t20 != 385312LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	int16_t x86 = -11;
	volatile int32_t t21 = 199854;

	t21 = ((x85^x86)&(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 1;

	t22 = ((x89^x90)&(x91^x92));

	if (t22 != -2816) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MAX;
	static volatile uint8_t x96 = 0U;
	uint64_t t23 = 1045142LLU;

	t23 = ((x93^x94)&(x95^x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	int16_t x98 = 132;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = 0U;

	t24 = ((x97^x98)&(x99^x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 187U;
	int16_t x102 = INT16_MIN;
	volatile int8_t x103 = INT8_MAX;
	uint64_t x104 = 6270907483LLU;
	uint64_t t25 = 2197137511677465LLU;

	t25 = ((x101^x102)&(x103^x104));

	if (t25 != 6270877728LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	int64_t x106 = -2170177776525LL;
	static volatile int16_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int64_t t26 = -1LL;

	t26 = ((x105^x106)&(x107^x108));

	if (t26 != 5132LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = 110768453;
	uint16_t x110 = UINT16_MAX;
	int32_t t27 = 91800084;

	t27 = ((x109^x110)&(x111^x112));

	if (t27 != 52922) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MIN;
	int64_t t28 = -2902135287321270304LL;

	t28 = ((x113^x114)&(x115^x116));

	if (t28 != 2147483555LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static uint8_t x118 = 7U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t29 = 617620974U;

	t29 = ((x117^x118)&(x119^x120));

	if (t29 != 128U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 3;
	int32_t x124 = -2;
	static uint32_t t30 = 17520U;

	t30 = ((x121^x122)&(x123^x124));

	if (t30 != 22U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 5;
	int16_t x127 = INT16_MAX;
	int64_t x128 = 3572873697435068LL;
	int64_t t31 = 3233702480LL;

	t31 = ((x125^x126)&(x127^x128));

	if (t31 != 3572871624392705LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 414583140838LL;
	static volatile int64_t x130 = INT64_MAX;
	int32_t x132 = INT32_MIN;
	volatile int64_t t32 = 131258313750763LL;

	t32 = ((x129^x130)&(x131^x132));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MAX;
	int32_t x134 = -61;
	volatile uint8_t x136 = 23U;
	uint32_t t33 = 7274U;

	t33 = ((x133^x134)&(x135^x136));

	if (t33 != 10518568U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	static volatile int32_t x138 = 1357;
	static int8_t x139 = INT8_MIN;
	static uint64_t x140 = 4740936457131865LLU;
	volatile uint64_t t34 = 22684281333997LLU;

	t34 = ((x137^x138)&(x139^x140));

	if (t34 != 16LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int16_t x142 = INT16_MAX;
	volatile int8_t x143 = -1;
	volatile int8_t x144 = -1;

	t35 = ((x141^x142)&(x143^x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int32_t x146 = -224393791;
	int8_t x147 = -1;
	uint16_t x148 = 1U;
	volatile int32_t t36 = -39;

	t36 = ((x145^x146)&(x147^x148));

	if (t36 != -224331202) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 1LLU;
	volatile int64_t x150 = INT64_MAX;
	int64_t x151 = 18LL;
	uint64_t t37 = 8532LLU;

	t37 = ((x149^x150)&(x151^x152));

	if (t37 != 9223372036676720414LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	int32_t x154 = INT32_MIN;
	volatile int64_t x155 = INT64_MIN;
	uint8_t x156 = 2U;
	volatile int64_t t38 = -5LL;

	t38 = ((x153^x154)&(x155^x156));

	if (t38 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = 20135749787275LL;
	static int32_t x159 = INT32_MAX;
	int16_t x160 = -1;
	volatile int64_t t39 = -2390658LL;

	t39 = ((x157^x158)&(x159^x160));

	if (t39 != 20134806683648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = -1;
	static int16_t x163 = 0;
	volatile uint64_t x164 = 121290905LLU;
	uint64_t t40 = 67LLU;

	t40 = ((x161^x162)&(x163^x164));

	if (t40 != 25LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x166 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	int64_t t41 = -15770191812796768LL;

	t41 = ((x165^x166)&(x167^x168));

	if (t41 != 4294934560LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 17U;
	uint16_t x170 = UINT16_MAX;
	volatile int16_t x171 = -953;
	static int16_t x172 = -1;
	volatile int32_t t42 = 1;

	t42 = ((x169^x170)&(x171^x172));

	if (t42 != 936) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 3436U;
	int32_t x175 = -1;
	volatile int32_t x176 = INT32_MIN;
	volatile uint32_t t43 = 11725009U;

	t43 = ((x173^x174)&(x175^x176));

	if (t43 != 3436U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	static int8_t x178 = 60;
	int16_t x179 = INT16_MAX;

	t44 = ((x177^x178)&(x179^x180));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x182 = 10LL;
	int16_t x184 = INT16_MAX;
	volatile int64_t t45 = 5705LL;

	t45 = ((x181^x182)&(x183^x184));

	if (t45 != -11875276LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 7952133055255LLU;
	int8_t x188 = 3;
	volatile uint64_t t46 = 62LLU;

	t46 = ((x185^x186)&(x187^x188));

	if (t46 != 7952133004416LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	uint32_t x192 = UINT32_MAX;

	t47 = ((x189^x190)&(x191^x192));

	if (t47 != 32767U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -2412272;
	int8_t x195 = -1;
	int16_t x196 = -1;
	volatile int32_t t48 = 571;

	t48 = ((x193^x194)&(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	int16_t x200 = -1;

	t49 = ((x197^x198)&(x199^x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint64_t x202 = 630163882905LLU;
	int16_t x203 = INT16_MIN;

	t50 = ((x201^x202)&(x203^x204));

	if (t50 != 18446743443440021506LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 252110833112851LLU;
	uint8_t x208 = 17U;

	t51 = ((x205^x206)&(x207^x208));

	if (t51 != 10476LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x210 = 0U;
	uint32_t x211 = UINT32_MAX;
	int64_t x212 = -1LL;
	volatile int64_t t52 = -167466459211LL;

	t52 = ((x209^x210)&(x211^x212));

	if (t52 != -4294967296LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -61295466;
	volatile int16_t x215 = INT16_MIN;
	volatile int64_t x216 = INT64_MIN;
	volatile int64_t t53 = 0LL;

	t53 = ((x213^x214)&(x215^x216));

	if (t53 != 4231856128LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = UINT32_MAX;
	volatile uint32_t x218 = UINT32_MAX;
	static int64_t x220 = 248860LL;
	volatile int64_t t54 = -72595775055709LL;

	t54 = ((x217^x218)&(x219^x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 29U;
	static int64_t x222 = -1201768809LL;
	uint16_t x224 = 11867U;
	int64_t t55 = -489047328749LL;

	t55 = ((x221^x222)&(x223^x224));

	if (t55 != -9223372036854766070LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int8_t x227 = -7;
	uint64_t x228 = UINT64_MAX;
	uint64_t t56 = 124582959656901LLU;

	t56 = ((x225^x226)&(x227^x228));

	if (t56 != 6LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 93U;
	int8_t x230 = INT8_MAX;
	int64_t x231 = -1LL;
	int64_t x232 = INT64_MIN;
	volatile int64_t t57 = -7LL;

	t57 = ((x229^x230)&(x231^x232));

	if (t57 != 34LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	static volatile uint8_t x235 = 125U;
	int16_t x236 = INT16_MIN;
	int64_t t58 = 639726196811LL;

	t58 = ((x233^x234)&(x235^x236));

	if (t58 != -31203390907449219LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x239 = 155831103461LL;
	static int32_t x240 = 15513079;
	int64_t t59 = 424351LL;

	t59 = ((x237^x238)&(x239^x240));

	if (t59 != 155837268482LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x242 = 15496635LLU;
	int32_t x243 = -1139;
	int8_t x244 = INT8_MAX;
	volatile uint64_t t60 = 19LLU;

	t60 = ((x241^x242)&(x243^x244));

	if (t60 != 15495488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	static volatile int16_t x246 = 54;
	volatile int16_t x247 = 7942;
	int16_t x248 = INT16_MAX;
	int64_t t61 = -842817656LL;

	t61 = ((x245^x246)&(x247^x248));

	if (t61 != 24777LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 108U;
	static int8_t x250 = -1;
	volatile int8_t x251 = 1;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 0;

	t62 = ((x249^x250)&(x251^x252));

	if (t62 != 146) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = 215659;
	int16_t x254 = INT16_MIN;
	static int32_t x255 = -1;
	int32_t t63 = 83;

	t63 = ((x253^x254)&(x255^x256));

	if (t63 != -262144) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 28400U;
	static int64_t x258 = -1LL;
	uint8_t x259 = 2U;
	static uint8_t x260 = 9U;
	volatile int64_t t64 = -627233076730LL;

	t64 = ((x257^x258)&(x259^x260));

	if (t64 != 11LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 3LL;
	int64_t x262 = INT64_MIN;
	volatile int64_t t65 = 30873407978295917LL;

	t65 = ((x261^x262)&(x263^x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	int8_t x268 = 1;
	volatile int64_t t66 = -1LL;

	t66 = ((x265^x266)&(x267^x268));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int32_t x270 = -57862808;
	int64_t x271 = INT64_MIN;
	int64_t t67 = -34621091581507LL;

	t67 = ((x269^x270)&(x271^x272));

	if (t67 != 9223372036192141442LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	static int32_t x274 = INT32_MIN;
	volatile int8_t x275 = INT8_MIN;
	static int64_t x276 = INT64_MAX;
	volatile int64_t t68 = 7LL;

	t68 = ((x273^x274)&(x275^x276));

	if (t68 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 1U;
	int8_t x279 = -1;
	int32_t x280 = INT32_MIN;
	static int32_t t69 = 34;

	t69 = ((x277^x278)&(x279^x280));

	if (t69 != 2147483636) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -1;
	int8_t x282 = -1;
	uint16_t x283 = 93U;
	int16_t x284 = 501;
	static volatile int32_t t70 = -8111;

	t70 = ((x281^x282)&(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x285 = 20U;
	int32_t x287 = INT32_MAX;
	int64_t x288 = -1LL;
	volatile int64_t t71 = 385200779LL;

	t71 = ((x285^x286)&(x287^x288));

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int32_t x290 = -1;
	int64_t x291 = 1LL;
	int8_t x292 = INT8_MIN;

	t72 = ((x289^x290)&(x291^x292));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = UINT8_MAX;
	int16_t x294 = -1;
	uint64_t x295 = 13588LLU;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t73 = 8567986884266433LLU;

	t73 = ((x293^x294)&(x295^x296));

	if (t73 != 18446744073709537792LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = -3;
	int8_t x299 = INT8_MIN;
	static int8_t x300 = 3;
	volatile int32_t t74 = 12015643;

	t74 = ((x297^x298)&(x299^x300));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 0;
	volatile int64_t x302 = INT64_MIN;
	static uint32_t x304 = 13977899U;
	static volatile int64_t t75 = 2353842LL;

	t75 = ((x301^x302)&(x303^x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -13198610537LL;
	static int64_t x306 = 1089415LL;
	int32_t x307 = INT32_MAX;
	int64_t t76 = -87LL;

	t76 = ((x305^x306)&(x307^x308));

	if (t76 != -15032385520LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 54;
	static int8_t x310 = -1;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = UINT8_MAX;
	int32_t t77 = 435;

	t77 = ((x309^x310)&(x311^x312));

	if (t77 != -183) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x313 = UINT16_MAX;
	int32_t x314 = 359881;
	volatile uint32_t x315 = 558U;
	static int64_t x316 = INT64_MIN;
	static int64_t t78 = 4138834LL;

	t78 = ((x313^x314)&(x315^x316));

	if (t78 != 550LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -1LL;
	int32_t x318 = INT32_MIN;
	volatile int32_t x319 = INT32_MAX;
	volatile int64_t t79 = 735208727461LL;

	t79 = ((x317^x318)&(x319^x320));

	if (t79 != 2147483644LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x323 = 41U;
	int16_t x324 = 1;
	volatile int64_t t80 = 100LL;

	t80 = ((x321^x322)&(x323^x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 9U;
	uint32_t x326 = 7036278U;
	volatile int64_t x327 = INT64_MAX;
	uint32_t x328 = 245371950U;
	int64_t t81 = -202401LL;

	t81 = ((x325^x326)&(x327^x328));

	if (t81 != 4933969LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x330 = 374;
	uint16_t x331 = 7U;
	int64_t x332 = -127997392LL;
	int64_t t82 = 1239840963LL;

	t82 = ((x329^x330)&(x331^x332));

	if (t82 != -127997439LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 6;
	uint16_t x334 = UINT16_MAX;
	uint64_t x336 = 0LLU;

	t83 = ((x333^x334)&(x335^x336));

	if (t83 != 11849LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 21947659517012611LLU;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MIN;
	static volatile uint64_t t84 = 189762749798070LLU;

	t84 = ((x337^x338)&(x339^x340));

	if (t84 != 21947658692198425LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 1;
	int8_t x343 = 7;
	volatile int32_t t85 = 54839188;

	t85 = ((x341^x342)&(x343^x344));

	if (t85 != 2147450886) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = -147;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = 189;

	t86 = ((x345^x346)&(x347^x348));

	if (t86 != -2147483502) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 7523540916LL;
	uint32_t x350 = UINT32_MAX;
	int32_t x351 = INT32_MIN;
	static uint64_t x352 = 257LLU;
	volatile uint64_t t87 = 176650628511604LLU;

	t87 = ((x349^x350)&(x351^x352));

	if (t87 != 4294967297LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x354 = -1LL;
	uint32_t x355 = 102852217U;
	static int8_t x356 = -1;
	volatile int64_t t88 = -857LL;

	t88 = ((x353^x354)&(x355^x356));

	if (t88 != 6LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 79;
	static int8_t x359 = 14;
	uint16_t x360 = 4U;
	int32_t t89 = 10;

	t89 = ((x357^x358)&(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int8_t x362 = INT8_MAX;
	static int16_t x363 = INT16_MIN;
	uint16_t x364 = 226U;

	t90 = ((x361^x362)&(x363^x364));

	if (t90 != -32640) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int8_t x366 = INT8_MAX;
	uint16_t x367 = UINT16_MAX;
	static int32_t x368 = INT32_MAX;
	int32_t t91 = -32002820;

	t91 = ((x365^x366)&(x367^x368));

	if (t91 != 2147418112) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 584U;
	int64_t x370 = INT64_MAX;
	static int16_t x371 = INT16_MIN;
	uint32_t x372 = UINT32_MAX;
	volatile int64_t t92 = -993330070LL;

	t92 = ((x369^x370)&(x371^x372));

	if (t92 != 32183LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = INT16_MIN;
	uint16_t x376 = UINT16_MAX;

	t93 = ((x373^x374)&(x375^x376));

	if (t93 != 127U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int64_t x379 = INT64_MIN;
	uint8_t x380 = 3U;
	int64_t t94 = -3LL;

	t94 = ((x377^x378)&(x379^x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MAX;
	static uint16_t x382 = 0U;
	int16_t x383 = INT16_MAX;
	int64_t x384 = -1LL;

	t95 = ((x381^x382)&(x383^x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x387 = INT32_MIN;
	int32_t x388 = -1;
	int32_t t96 = 21810;

	t96 = ((x385^x386)&(x387^x388));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 11U;
	static uint16_t x391 = 4012U;
	int32_t x392 = INT32_MIN;
	volatile int64_t t97 = 216939441453118567LL;

	t97 = ((x389^x390)&(x391^x392));

	if (t97 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 5444;
	int64_t x394 = INT64_MIN;
	static int32_t x395 = INT32_MAX;
	volatile int64_t t98 = 1427335836LL;

	t98 = ((x393^x394)&(x395^x396));

	if (t98 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	volatile uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint32_t t99 = 1466U;

	t99 = ((x397^x398)&(x399^x400));

	if (t99 != 2U) { NG(); } else { ; }
	
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

