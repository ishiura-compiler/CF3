#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -3590060962404865LL;
int8_t x11 = -7;
uint64_t x26 = 6491LLU;
int8_t x29 = -1;
uint16_t x31 = 244U;
int64_t x42 = 30762835295663004LL;
int16_t x55 = 1;
volatile int64_t x56 = INT64_MIN;
volatile uint32_t x59 = 2027424U;
int8_t x64 = INT8_MIN;
int8_t x99 = INT8_MIN;
int64_t t14 = 190792290398LL;
volatile int8_t x111 = 1;
int32_t x112 = -1481;
static int32_t t16 = 621142703;
uint16_t x113 = 7300U;
uint8_t x115 = UINT8_MAX;
volatile int8_t x118 = 7;
int16_t x123 = INT16_MIN;
static int64_t x132 = INT64_MIN;
volatile int32_t x142 = -197;
volatile int8_t x144 = 0;
volatile int32_t x153 = -1;
int64_t x160 = -1LL;
uint64_t t24 = 7619087LLU;
static int64_t x169 = -61072717758LL;
int8_t x176 = -1;
int64_t t27 = -17804813340583LL;
int64_t t29 = 88556251LL;
static int16_t x190 = -38;
volatile int8_t x193 = -1;
uint32_t x194 = UINT32_MAX;
static int64_t t32 = -73LL;
uint16_t x211 = 2U;
int8_t x224 = INT8_MIN;
int64_t x233 = INT64_MAX;
static uint64_t t38 = 157463LLU;
volatile int8_t x262 = -12;
static volatile uint64_t t41 = 6754100537224606384LLU;
static uint8_t x286 = 0U;
int64_t t44 = 7LL;
volatile int64_t x301 = INT64_MAX;
int64_t t45 = -11817487512197LL;
uint16_t x307 = 14924U;
int8_t x308 = 6;
int64_t x310 = INT64_MIN;
int32_t x311 = -1;
int64_t x313 = -1LL;
static int16_t x315 = INT16_MIN;
int64_t x330 = INT64_MIN;
static int64_t x331 = -1LL;
int8_t x333 = INT8_MAX;
int32_t x358 = -193;
volatile uint64_t t57 = 301338680003820241LLU;
volatile int64_t t59 = 1144477LL;
static uint64_t x396 = UINT64_MAX;
uint64_t t62 = 10428302109721291LLU;
volatile uint32_t x398 = 172239866U;
int32_t x399 = INT32_MIN;
int8_t x448 = 0;
int64_t x449 = INT64_MIN;
int16_t x463 = -915;
int64_t x492 = INT64_MIN;
uint32_t x501 = 4380209U;
static uint32_t t76 = 40192U;
int32_t x509 = -1;
int64_t x527 = -1LL;
volatile uint64_t t79 = 11880LLU;
uint32_t x541 = 521U;
int32_t x542 = -6845;
static int8_t x548 = INT8_MIN;
int8_t x555 = INT8_MIN;
static uint64_t x556 = 4341300167LLU;
int16_t x561 = INT16_MAX;
uint8_t x562 = UINT8_MAX;
uint32_t x595 = 15U;
static int32_t x596 = INT32_MAX;
static uint16_t x603 = 758U;
int32_t t91 = 3707;
volatile int8_t x605 = INT8_MIN;
static volatile int16_t x609 = INT16_MAX;
volatile int16_t x610 = -2443;
uint32_t t93 = 127U;
int16_t x621 = 59;
int8_t x632 = INT8_MAX;
volatile int64_t t97 = 229707283991LL;


