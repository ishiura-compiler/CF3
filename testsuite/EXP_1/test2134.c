#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x2 = INT32_MIN;
int64_t x6 = -1933LL;
static int16_t x8 = -1;
static int32_t x10 = -126248;
volatile uint64_t x12 = UINT64_MAX;
volatile int64_t x13 = -1LL;
static int64_t x18 = INT64_MIN;
uint64_t x20 = 65158852180LLU;
int8_t x21 = -35;
int32_t x24 = 502417052;
uint64_t x27 = 26425833754702LLU;
uint16_t x28 = 3U;
static uint64_t x32 = 101LLU;
volatile uint64_t t7 = 9101534938991256984LLU;
uint32_t t9 = 15742U;
int16_t x60 = -1;
uint64_t x64 = UINT64_MAX;
int16_t x84 = INT16_MIN;
int32_t x91 = 369;
int8_t x92 = 26;
uint8_t x93 = 14U;
static uint32_t x96 = 25U;
static int32_t x97 = INT32_MAX;
volatile uint64_t t21 = 1617LLU;
int32_t x110 = -1;
volatile uint16_t x115 = 2686U;
volatile int32_t t27 = 2090412;
volatile uint32_t x133 = 220U;
int32_t t29 = 271;
static int32_t x143 = INT32_MAX;
int64_t x148 = INT64_MAX;
int8_t x150 = INT8_MIN;
uint32_t x156 = UINT32_MAX;
int64_t x158 = 529205611LL;
static int16_t x159 = -3;
static volatile int32_t x168 = INT32_MAX;
static volatile int32_t t35 = -3941647;
volatile int8_t x176 = -1;
volatile int32_t t36 = -129534025;
static int64_t x178 = INT64_MIN;
volatile uint64_t x179 = UINT64_MAX;
uint64_t x186 = 378252540643047LLU;
volatile int16_t x188 = -1;
uint8_t x195 = 1U;
volatile int8_t x201 = INT8_MAX;
static int8_t x208 = -24;
uint32_t x210 = 541101268U;
volatile int64_t x211 = -44581059557550715LL;
int32_t t45 = -53;
int8_t x219 = 2;
uint8_t x220 = 34U;
static volatile int8_t x221 = -1;
int8_t x223 = 5;
uint16_t x234 = 19U;
int32_t x235 = -558453200;
int32_t x254 = INT32_MAX;
volatile int64_t x265 = 24LL;
volatile int32_t x267 = -14617;
int32_t x276 = 584321;
volatile int32_t t58 = 876;
uint32_t x279 = UINT32_MAX;
int32_t t59 = -187686934;
int16_t x288 = INT16_MAX;
volatile int64_t x298 = INT64_MIN;
int8_t x309 = INT8_MIN;
uint8_t x311 = 19U;
int8_t x312 = -11;
int64_t x317 = -1419684424666271LL;
volatile int32_t x318 = INT32_MIN;
int32_t t69 = 5;
uint32_t x334 = UINT32_MAX;
static volatile int16_t x338 = INT16_MIN;
int16_t x339 = INT16_MIN;
uint16_t x340 = 58U;
static volatile int32_t t72 = -582963372;
int16_t x344 = -1;
volatile uint16_t x356 = 1626U;
int16_t x360 = INT16_MAX;
uint32_t x365 = 23761627U;
int32_t t77 = 1;
static uint8_t x369 = 32U;
uint8_t x370 = 0U;
int32_t t79 = -2478;
static volatile uint16_t x392 = 4U;
int8_t x394 = -1;
volatile int8_t x395 = INT8_MAX;
volatile int8_t x398 = -1;
int64_t x402 = 48319223508LL;
int16_t x409 = -148;
uint64_t x421 = 10239418625309638LLU;
static volatile int16_t x423 = -9286;
uint16_t x426 = UINT16_MAX;
int16_t x432 = INT16_MIN;
volatile uint16_t x454 = 990U;
static uint16_t x455 = 508U;
int8_t x460 = 2;
int32_t t94 = 89162419;
uint16_t x462 = 13U;
int32_t x463 = INT32_MAX;
volatile int64_t t95 = -58820LL;
uint16_t x471 = UINT16_MAX;
static uint8_t x472 = 22U;
static int32_t t96 = -1;
volatile int32_t x482 = INT32_MAX;


