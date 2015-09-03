#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MAX;
int64_t t1 = -40LL;
int32_t x16 = -1;
int32_t t2 = -2752452;
int32_t t3 = -435593;
volatile uint32_t x24 = 2054568406U;
uint16_t x29 = 0U;
int32_t t5 = 0;
static int16_t x40 = INT16_MIN;
volatile uint16_t x45 = 139U;
volatile uint16_t x49 = 4972U;
volatile int32_t t10 = 453897024;
static volatile int32_t t11 = 210993;
int32_t x57 = -4774025;
int16_t x59 = INT16_MAX;
static int16_t x71 = INT16_MIN;
volatile int8_t x78 = INT8_MIN;
uint16_t x79 = UINT16_MAX;
volatile int16_t x81 = INT16_MIN;
uint16_t x83 = 3616U;
static volatile int8_t x87 = INT8_MIN;
uint64_t x89 = 58738213LLU;
volatile int8_t x92 = INT8_MIN;
int32_t x94 = -30;
volatile int64_t x97 = INT64_MIN;
int64_t x104 = -34104995886LL;
static volatile int16_t x117 = INT16_MIN;
volatile int32_t x122 = -1;
static uint8_t x129 = 18U;
uint16_t x134 = 82U;
int64_t x137 = INT64_MIN;
static volatile int64_t x139 = -1LL;
static uint8_t x146 = 0U;
int64_t x147 = 2360789091457LL;
int64_t x148 = INT64_MAX;
uint16_t x154 = 24U;
volatile uint64_t x174 = 519351LLU;
uint32_t x183 = UINT32_MAX;
static volatile int32_t t38 = -9116176;
int8_t x198 = -13;
volatile int64_t x199 = 3LL;
int16_t x204 = -1;
static int8_t x206 = INT8_MIN;
static int16_t x211 = -170;
int16_t x212 = INT16_MIN;
volatile int32_t t43 = -109;
uint32_t x218 = 3U;
uint8_t x219 = 67U;
volatile int32_t x226 = INT32_MAX;
uint8_t x227 = UINT8_MAX;
volatile uint64_t x237 = 584415LLU;
static uint16_t x242 = 57U;
int8_t x249 = INT8_MIN;
int32_t x270 = INT32_MAX;
int64_t x272 = -1LL;
static uint8_t x278 = 10U;
int32_t x281 = 868954;
int32_t t56 = -17226679;
static int8_t x285 = 24;
volatile int32_t t59 = 0;
uint64_t x299 = UINT64_MAX;
int64_t t61 = INT64_MIN;
static volatile int16_t x306 = 14;
volatile int16_t x314 = -481;
static volatile int32_t x320 = INT32_MIN;
int8_t x327 = 1;
int64_t x328 = -23918049338LL;
int32_t t67 = 189960882;
static int16_t x333 = INT16_MIN;
volatile int8_t x334 = INT8_MAX;
uint32_t x337 = UINT32_MAX;
static int32_t t70 = INT32_MIN;
static int8_t x349 = INT8_MAX;
int32_t x356 = 0;
uint32_t x359 = 0U;
static volatile int16_t x361 = 0;
int16_t x362 = 17;
static volatile int16_t x370 = INT16_MAX;
int8_t x373 = INT8_MIN;
static int16_t x389 = INT16_MIN;
int32_t x393 = 355287591;
static uint32_t x406 = 0U;
volatile int8_t x416 = INT8_MIN;
volatile int32_t x424 = INT32_MIN;
uint64_t x440 = 3LLU;
volatile int8_t x449 = INT8_MIN;
volatile int32_t x453 = -1;
int16_t x455 = INT16_MAX;
static int8_t x456 = -1;
static volatile int32_t t95 = 924160837;
static int16_t x467 = INT16_MAX;
int16_t x472 = INT16_MAX;
static int64_t x473 = INT64_MIN;
uint64_t x475 = 1437LLU;


