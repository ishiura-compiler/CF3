#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -12;
uint64_t x3 = UINT64_MAX;
int32_t x6 = INT32_MAX;
volatile uint32_t x8 = 3U;
static volatile uint8_t x26 = 0U;
int16_t x32 = 69;
uint16_t x36 = 5U;
int64_t x50 = INT64_MAX;
volatile int64_t x52 = 1545563925149397LL;
volatile int32_t x81 = INT32_MAX;
static volatile int8_t x84 = INT8_MIN;
volatile int32_t t11 = -7015790;
uint32_t x98 = 104548U;
uint16_t x99 = UINT16_MAX;
volatile uint64_t t15 = 1LLU;
volatile uint8_t x128 = 44U;
int32_t x139 = INT32_MIN;
static volatile uint8_t x168 = UINT8_MAX;
volatile uint32_t t23 = 912720448U;
volatile int8_t x194 = 2;
uint64_t x201 = 5LLU;
volatile int64_t x204 = -3821641679LL;
int32_t t30 = -46125;
uint64_t t31 = 94LLU;
static int8_t x238 = -1;
volatile int32_t x253 = INT32_MIN;
int8_t x260 = INT8_MAX;
volatile int16_t x262 = INT16_MIN;
int64_t x267 = 47871558224487LL;
int64_t x277 = 53888209391587230LL;
int16_t x280 = INT16_MIN;
static uint8_t x285 = 22U;
volatile uint32_t x293 = UINT32_MAX;
int32_t x294 = -1;
int64_t x307 = INT64_MAX;
uint16_t x315 = 1802U;
volatile uint8_t x321 = UINT8_MAX;
static volatile int8_t x326 = -3;
uint64_t x328 = 2824350800082623LLU;
static int32_t t45 = -449035;
volatile int16_t x344 = INT16_MAX;
int32_t x370 = INT32_MIN;
int32_t x382 = INT32_MIN;
int64_t x384 = INT64_MAX;
static volatile int64_t t52 = -3102216LL;
static int16_t x408 = 1839;
uint8_t x412 = 7U;
static int8_t x416 = 21;
int64_t x419 = INT64_MAX;
volatile int8_t x427 = -15;
int64_t x431 = INT64_MIN;
static int32_t x439 = -51292754;
uint32_t x442 = 2991U;
int64_t x448 = INT64_MIN;
volatile uint32_t t63 = 10570U;
int64_t x452 = INT64_MAX;
int64_t x458 = INT64_MAX;
volatile int32_t t67 = -1018968;
volatile int16_t x486 = -1;
int64_t x494 = -397792790489025762LL;
int32_t x495 = INT32_MAX;
int16_t x501 = -41;
int64_t x504 = 2039467196LL;
int64_t x510 = INT64_MIN;
volatile uint64_t x517 = 6198730459LLU;
int8_t x518 = -1;
static int64_t x524 = INT64_MIN;
volatile uint32_t x530 = 8U;
volatile int64_t x532 = INT64_MAX;
int32_t t77 = INT32_MAX;
uint64_t x544 = 24631997442544LLU;
int8_t x558 = -5;
int16_t x569 = -1;
static volatile uint64_t x571 = 368334LLU;
static uint16_t x577 = 229U;
int32_t x579 = INT32_MIN;
static int8_t x580 = INT8_MAX;
volatile int32_t t83 = -5295605;
volatile uint64_t x596 = 18927LLU;
int8_t x615 = INT8_MIN;
uint16_t x624 = 254U;
uint32_t t88 = 0U;
uint16_t x631 = 23U;
static uint64_t x637 = 454958075010163LLU;
volatile int32_t t92 = -49112123;
int32_t x653 = INT32_MAX;
uint64_t x656 = 112260LLU;
int32_t x657 = INT32_MIN;
uint64_t x658 = 187LLU;
volatile uint64_t t96 = 25201LLU;
uint64_t x674 = 92382044831LLU;
int16_t x677 = 2793;
uint16_t x679 = 2U;


