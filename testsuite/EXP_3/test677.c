
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = INT16_MIN;
static int16_t x8 = -1;
static volatile int32_t t0 = -650;
static int8_t x13 = -1;
uint16_t x25 = UINT16_MAX;
volatile int32_t t3 = 352;
static int32_t t5 = 145676628;
int32_t t8 = -15;
volatile uint32_t t10 = 229828U;
uint64_t x80 = UINT64_MAX;
static uint64_t t11 = 20981LLU;
volatile uint8_t x92 = 56U;
static int32_t x98 = -1;
int64_t x101 = -86408860LL;
int16_t x102 = INT16_MIN;
int32_t x126 = -3;
uint8_t x128 = UINT8_MAX;
static volatile int16_t x132 = INT16_MAX;
int32_t x137 = INT32_MAX;
volatile int32_t t22 = -9504339;
int8_t x171 = -1;
int32_t x182 = INT32_MIN;
int64_t x183 = INT64_MAX;
volatile int32_t t28 = 15;
int8_t x207 = INT8_MAX;
static volatile int32_t t31 = 42465;
int64_t x214 = INT64_MIN;
uint64_t x215 = 214702057LLU;
int8_t x256 = -1;
static int16_t x265 = INT16_MIN;
uint32_t t37 = 225078778U;
int16_t x270 = -25;
int64_t x287 = -1LL;
volatile uint8_t x297 = UINT8_MAX;
int16_t x315 = INT16_MIN;
volatile int16_t x349 = -46;
uint64_t x357 = 10654LLU;
volatile uint32_t x359 = UINT32_MAX;
static uint16_t x408 = 1U;
int32_t x417 = 61116440;
uint32_t x434 = 2U;
static uint64_t t56 = 123314541896683LLU;
static int64_t x498 = INT64_MAX;
volatile int8_t x513 = INT8_MIN;
uint16_t x518 = 0U;
int8_t x522 = 1;
int64_t x542 = INT64_MIN;
static volatile uint32_t x596 = 4U;
uint8_t x600 = 103U;
uint8_t x608 = 6U;
uint64_t x631 = UINT64_MAX;
uint8_t x642 = UINT8_MAX;
volatile int8_t x670 = INT8_MIN;
int16_t x674 = INT16_MAX;
int64_t t82 = 3LL;
int32_t x711 = 527;
int32_t x713 = -1;
int8_t x715 = INT8_MIN;
volatile int16_t x729 = INT16_MAX;
uint64_t t86 = 1003413LLU;
int32_t t87 = 15573068;
int64_t x747 = INT64_MIN;
static uint8_t x748 = 12U;
volatile int64_t t88 = -554860002814686LL;
int32_t x769 = -1;
int32_t x783 = -231435321;
uint64_t t91 = 3405560339LLU;
int64_t x801 = 11443944190808908LL;
int64_t x807 = -1936013675008LL;
static int8_t x808 = INT8_MIN;
uint64_t x817 = UINT64_MAX;
static uint8_t x819 = UINT8_MAX;
volatile int32_t t94 = 142070700;
int32_t x835 = -101869;
int8_t x844 = INT8_MIN;
int8_t x900 = 1;
volatile uint32_t t99 = 1650023270U;
int32_t x943 = -1;
int8_t x953 = INT8_MIN;
volatile int8_t x965 = INT8_MIN;
volatile uint16_t x966 = UINT16_MAX;
volatile int16_t x1009 = -11;
volatile int64_t t109 = -1349490400919LL;
int32_t x1031 = INT32_MAX;
static volatile uint64_t t111 = 696LLU;
int16_t x1039 = INT16_MAX;
uint8_t x1045 = 6U;
int64_t x1066 = 7271000LL;
int8_t x1068 = INT8_MIN;
volatile int16_t x1078 = -1;
static int32_t x1095 = INT32_MAX;
static int32_t t119 = -1638500;
static int32_t t121 = 197847884;
int16_t x1120 = -22;
volatile int32_t t122 = -16140;
volatile int16_t x1126 = 1181;
static int32_t t124 = 456674788;
static volatile uint64_t x1146 = UINT64_MAX;
int64_t x1151 = 4440464552401LL;
volatile int8_t x1152 = -1;
static volatile int8_t x1154 = 0;
int16_t x1165 = 108;
volatile int32_t x1195 = INT32_MIN;
static uint8_t x1201 = 3U;
int8_t x1204 = 1;
static int64_t x1207 = INT64_MIN;
volatile int64_t t136 = 109913373429LL;
int64_t x1221 = INT64_MAX;
int32_t t137 = 479;
int16_t x1243 = INT16_MIN;
volatile int16_t x1250 = -3827;
volatile int32_t x1253 = -8155348;
int64_t x1256 = -1LL;
int8_t x1270 = 0;
volatile int64_t x1271 = 35404725077LL;
volatile int64_t t141 = 31316125389LL;
int32_t x1278 = -40903931;
volatile int32_t t142 = -1065;
volatile int16_t x1289 = INT16_MAX;
int32_t x1291 = INT32_MAX;
static uint32_t x1316 = 47861U;
volatile int16_t x1317 = INT16_MIN;
int64_t t147 = -1248LL;
int64_t x1334 = INT64_MIN;
int8_t x1335 = INT8_MAX;
static int32_t t149 = -8084299;
uint64_t t151 = 5390357421387LLU;
uint32_t x1367 = 3880U;
int8_t x1368 = 1;
int8_t x1378 = -1;
int8_t x1392 = INT8_MIN;
int16_t x1396 = -1;
volatile uint64_t x1397 = UINT64_MAX;
static int16_t x1398 = -1;
volatile int32_t x1399 = INT32_MIN;
int16_t x1400 = INT16_MAX;
uint16_t x1414 = 8144U;
int64_t x1416 = -1LL;
volatile int64_t t165 = 409LL;
int16_t x1444 = INT16_MAX;
static int8_t x1448 = INT8_MAX;
uint32_t x1458 = 2976U;
uint32_t x1459 = 522613454U;
int64_t x1465 = 3104LL;
uint32_t x1468 = 488U;
volatile uint32_t t169 = 230U;
static volatile int16_t x1479 = INT16_MIN;
volatile uint32_t x1482 = 349542U;
static int16_t x1484 = 137;
static int64_t x1501 = INT64_MIN;
volatile uint16_t x1504 = UINT16_MAX;
volatile int16_t x1508 = INT16_MAX;
int64_t t175 = 109549714LL;
int16_t x1509 = -1;
uint32_t x1510 = 1042802771U;
static volatile uint64_t t178 = 396406506835LLU;
static volatile uint8_t x1537 = 127U;
int64_t x1539 = INT64_MAX;
int16_t x1545 = INT16_MAX;
int32_t x1549 = INT32_MIN;
int32_t t182 = -87104;
volatile uint16_t x1557 = UINT16_MAX;
int8_t x1571 = 4;
volatile uint64_t x1582 = 435857994559LLU;
uint16_t x1583 = UINT16_MAX;
static int16_t x1584 = -9;
volatile uint8_t x1615 = 54U;
int64_t x1622 = -102846249514925LL;
static int32_t t190 = 130653066;
static int32_t t192 = -5;
static int8_t x1640 = INT8_MIN;
int32_t t193 = 1;
int64_t x1647 = -1LL;
volatile int8_t x1652 = INT8_MIN;
int64_t x1657 = 88030315041LL;
int64_t x1658 = -1LL;
volatile int16_t x1664 = -1;
volatile int32_t t198 = -46;


