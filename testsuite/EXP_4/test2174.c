#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = -1;
static int8_t x30 = -1;
int8_t x32 = -23;
int32_t x33 = -1723;
int32_t x34 = -1;
int8_t x42 = -1;
int8_t x50 = INT8_MIN;
int64_t t11 = 12723LL;
uint32_t t12 = 235U;
int16_t x62 = INT16_MIN;
static int64_t x74 = INT64_MIN;
uint32_t x76 = 23U;
static int8_t x77 = INT8_MAX;
volatile int64_t x79 = INT64_MAX;
uint32_t x86 = UINT32_MAX;
uint64_t x88 = UINT64_MAX;
int8_t x94 = INT8_MIN;
volatile int64_t t21 = -364313487010LL;
int16_t x105 = 316;
static int64_t t23 = -81216309425LL;
volatile uint64_t t24 = 1861837521576756498LLU;
static int16_t x115 = INT16_MIN;
uint64_t x130 = 7436569560LLU;
int16_t x131 = INT16_MAX;
volatile uint64_t t29 = 0LLU;
int16_t x144 = 7848;
volatile int32_t t30 = -29956079;
uint16_t x150 = UINT16_MAX;
static int16_t x172 = 3341;
uint64_t x173 = 93LLU;
volatile int64_t x175 = 857613116LL;
volatile int16_t x179 = INT16_MIN;
volatile int32_t x183 = INT32_MIN;
int64_t t37 = -2LL;
int8_t x186 = 1;
int16_t x191 = -328;
volatile uint32_t t40 = 4555U;
uint8_t x201 = UINT8_MAX;
uint16_t x203 = UINT16_MAX;
uint8_t x205 = 3U;
uint8_t x206 = UINT8_MAX;
int16_t x207 = INT16_MIN;
uint16_t x221 = UINT16_MAX;
int16_t x224 = INT16_MIN;
int8_t x226 = INT8_MIN;
static int32_t x228 = INT32_MAX;
int64_t x234 = 28962959177LL;
int32_t x238 = -1;
int8_t x248 = INT8_MAX;
volatile int64_t t50 = -2543930LL;
uint16_t x251 = UINT16_MAX;
volatile int16_t x265 = INT16_MIN;
static int16_t x274 = INT16_MIN;
int16_t x278 = -4;
int8_t x279 = INT8_MIN;
int8_t x280 = INT8_MIN;
static int32_t x297 = INT32_MIN;
static uint32_t x300 = 49096478U;
int16_t x301 = INT16_MIN;
static int16_t x302 = -577;
uint32_t t63 = 3715U;
uint64_t x306 = 35729010251LLU;
volatile int64_t t66 = 9272787415510LL;
int64_t x331 = INT64_MIN;
volatile uint64_t x332 = 2592454610239822LLU;
volatile int8_t x344 = -1;
uint64_t x357 = UINT64_MAX;
int8_t x361 = INT8_MAX;
static int32_t x381 = 1;
volatile int8_t x384 = INT8_MIN;
static volatile int8_t x396 = 0;
volatile int64_t t79 = 14920359690LL;
volatile uint8_t x399 = 1U;
int8_t x410 = INT8_MAX;
int64_t x411 = 14238LL;
volatile int32_t x412 = INT32_MAX;
int8_t x414 = -1;
uint16_t x417 = 1U;
volatile int32_t x429 = -1;
int16_t x433 = -1;
int64_t x434 = -38613967LL;
int16_t x436 = INT16_MIN;
volatile int64_t t88 = -3821083035805432LL;
int32_t x439 = INT32_MIN;
int16_t x442 = -85;
int16_t x446 = 162;
int32_t x452 = INT32_MIN;
int8_t x461 = 1;
static int8_t x467 = INT8_MIN;
static uint32_t x470 = UINT32_MAX;
static int64_t x471 = -32565569308818LL;
int16_t x479 = INT16_MIN;
static volatile int64_t t98 = -7535879LL;
int32_t x491 = 214;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint16_t x2 = 0U;
	int8_t x3 = -1;
	volatile int16_t x4 = -1;
	int32_t t0 = 3974;

	t0 = (x1*(x2|(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile int64_t x6 = INT64_MIN;
	uint16_t x7 = 23075U;
	int8_t x8 = -1;
	static volatile int64_t t1 = -63926718LL;

	t1 = (x5*(x6|(x7^x8)));

	if (t1 != -49555332638172LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = UINT8_MAX;
	int64_t x10 = -1461LL;
	volatile uint32_t x11 = UINT32_MAX;
	uint32_t x12 = 49U;
	volatile int64_t t2 = 10045267LL;

	t2 = (x9*(x10|(x11^x12)));

	if (t2 != -12495LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -10;
	static volatile int8_t x14 = INT8_MIN;
	int64_t x16 = INT64_MAX;
	int64_t t3 = -598LL;

	t3 = (x13*(x14|(x15^x16)));

	if (t3 != 1280LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 54U;
	uint16_t x18 = 34U;
	int32_t x19 = 355487382;
	static uint64_t x20 = 889090129LLU;
	volatile uint64_t t4 = 1888LLU;

	t4 = (x17*(x18|(x19^x20)));

	if (t4 != 30626890938LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	volatile int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MAX;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = 5006117;

	t5 = (x21*(x22|(x23^x24)));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = UINT8_MAX;
	static volatile uint32_t x28 = 997264064U;
	uint64_t t6 = 110516046LLU;

	t6 = (x25*(x26|(x27^x28)));

	if (t6 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 27972U;
	int16_t x31 = INT16_MIN;
	int32_t t7 = -913623;

	t7 = (x29*(x30|(x31^x32)));

	if (t7 != -27972) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MIN;
	static uint64_t x36 = 6LLU;
	uint64_t t8 = 125241496LLU;

	t8 = (x33*(x34|(x35^x36)));

	if (t8 != 1723LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int32_t x38 = INT32_MAX;
	static int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = -288LL;

	t9 = (x37*(x38|(x39^x40)));

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	int8_t x43 = INT8_MIN;
	volatile int32_t x44 = INT32_MIN;
	static uint32_t t10 = 14U;

	t10 = (x41*(x42|(x43^x44)));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	int16_t x51 = 1119;
	int64_t x52 = 5921686LL;

	t11 = (x49*(x50|(x51^x52)));

	if (t11 != -1802185LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 54U;
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = 54;
	uint32_t x56 = 390715644U;

	t12 = (x53*(x54|(x55^x56)));

	if (t12 != 4294964380U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	uint64_t x63 = 645396812LLU;
	static uint64_t x64 = 2LLU;
	uint64_t t13 = 2LLU;

	t13 = (x61*(x62|(x63^x64)));

	if (t13 != 1714LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -64021478;
	int8_t x66 = 1;
	volatile uint32_t x67 = UINT32_MAX;
	int32_t x68 = -38;
	static volatile uint32_t t14 = 485337862U;

	t14 = (x65*(x66|(x67^x68)));

	if (t14 != 1926172610U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	int64_t x75 = -1LL;
	static volatile int64_t t15 = 1364LL;

	t15 = (x73*(x74|(x75^x76)));

	if (t15 != -51539607528LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x78 = -166171;
	volatile int64_t x80 = -461235352515882460LL;
	int64_t t16 = 31382618473LL;

	t16 = (x77*(x78|(x79^x80)));

	if (t16 != -127LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = -1;
	static int32_t x83 = INT32_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t17 = -4;

	t17 = (x81*(x82|(x83^x84)));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 0U;
	int32_t x87 = INT32_MAX;
	static volatile uint64_t t18 = 295705845178LLU;

	t18 = (x85*(x86|(x87^x88)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x89 = 1U;
	static int16_t x90 = -770;
	uint32_t x91 = 10456U;
	volatile int64_t x92 = INT64_MAX;
	int64_t t19 = 6928661324288LL;

	t19 = (x89*(x90|(x91^x92)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x93 = 176U;
	int64_t x95 = -245LL;
	static int32_t x96 = INT32_MIN;
	int64_t t20 = -6450619LL;

	t20 = (x93*(x94|(x95^x96)));

	if (t20 != -20592LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 3;
	int64_t x98 = INT64_MAX;
	int8_t x99 = -1;
	int16_t x100 = INT16_MAX;

	t21 = (x97*(x98|(x99^x100)));

	if (t21 != -3LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x101 = 63U;
	int32_t x102 = 10;
	int32_t x103 = -1;
	uint8_t x104 = UINT8_MAX;
	static volatile uint32_t t22 = 46929505U;

	t22 = (x101*(x102|(x103^x104)));

	if (t22 != 4294951798U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;
	static uint16_t x108 = 738U;

	t23 = (x105*(x106|(x107^x108)));

	if (t23 != -233524LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	static uint16_t x110 = UINT16_MAX;
	uint64_t x111 = 18LLU;
	int32_t x112 = INT32_MAX;

	t24 = (x109*(x110|(x111^x112)));

	if (t24 != 70366596661249LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 3403415;
	volatile int64_t x114 = INT64_MIN;
	int8_t x116 = 1;
	volatile int64_t t25 = -6546743210943LL;

	t25 = (x113*(x114|(x115^x116)));

	if (t25 != -111519699305LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = 3889;
	uint32_t x122 = 957U;
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MAX;
	uint32_t t26 = 4U;

	t26 = (x121*(x122|(x123^x124)));

	if (t26 != 2151462095U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x125 = UINT16_MAX;
	int64_t x126 = -2715463991LL;
	static int16_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t27 = 126827101621764576LL;

	t27 = (x125*(x126|(x127^x128)));

	if (t27 != -177957932650185LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	uint64_t t28 = 46LLU;

	t28 = (x129*(x130|(x131^x132)));

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x137 = UINT64_MAX;
	volatile int32_t x138 = INT32_MAX;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 0U;

	t29 = (x137*(x138|(x139^x140)));

	if (t29 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -5862;
	volatile uint8_t x142 = 30U;
	int8_t x143 = 14;

	t30 = (x141*(x142|(x143^x144)));

	if (t30 != -46133940) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x149 = UINT8_MAX;
	static uint64_t x151 = 2685292180676382LLU;
	volatile int16_t x152 = INT16_MIN;
	volatile uint64_t t31 = 384100751601745LLU;

	t31 = (x149*(x150|(x151^x152)));

	if (t31 != 17761994567639105281LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x153 = INT8_MIN;
	int8_t x154 = -1;
	volatile int64_t x155 = INT64_MAX;
	int16_t x156 = -1;
	volatile int64_t t32 = 219367064024LL;

	t32 = (x153*(x154|(x155^x156)));

	if (t32 != 128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	static uint32_t x167 = 497020U;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t33 = 5458083U;

	t33 = (x165*(x166|(x167^x168)));

	if (t33 != 512U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	volatile uint64_t x171 = 1147254672LLU;
	uint64_t t34 = 68080868LLU;

	t34 = (x169*(x170|(x171^x172)));

	if (t34 != 18446743798831644800LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x174 = INT32_MIN;
	static int16_t x176 = INT16_MIN;
	uint64_t t35 = 963115LLU;

	t35 = (x173*(x174|(x175^x176)));

	if (t35 != 18446743993950162124LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MIN;
	volatile int64_t x180 = -1LL;
	int64_t t36 = -11458022018LL;

	t36 = (x177*(x178|(x179^x180)));

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = 182LL;
	int16_t x184 = INT16_MIN;

	t37 = (x181*(x182|(x183^x184)));

	if (t37 != 140733205348170LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = UINT16_MAX;
	uint8_t x187 = UINT8_MAX;
	int8_t x188 = 0;
	static volatile int32_t t38 = -105529357;

	t38 = (x185*(x186|(x187^x188)));

	if (t38 != 16711425) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = -17;
	uint16_t x190 = UINT16_MAX;
	volatile int64_t x192 = -57872791607773LL;
	int64_t t39 = 7734773535205LL;

	t39 = (x189*(x190|(x191^x192)));

	if (t39 != -983837457776623LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x197 = 869494U;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = -2;
	uint32_t x200 = 13161U;

	t40 = (x197*(x198|(x199^x200)));

	if (t40 != 4294097802U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x202 = UINT8_MAX;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t41 = 13928991531059LLU;

	t41 = (x201*(x202|(x203^x204)));

	if (t41 != 18446744073692904961LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x208 = INT8_MIN;
	volatile int32_t t42 = 2421082;

	t42 = (x205*(x206|(x207^x208)));

	if (t42 != 98301) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x209 = 1850764LLU;
	int8_t x210 = 13;
	volatile int16_t x211 = INT16_MIN;
	static int32_t x212 = INT32_MIN;
	volatile uint64_t t43 = 327812181680526LLU;

	t43 = (x209*(x210|(x211^x212)));

	if (t43 != 3974424804532252LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MAX;
	static uint32_t x214 = 90085493U;
	static volatile uint16_t x215 = UINT16_MAX;
	static int16_t x216 = INT16_MAX;
	uint32_t t44 = 429U;

	t44 = (x213*(x214|(x215^x216)));

	if (t44 != 2850923019U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x222 = 1009U;
	static uint16_t x223 = UINT16_MAX;
	uint32_t t45 = 2136488U;

	t45 = (x221*(x222|(x223^x224)));

	if (t45 != 2147450881U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x225 = UINT64_MAX;
	static volatile int64_t x227 = 7LL;
	uint64_t t46 = 1285875058827504LLU;

	t46 = (x225*(x226|(x227^x228)));

	if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = 31920LL;
	int32_t x235 = -1;
	int32_t x236 = INT32_MIN;
	volatile int64_t t47 = -119731176307216LL;

	t47 = (x233*(x234|(x235^x236)));

	if (t47 != 959667492586320LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x237 = 168U;
	int64_t x239 = 535333850334038669LL;
	int64_t x240 = INT64_MIN;
	volatile int64_t t48 = -57654311LL;

	t48 = (x237*(x238|(x239^x240)));

	if (t48 != -168LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = -1;
	int64_t x242 = -1LL;
	int64_t x243 = 11242425212113LL;
	volatile uint64_t x244 = 5LLU;
	volatile uint64_t t49 = 2011564446749LLU;

	t49 = (x241*(x242|(x243^x244)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = -1LL;
	volatile uint8_t x246 = 23U;
	int16_t x247 = -1;

	t50 = (x245*(x246|(x247^x248)));

	if (t50 != 105LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = 4LL;
	int8_t x250 = INT8_MAX;
	int16_t x252 = INT16_MIN;
	int64_t t51 = 1574775446930LL;

	t51 = (x249*(x250|(x251^x252)));

	if (t51 != -131076LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x253 = -1;
	volatile uint8_t x254 = UINT8_MAX;
	int32_t x255 = -377633;
	volatile int32_t x256 = INT32_MIN;
	int32_t t52 = 3;

	t52 = (x253*(x254|(x255^x256)));

	if (t52 != -2147106047) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = 1075;
	static uint64_t x263 = UINT64_MAX;
	volatile int8_t x264 = 3;
	static volatile uint64_t t53 = 3LLU;

	t53 = (x261*(x262|(x263^x264)));

	if (t53 != 2147483648LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x266 = -184;
	uint64_t x267 = 58549717LLU;
	volatile int32_t x268 = -1340;
	static uint64_t t54 = 9752688601105LLU;

	t54 = (x265*(x266|(x267^x268)));

	if (t54 != 5472256LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = 2;
	int64_t x270 = -1LL;
	uint32_t x271 = 255672576U;
	int64_t x272 = INT64_MIN;
	int64_t t55 = -94554926580797072LL;

	t55 = (x269*(x270|(x271^x272)));

	if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = -1;
	static int16_t x275 = INT16_MIN;
	static int16_t x276 = -1;
	static volatile int32_t t56 = 2591;

	t56 = (x273*(x274|(x275^x276)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = -1;
	int32_t t57 = 181;

	t57 = (x277*(x278|(x279^x280)));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MAX;
	int16_t x283 = INT16_MAX;
	int8_t x284 = INT8_MIN;
	volatile int32_t t58 = -61355876;

	t58 = (x281*(x282|(x283^x284)));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = 7;
	int16_t x286 = 27;
	volatile int8_t x287 = INT8_MIN;
	static int16_t x288 = -1;
	volatile int32_t t59 = 63092175;

	t59 = (x285*(x286|(x287^x288)));

	if (t59 != 889) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x289 = 3U;
	static int8_t x290 = 1;
	int64_t x291 = -14528414696841LL;
	static int8_t x292 = -3;
	int64_t t60 = -3522863564248LL;

	t60 = (x289*(x290|(x291^x292)));

	if (t60 != 43585244090529LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = -1;
	static uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MAX;
	static int64_t x296 = INT64_MIN;
	int64_t t61 = -16072578858072LL;

	t61 = (x293*(x294|(x295^x296)));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x298 = INT8_MIN;
	int8_t x299 = 0;
	static volatile uint32_t t62 = 837035U;

	t62 = (x297*(x298|(x299^x300)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x303 = 45U;
	uint32_t x304 = UINT32_MAX;

	t63 = (x301*(x302|(x303^x304)));

	if (t63 != 32768U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x305 = 32;
	int16_t x307 = -13454;
	int64_t x308 = INT64_MIN;
	volatile uint64_t t64 = 995588535700753LLU;

	t64 = (x305*(x306|(x307^x308)));

	if (t64 != 18446744073709416288LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = -1LL;
	int64_t x314 = -1LL;
	int8_t x315 = -5;
	static int8_t x316 = INT8_MAX;
	volatile int64_t t65 = 7LL;

	t65 = (x313*(x314|(x315^x316)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x317 = 189U;
	int16_t x318 = -1;
	volatile int64_t x319 = INT64_MIN;
	volatile int32_t x320 = -30106485;

	t66 = (x317*(x318|(x319^x320)));

	if (t66 != -189LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x325 = INT64_MAX;
	int16_t x326 = -1;
	volatile int16_t x327 = INT16_MIN;
	int64_t x328 = -1LL;
	volatile int64_t t67 = -12580178990702LL;

	t67 = (x325*(x326|(x327^x328)));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x329 = 120343053U;
	int16_t x330 = -1;
	uint64_t t68 = 510845051LLU;

	t68 = (x329*(x330|(x331^x332)));

	if (t68 != 18446744073589208563LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MAX;
	int16_t x335 = 2;
	uint16_t x336 = 18057U;
	volatile int32_t t69 = -248272814;

	t69 = (x333*(x334|(x335^x336)));

	if (t69 != -1073709056) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x341 = INT8_MAX;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	static int64_t t70 = 2542107123LL;

	t70 = (x341*(x342|(x343^x344)));

	if (t70 != -16256LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x345 = INT64_MAX;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MAX;
	static uint64_t x348 = 149992558LLU;
	static uint64_t t71 = 3348636434090LLU;

	t71 = (x345*(x346|(x347^x348)));

	if (t71 != 9223372036704763905LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x349 = 2055LLU;
	int16_t x350 = 1;
	static int64_t x351 = -984361230034069LL;
	int8_t x352 = -1;
	static volatile uint64_t t72 = 2529339646856319265LLU;

	t72 = (x349*(x350|(x351^x352)));

	if (t72 != 2022862327720011795LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x358 = INT64_MAX;
	uint8_t x359 = 13U;
	int8_t x360 = -20;
	volatile uint64_t t73 = 34478281856571LLU;

	t73 = (x357*(x358|(x359^x360)));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x362 = -1LL;
	uint16_t x363 = 46U;
	volatile uint64_t x364 = 0LLU;
	uint64_t t74 = 3LLU;

	t74 = (x361*(x362|(x363^x364)));

	if (t74 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x369 = 16712003LL;
	volatile int64_t x370 = INT64_MAX;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MAX;
	volatile int64_t t75 = 4097LL;

	t75 = (x369*(x370|(x371^x372)));

	if (t75 != -16712003LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x373 = INT16_MIN;
	static int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = 1404U;
	volatile int8_t x376 = INT8_MIN;
	static volatile int64_t t76 = -107957550733099LL;

	t76 = (x373*(x374|(x375^x376)));

	if (t76 != 42074112LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x382 = INT64_MIN;
	int64_t x383 = 8LL;
	volatile int64_t t77 = -3LL;

	t77 = (x381*(x382|(x383^x384)));

	if (t77 != -120LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x389 = INT64_MAX;
	uint8_t x390 = 15U;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t78 = 34647828600858LLU;

	t78 = (x389*(x390|(x391^x392)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x393 = -1;
	int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;

	t79 = (x393*(x394|(x395^x396)));

	if (t79 != 128LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x397 = UINT8_MAX;
	volatile int8_t x398 = -1;
	int64_t x400 = INT64_MIN;
	volatile int64_t t80 = -14LL;

	t80 = (x397*(x398|(x399^x400)));

	if (t80 != -255LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x405 = 9;
	int32_t x406 = -1;
	int32_t x407 = 22016;
	int32_t x408 = INT32_MIN;
	volatile int32_t t81 = 5868483;

	t81 = (x405*(x406|(x407^x408)));

	if (t81 != -9) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x409 = 0U;
	int64_t t82 = -1228381LL;

	t82 = (x409*(x410|(x411^x412)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x413 = 14U;
	static uint16_t x415 = UINT16_MAX;
	int64_t x416 = -1LL;
	int64_t t83 = 0LL;

	t83 = (x413*(x414|(x415^x416)));

	if (t83 != -14LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x418 = 59U;
	int8_t x419 = INT8_MIN;
	int8_t x420 = 1;
	int32_t t84 = 1932514;

	t84 = (x417*(x418|(x419^x420)));

	if (t84 != -69) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x421 = UINT16_MAX;
	uint16_t x422 = 18U;
	uint8_t x423 = 22U;
	uint8_t x424 = 1U;
	int32_t t85 = 699382299;

	t85 = (x421*(x422|(x423^x424)));

	if (t85 != 1507305) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x425 = -47;
	int64_t x426 = -1LL;
	uint8_t x427 = 1U;
	int64_t x428 = -1094821539976LL;
	int64_t t86 = -14912LL;

	t86 = (x425*(x426|(x427^x428)));

	if (t86 != 47LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x430 = INT16_MIN;
	static int16_t x431 = 4;
	static volatile int32_t x432 = 2020832;
	volatile int32_t t87 = -3106;

	t87 = (x429*(x430|(x431^x432)));

	if (t87 != 10780) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x435 = 1689U;

	t88 = (x433*(x434|(x435^x436)));

	if (t88 != 12615LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x438 = UINT64_MAX;
	static int64_t x440 = INT64_MIN;
	volatile uint64_t t89 = 1208316328LLU;

	t89 = (x437*(x438|(x439^x440)));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = INT32_MIN;
	static uint64_t x443 = 60LLU;
	volatile int8_t x444 = INT8_MIN;
	uint64_t t90 = 229879436626527011LLU;

	t90 = (x441*(x442|(x443^x444)));

	if (t90 != 139586437120LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x445 = 3053LL;
	static int8_t x447 = -1;
	uint64_t x448 = UINT64_MAX;
	volatile uint64_t t91 = 2682404446575382897LLU;

	t91 = (x445*(x446|(x447^x448)));

	if (t91 != 494586LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = INT16_MIN;
	uint16_t x450 = 4997U;
	int64_t x451 = 51LL;
	static int64_t t92 = 36469LL;

	t92 = (x449*(x450|(x451^x452)));

	if (t92 != 70368578797568LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x462 = 228293543U;
	int32_t x463 = -1;
	volatile uint32_t x464 = 14522U;
	uint32_t t93 = 52671350U;

	t93 = (x461*(x462|(x463^x464)));

	if (t93 != 4294967271U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x465 = -1;
	int64_t x466 = INT64_MAX;
	int8_t x468 = 3;
	volatile int64_t t94 = 3350328204LL;

	t94 = (x465*(x466|(x467^x468)));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x469 = 210U;
	static int32_t x472 = 60625731;
	volatile int64_t t95 = -2006674925LL;

	t95 = (x469*(x470|(x471^x472)));

	if (t95 != -6838532828037330LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x473 = 4;
	uint32_t x474 = 1215U;
	int32_t x475 = INT32_MIN;
	uint16_t x476 = 18U;
	volatile uint32_t t96 = 1022U;

	t96 = (x473*(x474|(x475^x476)));

	if (t96 != 4860U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x477 = -1LL;
	int16_t x478 = -1;
	int8_t x480 = INT8_MIN;
	volatile int64_t t97 = -3577677417391412127LL;

	t97 = (x477*(x478|(x479^x480)));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x485 = -1LL;
	static int32_t x486 = INT32_MIN;
	volatile uint32_t x487 = 501272U;
	volatile int16_t x488 = INT16_MIN;

	t98 = (x485*(x486|(x487^x488)));

	if (t98 != -4294452760LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x489 = -1;
	volatile int64_t x490 = -1LL;
	int64_t x492 = -1LL;
	static int64_t t99 = 10478680556LL;

	t99 = (x489*(x490|(x491^x492)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

