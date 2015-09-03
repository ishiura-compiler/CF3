#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = INT16_MIN;
int8_t x9 = 0;
uint32_t x12 = UINT32_MAX;
int8_t x38 = 1;
volatile int64_t x39 = -1LL;
int8_t x45 = -1;
uint64_t x47 = UINT64_MAX;
int64_t x48 = -9LL;
volatile uint64_t t10 = 9942322415LLU;
int16_t x53 = INT16_MAX;
uint32_t x55 = UINT32_MAX;
volatile int16_t x57 = INT16_MIN;
int8_t x62 = 1;
int32_t x64 = -17145;
uint16_t x69 = UINT16_MAX;
uint16_t x70 = UINT16_MAX;
int8_t x71 = -1;
int32_t t14 = 123518746;
int16_t x78 = 20;
static int16_t x79 = -504;
int64_t x81 = INT64_MAX;
int16_t x82 = INT16_MAX;
uint16_t x93 = 2811U;
int8_t x94 = -1;
static uint8_t x95 = 0U;
static uint8_t x97 = 27U;
static int64_t x102 = -468297443LL;
static volatile uint8_t x106 = 0U;
static int16_t x112 = INT16_MIN;
static int32_t x115 = -1;
int16_t x128 = -1;
uint64_t x137 = 486799381171470LLU;
volatile uint64_t t29 = 1LLU;
int8_t x146 = 0;
int16_t x152 = INT16_MIN;
uint64_t x155 = 30638070965LLU;
uint64_t t33 = 4752350017625702LLU;
int32_t x157 = -148343288;
uint32_t x158 = UINT32_MAX;
uint16_t x162 = UINT16_MAX;
volatile uint8_t x177 = UINT8_MAX;
static int64_t t38 = -11038674930865LL;
uint16_t x188 = 1U;
int32_t x189 = INT32_MAX;
int64_t x208 = 104615210LL;
int32_t x212 = -1;
uint16_t x216 = 58U;
uint64_t x219 = UINT64_MAX;
uint64_t x229 = UINT64_MAX;
int32_t x232 = 38124238;
static int8_t x266 = 1;
uint16_t x267 = 1812U;
volatile int64_t t51 = -258734729LL;
int16_t x278 = INT16_MIN;
int32_t x292 = INT32_MIN;
static volatile uint16_t x299 = 783U;
volatile int32_t x305 = INT32_MIN;
int32_t t57 = 1024641;
int64_t t58 = -8074LL;
static int8_t x321 = INT8_MAX;
uint64_t x322 = 4014LLU;
volatile int32_t x326 = INT32_MIN;
volatile uint64_t x328 = UINT64_MAX;
int16_t x346 = INT16_MIN;
volatile int32_t t63 = 28078157;
static int32_t x359 = 114260;
int32_t x369 = INT32_MIN;
int32_t x381 = 0;
uint16_t x385 = UINT16_MAX;
int64_t x387 = INT64_MIN;
uint32_t x388 = 389878U;
int16_t x393 = -1;
uint64_t x396 = 60967465757772LLU;
int16_t x398 = INT16_MIN;
int64_t x400 = 8953143324340295LL;
uint32_t x414 = 12285U;
uint32_t t74 = 57U;
uint64_t x419 = 15171667305989228LLU;
static uint64_t x421 = 78LLU;
uint16_t x424 = UINT16_MAX;
uint16_t x449 = UINT16_MAX;
volatile int8_t x451 = INT8_MIN;
static uint64_t x454 = UINT64_MAX;
uint64_t x468 = UINT64_MAX;
uint64_t x469 = 228539856LLU;
int16_t x472 = INT16_MIN;
static int16_t x477 = INT16_MIN;
static int64_t t89 = -13570245006009631LL;
int32_t x491 = -72;
uint64_t x492 = 11291361145197LLU;
int16_t x493 = INT16_MIN;
int8_t x506 = -6;
static volatile uint8_t x510 = 31U;
uint16_t x512 = UINT16_MAX;
static volatile int64_t t94 = -3372733544697LL;
volatile int8_t x514 = -1;
static int8_t x515 = INT8_MIN;
int8_t x519 = -34;
volatile int16_t x520 = INT16_MAX;
int8_t x524 = INT8_MAX;
int8_t x532 = -1;
uint8_t x536 = UINT8_MAX;