void f0(void) {
	static int8_t x2 = -1;
	int8_t x4 = -1;
	int32_t t0 = 94480;

	t0 = ((x1^x2)<<(x3<=x4));

	if (t0 != 22) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 1U;
	volatile int16_t x7 = INT16_MAX;
	volatile int32_t t1 = 26;

	t1 = ((x5^x6)<<(x7<=x8));

	if (t1 != 2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = 10;
	int8_t x27 = INT8_MIN;
	int32_t x28 = -13646;
	volatile int32_t t2 = 6;

	t2 = ((x25^x26)<<(x27<=x28));

	if (t2 != 10) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x29 = UINT32_MAX;
	uint16_t x30 = 0U;
	int32_t x31 = INT32_MIN;
	uint32_t t3 = 0U;

	t3 = ((x29^x30)<<(x31<=x32));

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x33 = -1;
	int64_t x34 = -1LL;
	int32_t x35 = 4931;
	int64_t t4 = -26949470LL;

	t4 = ((x33^x34)<<(x35<=x36));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x45 = 2941181891677LLU;
	uint16_t x46 = 14527U;
	int64_t x47 = -1LL;
	uint16_t x48 = 0U;
	static volatile uint64_t t5 = 75665885LLU;

	t5 = ((x45^x46)<<(x47<=x48));

	if (t5 != 5882363795908LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = 42LLU;
	int16_t x51 = -1;
	static uint64_t t6 = 40278LLU;

	t6 = ((x49^x50)<<(x51<=x52));

	if (t6 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x57 = INT32_MAX;
	static uint8_t x58 = UINT8_MAX;
	int16_t x59 = -1;
	volatile int32_t x60 = -4067066;
	static volatile int32_t t7 = 311184;

	t7 = ((x57^x58)<<(x59<=x60));

	if (t7 != 2147483392) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x69 = -1LL;
	static volatile int64_t x70 = -1LL;
	volatile int32_t x71 = -1;
	uint16_t x72 = 0U;
	volatile int64_t t8 = 11710LL;

	t8 = ((x69^x70)<<(x71<=x72));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x77 = 58U;
	uint32_t x78 = 7750495U;
	uint8_t x79 = 2U;
	int8_t x80 = -14;
	static uint32_t t9 = 7U;

	t9 = ((x77^x78)<<(x79<=x80));

	if (t9 != 7750501U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x82 = 25;
	int16_t x83 = -1;
	int32_t t10 = -2483545;

	t10 = ((x81^x82)<<(x83<=x84));

	if (t10 != 2147483622) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = -126;
	int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MAX;
	int32_t x88 = INT32_MIN;

	t11 = ((x85^x86)<<(x87<=x88));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x93 = UINT64_MAX;
	int16_t x94 = -2;
	uint8_t x95 = 27U;
	volatile int32_t x96 = 44;
	uint64_t t12 = 11472LLU;

	t12 = ((x93^x94)<<(x95<=x96));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x97 = INT32_MAX;
	int16_t x100 = INT16_MAX;
	uint32_t t13 = 4791254U;

	t13 = ((x97^x98)<<(x99<=x100));

	if (t13 != 2147379099U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x105 = INT32_MIN;
	volatile int64_t x106 = -1LL;
	int8_t x107 = 1;
	static int64_t x108 = -3881382410000LL;
	volatile int64_t t14 = -46LL;

	t14 = ((x105^x106)<<(x107<=x108));

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = INT64_MAX;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = 1072183739LL;
	int8_t x112 = INT8_MAX;

	t15 = ((x109^x110)<<(x111<=x112));

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x125 = INT8_MAX;
	static volatile uint64_t x126 = UINT64_MAX;
	int8_t x127 = -1;
	uint64_t t16 = 5086066614LLU;

	t16 = ((x125^x126)<<(x127<=x128));

	if (t16 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x129 = 2U;
	uint64_t x130 = 6087178LLU;
	int16_t x131 = INT16_MAX;
	int8_t x132 = -40;
	uint64_t t17 = 1548756430LLU;

	t17 = ((x129^x130)<<(x131<=x132));

	if (t17 != 6087176LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x137 = -262676LL;
	static volatile uint64_t x138 = 66638216725063015LLU;
	volatile uint32_t x140 = 4468418U;
	uint64_t t18 = 72345955617654LLU;

	t18 = ((x137^x138)<<(x139<=x140));

	if (t18 != 18380105856984750219LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x141 = UINT64_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 1969754U;
	uint64_t x144 = UINT64_MAX;
	static uint64_t t19 = 264881094LLU;

	t19 = ((x141^x142)<<(x143<=x144));

	if (t19 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x145 = 21;
	uint16_t x146 = 198U;
	static int8_t x147 = INT8_MIN;
	volatile uint64_t x148 = 403131652708356602LLU;
	int32_t t20 = -1540814;

	t20 = ((x145^x146)<<(x147<=x148));

	if (t20 != 211) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x153 = INT32_MAX;
	static uint32_t x154 = 354U;
	volatile int16_t x155 = INT16_MAX;
	static uint8_t x156 = 121U;
	uint32_t t21 = 1U;

	t21 = ((x153^x154)<<(x155<=x156));

	if (t21 != 2147483293U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x161 = 558;
	int64_t x162 = 130873044602LL;
	volatile int8_t x163 = -3;
	int64_t x164 = -1LL;
	static volatile int64_t t22 = -359835LL;

	t22 = ((x161^x162)<<(x163<=x164));

	if (t22 != 261746088104LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x165 = UINT32_MAX;
	uint8_t x166 = 3U;
	int64_t x167 = -1LL;

	t23 = ((x165^x166)<<(x167<=x168));

	if (t23 != 4294967288U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x173 = 168668U;
	int16_t x174 = -1;
	volatile int32_t x175 = -1;
	int64_t x176 = INT64_MIN;
	static uint32_t t24 = 3U;

	t24 = ((x173^x174)<<(x175<=x176));

	if (t24 != 4294798627U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x177 = 4U;
	int32_t x178 = INT32_MAX;
	int16_t x179 = INT16_MIN;
	static volatile uint32_t x180 = 587020U;
	int32_t t25 = -29629;

	t25 = ((x177^x178)<<(x179<=x180));

	if (t25 != 2147483643) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t26 = -1;

	t26 = ((x185^x186)<<(x187<=x188));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x189 = 108903U;
	int32_t x190 = INT32_MAX;
	uint16_t x191 = 1U;
	uint32_t x192 = 0U;
	volatile uint32_t t27 = 61769483U;

	t27 = ((x189^x190)<<(x191<=x192));

	if (t27 != 2147374744U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x193 = 2U;
	static int64_t x195 = -14511570LL;
	static uint8_t x196 = 8U;
	volatile int32_t t28 = -94731250;

	t28 = ((x193^x194)<<(x195<=x196));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x202 = 3U;
	int16_t x203 = INT16_MIN;
	uint64_t t29 = 3209004762890LLU;

	t29 = ((x201^x202)<<(x203<=x204));

	if (t29 != 6LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	static int16_t x211 = INT16_MIN;
	static uint64_t x212 = 372713632506573241LLU;

	t30 = ((x209^x210)<<(x211<=x212));

	if (t30 != 2147450880) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 4377989468LLU;
	int8_t x235 = INT8_MIN;
	volatile int64_t x236 = INT64_MAX;

	t31 = ((x233^x234)<<(x235<=x236));

	if (t31 != 8755895622LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x237 = -1LL;
	uint16_t x239 = 31U;
	int16_t x240 = -1;
	int64_t t32 = -329630LL;

	t32 = ((x237^x238)<<(x239<=x240));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x254 = -140;
	volatile int8_t x255 = -3;
	volatile uint32_t x256 = 148110330U;
	int32_t t33 = -97699;

	t33 = ((x253^x254)<<(x255<=x256));

	if (t33 != 2147483508) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x257 = -1;
	uint64_t x258 = UINT64_MAX;
	int32_t x259 = INT32_MIN;
	uint64_t t34 = 3185697659LLU;

	t34 = ((x257^x258)<<(x259<=x260));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x261 = 4044748966432LLU;
	int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t35 = 14455LLU;

	t35 = ((x261^x262)<<(x263<=x264));

	if (t35 != 18446735984211629120LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x265 = -1;
	int32_t x266 = INT32_MIN;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t36 = INT32_MAX;

	t36 = ((x265^x266)<<(x267<=x268));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x278 = INT32_MAX;
	static volatile int64_t x279 = INT64_MIN;
	static int64_t t37 = -480210073260040LL;

	t37 = ((x277^x278)<<(x279<=x280));

	if (t37 != 107776414866202818LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x286 = 18996487LL;
	int16_t x287 = -5;
	volatile int8_t x288 = -1;
	static int64_t t38 = 713517656LL;

	t38 = ((x285^x286)<<(x287<=x288));

	if (t38 != 37992994LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x295 = 14881166590337253LL;
	int32_t x296 = -1;
	volatile uint32_t t39 = 756U;

	t39 = ((x293^x294)<<(x295<=x296));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x301 = 323523068503786905LLU;
	volatile int16_t x302 = INT16_MIN;
	volatile int32_t x303 = 3612;
	static int8_t x304 = 1;
	uint64_t t40 = 357472235404977567LLU;

	t40 = ((x301^x302)<<(x303<=x304));

	if (t40 != 18123221005205734809LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x305 = INT64_MAX;
	static uint16_t x306 = UINT16_MAX;
	int8_t x308 = INT8_MIN;
	volatile int64_t t41 = -2351647114LL;

	t41 = ((x305^x306)<<(x307<=x308));

	if (t41 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x313 = 15925486;
	int8_t x314 = 0;
	uint64_t x316 = 453751573888602650LLU;
	volatile int32_t t42 = 376;

	t42 = ((x313^x314)<<(x315<=x316));

	if (t42 != 31850972) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x322 = 0U;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = 1;
	uint32_t t43 = 61U;

	t43 = ((x321^x322)<<(x323<=x324));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x325 = -1LL;
	uint32_t x327 = UINT32_MAX;
	volatile int64_t t44 = -41LL;

	t44 = ((x325^x326)<<(x327<=x328));

	if (t44 != 4LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x329 = 7470669;
	uint16_t x330 = 9U;
	volatile int64_t x331 = -7751946991942578LL;
	static volatile int32_t x332 = -1;

	t45 = ((x329^x330)<<(x331<=x332));

	if (t45 != 14941320) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x341 = 3LLU;
	uint16_t x342 = UINT16_MAX;
	int64_t x343 = 41530LL;
	volatile uint64_t t46 = 404936936738708189LLU;

	t46 = ((x341^x342)<<(x343<=x344));

	if (t46 != 65532LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x345 = INT16_MAX;
	uint32_t x346 = 96U;
	volatile uint16_t x347 = 10821U;
	int64_t x348 = INT64_MIN;
	uint32_t t47 = 40U;

	t47 = ((x345^x346)<<(x347<=x348));

	if (t47 != 32671U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x357 = -1;
	volatile uint32_t x358 = 104375293U;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = -1;
	volatile uint32_t t48 = 3U;

	t48 = ((x357^x358)<<(x359<=x360));

	if (t48 != 4190592002U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x369 = INT32_MIN;
	volatile int32_t x371 = -1;
	volatile uint8_t x372 = 3U;
	volatile int32_t t49 = -2;

	t49 = ((x369^x370)<<(x371<=x372));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x373 = INT8_MIN;
	uint32_t x374 = UINT32_MAX;
	volatile int64_t x375 = -1LL;
	int8_t x376 = 1;
	volatile uint32_t t50 = 52282962U;

	t50 = ((x373^x374)<<(x375<=x376));

	if (t50 != 254U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x377 = 60;
	uint8_t x378 = UINT8_MAX;
	uint8_t x379 = 0U;
	uint16_t x380 = 87U;
	static volatile int32_t t51 = 7782627;

	t51 = ((x377^x378)<<(x379<=x380));

	if (t51 != 390) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x381 = -1LL;
	int64_t x383 = INT64_MIN;

	t52 = ((x381^x382)<<(x383<=x384));

	if (t52 != 4294967294LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x385 = -632;
	volatile uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MAX;
	static uint32_t x388 = 2042940U;
	uint64_t t53 = 0LLU;

	t53 = ((x385^x386)<<(x387<=x388));

	if (t53 != 1262LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x397 = INT16_MIN;
	static int16_t x398 = INT16_MIN;
	int8_t x399 = -1;
	static int8_t x400 = INT8_MIN;
	int32_t t54 = -45;

	t54 = ((x397^x398)<<(x399<=x400));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x405 = 1U;
	uint8_t x406 = UINT8_MAX;
	uint8_t x407 = UINT8_MAX;
	int32_t t55 = -795697;

	t55 = ((x405^x406)<<(x407<=x408));

	if (t55 != 508) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x409 = UINT16_MAX;
	uint64_t x410 = 25300271316433373LLU;
	uint64_t x411 = 55327669012LLU;
	uint64_t t56 = 200274LLU;

	t56 = ((x409^x410)<<(x411<=x412));

	if (t56 != 25300271316436514LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x413 = 2058;
	static int16_t x414 = INT16_MAX;
	volatile uint16_t x415 = UINT16_MAX;
	int32_t t57 = -121884;

	t57 = ((x413^x414)<<(x415<=x416));

	if (t57 != 30709) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x417 = 0U;
	int32_t x418 = INT32_MAX;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = ((x417^x418)<<(x419<=x420));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x425 = 10444665U;
	int16_t x426 = -1;
	volatile uint64_t x428 = 7LLU;
	uint32_t t59 = 27738166U;

	t59 = ((x425^x426)<<(x427<=x428));

	if (t59 != 4284522630U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x429 = -1;
	int8_t x430 = -1;
	static volatile uint8_t x432 = 21U;
	int32_t t60 = -527;

	t60 = ((x429^x430)<<(x431<=x432));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x437 = 4177832016396468331LLU;
	volatile int16_t x438 = INT16_MIN;
	int64_t x440 = INT64_MIN;
	static uint64_t t61 = 283524991953332LLU;

	t61 = ((x437^x438)<<(x439<=x440));

	if (t61 != 14268912057313083499LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x441 = 6;
	int64_t x443 = 450476052079LL;
	uint16_t x444 = 6572U;
	volatile uint32_t t62 = 44243209U;

	t62 = ((x441^x442)<<(x443<=x444));

	if (t62 != 2985U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x445 = 46940U;
	uint8_t x446 = 3U;
	volatile uint16_t x447 = 20460U;

	t63 = ((x445^x446)<<(x447<=x448));

	if (t63 != 46943U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x449 = 199281498007LLU;
	int8_t x450 = 21;
	uint64_t x451 = UINT64_MAX;
	static volatile uint64_t t64 = 91667967265LLU;

	t64 = ((x449^x450)<<(x451<=x452));

	if (t64 != 199281497986LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x453 = 15542U;
	int32_t x454 = 1916;
	static int8_t x455 = 0;
	volatile int8_t x456 = 9;
	static int32_t t65 = 1048357830;

	t65 = ((x453^x454)<<(x455<=x456));

	if (t65 != 30612) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x457 = UINT64_MAX;
	static volatile int16_t x459 = -1;
	int8_t x460 = -4;
	static volatile uint64_t t66 = 62553047536582270LLU;

	t66 = ((x457^x458)<<(x459<=x460));

	if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x469 = 7858U;
	int8_t x470 = INT8_MAX;
	int8_t x471 = INT8_MIN;
	volatile int64_t x472 = INT64_MAX;

	t67 = ((x469^x470)<<(x471<=x472));

	if (t67 != 15770) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x485 = -2164;
	volatile uint8_t x487 = UINT8_MAX;
	int32_t x488 = -1;
	volatile int32_t t68 = 12009;

	t68 = ((x485^x486)<<(x487<=x488));

	if (t68 != 2163) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x493 = 27025312LLU;
	int16_t x496 = -2;
	volatile uint64_t t69 = 21356461439LLU;

	t69 = ((x493^x494)<<(x495<=x496));

	if (t69 != 18048951283228667070LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x497 = 90863226U;
	uint32_t x498 = 8321902U;
	int8_t x499 = INT8_MIN;
	volatile int64_t x500 = -1LL;
	static volatile uint32_t t70 = 53083593U;

	t70 = ((x497^x498)<<(x499<=x500));

	if (t70 != 170465832U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x502 = -1;
	int32_t x503 = 690;
	int32_t t71 = 1421461;

	t71 = ((x501^x502)<<(x503<=x504));

	if (t71 != 80) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x509 = -1;
	int32_t x511 = 486112;
	uint16_t x512 = 37U;
	int64_t t72 = INT64_MAX;

	t72 = ((x509^x510)<<(x511<=x512));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x519 = 43LLU;
	uint32_t x520 = 302U;
	volatile uint64_t t73 = 1934376040077770757LLU;

	t73 = ((x517^x518)<<(x519<=x520));

	if (t73 != 18446744061312090696LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x521 = 99LLU;
	static volatile int16_t x522 = -1;
	static int32_t x523 = INT32_MIN;
	volatile uint64_t t74 = 36382885230LLU;

	t74 = ((x521^x522)<<(x523<=x524));

	if (t74 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x525 = 0U;
	volatile uint32_t x526 = 133835U;
	uint32_t x527 = 151668679U;
	int64_t x528 = INT64_MAX;
	volatile uint32_t t75 = 170099U;

	t75 = ((x525^x526)<<(x527<=x528));

	if (t75 != 267670U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x529 = -1;
	int8_t x531 = INT8_MIN;
	static volatile uint32_t t76 = 39U;

	t76 = ((x529^x530)<<(x531<=x532));

	if (t76 != 4294967278U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x533 = -1;
	int32_t x534 = INT32_MIN;
	uint16_t x535 = UINT16_MAX;
	uint8_t x536 = 1U;

	t77 = ((x533^x534)<<(x535<=x536));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x541 = 11LLU;
	static uint64_t x542 = UINT64_MAX;
	uint64_t x543 = 6856155880LLU;
	uint64_t t78 = 66837563986574946LLU;

	t78 = ((x541^x542)<<(x543<=x544));

	if (t78 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x557 = -1;
	static uint8_t x559 = UINT8_MAX;
	int8_t x560 = -62;
	int32_t t79 = 0;

	t79 = ((x557^x558)<<(x559<=x560));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x561 = INT16_MIN;
	static int8_t x562 = INT8_MIN;
	static volatile int16_t x563 = INT16_MAX;
	uint8_t x564 = UINT8_MAX;
	int32_t t80 = -288410971;

	t80 = ((x561^x562)<<(x563<=x564));

	if (t80 != 32640) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x570 = 2055U;
	static int64_t x572 = 36576033371695LL;
	static uint32_t t81 = 246U;

	t81 = ((x569^x570)<<(x571<=x572));

	if (t81 != 4294963184U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x573 = INT16_MIN;
	static int32_t x574 = INT32_MIN;
	static int8_t x575 = -14;
	static uint32_t x576 = 146U;
	volatile int32_t t82 = 192252507;

	t82 = ((x573^x574)<<(x575<=x576));

	if (t82 != 2147450880) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x578 = 7;

	t83 = ((x577^x578)<<(x579<=x580));

	if (t83 != 452) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x589 = 0U;
	uint32_t x590 = 41U;
	int8_t x591 = INT8_MIN;
	int32_t x592 = INT32_MIN;
	uint32_t t84 = 9012U;

	t84 = ((x589^x590)<<(x591<=x592));

	if (t84 != 41U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x593 = 21;
	static volatile uint8_t x594 = 29U;
	static int8_t x595 = INT8_MAX;
	static volatile int32_t t85 = -41;

	t85 = ((x593^x594)<<(x595<=x596));

	if (t85 != 16) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x613 = -188;
	volatile int8_t x614 = INT8_MIN;
	uint64_t x616 = 6651965234201126LLU;
	static int32_t t86 = 388;

	t86 = ((x613^x614)<<(x615<=x616));

	if (t86 != 196) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x617 = UINT64_MAX;
	int64_t x618 = -1LL;
	static volatile int64_t x619 = INT64_MAX;
	static int32_t x620 = -1;
	volatile uint64_t t87 = 258337LLU;

	t87 = ((x617^x618)<<(x619<=x620));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x621 = 16173351U;
	int16_t x622 = -1;
	int16_t x623 = INT16_MIN;

	t88 = ((x621^x622)<<(x623<=x624));

	if (t88 != 4262620592U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x629 = INT16_MAX;
	uint8_t x630 = UINT8_MAX;
	int64_t x632 = 27679LL;
	volatile int32_t t89 = -270282;

	t89 = ((x629^x630)<<(x631<=x632));

	if (t89 != 65024) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x633 = 1U;
	volatile int64_t x634 = 4LL;
	int64_t x635 = INT64_MAX;
	int8_t x636 = -13;
	int64_t t90 = -3853180933376LL;

	t90 = ((x633^x634)<<(x635<=x636));

	if (t90 != 5LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x638 = 319280645U;
	volatile int8_t x639 = INT8_MIN;
	int64_t x640 = 7LL;
	uint64_t t91 = 1179286411899LLU;

	t91 = ((x637^x638)<<(x639<=x640));

	if (t91 != 909916653622508LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x649 = INT8_MIN;
	volatile int8_t x650 = INT8_MIN;
	int32_t x651 = 150;
	int16_t x652 = 121;

	t92 = ((x649^x650)<<(x651<=x652));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x654 = 56636LL;
	int16_t x655 = -5407;
	int64_t t93 = 22816237295538LL;

	t93 = ((x653^x654)<<(x655<=x656));

	if (t93 != 2147427011LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x659 = 1;
	static volatile int16_t x660 = INT16_MIN;
	volatile uint64_t t94 = 4LLU;

	t94 = ((x657^x658)<<(x659<=x660));

	if (t94 != 18446744071562068155LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x661 = UINT64_MAX;
	volatile int16_t x662 = INT16_MIN;
	uint64_t x663 = 52494662LLU;
	int64_t x664 = -217782570739845LL;
	uint64_t t95 = 15LLU;

	t95 = ((x661^x662)<<(x663<=x664));

	if (t95 != 65534LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x665 = -1LL;
	uint64_t x666 = 1LLU;
	uint16_t x667 = 2U;
	uint32_t x668 = 108U;

	t96 = ((x665^x666)<<(x667<=x668));

	if (t96 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x669 = -549;
	uint64_t x670 = UINT64_MAX;
	uint32_t x671 = 1122U;
	int8_t x672 = 29;
	uint64_t t97 = 867LLU;

	t97 = ((x669^x670)<<(x671<=x672));

	if (t97 != 548LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x673 = -17;
	static int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MIN;
	uint64_t t98 = 0LLU;

	t98 = ((x673^x674)<<(x675<=x676));

	if (t98 != 18446743888945461984LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x678 = 661919987522LLU;
	int64_t x680 = INT64_MAX;
	uint64_t t99 = 330973177LLU;

	t99 = ((x677^x678)<<(x679<=x680));

	if (t99 != 1323839978326LLU) { NG(); } else { ; }
	
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