void f0(void) {
	int64_t x1 = -11022LL;
	int16_t x2 = INT16_MIN;
	uint8_t x3 = 42U;
	int8_t x4 = INT8_MAX;

	t0 = ((x1^x2)+(x3*x4));

	if (t0 != 27080LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	static uint32_t x12 = UINT32_MAX;
	volatile uint32_t t1 = 3U;

	t1 = ((x9^x10)+(x11*x12));

	if (t1 != 4294934662U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x25 = 4;
	uint8_t x27 = 115U;
	uint16_t x28 = UINT16_MAX;
	uint64_t t2 = 30237864260463LLU;

	t2 = ((x25^x26)+(x27*x28));

	if (t2 != 7543020LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x30 = 4899U;
	static int32_t x32 = 1;
	static volatile int32_t t3 = 7;

	t3 = ((x29^x30)+(x31*x32));

	if (t3 != -4656) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MAX;
	uint8_t x34 = 14U;
	int16_t x35 = INT16_MAX;
	uint32_t x36 = 5U;
	volatile uint32_t t4 = 83176U;

	t4 = ((x33^x34)+(x35*x36));

	if (t4 != 2147647468U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x41 = -1;
	volatile int32_t x43 = INT32_MIN;
	static uint64_t x44 = 2LLU;
	uint64_t t5 = 10936LLU;

	t5 = ((x41^x42)+(x43*x44));

	if (t5 != 18415981234118921315LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x49 = 1025341LL;
	volatile int16_t x50 = 4;
	uint64_t x51 = UINT64_MAX;
	uint32_t x52 = 576007U;
	volatile uint64_t t6 = 808162LLU;

	t6 = ((x49^x50)+(x51*x52));

	if (t6 != 449330LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x53 = -570617208268183885LL;
	int64_t x54 = INT64_MIN;
	volatile int64_t t7 = 131400884770878LL;

	t7 = ((x53^x54)+(x55*x56));

	if (t7 != -570617208268183885LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x57 = INT8_MIN;
	static uint16_t x58 = 966U;
	int32_t x60 = INT32_MIN;
	uint32_t t8 = 5125U;

	t8 = ((x57^x58)+(x59*x60));

	if (t8 != 4294966342U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x61 = UINT16_MAX;
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 35U;
	static int32_t t9 = -1;

	t9 = ((x61^x62)+(x63*x64));

	if (t9 != -4480) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = 4;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	int8_t x68 = -28;
	volatile uint64_t t10 = 25182207897629LLU;

	t10 = ((x65^x66)+(x67*x68));

	if (t10 != 18446744071562068000LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x81 = -1;
	volatile int8_t x82 = INT8_MIN;
	static int16_t x83 = -8;
	uint64_t x84 = 6188LLU;
	volatile uint64_t t11 = 15550751935LLU;

	t11 = ((x81^x82)+(x83*x84));

	if (t11 != 18446744073709502239LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x85 = 13U;
	int8_t x86 = 6;
	volatile int8_t x87 = INT8_MIN;
	uint64_t x88 = 168921169174LLU;
	static uint64_t t12 = 37LLU;

	t12 = ((x85^x86)+(x87*x88));

	if (t12 != 18446722451799897355LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x93 = 1U;
	uint8_t x94 = 3U;
	int64_t x95 = -1LL;
	static volatile uint8_t x96 = 49U;
	volatile int64_t t13 = -63855LL;

	t13 = ((x93^x94)+(x95*x96));

	if (t13 != -47LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = -1;
	volatile uint16_t x98 = 3465U;
	volatile int64_t x100 = -1841402LL;

	t14 = ((x97^x98)+(x99*x100));

	if (t14 != 235695990LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x105 = -1;
	int32_t x106 = INT32_MIN;
	static int32_t x107 = INT32_MIN;
	int64_t x108 = -98333LL;
	volatile int64_t t15 = -678897194825579993LL;

	t15 = ((x105^x106)+(x107*x108));

	if (t15 != 211170657042431LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x109 = 1U;
	volatile uint8_t x110 = 92U;

	t16 = ((x109^x110)+(x111*x112));

	if (t16 != -1388) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x114 = 4;
	uint64_t x116 = UINT64_MAX;
	uint64_t t17 = 32246022661593LLU;

	t17 = ((x113^x114)+(x115*x116));

	if (t17 != 7041LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x117 = UINT8_MAX;
	static volatile uint64_t x119 = UINT64_MAX;
	static volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t18 = 125506560922978LLU;

	t18 = ((x117^x118)+(x119*x120));

	if (t18 != 9223372036854776056LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x121 = -1;
	uint64_t x122 = 2173452475879419LLU;
	uint8_t x124 = UINT8_MAX;
	uint64_t t19 = 120205060785487639LLU;

	t19 = ((x121^x122)+(x123*x124));

	if (t19 != 18444570621225316356LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x129 = 5445U;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 0U;
	volatile int64_t t20 = -83822389LL;

	t20 = ((x129^x130)+(x131*x132));

	if (t20 != -2147478203LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x137 = 9589U;
	static volatile int64_t x138 = INT64_MIN;
	volatile int8_t x139 = 1;
	int32_t x140 = INT32_MAX;
	int64_t t21 = -34098LL;

	t21 = ((x137^x138)+(x139*x140));

	if (t21 != -9223372034707282572LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x141 = 101U;
	int32_t x143 = INT32_MIN;
	static volatile int32_t t22 = -1267;

	t22 = ((x141^x142)+(x143*x144));

	if (t22 != -162) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x154 = 23873LL;
	volatile int8_t x155 = INT8_MIN;
	uint64_t x156 = 1LLU;
	volatile uint64_t t23 = 11442081LLU;

	t23 = ((x153^x154)+(x155*x156));

	if (t23 != 18446744073709527614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x158 = 10969992321LLU;
	uint64_t x159 = UINT64_MAX;

	t24 = ((x157^x158)+(x159*x160));

	if (t24 != 10969992447LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x165 = UINT8_MAX;
	int64_t x166 = INT64_MIN;
	uint32_t x167 = 4U;
	static volatile uint64_t x168 = UINT64_MAX;
	uint64_t t25 = 1164952815533067LLU;

	t25 = ((x165^x166)+(x167*x168));

	if (t25 != 9223372036854776059LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x170 = 792394559830639794LL;
	static uint16_t x171 = UINT16_MAX;
	volatile int16_t x172 = -110;
	static int64_t t26 = -547694302751LL;

	t26 = ((x169^x170)+(x171*x172));

	if (t26 != -792394568293020322LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x173 = -1;
	uint32_t x174 = 233U;
	int64_t x175 = INT64_MAX;

	t27 = ((x173^x174)+(x175*x176));

	if (t27 != -9223372032559808745LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 16U;
	static int8_t x184 = -51;
	static int32_t t28 = -46;

	t28 = ((x181^x182)+(x183*x184));

	if (t28 != 31824) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = INT64_MAX;
	uint32_t x187 = 6186420U;
	uint16_t x188 = 59U;

	t29 = ((x185^x186)+(x187*x188));

	if (t29 != -9223372036489776901LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = 466;
	uint8_t x191 = UINT8_MAX;
	uint16_t x192 = 23U;
	volatile int32_t t30 = -3577;

	t30 = ((x189^x190)+(x191*x192));

	if (t30 != 5361) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x195 = UINT16_MAX;
	static int8_t x196 = 56;
	volatile uint32_t t31 = 879199864U;

	t31 = ((x193^x194)+(x195*x196));

	if (t31 != 3669960U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x205 = INT64_MIN;
	int32_t x206 = -1;
	int16_t x207 = INT16_MAX;
	int32_t x208 = -1;

	t32 = ((x205^x206)+(x207*x208));

	if (t32 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x209 = 104739421881LL;
	int32_t x210 = 35;
	volatile int16_t x212 = -10280;
	volatile int64_t t33 = 257636798519519LL;

	t33 = ((x209^x210)+(x211*x212));

	if (t33 != 104739401290LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x221 = INT64_MIN;
	volatile uint32_t x222 = 114U;
	int16_t x223 = -1;
	int64_t t34 = 6257881981822256LL;

	t34 = ((x221^x222)+(x223*x224));

	if (t34 != -9223372036854775566LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x229 = UINT64_MAX;
	static int64_t x230 = 2675LL;
	int8_t x231 = INT8_MIN;
	static int8_t x232 = 1;
	volatile uint64_t t35 = 299106036130099LLU;

	t35 = ((x229^x230)+(x231*x232));

	if (t35 != 18446744073709548812LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x234 = 173602176;
	uint16_t x235 = 10025U;
	int8_t x236 = INT8_MIN;
	volatile int64_t t36 = -3LL;

	t36 = ((x233^x234)+(x235*x236));

	if (t36 != 9223372036679890431LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x237 = 8838LLU;
	int8_t x238 = INT8_MIN;
	volatile int16_t x239 = -1;
	volatile uint32_t x240 = UINT32_MAX;
	volatile uint64_t t37 = 4LLU;

	t37 = ((x237^x238)+(x239*x240));

	if (t37 != 18446744073709542663LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x241 = UINT16_MAX;
	volatile uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MAX;
	uint32_t x244 = 13U;

	t38 = ((x241^x242)+(x243*x244));

	if (t38 != 18446744073709487731LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x245 = 15616286540995LLU;
	static volatile uint32_t x246 = 25830U;
	uint64_t x247 = 6322658LLU;
	uint16_t x248 = 7556U;
	volatile uint64_t t39 = 497778970353773LLU;

	t39 = ((x245^x246)+(x247*x248));

	if (t39 != 15664060535469LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x257 = 338340548U;
	uint32_t x258 = UINT32_MAX;
	volatile uint32_t x259 = 9U;
	static int16_t x260 = INT16_MIN;
	uint32_t t40 = 63U;

	t40 = ((x257^x258)+(x259*x260));

	if (t40 != 3956331835U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x261 = INT64_MIN;
	int32_t x263 = INT32_MAX;
	uint64_t x264 = UINT64_MAX;

	t41 = ((x261^x262)+(x263*x264));

	if (t41 != 9223372034707292149LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x265 = UINT64_MAX;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MAX;
	uint64_t x268 = UINT64_MAX;
	uint64_t t42 = 362270LLU;

	t42 = ((x265^x266)+(x267*x268));

	if (t42 != 18446744069414551553LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x269 = 1LLU;
	uint8_t x270 = UINT8_MAX;
	uint64_t x271 = 2LLU;
	int64_t x272 = INT64_MIN;
	uint64_t t43 = 53LLU;

	t43 = ((x269^x270)+(x271*x272));

	if (t43 != 254LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x285 = INT64_MIN;
	volatile uint32_t x287 = 3696U;
	int64_t x288 = 11837LL;

	t44 = ((x285^x286)+(x287*x288));

	if (t44 != -9223372036811026256LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x302 = 2517U;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = -1;

	t45 = ((x301^x302)+(x303*x304));

	if (t45 != 9223372036854773418LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x305 = 12632U;
	uint32_t x306 = 53191U;
	volatile uint32_t t46 = 378916183U;

	t46 = ((x305^x306)+(x307*x308));

	if (t46 != 154727U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x309 = -1;
	int16_t x312 = INT16_MAX;
	static volatile int64_t t47 = -791207220702LL;

	t47 = ((x309^x310)+(x311*x312));

	if (t47 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x314 = 1U;
	static int8_t x316 = -1;
	static volatile int64_t t48 = -1LL;

	t48 = ((x313^x314)+(x315*x316));

	if (t48 != 32766LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x321 = INT16_MIN;
	static int64_t x322 = INT64_MIN;
	static int8_t x323 = 0;
	int8_t x324 = -9;
	int64_t t49 = -42252680821790536LL;

	t49 = ((x321^x322)+(x323*x324));

	if (t49 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x325 = 81U;
	static volatile uint64_t x326 = 959932738337LLU;
	uint8_t x327 = 2U;
	int8_t x328 = INT8_MIN;
	uint64_t t50 = 34LLU;

	t50 = ((x325^x326)+(x327*x328));

	if (t50 != 959932738160LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x329 = 630U;
	int16_t x332 = 4;
	int64_t t51 = -14417LL;

	t51 = ((x329^x330)+(x331*x332));

	if (t51 != -9223372036854775182LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x334 = 40U;
	static uint16_t x335 = 974U;
	static int8_t x336 = 6;
	int32_t t52 = 18806;

	t52 = ((x333^x334)+(x335*x336));

	if (t52 != 5931) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x341 = UINT64_MAX;
	int16_t x342 = -1;
	int16_t x343 = INT16_MAX;
	int8_t x344 = INT8_MAX;
	uint64_t t53 = 7584435388162556495LLU;

	t53 = ((x341^x342)+(x343*x344));

	if (t53 != 4161409LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	static volatile uint8_t x348 = 2U;
	static int32_t t54 = -18;

	t54 = ((x345^x346)+(x347*x348));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x349 = UINT64_MAX;
	uint32_t x350 = UINT32_MAX;
	uint8_t x351 = 47U;
	int8_t x352 = INT8_MAX;
	uint64_t t55 = 1729273249LLU;

	t55 = ((x349^x350)+(x351*x352));

	if (t55 != 18446744069414590289LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x357 = 67572336863LLU;
	static uint16_t x359 = UINT16_MAX;
	volatile int16_t x360 = -48;
	uint64_t t56 = 13LLU;

	t56 = ((x357^x358)+(x359*x360));

	if (t56 != 18446744006134069264LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x361 = 414U;
	int16_t x362 = -3608;
	static uint64_t x363 = UINT64_MAX;
	volatile int32_t x364 = INT32_MAX;

	t57 = ((x361^x362)+(x363*x364));

	if (t57 != 2147479671LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x365 = 14U;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = -1;
	volatile int16_t x368 = INT16_MAX;
	volatile uint32_t t58 = 41739U;

	t58 = ((x365^x366)+(x367*x368));

	if (t58 != 4294934514U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x373 = 6U;
	uint8_t x374 = 0U;
	int64_t x375 = -223807951LL;
	volatile int64_t x376 = 10LL;

	t59 = ((x373^x374)+(x375*x376));

	if (t59 != -2238079504LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x377 = -1;
	int32_t x378 = INT32_MIN;
	static int64_t x379 = INT64_MIN;
	static uint64_t x380 = 828570259505726011LLU;
	volatile uint64_t t60 = 1466883345LLU;

	t60 = ((x377^x378)+(x379*x380));

	if (t60 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x381 = UINT16_MAX;
	volatile uint16_t x382 = 314U;
	static int8_t x383 = 6;
	uint64_t x384 = UINT64_MAX;
	uint64_t t61 = 824244919LLU;

	t61 = ((x381^x382)+(x383*x384));

	if (t61 != 65215LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x393 = 733U;
	uint16_t x394 = UINT16_MAX;
	static uint16_t x395 = 0U;

	t62 = ((x393^x394)+(x395*x396));

	if (t62 != 64802LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x397 = INT64_MIN;
	static uint32_t x400 = UINT32_MAX;
	static int64_t t63 = 32954209505905752LL;

	t63 = ((x397^x398)+(x399*x400));

	if (t63 != -9223372034535052294LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x401 = -31;
	int32_t x402 = INT32_MIN;
	uint8_t x403 = 1U;
	static uint64_t x404 = 2131634279301LLU;
	volatile uint64_t t64 = 1734513536LLU;

	t64 = ((x401^x402)+(x403*x404));

	if (t64 != 2133781762918LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x433 = 0U;
	int8_t x434 = -1;
	volatile uint32_t x435 = UINT32_MAX;
	static uint32_t x436 = 16733619U;
	volatile uint32_t t65 = 67304593U;

	t65 = ((x433^x434)+(x435*x436));

	if (t65 != 4278233676U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x441 = -1;
	int64_t x442 = -1LL;
	int8_t x443 = -1;
	int8_t x444 = -1;
	volatile int64_t t66 = -2967LL;

	t66 = ((x441^x442)+(x443*x444));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	uint64_t x447 = UINT64_MAX;
	static uint64_t t67 = 7LLU;

	t67 = ((x445^x446)+(x447*x448));

	if (t67 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x450 = 16652LLU;
	int8_t x451 = INT8_MAX;
	int64_t x452 = 9590728513001LL;
	volatile uint64_t t68 = 410LLU;

	t68 = ((x449^x450)+(x451*x452));

	if (t68 != 9224590059375943587LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x457 = UINT64_MAX;
	int16_t x458 = INT16_MAX;
	int8_t x459 = 1;
	static int16_t x460 = -1;
	volatile uint64_t t69 = 929446085604495842LLU;

	t69 = ((x457^x458)+(x459*x460));

	if (t69 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x461 = 535530963914LLU;
	static int16_t x462 = INT16_MIN;
	volatile int32_t x464 = -26148;
	volatile uint64_t t70 = 1696423381LLU;

	t70 = ((x461^x462)+(x463*x464));

	if (t70 != 18446743538202482294LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x465 = INT64_MIN;
	uint32_t x466 = UINT32_MAX;
	static uint8_t x467 = UINT8_MAX;
	static uint32_t x468 = 462501039U;
	int64_t t71 = -3966762731263LL;

	t71 = ((x465^x466)+(x467*x468));

	if (t71 != -9223372030586160560LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x469 = INT16_MIN;
	uint64_t x470 = 8101724055772348038LLU;
	uint64_t x471 = 460310717LLU;
	int32_t x472 = INT32_MAX;
	volatile uint64_t t72 = 88120957807LLU;

	t72 = ((x469^x470)+(x471*x472));

	if (t72 != 11333529755233547721LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x473 = UINT16_MAX;
	int8_t x474 = INT8_MAX;
	uint64_t x475 = 71983998400602LLU;
	static int64_t x476 = -1LL;
	static volatile uint64_t t73 = 33312912LLU;

	t73 = ((x473^x474)+(x475*x476));

	if (t73 != 18446672089711216422LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x477 = UINT32_MAX;
	int8_t x478 = -1;
	volatile uint32_t x479 = 270313U;
	int8_t x480 = INT8_MAX;
	static uint32_t t74 = 17405U;

	t74 = ((x477^x478)+(x479*x480));

	if (t74 != 34329751U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x489 = -1;
	int32_t x490 = 514012;
	static uint32_t x491 = 0U;
	volatile int64_t t75 = 203463LL;

	t75 = ((x489^x490)+(x491*x492));

	if (t75 != -514013LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x502 = 9U;
	static int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MIN;

	t76 = ((x501^x502)+(x503*x504));

	if (t76 != 4396600U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x510 = 1;
	int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MIN;
	volatile int32_t t77 = 582852;

	t77 = ((x509^x510)+(x511*x512));

	if (t77 != 4194302) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x517 = 197;
	volatile int8_t x518 = -1;
	volatile uint8_t x519 = UINT8_MAX;
	static volatile int8_t x520 = INT8_MAX;
	int32_t t78 = 8337573;

	t78 = ((x517^x518)+(x519*x520));

	if (t78 != 32187) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x525 = 17084U;
	int64_t x526 = INT64_MIN;
	uint64_t x528 = 33242693037467448LLU;

	t79 = ((x525^x526)+(x527*x528));

	if (t79 != 9190129343817325444LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x543 = 2U;
	int8_t x544 = INT8_MIN;
	volatile uint32_t t80 = 692711U;

	t80 = ((x541^x542)+(x543*x544));

	if (t80 != 4294960714U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x545 = 1;
	int8_t x546 = 0;
	static uint32_t x547 = UINT32_MAX;
	volatile uint32_t t81 = 783206U;

	t81 = ((x545^x546)+(x547*x548));

	if (t81 != 129U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x549 = 307553U;
	int16_t x550 = -1;
	int8_t x551 = INT8_MIN;
	static volatile int32_t x552 = 1757879;
	static uint32_t t82 = 169230U;

	t82 = ((x549^x550)+(x551*x552));

	if (t82 != 4069651230U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x553 = 10;
	static volatile int16_t x554 = -1;
	static volatile uint64_t t83 = 1472472206LLU;

	t83 = ((x553^x554)+(x555*x556));

	if (t83 != 18446743518023130229LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x557 = 110958738751LL;
	volatile int16_t x558 = -29;
	int16_t x559 = -15;
	int8_t x560 = INT8_MAX;
	static volatile int64_t t84 = 1059589260896137LL;

	t84 = ((x557^x558)+(x559*x560));

	if (t84 != -110958740629LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x563 = -5;
	volatile uint8_t x564 = 15U;
	static int32_t t85 = -14196388;

	t85 = ((x561^x562)+(x563*x564));

	if (t85 != 32437) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x577 = UINT8_MAX;
	static int16_t x578 = INT16_MIN;
	uint8_t x579 = UINT8_MAX;
	int8_t x580 = 0;
	int32_t t86 = 764928011;

	t86 = ((x577^x578)+(x579*x580));

	if (t86 != -32513) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x581 = INT8_MIN;
	volatile uint16_t x582 = 8U;
	int64_t x583 = -1LL;
	int16_t x584 = 158;
	volatile int64_t t87 = 441662004LL;

	t87 = ((x581^x582)+(x583*x584));

	if (t87 != -278LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x585 = INT64_MIN;
	uint8_t x586 = 25U;
	static uint32_t x587 = UINT32_MAX;
	static int32_t x588 = 4865;
	int64_t t88 = 3414684LL;

	t88 = ((x585^x586)+(x587*x588));

	if (t88 != -9223372032559813352LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x593 = 3934U;
	static int16_t x594 = INT16_MAX;
	volatile uint32_t t89 = 1U;

	t89 = ((x593^x594)+(x595*x596));

	if (t89 != 2147512466U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x597 = INT16_MIN;
	static volatile int64_t x598 = -1LL;
	uint32_t x599 = 18474716U;
	volatile int32_t x600 = -13088052;
	static int64_t t90 = -304171265366595LL;

	t90 = ((x597^x598)+(x599*x600));

	if (t90 != 25169743LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x601 = INT16_MIN;
	int32_t x602 = -1;
	uint8_t x604 = 2U;

	t91 = ((x601^x602)+(x603*x604));

	if (t91 != 34283) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x606 = INT8_MIN;
	int8_t x607 = INT8_MIN;
	static uint8_t x608 = 4U;
	volatile int32_t t92 = 6;

	t92 = ((x605^x606)+(x607*x608));

	if (t92 != -512) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x611 = 158842U;
	static volatile int16_t x612 = -623;

	t93 = ((x609^x610)+(x611*x612));

	if (t93 != 4195978404U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x613 = 2101680374887LLU;
	uint64_t x614 = 96476337291289838LLU;
	int16_t x615 = -14;
	int8_t x616 = 0;
	volatile uint64_t t94 = 175484LLU;

	t94 = ((x613^x614)+(x615*x616));

	if (t94 != 96477055273918601LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x622 = -62LL;
	int64_t x623 = 4691315LL;
	int8_t x624 = 3;
	int64_t t95 = -1469118611947LL;

	t95 = ((x621^x622)+(x623*x624));

	if (t95 != 14073938LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x625 = 0U;
	uint64_t x626 = UINT64_MAX;
	int16_t x627 = 19;
	int8_t x628 = INT8_MAX;
	uint64_t t96 = 747282700LLU;

	t96 = ((x625^x626)+(x627*x628));

	if (t96 != 2412LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x629 = INT32_MIN;
	int64_t x630 = INT64_MAX;
	static int64_t x631 = 2LL;

	t97 = ((x629^x630)+(x631*x632));

	if (t97 != -9223372034707291907LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x633 = INT64_MIN;
	static volatile int8_t x634 = INT8_MIN;
	volatile int16_t x635 = 39;
	int64_t x636 = -1LL;
	volatile int64_t t98 = -1LL;

	t98 = ((x633^x634)+(x635*x636));

	if (t98 != 9223372036854775641LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x637 = INT16_MAX;
	volatile int8_t x638 = INT8_MAX;
	volatile uint64_t x639 = UINT64_MAX;
	uint8_t x640 = 70U;
	volatile uint64_t t99 = 3934900712310509LLU;

	t99 = ((x637^x638)+(x639*x640));

	if (t99 != 32570LLU) { NG(); } else { ; }
	
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

