#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
uint32_t t0 = 1272010660U;
uint8_t x8 = 15U;
uint64_t t4 = 52230507989103LLU;
static volatile int64_t x21 = -62326LL;
int16_t x31 = INT16_MIN;
static volatile int32_t t7 = 0;
uint8_t x40 = 1U;
volatile uint64_t t9 = 913307965012274LLU;
static int16_t x41 = INT16_MIN;
int32_t x43 = INT32_MIN;
uint8_t x44 = UINT8_MAX;
volatile int16_t x48 = -4;
uint64_t x51 = 161298578355350LLU;
uint64_t t12 = 6817572LLU;
int64_t t13 = 2LL;
int64_t t14 = -1534245781LL;
volatile uint32_t t16 = 632927U;
static uint64_t x69 = 42036548905882497LLU;
volatile int8_t x73 = INT8_MIN;
uint8_t x76 = UINT8_MAX;
int64_t x83 = 27664207918649LL;
uint64_t t21 = 101131LLU;
volatile int8_t x95 = -1;
int8_t x100 = -1;
volatile uint32_t t24 = 4099455U;
int8_t x101 = -1;
uint16_t x102 = 3U;
uint16_t x103 = 32U;
uint64_t x105 = UINT64_MAX;
static volatile int64_t t28 = -800446841LL;
int32_t x117 = 7648019;
uint8_t x119 = UINT8_MAX;
int64_t x123 = -1LL;
int16_t x125 = -1;
int32_t x126 = -1;
int64_t x128 = -13238842171661696LL;
uint32_t x129 = 707820611U;
static uint16_t x133 = 3U;
uint32_t x144 = UINT32_MAX;
static volatile uint32_t x145 = 30168U;
int8_t x146 = INT8_MIN;
uint8_t x149 = UINT8_MAX;
int64_t x150 = INT64_MIN;
int8_t x152 = INT8_MIN;
int8_t x158 = INT8_MIN;
volatile uint64_t t39 = 4048LLU;
volatile uint32_t x168 = 8507135U;
volatile uint8_t x171 = 33U;
int32_t t42 = -451636;
volatile uint64_t x179 = 60572967074LLU;
static int16_t x180 = INT16_MIN;
volatile uint64_t t43 = 1928305331840902440LLU;
uint16_t x192 = UINT16_MAX;
volatile int64_t x200 = INT64_MIN;
int32_t x201 = -4181216;
uint64_t t50 = 178903LLU;
int16_t x212 = -2448;
static uint8_t x222 = 1U;
static int32_t t54 = INT32_MAX;
uint64_t x225 = 11LLU;
volatile int32_t x235 = INT32_MIN;
int32_t x239 = INT32_MIN;
int64_t x249 = -1LL;
static int64_t x252 = 49768415LL;
int64_t t61 = 1LL;
uint16_t x259 = UINT16_MAX;
volatile int64_t t64 = 384LL;
static int64_t x266 = -1LL;
uint16_t x267 = UINT16_MAX;
uint64_t t65 = 205LLU;
static int8_t x269 = -3;
uint64_t t68 = 48664200088207604LLU;
int64_t t69 = 646LL;
int16_t x293 = -1;
uint8_t x302 = 31U;
int32_t x305 = INT32_MIN;
int32_t x312 = INT32_MIN;
static int8_t x313 = -1;
int32_t t75 = 4209717;
static int8_t x328 = INT8_MIN;
volatile int8_t x330 = INT8_MAX;
volatile int64_t x341 = INT64_MIN;
static uint8_t x347 = 65U;
uint16_t x348 = 278U;
volatile uint64_t t83 = 76866935056091216LLU;
volatile int64_t t84 = -1752122012029LL;
uint32_t x354 = UINT32_MAX;
int8_t x356 = -3;
static int8_t x360 = INT8_MAX;
static int32_t x364 = -1;
volatile int16_t x369 = 46;
static volatile int64_t t89 = 1LL;
int64_t x379 = INT64_MIN;
static int8_t x382 = INT8_MAX;
uint16_t x383 = UINT16_MAX;
static int64_t x384 = -3LL;
static volatile uint16_t x389 = 3876U;
static volatile uint32_t x390 = 27893480U;
static uint8_t x391 = UINT8_MAX;
int8_t x393 = 7;
int64_t x396 = INT64_MIN;
volatile int64_t x407 = 1654936LL;
int16_t x412 = -1;