void f0(void) {
    	static volatile int16_t x6 = INT16_MIN;
	int32_t x7 = -1;

    t0 = ((x5!=x6)%(x7/x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x14 = INT32_MIN;
	static int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	volatile int32_t t1 = -151;

    t1 = ((x13!=x14)%(x15/x16));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MAX;
	int64_t x28 = -30782550259638LL;
	static int64_t t2 = -899931619LL;

    t2 = ((x25!=x26)%(x27/x28));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x33 = -71LL;
	int16_t x34 = 804;
	uint8_t x35 = 10U;
	int32_t x36 = -10;

    t3 = ((x33!=x34)%(x35/x36));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = INT16_MAX;
	int8_t x40 = 1;
	volatile int32_t t4 = 199924330;

    t4 = ((x37!=x38)%(x39/x40));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x45 = -168;
	int8_t x46 = -17;
	volatile int16_t x47 = INT16_MAX;
	uint8_t x48 = UINT8_MAX;

    t5 = ((x45!=x46)%(x47/x48));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x49 = INT8_MAX;
	int8_t x50 = 1;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -2429;
	static volatile int32_t t6 = 186654062;

    t6 = ((x49!=x50)%(x51/x52));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x53 = 0;
	uint32_t x54 = 3809354U;
	static int64_t x55 = INT64_MAX;
	static volatile int64_t x56 = INT64_MAX;
	volatile int64_t t7 = -73LL;

    t7 = ((x53!=x54)%(x55/x56));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x57 = 4336774U;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	int8_t x60 = -1;

    t8 = ((x57!=x58)%(x59/x60));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x69 = 1674935;
	int8_t x70 = INT8_MIN;
	static uint8_t x71 = UINT8_MAX;
	static uint8_t x72 = UINT8_MAX;
	int32_t t9 = -147559;

    t9 = ((x69!=x70)%(x71/x72));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x73 = -1;
	static uint8_t x74 = 1U;
	int32_t x75 = INT32_MAX;
	uint32_t x76 = 2U;

    t10 = ((x73!=x74)%(x75/x76));

    if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x78 = -9LL;
	int8_t x79 = -1;

    t11 = ((x77!=x78)%(x79/x80));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x81 = INT8_MAX;
	static int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = UINT64_MAX;
	uint8_t x84 = UINT8_MAX;
	static volatile uint64_t t12 = 1842696854LLU;

    t12 = ((x81!=x82)%(x83/x84));

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MIN;
	int64_t x91 = 186702745639569074LL;
	int64_t t13 = 964969266LL;

    t13 = ((x89!=x90)%(x91/x92));

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x93 = INT16_MAX;
	int8_t x94 = 5;
	int32_t x95 = -1;
	uint8_t x96 = 1U;
	int32_t t14 = 21523;

    t14 = ((x93!=x94)%(x95/x96));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x97 = -1;
	int64_t x99 = 32807313707267LL;
	uint8_t x100 = 8U;
	int64_t t15 = -7LL;

    t15 = ((x97!=x98)%(x99/x100));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x103 = INT64_MIN;
	static volatile uint16_t x104 = 8339U;
	volatile int64_t t16 = 589441LL;

    t16 = ((x101!=x102)%(x103/x104));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	int16_t x127 = INT16_MIN;
	int32_t t17 = 33328402;

    t17 = ((x125!=x126)%(x127/x128));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x129 = -7;
	volatile int64_t x130 = INT64_MAX;
	static volatile int32_t x131 = INT32_MIN;
	int32_t t18 = 1;

    t18 = ((x129!=x130)%(x131/x132));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x133 = 15;
	volatile uint16_t x134 = 30262U;
	int64_t x135 = INT64_MAX;
	static int16_t x136 = INT16_MIN;
	static volatile int64_t t19 = -69379512668LL;

    t19 = ((x133!=x134)%(x135/x136));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = INT32_MAX;
	int8_t x140 = -1;
	int32_t t20 = -1;

    t20 = ((x137!=x138)%(x139/x140));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x145 = 8U;
	static int8_t x146 = INT8_MIN;
	static int32_t x147 = INT32_MIN;
	volatile int32_t x148 = -1558;
	volatile int32_t t21 = -289289742;

    t21 = ((x145!=x146)%(x147/x148));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x157 = INT64_MAX;
	uint8_t x158 = 7U;
	volatile int32_t x159 = 6042609;
	static int8_t x160 = INT8_MAX;

    t22 = ((x157!=x158)%(x159/x160));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x161 = INT8_MAX;
	uint8_t x162 = UINT8_MAX;
	int16_t x163 = -3497;
	int64_t x164 = -1LL;
	volatile int64_t t23 = 26421LL;

    t23 = ((x161!=x162)%(x163/x164));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x165 = -3357;
	int16_t x166 = -8021;
	int16_t x167 = INT16_MAX;
	uint16_t x168 = 1U;
	int32_t t24 = -39860;

    t24 = ((x165!=x166)%(x167/x168));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x169 = INT32_MIN;
	static int32_t x170 = -1;
	int64_t x172 = -1LL;
	int64_t t25 = 0LL;

    t25 = ((x169!=x170)%(x171/x172));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x181 = 0U;
	int16_t x184 = INT16_MIN;
	volatile int64_t t26 = -141104349367LL;

    t26 = ((x181!=x182)%(x183/x184));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x189 = -5;
	volatile int8_t x190 = 36;
	static volatile uint32_t x191 = UINT32_MAX;
	int8_t x192 = INT8_MAX;
	static uint32_t t27 = 37384U;

    t27 = ((x189!=x190)%(x191/x192));

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x193 = -1629593;
	int16_t x194 = 7981;
	int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MIN;

    t28 = ((x193!=x194)%(x195/x196));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x197 = INT16_MAX;
	int32_t x198 = INT32_MAX;
	static volatile int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MIN;
	int32_t t29 = -48;

    t29 = ((x197!=x198)%(x199/x200));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x205 = 1U;
	volatile int64_t x206 = INT64_MIN;
	uint16_t x208 = 4U;
	volatile int32_t t30 = 0;

    t30 = ((x205!=x206)%(x207/x208));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x209 = 135252809663752LL;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	static int32_t x212 = -1;

    t31 = ((x209!=x210)%(x211/x212));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x213 = 13535;
	uint32_t x216 = 2914U;
	static uint64_t t32 = 1275308485336LLU;

    t32 = ((x213!=x214)%(x215/x216));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MAX;
	int32_t x223 = -5266488;
	int16_t x224 = INT16_MIN;
	int32_t t33 = 2;

    t33 = ((x221!=x222)%(x223/x224));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x249 = -1LL;
	uint8_t x250 = 9U;
	static int16_t x251 = INT16_MAX;
	int8_t x252 = INT8_MAX;
	static int32_t t34 = -48770;

    t34 = ((x249!=x250)%(x251/x252));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x253 = 1U;
	static uint64_t x254 = UINT64_MAX;
	int32_t x255 = -14828;
	volatile int32_t t35 = -40359415;

    t35 = ((x253!=x254)%(x255/x256));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x257 = 111419458LL;
	static volatile int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	int8_t x260 = 1;
	volatile int64_t t36 = 1506476809LL;

    t36 = ((x257!=x258)%(x259/x260));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x266 = INT32_MIN;
	static int32_t x267 = INT32_MIN;
	uint32_t x268 = 4548U;

    t37 = ((x265!=x266)%(x267/x268));

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x269 = INT64_MIN;
	int64_t x271 = 57667506723426717LL;
	int8_t x272 = INT8_MAX;
	volatile int64_t t38 = 448093667LL;

    t38 = ((x269!=x270)%(x271/x272));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x285 = INT16_MAX;
	uint8_t x286 = UINT8_MAX;
	int32_t x288 = -1;
	static volatile int64_t t39 = 5122LL;

    t39 = ((x285!=x286)%(x287/x288));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x289 = INT8_MAX;
	uint64_t x290 = 3LLU;
	volatile int16_t x291 = INT16_MIN;
	uint32_t x292 = 23797104U;
	volatile uint32_t t40 = 8081408U;

    t40 = ((x289!=x290)%(x291/x292));

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = 233450LL;
	volatile uint16_t x300 = 14U;
	volatile int64_t t41 = 1754418831LL;

    t41 = ((x297!=x298)%(x299/x300));

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	volatile uint8_t x316 = 52U;
	static volatile int32_t t42 = -4239;

    t42 = ((x313!=x314)%(x315/x316));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x333 = -1;
	int64_t x334 = 12616318LL;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t43 = 0;

    t43 = ((x333!=x334)%(x335/x336));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MIN;
	uint32_t x339 = 11934U;
	uint16_t x340 = 18U;
	volatile uint32_t t44 = 40U;

    t44 = ((x337!=x338)%(x339/x340));

    if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x350 = 56;
	int32_t x351 = -1;
	volatile int16_t x352 = -1;
	static volatile int32_t t45 = -355;

    t45 = ((x349!=x350)%(x351/x352));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x358 = INT8_MIN;
	int16_t x360 = 2;
	static volatile uint32_t t46 = 305363237U;

    t46 = ((x357!=x358)%(x359/x360));

    if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x381 = 56U;
	static int64_t x382 = INT64_MIN;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = 907411900739041LL;
	uint64_t t47 = 5487734892767856LLU;

    t47 = ((x381!=x382)%(x383/x384));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x401 = INT8_MAX;
	int64_t x402 = INT64_MIN;
	int16_t x403 = -3473;
	uint16_t x404 = 1U;
	static int32_t t48 = -1015425460;

    t48 = ((x401!=x402)%(x403/x404));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x405 = INT8_MAX;
	int8_t x406 = INT8_MIN;
	int16_t x407 = INT16_MIN;
	int32_t t49 = 707;

    t49 = ((x405!=x406)%(x407/x408));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x409 = -1LL;
	static volatile int32_t x410 = -1;
	int64_t x411 = -27770866056613LL;
	int16_t x412 = INT16_MIN;
	volatile int64_t t50 = -144870808782476LL;

    t50 = ((x409!=x410)%(x411/x412));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x413 = 92;
	int16_t x414 = -1;
	int64_t x415 = -50360476672209LL;
	uint32_t x416 = 183U;
	int64_t t51 = -131397451695LL;

    t51 = ((x413!=x414)%(x415/x416));

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x418 = -1LL;
	int32_t x419 = INT32_MAX;
	uint64_t x420 = 1731LLU;
	uint64_t t52 = 113440LLU;

    t52 = ((x417!=x418)%(x419/x420));

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x433 = -1;
	int64_t x435 = 20922LL;
	volatile uint16_t x436 = 3506U;
	static int64_t t53 = 2608785968LL;

    t53 = ((x433!=x434)%(x435/x436));

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x445 = 2;
	uint8_t x446 = 60U;
	int16_t x447 = INT16_MIN;
	volatile int8_t x448 = -1;
	volatile int32_t t54 = -1036;

    t54 = ((x445!=x446)%(x447/x448));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x449 = -303225500372LL;
	int64_t x450 = INT64_MIN;
	static int64_t x451 = 180943LL;
	int8_t x452 = -1;
	int64_t t55 = 242LL;

    t55 = ((x449!=x450)%(x451/x452));

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x489 = 1;
	volatile int64_t x490 = -1LL;
	int32_t x491 = -342;
	static uint64_t x492 = 144942357608567LLU;

    t56 = ((x489!=x490)%(x491/x492));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x497 = INT8_MAX;
	volatile uint16_t x499 = UINT16_MAX;
	int8_t x500 = INT8_MIN;
	int32_t t57 = 224774999;

    t57 = ((x497!=x498)%(x499/x500));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x514 = 0U;
	volatile int16_t x515 = INT16_MAX;
	int16_t x516 = INT16_MAX;
	volatile int32_t t58 = 0;

    t58 = ((x513!=x514)%(x515/x516));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x517 = UINT8_MAX;
	int32_t x519 = INT32_MIN;
	static int16_t x520 = INT16_MIN;
	volatile int32_t t59 = -924151;

    t59 = ((x517!=x518)%(x519/x520));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x521 = INT16_MIN;
	uint64_t x523 = 268851572301794758LLU;
	static uint32_t x524 = 26U;
	uint64_t t60 = 4334395773020997963LLU;

    t60 = ((x521!=x522)%(x523/x524));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x529 = UINT16_MAX;
	volatile int32_t x530 = INT32_MAX;
	static int16_t x531 = INT16_MIN;
	int8_t x532 = INT8_MIN;
	volatile int32_t t61 = 325244453;

    t61 = ((x529!=x530)%(x531/x532));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x533 = INT8_MAX;
	int32_t x534 = -1;
	int64_t x535 = INT64_MIN;
	int8_t x536 = INT8_MIN;
	volatile int64_t t62 = -10573218969LL;

    t62 = ((x533!=x534)%(x535/x536));

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x541 = 47107LLU;
	static int32_t x543 = INT32_MAX;
	int8_t x544 = -1;
	int32_t t63 = -3913;

    t63 = ((x541!=x542)%(x543/x544));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x549 = -1;
	volatile int8_t x550 = INT8_MAX;
	volatile uint8_t x551 = 8U;
	volatile int64_t x552 = -1LL;
	int64_t t64 = 8266LL;

    t64 = ((x549!=x550)%(x551/x552));

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x581 = -1;
	static uint64_t x582 = 5962290858011LLU;
	volatile uint32_t x583 = UINT32_MAX;
	int16_t x584 = -1;
	static uint32_t t65 = 652935U;

    t65 = ((x581!=x582)%(x583/x584));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x589 = 0U;
	int64_t x590 = INT64_MIN;
	int32_t x591 = INT32_MIN;
	uint16_t x592 = 26U;
	static volatile int32_t t66 = 256;

    t66 = ((x589!=x590)%(x591/x592));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x593 = -315;
	static int32_t x594 = -1;
	int16_t x595 = -124;
	static volatile uint32_t t67 = 422847346U;

    t67 = ((x593!=x594)%(x595/x596));

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x597 = INT16_MIN;
	int16_t x598 = -1;
	int64_t x599 = -3498552050584947LL;
	volatile int64_t t68 = -603LL;

    t68 = ((x597!=x598)%(x599/x600));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x601 = INT32_MAX;
	volatile int64_t x602 = INT64_MIN;
	static int16_t x603 = INT16_MIN;
	int16_t x604 = -1;
	static int32_t t69 = -25193;

    t69 = ((x601!=x602)%(x603/x604));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x605 = INT8_MIN;
	int8_t x606 = INT8_MAX;
	int64_t x607 = INT64_MAX;
	volatile int64_t t70 = -2914701166060052904LL;

    t70 = ((x605!=x606)%(x607/x608));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint8_t x609 = UINT8_MAX;
	int32_t x610 = INT32_MAX;
	int16_t x611 = -1;
	static uint32_t x612 = 2205330U;
	uint32_t t71 = 7303U;

    t71 = ((x609!=x610)%(x611/x612));

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x613 = INT64_MIN;
	volatile int8_t x614 = INT8_MIN;
	static int16_t x615 = -1;
	uint32_t x616 = 17852550U;
	volatile uint32_t t72 = 1U;

    t72 = ((x613!=x614)%(x615/x616));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x625 = INT32_MAX;
	int8_t x626 = INT8_MIN;
	uint64_t x627 = 252382949LLU;
	uint16_t x628 = UINT16_MAX;
	uint64_t t73 = 3268134481LLU;

    t73 = ((x625!=x626)%(x627/x628));

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x629 = 8U;
	int8_t x630 = INT8_MIN;
	volatile uint32_t x632 = UINT32_MAX;
	volatile uint64_t t74 = 173842726976LLU;

    t74 = ((x629!=x630)%(x631/x632));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x641 = 14796718816LLU;
	uint16_t x643 = 2131U;
	uint8_t x644 = 96U;
	int32_t t75 = 1730729;

    t75 = ((x641!=x642)%(x643/x644));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x654 = -1;
	int32_t x655 = INT32_MIN;
	static volatile int64_t x656 = -24LL;
	volatile int64_t t76 = -3LL;

    t76 = ((x653!=x654)%(x655/x656));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x657 = UINT64_MAX;
	int64_t x658 = INT64_MAX;
	int8_t x659 = INT8_MIN;
	static volatile int64_t x660 = -1LL;
	volatile int64_t t77 = -1133LL;

    t77 = ((x657!=x658)%(x659/x660));

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x665 = -1;
	int16_t x666 = INT16_MIN;
	int64_t x667 = -542011209LL;
	volatile int16_t x668 = INT16_MAX;
	int64_t t78 = 1322534763035398LL;

    t78 = ((x665!=x666)%(x667/x668));

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x669 = -1;
	volatile uint64_t x671 = 1840LLU;
	int8_t x672 = INT8_MAX;
	static volatile uint64_t t79 = 75592028002324LLU;

    t79 = ((x669!=x670)%(x671/x672));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x673 = 7U;
	int16_t x675 = INT16_MAX;
	int8_t x676 = INT8_MIN;
	volatile int32_t t80 = 28426;

    t80 = ((x673!=x674)%(x675/x676));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x685 = INT16_MIN;
	int32_t x686 = INT32_MIN;
	uint64_t x687 = 6376041223891980833LLU;
	static int8_t x688 = INT8_MAX;
	volatile uint64_t t81 = 4884073554446193089LLU;

    t81 = ((x685!=x686)%(x687/x688));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x693 = 1728LL;
	static int32_t x694 = 219651;
	int64_t x695 = 5366743048LL;
	uint16_t x696 = UINT16_MAX;

    t82 = ((x693!=x694)%(x695/x696));

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = INT64_MAX;
	int16_t x712 = -1;
	static volatile int32_t t83 = -6593377;

    t83 = ((x709!=x710)%(x711/x712));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x714 = 1687062467601929140LLU;
	uint32_t x716 = 3947U;
	uint32_t t84 = 619268U;

    t84 = ((x713!=x714)%(x715/x716));

    if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x725 = -18290;
	int16_t x726 = 1;
	uint64_t x727 = 117083207564LLU;
	static uint32_t x728 = UINT32_MAX;
	volatile uint64_t t85 = 80907294093LLU;

    t85 = ((x725!=x726)%(x727/x728));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x730 = 57215029211041LLU;
	uint64_t x731 = UINT64_MAX;
	int64_t x732 = 116384509LL;

    t86 = ((x729!=x730)%(x731/x732));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x733 = -109264LL;
	int8_t x734 = 0;
	int8_t x735 = INT8_MAX;
	volatile int32_t x736 = -1;

    t87 = ((x733!=x734)%(x735/x736));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x745 = UINT32_MAX;
	int32_t x746 = -1;

    t88 = ((x745!=x746)%(x747/x748));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x770 = UINT16_MAX;
	static uint64_t x771 = 20458576793364314LLU;
	static uint32_t x772 = 14U;
	volatile uint64_t t89 = 1583874249619753102LLU;

    t89 = ((x769!=x770)%(x771/x772));

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x781 = 101257664216727018LLU;
	int16_t x782 = INT16_MAX;
	static volatile int32_t x784 = 18;
	int32_t t90 = -1792;

    t90 = ((x781!=x782)%(x783/x784));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x785 = 766955313LL;
	int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	uint64_t x788 = 145209929888303LLU;

    t91 = ((x785!=x786)%(x787/x788));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x802 = -59;
	volatile int32_t x803 = INT32_MAX;
	int8_t x804 = 2;
	volatile int32_t t92 = 14;

    t92 = ((x801!=x802)%(x803/x804));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x805 = -11653889;
	int16_t x806 = -6;
	volatile int64_t t93 = 0LL;

    t93 = ((x805!=x806)%(x807/x808));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x818 = -1;
	int8_t x820 = INT8_MIN;

    t94 = ((x817!=x818)%(x819/x820));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x821 = INT64_MIN;
	int8_t x822 = INT8_MIN;
	static volatile uint32_t x823 = 296347U;
	uint8_t x824 = UINT8_MAX;
	volatile uint32_t t95 = 1649U;

    t95 = ((x821!=x822)%(x823/x824));

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x833 = INT64_MAX;
	volatile uint32_t x834 = 12000343U;
	uint8_t x836 = UINT8_MAX;
	int32_t t96 = -119;

    t96 = ((x833!=x834)%(x835/x836));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x841 = UINT16_MAX;
	uint16_t x842 = 32695U;
	int16_t x843 = INT16_MIN;
	int32_t t97 = -82608;

    t97 = ((x841!=x842)%(x843/x844));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x893 = INT64_MAX;
	uint8_t x894 = UINT8_MAX;
	static int32_t x895 = -8057;
	static int8_t x896 = 1;
	int32_t t98 = -94799;

    t98 = ((x893!=x894)%(x895/x896));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x897 = -59;
	uint64_t x898 = 64065947LLU;
	uint32_t x899 = UINT32_MAX;

    t99 = ((x897!=x898)%(x899/x900));

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x925 = 124U;
	int32_t x926 = INT32_MAX;
	volatile int32_t x927 = INT32_MIN;
	uint32_t x928 = 668641196U;
	uint32_t t100 = 169U;

    t100 = ((x925!=x926)%(x927/x928));

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x929 = INT32_MIN;
	int64_t x930 = 27LL;
	static int8_t x931 = INT8_MIN;
	static volatile uint8_t x932 = 2U;
	volatile int32_t t101 = -1587296;

    t101 = ((x929!=x930)%(x931/x932));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x941 = 10684688975LL;
	int16_t x942 = INT16_MAX;
	volatile int8_t x944 = -1;
	volatile int32_t t102 = -92130231;

    t102 = ((x941!=x942)%(x943/x944));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x954 = INT8_MIN;
	int64_t x955 = -1LL;
	uint64_t x956 = 199LLU;
	volatile uint64_t t103 = 71LLU;

    t103 = ((x953!=x954)%(x955/x956));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x967 = 48281LLU;
	int8_t x968 = 1;
	uint64_t t104 = 3286LLU;

    t104 = ((x965!=x966)%(x967/x968));

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x981 = -1LL;
	int32_t x982 = INT32_MIN;
	int8_t x983 = INT8_MIN;
	int8_t x984 = INT8_MAX;
	volatile int32_t t105 = -50735;

    t105 = ((x981!=x982)%(x983/x984));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x1005 = 1;
	uint8_t x1006 = 36U;
	uint64_t x1007 = UINT64_MAX;
	uint8_t x1008 = UINT8_MAX;
	uint64_t t106 = 470491486712956LLU;

    t106 = ((x1005!=x1006)%(x1007/x1008));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x1010 = 63U;
	int32_t x1011 = INT32_MIN;
	int64_t x1012 = -1LL;
	volatile int64_t t107 = 2082910LL;

    t107 = ((x1009!=x1010)%(x1011/x1012));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x1017 = 201U;
	int16_t x1018 = 47;
	uint32_t x1019 = UINT32_MAX;
	static uint8_t x1020 = 40U;
	uint32_t t108 = 69U;

    t108 = ((x1017!=x1018)%(x1019/x1020));

    if (t108 != 1U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x1021 = INT64_MIN;
	static int64_t x1022 = -1LL;
	int64_t x1023 = INT64_MIN;
	int16_t x1024 = INT16_MIN;

    t109 = ((x1021!=x1022)%(x1023/x1024));

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x1025 = 0;
	int16_t x1026 = -1;
	int8_t x1027 = INT8_MIN;
	volatile uint32_t x1028 = 9U;
	volatile uint32_t t110 = 3946473U;

    t110 = ((x1025!=x1026)%(x1027/x1028));

    if (t110 != 1U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x1029 = 5340U;
	volatile int64_t x1030 = -1LL;
	uint64_t x1032 = 20171LLU;

    t111 = ((x1029!=x1030)%(x1031/x1032));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x1037 = UINT8_MAX;
	int32_t x1038 = -428826891;
	static int64_t x1040 = 791LL;
	static int64_t t112 = -96776235775LL;

    t112 = ((x1037!=x1038)%(x1039/x1040));

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x1041 = INT8_MAX;
	int8_t x1042 = -1;
	int32_t x1043 = INT32_MIN;
	uint16_t x1044 = 2U;
	int32_t t113 = 7;

    t113 = ((x1041!=x1042)%(x1043/x1044));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x1046 = INT8_MIN;
	uint16_t x1047 = 2283U;
	int16_t x1048 = 1;
	volatile int32_t t114 = -257828;

    t114 = ((x1045!=x1046)%(x1047/x1048));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x1053 = INT64_MIN;
	volatile int16_t x1054 = INT16_MIN;
	uint64_t x1055 = 334241159960339957LLU;
	static uint32_t x1056 = UINT32_MAX;
	volatile uint64_t t115 = 1513095539573LLU;

    t115 = ((x1053!=x1054)%(x1055/x1056));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x1065 = 15424713LL;
	volatile uint16_t x1067 = UINT16_MAX;
	int32_t t116 = -124;

    t116 = ((x1065!=x1066)%(x1067/x1068));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x1073 = 293800875776LL;
	int8_t x1074 = INT8_MIN;
	static int64_t x1075 = 4138512909745LL;
	static int64_t x1076 = 682529LL;
	static int64_t t117 = -90762LL;

    t117 = ((x1073!=x1074)%(x1075/x1076));

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x1077 = INT16_MIN;
	int32_t x1079 = 1286;
	int8_t x1080 = 2;
	volatile int32_t t118 = -269996358;

    t118 = ((x1077!=x1078)%(x1079/x1080));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1093 = -1201LL;
	int64_t x1094 = 13613591755305LL;
	int16_t x1096 = 149;

    t119 = ((x1093!=x1094)%(x1095/x1096));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x1101 = 10U;
	uint8_t x1102 = 2U;
	int8_t x1103 = -1;
	volatile uint32_t x1104 = UINT32_MAX;
	uint32_t t120 = 27508U;

    t120 = ((x1101!=x1102)%(x1103/x1104));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x1109 = UINT32_MAX;
	int8_t x1110 = -2;
	static int8_t x1111 = 14;
	volatile int8_t x1112 = -1;

    t121 = ((x1109!=x1110)%(x1111/x1112));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1117 = 5986;
	static int8_t x1118 = INT8_MAX;
	int32_t x1119 = INT32_MIN;

    t122 = ((x1117!=x1118)%(x1119/x1120));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x1125 = INT32_MIN;
	static int16_t x1127 = INT16_MAX;
	static int8_t x1128 = -1;
	int32_t t123 = 5703;

    t123 = ((x1125!=x1126)%(x1127/x1128));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1133 = 1041U;
	int32_t x1134 = -15070;
	uint8_t x1135 = 28U;
	int8_t x1136 = -1;

    t124 = ((x1133!=x1134)%(x1135/x1136));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x1137 = UINT8_MAX;
	uint8_t x1138 = UINT8_MAX;
	int8_t x1139 = INT8_MIN;
	int16_t x1140 = 1;
	volatile int32_t t125 = 2974;

    t125 = ((x1137!=x1138)%(x1139/x1140));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1145 = 1;
	static uint64_t x1147 = 3780918LLU;
	static uint32_t x1148 = 6051U;
	uint64_t t126 = 0LLU;

    t126 = ((x1145!=x1146)%(x1147/x1148));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1149 = INT32_MIN;
	static volatile uint64_t x1150 = 7513LLU;
	volatile int64_t t127 = 2593840707703845497LL;

    t127 = ((x1149!=x1150)%(x1151/x1152));

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x1153 = -9471101LL;
	static uint8_t x1155 = 2U;
	static uint8_t x1156 = 1U;
	volatile int32_t t128 = 285427;

    t128 = ((x1153!=x1154)%(x1155/x1156));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1161 = INT8_MAX;
	int32_t x1162 = -1;
	int64_t x1163 = INT64_MIN;
	int64_t x1164 = INT64_MAX;
	static volatile int64_t t129 = -4540LL;

    t129 = ((x1161!=x1162)%(x1163/x1164));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x1166 = 6U;
	int8_t x1167 = INT8_MAX;
	int8_t x1168 = -3;
	static volatile int32_t t130 = 11009;

    t130 = ((x1165!=x1166)%(x1167/x1168));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1193 = INT32_MIN;
	volatile int32_t x1194 = INT32_MIN;
	uint32_t x1196 = 3U;
	volatile uint32_t t131 = 41905396U;

    t131 = ((x1193!=x1194)%(x1195/x1196));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x1197 = -1;
	uint8_t x1198 = 5U;
	volatile int64_t x1199 = -1901729331394226797LL;
	static int32_t x1200 = -1;
	static int64_t t132 = -201212002480LL;

    t132 = ((x1197!=x1198)%(x1199/x1200));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1202 = 1438831LLU;
	volatile uint64_t x1203 = 1436933286194LLU;
	uint64_t t133 = 5078LLU;

    t133 = ((x1201!=x1202)%(x1203/x1204));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1205 = 86LLU;
	volatile uint64_t x1206 = UINT64_MAX;
	volatile uint64_t x1208 = 260099LLU;
	volatile uint64_t t134 = 786183138596LLU;

    t134 = ((x1205!=x1206)%(x1207/x1208));

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1213 = -4;
	static int64_t x1214 = INT64_MAX;
	int32_t x1215 = INT32_MAX;
	volatile int8_t x1216 = -6;
	volatile int32_t t135 = -1679867;

    t135 = ((x1213!=x1214)%(x1215/x1216));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x1217 = INT16_MIN;
	uint8_t x1218 = 1U;
	int64_t x1219 = INT64_MAX;
	uint16_t x1220 = UINT16_MAX;

    t136 = ((x1217!=x1218)%(x1219/x1220));

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1222 = INT16_MAX;
	int16_t x1223 = INT16_MAX;
	uint8_t x1224 = UINT8_MAX;

    t137 = ((x1221!=x1222)%(x1223/x1224));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x1241 = 1;
	uint32_t x1242 = 4159U;
	int16_t x1244 = INT16_MIN;
	volatile int32_t t138 = 856143;

    t138 = ((x1241!=x1242)%(x1243/x1244));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x1249 = UINT32_MAX;
	static int64_t x1251 = INT64_MIN;
	uint32_t x1252 = 5195003U;
	int64_t t139 = -1170234249LL;

    t139 = ((x1249!=x1250)%(x1251/x1252));

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1254 = INT16_MIN;
	static int16_t x1255 = INT16_MAX;
	static volatile int64_t t140 = 0LL;

    t140 = ((x1253!=x1254)%(x1255/x1256));

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1269 = INT64_MAX;
	int16_t x1272 = INT16_MAX;

    t141 = ((x1269!=x1270)%(x1271/x1272));

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x1277 = UINT64_MAX;
	uint8_t x1279 = UINT8_MAX;
	static volatile uint8_t x1280 = 4U;

    t142 = ((x1277!=x1278)%(x1279/x1280));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x1281 = -1LL;
	volatile uint16_t x1282 = UINT16_MAX;
	static int64_t x1283 = INT64_MIN;
	uint16_t x1284 = 40U;
	int64_t t143 = -11LL;

    t143 = ((x1281!=x1282)%(x1283/x1284));

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1290 = -1;
	static int32_t x1292 = -1;
	static volatile int32_t t144 = 49;

    t144 = ((x1289!=x1290)%(x1291/x1292));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1301 = 95453226129LLU;
	int16_t x1302 = INT16_MIN;
	volatile int64_t x1303 = INT64_MAX;
	volatile uint32_t x1304 = UINT32_MAX;
	volatile int64_t t145 = 1LL;

    t145 = ((x1301!=x1302)%(x1303/x1304));

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x1313 = INT32_MIN;
	volatile int16_t x1314 = 2558;
	int16_t x1315 = INT16_MIN;
	static uint32_t t146 = 68896789U;

    t146 = ((x1313!=x1314)%(x1315/x1316));

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x1318 = 11729;
	int32_t x1319 = INT32_MIN;
	int64_t x1320 = 381665850LL;

    t147 = ((x1317!=x1318)%(x1319/x1320));

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint64_t x1321 = UINT64_MAX;
	int64_t x1322 = INT64_MIN;
	uint8_t x1323 = 22U;
	int8_t x1324 = -21;
	volatile int32_t t148 = -932016;

    t148 = ((x1321!=x1322)%(x1323/x1324));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1333 = -3745;
	int8_t x1336 = INT8_MAX;

    t149 = ((x1333!=x1334)%(x1335/x1336));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x1337 = -1LL;
	volatile uint32_t x1338 = 39561878U;
	uint64_t x1339 = 539019841498696LLU;
	static volatile int16_t x1340 = 11;
	static volatile uint64_t t150 = 65728683560012LLU;

    t150 = ((x1337!=x1338)%(x1339/x1340));

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x1341 = -1;
	static uint16_t x1342 = 4404U;
	int64_t x1343 = INT64_MIN;
	uint64_t x1344 = 188016858LLU;

    t151 = ((x1341!=x1342)%(x1343/x1344));

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1345 = 433U;
	volatile int64_t x1346 = -1LL;
	int64_t x1347 = INT64_MIN;
	int32_t x1348 = INT32_MAX;
	volatile int64_t t152 = 8427LL;

    t152 = ((x1345!=x1346)%(x1347/x1348));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x1365 = INT8_MAX;
	uint8_t x1366 = UINT8_MAX;
	volatile uint32_t t153 = 111322808U;

    t153 = ((x1365!=x1366)%(x1367/x1368));

    if (t153 != 1U) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x1369 = -2833398LL;
	int64_t x1370 = INT64_MAX;
	uint32_t x1371 = 1723U;
	int64_t x1372 = -1LL;
	volatile int64_t t154 = 1060LL;

    t154 = ((x1369!=x1370)%(x1371/x1372));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1373 = INT16_MAX;
	static volatile int64_t x1374 = -13568234LL;
	int16_t x1375 = INT16_MIN;
	volatile int8_t x1376 = INT8_MIN;
	int32_t t155 = 10;

    t155 = ((x1373!=x1374)%(x1375/x1376));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1377 = INT16_MAX;
	uint16_t x1379 = UINT16_MAX;
	uint32_t x1380 = 10012U;
	uint32_t t156 = 1832U;

    t156 = ((x1377!=x1378)%(x1379/x1380));

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1385 = -48;
	int32_t x1386 = INT32_MIN;
	uint64_t x1387 = 149454960126309351LLU;
	uint8_t x1388 = 12U;
	uint64_t t157 = 562128728673750LLU;

    t157 = ((x1385!=x1386)%(x1387/x1388));

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1389 = -1;
	int16_t x1390 = -1984;
	int64_t x1391 = INT64_MAX;
	int64_t t158 = -5083LL;

    t158 = ((x1389!=x1390)%(x1391/x1392));

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1393 = UINT8_MAX;
	static int8_t x1394 = INT8_MIN;
	uint16_t x1395 = 1977U;
	volatile int32_t t159 = -304810;

    t159 = ((x1393!=x1394)%(x1395/x1396));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t t160 = 57046348;

    t160 = ((x1397!=x1398)%(x1399/x1400));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1401 = 23375326231910LLU;
	uint64_t x1402 = 0LLU;
	int64_t x1403 = INT64_MIN;
	int32_t x1404 = INT32_MAX;
	int64_t t161 = 64388849536LL;

    t161 = ((x1401!=x1402)%(x1403/x1404));

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x1413 = 88U;
	static int8_t x1415 = -1;
	int64_t t162 = 933636412647031607LL;

    t162 = ((x1413!=x1414)%(x1415/x1416));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x1429 = 1801950355232522LLU;
	int16_t x1430 = INT16_MAX;
	static int32_t x1431 = -81849538;
	int32_t x1432 = -1;
	int32_t t163 = -29363;

    t163 = ((x1429!=x1430)%(x1431/x1432));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1433 = UINT64_MAX;
	static uint8_t x1434 = UINT8_MAX;
	uint16_t x1435 = UINT16_MAX;
	int16_t x1436 = INT16_MIN;
	static int32_t t164 = -763439980;

    t164 = ((x1433!=x1434)%(x1435/x1436));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x1437 = -1;
	static int32_t x1438 = 3642322;
	volatile int64_t x1439 = -26654LL;
	static int32_t x1440 = -1;

    t165 = ((x1437!=x1438)%(x1439/x1440));

    if (t165 != 1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x1441 = UINT64_MAX;
	uint32_t x1442 = 5U;
	int32_t x1443 = INT32_MIN;
	int32_t t166 = -3945;

    t166 = ((x1441!=x1442)%(x1443/x1444));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1445 = INT32_MAX;
	int16_t x1446 = INT16_MAX;
	volatile int8_t x1447 = INT8_MIN;
	static volatile int32_t t167 = 0;

    t167 = ((x1445!=x1446)%(x1447/x1448));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1457 = INT32_MAX;
	static int16_t x1460 = 17;
	static uint32_t t168 = 0U;

    t168 = ((x1457!=x1458)%(x1459/x1460));

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1466 = 6;
	static int32_t x1467 = -1;

    t169 = ((x1465!=x1466)%(x1467/x1468));

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1469 = 856LL;
	int8_t x1470 = INT8_MAX;
	uint64_t x1471 = UINT64_MAX;
	int16_t x1472 = -1;
	static volatile uint64_t t170 = 28276LLU;

    t170 = ((x1469!=x1470)%(x1471/x1472));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x1477 = 2U;
	static int16_t x1478 = -59;
	volatile int32_t x1480 = 1;
	volatile int32_t t171 = 17;

    t171 = ((x1477!=x1478)%(x1479/x1480));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1481 = -1;
	int64_t x1483 = INT64_MIN;
	static int64_t t172 = 1580133209LL;

    t172 = ((x1481!=x1482)%(x1483/x1484));

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1489 = 1917;
	uint64_t x1490 = 3LLU;
	volatile int8_t x1491 = INT8_MAX;
	int8_t x1492 = 39;
	volatile int32_t t173 = 282;

    t173 = ((x1489!=x1490)%(x1491/x1492));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1502 = 139170;
	int64_t x1503 = -35492378163452618LL;
	volatile int64_t t174 = 1116272207748711LL;

    t174 = ((x1501!=x1502)%(x1503/x1504));

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1505 = 1247022062U;
	uint64_t x1506 = 231LLU;
	int64_t x1507 = 3724900201357060LL;

    t175 = ((x1505!=x1506)%(x1507/x1508));

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1511 = 2257;
	volatile int16_t x1512 = 1098;
	volatile int32_t t176 = 38139;

    t176 = ((x1509!=x1510)%(x1511/x1512));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1517 = 0;
	uint16_t x1518 = UINT16_MAX;
	int32_t x1519 = INT32_MAX;
	int16_t x1520 = INT16_MIN;
	volatile int32_t t177 = -863040;

    t177 = ((x1517!=x1518)%(x1519/x1520));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1521 = INT16_MIN;
	int16_t x1522 = INT16_MIN;
	uint64_t x1523 = UINT64_MAX;
	int64_t x1524 = INT64_MAX;

    t178 = ((x1521!=x1522)%(x1523/x1524));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1525 = UINT64_MAX;
	int16_t x1526 = -1;
	static int64_t x1527 = -1622382387903047LL;
	static int32_t x1528 = INT32_MIN;
	int64_t t179 = 2433814128233574241LL;

    t179 = ((x1525!=x1526)%(x1527/x1528));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1538 = INT8_MIN;
	uint64_t x1540 = 640178880555884LLU;
	static uint64_t t180 = 561357125100199LLU;

    t180 = ((x1537!=x1538)%(x1539/x1540));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1546 = -1;
	int16_t x1547 = INT16_MIN;
	static volatile int8_t x1548 = INT8_MIN;
	volatile int32_t t181 = -1384293;

    t181 = ((x1545!=x1546)%(x1547/x1548));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x1550 = 1U;
	static int16_t x1551 = INT16_MAX;
	int16_t x1552 = INT16_MAX;

    t182 = ((x1549!=x1550)%(x1551/x1552));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1558 = 36U;
	int64_t x1559 = INT64_MAX;
	int16_t x1560 = INT16_MIN;
	volatile int64_t t183 = 2738497LL;

    t183 = ((x1557!=x1558)%(x1559/x1560));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1569 = 37;
	int8_t x1570 = INT8_MIN;
	int64_t x1572 = -1LL;
	int64_t t184 = 25851280163314419LL;

    t184 = ((x1569!=x1570)%(x1571/x1572));

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1573 = UINT64_MAX;
	uint8_t x1574 = 29U;
	int16_t x1575 = INT16_MIN;
	static int8_t x1576 = INT8_MAX;
	int32_t t185 = 30;

    t185 = ((x1573!=x1574)%(x1575/x1576));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1581 = INT8_MIN;
	int32_t t186 = -32837;

    t186 = ((x1581!=x1582)%(x1583/x1584));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1593 = INT32_MIN;
	int8_t x1594 = INT8_MIN;
	int16_t x1595 = -10225;
	static volatile uint8_t x1596 = UINT8_MAX;
	static int32_t t187 = 2045253;

    t187 = ((x1593!=x1594)%(x1595/x1596));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1601 = INT16_MIN;
	int64_t x1602 = INT64_MIN;
	int32_t x1603 = -1;
	uint64_t x1604 = UINT64_MAX;
	volatile uint64_t t188 = 51LLU;

    t188 = ((x1601!=x1602)%(x1603/x1604));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1613 = UINT32_MAX;
	int32_t x1614 = INT32_MAX;
	static uint8_t x1616 = 3U;
	volatile int32_t t189 = 1000904;

    t189 = ((x1613!=x1614)%(x1615/x1616));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1621 = 53932197134098LLU;
	static int16_t x1623 = INT16_MAX;
	int8_t x1624 = INT8_MAX;

    t190 = ((x1621!=x1622)%(x1623/x1624));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1629 = -12630963LL;
	int32_t x1630 = INT32_MAX;
	int64_t x1631 = 393915LL;
	uint8_t x1632 = UINT8_MAX;
	int64_t t191 = 98412909239LL;

    t191 = ((x1629!=x1630)%(x1631/x1632));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1633 = -3;
	volatile uint16_t x1634 = UINT16_MAX;
	static uint8_t x1635 = UINT8_MAX;
	static volatile int8_t x1636 = -22;

    t192 = ((x1633!=x1634)%(x1635/x1636));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1637 = INT16_MAX;
	int8_t x1638 = 2;
	int32_t x1639 = INT32_MAX;

    t193 = ((x1637!=x1638)%(x1639/x1640));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1641 = 0;
	int16_t x1642 = -15940;
	int8_t x1643 = INT8_MIN;
	volatile int64_t x1644 = -5LL;
	int64_t t194 = 14LL;

    t194 = ((x1641!=x1642)%(x1643/x1644));

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1645 = INT8_MIN;
	int16_t x1646 = INT16_MIN;
	int16_t x1648 = -1;
	static int64_t t195 = 69281263243297175LL;

    t195 = ((x1645!=x1646)%(x1647/x1648));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1649 = 532U;
	uint8_t x1650 = 25U;
	static volatile int16_t x1651 = INT16_MAX;
	volatile int32_t t196 = 1;

    t196 = ((x1649!=x1650)%(x1651/x1652));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1659 = 1981353184284251LL;
	static int32_t x1660 = -6210;
	int64_t t197 = -563762LL;

    t197 = ((x1657!=x1658)%(x1659/x1660));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1661 = UINT32_MAX;
	static uint32_t x1662 = 134464442U;
	static volatile int32_t x1663 = INT32_MAX;

    t198 = ((x1661!=x1662)%(x1663/x1664));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1669 = INT64_MIN;
	int32_t x1670 = INT32_MIN;
	int64_t x1671 = INT64_MIN;
	int64_t x1672 = 112496172733240LL;
	static int64_t t199 = -965307060370LL;

    t199 = ((x1669!=x1670)%(x1671/x1672));

    if (t199 != 1LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

