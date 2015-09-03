#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x4 = UINT64_MAX;
static uint64_t t0 = UINT64_MAX;
uint64_t x5 = UINT64_MAX;
static int32_t x10 = INT32_MAX;
int8_t x15 = INT8_MIN;
volatile uint32_t t5 = UINT32_MAX;
int64_t x25 = 17204945300LL;
int32_t x37 = INT32_MAX;
static int8_t x46 = INT8_MIN;
int8_t x47 = INT8_MIN;
volatile int8_t x51 = 1;
uint32_t x58 = UINT32_MAX;
int16_t x60 = INT16_MIN;
volatile uint32_t t13 = 749U;
int32_t x68 = INT32_MIN;
volatile int32_t x94 = 19225;
uint64_t x112 = UINT64_MAX;
static int64_t x130 = -1LL;
int64_t t21 = 228173592LL;
int32_t x135 = -14;
int32_t x144 = -1569;
uint8_t x147 = 10U;
static uint32_t x148 = UINT32_MAX;
int16_t x151 = INT16_MIN;
volatile int64_t t26 = 1LL;
static uint16_t x154 = 344U;
static uint8_t x158 = 13U;
int32_t x165 = 1;
volatile int8_t x171 = INT8_MIN;
int32_t x179 = -1;
volatile int64_t t32 = 3137058774596566LL;
int16_t x181 = 17;
volatile int32_t x185 = 2;
int16_t x187 = 390;
volatile int64_t t35 = 63812326875698LL;
static int64_t x194 = INT64_MAX;
int64_t x196 = -25403240241LL;
volatile int32_t t37 = 1602;
static uint8_t x217 = 15U;
uint32_t t39 = 601863386U;
int32_t x224 = INT32_MAX;
int64_t t40 = -1LL;
int64_t x227 = INT64_MIN;
int32_t x229 = -1;
volatile uint8_t x233 = UINT8_MAX;
int16_t x240 = INT16_MIN;
volatile uint32_t t48 = 3513561U;
uint64_t t49 = UINT64_MAX;
int32_t x261 = 0;
static volatile int8_t x267 = INT8_MIN;
int16_t x273 = INT16_MIN;
int16_t x274 = INT16_MIN;
int64_t x287 = INT64_MAX;
volatile uint64_t t53 = 3141LLU;
uint32_t x292 = 23936562U;
int16_t x298 = -214;
uint16_t x302 = 8U;
volatile int16_t x309 = -1;
int8_t x310 = INT8_MIN;
volatile uint8_t x311 = 11U;
int64_t x313 = 969483651005LL;
int8_t x314 = INT8_MIN;
int64_t x320 = -1LL;
uint64_t t63 = 933083LLU;
volatile int8_t x334 = INT8_MIN;
int64_t x339 = 122795934915431LL;
int16_t x340 = INT16_MIN;
uint32_t x342 = UINT32_MAX;
static volatile uint8_t x352 = 48U;
int32_t x353 = 1725052;
int64_t x356 = INT64_MAX;
volatile uint64_t t70 = UINT64_MAX;
static volatile uint16_t x365 = UINT16_MAX;
int32_t x369 = -6324;
int16_t x370 = INT16_MIN;
static uint32_t t73 = 3100U;
static int32_t x378 = INT32_MAX;
volatile int8_t x384 = INT8_MAX;
static int32_t t75 = 34;
int8_t x390 = INT8_MIN;
int32_t t76 = -1;
int32_t x396 = INT32_MAX;
uint8_t x412 = UINT8_MAX;
int8_t x420 = INT8_MAX;
uint64_t t79 = 6235802394694LLU;
volatile uint8_t x427 = 0U;
volatile int32_t t80 = INT32_MAX;
volatile uint32_t x430 = 231486822U;
uint32_t t81 = 6648U;
uint64_t t82 = 6814824550LLU;
volatile int64_t x449 = -781965103054LL;
static int8_t x452 = 14;
int32_t x453 = 46737805;
static int32_t x460 = INT32_MIN;
volatile uint64_t t85 = 0LLU;
uint8_t x465 = 12U;
uint16_t x466 = 2253U;
uint64_t t86 = UINT64_MAX;
int64_t x471 = -34239108080948LL;
volatile uint32_t x484 = UINT32_MAX;
int64_t t89 = 21LL;
static int32_t x485 = INT32_MIN;
uint64_t x491 = UINT64_MAX;
int64_t x495 = -1LL;
int64_t t92 = 139564416LL;
int16_t x504 = -1;
volatile int32_t x516 = INT32_MIN;
volatile int64_t t97 = 74443LL;
uint64_t x518 = UINT64_MAX;
int8_t x519 = INT8_MIN;
uint64_t t98 = 5013837513270363LLU;
volatile int8_t x523 = -2;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = 22;
	uint8_t x3 = 5U;

	t0 = (((x1^x2)*x3)|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 66;
	int16_t x7 = INT16_MIN;
	volatile int64_t x8 = INT64_MIN;
	uint64_t t1 = 162393035205LLU;

	t1 = (((x5^x6)*x7)|x8);

	if (t1 != 9223372036856971264LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	static int8_t x11 = INT8_MIN;
	uint32_t x12 = UINT32_MAX;
	static uint32_t t2 = UINT32_MAX;

	t2 = (((x9^x10)*x11)|x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 0U;
	int8_t x14 = 28;
	int32_t x16 = -1;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (((x13^x14)*x15)|x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	static uint8_t x19 = 1U;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 1;

	t4 = (((x17^x18)*x19)|x20);

	if (t4 != -65409) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MAX;
	static uint32_t x22 = UINT32_MAX;
	static uint32_t x23 = 13U;
	static uint32_t x24 = UINT32_MAX;

	t5 = (((x21^x22)*x23)|x24);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MIN;
	int32_t x27 = -1;
	int32_t x28 = INT32_MIN;
	static volatile int64_t t6 = 67885538372LL;

	t6 = (((x25^x26)*x27)|x28);

	if (t6 != -25076116LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 12;
	int8_t x34 = INT8_MIN;
	static uint64_t x35 = 63904287LLU;
	uint8_t x36 = 37U;
	volatile uint64_t t7 = 86271116LLU;

	t7 = (((x33^x34)*x35)|x36);

	if (t7 != 18446744066296654325LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x38 = INT32_MAX;
	int64_t x39 = -1LL;
	static int8_t x40 = INT8_MIN;
	volatile int64_t t8 = 4171489LL;

	t8 = (((x37^x38)*x39)|x40);

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 0U;
	int64_t x42 = 30028029605LL;
	uint8_t x43 = 0U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = INT64_MIN;

	t9 = (((x41^x42)*x43)|x44);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 6U;
	int32_t x48 = INT32_MIN;
	volatile uint32_t t10 = 283793U;

	t10 = (((x45^x46)*x47)|x48);

	if (t10 != 2147499264U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 747U;
	int32_t x50 = -1;
	uint32_t x52 = 3840U;
	uint32_t t11 = 1U;

	t11 = (((x49^x50)*x51)|x52);

	if (t11 != 4294967060U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	static int16_t x55 = 1;
	int64_t x56 = INT64_MIN;
	volatile int64_t t12 = 168058945LL;

	t12 = (((x53^x54)*x55)|x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -41;
	uint32_t x59 = 13860803U;

	t13 = (((x57^x58)*x59)|x60);

	if (t13 != 4294964856U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 66U;
	uint64_t x66 = 33802652LLU;
	uint64_t x67 = 10059808472439LLU;
	volatile uint64_t t14 = 8650730418584062LLU;

	t14 = (((x65^x66)*x67)|x68);

	if (t14 != 18446744072616295474LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 91U;
	volatile int16_t x70 = -1;
	int16_t x71 = -1;
	static uint8_t x72 = 50U;
	uint32_t t15 = 362U;

	t15 = (((x69^x70)*x71)|x72);

	if (t15 != 126U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MAX;
	static volatile uint32_t x80 = 1194U;
	volatile uint32_t t16 = 245U;

	t16 = (((x77^x78)*x79)|x80);

	if (t16 != 3225419691U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = -1669;
	static uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MAX;
	volatile int32_t t17 = -27837683;

	t17 = (((x93^x94)*x95)|x96);

	if (t17 != -1302180353) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x109 = 8U;
	volatile int32_t x110 = -52254374;
	int16_t x111 = 480;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x109^x110)*x111)|x112);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x113 = INT8_MAX;
	uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 20U;
	uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (((x113^x114)*x115)|x116);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = INT32_MIN;
	static int64_t x122 = 21LL;
	int16_t x123 = -134;
	static uint32_t x124 = UINT32_MAX;
	int64_t t20 = 7787519LL;

	t20 = (((x121^x122)*x123)|x124);

	if (t20 != 287762808831LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = 3856673008715LL;
	static uint16_t x131 = UINT16_MAX;
	static volatile uint16_t x132 = 423U;

	t21 = (((x129^x130)*x131)|x132);

	if (t21 != -252747065626202641LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = -87;
	static uint32_t x134 = 422700U;
	int16_t x136 = INT16_MIN;
	uint32_t t22 = 920695U;

	t22 = (((x133^x134)*x135)|x136);

	if (t22 != 4294955194U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x137 = 820;
	static uint64_t x138 = 135112043416901571LLU;
	int32_t x139 = INT32_MIN;
	static int64_t x140 = INT64_MIN;
	volatile uint64_t t23 = 136LLU;

	t23 = (((x137^x138)*x139)|x140);

	if (t23 != 18131797233597677568LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x141 = UINT64_MAX;
	int8_t x142 = -1;
	volatile uint32_t x143 = 7840981U;
	static volatile uint64_t t24 = 648903222LLU;

	t24 = (((x141^x142)*x143)|x144);

	if (t24 != 18446744073709550047LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x145 = -1;
	int8_t x146 = 1;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (((x145^x146)*x147)|x148);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	int64_t x152 = -1LL;

	t26 = (((x149^x150)*x151)|x152);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x153 = UINT64_MAX;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = 428736474550568LLU;
	uint64_t t27 = 60LLU;

	t27 = (((x153^x154)*x155)|x156);

	if (t27 != 18446744004944236921LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = -1;
	static uint8_t x159 = 105U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t28 = 25;

	t28 = (((x157^x158)*x159)|x160);

	if (t28 != -1470) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x166 = 1U;
	static uint16_t x167 = 1410U;
	int8_t x168 = INT8_MAX;
	volatile int32_t t29 = -446041;

	t29 = (((x165^x166)*x167)|x168);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x169 = 996LLU;
	int64_t x170 = 1494947965761896LL;
	int32_t x172 = INT32_MIN;
	uint64_t t30 = 25851441368664364LLU;

	t30 = (((x169^x170)*x171)|x172);

	if (t30 != 18446744072728263168LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x173 = -778736442LL;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = -1;
	uint64_t t31 = UINT64_MAX;

	t31 = (((x173^x174)*x175)|x176);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = -263LL;
	static int32_t x178 = 1;
	uint16_t x180 = UINT16_MAX;

	t32 = (((x177^x178)*x179)|x180);

	if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x182 = 39835;
	static uint64_t x183 = 136988368756060123LLU;
	int16_t x184 = INT16_MIN;
	uint64_t t33 = 1821621875017210LLU;

	t33 = (((x181^x182)*x183)|x184);

	if (t33 != 18446744073709544718LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x186 = UINT8_MAX;
	volatile int64_t x188 = -112269408965362669LL;
	volatile int64_t t34 = 104868047490550LL;

	t34 = (((x185^x186)*x187)|x188);

	if (t34 != -112269408965362305LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = 5673142LL;
	static uint32_t x190 = UINT32_MAX;
	int16_t x191 = 14569;
	int64_t x192 = -72900LL;

	t35 = (((x189^x190)*x191)|x192);

	if (t35 != -72835LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x195 = 0U;
	int64_t t36 = -159264513568137393LL;

	t36 = (((x193^x194)*x195)|x196);

	if (t36 != -25403240241LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x205 = -1;
	volatile int16_t x206 = INT16_MIN;
	uint8_t x207 = 14U;
	volatile uint8_t x208 = 5U;

	t37 = (((x205^x206)*x207)|x208);

	if (t37 != 458743) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x209 = INT16_MAX;
	int8_t x210 = INT8_MIN;
	static uint32_t x211 = 4641621U;
	int16_t x212 = -951;
	volatile uint32_t t38 = 2755U;

	t38 = (((x209^x210)*x211)|x212);

	if (t38 != 4294967147U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x218 = INT8_MAX;
	int16_t x219 = INT16_MIN;
	static uint32_t x220 = 2U;

	t39 = (((x217^x218)*x219)|x220);

	if (t39 != 4291297282U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x221 = -46304009276761078LL;
	uint16_t x222 = 438U;
	int8_t x223 = INT8_MIN;

	t40 = (((x221^x222)*x223)|x224);

	if (t40 != 5926913188246323199LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x225 = -1LL;
	int16_t x226 = -1;
	uint8_t x228 = 2U;
	int64_t t41 = -49LL;

	t41 = (((x225^x226)*x227)|x228);

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x230 = -1;
	volatile uint32_t x231 = 121437752U;
	int16_t x232 = 5;
	uint32_t t42 = 1U;

	t42 = (((x229^x230)*x231)|x232);

	if (t42 != 5U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x234 = UINT64_MAX;
	static uint32_t x235 = UINT32_MAX;
	static int8_t x236 = INT8_MIN;
	volatile uint64_t t43 = 34475667966LLU;

	t43 = (((x233^x234)*x235)|x236);

	if (t43 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x237 = INT32_MIN;
	static int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MAX;
	volatile int32_t t44 = 313629;

	t44 = (((x237^x238)*x239)|x240);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x241 = 1U;
	volatile uint16_t x242 = UINT16_MAX;
	uint32_t x243 = 7423U;
	static int8_t x244 = -58;
	static uint32_t t45 = 24856U;

	t45 = (((x241^x242)*x243)|x244);

	if (t45 != 4294967238U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x245 = 451026714661LLU;
	int8_t x246 = 1;
	int32_t x247 = INT32_MAX;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t46 = 2516810413006723289LLU;

	t46 = (((x245^x246)*x247)|x248);

	if (t46 != 18446744073654403036LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x249 = -1;
	int16_t x250 = 1;
	uint8_t x251 = 0U;
	int64_t x252 = 117475400358LL;
	int64_t t47 = 4874456477948LL;

	t47 = (((x249^x250)*x251)|x252);

	if (t47 != 117475400358LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x253 = 10538U;
	int8_t x254 = 0;
	uint16_t x255 = 0U;
	uint8_t x256 = UINT8_MAX;

	t48 = (((x253^x254)*x255)|x256);

	if (t48 != 255U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = -1;
	volatile int16_t x258 = INT16_MIN;
	static volatile uint64_t x259 = 51533397068009218LLU;
	static int8_t x260 = -1;

	t49 = (((x257^x258)*x259)|x260);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x262 = INT32_MIN;
	uint32_t x263 = 68U;
	static uint8_t x264 = 1U;
	volatile uint32_t t50 = 2U;

	t50 = (((x261^x262)*x263)|x264);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x265 = 216076999418605895LLU;
	int8_t x266 = -4;
	volatile int64_t x268 = -188315787478634LL;
	uint64_t t51 = 7449598539181LLU;

	t51 = (((x265^x266)*x267)|x268);

	if (t51 != 18446592338915081110LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x275 = INT16_MIN;
	volatile int8_t x276 = INT8_MIN;
	int32_t t52 = 180;

	t52 = (((x273^x274)*x275)|x276);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x285 = 0LLU;
	static volatile uint16_t x286 = UINT16_MAX;
	int32_t x288 = INT32_MAX;

	t53 = (((x285^x286)*x287)|x288);

	if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x289 = INT32_MAX;
	int64_t x290 = 22946147379758LL;
	uint8_t x291 = 1U;
	static volatile int64_t t54 = -56754859LL;

	t54 = (((x289^x290)*x291)|x292);

	if (t54 != 22947732226035LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x293 = 11379U;
	int8_t x294 = 0;
	int8_t x295 = -5;
	int32_t x296 = -1;
	int32_t t55 = -22;

	t55 = (((x293^x294)*x295)|x296);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x297 = INT32_MIN;
	int64_t x299 = -95LL;
	int64_t x300 = -15232471063517LL;
	static int64_t t56 = -5477LL;

	t56 = (((x297^x298)*x299)|x300);

	if (t56 != -43319201941LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int32_t x303 = -1;
	static int16_t x304 = INT16_MIN;
	static volatile int32_t t57 = 1372823;

	t57 = (((x301^x302)*x303)|x304);

	if (t57 != -32759) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = INT32_MIN;
	volatile int64_t x306 = 188767125177748LL;
	uint64_t x307 = UINT64_MAX;
	static volatile int16_t x308 = -1;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x305^x306)*x307)|x308);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x312 = 9U;
	int32_t t59 = 184999574;

	t59 = (((x309^x310)*x311)|x312);

	if (t59 != 1405) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x315 = INT8_MIN;
	uint32_t x316 = 55653582U;
	volatile int64_t t60 = -112433LL;

	t60 = (((x313^x314)*x315)|x316);

	if (t60 != 124093941937614LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x317 = INT16_MIN;
	uint16_t x318 = UINT16_MAX;
	volatile int8_t x319 = INT8_MIN;
	volatile int64_t t61 = -7206LL;

	t61 = (((x317^x318)*x319)|x320);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = -1;
	int64_t x323 = -1LL;
	int8_t x324 = -1;
	static int64_t t62 = 5759860838444448LL;

	t62 = (((x321^x322)*x323)|x324);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x325 = 125U;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;
	int16_t x328 = 1;

	t63 = (((x325^x326)*x327)|x328);

	if (t63 != 127LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x329 = INT8_MAX;
	int64_t x330 = INT64_MAX;
	volatile int16_t x331 = -1;
	static int32_t x332 = 880850;
	int64_t t64 = -346268291LL;

	t64 = (((x329^x330)*x331)|x332);

	if (t64 != -9223372036853894958LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x333 = 7U;
	uint8_t x335 = UINT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	int32_t t65 = -741;

	t65 = (((x333^x334)*x335)|x336);

	if (t65 != -30855) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x337 = 0LLU;
	uint64_t x338 = 82531195366938LLU;
	volatile uint64_t t66 = 34913990614767765LLU;

	t66 = (((x337^x338)*x339)|x340);

	if (t66 != 18446744073709537910LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = -1;
	int32_t x343 = 364;
	int16_t x344 = INT16_MIN;
	uint32_t t67 = 690U;

	t67 = (((x341^x342)*x343)|x344);

	if (t67 != 4294934528U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = -1;
	int16_t x346 = -3278;
	static uint32_t x347 = 181U;
	int32_t x348 = -1;
	uint32_t t68 = UINT32_MAX;

	t68 = (((x345^x346)*x347)|x348);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x349 = INT16_MIN;
	static int16_t x350 = INT16_MIN;
	volatile int16_t x351 = -1;
	int32_t t69 = 4;

	t69 = (((x349^x350)*x351)|x352);

	if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x354 = 469433790LLU;
	int64_t x355 = -8009198879376LL;

	t70 = (((x353^x354)*x355)|x356);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x366 = 7879695869LLU;
	static uint32_t x367 = 26427884U;
	int64_t x368 = -1LL;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x365^x366)*x367)|x368);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x371 = UINT8_MAX;
	static volatile uint16_t x372 = UINT16_MAX;
	int32_t t72 = -700;

	t72 = (((x369^x370)*x371)|x372);

	if (t72 != 6750207) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	static uint32_t x375 = 209686979U;
	static int8_t x376 = 4;

	t73 = (((x373^x374)*x375)|x376);

	if (t73 != 3072229380U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = -576309805696646989LL;
	uint64_t x379 = 3624LLU;
	int16_t x380 = 1;
	uint64_t t74 = 98573LLU;

	t74 = (((x377^x378)*x379)|x380);

	if (t74 != 14382080912322071521LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x381 = -1;
	volatile int8_t x382 = -6;
	int16_t x383 = 1;

	t75 = (((x381^x382)*x383)|x384);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x389 = UINT8_MAX;
	int8_t x391 = INT8_MIN;
	static int16_t x392 = INT16_MAX;

	t76 = (((x389^x390)*x391)|x392);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x393 = INT64_MAX;
	uint64_t x394 = UINT64_MAX;
	int16_t x395 = -6;
	volatile uint64_t t77 = 16493741786LLU;

	t77 = (((x393^x394)*x395)|x396);

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x409 = UINT16_MAX;
	uint64_t x410 = UINT64_MAX;
	int16_t x411 = -11653;
	static uint64_t t78 = 3434460488283LLU;

	t78 = (((x409^x410)*x411)|x412);

	if (t78 != 763691263LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = -55867LL;
	volatile int16_t x419 = INT16_MAX;

	t79 = (((x417^x418)*x419)|x420);

	if (t79 != 1830561279LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x426 = 0U;
	volatile int32_t x428 = INT32_MAX;

	t80 = (((x425^x426)*x427)|x428);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x429 = INT16_MIN;
	int16_t x431 = 1;
	volatile int32_t x432 = -213;

	t81 = (((x429^x430)*x431)|x432);

	if (t81 != 4294967151U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x445 = UINT64_MAX;
	int16_t x446 = INT16_MAX;
	int64_t x447 = 46090LL;
	uint64_t x448 = 779059837LLU;

	t82 = (((x445^x446)*x447)|x448);

	if (t82 != 18446744072367342205LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x450 = INT16_MIN;
	static int16_t x451 = -1;
	int64_t t83 = -699LL;

	t83 = (((x449^x450)*x451)|x452);

	if (t83 != -781965127730LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x454 = -434;
	volatile int64_t x455 = -1LL;
	volatile int32_t x456 = -1861;
	int64_t t84 = 114822LL;

	t84 = (((x453^x454)*x455)|x456);

	if (t84 != -1857LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x457 = UINT64_MAX;
	static volatile int8_t x458 = -1;
	int8_t x459 = -1;

	t85 = (((x457^x458)*x459)|x460);

	if (t85 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x467 = -1;
	static uint64_t x468 = UINT64_MAX;

	t86 = (((x465^x466)*x467)|x468);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x469 = -40;
	static volatile int16_t x470 = -1;
	uint16_t x472 = 15445U;
	static int64_t t87 = 3352006670931492LL;

	t87 = (((x469^x470)*x471)|x472);

	if (t87 != -1335325215146667LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x473 = 2U;
	uint16_t x474 = 19580U;
	int8_t x475 = -1;
	int8_t x476 = -1;
	volatile int32_t t88 = -704;

	t88 = (((x473^x474)*x475)|x476);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x481 = INT32_MIN;
	int64_t x482 = -1LL;
	static int8_t x483 = INT8_MIN;

	t89 = (((x481^x482)*x483)|x484);

	if (t89 != -270582939649LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x486 = 14500537410344551LLU;
	uint16_t x487 = 1979U;
	int32_t x488 = 38406;
	uint64_t t90 = 28403520876LLU;

	t90 = (((x485^x486)*x487)|x488);

	if (t90 != 8196928158057037375LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x489 = INT64_MIN;
	volatile int16_t x490 = INT16_MIN;
	uint8_t x492 = 76U;
	uint64_t t91 = 383421670939LLU;

	t91 = (((x489^x490)*x491)|x492);

	if (t91 != 9223372036854808652LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x493 = INT64_MIN;
	volatile int64_t x494 = 28471941214297LL;
	int8_t x496 = INT8_MIN;

	t92 = (((x493^x494)*x495)|x496);

	if (t92 != -89LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x497 = 20U;
	uint32_t x498 = 251U;
	uint32_t x499 = 351U;
	static int32_t x500 = 279139;
	volatile uint32_t t93 = 115401U;

	t93 = (((x497^x498)*x499)|x500);

	if (t93 != 346099U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x501 = -1;
	int32_t x502 = INT32_MIN;
	volatile uint64_t x503 = 599776LLU;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x501^x502)*x503)|x504);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x505 = 4400U;
	int64_t x506 = INT64_MAX;
	int64_t x507 = -1LL;
	int32_t x508 = -4010343;
	int64_t t95 = -160254LL;

	t95 = (((x505^x506)*x507)|x508);

	if (t95 != -4005959LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x509 = -1;
	int8_t x510 = 0;
	int8_t x511 = -1;
	uint64_t x512 = 267588509720378LLU;
	volatile uint64_t t96 = 3887LLU;

	t96 = (((x509^x510)*x511)|x512);

	if (t96 != 267588509720379LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x513 = 1U;
	int8_t x514 = 2;
	int64_t x515 = -61351923170243LL;

	t97 = (((x513^x514)*x515)|x516);

	if (t97 != -1388491593LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x517 = 1U;
	int8_t x520 = INT8_MIN;

	t98 = (((x517^x518)*x519)|x520);

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x521 = 68724910444570943LLU;
	int32_t x522 = INT32_MAX;
	int64_t x524 = INT64_MIN;
	volatile uint64_t t99 = 3990101359LLU;

	t99 = (((x521^x522)*x523)|x524);

	if (t99 != 18309294250825208448LLU) { NG(); } else { ; }
	
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

