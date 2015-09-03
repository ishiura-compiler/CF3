#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int16_t x3 = INT16_MIN;
uint32_t t0 = 54306U;
static volatile int64_t x13 = -1LL;
uint8_t x16 = 53U;
static uint64_t t4 = 0LLU;
uint32_t x52 = 66157U;
int32_t x78 = INT32_MIN;
uint32_t x80 = 27400898U;
uint64_t x92 = UINT64_MAX;
static uint16_t x98 = 3U;
static int64_t x105 = -1LL;
uint16_t x108 = UINT16_MAX;
static int64_t x126 = -3448920084194LL;
volatile int64_t x127 = -7844335232LL;
volatile int32_t t20 = INT32_MAX;
static volatile uint64_t x155 = 124217LLU;
int64_t x169 = -1LL;
int32_t x175 = 11616;
int64_t x180 = INT64_MAX;
int64_t x201 = INT64_MIN;
int64_t x222 = INT64_MIN;
uint16_t x223 = 8U;
uint8_t x224 = UINT8_MAX;
uint64_t x229 = 309LLU;
volatile int64_t t33 = -413414LL;
uint8_t x246 = 3U;
static uint32_t x248 = UINT32_MAX;
int16_t x261 = INT16_MIN;
int32_t t36 = -54746;
static volatile int16_t x266 = INT16_MAX;
volatile int32_t x274 = -1;
int8_t x276 = 0;
int8_t x280 = INT8_MIN;
volatile uint64_t t39 = 194LLU;
volatile int32_t t40 = -2436;
int64_t t41 = 34232LL;
int16_t x303 = INT16_MIN;
int32_t x311 = 1;
volatile int8_t x320 = -1;
int8_t x330 = -1;
uint8_t x332 = UINT8_MAX;
static volatile int32_t t46 = 3637817;
uint8_t x338 = UINT8_MAX;
static volatile int8_t x339 = INT8_MIN;
volatile uint32_t t48 = 25931U;
int8_t x351 = INT8_MIN;
uint16_t x352 = 20U;
int32_t t51 = INT32_MAX;
static int8_t x360 = -8;
uint16_t x365 = 17327U;
int64_t x368 = 2421LL;
int64_t t53 = -697144LL;
int16_t x374 = INT16_MIN;
int32_t t54 = -274765493;
int32_t x406 = INT32_MAX;
int64_t x422 = INT64_MIN;
int16_t x423 = INT16_MIN;
int8_t x426 = INT8_MAX;
int32_t x428 = -1;
int64_t x429 = INT64_MIN;
int32_t x431 = -433259;
int64_t x435 = -815LL;
int32_t x438 = -22;
volatile int32_t t65 = 28156;
volatile int8_t x442 = INT8_MIN;
int32_t x445 = 418191702;
static int32_t x453 = 1444605;
static uint32_t x461 = UINT32_MAX;
uint8_t x477 = 17U;
int32_t x495 = INT32_MIN;
int64_t x496 = -173LL;
static int32_t x498 = INT32_MAX;
uint64_t x544 = UINT64_MAX;
static uint32_t t78 = 0U;
int16_t x558 = 468;
int16_t x570 = INT16_MIN;
int32_t x595 = 0;
int16_t x596 = INT16_MAX;
int64_t x613 = 1511271680LL;
static int32_t x621 = INT32_MIN;
int8_t x637 = 12;
volatile int32_t t90 = 5647045;
int32_t x646 = INT32_MIN;
static int32_t x648 = 51;
int64_t x681 = INT64_MIN;
static int16_t x683 = -1;
int16_t x690 = INT16_MIN;
int32_t t97 = 842;
int64_t x696 = 118315825919LL;
uint64_t t98 = 17LLU;
int16_t x698 = INT16_MIN;
volatile int32_t t99 = -1;