void f0(void) {
	uint8_t x1 = 42U;
	uint32_t x3 = 30U;
	volatile uint16_t x4 = 3U;
	int32_t t0 = 976;

	t0 = (x1^((x2-x3)<x4));

	if (t0 != 42) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 16011384LL;
	int8_t x6 = INT8_MAX;
	static int8_t x7 = 2;
	volatile int8_t x8 = -1;

	t1 = (x5^((x6-x7)<x8));

	if (t1 != 16011384LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = -138498776LL;
	volatile int64_t x15 = -105LL;

	t2 = (x13^((x14-x15)<x16));

	if (t2 != 32766) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile int64_t x18 = INT64_MIN;
	volatile int32_t x19 = INT32_MIN;
	uint16_t x20 = 27U;

	t3 = (x17^((x18-x19)<x20));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MAX;
	uint8_t x23 = 9U;
	int32_t t4 = 52;

	t4 = (x21^((x22-x23)<x24));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x30 = INT64_MIN;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = 1;

	t5 = (x29^((x30-x31)<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = 6;
	int8_t x34 = -1;
	static int16_t x35 = -1097;
	volatile int8_t x36 = -27;
	volatile int32_t t6 = 31;

	t6 = (x33^((x34-x35)<x36));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 12;
	int64_t x38 = INT64_MAX;
	uint16_t x39 = UINT16_MAX;
	int32_t t7 = -162;

	t7 = (x37^((x38-x39)<x40));

	if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	static volatile int16_t x42 = INT16_MAX;
	uint16_t x43 = 40U;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t8 = 6907151;

	t8 = (x41^((x42-x43)<x44));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x46 = -6666583;
	uint32_t x47 = 52U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t9 = -19;

	t9 = (x45^((x46-x47)<x48));

	if (t9 != 139) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = -1;
	int64_t x51 = -1LL;
	uint8_t x52 = 1U;

	t10 = (x49^((x50-x51)<x52));

	if (t10 != 4973) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	int32_t x54 = 16411101;
	int32_t x55 = -1;
	volatile int32_t x56 = -60548;

	t11 = (x53^((x54-x55)<x56));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t12 = -99;

	t12 = (x57^((x58-x59)<x60));

	if (t12 != -4774026) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = -9;
	uint64_t x68 = 32946541196LLU;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x65^((x66-x67)<x68));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 1007415006475034375LLU;
	static int8_t x70 = 0;
	uint16_t x72 = UINT16_MAX;
	uint64_t t14 = 8523155785399250328LLU;

	t14 = (x69^((x70-x71)<x72));

	if (t14 != 1007415006475034374LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = INT8_MAX;
	static int8_t x74 = INT8_MAX;
	uint32_t x75 = 973366U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t15 = -54;

	t15 = (x73^((x74-x75)<x76));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	volatile uint64_t x80 = 8211206LLU;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x77^((x78-x79)<x80));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = 5247440LL;
	uint32_t x84 = 2458U;
	int32_t t17 = 148;

	t17 = (x81^((x82-x83)<x84));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 33;
	int16_t x86 = INT16_MIN;
	static int16_t x88 = INT16_MIN;
	static volatile int32_t t18 = 12;

	t18 = (x85^((x86-x87)<x88));

	if (t18 != 33) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x90 = 0U;
	static uint32_t x91 = 2153085U;
	uint64_t t19 = 29428031LLU;

	t19 = (x89^((x90-x91)<x92));

	if (t19 != 58738212LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x93 = 7U;
	static int8_t x95 = INT8_MAX;
	uint64_t x96 = UINT64_MAX;
	uint32_t t20 = 6982810U;

	t20 = (x93^((x94-x95)<x96));

	if (t20 != 6U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x98 = 1;
	int16_t x99 = 6227;
	volatile int8_t x100 = INT8_MIN;
	int64_t t21 = -83980LL;

	t21 = (x97^((x98-x99)<x100));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MAX;
	static uint32_t x103 = 2660U;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x101^((x102-x103)<x104));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 3488889U;
	static uint64_t x106 = UINT64_MAX;
	uint32_t x107 = UINT32_MAX;
	static int16_t x108 = INT16_MIN;
	static volatile uint32_t t23 = 28U;

	t23 = (x105^((x106-x107)<x108));

	if (t23 != 3488888U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MAX;
	int64_t x114 = INT64_MAX;
	uint8_t x115 = 14U;
	volatile int64_t x116 = INT64_MIN;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x113^((x114-x115)<x116));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x118 = 54U;
	uint8_t x119 = 0U;
	uint16_t x120 = UINT16_MAX;
	static int32_t t25 = 24365;

	t25 = (x117^((x118-x119)<x120));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = 14;
	int8_t x123 = INT8_MIN;
	int32_t x124 = -28947989;
	int32_t t26 = -339551;

	t26 = (x121^((x122-x123)<x124));

	if (t26 != 14) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x130 = -1;
	volatile uint64_t x131 = 47041LLU;
	int64_t x132 = INT64_MIN;
	int32_t t27 = -145739135;

	t27 = (x129^((x130-x131)<x132));

	if (t27 != 18) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x133 = INT16_MAX;
	int16_t x135 = 37;
	int32_t x136 = 406723;
	volatile int32_t t28 = -8063390;

	t28 = (x133^((x134-x135)<x136));

	if (t28 != 32766) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x138 = -1940633792095LL;
	int32_t x140 = -397232382;
	volatile int64_t t29 = -182686551LL;

	t29 = (x137^((x138-x139)<x140));

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = UINT32_MAX;
	static uint32_t t30 = 47007U;

	t30 = (x145^((x146-x147)<x148));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MAX;
	static uint32_t x150 = 3645U;
	static volatile int8_t x151 = 5;
	static int64_t x152 = INT64_MAX;
	static volatile int32_t t31 = 20;

	t31 = (x149^((x150-x151)<x152));

	if (t31 != 32766) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x153 = INT16_MAX;
	volatile int8_t x155 = -1;
	int16_t x156 = INT16_MIN;
	int32_t t32 = -11;

	t32 = (x153^((x154-x155)<x156));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x161 = 8071U;
	uint8_t x162 = 50U;
	int32_t x163 = -1;
	static uint64_t x164 = UINT64_MAX;
	uint32_t t33 = 37754888U;

	t33 = (x161^((x162-x163)<x164));

	if (t33 != 8070U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 75LLU;
	int8_t x166 = INT8_MAX;
	int16_t x167 = INT16_MIN;
	int64_t x168 = -1LL;
	uint64_t t34 = 2983LLU;

	t34 = (x165^((x166-x167)<x168));

	if (t34 != 75LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = INT16_MAX;
	uint8_t x175 = 2U;
	static uint64_t x176 = 17LLU;
	int32_t t35 = -108613095;

	t35 = (x173^((x174-x175)<x176));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	int64_t x179 = -57300739070689855LL;
	int64_t x180 = -2LL;
	int32_t t36 = 565134;

	t36 = (x177^((x178-x179)<x180));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = 22U;
	uint64_t x182 = 7226142760852404LLU;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t37 = -5548825;

	t37 = (x181^((x182-x183)<x184));

	if (t37 != 23) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = -1;
	volatile uint16_t x186 = 5819U;
	uint64_t x187 = 16327269825667152LLU;
	uint32_t x188 = UINT32_MAX;

	t38 = (x185^((x186-x187)<x188));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = -1;
	static int32_t x194 = -1;
	int16_t x195 = INT16_MAX;
	uint32_t x196 = 1U;
	volatile int32_t t39 = 1;

	t39 = (x193^((x194-x195)<x196));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x197 = UINT8_MAX;
	int64_t x200 = -31869LL;
	int32_t t40 = -10347;

	t40 = (x197^((x198-x199)<x200));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x201 = INT16_MIN;
	volatile int64_t x202 = INT64_MIN;
	uint64_t x203 = 1457263264624LLU;
	volatile int32_t t41 = -6118978;

	t41 = (x201^((x202-x203)<x204));

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x205 = INT16_MIN;
	int32_t x207 = -5831;
	static uint8_t x208 = 1U;
	int32_t t42 = -42;

	t42 = (x205^((x206-x207)<x208));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x209 = 78U;
	uint8_t x210 = 23U;

	t43 = (x209^((x210-x211)<x212));

	if (t43 != 78) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = 59003LL;
	uint16_t x220 = 4U;
	int64_t t44 = 812356411945LL;

	t44 = (x217^((x218-x219)<x220));

	if (t44 != 59003LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x225 = 443374399671LLU;
	int64_t x228 = INT64_MAX;
	uint64_t t45 = 1124612354296920LLU;

	t45 = (x225^((x226-x227)<x228));

	if (t45 != 443374399670LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x229 = 23;
	uint8_t x230 = 89U;
	static int64_t x231 = -1LL;
	uint32_t x232 = 0U;
	volatile int32_t t46 = 2710;

	t46 = (x229^((x230-x231)<x232));

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x238 = INT8_MIN;
	int8_t x239 = -1;
	uint64_t x240 = 20591404300525LLU;
	volatile uint64_t t47 = 0LLU;

	t47 = (x237^((x238-x239)<x240));

	if (t47 != 584415LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = -13516;
	int32_t x243 = -625554797;
	int16_t x244 = INT16_MAX;
	volatile int32_t t48 = 879438;

	t48 = (x241^((x242-x243)<x244));

	if (t48 != -13516) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x250 = -1;
	static int32_t x251 = INT32_MAX;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t49 = -334350804;

	t49 = (x249^((x250-x251)<x252));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x253 = INT16_MIN;
	uint64_t x254 = UINT64_MAX;
	volatile int64_t x255 = INT64_MAX;
	int64_t x256 = 78289623411LL;
	volatile int32_t t50 = 1;

	t50 = (x253^((x254-x255)<x256));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x257 = UINT32_MAX;
	volatile uint8_t x258 = 4U;
	uint32_t x259 = UINT32_MAX;
	static uint8_t x260 = 0U;
	static uint32_t t51 = UINT32_MAX;

	t51 = (x257^((x258-x259)<x260));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x265 = 1;
	uint8_t x266 = 40U;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	int32_t t52 = 7786;

	t52 = (x265^((x266-x267)<x268));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = 6507350270431319570LLU;
	int8_t x271 = 54;
	static uint64_t t53 = 10808763901383524LLU;

	t53 = (x269^((x270-x271)<x272));

	if (t53 != 6507350270431319570LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x273 = 2395U;
	int8_t x274 = 0;
	int8_t x275 = INT8_MAX;
	int64_t x276 = -1LL;
	static volatile uint32_t t54 = 5U;

	t54 = (x273^((x274-x275)<x276));

	if (t54 != 2394U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x277 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	volatile int64_t x280 = INT64_MIN;
	static volatile int32_t t55 = 6;

	t55 = (x277^((x278-x279)<x280));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x282 = INT64_MIN;
	int8_t x283 = -14;
	int32_t x284 = INT32_MIN;

	t56 = (x281^((x282-x283)<x284));

	if (t56 != 868955) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x286 = INT16_MAX;
	static uint64_t x287 = 3870081960402688846LLU;
	int16_t x288 = INT16_MAX;
	volatile int32_t t57 = 54;

	t57 = (x285^((x286-x287)<x288));

	if (t57 != 24) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x289 = -296;
	int32_t x290 = INT32_MIN;
	int64_t x291 = 5LL;
	int64_t x292 = -1LL;
	volatile int32_t t58 = -2043;

	t58 = (x289^((x290-x291)<x292));

	if (t58 != -295) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x293 = 154U;
	static uint8_t x294 = UINT8_MAX;
	int32_t x295 = -1;
	int8_t x296 = INT8_MIN;

	t59 = (x293^((x294-x295)<x296));

	if (t59 != 154) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x297 = 29322282254124LL;
	uint64_t x298 = UINT64_MAX;
	int32_t x300 = INT32_MAX;
	int64_t t60 = -99166006047LL;

	t60 = (x297^((x298-x299)<x300));

	if (t60 != 29322282254125LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x301 = INT64_MIN;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = -734762923337157LL;
	int64_t x304 = -448841491553714203LL;

	t61 = (x301^((x302-x303)<x304));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = 142068;
	int8_t x307 = 0;
	uint32_t x308 = UINT32_MAX;
	volatile int32_t t62 = -90018933;

	t62 = (x305^((x306-x307)<x308));

	if (t62 != 142069) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = -1;
	int32_t x311 = 1489;
	int16_t x312 = 1;
	static int32_t t63 = -25;

	t63 = (x309^((x310-x311)<x312));

	if (t63 != 126) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x313 = UINT64_MAX;
	int16_t x315 = -21;
	int64_t x316 = -1038526474LL;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x313^((x314-x315)<x316));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x317 = -6;
	int32_t x318 = 65375;
	uint16_t x319 = UINT16_MAX;
	int32_t t65 = 6;

	t65 = (x317^((x318-x319)<x320));

	if (t65 != -6) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = INT64_MAX;
	volatile uint8_t x322 = 6U;
	int32_t x323 = 32116887;
	int32_t x324 = INT32_MIN;
	volatile int64_t t66 = INT64_MAX;

	t66 = (x321^((x322-x323)<x324));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x325 = -1;
	volatile int64_t x326 = 1812048833837282289LL;

	t67 = (x325^((x326-x327)<x328));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x335 = 30358LL;
	volatile int64_t x336 = INT64_MIN;
	static volatile int32_t t68 = -614587;

	t68 = (x333^((x334-x335)<x336));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x338 = 186U;
	static volatile int32_t x339 = 212939;
	uint16_t x340 = 55U;
	uint32_t t69 = 4U;

	t69 = (x337^((x338-x339)<x340));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = -1;
	static uint32_t x347 = 519006986U;
	uint16_t x348 = 19U;

	t70 = (x345^((x346-x347)<x348));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x350 = UINT16_MAX;
	uint32_t x351 = 75729351U;
	int16_t x352 = INT16_MIN;
	volatile int32_t t71 = -60;

	t71 = (x349^((x350-x351)<x352));

	if (t71 != 126) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x353 = -1;
	int64_t x354 = -3467LL;
	uint16_t x355 = 3U;
	int32_t t72 = -147;

	t72 = (x353^((x354-x355)<x356));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x358 = -2;
	uint8_t x360 = 0U;
	int32_t t73 = 2644938;

	t73 = (x357^((x358-x359)<x360));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x363 = -1LL;
	int32_t x364 = INT32_MAX;
	int32_t t74 = -62;

	t74 = (x361^((x362-x363)<x364));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x365 = INT32_MAX;
	static int16_t x366 = -1;
	static int64_t x367 = -62059805LL;
	volatile int8_t x368 = INT8_MIN;
	int32_t t75 = INT32_MAX;

	t75 = (x365^((x366-x367)<x368));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x369 = 7346U;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -1;
	static uint32_t t76 = 76064389U;

	t76 = (x369^((x370-x371)<x372));

	if (t76 != 7346U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x374 = -12;
	uint64_t x375 = UINT64_MAX;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t77 = 1733439;

	t77 = (x373^((x374-x375)<x376));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = 728798320593404LLU;
	uint16_t x380 = 7U;
	static volatile int32_t t78 = INT32_MIN;

	t78 = (x377^((x378-x379)<x380));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = -1;
	uint32_t x382 = 1780U;
	int8_t x383 = 2;
	static uint16_t x384 = 1U;
	int32_t t79 = -212643;

	t79 = (x381^((x382-x383)<x384));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x386 = 849274150097LLU;
	static uint64_t x387 = 10LLU;
	int8_t x388 = 28;
	volatile int32_t t80 = 1564;

	t80 = (x385^((x386-x387)<x388));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x390 = INT8_MIN;
	static volatile int8_t x391 = 1;
	volatile int16_t x392 = -1;
	static int32_t t81 = 92;

	t81 = (x389^((x390-x391)<x392));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x394 = INT16_MAX;
	int16_t x395 = 3;
	int16_t x396 = -946;
	volatile int32_t t82 = 23690;

	t82 = (x393^((x394-x395)<x396));

	if (t82 != 355287591) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x397 = INT32_MAX;
	volatile int32_t x398 = INT32_MAX;
	static volatile int64_t x399 = -1LL;
	static int8_t x400 = INT8_MAX;
	volatile int32_t t83 = INT32_MAX;

	t83 = (x397^((x398-x399)<x400));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x401 = UINT32_MAX;
	int8_t x402 = INT8_MIN;
	int64_t x403 = -1LL;
	int64_t x404 = INT64_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = (x401^((x402-x403)<x404));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x405 = -1;
	int32_t x407 = -1;
	static int8_t x408 = INT8_MIN;
	static int32_t t85 = 7250;

	t85 = (x405^((x406-x407)<x408));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = INT32_MAX;
	volatile int16_t x410 = INT16_MIN;
	int32_t x411 = INT32_MIN;
	static uint8_t x412 = UINT8_MAX;
	static int32_t t86 = INT32_MAX;

	t86 = (x409^((x410-x411)<x412));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x413 = UINT32_MAX;
	int8_t x414 = INT8_MAX;
	volatile uint8_t x415 = 33U;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x413^((x414-x415)<x416));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x417 = 103U;
	int8_t x418 = INT8_MIN;
	volatile uint32_t x419 = UINT32_MAX;
	int64_t x420 = -280284323318935414LL;
	volatile int32_t t88 = 27;

	t88 = (x417^((x418-x419)<x420));

	if (t88 != 103) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x421 = 1137577LLU;
	int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MIN;
	volatile uint64_t t89 = 104LLU;

	t89 = (x421^((x422-x423)<x424));

	if (t89 != 1137577LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x433 = -1;
	uint32_t x434 = UINT32_MAX;
	uint64_t x435 = 210066LLU;
	volatile int32_t x436 = 26;
	static int32_t t90 = 245;

	t90 = (x433^((x434-x435)<x436));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x437 = -1;
	volatile int64_t x438 = -1LL;
	volatile int64_t x439 = INT64_MAX;
	static volatile int32_t t91 = 130259724;

	t91 = (x437^((x438-x439)<x440));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x441 = INT32_MAX;
	int16_t x442 = 7686;
	int16_t x443 = INT16_MIN;
	int16_t x444 = -616;
	static int32_t t92 = INT32_MAX;

	t92 = (x441^((x442-x443)<x444));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MIN;
	static int8_t x447 = INT8_MAX;
	int16_t x448 = -2;
	static volatile int32_t t93 = -3957754;

	t93 = (x445^((x446-x447)<x448));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x450 = 3751;
	static int8_t x451 = INT8_MIN;
	int16_t x452 = 60;
	volatile int32_t t94 = -10566;

	t94 = (x449^((x450-x451)<x452));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x454 = 6386579632LLU;

	t95 = (x453^((x454-x455)<x456));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x461 = UINT16_MAX;
	int8_t x462 = INT8_MIN;
	uint32_t x463 = 15243022U;
	uint16_t x464 = 50U;
	volatile int32_t t96 = -5;

	t96 = (x461^((x462-x463)<x464));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x465 = 8182316U;
	volatile int16_t x466 = INT16_MAX;
	static int16_t x468 = -100;
	static uint32_t t97 = 7154496U;

	t97 = (x465^((x466-x467)<x468));

	if (t97 != 8182316U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x469 = 0;
	static uint8_t x470 = 57U;
	int32_t x471 = -766639767;
	volatile int32_t t98 = 95;

	t98 = (x469^((x470-x471)<x472));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x474 = INT8_MIN;
	static uint8_t x476 = 3U;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x473^((x474-x475)<x476));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

