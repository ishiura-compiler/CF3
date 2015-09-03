#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int64_t x5 = INT64_MIN;
uint64_t t1 = 70577836274695LLU;
volatile uint32_t t2 = UINT32_MAX;
int16_t x14 = -6331;
int16_t x26 = INT16_MAX;
int64_t x32 = -7LL;
volatile int64_t x37 = INT64_MAX;
int8_t x42 = -7;
uint32_t t10 = 1U;
int8_t x45 = -1;
uint64_t x51 = 233981LLU;
uint32_t x64 = 26368924U;
volatile int64_t t14 = -276870174587796LL;
int16_t x72 = INT16_MIN;
int64_t x74 = -908659LL;
int64_t x75 = INT64_MAX;
uint64_t x79 = 567927204LLU;
volatile uint64_t t18 = 458415544309LLU;
int64_t x83 = INT64_MIN;
static int16_t x86 = -1;
int32_t x92 = 11832315;
int64_t x101 = INT64_MAX;
volatile uint64_t t24 = 250396851576LLU;
static int8_t x109 = INT8_MIN;
static uint16_t x122 = 679U;
int32_t x123 = INT32_MAX;
volatile int32_t t30 = 400488;
uint64_t x129 = 47839101077346LLU;
static uint64_t x141 = 58461097838816572LLU;
static volatile int8_t x142 = -21;
volatile uint64_t t34 = 39984644383137173LLU;
uint64_t t36 = 19025LLU;
int32_t x159 = INT32_MIN;
uint64_t t38 = 21216LLU;
uint8_t x173 = 26U;
int64_t x174 = 1013988833LL;
uint32_t x178 = 52U;
uint16_t x181 = UINT16_MAX;
volatile int64_t x183 = -33877907LL;
volatile uint32_t x190 = UINT32_MAX;
int32_t x192 = -1;
int64_t x209 = 140620377119447LL;
static volatile uint32_t x214 = 1004928U;
int64_t x218 = 84477LL;
volatile uint16_t x225 = UINT16_MAX;
static int16_t x231 = 89;
int64_t x234 = INT64_MIN;
int64_t x236 = -131LL;
static int16_t x237 = -1;
static int8_t x239 = -1;
int32_t x241 = INT32_MIN;
volatile int16_t x244 = -1;
uint64_t x245 = 6531566483096797LLU;
static int32_t x246 = INT32_MIN;
volatile int8_t x252 = 40;
int32_t x253 = 44837704;
int64_t x254 = 5302063124412890LL;
volatile int32_t x255 = INT32_MAX;
volatile int32_t x258 = INT32_MIN;
static int32_t x268 = 1045;
uint8_t x270 = 78U;
volatile int64_t t65 = -1372030LL;
volatile int16_t x274 = INT16_MIN;
uint8_t x276 = 45U;
int32_t t66 = -14;
volatile int64_t x284 = INT64_MIN;
int16_t x296 = 0;
uint8_t x299 = 1U;
static uint8_t x303 = 0U;
volatile uint32_t t73 = 48240823U;
int32_t x307 = INT32_MAX;
volatile int16_t x311 = INT16_MIN;
uint64_t x312 = 270574502508137LLU;
volatile int64_t x313 = INT64_MAX;
volatile uint32_t x316 = UINT32_MAX;
int64_t x322 = 6063183314379LL;
uint16_t x326 = UINT16_MAX;
int16_t x327 = INT16_MIN;
uint64_t x331 = 119242LLU;
int8_t x332 = INT8_MIN;
int8_t x339 = 0;
static uint16_t x341 = 3U;
int64_t x346 = INT64_MIN;
int32_t x351 = 483605;
int16_t x356 = 172;
int16_t x359 = 9679;
volatile int16_t x366 = 1312;
volatile int64_t x367 = INT64_MIN;
int64_t t88 = -1518289337LL;
int32_t x373 = 91802100;
uint16_t x374 = 31670U;
int64_t x375 = 47678491743815LL;
int8_t x386 = INT8_MIN;
int32_t t95 = 1;
static volatile int64_t t96 = -17337105461042471LL;
int64_t x405 = INT64_MIN;
uint64_t x406 = UINT64_MAX;
static int64_t x407 = 217302771225473LL;
volatile uint64_t t98 = 8934660019853LLU;
int32_t x411 = INT32_MIN;
volatile int64_t t99 = 53962265201707LL;


