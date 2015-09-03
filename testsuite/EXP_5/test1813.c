#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x26 = UINT8_MAX;
volatile int32_t t2 = -1302;
static int16_t x31 = INT16_MAX;
uint32_t x33 = 420785107U;
static int8_t x34 = INT8_MIN;
static int64_t x42 = INT64_MIN;
uint8_t x45 = 6U;
volatile int32_t t6 = 46;
uint32_t x49 = 560358U;
volatile uint64_t x55 = 374LLU;
int32_t t8 = 11;
volatile int16_t x75 = INT16_MIN;
static volatile int32_t t10 = -39934;
volatile int32_t x80 = INT32_MIN;
int32_t t11 = 99;
uint64_t x83 = 3161793LLU;
uint8_t x89 = UINT8_MAX;
int32_t x90 = -1;
int16_t x116 = INT16_MAX;
static uint16_t x117 = 100U;
uint64_t t18 = 2812LLU;
static volatile int32_t t19 = -447401;
uint64_t x142 = 34754LLU;
uint64_t t20 = 488037445678LLU;
uint64_t x151 = 5963738711349751LLU;
volatile int32_t t21 = -27587;
int8_t x153 = 0;
uint32_t x156 = 4013U;
static int64_t x163 = INT64_MIN;
uint16_t x168 = 1U;
int8_t x186 = INT8_MIN;
static volatile int16_t x189 = 453;
int64_t x192 = INT64_MIN;
int32_t x217 = 6;
int64_t x218 = INT64_MAX;
volatile uint32_t x221 = UINT32_MAX;
int16_t x228 = -819;
static volatile int32_t t37 = 75595;
uint64_t x257 = 48943971582701011LLU;
static volatile uint32_t x260 = 13614U;
volatile uint32_t x282 = 0U;
static uint16_t x285 = 9117U;
int8_t x288 = INT8_MIN;
uint8_t x290 = 1U;
static int64_t x291 = -58402563LL;
uint8_t x292 = 45U;
int32_t t42 = -1968;
int8_t x295 = -33;
int32_t x296 = INT32_MIN;
int8_t x309 = INT8_MAX;
int32_t x310 = INT32_MIN;
int16_t x326 = INT16_MAX;
int32_t x331 = -29018129;
int8_t x342 = INT8_MAX;
int8_t x348 = 16;
int32_t t55 = 222492191;
volatile uint8_t x402 = UINT8_MAX;
static int16_t x406 = -230;
int32_t x407 = -9768542;
static uint32_t t57 = 26U;
volatile int32_t t59 = -1905;
uint32_t t60 = 71U;
volatile uint64_t x425 = 440921852408295135LLU;
volatile int32_t t63 = -362;
int32_t t64 = -95883735;
int64_t x466 = INT64_MIN;
int64_t x468 = INT64_MIN;
static uint32_t x469 = 114U;
int16_t x470 = -479;
volatile int8_t x473 = INT8_MAX;
int64_t x474 = INT64_MAX;
static uint32_t x475 = UINT32_MAX;
static int64_t x482 = INT64_MIN;
int32_t x483 = -1;
uint32_t x485 = 13U;
static int32_t x486 = INT32_MIN;
volatile int32_t x488 = -1;
uint32_t t69 = 1U;
static int32_t t70 = 48;
volatile int32_t t71 = 98207;
static volatile uint16_t x524 = UINT16_MAX;
int8_t x547 = INT8_MIN;
uint32_t x553 = 743672U;
volatile int64_t x554 = INT64_MIN;
static uint32_t t77 = 57U;
volatile uint64_t t78 = 0LLU;
volatile uint32_t x565 = 22553U;
uint8_t x567 = 6U;
int64_t x568 = INT64_MIN;
volatile uint8_t x575 = 6U;
volatile uint64_t t83 = 3815597LLU;
uint64_t x614 = 49LLU;
uint8_t x631 = 5U;
static int8_t x644 = INT8_MIN;
static volatile int16_t x658 = -1;
static uint32_t x661 = 7412U;
volatile uint64_t x664 = UINT64_MAX;
volatile uint32_t t91 = 966407392U;
static int64_t x666 = INT64_MIN;
static uint64_t x680 = 23LLU;
uint16_t x683 = 0U;
static uint8_t x697 = 1U;
volatile int32_t x708 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint8_t x2 = UINT8_MAX;
	static volatile uint64_t x3 = UINT64_MAX;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 1;

	t0 = (x1<<((x2&x3)<=x4));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	uint64_t x10 = 707996LLU;
	volatile int16_t x11 = INT16_MIN;
	static int8_t x12 = 56;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x9<<((x10&x11)<=x12));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = 45;
	int16_t x27 = -1;
	int64_t x28 = 14LL;

	t2 = (x25<<((x26&x27)<=x28));

	if (t2 != 45) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MIN;
	uint8_t x32 = 1U;
	volatile int32_t t3 = 3844174;

	t3 = (x29<<((x30&x31)<=x32));

	if (t3 != 510) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x35 = 6U;
	uint8_t x36 = 3U;
	uint32_t t4 = 478472U;

	t4 = (x33<<((x34&x35)<=x36));

	if (t4 != 841570214U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = INT16_MAX;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t5 = 14072;

	t5 = (x41<<((x42&x43)<=x44));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x46 = INT32_MIN;
	int64_t x47 = -1LL;
	static uint64_t x48 = 1LLU;

	t6 = (x45<<((x46&x47)<=x48));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x50 = -62088;
	int16_t x51 = -1;
	int8_t x52 = 18;
	static uint32_t t7 = 197U;

	t7 = (x49<<((x50&x51)<=x52));

	if (t7 != 1120716U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x53 = 21U;
	int64_t x54 = -1LL;
	int64_t x56 = 8591183184976306LL;

	t8 = (x53<<((x54&x55)<=x56));

	if (t8 != 42) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x69 = UINT64_MAX;
	uint64_t x70 = 170104LLU;
	int32_t x71 = INT32_MIN;
	static int8_t x72 = 0;
	uint64_t t9 = 184437688145666009LLU;

	t9 = (x69<<((x70&x71)<=x72));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x73 = 1U;
	int8_t x74 = -1;
	uint64_t x76 = 97275833LLU;

	t10 = (x73<<((x74&x75)<=x76));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x77 = 9414U;
	volatile uint16_t x78 = UINT16_MAX;
	uint64_t x79 = 59847416383LLU;

	t11 = (x77<<((x78&x79)<=x80));

	if (t11 != 18828) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x81 = 1039512U;
	uint64_t x82 = UINT64_MAX;
	int32_t x84 = -1;
	volatile uint32_t t12 = 16100U;

	t12 = (x81<<((x82&x83)<=x84));

	if (t12 != 2079024U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x91 = -357;
	int8_t x92 = INT8_MAX;
	static volatile int32_t t13 = -1038730;

	t13 = (x89<<((x90&x91)<=x92));

	if (t13 != 510) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x93 = INT16_MAX;
	static int8_t x94 = INT8_MAX;
	int16_t x95 = 77;
	int64_t x96 = INT64_MAX;
	int32_t t14 = -7;

	t14 = (x93<<((x94&x95)<=x96));

	if (t14 != 65534) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x113 = 799007024789LLU;
	int8_t x114 = -1;
	volatile int8_t x115 = INT8_MAX;
	static uint64_t t15 = 134974312888074LLU;

	t15 = (x113<<((x114&x115)<=x116));

	if (t15 != 1598014049578LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x118 = INT32_MIN;
	static uint8_t x119 = 1U;
	int64_t x120 = -396615713120392417LL;
	volatile int32_t t16 = 1345;

	t16 = (x117<<((x118&x119)<=x120));

	if (t16 != 100) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x125 = INT8_MAX;
	int16_t x126 = -1;
	int8_t x127 = -2;
	static uint64_t x128 = UINT64_MAX;
	volatile int32_t t17 = 30;

	t17 = (x125<<((x126&x127)<=x128));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x133 = UINT64_MAX;
	uint32_t x134 = 35307U;
	volatile int32_t x135 = 0;
	volatile int8_t x136 = INT8_MIN;

	t18 = (x133<<((x134&x135)<=x136));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x137 = 4U;
	int16_t x138 = -1;
	uint16_t x139 = 28547U;
	int32_t x140 = 1423024;

	t19 = (x137<<((x138&x139)<=x140));

	if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x141 = 148LLU;
	static int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;

	t20 = (x141<<((x142&x143)<=x144));

	if (t20 != 296LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x149 = 4U;
	static uint8_t x150 = UINT8_MAX;
	int8_t x152 = INT8_MAX;

	t21 = (x149<<((x150&x151)<=x152));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x154 = INT8_MAX;
	int32_t x155 = -1;
	int32_t t22 = -262204;

	t22 = (x153<<((x154&x155)<=x156));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x161 = UINT64_MAX;
	static uint8_t x162 = 9U;
	uint16_t x164 = UINT16_MAX;
	static volatile uint64_t t23 = 9640720437LLU;

	t23 = (x161<<((x162&x163)<=x164));

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x165 = UINT32_MAX;
	static volatile int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	static volatile uint32_t t24 = 151U;

	t24 = (x165<<((x166&x167)<=x168));

	if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x169 = UINT32_MAX;
	static int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = 28U;
	uint32_t t25 = UINT32_MAX;

	t25 = (x169<<((x170&x171)<=x172));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = UINT64_MAX;
	volatile int16_t x175 = INT16_MAX;
	volatile int32_t x176 = -1;
	volatile int32_t t26 = -179021;

	t26 = (x173<<((x174&x175)<=x176));

	if (t26 != 510) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x177 = 34U;
	int8_t x178 = -2;
	uint16_t x179 = UINT16_MAX;
	static int16_t x180 = INT16_MIN;
	int32_t t27 = -1;

	t27 = (x177<<((x178&x179)<=x180));

	if (t27 != 34) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x185 = 8U;
	uint8_t x187 = 1U;
	int64_t x188 = -1LL;
	int32_t t28 = 17635464;

	t28 = (x185<<((x186&x187)<=x188));

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x190 = 7U;
	int64_t x191 = INT64_MIN;
	volatile int32_t t29 = 3087;

	t29 = (x189<<((x190&x191)<=x192));

	if (t29 != 453) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x205 = 32149288U;
	uint32_t x206 = 3010001U;
	volatile int64_t x207 = -1LL;
	static int16_t x208 = -64;
	volatile uint32_t t30 = 498U;

	t30 = (x205<<((x206&x207)<=x208));

	if (t30 != 32149288U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x219 = UINT16_MAX;
	uint16_t x220 = UINT16_MAX;
	int32_t t31 = -2;

	t31 = (x217<<((x218&x219)<=x220));

	if (t31 != 12) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x222 = INT8_MAX;
	uint8_t x223 = 47U;
	volatile int64_t x224 = INT64_MAX;
	uint32_t t32 = 48150U;

	t32 = (x221<<((x222&x223)<=x224));

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x225 = 1046860U;
	int8_t x226 = -4;
	int32_t x227 = INT32_MAX;
	volatile uint32_t t33 = 437967U;

	t33 = (x225<<((x226&x227)<=x228));

	if (t33 != 1046860U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x229 = 11418337077LLU;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 12;
	int16_t x232 = -1;
	static uint64_t t34 = 514001577890322LLU;

	t34 = (x229<<((x230&x231)<=x232));

	if (t34 != 11418337077LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x241 = 6U;
	int16_t x242 = INT16_MAX;
	int8_t x243 = 0;
	int8_t x244 = INT8_MAX;
	int32_t t35 = -27384683;

	t35 = (x241<<((x242&x243)<=x244));

	if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x249 = 1610U;
	int16_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t36 = 81;

	t36 = (x249<<((x250&x251)<=x252));

	if (t36 != 1610) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x253 = 112U;
	int32_t x254 = INT32_MAX;
	int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = 197966054476295054LL;

	t37 = (x253<<((x254&x255)<=x256));

	if (t37 != 224) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x258 = UINT16_MAX;
	int32_t x259 = INT32_MIN;
	uint64_t t38 = 8755507223126LLU;

	t38 = (x257<<((x258&x259)<=x260));

	if (t38 != 97887943165402022LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x261 = INT32_MAX;
	static volatile int32_t x262 = -1;
	int32_t x263 = INT32_MAX;
	uint16_t x264 = 1U;
	int32_t t39 = INT32_MAX;

	t39 = (x261<<((x262&x263)<=x264));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x281 = 1;
	uint32_t x283 = 143U;
	uint8_t x284 = 0U;
	int32_t t40 = 60;

	t40 = (x281<<((x282&x283)<=x284));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x286 = -1;
	uint32_t x287 = 0U;
	volatile int32_t t41 = -252050662;

	t41 = (x285<<((x286&x287)<=x288));

	if (t41 != 18234) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x289 = 49U;

	t42 = (x289<<((x290&x291)<=x292));

	if (t42 != 98) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x293 = 859;
	static int8_t x294 = INT8_MAX;
	int32_t t43 = -375161;

	t43 = (x293<<((x294&x295)<=x296));

	if (t43 != 859) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x297 = 104241049408007076LLU;
	int8_t x298 = -1;
	volatile int8_t x299 = INT8_MIN;
	static int64_t x300 = 3699778711967LL;
	volatile uint64_t t44 = 1198606LLU;

	t44 = (x297<<((x298&x299)<=x300));

	if (t44 != 208482098816014152LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x301 = 320752421U;
	int32_t x302 = INT32_MIN;
	volatile uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = 859;
	uint32_t t45 = 4U;

	t45 = (x301<<((x302&x303)<=x304));

	if (t45 != 641504842U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x305 = 2137979933249LLU;
	volatile uint16_t x306 = UINT16_MAX;
	static uint32_t x307 = 115497271U;
	uint8_t x308 = 0U;
	uint64_t t46 = 1LLU;

	t46 = (x305<<((x306&x307)<=x308));

	if (t46 != 2137979933249LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x311 = INT32_MIN;
	static int8_t x312 = INT8_MAX;
	volatile int32_t t47 = -107723;

	t47 = (x309<<((x310&x311)<=x312));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x313 = 12630U;
	uint8_t x314 = 28U;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 1U;
	volatile int32_t t48 = -1;

	t48 = (x313<<((x314&x315)<=x316));

	if (t48 != 25260) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x317 = 760;
	volatile int64_t x318 = 8472021852366LL;
	int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MAX;
	int32_t t49 = -12;

	t49 = (x317<<((x318&x319)<=x320));

	if (t49 != 760) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x325 = INT16_MAX;
	uint16_t x327 = 15334U;
	volatile uint32_t x328 = 943280559U;
	int32_t t50 = 393861;

	t50 = (x325<<((x326&x327)<=x328));

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = -25;
	volatile int8_t x332 = 55;
	static volatile uint32_t t51 = 1387837380U;

	t51 = (x329<<((x330&x331)<=x332));

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x341 = 748U;
	int8_t x343 = INT8_MAX;
	int8_t x344 = -1;
	uint32_t t52 = 915346U;

	t52 = (x341<<((x342&x343)<=x344));

	if (t52 != 748U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x345 = 1U;
	uint32_t x346 = 3996U;
	uint32_t x347 = 227839021U;
	static volatile int32_t t53 = 358;

	t53 = (x345<<((x346&x347)<=x348));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x373 = 673651665053208884LL;
	static int64_t x374 = -472121300298224412LL;
	int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	int64_t t54 = 504540237621638LL;

	t54 = (x373<<((x374&x375)<=x376));

	if (t54 != 673651665053208884LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x381 = UINT8_MAX;
	volatile uint16_t x382 = 1842U;
	volatile int8_t x383 = 30;
	int16_t x384 = INT16_MIN;

	t55 = (x381<<((x382&x383)<=x384));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x401 = 977640097;
	int32_t x403 = INT32_MIN;
	int8_t x404 = -1;
	static volatile int32_t t56 = -364;

	t56 = (x401<<((x402&x403)<=x404));

	if (t56 != 977640097) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x405 = 256627U;
	int64_t x408 = INT64_MAX;

	t57 = (x405<<((x406&x407)<=x408));

	if (t57 != 513254U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x409 = UINT16_MAX;
	int16_t x410 = 133;
	int32_t x411 = 1849348;
	int8_t x412 = -1;
	int32_t t58 = 182;

	t58 = (x409<<((x410&x411)<=x412));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x413 = 0;
	uint32_t x414 = 203849634U;
	volatile int64_t x415 = -643041LL;
	uint64_t x416 = 3748659504LLU;

	t59 = (x413<<((x414&x415)<=x416));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x421 = 451216U;
	volatile int16_t x422 = INT16_MIN;
	int64_t x423 = INT64_MIN;
	static volatile int16_t x424 = 13;

	t60 = (x421<<((x422&x423)<=x424));

	if (t60 != 902432U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x426 = INT32_MIN;
	uint8_t x427 = 10U;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t61 = 56LLU;

	t61 = (x425<<((x426&x427)<=x428));

	if (t61 != 440921852408295135LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x449 = 17445926950LL;
	int16_t x450 = INT16_MAX;
	int64_t x451 = -1LL;
	volatile int16_t x452 = INT16_MIN;
	volatile int64_t t62 = -616278877228LL;

	t62 = (x449<<((x450&x451)<=x452));

	if (t62 != 17445926950LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x453 = 40U;
	volatile int8_t x454 = -1;
	uint16_t x455 = 13U;
	volatile int32_t x456 = -7044893;

	t63 = (x453<<((x454&x455)<=x456));

	if (t63 != 40) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x461 = 1U;
	int8_t x462 = INT8_MIN;
	uint8_t x463 = 0U;
	static int64_t x464 = 30652LL;

	t64 = (x461<<((x462&x463)<=x464));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x465 = INT32_MAX;
	int16_t x467 = INT16_MAX;
	int32_t t65 = INT32_MAX;

	t65 = (x465<<((x466&x467)<=x468));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x471 = -13684;
	volatile int64_t x472 = -1LL;
	uint32_t t66 = 15319986U;

	t66 = (x469<<((x470&x471)<=x472));

	if (t66 != 228U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x476 = -1;
	volatile int32_t t67 = -2;

	t67 = (x473<<((x474&x475)<=x476));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x481 = 10852LL;
	uint64_t x484 = UINT64_MAX;
	volatile int64_t t68 = -5532202LL;

	t68 = (x481<<((x482&x483)<=x484));

	if (t68 != 21704LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x487 = 936658LLU;

	t69 = (x485<<((x486&x487)<=x488));

	if (t69 != 26U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x489 = 14429;
	int32_t x490 = INT32_MIN;
	static int16_t x491 = -1;
	int32_t x492 = -17342155;

	t70 = (x489<<((x490&x491)<=x492));

	if (t70 != 28858) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x505 = 1;
	int32_t x506 = INT32_MIN;
	uint32_t x507 = UINT32_MAX;
	int8_t x508 = INT8_MAX;

	t71 = (x505<<((x506&x507)<=x508));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x513 = 7594U;
	static int64_t x514 = INT64_MIN;
	int8_t x515 = INT8_MAX;
	static int8_t x516 = 7;
	volatile int32_t t72 = 58393355;

	t72 = (x513<<((x514&x515)<=x516));

	if (t72 != 15188) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x521 = INT8_MAX;
	int8_t x522 = INT8_MIN;
	static volatile int16_t x523 = INT16_MAX;
	int32_t t73 = 125417426;

	t73 = (x521<<((x522&x523)<=x524));

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x537 = 3751U;
	int8_t x538 = -1;
	static int64_t x539 = -1LL;
	uint32_t x540 = 5478040U;
	volatile int32_t t74 = -247;

	t74 = (x537<<((x538&x539)<=x540));

	if (t74 != 7502) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x541 = 24U;
	int32_t x542 = INT32_MIN;
	uint16_t x543 = 6U;
	int8_t x544 = -44;
	volatile int32_t t75 = 0;

	t75 = (x541<<((x542&x543)<=x544));

	if (t75 != 24) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x545 = UINT16_MAX;
	volatile uint16_t x546 = UINT16_MAX;
	int64_t x548 = -1LL;
	volatile int32_t t76 = 7387821;

	t76 = (x545<<((x546&x547)<=x548));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x555 = INT16_MAX;
	uint16_t x556 = 11752U;

	t77 = (x553<<((x554&x555)<=x556));

	if (t77 != 1487344U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x557 = 6LLU;
	uint32_t x558 = 5608U;
	static volatile int8_t x559 = 31;
	int8_t x560 = INT8_MIN;

	t78 = (x557<<((x558&x559)<=x560));

	if (t78 != 12LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x566 = 916439LLU;
	uint32_t t79 = 530271U;

	t79 = (x565<<((x566&x567)<=x568));

	if (t79 != 45106U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x573 = 0LL;
	static int16_t x574 = -1;
	static int16_t x576 = -1;
	int64_t t80 = 113660734LL;

	t80 = (x573<<((x574&x575)<=x576));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x581 = UINT8_MAX;
	volatile int8_t x582 = INT8_MIN;
	volatile uint8_t x583 = 0U;
	int8_t x584 = INT8_MAX;
	int32_t t81 = -27;

	t81 = (x581<<((x582&x583)<=x584));

	if (t81 != 510) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x593 = 2949;
	int64_t x594 = -1LL;
	static volatile uint64_t x595 = UINT64_MAX;
	int64_t x596 = 103733063203464533LL;
	int32_t t82 = 15164;

	t82 = (x593<<((x594&x595)<=x596));

	if (t82 != 2949) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x601 = 2837215007LLU;
	uint64_t x602 = 56775626LLU;
	volatile uint8_t x603 = 15U;
	int32_t x604 = -1311830;

	t83 = (x601<<((x602&x603)<=x604));

	if (t83 != 5674430014LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x613 = INT16_MAX;
	int8_t x615 = INT8_MIN;
	int64_t x616 = -15361341LL;
	volatile int32_t t84 = -17;

	t84 = (x613<<((x614&x615)<=x616));

	if (t84 != 65534) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x629 = 7449714489511952LL;
	int64_t x630 = -1LL;
	static int32_t x632 = INT32_MIN;
	volatile int64_t t85 = -1076445461151682591LL;

	t85 = (x629<<((x630&x631)<=x632));

	if (t85 != 7449714489511952LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x641 = 2LL;
	static volatile uint64_t x642 = 3736021462872LLU;
	int32_t x643 = INT32_MAX;
	volatile int64_t t86 = -84520149553175636LL;

	t86 = (x641<<((x642&x643)<=x644));

	if (t86 != 4LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x645 = 77U;
	int8_t x646 = INT8_MIN;
	volatile int16_t x647 = -1;
	int16_t x648 = -2065;
	volatile int32_t t87 = -101;

	t87 = (x645<<((x646&x647)<=x648));

	if (t87 != 77) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x649 = UINT32_MAX;
	int64_t x650 = INT64_MIN;
	volatile int8_t x651 = -1;
	int32_t x652 = INT32_MIN;
	volatile uint32_t t88 = 127497U;

	t88 = (x649<<((x650&x651)<=x652));

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x653 = 1013U;
	uint32_t x654 = 31U;
	volatile uint16_t x655 = UINT16_MAX;
	static uint16_t x656 = 1U;
	volatile int32_t t89 = -53005136;

	t89 = (x653<<((x654&x655)<=x656));

	if (t89 != 1013) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x657 = INT16_MAX;
	uint8_t x659 = UINT8_MAX;
	uint8_t x660 = UINT8_MAX;
	static int32_t t90 = 42849392;

	t90 = (x657<<((x658&x659)<=x660));

	if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x662 = INT16_MIN;
	uint16_t x663 = 438U;

	t91 = (x661<<((x662&x663)<=x664));

	if (t91 != 14824U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x665 = UINT64_MAX;
	static uint64_t x667 = UINT64_MAX;
	static uint8_t x668 = UINT8_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x665<<((x666&x667)<=x668));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x669 = 1034602949807457LL;
	int64_t x670 = -1LL;
	int64_t x671 = INT64_MIN;
	int32_t x672 = INT32_MIN;
	int64_t t93 = -649467LL;

	t93 = (x669<<((x670&x671)<=x672));

	if (t93 != 2069205899614914LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x673 = 6101;
	int64_t x674 = -28135281039405LL;
	static uint32_t x675 = UINT32_MAX;
	volatile int16_t x676 = -1;
	volatile int32_t t94 = -1;

	t94 = (x673<<((x674&x675)<=x676));

	if (t94 != 6101) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x677 = INT16_MAX;
	uint32_t x678 = 183090U;
	uint32_t x679 = 12U;
	volatile int32_t t95 = 49678;

	t95 = (x677<<((x678&x679)<=x680));

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x681 = INT64_MAX;
	int32_t x682 = 4;
	static volatile int32_t x684 = INT32_MIN;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x681<<((x682&x683)<=x684));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x685 = 10807U;
	static int8_t x686 = 0;
	uint64_t x687 = UINT64_MAX;
	int16_t x688 = INT16_MIN;
	int32_t t97 = -7;

	t97 = (x685<<((x686&x687)<=x688));

	if (t97 != 21614) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x698 = -1;
	uint32_t x699 = 3552U;
	int64_t x700 = -54713609018502243LL;
	int32_t t98 = 30;

	t98 = (x697<<((x698&x699)<=x700));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x705 = 591447847664LLU;
	static int32_t x706 = INT32_MAX;
	int64_t x707 = -1LL;
	volatile uint64_t t99 = 3753179LLU;

	t99 = (x705<<((x706&x707)<=x708));

	if (t99 != 1182895695328LLU) { NG(); } else { ; }
	
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