void f0(void) {
	uint64_t x1 = 56LLU;
	uint64_t x3 = 132LLU;
	uint64_t x4 = 249213881LLU;
	uint64_t t0 = 130845533887LLU;

	t0 = (((x1^x2)<x3)-x4);

	if (t0 != 18446744073460337735LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 94U;
	int16_t x7 = INT16_MAX;
	volatile int32_t t1 = -977288;

	t1 = (((x5^x6)<x7)-x8);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int64_t x11 = -1LL;
	static uint64_t t2 = 47LLU;

	t2 = (((x9^x10)<x11)-x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	uint64_t x15 = 1402277821657185864LLU;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -99;

	t3 = (((x13^x14)<x15)-x16);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 790U;
	int32_t x19 = INT32_MIN;
	volatile uint64_t t4 = 10LLU;

	t4 = (((x17^x18)<x19)-x20);

	if (t4 != 18446744008550699437LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int64_t x23 = -473455704737LL;
	volatile int32_t t5 = 494282;

	t5 = (((x21^x22)<x23)-x24);

	if (t5 != -502417052) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int32_t x26 = INT32_MIN;
	volatile int32_t t6 = -526572;

	t6 = (((x25^x26)<x27)-x28);

	if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	static int64_t x31 = INT64_MAX;

	t7 = (((x29^x30)<x31)-x32);

	if (t7 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MAX;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -3LL;
	volatile int64_t t8 = -1LL;

	t8 = (((x33^x34)<x35)-x36);

	if (t8 != 3LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 1;
	int64_t x38 = INT64_MIN;
	volatile uint8_t x39 = UINT8_MAX;
	uint32_t x40 = 832261590U;

	t9 = (((x37^x38)<x39)-x40);

	if (t9 != 3462705707U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = -1;
	int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MAX;
	int64_t x52 = -28995LL;
	volatile int64_t t10 = -779001938LL;

	t10 = (((x49^x50)<x51)-x52);

	if (t10 != 28995LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = 41506649860LL;
	static volatile int32_t x58 = -412957592;
	static int8_t x59 = INT8_MAX;
	static volatile int32_t t11 = 17619;

	t11 = (((x57^x58)<x59)-x60);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x61 = 175488U;
	int64_t x62 = -1LL;
	static int64_t x63 = -2289LL;
	volatile uint64_t t12 = 65LLU;

	t12 = (((x61^x62)<x63)-x64);

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 47U;
	static uint8_t x66 = UINT8_MAX;
	int8_t x67 = INT8_MAX;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t13 = 85;

	t13 = (((x65^x66)<x67)-x68);

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 701704638082LLU;
	uint64_t x70 = 41647123008LLU;
	uint32_t x71 = 49U;
	volatile uint64_t x72 = 2657173351258059LLU;
	volatile uint64_t t14 = 19260114910288538LLU;

	t14 = (((x69^x70)<x71)-x72);

	if (t14 != 18444086900358293557LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = 3975462842951053662LL;
	int8_t x74 = INT8_MIN;
	static uint16_t x75 = 934U;
	volatile uint8_t x76 = UINT8_MAX;
	volatile int32_t t15 = -234773239;

	t15 = (((x73^x74)<x75)-x76);

	if (t15 != -254) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -37;
	int16_t x78 = INT16_MIN;
	volatile uint16_t x79 = UINT16_MAX;
	volatile uint64_t x80 = 1LLU;
	static volatile uint64_t t16 = 49831717526609410LLU;

	t16 = (((x77^x78)<x79)-x80);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = -1;
	int32_t x82 = INT32_MIN;
	volatile int32_t x83 = INT32_MIN;
	static int32_t t17 = -97;

	t17 = (((x81^x82)<x83)-x84);

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x89 = 3929U;
	int32_t x90 = INT32_MIN;
	volatile int32_t t18 = 229447;

	t18 = (((x89^x90)<x91)-x92);

	if (t18 != -25) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x94 = 213U;
	int64_t x95 = INT64_MAX;
	volatile uint32_t t19 = 558U;

	t19 = (((x93^x94)<x95)-x96);

	if (t19 != 4294967272U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	int16_t x100 = 47;
	volatile int32_t t20 = -28885;

	t20 = (((x97^x98)<x99)-x100);

	if (t20 != -46) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = -1LL;
	uint32_t x102 = 28801U;
	volatile int32_t x103 = INT32_MIN;
	volatile uint64_t x104 = UINT64_MAX;

	t21 = (((x101^x102)<x103)-x104);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -1LL;
	uint32_t x106 = 6U;
	int64_t x107 = INT64_MAX;
	uint32_t x108 = UINT32_MAX;
	uint32_t t22 = 1634866398U;

	t22 = (((x105^x106)<x107)-x108);

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -1;
	int16_t x111 = INT16_MAX;
	static int16_t x112 = 0;
	static volatile int32_t t23 = -535139;

	t23 = (((x109^x110)<x111)-x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = INT8_MAX;
	int32_t x114 = INT32_MIN;
	volatile uint32_t x116 = 1873463857U;
	uint32_t t24 = 1U;

	t24 = (((x113^x114)<x115)-x116);

	if (t24 != 2421503440U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x117 = 3340287663LLU;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -310;
	volatile int32_t x120 = INT32_MAX;
	volatile int32_t t25 = 0;

	t25 = (((x117^x118)<x119)-x120);

	if (t25 != -2147483646) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 7U;
	uint16_t x122 = 3U;
	volatile int8_t x123 = 1;
	int64_t x124 = INT64_MAX;
	int64_t t26 = -677LL;

	t26 = (((x121^x122)<x123)-x124);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	volatile int16_t x126 = -2;
	int16_t x127 = INT16_MAX;
	int16_t x128 = INT16_MIN;

	t27 = (((x125^x126)<x127)-x128);

	if (t27 != 32769) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	static int32_t x130 = INT32_MAX;
	uint64_t x131 = 119LLU;
	uint32_t x132 = 1103U;
	volatile uint32_t t28 = 43963263U;

	t28 = (((x129^x130)<x131)-x132);

	if (t28 != 4294966193U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = 15U;
	volatile int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;

	t29 = (((x133^x134)<x135)-x136);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 124327U;
	int64_t x142 = INT64_MIN;
	int32_t x144 = 1;
	int32_t t30 = 787819;

	t30 = (((x141^x142)<x143)-x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x145 = UINT16_MAX;
	volatile uint64_t x146 = 14889LLU;
	int64_t x147 = INT64_MIN;
	int64_t t31 = 55LL;

	t31 = (((x145^x146)<x147)-x148);

	if (t31 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = 61993654003525LL;
	uint64_t x151 = 456516116009LLU;
	uint64_t x152 = 225035LLU;
	volatile uint64_t t32 = 36258LLU;

	t32 = (((x149^x150)<x151)-x152);

	if (t32 != 18446744073709326581LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	uint32_t x155 = UINT32_MAX;
	uint32_t t33 = 0U;

	t33 = (((x153^x154)<x155)-x156);

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -1;
	int8_t x160 = -3;
	volatile int32_t t34 = -3830;

	t34 = (((x157^x158)<x159)-x160);

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = -10;
	volatile uint8_t x166 = 3U;
	int32_t x167 = INT32_MIN;

	t35 = (((x165^x166)<x167)-x168);

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x173 = -1;
	static int16_t x174 = INT16_MAX;
	uint64_t x175 = 469774232611LLU;

	t36 = (((x173^x174)<x175)-x176);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MAX;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t37 = 513477;

	t37 = (((x177^x178)<x179)-x180);

	if (t37 != 129) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	int8_t x183 = -7;
	uint8_t x184 = 0U;
	int32_t t38 = 3;

	t38 = (((x181^x182)<x183)-x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x185 = INT32_MIN;
	uint64_t x187 = 27621207951836LLU;
	static int32_t t39 = 2167260;

	t39 = (((x185^x186)<x187)-x188);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = 2068832610682329LLU;
	int8_t x194 = INT8_MAX;
	volatile uint32_t x196 = 574485U;
	volatile uint32_t t40 = 959145358U;

	t40 = (((x193^x194)<x195)-x196);

	if (t40 != 4294392811U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = INT32_MIN;
	uint32_t x198 = UINT32_MAX;
	static volatile int16_t x199 = -1;
	int16_t x200 = INT16_MAX;
	volatile int32_t t41 = 28726;

	t41 = (((x197^x198)<x199)-x200);

	if (t41 != -32766) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x202 = -3778873177972070492LL;
	static uint8_t x203 = 0U;
	volatile uint64_t x204 = 135347794348179LLU;
	static uint64_t t42 = 448LLU;

	t42 = (((x201^x202)<x203)-x204);

	if (t42 != 18446608725915203438LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = UINT16_MAX;
	int16_t x206 = 1;
	int8_t x207 = INT8_MIN;
	volatile int32_t t43 = 569419;

	t43 = (((x205^x206)<x207)-x208);

	if (t43 != 24) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = INT16_MIN;
	uint16_t x212 = UINT16_MAX;
	int32_t t44 = 365518684;

	t44 = (((x209^x210)<x211)-x212);

	if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = INT16_MIN;
	static volatile uint64_t x214 = 117824171404LLU;
	int64_t x215 = -14500903227LL;
	static int32_t x216 = -1;

	t45 = (((x213^x214)<x215)-x216);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = 4170597;
	static int64_t x218 = -1LL;
	volatile int32_t t46 = -1;

	t46 = (((x217^x218)<x219)-x220);

	if (t46 != -33) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x222 = -1;
	int8_t x224 = INT8_MIN;
	int32_t t47 = 23;

	t47 = (((x221^x222)<x223)-x224);

	if (t47 != 129) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = 836520109;
	uint8_t x226 = 6U;
	static uint32_t x227 = 4155375U;
	uint64_t x228 = 3131695088919075LLU;
	uint64_t t48 = 2453LLU;

	t48 = (((x225^x226)<x227)-x228);

	if (t48 != 18443612378620632541LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x233 = UINT64_MAX;
	static uint64_t x236 = 66394955200859LLU;
	volatile uint64_t t49 = 34856430290789LLU;

	t49 = (((x233^x234)<x235)-x236);

	if (t49 != 18446677678754350757LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x237 = UINT32_MAX;
	int32_t x238 = -1;
	static uint64_t x239 = 8632953059102276LLU;
	uint32_t x240 = 154561484U;
	static uint32_t t50 = 72517832U;

	t50 = (((x237^x238)<x239)-x240);

	if (t50 != 4140405813U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x241 = 15430U;
	int32_t x242 = 103171;
	int16_t x243 = -2;
	int64_t x244 = INT64_MAX;
	volatile int64_t t51 = -1399823275112729LL;

	t51 = (((x241^x242)<x243)-x244);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = 1U;
	int16_t x246 = 2;
	static uint64_t x247 = 32767852866445LLU;
	int64_t x248 = INT64_MAX;
	volatile int64_t t52 = -595473312LL;

	t52 = (((x245^x246)<x247)-x248);

	if (t52 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x253 = INT8_MIN;
	volatile int64_t x255 = INT64_MIN;
	uint64_t x256 = 1499673631694LLU;
	volatile uint64_t t53 = 3206345958354813LLU;

	t53 = (((x253^x254)<x255)-x256);

	if (t53 != 18446742574035919922LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = INT64_MAX;
	int64_t x258 = -1LL;
	volatile uint32_t x259 = 0U;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t54 = -6521388;

	t54 = (((x257^x258)<x259)-x260);

	if (t54 != 32769) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x261 = 115657LL;
	int32_t x262 = INT32_MAX;
	int64_t x263 = -121355677794664LL;
	int8_t x264 = -6;
	static volatile int32_t t55 = 8868457;

	t55 = (((x261^x262)<x263)-x264);

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x266 = 1981590891702LLU;
	int32_t x268 = 1;
	volatile int32_t t56 = -276659989;

	t56 = (((x265^x266)<x267)-x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -5237390422LL;
	int32_t x270 = -1;
	volatile uint8_t x271 = 45U;
	int8_t x272 = INT8_MAX;
	volatile int32_t t57 = -27378488;

	t57 = (((x269^x270)<x271)-x272);

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = -1;
	uint32_t x274 = 113029U;
	volatile uint16_t x275 = UINT16_MAX;

	t58 = (((x273^x274)<x275)-x276);

	if (t58 != -584321) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = INT32_MAX;
	volatile uint16_t x278 = UINT16_MAX;
	int8_t x280 = INT8_MAX;

	t59 = (((x277^x278)<x279)-x280);

	if (t59 != -126) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = 1U;
	uint16_t x282 = UINT16_MAX;
	int32_t x283 = INT32_MIN;
	volatile uint8_t x284 = 9U;
	static volatile int32_t t60 = -717070;

	t60 = (((x281^x282)<x283)-x284);

	if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = INT8_MAX;
	uint32_t x286 = 61015U;
	static volatile int32_t x287 = -1;
	int32_t t61 = 199;

	t61 = (((x285^x286)<x287)-x288);

	if (t61 != -32766) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x293 = INT16_MIN;
	static int32_t x294 = -14;
	static int32_t x295 = -56052734;
	static int8_t x296 = INT8_MIN;
	int32_t t62 = 106127;

	t62 = (((x293^x294)<x295)-x296);

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x299 = INT64_MIN;
	int64_t x300 = -929712417LL;
	static volatile int64_t t63 = -71441579LL;

	t63 = (((x297^x298)<x299)-x300);

	if (t63 != 929712417LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = -3125;
	int64_t x302 = 2046203291258842LL;
	int32_t x303 = INT32_MAX;
	uint8_t x304 = 19U;
	volatile int32_t t64 = -64411;

	t64 = (((x301^x302)<x303)-x304);

	if (t64 != -18) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = -1;
	static int32_t x306 = -1;
	static volatile uint16_t x307 = 335U;
	int16_t x308 = INT16_MIN;
	volatile int32_t t65 = 82;

	t65 = (((x305^x306)<x307)-x308);

	if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x310 = -1558584587715831854LL;
	int32_t t66 = 283969;

	t66 = (((x309^x310)<x311)-x312);

	if (t66 != 11) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x319 = 2225401U;
	volatile int8_t x320 = INT8_MAX;
	volatile int32_t t67 = 22;

	t67 = (((x317^x318)<x319)-x320);

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x321 = -15784;
	int32_t x322 = -1;
	int64_t x323 = INT64_MAX;
	int32_t x324 = 90;
	int32_t t68 = 7976;

	t68 = (((x321^x322)<x323)-x324);

	if (t68 != -89) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = 6040094098922756LL;
	uint16_t x326 = UINT16_MAX;
	volatile uint16_t x327 = 890U;
	int16_t x328 = -1;

	t69 = (((x325^x326)<x327)-x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x329 = 0U;
	int8_t x330 = 5;
	volatile int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t70 = 370;

	t70 = (((x329^x330)<x331)-x332);

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x333 = INT64_MIN;
	int16_t x335 = -1;
	volatile int16_t x336 = INT16_MAX;
	volatile int32_t t71 = -103774694;

	t71 = (((x333^x334)<x335)-x336);

	if (t71 != -32766) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x337 = INT16_MIN;

	t72 = (((x337^x338)<x339)-x340);

	if (t72 != -58) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x341 = UINT16_MAX;
	static uint8_t x342 = 59U;
	int8_t x343 = 17;
	static int32_t t73 = -37;

	t73 = (((x341^x342)<x343)-x344);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x345 = UINT8_MAX;
	volatile uint16_t x346 = UINT16_MAX;
	volatile uint8_t x347 = 78U;
	static uint8_t x348 = UINT8_MAX;
	static volatile int32_t t74 = 14543284;

	t74 = (((x345^x346)<x347)-x348);

	if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x353 = 320U;
	uint8_t x354 = 17U;
	int64_t x355 = -30112588732LL;
	int32_t t75 = -1341246;

	t75 = (((x353^x354)<x355)-x356);

	if (t75 != -1626) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x357 = 56926140648968LLU;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 0U;
	volatile int32_t t76 = -651763;

	t76 = (((x357^x358)<x359)-x360);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x366 = 1732;
	static int16_t x367 = -14;
	uint8_t x368 = 76U;

	t77 = (((x365^x366)<x367)-x368);

	if (t77 != -75) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t78 = 6604;

	t78 = (((x369^x370)<x371)-x372);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x381 = 16129LLU;
	static int64_t x382 = -1LL;
	int8_t x383 = -10;
	static int16_t x384 = -1;

	t79 = (((x381^x382)<x383)-x384);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = INT64_MAX;
	uint8_t x390 = 33U;
	static uint32_t x391 = 594585U;
	int32_t t80 = 1716;

	t80 = (((x389^x390)<x391)-x392);

	if (t80 != -4) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x393 = 2U;
	int8_t x396 = INT8_MIN;
	int32_t t81 = 2315;

	t81 = (((x393^x394)<x395)-x396);

	if (t81 != 129) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x397 = UINT32_MAX;
	static int16_t x399 = INT16_MIN;
	volatile int64_t x400 = -1LL;
	int64_t t82 = -254945571321LL;

	t82 = (((x397^x398)<x399)-x400);

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x401 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = 1U;
	static volatile uint32_t t83 = UINT32_MAX;

	t83 = (((x401^x402)<x403)-x404);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = -166278287858LL;
	int8_t x406 = INT8_MAX;
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = INT16_MAX;
	volatile int32_t t84 = -1;

	t84 = (((x405^x406)<x407)-x408);

	if (t84 != -32766) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x410 = -1LL;
	int32_t x411 = 1863;
	int8_t x412 = -2;
	volatile int32_t t85 = 2222;

	t85 = (((x409^x410)<x411)-x412);

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = -1LL;
	uint32_t x414 = 670559U;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = -1;
	volatile int32_t t86 = -50273332;

	t86 = (((x413^x414)<x415)-x416);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x417 = -1;
	uint16_t x418 = UINT16_MAX;
	static int8_t x419 = 1;
	static int8_t x420 = INT8_MIN;
	volatile int32_t t87 = -5;

	t87 = (((x417^x418)<x419)-x420);

	if (t87 != 129) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x422 = 86376U;
	volatile int16_t x424 = 1473;
	volatile int32_t t88 = -1;

	t88 = (((x421^x422)<x423)-x424);

	if (t88 != -1472) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = -1445853673LL;
	static int8_t x427 = -3;
	int16_t x428 = -1;
	static volatile int32_t t89 = -8741801;

	t89 = (((x425^x426)<x427)-x428);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x429 = INT16_MAX;
	uint64_t x430 = 2LLU;
	int16_t x431 = INT16_MIN;
	int32_t t90 = 88;

	t90 = (((x429^x430)<x431)-x432);

	if (t90 != 32769) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x433 = -24460717359LL;
	int8_t x434 = INT8_MAX;
	static int32_t x435 = INT32_MIN;
	volatile int32_t x436 = -1580397;
	volatile int32_t t91 = 6370;

	t91 = (((x433^x434)<x435)-x436);

	if (t91 != 1580398) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x437 = UINT8_MAX;
	volatile int32_t x438 = -1;
	volatile int8_t x439 = -1;
	int32_t x440 = -1;
	volatile int32_t t92 = 252250605;

	t92 = (((x437^x438)<x439)-x440);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x453 = -116;
	int16_t x456 = INT16_MAX;
	static int32_t t93 = 381;

	t93 = (((x453^x454)<x455)-x456);

	if (t93 != -32766) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x457 = 3U;
	int16_t x458 = 247;
	volatile int8_t x459 = -14;

	t94 = (((x457^x458)<x459)-x460);

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = INT8_MAX;
	int64_t x464 = INT64_MAX;

	t95 = (((x461^x462)<x463)-x464);

	if (t95 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = 2LL;
	volatile int32_t x470 = -1;

	t96 = (((x469^x470)<x471)-x472);

	if (t96 != -21) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x477 = UINT8_MAX;
	int32_t x478 = -106674;
	int64_t x479 = INT64_MIN;
	int16_t x480 = 61;
	static int32_t t97 = 455721422;

	t97 = (((x477^x478)<x479)-x480);

	if (t97 != -61) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x481 = 12243001LLU;
	int64_t x483 = -9LL;
	int8_t x484 = INT8_MIN;
	int32_t t98 = -64535;

	t98 = (((x481^x482)<x483)-x484);

	if (t98 != 129) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x485 = -518677896;
	int8_t x486 = 4;
	volatile int8_t x487 = -1;
	static int8_t x488 = 1;
	volatile int32_t t99 = -9455;

	t99 = (((x485^x486)<x487)-x488);

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

