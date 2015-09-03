#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = 116;
volatile uint32_t t0 = 7U;
uint64_t t1 = 875280LLU;
uint32_t x13 = 36554962U;
volatile int8_t x15 = -1;
static int16_t x27 = INT16_MAX;
int16_t x28 = 1;
volatile int64_t t5 = 21963LL;
uint64_t x37 = 1941237808202LLU;
static volatile int64_t x49 = INT64_MAX;
int32_t x58 = -1;
int64_t x62 = INT64_MIN;
int32_t x66 = 630168598;
volatile int32_t x70 = -591;
uint8_t x71 = 2U;
static volatile int32_t x82 = -1;
int16_t x84 = -1;
static int16_t x86 = -226;
static int8_t x87 = INT8_MIN;
int8_t x91 = INT8_MIN;
int64_t x93 = INT64_MIN;
uint32_t x94 = 1U;
static uint64_t t17 = 3206004LLU;
int32_t x109 = 231;
int8_t x112 = INT8_MIN;
static int16_t x114 = 1;
static uint64_t x123 = 93LLU;
volatile uint64_t t22 = 12034LLU;
uint64_t t23 = 463157425354717767LLU;
volatile int8_t x133 = INT8_MIN;
volatile int16_t x134 = INT16_MAX;
int16_t x141 = INT16_MIN;
uint32_t x142 = 85815648U;
int16_t x160 = -1;
volatile uint64_t x163 = UINT64_MAX;
uint32_t x179 = 6010219U;
volatile uint16_t x183 = UINT16_MAX;
static int32_t t32 = -1080;
int16_t x190 = -1;
int32_t x192 = INT32_MAX;
int64_t x197 = -120LL;
static int8_t x200 = INT8_MIN;
int64_t t35 = -20611391LL;
uint64_t t37 = 958LLU;
static int16_t x220 = -1058;
volatile int64_t x222 = -1LL;
int32_t x230 = -1;
volatile int8_t x235 = INT8_MIN;
uint16_t x243 = UINT16_MAX;
volatile uint64_t x244 = 77488754024080LLU;
static uint64_t t43 = 2958LLU;
volatile uint64_t x245 = 17967378440228079LLU;
static uint16_t x246 = 0U;
int8_t x247 = 2;
int8_t x251 = INT8_MIN;
uint8_t x255 = 2U;
volatile uint64_t t46 = 0LLU;
int32_t t47 = 7277076;
uint64_t x276 = 186406679143237499LLU;
uint64_t t49 = 675503962LLU;
static volatile uint64_t t50 = 22566LLU;
static int16_t x285 = INT16_MAX;
int32_t x294 = INT32_MIN;
volatile uint64_t t53 = 17915LLU;
int32_t x304 = 401;
int8_t x321 = INT8_MAX;
uint8_t x322 = 1U;
volatile int64_t x323 = 266703202038489404LL;
volatile uint64_t t59 = 46958LLU;
int8_t x341 = INT8_MIN;
int16_t x342 = -1;
int8_t x343 = -31;
int64_t x344 = INT64_MIN;
int64_t t60 = 4983LL;
static uint64_t x348 = 1985555425LLU;
static volatile uint64_t t61 = 310451439LLU;
static uint16_t x353 = UINT16_MAX;
uint8_t x357 = 4U;
int16_t x360 = -1;
static int16_t x363 = -1;
static int32_t x372 = INT32_MIN;
volatile int32_t t66 = -7982;
int16_t x384 = INT16_MAX;
uint16_t x390 = 6U;
uint8_t x394 = 104U;
int32_t x403 = INT32_MIN;
int32_t x406 = -2241;
volatile int64_t x412 = INT64_MIN;
volatile uint64_t t73 = 96LLU;
int8_t x421 = INT8_MIN;
int64_t x424 = INT64_MIN;
static uint8_t x428 = 3U;
uint64_t t76 = 538381551865965LLU;
static volatile int32_t x431 = -1925;
volatile int8_t x433 = 3;
static volatile int64_t x436 = -1LL;
uint16_t x437 = 64U;
volatile int16_t x447 = -4731;
volatile int32_t t80 = 39219118;
uint16_t x449 = 27U;
static int16_t x450 = -1;
int32_t t81 = 62481;
int16_t x455 = -880;
static int64_t x460 = INT64_MIN;
static volatile int64_t t83 = 1121LL;
uint8_t x471 = 0U;
int16_t x474 = INT16_MIN;
int64_t t86 = 223LL;
static volatile int16_t x481 = INT16_MAX;
static volatile uint32_t x483 = 20U;
static uint64_t t88 = 4094143571710230203LLU;
static uint64_t x491 = 10705LLU;
uint64_t t90 = 6091528014184326630LLU;
volatile uint64_t t92 = 53187263LLU;
int8_t x510 = INT8_MIN;
int32_t x512 = -1;
int8_t x525 = INT8_MIN;
uint16_t x537 = UINT16_MAX;
volatile int16_t x538 = 0;