void f0(void) {
	uint32_t x1 = 8U;
	uint32_t x3 = 27854072U;
	static uint32_t x4 = UINT32_MAX;

	t0 = ((x1^x2)-(x3|x4));

	if (t0 != 120U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 938147103908313LLU;
	volatile int16_t x6 = INT16_MIN;
	static int8_t x7 = -30;
	uint64_t t1 = 167589218892LLU;

	t1 = ((x5^x6)-(x7|x8));

	if (t1 != 18445805926605627882LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = -1;
	int16_t x11 = 2268;
	int64_t x12 = INT64_MIN;
	static volatile int64_t t2 = 1513445208329063LL;

	t2 = ((x9^x10)-(x11|x12));

	if (t2 != 9223372036854773540LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = 0;
	int16_t x15 = 6910;
	int16_t x16 = INT16_MAX;
	static int32_t t3 = -204168;

	t3 = ((x13^x14)-(x15|x16));

	if (t3 != -65535) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static uint64_t x18 = UINT64_MAX;
	static uint32_t x19 = 538U;
	uint32_t x20 = 97U;

	t4 = ((x17^x18)-(x19|x20));

	if (t4 != 9223372036854775172LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	uint64_t x23 = 3198296410265926612LLU;
	int8_t x24 = INT8_MAX;
	volatile uint64_t t5 = 3225LLU;

	t5 = ((x21^x22)-(x23|x24));

	if (t5 != 15248447665591046283LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -50;
	static int16_t x26 = -1;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 22389;

	t6 = ((x25^x26)-(x27|x28));

	if (t6 != 50) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int32_t x30 = 11956021;
	static int8_t x32 = INT8_MAX;

	t7 = ((x29^x30)-(x31|x32));

	if (t7 != -11923381) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = 7;
	int32_t x35 = 340593;
	uint8_t x36 = 0U;
	int32_t t8 = 1047751;

	t8 = ((x33^x34)-(x35|x36));

	if (t8 != -340473) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 9764725;
	static int64_t x38 = 27671LL;
	static uint64_t x39 = 513103LLU;

	t9 = ((x37^x38)-(x39|x40));

	if (t9 != 9223955LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x42 = UINT16_MAX;
	int32_t t10 = 3934651;

	t10 = ((x41^x42)-(x43|x44));

	if (t10 != 2147450624) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -1;
	int8_t x46 = -1;
	uint32_t x47 = 4218U;
	volatile uint32_t t11 = 170828U;

	t11 = ((x45^x46)-(x47|x48));

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint64_t x50 = 2952271202530LLU;
	volatile uint64_t x52 = 18313077573LLU;

	t12 = ((x49^x50)-(x51|x52));

	if (t12 != 18446585709053411142LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	int16_t x54 = INT16_MAX;
	volatile int64_t x55 = -522LL;
	static volatile int32_t x56 = INT32_MIN;

	t13 = ((x53^x54)-(x55|x56));

	if (t13 != -32246LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -26;
	int64_t x58 = INT64_MAX;
	int8_t x59 = -1;
	int32_t x60 = 235381923;

	t14 = ((x57^x58)-(x59|x60));

	if (t14 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	int64_t x62 = INT64_MIN;
	uint16_t x63 = 49U;
	static volatile int8_t x64 = -1;
	volatile int64_t t15 = -126LL;

	t15 = ((x61^x62)-(x63|x64));

	if (t15 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 56262U;
	uint16_t x66 = 14240U;
	uint8_t x67 = UINT8_MAX;
	int32_t x68 = 158;

	t16 = ((x65^x66)-(x67|x68));

	if (t16 != 60263U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -99163926742LL;
	int16_t x71 = 1;
	volatile int8_t x72 = 10;
	volatile uint64_t t17 = 19182441817964796LLU;

	t17 = ((x69^x70)-(x71|x72));

	if (t17 != 18404707460670610592LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x74 = -1;
	int32_t x75 = INT32_MIN;
	int32_t t18 = 3;

	t18 = ((x73^x74)-(x75|x76));

	if (t18 != 2147483520) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 48042183259LLU;
	volatile int64_t x78 = 813933LL;
	int16_t x79 = -1;
	volatile int16_t x80 = INT16_MIN;
	uint64_t t19 = 133039923919074829LLU;

	t19 = ((x77^x78)-(x79|x80));

	if (t19 != 48041943351LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1068875053471LL;
	int8_t x82 = INT8_MAX;
	int16_t x84 = INT16_MIN;
	int64_t t20 = -9LL;

	t20 = ((x81^x82)-(x83|x84));

	if (t20 != -1068875034651LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -354;
	int8_t x86 = -1;
	static volatile uint8_t x87 = 1U;
	uint64_t x88 = 495LLU;

	t21 = ((x85^x86)-(x87|x88));

	if (t21 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int64_t x90 = INT64_MAX;
	uint32_t x91 = UINT32_MAX;
	static uint64_t x92 = UINT64_MAX;
	uint64_t t22 = 11037LLU;

	t22 = ((x89^x90)-(x91|x92));

	if (t22 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 6;
	int32_t x94 = 3194566;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t23 = 1254291181LLU;

	t23 = ((x93^x94)-(x95|x96));

	if (t23 != 3194561LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	volatile uint32_t x98 = 146887615U;
	static int32_t x99 = 0;

	t24 = ((x97^x98)-(x99|x100));

	if (t24 != 2000596033U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x104 = -4;
	int32_t t25 = -42;

	t25 = ((x101^x102)-(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	volatile int64_t x107 = INT64_MAX;
	static int32_t x108 = INT32_MAX;
	uint64_t t26 = 783406861695LLU;

	t26 = ((x105^x106)-(x107|x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -1;
	int64_t x110 = INT64_MAX;
	int32_t x111 = -1;
	static int64_t x112 = INT64_MIN;
	static volatile int64_t t27 = -35LL;

	t27 = ((x109^x110)-(x111|x112));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int64_t x114 = INT64_MIN;
	uint32_t x115 = 12399131U;
	int32_t x116 = -1;

	t28 = ((x113^x114)-(x115|x116));

	if (t28 != -4294967295LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = -418;
	static int32_t x120 = 41;
	int32_t t29 = -213876;

	t29 = ((x117^x118)-(x119|x120));

	if (t29 != -7648178) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int16_t x122 = 5638;
	static int8_t x124 = INT8_MAX;
	int64_t t30 = 941LL;

	t30 = ((x121^x122)-(x123|x124));

	if (t30 != -5638LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x127 = -3919;
	static volatile int64_t t31 = 7922961LL;

	t31 = ((x125^x126)-(x127|x128));

	if (t31 != 3407LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 1180U;
	volatile int16_t x131 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = 6873499319220284LLU;

	t32 = ((x129^x130)-(x131|x132));

	if (t32 != 707819744LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 3;
	int8_t x135 = 18;
	static volatile uint64_t x136 = 6109667LLU;
	static uint64_t t33 = 2276741408927168205LLU;

	t33 = ((x133^x134)-(x135|x136));

	if (t33 != 18446744073703441933LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -44;
	int64_t x138 = 100108881LL;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = UINT32_MAX;
	static int64_t t34 = 108LL;

	t34 = ((x137^x138)-(x139|x140));

	if (t34 != -4395076218LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 23995LLU;
	volatile int8_t x142 = INT8_MAX;
	volatile int32_t x143 = 1;
	static volatile uint64_t t35 = 3076310LLU;

	t35 = ((x141^x142)-(x143|x144));

	if (t35 != 18446744069414608325LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x147 = 14;
	static int64_t x148 = INT64_MAX;
	int64_t t36 = 6LL;

	t36 = ((x145^x146)-(x147|x148));

	if (t36 != -9223372032559838631LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = -1;
	int64_t t37 = -141086958357717282LL;

	t37 = ((x149^x150)-(x151|x152));

	if (t37 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	int64_t x154 = 672371469464205LL;
	uint64_t x155 = 394541166LLU;
	int8_t x156 = 2;
	static uint64_t t38 = 3605LLU;

	t38 = ((x153^x154)-(x155|x156));

	if (t38 != 9224044407929698847LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 0;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 10534LLU;

	t39 = ((x157^x158)-(x159|x160));

	if (t39 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = INT64_MIN;
	int16_t x166 = -348;
	static uint64_t x167 = 90857893LLU;
	static uint64_t t40 = 389325329788LLU;

	t40 = ((x165^x166)-(x167|x168));

	if (t40 != 9223372036755426981LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x169 = UINT16_MAX;
	uint64_t x170 = 233030919LLU;
	static int64_t x172 = INT64_MAX;
	volatile uint64_t t41 = 2956LLU;

	t41 = ((x169^x170)-(x171|x172));

	if (t41 != 9223372037087771385LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x173 = 0U;
	int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = 2U;
	int16_t x176 = INT16_MAX;

	t42 = ((x173^x174)-(x175|x176));

	if (t42 != -32895) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 1U;
	int16_t x178 = -1;

	t43 = ((x177^x178)-(x179|x180));

	if (t43 != 24412LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -63;
	volatile int64_t x182 = INT64_MAX;
	static uint32_t x183 = 28U;
	static volatile uint32_t x184 = 0U;
	int64_t t44 = -166691623LL;

	t44 = ((x181^x182)-(x183|x184));

	if (t44 != -9223372036854775774LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = 406077U;
	static uint16_t x186 = UINT16_MAX;
	volatile int64_t x187 = -1LL;
	int32_t x188 = INT32_MIN;
	volatile int64_t t45 = 3971688455244LL;

	t45 = ((x185^x186)-(x187|x188));

	if (t45 != 445891LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = 0;
	static int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	int32_t t46 = 15362;

	t46 = ((x189^x190)-(x191|x192));

	if (t46 != -65535) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 6851;
	uint16_t x194 = 11404U;
	uint8_t x195 = UINT8_MAX;
	volatile int16_t x196 = -1;
	static int32_t t47 = 14823;

	t47 = ((x193^x194)-(x195|x196));

	if (t47 != 13904) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = 208612;
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 94994760209468163LLU;
	static volatile uint64_t t48 = 299318741363LLU;

	t48 = ((x197^x198)-(x199|x200));

	if (t48 != 9128377276645090273LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x202 = 6U;
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = 121234LL;
	volatile int64_t t49 = -334131693745364400LL;

	t49 = ((x201^x202)-(x203|x204));

	if (t49 != -4171372LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = -1;
	uint8_t x206 = 3U;
	static int64_t x207 = INT64_MIN;
	uint64_t x208 = 110429105317022225LLU;

	t50 = ((x205^x206)-(x207|x208));

	if (t50 != 9112942931537753579LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = INT64_MIN;
	volatile int64_t x210 = INT64_MIN;
	int16_t x211 = -14392;
	volatile int64_t t51 = 5659400905564985LL;

	t51 = ((x209^x210)-(x211|x212));

	if (t51 != 2056LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	uint64_t t52 = 224247LLU;

	t52 = ((x213^x214)-(x215|x216));

	if (t52 != 32895LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	volatile int64_t x218 = INT64_MIN;
	static volatile int8_t x219 = INT8_MAX;
	volatile int8_t x220 = -1;
	int64_t t53 = 14380450937LL;

	t53 = ((x217^x218)-(x219|x220));

	if (t53 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MAX;
	int8_t x223 = -1;
	int32_t x224 = INT32_MIN;

	t54 = ((x221^x222)-(x223|x224));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = 55;
	int16_t x227 = 1;
	int8_t x228 = -16;
	volatile uint64_t t55 = 13103422727LLU;

	t55 = ((x225^x226)-(x227|x228));

	if (t55 != 75LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x229 = UINT16_MAX;
	volatile uint32_t x230 = 6U;
	static uint16_t x231 = 2U;
	volatile int16_t x232 = INT16_MIN;
	volatile uint32_t t56 = 1893U;

	t56 = ((x229^x230)-(x231|x232));

	if (t56 != 98295U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x233 = -1;
	int64_t x234 = -1LL;
	uint64_t x236 = 570665836355264LLU;
	volatile uint64_t t57 = 992470603458LLU;

	t57 = ((x233^x234)-(x235|x236));

	if (t57 != 25813312LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	static int8_t x238 = INT8_MIN;
	static int16_t x240 = -11248;
	volatile int32_t t58 = -925556;

	t58 = ((x237^x238)-(x239|x240));

	if (t58 != 43888) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	int8_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t59 = 14681642;

	t59 = ((x241^x242)-(x243|x244));

	if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = 397U;
	int8_t x247 = -1;
	volatile int64_t x248 = INT64_MIN;
	static volatile int64_t t60 = 17537LL;

	t60 = ((x245^x246)-(x247|x248));

	if (t60 != -9223372036854775410LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x250 = -13;
	int64_t x251 = INT64_MAX;

	t61 = ((x249^x250)-(x251|x252));

	if (t61 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x253 = -63;
	static int16_t x254 = 8788;
	int8_t x255 = 0;
	volatile int64_t x256 = -1LL;
	int64_t t62 = 5930445906375379LL;

	t62 = ((x253^x254)-(x255|x256));

	if (t62 != -8810LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MAX;
	uint32_t x260 = UINT32_MAX;
	uint32_t t63 = 43413405U;

	t63 = ((x257^x258)-(x259|x260));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	uint16_t x262 = 1311U;
	static int64_t x263 = INT64_MIN;
	static volatile int64_t x264 = 2539601272975905953LL;

	t64 = ((x261^x262)-(x263|x264));

	if (t64 != -2539601272975904642LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = UINT64_MAX;
	static uint32_t x268 = 4586249U;

	t65 = ((x265^x266)-(x267|x268));

	if (t65 != 18446744073704964097LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x270 = -1LL;
	static int32_t x271 = INT32_MIN;
	static volatile int8_t x272 = INT8_MAX;
	int64_t t66 = -366560LL;

	t66 = ((x269^x270)-(x271|x272));

	if (t66 != 2147483523LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = 0;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MAX;
	volatile uint32_t x280 = UINT32_MAX;
	uint32_t t67 = 324222750U;

	t67 = ((x277^x278)-(x279|x280));

	if (t67 != 256U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x281 = INT16_MAX;
	volatile int64_t x282 = INT64_MAX;
	static uint64_t x283 = 2076693153247359858LLU;
	int32_t x284 = INT32_MAX;

	t68 = ((x281^x282)-(x283|x284));

	if (t68 != 7146678881641005057LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x289 = -61436;
	static volatile int8_t x290 = INT8_MIN;
	volatile int64_t x291 = 2044199722LL;
	volatile uint16_t x292 = 1776U;

	t69 = ((x289^x290)-(x291|x292));

	if (t69 != -2044139638LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x294 = 1717241676932256LLU;
	volatile int8_t x295 = INT8_MIN;
	int8_t x296 = -1;
	volatile uint64_t t70 = 135006451475832LLU;

	t70 = ((x293^x294)-(x295|x296));

	if (t70 != 18445026832032619360LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 16519870457944LLU;
	int8_t x298 = -1;
	int16_t x299 = 0;
	volatile int64_t x300 = -1060862739425687880LL;
	volatile uint64_t t71 = 1536LLU;

	t71 = ((x297^x298)-(x299|x300));

	if (t71 != 1060846219555229935LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	volatile int64_t x303 = -246546528799333178LL;
	volatile int64_t x304 = -1541475292LL;
	int64_t t72 = 1589888090928634LL;

	t72 = ((x301^x302)-(x303|x304));

	if (t72 != -9223372035351114951LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x306 = INT64_MIN;
	volatile int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	int64_t t73 = -191914LL;

	t73 = ((x305^x306)-(x307|x308));

	if (t73 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -1;
	uint8_t x310 = 17U;
	int8_t x311 = INT8_MAX;
	static int32_t t74 = 2;

	t74 = ((x309^x310)-(x311|x312));

	if (t74 != 2147483503) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x314 = -23;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MAX;

	t75 = ((x313^x314)-(x315|x316));

	if (t75 != 2147483543) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -2448;
	static int32_t x318 = INT32_MIN;
	uint32_t x319 = 314092942U;
	static int8_t x320 = -22;
	volatile uint32_t t76 = 624835U;

	t76 = ((x317^x318)-(x319|x320));

	if (t76 != 2147481218U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 24U;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = 4363660701973LLU;
	static volatile int64_t x324 = -245LL;
	static volatile uint64_t t77 = 155708423121LLU;

	t77 = ((x321^x322)-(x323|x324));

	if (t77 != 2147483848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MAX;
	int32_t x326 = -1;
	uint8_t x327 = 81U;
	int32_t t78 = 381;

	t78 = ((x325^x326)-(x327|x328));

	if (t78 != -81) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = 0;
	static int32_t x331 = INT32_MIN;
	int8_t x332 = -1;
	static int32_t t79 = 464146951;

	t79 = ((x329^x330)-(x331|x332));

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x333 = 37U;
	int32_t x334 = INT32_MIN;
	volatile int16_t x335 = 86;
	uint32_t x336 = UINT32_MAX;
	volatile uint32_t t80 = 18484U;

	t80 = ((x333^x334)-(x335|x336));

	if (t80 != 2147483686U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x337 = 273;
	uint32_t x338 = 744U;
	static volatile uint8_t x339 = 9U;
	int64_t x340 = -108026461195727242LL;
	volatile int64_t t81 = -1LL;

	t81 = ((x337^x338)-(x339|x340));

	if (t81 != 108026461195728250LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x342 = INT64_MAX;
	uint32_t x343 = UINT32_MAX;
	static int16_t x344 = INT16_MIN;
	int64_t t82 = 1133022795495LL;

	t82 = ((x341^x342)-(x343|x344));

	if (t82 != -4294967296LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x345 = INT32_MAX;
	uint64_t x346 = UINT64_MAX;

	t83 = ((x345^x346)-(x347|x348));

	if (t83 != 18446744071562067625LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = 3U;
	int64_t x350 = -1LL;
	int64_t x351 = -8233LL;
	int16_t x352 = INT16_MIN;

	t84 = ((x349^x350)-(x351|x352));

	if (t84 != 8229LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x353 = -1LL;
	uint32_t x355 = UINT32_MAX;
	volatile int64_t t85 = 1517066LL;

	t85 = ((x353^x354)-(x355|x356));

	if (t85 != -8589934591LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x357 = INT64_MAX;
	volatile int32_t x358 = 30353681;
	uint32_t x359 = 921683460U;
	static volatile int64_t t86 = 1LL;

	t86 = ((x357^x358)-(x359|x360));

	if (t86 != 9223372035902738543LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	static volatile int8_t x362 = -57;
	volatile int32_t x363 = 13;
	int32_t t87 = -7;

	t87 = ((x361^x362)-(x363|x364));

	if (t87 != -65479) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MAX;
	static int8_t x366 = INT8_MIN;
	static uint16_t x367 = 8698U;
	volatile int32_t x368 = -1;
	static int64_t t88 = 71923LL;

	t88 = ((x365^x366)-(x367|x368));

	if (t88 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x370 = INT8_MAX;
	int32_t x371 = 1072396572;
	int64_t x372 = INT64_MAX;

	t89 = ((x369^x370)-(x371|x372));

	if (t89 != -9223372036854775726LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = INT32_MAX;
	uint8_t x374 = 5U;
	int16_t x375 = INT16_MAX;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t90 = 79304532;

	t90 = ((x373^x374)-(x375|x376));

	if (t90 != 2147483643) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x377 = 3484987U;
	uint64_t x378 = 1291LLU;
	uint64_t x380 = 898LLU;
	volatile uint64_t t91 = 180112289759174785LLU;

	t91 = ((x377^x378)-(x379|x380));

	if (t91 != 9223372036858258606LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MIN;
	int64_t t92 = 3852779473027526963LL;

	t92 = ((x381^x382)-(x383|x384));

	if (t92 != -32640LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x385 = 23U;
	volatile int32_t x386 = -1;
	volatile int16_t x387 = INT16_MIN;
	int32_t x388 = 713069;
	volatile uint32_t t93 = 2390404U;

	t93 = ((x385^x386)-(x387|x388));

	if (t93 != 7803U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x392 = INT32_MAX;
	uint32_t t94 = 58593U;

	t94 = ((x389^x390)-(x391|x392));

	if (t94 != 2175373773U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x394 = -1;
	int16_t x395 = INT16_MIN;
	static int64_t t95 = 2202914187933973LL;

	t95 = ((x393^x394)-(x395|x396));

	if (t95 != 32760LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MIN;
	int16_t x399 = -5;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t96 = -215957988;

	t96 = ((x397^x398)-(x399|x400));

	if (t96 != 2147450885) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = -1;
	int64_t x406 = -120483469391779LL;
	int16_t x408 = -6;
	static volatile int64_t t97 = 1LL;

	t97 = ((x405^x406)-(x407|x408));

	if (t97 != 120483469391784LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = 22;
	volatile uint64_t x410 = 170814093252LLU;
	uint8_t x411 = UINT8_MAX;
	volatile uint64_t t98 = 489638245LLU;

	t98 = ((x409^x410)-(x411|x412));

	if (t98 != 170814093267LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = INT16_MAX;
	int16_t x414 = 0;
	int8_t x415 = INT8_MIN;
	static uint64_t x416 = 94785294330026LLU;
	uint64_t t99 = 0LLU;

	t99 = ((x413^x414)-(x415|x416));

	if (t99 != 32853LLU) { NG(); } else { ; }
	
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