void f0(void) {
	int8_t x1 = -1;
	static volatile int64_t x2 = -1LL;
	volatile int8_t x4 = INT8_MIN;
	static volatile int64_t t0 = 6143896879888LL;

	t0 = ((x1^(x2*x3))^x4);

	if (t0 != 32895LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = -1;
	int32_t x11 = -28582299;
	volatile uint32_t t1 = 5409U;

	t1 = ((x9^(x10*x11))^x12);

	if (t1 != 4266384996U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	int8_t x14 = -1;
	volatile int64_t x15 = -1012264145679LL;
	int64_t x16 = INT64_MIN;
	int64_t t2 = 181481LL;

	t2 = ((x13^(x14*x15))^x16);

	if (t2 != 9223371024590630128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MIN;
	static uint64_t x19 = 489LLU;
	static uint64_t x20 = 81LLU;
	volatile uint64_t t3 = 6764755LLU;

	t3 = ((x17^(x18*x19))^x20);

	if (t3 != 81LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = INT32_MIN;
	int64_t x26 = -183907LL;
	int64_t x27 = -1231854106LL;
	static uint8_t x28 = 73U;
	static int64_t t4 = -12678453204LL;

	t4 = ((x25^(x26*x27))^x28);

	if (t4 != -226544539368377LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 79340438U;
	int32_t x30 = 0;
	int8_t x31 = INT8_MAX;
	static int64_t x32 = -1LL;
	static volatile int64_t t5 = -642744105565212LL;

	t5 = ((x29^(x30*x31))^x32);

	if (t5 != -79340439LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = INT8_MIN;
	int32_t x34 = -1;
	int64_t x35 = -1897653845725LL;
	volatile int8_t x36 = -1;
	int64_t t6 = -1307233357420616715LL;

	t6 = ((x33^(x34*x35))^x36);

	if (t6 != 1897653845666LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	volatile int64_t t7 = -8LL;

	t7 = ((x37^(x38*x39))^x40);

	if (t7 != -2147450881LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = 2535U;
	static int64_t x42 = INT64_MIN;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = -1;
	volatile uint64_t t8 = 237344434LLU;

	t8 = ((x41^(x42*x43))^x44);

	if (t8 != 9223372036854773272LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x46 = INT64_MAX;
	static uint64_t t9 = 3311625532LLU;

	t9 = ((x45^(x46*x47))^x48);

	if (t9 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -35;
	volatile uint64_t x50 = 335655758LLU;
	int64_t x51 = INT64_MIN;
	int16_t x52 = -1;

	t10 = ((x49^(x50*x51))^x52);

	if (t10 != 34LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x54 = 757;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t11 = 235269U;

	t11 = ((x53^(x54*x55))^x56);

	if (t11 != 2147451636U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = UINT32_MAX;
	static volatile uint32_t x59 = UINT32_MAX;
	uint64_t x60 = 21170837017361686LLU;
	static volatile uint64_t t12 = 80069466213123LLU;

	t12 = ((x57^(x58*x59))^x60);

	if (t12 != 21170836077280535LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	uint16_t x63 = 14U;
	int32_t t13 = 36;

	t13 = ((x61^(x62*x63))^x64);

	if (t13 != 17142) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x72 = INT32_MIN;

	t14 = ((x69^(x70*x71))^x72);

	if (t14 != 2147483646) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	uint64_t x74 = UINT64_MAX;
	static volatile int8_t x75 = -1;
	volatile int16_t x76 = INT16_MIN;
	volatile uint64_t t15 = 12308539196184LLU;

	t15 = ((x73^(x74*x75))^x76);

	if (t15 != 32766LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = 7;
	static int64_t x80 = -1LL;
	volatile int64_t t16 = 4954492LL;

	t16 = ((x77^(x78*x79))^x80);

	if (t16 != 10072LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x83 = INT16_MAX;
	static int8_t x84 = -1;
	volatile int64_t t17 = 321879392435336LL;

	t17 = ((x81^(x82*x83))^x84);

	if (t17 != -9223372035781099519LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MAX;
	volatile int64_t x88 = -67384841996LL;
	int64_t t18 = -1017260236118592019LL;

	t18 = ((x85^(x86*x87))^x88);

	if (t18 != -67382339701LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x89 = 0;
	uint64_t x90 = UINT64_MAX;
	volatile int16_t x91 = INT16_MIN;
	int32_t x92 = 5809;
	uint64_t t19 = 2689969187524254LLU;

	t19 = ((x89^(x90*x91))^x92);

	if (t19 != 38577LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x96 = INT16_MIN;
	static volatile int32_t t20 = 54753;

	t20 = ((x93^(x94*x95))^x96);

	if (t20 != -29957) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x98 = UINT8_MAX;
	int16_t x99 = INT16_MAX;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t21 = -542;

	t21 = ((x97^(x98*x99))^x100);

	if (t21 != -8355686) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x103 = 17U;
	uint64_t x104 = 12LLU;
	uint64_t t22 = 2962LLU;

	t22 = ((x101^(x102*x103))^x104);

	if (t22 != 9223372028893719265LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 67;
	volatile int16_t x107 = INT16_MIN;
	int32_t x108 = -680600438;
	volatile int32_t t23 = 472519880;

	t23 = ((x105^(x106*x107))^x108);

	if (t23 != -680600375) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 28966167461737LLU;
	uint64_t x110 = UINT64_MAX;
	static volatile uint64_t x111 = UINT64_MAX;
	volatile uint64_t t24 = 273483346677LLU;

	t24 = ((x109^(x110*x111))^x112);

	if (t24 != 18446715107542089576LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 0U;
	volatile uint32_t x114 = 3132U;
	int16_t x116 = INT16_MIN;
	uint32_t t25 = 86U;

	t25 = ((x113^(x114*x115))^x116);

	if (t25 != 29636U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 7072;
	static volatile uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -10;
	volatile int32_t t26 = -403997;

	t26 = ((x117^(x118*x119))^x120);

	if (t26 != 8381654) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	int8_t x127 = 1;
	static int32_t t27 = 39;

	t27 = ((x125^(x126*x127))^x128);

	if (t27 != 65408) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x129 = 24LL;
	volatile uint32_t x130 = 1250U;
	uint16_t x131 = 12233U;
	static int32_t x132 = -462380;
	int64_t t28 = -19866481LL;

	t28 = ((x129^(x130*x131))^x132);

	if (t28 != -15621442LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x138 = 464895657861LLU;
	static int32_t x139 = INT32_MAX;
	uint16_t x140 = UINT16_MAX;

	t29 = ((x137^(x138*x139))^x140);

	if (t29 != 2232054696132921994LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 0U;
	int16_t x142 = INT16_MIN;
	static uint8_t x143 = 12U;
	volatile int32_t x144 = INT32_MIN;
	static volatile int32_t t30 = -3;

	t30 = ((x141^(x142*x143))^x144);

	if (t30 != 2147090432) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x145 = INT16_MAX;
	uint64_t x147 = 322478LLU;
	static int32_t x148 = INT32_MAX;
	volatile uint64_t t31 = 2LLU;

	t31 = ((x145^(x146*x147))^x148);

	if (t31 != 2147450880LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x149 = UINT32_MAX;
	static int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	volatile uint32_t t32 = 198634U;

	t32 = ((x149^(x150*x151))^x152);

	if (t32 != 16383U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x153 = INT32_MIN;
	uint8_t x154 = UINT8_MAX;
	volatile int16_t x156 = INT16_MIN;

	t33 = ((x153^(x154*x155))^x156);

	if (t33 != 7814530422859LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x159 = -579889;
	volatile uint16_t x160 = 458U;
	volatile uint32_t t34 = 1886U;

	t34 = ((x157^(x158*x159))^x160);

	if (t34 != 4146114291U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -44;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MIN;
	static int32_t t35 = -944275974;

	t35 = ((x161^(x162*x163))^x164);

	if (t35 != 2130772181) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x169 = -1LL;
	volatile int64_t x170 = INT64_MIN;
	uint8_t x171 = 0U;
	uint64_t x172 = 43673LLU;
	uint64_t t36 = 126660LLU;

	t36 = ((x169^(x170*x171))^x172);

	if (t36 != 18446744073709507942LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x178 = 2211U;
	uint8_t x179 = 60U;
	uint64_t x180 = 588253393822276581LLU;
	uint64_t t37 = 2094344302LLU;

	t37 = ((x177^(x178*x179))^x180);

	if (t37 != 588253393822407982LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x181 = INT32_MAX;
	int16_t x182 = -1;
	int16_t x183 = -1;
	int64_t x184 = -1LL;

	t38 = ((x181^(x182*x183))^x184);

	if (t38 != -2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MIN;
	uint8_t x186 = UINT8_MAX;
	static uint64_t x187 = 41063325622LLU;
	uint64_t t39 = 11309042980100583LLU;

	t39 = ((x185^(x186*x187))^x188);

	if (t39 != 18446733600449566283LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x190 = INT32_MAX;
	int64_t x191 = -942650299LL;
	int8_t x192 = -1;
	static volatile int64_t t40 = 242756LL;

	t40 = ((x189^(x190*x191))^x192);

	if (t40 != 2024326101679977403LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = 41;
	static int16_t x206 = -1;
	static int16_t x207 = INT16_MIN;
	int64_t t41 = 524LL;

	t41 = ((x205^(x206*x207))^x208);

	if (t41 != 104647939LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x209 = 11;
	static int16_t x210 = INT16_MIN;
	uint16_t x211 = 20456U;
	static volatile int32_t t42 = -172153855;

	t42 = ((x209^(x210*x211))^x212);

	if (t42 != 670302196) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = 1573614LL;
	int16_t x214 = -1;
	volatile int16_t x215 = INT16_MIN;
	volatile int64_t t43 = -31466357459291355LL;

	t43 = ((x213^(x214*x215))^x216);

	if (t43 != 1606356LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = -21129022;
	volatile int8_t x218 = -1;
	uint16_t x220 = 1U;
	uint64_t t44 = 2025054LLU;

	t44 = ((x217^(x218*x219))^x220);

	if (t44 != 18446744073688422594LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x230 = 1284U;
	int8_t x231 = -1;
	volatile uint64_t t45 = 3LLU;

	t45 = ((x229^(x230*x231))^x232);

	if (t45 != 38125517LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x241 = -28702;
	int8_t x242 = -19;
	uint32_t x243 = UINT32_MAX;
	uint64_t x244 = 66858794LLU;
	static volatile uint64_t t46 = 237372484308777985LLU;

	t46 = ((x241^(x242*x243))^x244);

	if (t46 != 4228096219LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = 2U;
	uint16_t x252 = 1U;
	volatile int64_t t47 = -15220715LL;

	t47 = ((x249^(x250*x251))^x252);

	if (t47 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MAX;
	int16_t x259 = -1;
	int64_t x260 = INT64_MAX;
	int64_t t48 = 296684636594LL;

	t48 = ((x257^(x258*x259))^x260);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x261 = 0U;
	volatile uint16_t x262 = 45U;
	int16_t x263 = -1;
	static int8_t x264 = 13;
	static int32_t t49 = 3414;

	t49 = ((x261^(x262*x263))^x264);

	if (t49 != -34) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x265 = 956U;
	uint32_t x268 = 3604U;
	uint32_t t50 = 2U;

	t50 = ((x265^(x266*x267))^x268);

	if (t50 != 2748U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x269 = INT64_MIN;
	volatile int32_t x270 = INT32_MAX;
	static int16_t x271 = 1;
	uint32_t x272 = UINT32_MAX;

	t51 = ((x269^(x270*x271))^x272);

	if (t51 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x277 = -9841681912LL;
	int16_t x279 = -1;
	int8_t x280 = -2;
	volatile int64_t t52 = -414640011101578493LL;

	t52 = ((x277^(x278*x279))^x280);

	if (t52 != 9841714678LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = 517684518;
	uint16_t x286 = 26330U;
	static volatile int64_t x287 = 15421LL;
	uint64_t x288 = 6333978813750LLU;
	uint64_t t53 = 442LLU;

	t53 = ((x285^(x286*x287))^x288);

	if (t53 != 6333875487202LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x289 = 2U;
	int8_t x290 = 1;
	static uint16_t x291 = 15688U;
	static volatile int32_t t54 = 1617103;

	t54 = ((x289^(x290*x291))^x292);

	if (t54 != -2147467958) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x293 = 97U;
	uint8_t x294 = UINT8_MAX;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = 3;
	static volatile int32_t t55 = 3;

	t55 = ((x293^(x294*x295))^x296);

	if (t55 != 16711523) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x297 = -1;
	static volatile int8_t x298 = INT8_MAX;
	volatile int16_t x300 = -9298;
	int32_t t56 = -611288;

	t56 = ((x297^(x298*x299))^x300);

	if (t56 != 106528) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x306 = UINT16_MAX;
	static int16_t x307 = INT16_MAX;
	uint16_t x308 = 3707U;

	t57 = ((x305^(x306*x307))^x308);

	if (t57 != -94598) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x313 = -1005570767;
	int64_t x314 = -1LL;
	uint16_t x315 = 56U;
	uint32_t x316 = UINT32_MAX;

	t58 = ((x313^(x314*x315))^x316);

	if (t58 != 3289396486LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x323 = INT16_MAX;
	int8_t x324 = INT8_MAX;
	uint64_t t59 = 1848652947725586542LLU;

	t59 = ((x321^(x322*x323))^x324);

	if (t59 != 131526738LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x325 = INT64_MIN;
	static volatile uint32_t x327 = UINT32_MAX;
	volatile uint64_t t60 = 102765LLU;

	t60 = ((x325^(x326*x327))^x328);

	if (t60 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x333 = -34;
	static int64_t x334 = -1LL;
	static int8_t x335 = -7;
	int64_t x336 = INT64_MAX;
	int64_t t61 = 597137662093LL;

	t61 = ((x333^(x334*x335))^x336);

	if (t61 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x345 = 2822U;
	static volatile int8_t x347 = INT8_MIN;
	static int8_t x348 = INT8_MAX;
	uint32_t t62 = 324092U;

	t62 = ((x345^(x346*x347))^x348);

	if (t62 != 4197241U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x349 = 2U;
	uint16_t x350 = 8U;
	static int16_t x351 = 4;
	volatile int16_t x352 = INT16_MIN;

	t63 = ((x349^(x350*x351))^x352);

	if (t63 != -32734) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x357 = INT64_MIN;
	uint64_t x358 = UINT64_MAX;
	static int64_t x360 = -1LL;
	volatile uint64_t t64 = 96521318806996LLU;

	t64 = ((x357^(x358*x359))^x360);

	if (t64 != 9223372036854890067LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x365 = INT32_MIN;
	int16_t x366 = -19;
	static uint32_t x367 = 11U;
	uint8_t x368 = 24U;
	volatile uint32_t t65 = 22468983U;

	t65 = ((x365^(x366*x367))^x368);

	if (t65 != 2147483447U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x370 = -1;
	int16_t x371 = -25;
	uint16_t x372 = UINT16_MAX;
	int32_t t66 = -1;

	t66 = ((x369^(x370*x371))^x372);

	if (t66 != -2147418138) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x373 = INT32_MAX;
	uint64_t x374 = 1016369206242270667LLU;
	volatile int32_t x375 = INT32_MIN;
	volatile int16_t x376 = 35;
	volatile uint64_t t67 = 8769084LLU;

	t67 = ((x373^(x374*x375))^x376);

	if (t67 != 14025424315944533980LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = -803;
	volatile int8_t x378 = 14;
	static uint8_t x379 = 39U;
	int16_t x380 = INT16_MAX;
	static volatile int32_t t68 = 22;

	t68 = ((x377^(x378*x379))^x380);

	if (t68 != -32512) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x382 = 127714996U;
	int32_t x383 = INT32_MIN;
	static uint8_t x384 = 7U;
	volatile uint32_t t69 = 15U;

	t69 = ((x381^(x382*x383))^x384);

	if (t69 != 7U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x386 = 62381396708455229LLU;
	uint64_t t70 = 947LLU;

	t70 = ((x385^(x386*x387))^x388);

	if (t70 != 9223372036855106825LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x394 = 25;
	uint8_t x395 = 14U;
	volatile uint64_t t71 = 2LLU;

	t71 = ((x393^(x394*x395))^x396);

	if (t71 != 18446683106243793645LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x397 = 119795707U;
	volatile int16_t x399 = INT16_MAX;
	volatile int64_t t72 = 1663200070709LL;

	t72 = ((x397^(x398*x399))^x400);

	if (t72 != 8953146426204092LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x405 = -3;
	static int64_t x406 = -1LL;
	int32_t x407 = 261979;
	volatile int32_t x408 = -13;
	static int64_t t73 = -39935574983LL;

	t73 = ((x405^(x406*x407))^x408);

	if (t73 != -261973LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = -1;
	static int16_t x415 = INT16_MIN;
	int8_t x416 = -2;

	t74 = ((x413^(x414*x415))^x416);

	if (t74 != 3892412417U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x417 = 0;
	static int16_t x418 = -1;
	static uint16_t x420 = 6U;
	volatile uint64_t t75 = 46195LLU;

	t75 = ((x417^(x418*x419))^x420);

	if (t75 != 18431572406403562386LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x422 = INT16_MIN;
	static int8_t x423 = INT8_MIN;
	uint64_t t76 = 243866701LLU;

	t76 = ((x421^(x422*x423))^x424);

	if (t76 != 4259761LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x429 = 25;
	uint8_t x430 = 62U;
	uint16_t x431 = 0U;
	int64_t x432 = -1LL;
	volatile int64_t t77 = -84610080288755025LL;

	t77 = ((x429^(x430*x431))^x432);

	if (t77 != -26LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x437 = -1;
	uint8_t x438 = 12U;
	static uint32_t x439 = 4063391U;
	uint32_t x440 = 8989U;
	uint32_t t78 = 0U;

	t78 = ((x437^(x438*x439))^x440);

	if (t78 != 4246199190U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x441 = 61838242LLU;
	int8_t x442 = INT8_MAX;
	int16_t x443 = INT16_MIN;
	int64_t x444 = -1LL;
	uint64_t t79 = 2538576LLU;

	t79 = ((x441^(x442*x443))^x444);

	if (t79 != 59829341LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x445 = INT8_MIN;
	int32_t x446 = INT32_MIN;
	volatile uint8_t x447 = 1U;
	int8_t x448 = -1;
	int32_t t80 = 510278;

	t80 = ((x445^(x446*x447))^x448);

	if (t80 != -2147483521) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x450 = INT16_MAX;
	int16_t x452 = INT16_MAX;
	volatile int32_t t81 = -235024717;

	t81 = ((x449^(x450*x451))^x452);

	if (t81 != -4161408) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x453 = -3;
	int64_t x455 = -2179414LL;
	uint16_t x456 = 0U;
	static uint64_t t82 = 5570755527750616903LLU;

	t82 = ((x453^(x454*x455))^x456);

	if (t82 != 18446744073707372203LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x461 = INT8_MAX;
	volatile uint64_t x462 = 3854802LLU;
	int64_t x463 = INT64_MIN;
	static uint32_t x464 = 501955U;
	uint64_t t83 = 2LLU;

	t83 = ((x461^(x462*x463))^x464);

	if (t83 != 501948LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x465 = -1;
	int64_t x466 = 78LL;
	uint32_t x467 = 60U;
	uint64_t t84 = 19598LLU;

	t84 = ((x465^(x466*x467))^x468);

	if (t84 != 4680LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x470 = -1;
	int8_t x471 = INT8_MIN;
	volatile uint64_t t85 = 3511610073LLU;

	t85 = ((x469^(x470*x471))^x472);

	if (t85 != 18446744073481010512LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x473 = 2031682U;
	int8_t x474 = INT8_MAX;
	volatile uint64_t x475 = 1883566503722814LLU;
	volatile int64_t x476 = -1LL;
	uint64_t t86 = 187734428020885619LLU;

	t86 = ((x473^(x474*x475))^x476);

	if (t86 != 18207531127734984831LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x478 = 2903U;
	volatile uint32_t x479 = 259753134U;
	int16_t x480 = INT16_MAX;
	volatile uint32_t t87 = 261060U;

	t87 = ((x477^(x478*x479))^x480);

	if (t87 != 1850896093U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x481 = 938654472115263LLU;
	int64_t x482 = 6954LL;
	int16_t x483 = INT16_MIN;
	int8_t x484 = INT8_MAX;
	volatile uint64_t t88 = 26346710240991288LLU;

	t88 = ((x481^(x482*x483))^x484);

	if (t88 != 18445805419143861312LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x485 = -1;
	int8_t x486 = -1;
	volatile uint16_t x487 = 105U;
	static int64_t x488 = 222006212221895LL;

	t89 = ((x485^(x486*x487))^x488);

	if (t89 != 222006212221871LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x489 = INT16_MIN;
	int32_t x490 = -7;
	volatile uint64_t t90 = 8985084LLU;

	t90 = ((x489^(x490*x491))^x492);

	if (t90 != 18446732782348431509LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x494 = -1LL;
	int32_t x495 = INT32_MIN;
	static volatile int64_t x496 = INT64_MAX;
	static volatile int64_t t91 = 12110279492808LL;

	t91 = ((x493^(x494*x495))^x496);

	if (t91 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x501 = 1247U;
	static int16_t x502 = INT16_MAX;
	uint16_t x503 = UINT16_MAX;
	int32_t x504 = -172403729;
	volatile uint32_t t92 = 21444051U;

	t92 = ((x501^(x502*x503))^x504);

	if (t92 != 2319963953U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x505 = -1;
	volatile int16_t x507 = 1652;
	static uint16_t x508 = UINT16_MAX;
	static volatile int32_t t93 = -30795;

	t93 = ((x505^(x506*x507))^x508);

	if (t93 != 55624) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x509 = INT64_MAX;
	static int8_t x511 = -2;

	t94 = ((x509^(x510*x511))^x512);

	if (t94 != -9223372036854710334LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x513 = 1820U;
	volatile int32_t x516 = -96550;
	static volatile uint32_t t95 = 73408982U;

	t95 = ((x513^(x514*x515))^x516);

	if (t95 != 4294869318U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x517 = -1;
	uint32_t x518 = 14365U;
	uint32_t t96 = 8132U;

	t96 = ((x517^(x518*x519))^x520);

	if (t96 != 461862U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x521 = INT64_MAX;
	static int16_t x522 = 0;
	uint32_t x523 = 201U;
	volatile int64_t t97 = 20646032LL;

	t97 = ((x521^(x522*x523))^x524);

	if (t97 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x529 = 658LLU;
	static int16_t x530 = 13754;
	int8_t x531 = -1;
	volatile uint64_t t98 = 165124273523LLU;

	t98 = ((x529^(x530*x531))^x532);

	if (t98 != 14123LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x533 = INT8_MIN;
	uint8_t x534 = UINT8_MAX;
	int16_t x535 = 3578;
	int32_t t99 = -79473;

	t99 = ((x533^(x534*x535))^x536);

	if (t99 != -912519) { NG(); } else { ; }
	
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