void f0(void) {
	uint32_t x2 = 2779U;
	int32_t x4 = INT32_MAX;

	t0 = (x1^(x2/(x3<=x4)));

	if (t0 != 4294964516U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 261200515U;
	int8_t x6 = INT8_MIN;
	static int32_t x7 = -1;
	volatile uint16_t x8 = 3U;
	static uint32_t t1 = 24U;

	t1 = (x5^(x6/(x7<=x8)));

	if (t1 != 4033766659U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1;
	static int16_t x10 = INT16_MIN;
	int64_t x11 = -449676462878552LL;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = -480;

	t2 = (x9^(x10/(x11<=x12)));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -9600;
	int16_t x15 = INT16_MIN;
	static int64_t t3 = 15LL;

	t3 = (x13^(x14/(x15<=x16)));

	if (t3 != 9599LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 3;
	uint64_t x26 = 2360171460878302LLU;
	static int16_t x27 = INT16_MIN;
	int32_t x28 = 220;

	t4 = (x25^(x26/(x27<=x28)));

	if (t4 != 2360171460878301LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 329U;
	volatile int64_t t5 = 4800001951LL;

	t5 = (x49^(x50/(x51<=x52)));

	if (t5 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x53 = UINT16_MAX;
	static int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	volatile int16_t x56 = -1;
	int32_t t6 = 11;

	t6 = (x53^(x54/(x55<=x56)));

	if (t6 != -65536) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = 1;
	volatile int64_t x58 = INT64_MIN;
	uint32_t x59 = 1021U;
	int16_t x60 = INT16_MIN;
	static int64_t t7 = -1204LL;

	t7 = (x57^(x58/(x59<=x60)));

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	static int8_t x67 = INT8_MIN;
	int64_t x68 = INT64_MAX;
	int64_t t8 = 380964191LL;

	t8 = (x65^(x66/(x67<=x68)));

	if (t8 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x77 = -1;
	uint8_t x79 = 20U;
	volatile int32_t t9 = INT32_MAX;

	t9 = (x77^(x78/(x79<=x80)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x81 = -10480064;
	uint64_t x82 = UINT64_MAX;
	uint8_t x83 = 75U;
	int64_t x84 = 29287966LL;
	static uint64_t t10 = 1037929182017LLU;

	t10 = (x81^(x82/(x83<=x84)));

	if (t10 != 10480063LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x89 = 17043U;
	int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MIN;
	static volatile int32_t t11 = -1;

	t11 = (x89^(x90/(x91<=x92)));

	if (t11 != -2147466605) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x93 = 1319853789U;
	int64_t x94 = INT64_MIN;
	volatile uint8_t x95 = 121U;
	static int8_t x96 = INT8_MAX;
	static volatile int64_t t12 = -135463481944236254LL;

	t12 = (x93^(x94/(x95<=x96)));

	if (t12 != -9223372035534922019LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x97 = 1493U;
	static int64_t x99 = 616LL;
	static uint64_t x100 = UINT64_MAX;
	static int32_t t13 = 15715274;

	t13 = (x97^(x98/(x99<=x100)));

	if (t13 != 1494) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = -1LL;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = INT64_MAX;
	static int64_t t14 = -1LL;

	t14 = (x101^(x102/(x103<=x104)));

	if (t14 != -65536LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x106 = UINT32_MAX;
	static volatile int8_t x107 = 3;
	int64_t t15 = 2LL;

	t15 = (x105^(x106/(x107<=x108)));

	if (t15 != -4294967296LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x109 = -31;
	volatile int8_t x110 = INT8_MAX;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t16 = -14479037;

	t16 = (x109^(x110/(x111<=x112)));

	if (t16 != -98) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = INT64_MAX;
	int64_t x114 = 405LL;
	static uint8_t x115 = 16U;
	int64_t x116 = 10150LL;
	volatile int64_t t17 = 19114309735LL;

	t17 = (x113^(x114/(x115<=x116)));

	if (t17 != 9223372036854775402LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x117 = -4;
	volatile int8_t x118 = INT8_MAX;
	static int32_t x119 = INT32_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile int32_t t18 = -262188335;

	t18 = (x117^(x118/(x119<=x120)));

	if (t18 != -125) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x125 = INT8_MIN;
	static int32_t x128 = 0;
	int64_t t19 = -418505478689803957LL;

	t19 = (x125^(x126/(x127<=x128)));

	if (t19 != 3448920084126LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x141 = -1;
	int32_t x142 = INT32_MIN;
	static int64_t x143 = INT64_MIN;
	int32_t x144 = -1;

	t20 = (x141^(x142/(x143<=x144)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x153 = 1565383LL;
	static int16_t x154 = -510;
	int64_t x156 = INT64_MAX;
	int64_t t21 = 64LL;

	t21 = (x153^(x154/(x155<=x156)));

	if (t21 != -1565499LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x161 = 1U;
	int16_t x162 = INT16_MIN;
	static int16_t x163 = INT16_MIN;
	int32_t x164 = -1;
	int32_t t22 = -2;

	t22 = (x161^(x162/(x163<=x164)));

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x170 = INT8_MIN;
	static int64_t x171 = -1LL;
	uint32_t x172 = 4454392U;
	int64_t t23 = 1080811980064673LL;

	t23 = (x169^(x170/(x171<=x172)));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x173 = INT64_MAX;
	int32_t x174 = 204083379;
	static uint64_t x176 = 34126741730778LLU;
	static int64_t t24 = 17216LL;

	t24 = (x173^(x174/(x175<=x176)));

	if (t24 != 9223372036650692428LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MAX;
	static int8_t x179 = -1;
	static int64_t t25 = -4015344934314LL;

	t25 = (x177^(x178/(x179<=x180)));

	if (t25 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x185 = 956U;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 1115537U;
	volatile int8_t x188 = INT8_MIN;
	uint32_t t26 = 1234638980U;

	t26 = (x185^(x186/(x187<=x188)));

	if (t26 != 2147484604U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x193 = 30067U;
	int32_t x194 = -1;
	static uint8_t x195 = 63U;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t27 = 277;

	t27 = (x193^(x194/(x195<=x196)));

	if (t27 != -30068) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x197 = 28986U;
	uint64_t x198 = 3797070LLU;
	uint32_t x199 = 39454U;
	int64_t x200 = 29550309654589462LL;
	volatile uint64_t t28 = 623502326LLU;

	t28 = (x197^(x198/(x199<=x200)));

	if (t28 != 3768692LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x202 = INT64_MIN;
	uint16_t x203 = 1U;
	uint8_t x204 = 6U;
	volatile int64_t t29 = -3LL;

	t29 = (x201^(x202/(x203<=x204)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x205 = 13706175592LLU;
	int64_t x206 = INT64_MIN;
	int16_t x207 = -1;
	static volatile uint16_t x208 = 374U;
	volatile uint64_t t30 = 240263484LLU;

	t30 = (x205^(x206/(x207<=x208)));

	if (t30 != 9223372050560951400LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x221 = -1;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x221^(x222/(x223<=x224)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = -156479509;
	int32_t x232 = INT32_MAX;
	uint64_t t32 = 2438604745947809495LLU;

	t32 = (x229^(x230/(x231<=x232)));

	if (t32 != 65226LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x241 = INT64_MIN;
	volatile int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 1U;

	t33 = (x241^(x242/(x243<=x244)));

	if (t33 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x245 = -1;
	static int8_t x247 = -1;
	volatile int32_t t34 = -50684;

	t34 = (x245^(x246/(x247<=x248)));

	if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x257 = 14890U;
	int64_t x258 = -1LL;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 57U;
	int64_t t35 = -289547648LL;

	t35 = (x257^(x258/(x259<=x260)));

	if (t35 != -14891LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x262 = -1;
	static int16_t x263 = -1;
	uint8_t x264 = 4U;

	t36 = (x261^(x262/(x263<=x264)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x265 = -1LL;
	volatile int16_t x267 = -897;
	int8_t x268 = -1;
	static volatile int64_t t37 = -467LL;

	t37 = (x265^(x266/(x267<=x268)));

	if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x273 = 6;
	int64_t x275 = INT64_MIN;
	int32_t t38 = -1698;

	t38 = (x273^(x274/(x275<=x276)));

	if (t38 != -7) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MAX;
	static int16_t x279 = INT16_MIN;

	t39 = (x277^(x278/(x279<=x280)));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x285 = -1;
	int16_t x286 = 63;
	int8_t x287 = -1;
	static volatile uint16_t x288 = 41U;

	t40 = (x285^(x286/(x287<=x288)));

	if (t40 != -64) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x289 = -1LL;
	static int8_t x290 = INT8_MIN;
	uint64_t x291 = 16055033LLU;
	static volatile int16_t x292 = INT16_MIN;

	t41 = (x289^(x290/(x291<=x292)));

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x301 = -1;
	int16_t x302 = INT16_MAX;
	uint8_t x304 = 72U;
	int32_t t42 = -55;

	t42 = (x301^(x302/(x303<=x304)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MIN;
	int8_t x312 = 2;
	static int32_t t43 = 306873358;

	t43 = (x309^(x310/(x311<=x312)));

	if (t43 != 32640) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x317 = 235U;
	volatile int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MIN;
	static volatile uint32_t t44 = 1348U;

	t44 = (x317^(x318/(x319<=x320)));

	if (t44 != 2147483883U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x325 = 14828LLU;
	uint64_t x326 = 15727462LLU;
	static int16_t x327 = -11;
	int16_t x328 = INT16_MAX;
	uint64_t t45 = 2729603LLU;

	t45 = (x325^(x326/(x327<=x328)));

	if (t45 != 15712906LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x329 = 9713;
	int32_t x331 = -438506017;

	t46 = (x329^(x330/(x331<=x332)));

	if (t46 != -9714) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x337 = -7730;
	uint8_t x340 = 2U;
	static volatile int32_t t47 = -391699;

	t47 = (x337^(x338/(x339<=x340)));

	if (t47 != -7887) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x341 = INT8_MIN;
	uint32_t x342 = 0U;
	uint16_t x343 = 3U;
	uint8_t x344 = UINT8_MAX;

	t48 = (x341^(x342/(x343<=x344)));

	if (t48 != 4294967168U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x345 = 12;
	volatile int64_t x346 = INT64_MIN;
	volatile int8_t x347 = INT8_MIN;
	int8_t x348 = -2;
	volatile int64_t t49 = 606207083748370574LL;

	t49 = (x345^(x346/(x347<=x348)));

	if (t49 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	volatile int32_t t50 = -1714;

	t50 = (x349^(x350/(x351<=x352)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = 0;
	int64_t x355 = INT64_MIN;
	int8_t x356 = 6;

	t51 = (x353^(x354/(x355<=x356)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x357 = -1LL;
	int16_t x358 = 13339;
	static int8_t x359 = INT8_MIN;
	volatile int64_t t52 = 356LL;

	t52 = (x357^(x358/(x359<=x360)));

	if (t52 != -13340LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x366 = INT64_MIN;
	int64_t x367 = -6924850LL;

	t53 = (x365^(x366/(x367<=x368)));

	if (t53 != -9223372036854758481LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x373 = UINT8_MAX;
	static volatile int32_t x375 = 15867758;
	volatile uint32_t x376 = 22385651U;

	t54 = (x373^(x374/(x375<=x376)));

	if (t54 != -32513) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x381 = 300724115LLU;
	int32_t x382 = -3504745;
	static int32_t x383 = 0;
	uint16_t x384 = UINT16_MAX;
	uint64_t t55 = 427073190LLU;

	t55 = (x381^(x382/(x383<=x384)));

	if (t55 != 18446744073410062852LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = -3721;
	volatile int16_t x387 = -1;
	static volatile int8_t x388 = INT8_MAX;
	uint64_t t56 = 132776577596326491LLU;

	t56 = (x385^(x386/(x387<=x388)));

	if (t56 != 3720LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x393 = INT16_MAX;
	static int16_t x394 = INT16_MAX;
	int16_t x395 = INT16_MIN;
	int32_t x396 = 109;
	int32_t t57 = 35518;

	t57 = (x393^(x394/(x395<=x396)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x401 = 25634523;
	volatile uint64_t x402 = 5634967197774LLU;
	static volatile uint16_t x403 = 1907U;
	int64_t x404 = INT64_MAX;
	volatile uint64_t t58 = 2479LLU;

	t58 = (x401^(x402/(x403<=x404)));

	if (t58 != 5634991914645LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x405 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	static int8_t x408 = 12;
	volatile int32_t t59 = -121;

	t59 = (x405^(x406/(x407<=x408)));

	if (t59 != -2147450881) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x414 = 419U;
	int16_t x415 = INT16_MAX;
	uint64_t x416 = 3485181673LLU;
	uint32_t t60 = 513311U;

	t60 = (x413^(x414/(x415<=x416)));

	if (t60 != 4294966819U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x421 = 50U;
	volatile uint64_t x424 = UINT64_MAX;
	int64_t t61 = 83145197027459LL;

	t61 = (x421^(x422/(x423<=x424)));

	if (t61 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x425 = 3;
	uint64_t x427 = UINT64_MAX;
	int32_t t62 = -741627;

	t62 = (x425^(x426/(x427<=x428)));

	if (t62 != 124) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x430 = 0;
	int16_t x432 = -1;
	int64_t t63 = INT64_MIN;

	t63 = (x429^(x430/(x431<=x432)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x433 = 977020663U;
	int32_t x434 = INT32_MIN;
	uint32_t x436 = UINT32_MAX;
	static volatile uint32_t t64 = 792654621U;

	t64 = (x433^(x434/(x435<=x436)));

	if (t64 != 3124504311U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x437 = INT8_MAX;
	int16_t x439 = 4755;
	volatile uint64_t x440 = UINT64_MAX;

	t65 = (x437^(x438/(x439<=x440)));

	if (t65 != -107) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x441 = 1475785727LLU;
	int64_t x443 = INT64_MIN;
	int16_t x444 = INT16_MIN;
	volatile uint64_t t66 = 551050067138425258LLU;

	t66 = (x441^(x442/(x443<=x444)));

	if (t66 != 18446744072233766015LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MIN;
	volatile uint32_t x448 = UINT32_MAX;
	volatile uint32_t t67 = 2U;

	t67 = (x445^(x446/(x447<=x448)));

	if (t67 != 3876775593U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x449 = INT8_MIN;
	int16_t x450 = -339;
	uint32_t x451 = 23831U;
	volatile int16_t x452 = INT16_MAX;
	volatile int32_t t68 = 16532659;

	t68 = (x449^(x450/(x451<=x452)));

	if (t68 != 301) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x454 = INT8_MIN;
	static uint16_t x455 = UINT16_MAX;
	static volatile int64_t x456 = INT64_MAX;
	volatile int32_t t69 = -5600461;

	t69 = (x453^(x454/(x455<=x456)));

	if (t69 != -1444483) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x462 = INT16_MAX;
	int8_t x463 = -43;
	int32_t x464 = -4;
	volatile uint32_t t70 = 113840U;

	t70 = (x461^(x462/(x463<=x464)));

	if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x465 = 1U;
	int32_t x466 = -5420;
	int8_t x467 = INT8_MAX;
	int16_t x468 = INT16_MAX;
	static volatile int32_t t71 = 4960;

	t71 = (x465^(x466/(x467<=x468)));

	if (t71 != -5419) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x469 = 11LLU;
	volatile int64_t x470 = 14LL;
	int16_t x471 = INT16_MIN;
	static volatile int16_t x472 = -22;
	volatile uint64_t t72 = 1429601584LLU;

	t72 = (x469^(x470/(x471<=x472)));

	if (t72 != 5LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x478 = 5694136135598LLU;
	uint16_t x479 = 16U;
	static int64_t x480 = 5269792511LL;
	uint64_t t73 = 33419624624LLU;

	t73 = (x477^(x478/(x479<=x480)));

	if (t73 != 5694136135615LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x493 = -2988;
	int8_t x494 = INT8_MAX;
	volatile int32_t t74 = -51260;

	t74 = (x493^(x494/(x495<=x496)));

	if (t74 != -3029) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x497 = INT8_MAX;
	volatile int32_t x499 = -24992927;
	int64_t x500 = INT64_MAX;
	volatile int32_t t75 = 11445;

	t75 = (x497^(x498/(x499<=x500)));

	if (t75 != 2147483520) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x529 = -1046975LL;
	int32_t x530 = -1;
	int8_t x531 = INT8_MIN;
	int32_t x532 = 36196209;
	volatile int64_t t76 = 2179575775LL;

	t76 = (x529^(x530/(x531<=x532)));

	if (t76 != 1046974LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x541 = UINT16_MAX;
	volatile int8_t x542 = -1;
	int64_t x543 = -1LL;
	int32_t t77 = 6;

	t77 = (x541^(x542/(x543<=x544)));

	if (t77 != -65536) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x549 = 155551258U;
	static int16_t x550 = INT16_MIN;
	int16_t x551 = 218;
	volatile uint64_t x552 = UINT64_MAX;

	t78 = (x549^(x550/(x551<=x552)));

	if (t78 != 4139386394U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x557 = 389;
	int16_t x559 = 0;
	int32_t x560 = INT32_MAX;
	int32_t t79 = -358261024;

	t79 = (x557^(x558/(x559<=x560)));

	if (t79 != 81) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x561 = INT64_MIN;
	uint16_t x562 = 9668U;
	uint32_t x563 = 12889906U;
	uint64_t x564 = UINT64_MAX;
	volatile int64_t t80 = -1245751019153LL;

	t80 = (x561^(x562/(x563<=x564)));

	if (t80 != -9223372036854766140LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x565 = -1140;
	int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MIN;
	int16_t x568 = -1;
	static int64_t t81 = 1136LL;

	t81 = (x565^(x566/(x567<=x568)));

	if (t81 != 9223372036854774668LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x569 = INT32_MIN;
	int64_t x571 = -1LL;
	int32_t x572 = -1;
	volatile int32_t t82 = 4;

	t82 = (x569^(x570/(x571<=x572)));

	if (t82 != 2147450880) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x581 = -1LL;
	uint8_t x582 = 91U;
	int64_t x583 = INT64_MIN;
	int16_t x584 = -1;
	volatile int64_t t83 = -3977283974LL;

	t83 = (x581^(x582/(x583<=x584)));

	if (t83 != -92LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x589 = 1U;
	uint32_t x590 = UINT32_MAX;
	static volatile int16_t x591 = 1804;
	int64_t x592 = 551198941LL;
	volatile uint32_t t84 = 21593922U;

	t84 = (x589^(x590/(x591<=x592)));

	if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x593 = -1;
	static int32_t x594 = -1;
	volatile int32_t t85 = -19186629;

	t85 = (x593^(x594/(x595<=x596)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x597 = INT16_MAX;
	static volatile uint32_t x598 = 27968303U;
	volatile uint8_t x599 = 32U;
	uint32_t x600 = 434927458U;
	static volatile uint32_t t86 = 828630181U;

	t86 = (x597^(x598/(x599<=x600)));

	if (t86 != 27966672U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x601 = -36291;
	int64_t x602 = -1LL;
	int8_t x603 = -1;
	int8_t x604 = -1;
	int64_t t87 = 1695686051007834581LL;

	t87 = (x601^(x602/(x603<=x604)));

	if (t87 != 36290LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x614 = -1;
	volatile int8_t x615 = INT8_MIN;
	uint64_t x616 = UINT64_MAX;
	static int64_t t88 = -149LL;

	t88 = (x613^(x614/(x615<=x616)));

	if (t88 != -1511271681LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x622 = -1;
	int16_t x623 = -1;
	static volatile int64_t x624 = -1LL;
	volatile int32_t t89 = INT32_MAX;

	t89 = (x621^(x622/(x623<=x624)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x638 = UINT8_MAX;
	static volatile int32_t x639 = -174677784;
	int8_t x640 = 13;

	t90 = (x637^(x638/(x639<=x640)));

	if (t90 != 243) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x641 = INT32_MIN;
	static int64_t x642 = -372552673900872LL;
	int32_t x643 = INT32_MIN;
	static int32_t x644 = 698386;
	volatile int64_t t91 = -6738841765843210LL;

	t91 = (x641^(x642/(x643<=x644)));

	if (t91 != 372553284994744LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x645 = -45;
	volatile int64_t x647 = INT64_MIN;
	int32_t t92 = 0;

	t92 = (x645^(x646/(x647<=x648)));

	if (t92 != 2147483603) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x649 = INT8_MIN;
	int64_t x650 = -677570492106761LL;
	int32_t x651 = INT32_MIN;
	int8_t x652 = INT8_MIN;
	volatile int64_t t93 = 12LL;

	t93 = (x649^(x650/(x651<=x652)));

	if (t93 != 677570492106871LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x653 = -242317539LL;
	static uint64_t x654 = 2312934644937571LLU;
	uint16_t x655 = 11270U;
	uint32_t x656 = 244970U;
	uint64_t t94 = 9LLU;

	t94 = (x653^(x654/(x655<=x656)));

	if (t94 != 18444431139304699006LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x657 = INT32_MAX;
	int32_t x658 = -1;
	int16_t x659 = -1;
	volatile uint16_t x660 = 2U;
	static int32_t t95 = INT32_MIN;

	t95 = (x657^(x658/(x659<=x660)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x682 = INT64_MIN;
	int32_t x684 = INT32_MAX;
	volatile int64_t t96 = 1677241LL;

	t96 = (x681^(x682/(x683<=x684)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x689 = 397;
	static uint16_t x691 = 2U;
	volatile uint64_t x692 = 14327433335LLU;

	t97 = (x689^(x690/(x691<=x692)));

	if (t97 != -32371) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x693 = UINT8_MAX;
	uint64_t x694 = 302813657080162917LLU;
	int8_t x695 = INT8_MIN;

	t98 = (x693^(x694/(x695<=x696)));

	if (t98 != 302813657080162970LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x697 = 0U;
	int32_t x699 = -204;
	int32_t x700 = -1;

	t99 = (x697^(x698/(x699<=x700)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