void f0(void) {
	int8_t x2 = 24;
	uint8_t x3 = 10U;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 1U;

	t0 = (x1^(x2/(x3^x4)));

	if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = -247947;
	int64_t x8 = INT64_MIN;

	t1 = (x5^(x6/(x7^x8)));

	if (t1 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	int8_t x10 = 9;
	int32_t x11 = INT32_MIN;
	uint32_t x12 = 696753U;

	t2 = (x9^(x10/(x11^x12)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	static volatile uint8_t x15 = 7U;
	uint8_t x16 = 1U;
	volatile int32_t t3 = -61909;

	t3 = (x13^(x14/(x15^x16)));

	if (t3 != 31713) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -4829148812217LL;
	int16_t x18 = INT16_MAX;
	volatile uint16_t x19 = 1U;
	static int64_t x20 = -17004267320710LL;
	volatile int64_t t4 = -118819368296LL;

	t4 = (x17^(x18/(x19^x20)));

	if (t4 != -4829148812217LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	int64_t x22 = INT64_MIN;
	uint8_t x23 = 34U;
	static uint8_t x24 = 0U;
	volatile int64_t t5 = -86973870208849LL;

	t5 = (x21^(x22/(x23^x24)));

	if (t5 != 271275648142787522LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	static int64_t t6 = -2300453884959086160LL;

	t6 = (x25^(x26/(x27^x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	static volatile uint8_t x30 = UINT8_MAX;
	static int64_t x31 = INT64_MIN;
	uint64_t t7 = UINT64_MAX;

	t7 = (x29^(x30/(x31^x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int16_t x34 = -311;
	volatile int16_t x35 = INT16_MAX;
	int8_t x36 = -1;
	int32_t t8 = INT32_MIN;

	t8 = (x33^(x34/(x35^x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = -1;
	uint64_t x40 = 400LLU;
	static uint64_t t9 = 9062043204LLU;

	t9 = (x37^(x38/(x39^x40)));

	if (t9 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = 1276822U;

	t10 = (x41^(x42/(x43^x44)));

	if (t10 != 65534U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = 116LL;
	int32_t x47 = -954772257;
	int8_t x48 = -1;
	volatile int64_t t11 = -27965635316887173LL;

	t11 = (x45^(x46/(x47^x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int32_t x50 = INT32_MIN;
	volatile int16_t x52 = INT16_MAX;
	static uint64_t t12 = 596163479210LLU;

	t12 = (x49^(x50/(x51^x52)));

	if (t12 != 18446672446438735029LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 105U;
	int8_t x55 = INT8_MAX;
	static int64_t x56 = INT64_MIN;
	int64_t t13 = -27619357306448LL;

	t13 = (x53^(x54/(x55^x56)));

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = -1LL;
	uint16_t x62 = UINT16_MAX;
	uint32_t x63 = 1U;

	t14 = (x61^(x62/(x63^x64)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 7087LLU;
	uint8_t x66 = 1U;
	volatile int8_t x67 = INT8_MIN;
	int32_t x68 = -1;
	volatile uint64_t t15 = 318182471227459LLU;

	t15 = (x65^(x66/(x67^x68)));

	if (t15 != 7087LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 7912U;
	static int8_t x70 = -1;
	static uint16_t x71 = UINT16_MAX;
	static int32_t t16 = 1021506;

	t16 = (x69^(x70/(x71^x72)));

	if (t16 != 7912) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 39;
	static volatile uint8_t x76 = UINT8_MAX;
	volatile int64_t t17 = -453022299482375112LL;

	t17 = (x73^(x74/(x75^x76)));

	if (t17 != 39LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x77 = 293716362284LL;
	int32_t x78 = INT32_MIN;
	int32_t x80 = -1;

	t18 = (x77^(x78/(x79^x80)));

	if (t18 != 293716362284LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x81 = UINT64_MAX;
	int16_t x82 = 0;
	int32_t x84 = -30923;
	uint64_t t19 = UINT64_MAX;

	t19 = (x81^(x82/(x83^x84)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = 5U;
	uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MIN;
	volatile int64_t t20 = -25LL;

	t20 = (x85^(x86/(x87^x88)));

	if (t20 != 5LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = INT16_MIN;
	uint16_t x91 = 2693U;
	int32_t t21 = -380744;

	t21 = (x89^(x90/(x91^x92)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MAX;
	int32_t x94 = 103;
	int64_t x95 = 496LL;
	int64_t x96 = INT64_MAX;
	int64_t t22 = -881LL;

	t22 = (x93^(x94/(x95^x96)));

	if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = UINT64_MAX;
	int16_t x98 = INT16_MAX;
	volatile int8_t x99 = INT8_MIN;
	uint16_t x100 = 28U;
	volatile uint64_t t23 = 8764534292667263LLU;

	t23 = (x97^(x98/(x99^x100)));

	if (t23 != 326LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = -31869470004298751LL;
	static volatile int16_t x103 = INT16_MAX;
	uint64_t x104 = UINT64_MAX;

	t24 = (x101^(x102/(x103^x104)));

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x105 = INT16_MIN;
	int32_t x106 = INT32_MIN;
	int16_t x107 = -1;
	int16_t x108 = INT16_MIN;
	int32_t t25 = -27;

	t25 = (x105^(x106/(x107^x108)));

	if (t25 != 98302) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = 153;
	volatile uint32_t x111 = 1394U;
	static volatile uint8_t x112 = 30U;
	volatile uint32_t t26 = 128386U;

	t26 = (x109^(x110/(x111^x112)));

	if (t26 != 4294967168U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MAX;
	int32_t x115 = -1;
	uint32_t x116 = 8U;
	uint32_t t27 = 4441U;

	t27 = (x113^(x114/(x115^x116)));

	if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MIN;
	static uint32_t x119 = 5U;
	int16_t x120 = INT16_MIN;
	static uint32_t t28 = 410U;

	t28 = (x117^(x118/(x119^x120)));

	if (t28 != 4294967168U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = -1;
	int16_t x124 = -11;
	volatile int32_t t29 = -2;

	t29 = (x121^(x122/(x123^x124)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	uint16_t x126 = UINT16_MAX;
	volatile uint16_t x127 = 22U;
	static int32_t x128 = INT32_MIN;

	t30 = (x125^(x126/(x127^x128)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = -1;
	int64_t x131 = -370159746363LL;
	volatile uint64_t x132 = UINT64_MAX;
	volatile uint64_t t31 = 838965135527790141LLU;

	t31 = (x129^(x130/(x131^x132)));

	if (t31 != 47839129906519LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	int16_t x135 = -198;
	static int16_t x136 = 7;
	volatile int64_t t32 = -1LL;

	t32 = (x133^(x134/(x135^x136)));

	if (t32 != -47299342435188569LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x143 = INT32_MIN;
	static int32_t x144 = -1;
	volatile uint64_t t33 = 4914092366142LLU;

	t33 = (x141^(x142/(x143^x144)));

	if (t33 != 58461097838816572LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = -111164;
	static volatile uint8_t x146 = UINT8_MAX;
	uint64_t x147 = 21376116316404LLU;
	int32_t x148 = INT32_MAX;

	t34 = (x145^(x146/(x147^x148)));

	if (t34 != 18446744073709440452LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = UINT32_MAX;
	static int64_t x150 = INT64_MAX;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	volatile int64_t t35 = 89LL;

	t35 = (x149^(x150/(x151^x152)));

	if (t35 != 4294967294LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x153 = 1526089498118642LLU;
	static uint32_t x154 = 9U;
	int64_t x155 = INT64_MIN;
	volatile int8_t x156 = INT8_MIN;

	t36 = (x153^(x154/(x155^x156)));

	if (t36 != 1526089498118642LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x157 = 991U;
	int16_t x158 = INT16_MIN;
	int32_t x160 = INT32_MAX;
	static volatile uint32_t t37 = 926844U;

	t37 = (x157^(x158/(x159^x160)));

	if (t37 != 33759U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -26648;
	int16_t x162 = 483;
	int8_t x163 = -25;
	uint64_t x164 = 9259LLU;

	t38 = (x161^(x162/(x163^x164)));

	if (t38 != 18446744073709524968LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 1U;
	uint8_t x166 = 2U;
	volatile uint8_t x167 = 2U;
	volatile int16_t x168 = INT16_MIN;
	uint32_t t39 = 47022U;

	t39 = (x165^(x166/(x167^x168)));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MAX;
	static volatile int16_t x170 = -7;
	int16_t x171 = INT16_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t40 = 17224;

	t40 = (x169^(x170/(x171^x172)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x175 = 32U;
	int64_t x176 = -7976696511LL;
	static volatile int64_t t41 = -42320873160LL;

	t41 = (x173^(x174/(x175^x176)));

	if (t41 != 26LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x177 = 82107477404199LLU;
	static uint64_t x179 = 62660LLU;
	static volatile int8_t x180 = INT8_MAX;
	volatile uint64_t t42 = 4956364450050677LLU;

	t42 = (x177^(x178/(x179^x180)));

	if (t42 != 82107477404199LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x182 = UINT16_MAX;
	int16_t x184 = -1;
	int64_t t43 = 1262323783668291LL;

	t43 = (x181^(x182/(x183^x184)));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MAX;
	int32_t x187 = -1;
	int64_t x188 = INT64_MIN;
	static int64_t t44 = 545721545663964LL;

	t44 = (x185^(x186/(x187^x188)));

	if (t44 != 32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -1LL;
	static int32_t x191 = INT32_MIN;
	int64_t t45 = 1065941846252679527LL;

	t45 = (x189^(x190/(x191^x192)));

	if (t45 != -3LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MIN;
	static uint64_t x195 = 279225LLU;
	static int16_t x196 = 1465;
	volatile uint64_t t46 = 24141428890643545LLU;

	t46 = (x193^(x194/(x195^x196)));

	if (t46 != 9223437842876728253LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	int32_t x200 = -1;
	volatile int32_t t47 = -1;

	t47 = (x197^(x198/(x199^x200)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MIN;
	static int16_t x203 = INT16_MAX;
	static int16_t x204 = -1;
	int64_t t48 = -290104353728LL;

	t48 = (x201^(x202/(x203^x204)));

	if (t48 != 281479271677951LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x205 = -1LL;
	volatile uint64_t x206 = 1LLU;
	volatile int16_t x207 = INT16_MAX;
	int32_t x208 = 3;
	uint64_t t49 = UINT64_MAX;

	t49 = (x205^(x206/(x207^x208)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x210 = 6U;
	static uint32_t x211 = UINT32_MAX;
	uint16_t x212 = UINT16_MAX;
	int64_t t50 = 4220726723218232LL;

	t50 = (x209^(x210/(x211^x212)));

	if (t50 != 140620377119447LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 5U;
	volatile int8_t x215 = -2;
	static int32_t x216 = INT32_MIN;
	volatile uint32_t t51 = 121788799U;

	t51 = (x213^(x214/(x215^x216)));

	if (t51 != 5U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x217 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;
	static volatile uint16_t x220 = 2U;
	static volatile int64_t t52 = 157315LL;

	t52 = (x217^(x218/(x219^x220)));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 1U;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 2756U;
	int32_t x224 = 6411203;
	uint32_t t53 = 981954969U;

	t53 = (x221^(x222/(x223^x224)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x226 = UINT64_MAX;
	volatile uint16_t x227 = 5U;
	static int32_t x228 = 5654;
	volatile uint64_t t54 = 339098736367676LLU;

	t54 = (x225^(x226/(x227^x228)));

	if (t54 != 3264332697544675LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 1938889463005658731LLU;
	volatile int32_t x230 = -637064;
	int64_t x232 = INT64_MIN;
	static uint64_t t55 = 1972LLU;

	t55 = (x229^(x230/(x231^x232)));

	if (t55 != 1938889463005658731LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 54382065391LLU;
	int8_t x235 = 15;
	volatile uint64_t t56 = 40167073028393LLU;

	t56 = (x233^(x234/(x235^x236)));

	if (t56 != 64953343955480249LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x238 = -1;
	uint32_t x240 = 1433347709U;
	uint32_t t57 = 133985U;

	t57 = (x237^(x238/(x239^x240)));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x242 = INT64_MIN;
	int32_t x243 = INT32_MAX;
	volatile int64_t t58 = 0LL;

	t58 = (x241^(x242/(x243^x244)));

	if (t58 != -6442450944LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x247 = INT32_MIN;
	uint32_t x248 = UINT32_MAX;
	static uint64_t t59 = 63930LLU;

	t59 = (x245^(x246/(x247^x248)));

	if (t59 != 6531566483096796LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = 12493637LL;
	static int32_t x250 = -1059834759;
	int64_t x251 = INT64_MIN;
	int64_t t60 = -243261371009LL;

	t60 = (x249^(x250/(x251^x252)));

	if (t60 != 12493637LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x256 = INT32_MIN;
	volatile int64_t t61 = 466327668981289747LL;

	t61 = (x253^(x254/(x255^x256)));

	if (t61 != -5302063168180882LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	volatile int64_t x259 = 5467670116LL;
	int16_t x260 = INT16_MAX;
	static int64_t t62 = -3130548LL;

	t62 = (x257^(x258/(x259^x260)));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = 0;
	int64_t x262 = INT64_MIN;
	int8_t x263 = -1;
	int32_t x264 = INT32_MIN;
	static int64_t t63 = 630193128LL;

	t63 = (x261^(x262/(x263^x264)));

	if (t63 != -4294967298LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x265 = -1LL;
	int16_t x266 = -1;
	int32_t x267 = INT32_MIN;
	static volatile int64_t t64 = -1103580743298246587LL;

	t64 = (x265^(x266/(x267^x268)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x271 = INT64_MAX;
	volatile int8_t x272 = INT8_MIN;

	t65 = (x269^(x270/(x271^x272)));

	if (t65 != 255LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = 0;
	volatile uint16_t x275 = UINT16_MAX;

	t66 = (x273^(x274/(x275^x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = -45;
	int64_t x278 = INT64_MAX;
	volatile uint64_t x279 = 18866146LLU;
	int16_t x280 = -1;
	static uint64_t t67 = 3398028594344815800LLU;

	t67 = (x277^(x278/(x279^x280)));

	if (t67 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MAX;
	int16_t x282 = -7;
	int16_t x283 = INT16_MIN;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x281^(x282/(x283^x284)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 51;
	int8_t x286 = INT8_MIN;
	volatile uint8_t x287 = 70U;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -247015;

	t69 = (x285^(x286/(x287^x288)));

	if (t69 != 49) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	static int16_t x290 = -1;
	volatile int32_t x291 = INT32_MIN;
	uint32_t x292 = 76U;
	uint32_t t70 = 1U;

	t70 = (x289^(x290/(x291^x292)));

	if (t70 != 4294967169U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = -1LL;
	volatile uint8_t x294 = 43U;
	volatile uint8_t x295 = 51U;
	int64_t t71 = 16985631304697045LL;

	t71 = (x293^(x294/(x295^x296)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MAX;
	volatile uint32_t x298 = UINT32_MAX;
	int8_t x300 = INT8_MIN;
	static int64_t t72 = 13488187332LL;

	t72 = (x297^(x298/(x299^x300)));

	if (t72 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x301 = 6835U;
	int32_t x302 = INT32_MIN;
	int16_t x304 = INT16_MIN;

	t73 = (x301^(x302/(x303^x304)));

	if (t73 != 72371U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 37U;
	volatile int16_t x306 = 0;
	static uint16_t x308 = 1U;
	static volatile int32_t t74 = -927;

	t74 = (x305^(x306/(x307^x308)));

	if (t74 != 37) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MIN;
	static volatile uint8_t x310 = UINT8_MAX;
	uint64_t t75 = 1868312158LLU;

	t75 = (x309^(x310/(x311^x312)));

	if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x314 = UINT8_MAX;
	int64_t x315 = -1LL;
	int64_t t76 = INT64_MAX;

	t76 = (x313^(x314/(x315^x316)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	int32_t x318 = INT32_MIN;
	static int8_t x319 = -1;
	int16_t x320 = INT16_MIN;
	volatile int64_t t77 = -1756697LL;

	t77 = (x317^(x318/(x319^x320)));

	if (t77 != 9223372036854710270LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = -1;
	int32_t x323 = 1736996;
	static volatile int32_t x324 = INT32_MAX;
	volatile int64_t t78 = -120LL;

	t78 = (x321^(x322/(x323^x324)));

	if (t78 != -2826LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 1258964564LLU;
	uint32_t x328 = 41355367U;
	uint64_t t79 = 10950566238LLU;

	t79 = (x325^(x326/(x327^x328)));

	if (t79 != 1258964564LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 98LLU;
	int16_t x330 = INT16_MIN;
	volatile uint64_t t80 = 4882063351719734LLU;

	t80 = (x329^(x330/(x331^x332)));

	if (t80 != 99LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1LL;
	int64_t x334 = -1083021456LL;
	volatile uint64_t x335 = UINT64_MAX;
	static int64_t x336 = 325397956882LL;
	uint64_t t81 = 10490337568968LLU;

	t81 = (x333^(x334/(x335^x336)));

	if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = -1;
	uint32_t x338 = UINT32_MAX;
	int64_t x340 = -954822915LL;
	volatile int64_t t82 = -8383667435551LL;

	t82 = (x337^(x338/(x339^x340)));

	if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x342 = INT64_MIN;
	uint16_t x343 = 84U;
	static int16_t x344 = INT16_MAX;
	volatile int64_t t83 = -941690105LL;

	t83 = (x341^(x342/(x343^x344)));

	if (t83 != -282207020067156LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x345 = 99945;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = 1113;
	volatile int64_t t84 = -515264244006LL;

	t84 = (x345^(x346/(x347^x348)));

	if (t84 != 4295069403LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x349 = INT16_MAX;
	static int32_t x350 = -129;
	int8_t x352 = -1;
	int32_t t85 = -592760;

	t85 = (x349^(x350/(x351^x352)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x353 = INT8_MAX;
	uint32_t x354 = UINT32_MAX;
	int16_t x355 = 10;
	volatile uint32_t t86 = 150U;

	t86 = (x353^(x354/(x355^x356)));

	if (t86 != 25873391U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 15U;
	static volatile uint32_t x358 = 6487U;
	volatile int64_t x360 = INT64_MAX;
	volatile int64_t t87 = -7944792LL;

	t87 = (x357^(x358/(x359^x360)));

	if (t87 != 15LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int16_t x368 = INT16_MIN;

	t88 = (x365^(x366/(x367^x368)));

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = -1;
	static int8_t x371 = -1;
	uint16_t x372 = 0U;
	static volatile int32_t t89 = 279;

	t89 = (x369^(x370/(x371^x372)));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x376 = INT8_MIN;
	volatile int64_t t90 = -130801285LL;

	t90 = (x373^(x374/(x375^x376)));

	if (t90 != 91802100LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = UINT32_MAX;
	static int32_t x378 = INT32_MIN;
	int32_t x379 = -1442;
	int64_t x380 = -1LL;
	volatile int64_t t91 = 86085075672LL;

	t91 = (x377^(x378/(x379^x380)));

	if (t91 != -4293477024LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = 5095U;
	uint8_t x382 = UINT8_MAX;
	uint8_t x383 = 10U;
	uint32_t x384 = 11680U;
	volatile uint32_t t92 = 10855U;

	t92 = (x381^(x382/(x383^x384)));

	if (t92 != 5095U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x385 = 681882LLU;
	static volatile int16_t x387 = -221;
	volatile uint64_t x388 = 4448771962LLU;
	uint64_t t93 = 1397LLU;

	t93 = (x385^(x386/(x387^x388)));

	if (t93 != 681883LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	static uint16_t x390 = UINT16_MAX;
	static volatile int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	static volatile uint64_t t94 = 10024290427451512LLU;

	t94 = (x389^(x390/(x391^x392)));

	if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = 550U;
	uint8_t x395 = 1U;
	volatile int8_t x396 = -1;

	t95 = (x393^(x394/(x395^x396)));

	if (t95 != 365) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x397 = UINT16_MAX;
	volatile int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;

	t96 = (x397^(x398/(x399^x400)));

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = -445;
	static uint8_t x403 = UINT8_MAX;
	static int8_t x404 = 0;
	static volatile int32_t t97 = 94;

	t97 = (x401^(x402/(x403^x404)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x408 = UINT8_MAX;

	t98 = (x405^(x406/(x407^x408)));

	if (t98 != 9223372036854860697LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x409 = 544U;
	int64_t x410 = -1LL;
	volatile uint32_t x412 = UINT32_MAX;

	t99 = (x409^(x410/(x411^x412)));

	if (t99 != 544LL) { NG(); } else { ; }
	
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

