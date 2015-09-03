#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 13830U;
volatile int32_t t1 = 7157276;
int32_t t5 = -8580;
uint64_t x29 = UINT64_MAX;
uint16_t x30 = 28U;
int16_t x32 = 6243;
int16_t x36 = INT16_MAX;
int16_t x39 = INT16_MAX;
volatile int32_t t9 = 2;
int64_t x44 = INT64_MIN;
int64_t x61 = 1420529433816656LL;
volatile int32_t x63 = 76;
volatile uint64_t x67 = 508LLU;
volatile uint64_t x75 = UINT64_MAX;
int32_t x83 = INT32_MIN;
uint8_t x88 = 1U;
int16_t x90 = INT16_MIN;
volatile int32_t x96 = INT32_MIN;
static uint8_t x113 = UINT8_MAX;
uint32_t x115 = 516093211U;
static int64_t t25 = -4023661423387LL;
uint16_t x118 = 6095U;
int32_t x123 = -3184456;
uint8_t x124 = 30U;
static volatile int32_t t28 = 2488;
static int8_t x129 = INT8_MIN;
int16_t x141 = -1;
int32_t x143 = -12;
volatile int32_t t31 = -396394;
int64_t x156 = -18153846398859093LL;
volatile uint32_t t32 = 62U;
int16_t x159 = INT16_MIN;
volatile int16_t x161 = 1;
uint16_t x172 = 1924U;
uint32_t x173 = 2U;
static uint32_t x175 = 17053U;
volatile int64_t x181 = INT64_MIN;
static int8_t x186 = -27;
uint32_t x199 = 21871343U;
int32_t x204 = INT32_MAX;
static volatile int32_t t44 = -18;
volatile uint64_t t48 = 3593029388502LLU;
int32_t x227 = -56;
int8_t x237 = INT8_MIN;
int32_t x241 = INT32_MIN;
volatile int32_t t52 = -137;
uint8_t x246 = UINT8_MAX;
volatile int32_t t56 = 10994;
volatile int16_t x270 = INT16_MIN;
int64_t t58 = 1106803162023LL;
uint8_t x277 = 55U;
uint16_t x278 = 11U;
int16_t x284 = INT16_MAX;
int32_t t61 = -1042948520;
int32_t x286 = -1;
volatile int64_t x295 = -1LL;
static volatile uint64_t x298 = UINT64_MAX;
uint32_t x309 = UINT32_MAX;
int64_t x332 = 41504834LL;
volatile int32_t t72 = 0;
int16_t x339 = 7556;
static uint64_t x340 = 32832342LLU;
static int16_t x343 = INT16_MIN;
uint16_t x344 = 15986U;
uint16_t x347 = 12375U;
int64_t t76 = -14LL;
int8_t x357 = -1;
int32_t x361 = INT32_MIN;
int32_t x365 = -1;
int8_t x368 = -1;
int16_t x380 = -1;
int16_t x382 = INT16_MIN;
uint64_t x384 = UINT64_MAX;
static int32_t t86 = -119452;
volatile int16_t x405 = 114;
uint16_t x408 = 1U;
static int64_t x410 = 12LL;
static int64_t t89 = -144844402LL;
int16_t x428 = INT16_MAX;
uint64_t x437 = UINT64_MAX;
volatile int16_t x439 = -1;
int64_t x448 = -1056LL;
int64_t x450 = 90562051LL;
uint16_t x453 = 3U;
uint8_t x454 = 7U;
uint32_t x455 = 1U;
static uint32_t x464 = 6U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MAX;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 0;

	t0 = ((x1-x2)-(x3<x4));

	if (t0 != -32640) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MIN;

	t1 = ((x5-x6)-(x7<x8));

	if (t1 != -13958) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 62U;
	static volatile int8_t x10 = -8;
	int32_t x11 = -1;
	int64_t x12 = 400302483846LL;
	volatile int32_t t2 = -1;

	t2 = ((x9-x10)-(x11<x12));

	if (t2 != 69) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -13196785;
	int8_t x14 = INT8_MAX;
	uint32_t x15 = 207003144U;
	int64_t x16 = 2745688176042901LL;
	static volatile int32_t t3 = -7;

	t3 = ((x13-x14)-(x15<x16));

	if (t3 != -13196913) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x18 = 42382U;
	uint16_t x19 = 11347U;
	volatile uint64_t x20 = 8415LLU;
	volatile uint32_t t4 = 673763U;

	t4 = ((x17-x18)-(x19<x20));

	if (t4 != 4294924786U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	int32_t x22 = -1;
	uint64_t x23 = 936LLU;
	volatile int16_t x24 = INT16_MIN;

	t5 = ((x21-x22)-(x23<x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = -1;
	volatile int64_t x27 = -1LL;
	int32_t x28 = -1;
	int32_t t6 = -10;

	t6 = ((x25-x26)-(x27<x28));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = 10;
	uint64_t t7 = 626LLU;

	t7 = ((x29-x30)-(x31<x32));

	if (t7 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 1U;
	uint8_t x34 = UINT8_MAX;
	uint16_t x35 = 7U;
	volatile int32_t t8 = -82590586;

	t8 = ((x33-x34)-(x35<x36));

	if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	static int32_t x38 = INT32_MAX;
	uint64_t x40 = UINT64_MAX;

	t9 = ((x37-x38)-(x39<x40));

	if (t9 != -2147418113) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 3;
	static int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int32_t t10 = 5;

	t10 = ((x41-x42)-(x43<x44));

	if (t10 != 131) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x46 = UINT8_MAX;
	volatile uint16_t x47 = 92U;
	uint8_t x48 = 28U;
	int32_t t11 = -146672;

	t11 = ((x45-x46)-(x47<x48));

	if (t11 != -383) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 27629298LLU;
	int8_t x50 = -1;
	uint32_t x51 = 25620U;
	int16_t x52 = -5073;
	uint64_t t12 = 441925LLU;

	t12 = ((x49-x50)-(x51<x52));

	if (t12 != 27629298LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1U;
	int32_t x54 = -15047722;
	int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 17344;

	t13 = ((x53-x54)-(x55<x56));

	if (t13 != 15047723) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 60867LL;
	int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	volatile int16_t x60 = INT16_MAX;
	static volatile int64_t t14 = 8115070259123944LL;

	t14 = ((x57-x58)-(x59<x60));

	if (t14 != 60867LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 5;
	uint8_t x64 = 51U;
	static int64_t t15 = 0LL;

	t15 = ((x61-x62)-(x63<x64));

	if (t15 != 1420529433816651LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 29U;
	int32_t x66 = -10898;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -270512502;

	t16 = ((x65-x66)-(x67<x68));

	if (t16 != 10926) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 27U;
	static volatile int8_t x70 = INT8_MIN;
	static volatile int8_t x71 = -1;
	int16_t x72 = 291;
	volatile uint32_t t17 = 1811U;

	t17 = ((x69-x70)-(x71<x72));

	if (t17 != 154U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	uint32_t x74 = 80U;
	int8_t x76 = INT8_MAX;
	static uint32_t t18 = 432U;

	t18 = ((x73-x74)-(x75<x76));

	if (t18 != 2147483567U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static int32_t x78 = INT32_MIN;
	static volatile int32_t x79 = -150758;
	int32_t x80 = INT32_MAX;
	volatile int64_t t19 = 106630851346LL;

	t19 = ((x77-x78)-(x79<x80));

	if (t19 != 2147483646LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MAX;
	uint8_t x84 = 13U;
	int32_t t20 = -94274;

	t20 = ((x81-x82)-(x83<x84));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static int16_t x86 = INT16_MAX;
	int64_t x87 = -1LL;
	int32_t t21 = -22930591;

	t21 = ((x85-x86)-(x87<x88));

	if (t21 != -32769) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t22 = 267722080LLU;

	t22 = ((x89-x90)-(x91<x92));

	if (t22 != 32766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -1;
	int32_t x94 = INT32_MAX;
	static int64_t x95 = 154365054119768LL;
	static volatile int32_t t23 = INT32_MIN;

	t23 = ((x93-x94)-(x95<x96));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MAX;
	static int8_t x106 = 60;
	static uint32_t x107 = 99130243U;
	int16_t x108 = -1;
	static volatile int64_t t24 = 488251759259332LL;

	t24 = ((x105-x106)-(x107<x108));

	if (t24 != 9223372036854775746LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x114 = INT64_MAX;
	static uint16_t x116 = UINT16_MAX;

	t25 = ((x113-x114)-(x115<x116));

	if (t25 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = UINT16_MAX;
	static int16_t x119 = -1;
	static int64_t x120 = INT64_MIN;
	int32_t t26 = 2009;

	t26 = ((x117-x118)-(x119<x120));

	if (t26 != 59440) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -136818;
	int64_t x122 = -1LL;
	int64_t t27 = -3865095000420176298LL;

	t27 = ((x121-x122)-(x123<x124));

	if (t27 != -136818LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = 3U;
	uint64_t x127 = 14003188985546LLU;
	uint8_t x128 = UINT8_MAX;

	t28 = ((x125-x126)-(x127<x128));

	if (t28 != -32771) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 3038U;
	int16_t x132 = INT16_MIN;
	int64_t t29 = 0LL;

	t29 = ((x129-x130)-(x131<x132));

	if (t29 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x142 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t30 = 53030951;

	t30 = ((x141-x142)-(x143<x144));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -123;
	static uint8_t x150 = UINT8_MAX;
	static int64_t x151 = INT64_MIN;
	int32_t x152 = -1;

	t31 = ((x149-x150)-(x151<x152));

	if (t31 != -379) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = 1U;
	static uint32_t x154 = UINT32_MAX;
	uint64_t x155 = UINT64_MAX;

	t32 = ((x153-x154)-(x155<x156));

	if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = -1;
	uint8_t x160 = UINT8_MAX;
	int32_t t33 = -87057634;

	t33 = ((x157-x158)-(x159<x160));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x162 = 919991685LLU;
	uint8_t x163 = 79U;
	uint64_t x164 = UINT64_MAX;
	uint64_t t34 = 2460242451571LLU;

	t34 = ((x161-x162)-(x163<x164));

	if (t34 != 18446744072789559931LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x165 = 128U;
	int8_t x166 = INT8_MIN;
	int16_t x167 = 148;
	int8_t x168 = -15;
	volatile int32_t t35 = -472640;

	t35 = ((x165-x166)-(x167<x168));

	if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 146615525070611LLU;
	int32_t x170 = 0;
	uint64_t x171 = 31306LLU;
	static volatile uint64_t t36 = 843854711745302LLU;

	t36 = ((x169-x170)-(x171<x172));

	if (t36 != 146615525070611LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x174 = 4274393204908LLU;
	int32_t x176 = 19854766;
	static volatile uint64_t t37 = 629398LLU;

	t37 = ((x173-x174)-(x175<x176));

	if (t37 != 18446739799316346709LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = -1;
	int8_t x178 = -3;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = 23U;
	int32_t t38 = -51;

	t38 = ((x177-x178)-(x179<x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x182 = -6549;
	int64_t x183 = 5316825LL;
	int8_t x184 = 28;
	static volatile int64_t t39 = -946LL;

	t39 = ((x181-x182)-(x183<x184));

	if (t39 != -9223372036854769259LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = 1806805779U;
	static uint8_t x187 = 14U;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t40 = 591357548U;

	t40 = ((x185-x186)-(x187<x188));

	if (t40 != 1806805805U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MIN;
	volatile int16_t x190 = -1;
	int32_t x191 = -1;
	int32_t x192 = INT32_MAX;
	static volatile int32_t t41 = INT32_MIN;

	t41 = ((x189-x190)-(x191<x192));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x197 = 1903236LLU;
	volatile int32_t x198 = INT32_MIN;
	static volatile int8_t x200 = INT8_MIN;
	uint64_t t42 = 3972719754488937976LLU;

	t42 = ((x197-x198)-(x199<x200));

	if (t42 != 2149386883LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = -2;
	int32_t x202 = INT32_MIN;
	static int32_t x203 = INT32_MAX;
	static int32_t t43 = 4488843;

	t43 = ((x201-x202)-(x203<x204));

	if (t43 != 2147483646) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = 136253412;
	static volatile uint8_t x206 = 121U;
	uint32_t x207 = 506511U;
	volatile uint32_t x208 = 1001767U;

	t44 = ((x205-x206)-(x207<x208));

	if (t44 != 136253290) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x209 = -1LL;
	static int32_t x210 = -1;
	static int64_t x211 = INT64_MIN;
	uint32_t x212 = UINT32_MAX;
	int64_t t45 = -1535330268LL;

	t45 = ((x209-x210)-(x211<x212));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x213 = 65U;
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = -1LL;
	int16_t x216 = INT16_MAX;
	static uint64_t t46 = 80270LLU;

	t46 = ((x213-x214)-(x215<x216));

	if (t46 != 65LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x217 = 867516;
	static int16_t x218 = 1;
	static int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MAX;
	static volatile int32_t t47 = 86517725;

	t47 = ((x217-x218)-(x219<x220));

	if (t47 != 867514) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MAX;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1;
	int8_t x224 = -1;

	t48 = ((x221-x222)-(x223<x224));

	if (t48 != 128LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MIN;
	static int8_t x228 = 23;
	static volatile uint32_t t49 = 338308U;

	t49 = ((x225-x226)-(x227<x228));

	if (t49 != 32766U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 2705U;
	int8_t x234 = 0;
	static int32_t x235 = INT32_MIN;
	uint16_t x236 = 43U;
	volatile uint32_t t50 = 55429208U;

	t50 = ((x233-x234)-(x235<x236));

	if (t50 != 2704U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x238 = INT8_MAX;
	int32_t x239 = 0;
	uint16_t x240 = 4U;
	int32_t t51 = -80604;

	t51 = ((x237-x238)-(x239<x240));

	if (t51 != -256) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;

	t52 = ((x241-x242)-(x243<x244));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x245 = -1;
	static int16_t x247 = INT16_MAX;
	static int8_t x248 = INT8_MAX;
	int32_t t53 = -476998;

	t53 = ((x245-x246)-(x247<x248));

	if (t53 != -256) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 6U;
	int16_t x250 = -1;
	int64_t x251 = INT64_MAX;
	int16_t x252 = -1;
	static int32_t t54 = -654161;

	t54 = ((x249-x250)-(x251<x252));

	if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x253 = INT8_MAX;
	static int64_t x254 = 31835212LL;
	int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MAX;
	static volatile int64_t t55 = 7836271742924LL;

	t55 = ((x253-x254)-(x255<x256));

	if (t55 != -31835086LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x257 = -1;
	volatile int16_t x258 = INT16_MIN;
	int8_t x259 = 47;
	static int32_t x260 = INT32_MIN;

	t56 = ((x257-x258)-(x259<x260));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	static int64_t x262 = INT64_MIN;
	int32_t x263 = 8010300;
	int32_t x264 = -32;
	int64_t t57 = -3833964210432LL;

	t57 = ((x261-x262)-(x263<x264));

	if (t57 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MIN;
	static uint16_t x271 = 30U;
	static int16_t x272 = INT16_MAX;

	t58 = ((x269-x270)-(x271<x272));

	if (t58 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x273 = 42U;
	static volatile int64_t x274 = -7143114962226049LL;
	int32_t x275 = INT32_MAX;
	int32_t x276 = -127;
	volatile int64_t t59 = -465879961528LL;

	t59 = ((x273-x274)-(x275<x276));

	if (t59 != 7143114962226091LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x279 = 3;
	int8_t x280 = INT8_MIN;
	static int32_t t60 = 100;

	t60 = ((x277-x278)-(x279<x280));

	if (t60 != 44) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x281 = 45U;
	int16_t x282 = -1;
	uint16_t x283 = 8U;

	t61 = ((x281-x282)-(x283<x284));

	if (t61 != 45) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = -1LL;
	int16_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	int64_t t62 = 1LL;

	t62 = ((x285-x286)-(x287<x288));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = 1LL;
	int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = 1103U;
	volatile uint64_t x292 = 207475526142LLU;
	static int64_t t63 = 49628LL;

	t63 = ((x289-x290)-(x291<x292));

	if (t63 != 128LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x293 = 11U;
	int32_t x294 = 4;
	volatile uint16_t x296 = 186U;
	volatile int32_t t64 = -645837;

	t64 = ((x293-x294)-(x295<x296));

	if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = INT16_MIN;
	int32_t x299 = -1811040;
	int32_t x300 = -112;
	static uint64_t t65 = 64366548LLU;

	t65 = ((x297-x298)-(x299<x300));

	if (t65 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x301 = 1498542959886LLU;
	int32_t x302 = INT32_MIN;
	uint16_t x303 = 21589U;
	volatile int16_t x304 = -1;
	static volatile uint64_t t66 = 2LLU;

	t66 = ((x301-x302)-(x303<x304));

	if (t66 != 1500690443534LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x305 = INT8_MAX;
	volatile int32_t x306 = -1;
	static int16_t x307 = INT16_MIN;
	static volatile int8_t x308 = INT8_MAX;
	volatile int32_t t67 = 720;

	t67 = ((x305-x306)-(x307<x308));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x310 = 21277959;
	uint16_t x311 = UINT16_MAX;
	uint8_t x312 = 3U;
	uint32_t t68 = 48254U;

	t68 = ((x309-x310)-(x311<x312));

	if (t68 != 4273689336U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x317 = UINT64_MAX;
	static int64_t x318 = -1LL;
	static int8_t x319 = -1;
	int8_t x320 = 18;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x317-x318)-(x319<x320));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x321 = INT64_MIN;
	volatile int32_t x322 = -1;
	static int16_t x323 = INT16_MIN;
	volatile int8_t x324 = INT8_MAX;
	int64_t t70 = INT64_MIN;

	t70 = ((x321-x322)-(x323<x324));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = UINT16_MAX;
	int8_t x326 = INT8_MIN;
	int16_t x327 = 13547;
	int16_t x328 = -1;
	volatile int32_t t71 = -7151773;

	t71 = ((x325-x326)-(x327<x328));

	if (t71 != 65663) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = INT64_MIN;

	t72 = ((x329-x330)-(x331<x332));

	if (t72 != -65281) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MIN;
	int64_t t73 = -2848881054429LL;

	t73 = ((x337-x338)-(x339<x340));

	if (t73 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MAX;
	uint16_t x342 = 0U;
	static volatile int32_t t74 = -154;

	t74 = ((x341-x342)-(x343<x344));

	if (t74 != 2147483646) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = -1;
	static uint64_t x346 = UINT64_MAX;
	volatile int16_t x348 = INT16_MIN;
	volatile uint64_t t75 = 5LLU;

	t75 = ((x345-x346)-(x347<x348));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int64_t x350 = INT64_MAX;
	uint64_t x351 = 142473599135963LLU;
	static int8_t x352 = INT8_MIN;

	t76 = ((x349-x350)-(x351<x352));

	if (t76 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x353 = 687833U;
	int8_t x354 = 0;
	uint16_t x355 = UINT16_MAX;
	static int8_t x356 = -1;
	volatile uint32_t t77 = 47627758U;

	t77 = ((x353-x354)-(x355<x356));

	if (t77 != 687833U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x358 = INT32_MIN;
	uint32_t x359 = 79408U;
	static uint16_t x360 = 118U;
	int32_t t78 = INT32_MAX;

	t78 = ((x357-x358)-(x359<x360));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t79 = -441;

	t79 = ((x361-x362)-(x363<x364));

	if (t79 != -2147483520) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x366 = INT8_MAX;
	int32_t x367 = INT32_MIN;
	volatile int32_t t80 = 36612793;

	t80 = ((x365-x366)-(x367<x368));

	if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = -522985657485836952LL;
	int16_t x374 = INT16_MAX;
	uint32_t x375 = 13U;
	uint8_t x376 = UINT8_MAX;
	int64_t t81 = 3502164LL;

	t81 = ((x373-x374)-(x375<x376));

	if (t81 != -522985657485869720LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = 7209492522009LLU;
	uint8_t x378 = 1U;
	volatile int64_t x379 = INT64_MIN;
	static uint64_t t82 = 6877LLU;

	t82 = ((x377-x378)-(x379<x380));

	if (t82 != 7209492522007LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	volatile int32_t t83 = -1;

	t83 = ((x381-x382)-(x383<x384));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x386 = UINT16_MAX;
	uint64_t x387 = 3LLU;
	int16_t x388 = -1;
	uint64_t t84 = 85394LLU;

	t84 = ((x385-x386)-(x387<x388));

	if (t84 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = -1;
	int32_t x390 = INT32_MAX;
	uint8_t x391 = 1U;
	int16_t x392 = -1;
	int32_t t85 = INT32_MIN;

	t85 = ((x389-x390)-(x391<x392));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = -5LL;

	t86 = ((x393-x394)-(x395<x396));

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x397 = 0U;
	volatile int8_t x398 = -1;
	uint64_t x399 = 19923073570614LLU;
	int32_t x400 = -18028608;
	int32_t t87 = -41;

	t87 = ((x397-x398)-(x399<x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x406 = -1LL;
	int32_t x407 = INT32_MAX;
	int64_t t88 = -823821980175LL;

	t88 = ((x405-x406)-(x407<x408));

	if (t88 != 115LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = INT16_MAX;
	int16_t x411 = INT16_MAX;
	int8_t x412 = -49;

	t89 = ((x409-x410)-(x411<x412));

	if (t89 != 32755LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x417 = INT32_MAX;
	uint32_t x418 = 28U;
	int16_t x419 = INT16_MIN;
	uint32_t x420 = 4982U;
	static volatile uint32_t t90 = 0U;

	t90 = ((x417-x418)-(x419<x420));

	if (t90 != 2147483619U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MIN;
	static int64_t x422 = INT64_MIN;
	int16_t x423 = -11576;
	int32_t x424 = INT32_MAX;
	volatile int64_t t91 = -21094843LL;

	t91 = ((x421-x422)-(x423<x424));

	if (t91 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x425 = 1;
	int8_t x426 = -1;
	static int8_t x427 = INT8_MIN;
	volatile int32_t t92 = -29008;

	t92 = ((x425-x426)-(x427<x428));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x429 = INT32_MIN;
	uint64_t x430 = UINT64_MAX;
	volatile int32_t x431 = -1;
	int32_t x432 = INT32_MAX;
	volatile uint64_t t93 = 6357553105412LLU;

	t93 = ((x429-x430)-(x431<x432));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = INT64_MAX;
	volatile uint64_t x434 = 23LLU;
	volatile uint64_t x435 = 287341218717523012LLU;
	static int64_t x436 = -1LL;
	volatile uint64_t t94 = 10619LLU;

	t94 = ((x433-x434)-(x435<x436));

	if (t94 != 9223372036854775783LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x438 = INT16_MAX;
	int8_t x440 = INT8_MAX;
	uint64_t t95 = 175LLU;

	t95 = ((x437-x438)-(x439<x440));

	if (t95 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x445 = 475990U;
	uint16_t x446 = 337U;
	static int64_t x447 = INT64_MIN;
	uint32_t t96 = 397632973U;

	t96 = ((x445-x446)-(x447<x448));

	if (t96 != 475652U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = INT64_MAX;
	static uint64_t x451 = 669822LLU;
	static int16_t x452 = -1;
	static volatile int64_t t97 = -2996303480LL;

	t97 = ((x449-x450)-(x451<x452));

	if (t97 != 9223372036764213755LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x456 = 52833LLU;
	static int32_t t98 = 484921838;

	t98 = ((x453-x454)-(x455<x456));

	if (t98 != -5) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = INT64_MAX;
	uint16_t x462 = UINT16_MAX;
	int16_t x463 = -1;
	int64_t t99 = -2235762801759475LL;

	t99 = ((x461-x462)-(x463<x464));

	if (t99 != 9223372036854710272LL) { NG(); } else { ; }
	
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