void f0(void) {
	int16_t x5 = -1;
	uint32_t x6 = 2105580895U;
	uint8_t x7 = 19U;

	t0 = ((x5^(x6*x7))%x8);

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 1U;
	int64_t x10 = -1LL;
	uint64_t x11 = 3729LLU;
	int32_t x12 = INT32_MIN;

	t1 = ((x9^(x10*x11))%x12);

	if (t1 != 2147479918LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = 1838;
	uint8_t x16 = 1U;
	uint32_t t2 = 495937U;

	t2 = ((x13^(x14*x15))%x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MAX;
	int8_t x22 = -1;
	int64_t x23 = 2607073445626515LL;
	int16_t x24 = INT16_MIN;
	volatile int64_t t3 = 1629438944LL;

	t3 = ((x21^(x22*x23))%x24);

	if (t3 != -15726LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x25 = INT64_MIN;
	static uint32_t x26 = 0U;
	int64_t t4 = 479934516422687099LL;

	t4 = ((x25^(x26*x27))%x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = 257U;
	static int32_t x30 = 175359;
	static volatile uint8_t x31 = 0U;
	int64_t x32 = INT64_MAX;

	t5 = ((x29^(x30*x31))%x32);

	if (t5 != 257LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = INT16_MIN;
	volatile uint8_t x39 = 11U;
	volatile int64_t x40 = INT64_MIN;
	volatile uint64_t t6 = 3312845128LLU;

	t6 = ((x37^(x38*x39))%x40);

	if (t6 != 9223370095616638026LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x45 = 0U;
	uint16_t x46 = 2872U;
	int16_t x47 = -134;
	int64_t x48 = INT64_MIN;
	volatile int64_t t7 = 1079882691787LL;

	t7 = ((x45^(x46*x47))%x48);

	if (t7 != -384848LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x50 = INT16_MIN;
	volatile int32_t x51 = -1;
	static int8_t x52 = -20;
	int64_t t8 = 22LL;

	t8 = ((x49^(x50*x51))%x52);

	if (t8 != 19LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x57 = 5476568239LLU;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = 1702;
	volatile uint64_t t9 = 4832LLU;

	t9 = ((x57^(x58*x59))%x60);

	if (t9 != 408LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = 612;
	static uint64_t x63 = UINT64_MAX;
	int32_t x64 = -190;
	static uint64_t t10 = 1LLU;

	t10 = ((x61^(x62*x63))%x64);

	if (t10 != 9223372036854776420LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = UINT16_MAX;
	int32_t x67 = -1;
	static uint32_t x68 = UINT32_MAX;
	volatile uint32_t t11 = 14U;

	t11 = ((x65^(x66*x67))%x68);

	if (t11 != 3664813077U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x69 = INT64_MIN;
	int16_t x72 = 3;
	int64_t t12 = -170741LL;

	t12 = ((x69^(x70*x71))%x72);

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x81 = -1LL;
	uint32_t x83 = 343517172U;
	static volatile int64_t t13 = 8044LL;

	t13 = ((x81^(x82*x83))%x84);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x85 = 6U;
	volatile uint64_t x88 = 128776899LLU;
	uint64_t t14 = 24LLU;

	t14 = ((x85^(x86*x87))%x88);

	if (t14 != 28934LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x89 = 4U;
	volatile uint16_t x90 = 24U;
	int32_t x92 = INT32_MIN;
	int32_t t15 = 1443;

	t15 = ((x89^(x90*x91))%x92);

	if (t15 != -3068) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x95 = INT16_MIN;
	int64_t x96 = 4816217758LL;
	volatile int64_t t16 = 4951389922LL;

	t16 = ((x93^(x94*x95))%x96);

	if (t16 != -2002508258LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x97 = 3316LLU;
	int16_t x98 = INT16_MAX;
	static uint8_t x99 = UINT8_MAX;
	int64_t x100 = -252268529LL;

	t17 = ((x97^(x98*x99))%x100);

	if (t17 != 8352757LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint16_t x102 = UINT16_MAX;
	int16_t x103 = -1;
	uint16_t x104 = 15U;
	static int32_t t18 = 15;

	t18 = ((x101^(x102*x103))%x104);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x110 = 4U;
	int32_t x111 = -1;
	static int32_t t19 = 120;

	t19 = ((x109^(x110*x111))%x112);

	if (t19 != -101) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x113 = 3U;
	int32_t x115 = 148621;
	int32_t x116 = -57;
	volatile int32_t t20 = 464024922;

	t20 = ((x113^(x114*x115))%x116);

	if (t20 != 23) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = -1755991303154LL;
	int32_t x119 = -1;
	int8_t x120 = -1;
	uint64_t t21 = 2872512927482120LLU;

	t21 = ((x117^(x118*x119))%x120);

	if (t21 != 18446742317718248461LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = 0;
	static int8_t x122 = INT8_MAX;
	uint32_t x124 = 7U;

	t22 = ((x121^(x122*x123))%x124);

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MIN;
	uint64_t x127 = 360857164273006LLU;
	static int16_t x128 = -1;

	t23 = ((x125^(x126*x127))%x128);

	if (t23 != 9177182319827831040LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x135 = 7U;
	volatile int64_t x136 = -5LL;
	volatile int64_t t24 = 5560LL;

	t24 = ((x133^(x134*x135))%x136);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x137 = INT32_MIN;
	uint8_t x138 = 39U;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = 58941U;
	volatile uint32_t t25 = 37663187U;

	t25 = ((x137^(x138*x139))%x140);

	if (t25 != 46004U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x143 = 262475057;
	static int16_t x144 = INT16_MAX;
	static uint32_t t26 = 1462188204U;

	t26 = ((x141^(x142*x143))%x144);

	if (t26 != 15065U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x157 = 271327U;
	volatile uint8_t x158 = 35U;
	uint8_t x159 = UINT8_MAX;
	uint32_t t27 = 41024U;

	t27 = ((x157^(x158*x159))%x160);

	if (t27 != 262402U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = INT16_MAX;
	static int8_t x164 = 2;
	volatile uint64_t t28 = 965LLU;

	t28 = ((x161^(x162*x163))%x164);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int32_t x166 = 10;
	uint64_t x167 = UINT64_MAX;
	int64_t x168 = INT64_MAX;
	uint64_t t29 = 213LLU;

	t29 = ((x165^(x166*x167))%x168);

	if (t29 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x169 = -1785948069LL;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = 13193582002LL;
	int64_t t30 = -8LL;

	t30 = ((x169^(x170*x171))%x172);

	if (t30 != -1785980837LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x177 = 780884008675986810LL;
	static volatile uint64_t x178 = 139LLU;
	int16_t x180 = -5045;
	volatile uint64_t t31 = 13366127LLU;

	t31 = ((x177^(x178*x179))%x180);

	if (t31 != 780884008914504803LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MAX;
	static volatile uint16_t x184 = UINT16_MAX;

	t32 = ((x181^(x182*x183))%x184);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x185 = UINT64_MAX;
	uint16_t x186 = UINT16_MAX;
	volatile int32_t x187 = -1;
	uint32_t x188 = UINT32_MAX;
	uint64_t t33 = 1036492228276624LLU;

	t33 = ((x185^(x186*x187))%x188);

	if (t33 != 65534LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x189 = 7849955LL;
	static int16_t x191 = INT16_MAX;
	volatile int64_t t34 = -4159609425035LL;

	t34 = ((x189^(x190*x191))%x192);

	if (t34 != -7845918LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x198 = INT16_MIN;
	volatile int8_t x199 = INT8_MIN;

	t35 = ((x197^(x198*x199))%x200);

	if (t35 != -120LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x205 = 292708374U;
	static uint16_t x206 = UINT16_MAX;
	static int8_t x207 = -3;
	int64_t x208 = INT64_MAX;
	volatile int64_t t36 = 6384LL;

	t36 = ((x205^(x206*x207))%x208);

	if (t36 != 4002373653LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x209 = INT8_MIN;
	volatile uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;

	t37 = ((x209^(x210*x211))%x212);

	if (t37 != 9223372034707292032LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = -6000;
	volatile int32_t t38 = -33526826;

	t38 = ((x217^(x218*x219))%x220);

	if (t38 != -20) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x221 = INT8_MIN;
	static volatile int16_t x223 = 0;
	int16_t x224 = -1;
	int64_t t39 = -4857403443LL;

	t39 = ((x221^(x222*x223))%x224);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x229 = -1768;
	uint32_t x231 = 1U;
	uint64_t x232 = UINT64_MAX;
	uint64_t t40 = 362194169124LLU;

	t40 = ((x229^(x230*x231))%x232);

	if (t40 != 1767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 473997804U;
	int16_t x236 = -1;
	volatile uint32_t t41 = 0U;

	t41 = ((x233^(x234*x235))%x236);

	if (t41 != 542149120U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x237 = UINT64_MAX;
	static int8_t x238 = INT8_MIN;
	uint32_t x239 = UINT32_MAX;
	uint64_t x240 = 2481071LLU;
	static uint64_t t42 = 496591928974LLU;

	t42 = ((x237^(x238*x239))%x240);

	if (t42 != 1312091LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x241 = 2706640U;
	int16_t x242 = INT16_MIN;

	t43 = ((x241^(x242*x243))%x244);

	if (t43 != 2150223056LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x248 = -1;
	uint64_t t44 = 3382708389320303LLU;

	t44 = ((x245^(x246*x247))%x248);

	if (t44 != 17967378440228079LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = UINT64_MAX;
	static int32_t x252 = -1;
	volatile uint64_t t45 = 46LLU;

	t45 = ((x249^(x250*x251))%x252);

	if (t45 != 4294967167LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x253 = 0LLU;
	int16_t x254 = -1;
	int64_t x256 = -5700473346LL;

	t46 = ((x253^(x254*x255))%x256);

	if (t46 != 5700473344LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	volatile int16_t x263 = INT16_MIN;
	int8_t x264 = -14;

	t47 = ((x261^(x262*x263))%x264);

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x269 = -1LL;
	uint16_t x270 = UINT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;
	int64_t t48 = 3391284743454834LL;

	t48 = ((x269^(x270*x271))%x272);

	if (t48 != 254LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x273 = INT64_MAX;
	uint32_t x274 = 1U;
	int16_t x275 = 25;

	t49 = ((x273^(x274*x275))%x276);

	if (t49 != 89444758836138331LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x277 = -1;
	static int16_t x278 = 1;
	static int64_t x279 = -1LL;
	volatile uint64_t x280 = 5LLU;

	t50 = ((x277^(x278*x279))%x280);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x281 = INT8_MAX;
	int8_t x282 = 4;
	uint8_t x283 = UINT8_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t51 = -483845320;

	t51 = ((x281^(x282*x283))%x284);

	if (t51 != 899) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x286 = -1;
	volatile int32_t x287 = -2691024;
	volatile uint64_t x288 = 11182174688672LLU;
	volatile uint64_t t52 = 3255LLU;

	t52 = ((x285^(x286*x287))%x288);

	if (t52 != 2715695LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = 1U;

	t53 = ((x293^(x294*x295))%x296);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x297 = INT16_MAX;
	int32_t x298 = 316771;
	static int8_t x299 = -7;
	int8_t x300 = -1;
	int32_t t54 = -6292;

	t54 = ((x297^(x298*x299))%x300);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x301 = -1LL;
	static int16_t x302 = 13;
	volatile int16_t x303 = -62;
	int64_t t55 = -259332LL;

	t55 = ((x301^(x302*x303))%x304);

	if (t55 != 3LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x309 = INT32_MIN;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = 1;
	static int32_t x312 = INT32_MIN;
	static uint64_t t56 = 534390552873148117LLU;

	t56 = ((x309^(x310*x311))%x312);

	if (t56 != 2147483647LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x324 = 13581429U;
	int64_t t57 = -12710060573LL;

	t57 = ((x321^(x322*x323))%x324);

	if (t57 != 7473135LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x325 = 1U;
	int16_t x326 = -51;
	uint8_t x327 = 0U;
	volatile int32_t x328 = 95027;
	volatile int32_t t58 = 1090;

	t58 = ((x325^(x326*x327))%x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x329 = UINT16_MAX;
	static uint64_t x330 = 3LLU;
	volatile int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MIN;

	t59 = ((x329^(x330*x331))%x332);

	if (t59 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f60(void) {


	t60 = ((x341^(x342*x343))%x344);

	if (t60 != -97LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x345 = 1360136813216246132LL;
	static uint32_t x346 = UINT32_MAX;
	static int16_t x347 = -34;

	t61 = ((x345^(x346*x347))%x348);

	if (t61 != 1127751627LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x349 = INT32_MIN;
	uint8_t x350 = 39U;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MAX;
	int32_t t62 = -23688918;

	t62 = ((x349^(x350*x351))%x352);

	if (t62 != 2146205696) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x354 = 46LLU;
	volatile uint16_t x355 = 56U;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t63 = 2110910504868LLU;

	t63 = ((x353^(x354*x355))%x356);

	if (t63 != 62959LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x358 = 6U;
	static volatile uint64_t x359 = 56009739227546LLU;
	volatile uint64_t t64 = 506918290424551LLU;

	t64 = ((x357^(x358*x359))%x360);

	if (t64 != 336058435365272LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x361 = INT16_MAX;
	int32_t x362 = -1;
	int64_t x364 = -1LL;
	int64_t t65 = -2939LL;

	t65 = ((x361^(x362*x363))%x364);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x369 = INT32_MIN;
	static uint16_t x370 = UINT16_MAX;
	int32_t x371 = -1;

	t66 = ((x369^(x370*x371))%x372);

	if (t66 != 2147418113) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x381 = INT32_MAX;
	uint16_t x382 = 3U;
	int16_t x383 = -1;
	volatile int32_t t67 = -14;

	t67 = ((x381^(x382*x383))%x384);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x385 = 56U;
	int64_t x386 = -1LL;
	uint8_t x387 = 13U;
	int16_t x388 = 1494;
	static int64_t t68 = -9775292LL;

	t68 = ((x385^(x386*x387))%x388);

	if (t68 != -53LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x389 = 99U;
	int8_t x391 = -1;
	static uint8_t x392 = UINT8_MAX;
	int32_t t69 = 126632206;

	t69 = ((x389^(x390*x391))%x392);

	if (t69 != -103) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x393 = 75U;
	static uint64_t x395 = 461LLU;
	static volatile int64_t x396 = 16886721519473372LL;
	uint64_t t70 = 3932LLU;

	t70 = ((x393^(x394*x395))%x396);

	if (t70 != 47875LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x401 = INT16_MAX;
	uint32_t x402 = 216220395U;
	int16_t x404 = INT16_MIN;
	volatile uint32_t t71 = 116492678U;

	t71 = ((x401^(x402*x403))%x404);

	if (t71 != 2147516415U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x405 = INT64_MAX;
	static int32_t x407 = -1;
	static uint8_t x408 = 29U;
	volatile int64_t t72 = 10638047399276LL;

	t72 = ((x405^(x406*x407))%x408);

	if (t72 != 3LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x409 = 70249411802396474LLU;
	static int32_t x410 = 0;
	static uint16_t x411 = UINT16_MAX;

	t73 = ((x409^(x410*x411))%x412);

	if (t73 != 70249411802396474LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x413 = 7096U;
	uint16_t x414 = UINT16_MAX;
	uint16_t x415 = 7U;
	int64_t x416 = INT64_MIN;
	int64_t t74 = -3265664279291LL;

	t74 = ((x413^(x414*x415))%x416);

	if (t74 != 451649LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x422 = UINT64_MAX;
	uint8_t x423 = UINT8_MAX;
	static uint64_t t75 = 0LLU;

	t75 = ((x421^(x422*x423))%x424);

	if (t75 != 129LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x425 = INT32_MIN;
	uint64_t x426 = UINT64_MAX;
	int64_t x427 = INT64_MAX;

	t76 = ((x425^(x426*x427))%x428);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x429 = UINT16_MAX;
	int16_t x430 = -80;
	static int32_t x432 = 124;
	static int32_t t77 = -1287786;

	t77 = ((x429^(x430*x431))%x432);

	if (t77 != 79) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x434 = -1;
	static int32_t x435 = -1;
	int64_t t78 = -37LL;

	t78 = ((x433^(x434*x435))%x436);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x438 = INT16_MIN;
	volatile int8_t x439 = INT8_MAX;
	int8_t x440 = 1;
	static volatile int32_t t79 = 358;

	t79 = ((x437^(x438*x439))%x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x445 = -2;
	volatile int8_t x446 = INT8_MAX;
	static volatile int32_t x448 = INT32_MIN;

	t80 = ((x445^(x446*x447))%x448);

	if (t80 != 600837) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x451 = 13U;
	int16_t x452 = INT16_MIN;

	t81 = ((x449^(x450*x451))%x452);

	if (t81 != -24) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x453 = -23;
	uint64_t x454 = 28203646545LLU;
	uint64_t x456 = UINT64_MAX;
	static uint64_t t82 = 18380016918564406LLU;

	t82 = ((x453^(x454*x455))%x456);

	if (t82 != 24819208959609LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x457 = 49;
	int16_t x458 = -18;
	static int64_t x459 = -1LL;

	t83 = ((x457^(x458*x459))%x460);

	if (t83 != 35LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x465 = -13204;
	volatile int32_t x466 = -7;
	uint8_t x467 = 18U;
	static int16_t x468 = INT16_MIN;
	static int32_t t84 = 0;

	t84 = ((x465^(x466*x467))%x468);

	if (t84 != 13294) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x469 = INT64_MAX;
	int16_t x470 = INT16_MAX;
	uint16_t x472 = 773U;
	volatile int64_t t85 = 12748030792964LL;

	t85 = ((x469^(x470*x471))%x472);

	if (t85 != 26LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x473 = UINT16_MAX;
	int16_t x475 = -1;
	volatile int64_t x476 = INT64_MAX;

	t86 = ((x473^(x474*x475))%x476);

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x477 = 5647328LL;
	int16_t x478 = 1;
	uint16_t x479 = 735U;
	volatile int16_t x480 = INT16_MAX;
	volatile int64_t t87 = 4854186632669079LL;

	t87 = ((x477^(x478*x479))%x480);

	if (t87 != 10731LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x482 = 950LLU;
	static int32_t x484 = 32;

	t88 = ((x481^(x482*x483))%x484);

	if (t88 != 7LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x489 = INT16_MAX;
	uint8_t x490 = 80U;
	int16_t x492 = -1;
	volatile uint64_t t89 = 1053434663LLU;

	t89 = ((x489^(x490*x491))%x492);

	if (t89 != 880303LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x497 = UINT64_MAX;
	int32_t x498 = 777;
	uint32_t x499 = 10489257U;
	uint8_t x500 = 7U;

	t90 = ((x497^(x498*x499))%x500);

	if (t90 != 5LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x501 = -6114256798795LL;
	int16_t x502 = -1;
	volatile int16_t x503 = INT16_MAX;
	int64_t x504 = -523949LL;
	static volatile int64_t t91 = -129595552312LL;

	t91 = ((x501^(x502*x503))%x504);

	if (t91 != 408360LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x505 = -1;
	int64_t x506 = 7107862659214402LL;
	uint64_t x507 = 4346040054140267724LLU;
	int8_t x508 = INT8_MIN;

	t92 = ((x505^(x506*x507))%x508);

	if (t92 != 5537785301527487335LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x509 = 716209804LLU;
	volatile int32_t x511 = -1;
	uint64_t t93 = 743751080810LLU;

	t93 = ((x509^(x510*x511))%x512);

	if (t93 != 716209676LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MIN;
	uint64_t x515 = 751397019509LLU;
	static uint16_t x516 = 36U;
	volatile uint64_t t94 = 579573618920LLU;

	t94 = ((x513^(x514*x515))%x516);

	if (t94 != 28LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x526 = -23409LL;
	int64_t x527 = -46651LL;
	static uint32_t x528 = 44364U;
	static int64_t t95 = 298705620822504302LL;

	t95 = ((x525^(x526*x527))%x528);

	if (t95 != -33505LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x529 = INT64_MIN;
	static int16_t x530 = 0;
	int32_t x531 = INT32_MIN;
	volatile uint64_t x532 = UINT64_MAX;
	volatile uint64_t t96 = 9048110806082578LLU;

	t96 = ((x529^(x530*x531))%x532);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x539 = -1;
	int32_t x540 = 63930;
	volatile int32_t t97 = 177577591;

	t97 = ((x537^(x538*x539))%x540);

	if (t97 != 1605) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x541 = 438;
	int8_t x542 = INT8_MIN;
	volatile uint16_t x543 = 3240U;
	int16_t x544 = -1801;
	int32_t t98 = -10;

	t98 = ((x541^(x542*x543))%x544);

	if (t98 != -52) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x545 = 12306959168848LL;
	static uint64_t x546 = UINT64_MAX;
	int64_t x547 = INT64_MAX;
	static int64_t x548 = INT64_MIN;
	uint64_t t99 = 1714843884201911LLU;

	t99 = ((x545^(x546*x547))%x548);

	if (t99 != 12306959168849LLU) { NG(); } else { ; }
	
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

