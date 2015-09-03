#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = UINT16_MAX;
uint64_t x8 = 2970108731LLU;
uint64_t x22 = 2034708083LLU;
int16_t x31 = INT16_MAX;
int16_t x43 = INT16_MIN;
uint64_t t6 = 2073272LLU;
int8_t x60 = INT8_MIN;
uint64_t t7 = 0LLU;
volatile uint32_t x69 = 13747480U;
static uint8_t x72 = 15U;
int8_t x83 = -31;
volatile uint64_t t10 = 3708980LLU;
volatile int32_t t11 = 2;
int64_t x97 = -1LL;
volatile int64_t t13 = 2253253392401802357LL;
volatile uint32_t x103 = 4U;
volatile uint32_t t14 = 385U;
uint32_t x117 = 3201U;
int32_t x118 = INT32_MIN;
static volatile int32_t x154 = -1;
int16_t x163 = -7019;
volatile int16_t x181 = INT16_MIN;
volatile uint64_t x184 = 1800628382211903LLU;
static uint64_t t26 = 388193369778187520LLU;
volatile uint16_t x230 = 2013U;
int32_t t27 = -1094725;
volatile uint64_t t29 = 577163927933LLU;
uint64_t x265 = 40957LLU;
volatile uint16_t x267 = 125U;
uint32_t x269 = UINT32_MAX;
int8_t x272 = -1;
volatile uint32_t t31 = 28621300U;
uint32_t x282 = 1972U;
static int64_t x283 = INT64_MIN;
int32_t t35 = -295145;
volatile uint32_t x313 = 37259U;
uint16_t x330 = UINT16_MAX;
uint32_t x388 = 1953U;
int32_t t45 = -17646;
int8_t x394 = INT8_MIN;
int8_t x398 = INT8_MIN;
int16_t x400 = -1;
static int8_t x401 = 0;
static int16_t x402 = INT16_MIN;
volatile int32_t t53 = -119;
volatile uint8_t x477 = 0U;
int8_t x482 = INT8_MIN;
int32_t x487 = INT32_MIN;
int16_t x499 = -3;
uint32_t x538 = 2454668U;
static int32_t x539 = -1;
int16_t x569 = INT16_MIN;
int64_t x571 = -1LL;
volatile uint64_t x577 = UINT64_MAX;
static uint32_t x585 = UINT32_MAX;
int64_t x604 = INT64_MIN;
uint32_t x612 = 660415U;
volatile int32_t t72 = -8;
volatile uint8_t x631 = UINT8_MAX;
int16_t x632 = -377;
static int16_t x657 = 3679;
uint8_t x660 = 91U;
volatile uint64_t t78 = 1801LLU;
int32_t x689 = -153075158;
uint16_t x712 = 93U;
uint32_t x738 = UINT32_MAX;
uint64_t x757 = 2LLU;
static int16_t x769 = INT16_MIN;
uint32_t x794 = 1960469U;
int16_t x813 = -1;
volatile uint8_t x818 = 17U;
uint32_t x819 = UINT32_MAX;
int8_t x838 = -1;
static uint16_t x840 = 3U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = UINT64_MAX;
	volatile uint8_t x3 = 16U;
	int8_t x4 = INT8_MAX;
	uint64_t t0 = 459562LLU;

	t0 = ((x1*x2)>>(x3<=x4));

	if (t0 != 1073741824LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int16_t x6 = -64;
	uint64_t t1 = 414229450567066LLU;

	t1 = ((x5*x6)>>(x7<=x8));

	if (t1 != 32LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x21 = 435LL;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MAX;
	static volatile uint64_t t2 = 64548570787LLU;

	t2 = ((x21*x22)>>(x23<=x24));

	if (t2 != 885098016105LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = INT8_MIN;
	static int16_t x26 = -1;
	int16_t x27 = INT16_MIN;
	static uint16_t x28 = 1882U;
	int32_t t3 = 1;

	t3 = ((x25*x26)>>(x27<=x28));

	if (t3 != 64) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MAX;
	int64_t x32 = -1LL;
	uint32_t t4 = 19593030U;

	t4 = ((x29*x30)>>(x31<=x32));

	if (t4 != 4294967169U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -13;
	int16_t x38 = INT16_MIN;
	int8_t x39 = 2;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t5 = -8;

	t5 = ((x37*x38)>>(x39<=x40));

	if (t5 != 425984) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = 29779800LLU;
	int64_t x42 = INT64_MIN;
	volatile uint32_t x44 = UINT32_MAX;

	t6 = ((x41*x42)>>(x43<=x44));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x57 = INT16_MAX;
	uint64_t x58 = 56943303244060814LLU;
	int32_t x59 = INT32_MAX;

	t7 = ((x57*x58)>>(x59<=x60));

	if (t7 != 2740065953475979122LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x61 = -12684LL;
	volatile int64_t x62 = -3LL;
	uint64_t x63 = UINT64_MAX;
	volatile int16_t x64 = 799;
	int64_t t8 = 275LL;

	t8 = ((x61*x62)>>(x63<=x64));

	if (t8 != 38052LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x70 = 2159U;
	int16_t x71 = 21;
	uint32_t t9 = 70260U;

	t9 = ((x69*x70)>>(x71<=x72));

	if (t9 != 3911005544U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = 10;
	uint64_t x82 = 13287178LLU;
	uint64_t x84 = 384291592737171LLU;

	t10 = ((x81*x82)>>(x83<=x84));

	if (t10 != 132871780LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x85 = 58U;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MAX;
	int16_t x88 = INT16_MAX;

	t11 = ((x85*x86)>>(x87<=x88));

	if (t11 != 950243) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x89 = -1;
	int64_t x90 = -1LL;
	int64_t x91 = INT64_MAX;
	int8_t x92 = -1;
	volatile int64_t t12 = -206421267704LL;

	t12 = ((x89*x90)>>(x91<=x92));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;

	t13 = ((x97*x98)>>(x99<=x100));

	if (t13 != 2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x101 = 9382924U;
	uint32_t x102 = 8418205U;
	uint32_t x104 = 197953600U;

	t14 = ((x101*x102)>>(x103<=x104));

	if (t14 != 1464578990U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x119 = -1;
	static volatile int8_t x120 = -1;
	uint32_t t15 = 3U;

	t15 = ((x117*x118)>>(x119<=x120));

	if (t15 != 1073741824U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x121 = -38194;
	int64_t x122 = -1LL;
	uint32_t x123 = 13U;
	int16_t x124 = -1;
	static int64_t t16 = 2558154196682383LL;

	t16 = ((x121*x122)>>(x123<=x124));

	if (t16 != 19097LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x125 = 4882LL;
	static uint16_t x126 = 11249U;
	uint32_t x127 = 798803039U;
	int32_t x128 = INT32_MIN;
	int64_t t17 = -419923947LL;

	t17 = ((x125*x126)>>(x127<=x128));

	if (t17 != 27458809LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x153 = 0U;
	static volatile uint64_t x155 = 4282360814246187256LLU;
	uint16_t x156 = 0U;
	volatile uint32_t t18 = 12596505U;

	t18 = ((x153*x154)>>(x155<=x156));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x161 = 120U;
	uint64_t x162 = 3675950651063450710LLU;
	int64_t x164 = INT64_MAX;
	volatile uint64_t t19 = 4477876508LLU;

	t19 = ((x161*x162)>>(x163<=x164));

	if (t19 != 8419482216147199016LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x165 = -1;
	volatile int8_t x166 = INT8_MIN;
	volatile uint32_t x167 = 442837U;
	int32_t x168 = INT32_MIN;
	volatile int32_t t20 = -5;

	t20 = ((x165*x166)>>(x167<=x168));

	if (t20 != 64) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x169 = 0;
	static uint16_t x170 = 7135U;
	static int8_t x171 = 7;
	int16_t x172 = INT16_MAX;
	int32_t t21 = -268355;

	t21 = ((x169*x170)>>(x171<=x172));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x173 = 271U;
	volatile int8_t x174 = 17;
	int64_t x175 = -1LL;
	static volatile int64_t x176 = -1LL;
	uint32_t t22 = 593834U;

	t22 = ((x173*x174)>>(x175<=x176));

	if (t22 != 2303U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x177 = 0U;
	volatile int32_t x178 = 14;
	volatile int8_t x179 = INT8_MIN;
	volatile int64_t x180 = -4134804LL;
	volatile int32_t t23 = -1;

	t23 = ((x177*x178)>>(x179<=x180));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x182 = UINT64_MAX;
	static int8_t x183 = -1;
	volatile uint64_t t24 = 14859506905102LLU;

	t24 = ((x181*x182)>>(x183<=x184));

	if (t24 != 32768LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x201 = 13758;
	uint8_t x202 = UINT8_MAX;
	volatile int32_t x203 = INT32_MIN;
	volatile int32_t x204 = -1;
	volatile int32_t t25 = -7428277;

	t25 = ((x201*x202)>>(x203<=x204));

	if (t25 != 1754145) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x209 = INT64_MAX;
	uint64_t x210 = 179579245050LLU;
	int8_t x211 = INT8_MAX;
	static uint16_t x212 = UINT16_MAX;

	t26 = ((x209*x210)>>(x211<=x212));

	if (t26 != 9223371947065153283LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x229 = INT16_MAX;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = 506U;

	t27 = ((x229*x230)>>(x231<=x232));

	if (t27 != 65959971) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x245 = UINT32_MAX;
	static uint8_t x246 = 34U;
	uint64_t x247 = 14126434588LLU;
	int32_t x248 = -40910077;
	static volatile uint32_t t28 = 22628544U;

	t28 = ((x245*x246)>>(x247<=x248));

	if (t28 != 2147483631U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x253 = 14680836918LLU;
	int16_t x254 = 3;
	volatile int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;

	t29 = ((x253*x254)>>(x255<=x256));

	if (t29 != 44042510754LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x266 = 1LLU;
	volatile int64_t x268 = INT64_MIN;
	volatile uint64_t t30 = 305171512099975476LLU;

	t30 = ((x265*x266)>>(x267<=x268));

	if (t30 != 40957LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x270 = 241U;
	static int16_t x271 = 6012;

	t31 = ((x269*x270)>>(x271<=x272));

	if (t31 != 4294967055U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x273 = 1955234626U;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	static int16_t x276 = -1;
	uint32_t t32 = 308797122U;

	t32 = ((x273*x274)>>(x275<=x276));

	if (t32 != 1596948480U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x277 = 46153980168931993LLU;
	volatile int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MAX;
	int16_t x280 = -1;
	uint64_t t33 = 119LLU;

	t33 = ((x277*x278)>>(x279<=x280));

	if (t33 != 12539034612086256512LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x281 = -4;
	static int32_t x284 = INT32_MIN;
	static volatile uint32_t t34 = 55612U;

	t34 = ((x281*x282)>>(x283<=x284));

	if (t34 != 2147479704U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x293 = 1002;
	uint16_t x294 = 27U;
	static int64_t x295 = INT64_MIN;
	volatile uint32_t x296 = 4386014U;

	t35 = ((x293*x294)>>(x295<=x296));

	if (t35 != 13527) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x314 = -1;
	static int32_t x315 = 48288907;
	int64_t x316 = INT64_MAX;
	volatile uint32_t t36 = 0U;

	t36 = ((x313*x314)>>(x315<=x316));

	if (t36 != 2147465018U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x321 = INT8_MIN;
	volatile int16_t x322 = -210;
	int64_t x323 = -14663253643LL;
	uint64_t x324 = 4911570082380LLU;
	volatile int32_t t37 = -1;

	t37 = ((x321*x322)>>(x323<=x324));

	if (t37 != 26880) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x329 = UINT64_MAX;
	static int16_t x331 = INT16_MIN;
	uint16_t x332 = 388U;
	volatile uint64_t t38 = 1324856355899LLU;

	t38 = ((x329*x330)>>(x331<=x332));

	if (t38 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x333 = -1LL;
	static volatile int8_t x334 = 0;
	uint32_t x335 = 1777008546U;
	int32_t x336 = INT32_MIN;
	volatile int64_t t39 = -18971721LL;

	t39 = ((x333*x334)>>(x335<=x336));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x337 = UINT64_MAX;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MAX;
	volatile int16_t x340 = 17;
	volatile uint64_t t40 = 4724347LLU;

	t40 = ((x337*x338)>>(x339<=x340));

	if (t40 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x349 = INT8_MAX;
	uint64_t x350 = 5748296975248523LLU;
	int64_t x351 = -1LL;
	volatile int8_t x352 = -1;
	static volatile uint64_t t41 = 173398979409053901LLU;

	t41 = ((x349*x350)>>(x351<=x352));

	if (t41 != 365016857928281210LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x361 = 52;
	static int16_t x362 = 17;
	int64_t x363 = 621397LL;
	int16_t x364 = INT16_MAX;
	int32_t t42 = 196470;

	t42 = ((x361*x362)>>(x363<=x364));

	if (t42 != 884) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x365 = 20643110U;
	static int8_t x366 = -1;
	volatile int64_t x367 = -36807673230495LL;
	int16_t x368 = -7;
	uint32_t t43 = 23398U;

	t43 = ((x365*x366)>>(x367<=x368));

	if (t43 != 2137162093U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x385 = 8007666049284199LLU;
	uint64_t x386 = 15982514LLU;
	uint8_t x387 = UINT8_MAX;
	uint64_t t44 = 32452915942288LLU;

	t44 = ((x385*x386)>>(x387<=x388));

	if (t44 != 8785550343120468047LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x389 = INT8_MIN;
	volatile int8_t x390 = INT8_MIN;
	int16_t x391 = 14;
	int16_t x392 = INT16_MIN;

	t45 = ((x389*x390)>>(x391<=x392));

	if (t45 != 16384) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x393 = UINT64_MAX;
	uint8_t x395 = 62U;
	int16_t x396 = INT16_MAX;
	uint64_t t46 = 12LLU;

	t46 = ((x393*x394)>>(x395<=x396));

	if (t46 != 64LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x397 = -1LL;
	static int16_t x399 = 0;
	volatile int64_t t47 = 4691998LL;

	t47 = ((x397*x398)>>(x399<=x400));

	if (t47 != 128LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x403 = 6U;
	static int64_t x404 = INT64_MIN;
	int32_t t48 = -14631;

	t48 = ((x401*x402)>>(x403<=x404));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x405 = 7444084136LL;
	uint64_t x406 = 2936946105LLU;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = UINT32_MAX;
	uint64_t t49 = 1568440LLU;

	t49 = ((x405*x406)>>(x407<=x408));

	if (t49 != 1708064917403969332LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x425 = -16988;
	uint32_t x426 = UINT32_MAX;
	volatile uint8_t x427 = 1U;
	volatile int8_t x428 = INT8_MAX;
	uint32_t t50 = 287697U;

	t50 = ((x425*x426)>>(x427<=x428));

	if (t50 != 8494U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x433 = INT16_MAX;
	int64_t x434 = 79140LL;
	int16_t x435 = INT16_MIN;
	volatile int8_t x436 = INT8_MAX;
	int64_t t51 = -7722083276023595LL;

	t51 = ((x433*x434)>>(x435<=x436));

	if (t51 != 1296590190LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x457 = 2LLU;
	volatile int32_t x458 = INT32_MIN;
	int8_t x459 = 1;
	uint64_t x460 = 396791LLU;
	uint64_t t52 = 38767853893362968LLU;

	t52 = ((x457*x458)>>(x459<=x460));

	if (t52 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x465 = INT8_MIN;
	volatile int32_t x466 = -1;
	int64_t x467 = 15903110LL;
	uint16_t x468 = 1U;

	t53 = ((x465*x466)>>(x467<=x468));

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x473 = UINT64_MAX;
	volatile uint16_t x474 = 3U;
	int16_t x475 = INT16_MAX;
	int64_t x476 = 56889011110581443LL;
	uint64_t t54 = 1LLU;

	t54 = ((x473*x474)>>(x475<=x476));

	if (t54 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x478 = -1003556771033LL;
	static uint16_t x479 = UINT16_MAX;
	static int8_t x480 = 1;
	volatile int64_t t55 = -543640055314LL;

	t55 = ((x477*x478)>>(x479<=x480));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x481 = -1;
	int8_t x483 = -1;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t56 = -719;

	t56 = ((x481*x482)>>(x483<=x484));

	if (t56 != 64) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x485 = 453721U;
	static volatile int16_t x486 = INT16_MAX;
	uint64_t x488 = UINT64_MAX;
	volatile uint32_t t57 = 242425899U;

	t57 = ((x485*x486)>>(x487<=x488));

	if (t57 != 991087059U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x497 = UINT8_MAX;
	uint64_t x498 = 5641312LLU;
	int16_t x500 = 0;
	static volatile uint64_t t58 = 1079LLU;

	t58 = ((x497*x498)>>(x499<=x500));

	if (t58 != 719267280LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x505 = 92U;
	uint64_t x506 = UINT64_MAX;
	static uint64_t x507 = 200365LLU;
	static int16_t x508 = -1;
	uint64_t t59 = 3078321LLU;

	t59 = ((x505*x506)>>(x507<=x508));

	if (t59 != 9223372036854775762LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x509 = 31LLU;
	uint8_t x510 = 88U;
	int64_t x511 = INT64_MIN;
	static int8_t x512 = INT8_MIN;
	volatile uint64_t t60 = 2082506585794462LLU;

	t60 = ((x509*x510)>>(x511<=x512));

	if (t60 != 1364LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x517 = 0;
	volatile uint32_t x518 = 201759U;
	int16_t x519 = -1;
	int64_t x520 = INT64_MIN;
	volatile uint32_t t61 = 51632313U;

	t61 = ((x517*x518)>>(x519<=x520));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x521 = -1;
	int16_t x522 = -261;
	int64_t x523 = -1006LL;
	volatile uint16_t x524 = 43U;
	static int32_t t62 = -348044364;

	t62 = ((x521*x522)>>(x523<=x524));

	if (t62 != 130) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x537 = INT8_MAX;
	uint8_t x540 = 82U;
	static volatile uint32_t t63 = 1425347878U;

	t63 = ((x537*x538)>>(x539<=x540));

	if (t63 != 155871418U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x541 = INT8_MIN;
	int16_t x542 = 0;
	int64_t x543 = 1043208218532760728LL;
	int64_t x544 = -8789244LL;
	static volatile int32_t t64 = -1176385;

	t64 = ((x541*x542)>>(x543<=x544));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x553 = 447376204U;
	int32_t x554 = 289495;
	static int8_t x555 = -1;
	volatile int8_t x556 = -1;
	uint32_t t65 = 7U;

	t65 = ((x553*x554)>>(x555<=x556));

	if (t65 != 1365166698U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x565 = 60U;
	int32_t x566 = 553;
	int16_t x567 = -797;
	int32_t x568 = -1767;
	int32_t t66 = 4;

	t66 = ((x565*x566)>>(x567<=x568));

	if (t66 != 33180) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x570 = INT16_MIN;
	int64_t x572 = INT64_MIN;
	volatile int32_t t67 = 724;

	t67 = ((x569*x570)>>(x571<=x572));

	if (t67 != 1073741824) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x578 = UINT64_MAX;
	int64_t x579 = INT64_MAX;
	int8_t x580 = INT8_MIN;
	uint64_t t68 = 3LLU;

	t68 = ((x577*x578)>>(x579<=x580));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x586 = -1;
	static int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	volatile uint32_t t69 = 8849539U;

	t69 = ((x585*x586)>>(x587<=x588));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x589 = UINT8_MAX;
	int64_t x590 = 112151970238877LL;
	int8_t x591 = -1;
	static int64_t x592 = INT64_MIN;
	static int64_t t70 = 3223934LL;

	t70 = ((x589*x590)>>(x591<=x592));

	if (t70 != 28598752410913635LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x601 = INT8_MIN;
	volatile uint64_t x602 = 15LLU;
	int8_t x603 = INT8_MAX;
	volatile uint64_t t71 = 2840138040762LLU;

	t71 = ((x601*x602)>>(x603<=x604));

	if (t71 != 18446744073709549696LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x609 = INT16_MIN;
	int8_t x610 = INT8_MIN;
	uint8_t x611 = 11U;

	t72 = ((x609*x610)>>(x611<=x612));

	if (t72 != 2097152) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x621 = 1993705051213646LLU;
	volatile int8_t x622 = INT8_MAX;
	int8_t x623 = INT8_MAX;
	int16_t x624 = -51;
	volatile uint64_t t73 = 2LLU;

	t73 = ((x621*x622)>>(x623<=x624));

	if (t73 != 253200541504133042LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x629 = 19U;
	int16_t x630 = 0;
	volatile uint32_t t74 = 49448036U;

	t74 = ((x629*x630)>>(x631<=x632));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x637 = 1U;
	static uint32_t x638 = 194259615U;
	int64_t x639 = 4476034674LL;
	int16_t x640 = 161;
	static volatile uint32_t t75 = 77509U;

	t75 = ((x637*x638)>>(x639<=x640));

	if (t75 != 194259615U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x641 = 922234U;
	volatile int64_t x642 = 24LL;
	static volatile int64_t x643 = -1LL;
	volatile uint8_t x644 = 19U;
	volatile int64_t t76 = 884814916344822208LL;

	t76 = ((x641*x642)>>(x643<=x644));

	if (t76 != 11066808LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x653 = 425LLU;
	static int8_t x654 = -1;
	volatile int16_t x655 = 1;
	static int64_t x656 = INT64_MAX;
	uint64_t t77 = 24143537646145LLU;

	t77 = ((x653*x654)>>(x655<=x656));

	if (t77 != 9223372036854775595LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x658 = 1253544LLU;
	uint8_t x659 = 14U;

	t78 = ((x657*x658)>>(x659<=x660));

	if (t78 != 2305894188LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x665 = 49;
	uint32_t x666 = 107052068U;
	static uint32_t x667 = 1514199714U;
	static uint16_t x668 = UINT16_MAX;
	uint32_t t79 = 2U;

	t79 = ((x665*x666)>>(x667<=x668));

	if (t79 != 950584036U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x669 = INT64_MIN;
	int32_t x670 = 0;
	static uint64_t x671 = 8439857LLU;
	static volatile int64_t x672 = -1LL;
	volatile int64_t t80 = -1LL;

	t80 = ((x669*x670)>>(x671<=x672));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x673 = 0LLU;
	int64_t x674 = 17344192434235LL;
	int64_t x675 = 2378984907185161LL;
	static int8_t x676 = INT8_MIN;
	volatile uint64_t t81 = 175805730387113560LLU;

	t81 = ((x673*x674)>>(x675<=x676));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x677 = INT16_MIN;
	int16_t x678 = -220;
	volatile int16_t x679 = 30;
	static volatile int64_t x680 = -1LL;
	int32_t t82 = -2;

	t82 = ((x677*x678)>>(x679<=x680));

	if (t82 != 7208960) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x690 = -1;
	uint32_t x691 = 20U;
	volatile int64_t x692 = INT64_MIN;
	volatile int32_t t83 = -2;

	t83 = ((x689*x690)>>(x691<=x692));

	if (t83 != 153075158) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x709 = -1;
	static uint32_t x710 = UINT32_MAX;
	static int64_t x711 = INT64_MIN;
	static uint32_t t84 = 0U;

	t84 = ((x709*x710)>>(x711<=x712));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x713 = UINT8_MAX;
	static volatile uint32_t x714 = 63185992U;
	uint8_t x715 = UINT8_MAX;
	int8_t x716 = 2;
	volatile uint32_t t85 = 7643U;

	t85 = ((x713*x714)>>(x715<=x716));

	if (t85 != 3227526072U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x737 = UINT8_MAX;
	int8_t x739 = -1;
	uint32_t x740 = UINT32_MAX;
	uint32_t t86 = 188053U;

	t86 = ((x737*x738)>>(x739<=x740));

	if (t86 != 2147483520U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x758 = 13;
	volatile int16_t x759 = 4;
	int64_t x760 = INT64_MAX;
	uint64_t t87 = 3014260191LLU;

	t87 = ((x757*x758)>>(x759<=x760));

	if (t87 != 13LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x765 = UINT16_MAX;
	int16_t x766 = INT16_MAX;
	int32_t x767 = 346698863;
	int16_t x768 = 1009;
	volatile int32_t t88 = 65462;

	t88 = ((x765*x766)>>(x767<=x768));

	if (t88 != 2147385345) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x770 = -1;
	volatile int8_t x771 = INT8_MIN;
	int16_t x772 = INT16_MIN;
	static volatile int32_t t89 = -22465440;

	t89 = ((x769*x770)>>(x771<=x772));

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x773 = INT8_MIN;
	int16_t x774 = INT16_MIN;
	volatile uint8_t x775 = 4U;
	uint16_t x776 = 1690U;
	int32_t t90 = 7596677;

	t90 = ((x773*x774)>>(x775<=x776));

	if (t90 != 2097152) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x777 = 221337U;
	int16_t x778 = INT16_MAX;
	int8_t x779 = INT8_MAX;
	int8_t x780 = INT8_MIN;
	volatile uint32_t t91 = 5104U;

	t91 = ((x777*x778)>>(x779<=x780));

	if (t91 != 2957582183U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x781 = 1;
	volatile int64_t x782 = INT64_MAX;
	int32_t x783 = -5;
	int64_t x784 = -2003784821215988LL;
	volatile int64_t t92 = INT64_MAX;

	t92 = ((x781*x782)>>(x783<=x784));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x785 = 6;
	int32_t x786 = 125546779;
	static volatile int32_t x787 = INT32_MAX;
	int8_t x788 = INT8_MAX;
	volatile int32_t t93 = 541998;

	t93 = ((x785*x786)>>(x787<=x788));

	if (t93 != 753280674) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x789 = 540U;
	int8_t x790 = 19;
	int16_t x791 = INT16_MIN;
	uint16_t x792 = 5200U;
	volatile int32_t t94 = -1;

	t94 = ((x789*x790)>>(x791<=x792));

	if (t94 != 5130) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x793 = 1603U;
	int8_t x795 = INT8_MIN;
	volatile uint16_t x796 = UINT16_MAX;
	static uint32_t t95 = 20751413U;

	t95 = ((x793*x794)>>(x795<=x796));

	if (t95 != 1571315903U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x814 = INT16_MIN;
	volatile uint16_t x815 = 57U;
	int16_t x816 = -2422;
	volatile int32_t t96 = 824183756;

	t96 = ((x813*x814)>>(x815<=x816));

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x817 = INT8_MAX;
	int64_t x820 = -1LL;
	static volatile int32_t t97 = 18178;

	t97 = ((x817*x818)>>(x819<=x820));

	if (t97 != 2159) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x837 = INT8_MIN;
	int8_t x839 = 5;
	int32_t t98 = -5453;

	t98 = ((x837*x838)>>(x839<=x840));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x841 = 0;
	volatile int32_t x842 = INT32_MIN;
	volatile int32_t x843 = INT32_MIN;
	int8_t x844 = -15;
	int32_t t99 = 362619;

	t99 = ((x841*x842)>>(x843<=x844));

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

