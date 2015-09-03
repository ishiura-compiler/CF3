#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int16_t x5 = INT16_MIN;
int16_t x7 = 10;
int32_t t2 = 1;
int32_t t3 = -123;
int32_t t5 = -119170274;
volatile int8_t x68 = INT8_MAX;
int64_t x73 = 295255350361422694LL;
int16_t x83 = -1;
int16_t x86 = INT16_MIN;
int16_t x97 = INT16_MIN;
int64_t x98 = INT64_MAX;
volatile int32_t x100 = INT32_MIN;
int32_t t13 = 30656541;
static volatile int32_t t15 = 5057;
int8_t x138 = INT8_MIN;
int64_t x139 = -1LL;
uint8_t x144 = 0U;
uint8_t x147 = 3U;
uint8_t x155 = 1U;
int32_t x156 = -894;
static int64_t x162 = INT64_MAX;
int8_t x163 = -1;
static int32_t t21 = 1980;
int64_t x190 = -1LL;
volatile int32_t t26 = -3514;
int16_t x217 = INT16_MIN;
int8_t x219 = -1;
uint64_t x222 = 2909707LLU;
uint16_t x223 = UINT16_MAX;
volatile int16_t x234 = -13034;
int8_t x257 = INT8_MIN;
static int32_t x277 = 485026;
int64_t x278 = INT64_MAX;
uint32_t x279 = 60147U;
int32_t t36 = 0;
volatile int8_t x282 = -59;
volatile int32_t t37 = 54326524;
int8_t x299 = -1;
static int32_t t38 = -886538627;
static int32_t x306 = 3032;
static int64_t x323 = -72859LL;
uint8_t x341 = 26U;
volatile uint16_t x360 = UINT16_MAX;
int64_t x367 = INT64_MIN;
static int64_t x374 = INT64_MIN;
int64_t x386 = INT64_MIN;
int8_t x387 = INT8_MIN;
static int32_t t47 = -111;
static volatile int32_t t50 = -1007359;
static int8_t x412 = INT8_MIN;
static volatile int8_t x430 = -1;
volatile uint16_t x431 = 1U;
int32_t x432 = -610315699;
int8_t x439 = -3;
volatile int32_t x467 = -128462182;
uint16_t x474 = UINT16_MAX;
int16_t x475 = -1;
volatile int32_t t58 = -40719497;
uint64_t x482 = UINT64_MAX;
int32_t t60 = -1219;
static int32_t x499 = INT32_MAX;
volatile int16_t x500 = INT16_MIN;
int32_t t64 = 3279;
static int8_t x510 = INT8_MAX;
volatile int16_t x512 = -1;
int16_t x527 = INT16_MIN;
volatile int8_t x535 = INT8_MAX;
volatile uint32_t x537 = UINT32_MAX;
int32_t t70 = -15062305;
uint16_t x563 = 8232U;
static volatile uint64_t x566 = UINT64_MAX;
volatile int16_t x567 = INT16_MAX;
volatile int32_t t72 = 5803703;
uint64_t x586 = UINT64_MAX;
int32_t t76 = 688;
static int16_t x608 = -1;
static int32_t t78 = -90;
int32_t t79 = -76;
static int32_t t80 = 11;
static uint32_t x625 = 28972U;
uint32_t x641 = 27U;
int32_t x642 = INT32_MAX;
int16_t x671 = 1;
volatile uint32_t x681 = 35176U;
uint8_t x682 = UINT8_MAX;
int32_t x684 = INT32_MIN;
int32_t x690 = INT32_MAX;
volatile int64_t x691 = 25660851LL;
int16_t x715 = -1;
uint16_t x720 = 1007U;
int64_t x722 = INT64_MAX;
static volatile int8_t x736 = -5;
int32_t t94 = 86061427;
volatile int32_t x764 = 314810;


void f0(void) {
	int8_t x2 = INT8_MIN;
	static volatile int8_t x3 = INT8_MIN;
	int8_t x4 = 1;
	volatile int32_t t0 = 29504;

	t0 = ((x1/(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	int8_t x8 = -1;
	int32_t t1 = -1;

	t1 = ((x5/(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 4278;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MAX;
	volatile uint8_t x16 = 2U;

	t2 = ((x13/(x14/x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MAX;
	int64_t x35 = -1LL;
	volatile uint64_t x36 = 22980225839LLU;

	t3 = ((x33/(x34/x35))==x36);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MAX;
	int64_t x55 = 2268786LL;
	int8_t x56 = INT8_MIN;
	volatile int32_t t4 = 78087;

	t4 = ((x53/(x54/x55))==x56);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x57 = INT8_MIN;
	static uint64_t x58 = 6034160009LLU;
	int32_t x59 = INT32_MAX;
	uint16_t x60 = 12178U;

	t5 = ((x57/(x58/x59))==x60);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x61 = INT8_MIN;
	volatile int8_t x62 = INT8_MIN;
	volatile int8_t x63 = -44;
	int32_t x64 = -29379494;
	volatile int32_t t6 = 3149;

	t6 = ((x61/(x62/x63))==x64);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x65 = -207;
	int8_t x66 = -43;
	uint64_t x67 = 63539588335LLU;
	int32_t t7 = 57263308;

	t7 = ((x65/(x66/x67))==x68);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x74 = INT32_MAX;
	uint32_t x75 = 639035U;
	uint32_t x76 = 117U;
	int32_t t8 = -32995;

	t8 = ((x73/(x74/x75))==x76);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x81 = -14492;
	static uint32_t x82 = UINT32_MAX;
	int8_t x84 = -1;
	static int32_t t9 = -6874836;

	t9 = ((x81/(x82/x83))==x84);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x85 = 1284009710345LLU;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t10 = 1;

	t10 = ((x85/(x86/x87))==x88);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x89 = 40;
	int32_t x90 = -323656770;
	static int16_t x91 = -1;
	uint8_t x92 = 1U;
	volatile int32_t t11 = 1;

	t11 = ((x89/(x90/x91))==x92);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x99 = 1;
	int32_t t12 = -2971687;

	t12 = ((x97/(x98/x99))==x100);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x101 = 10LLU;
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = 46;
	int64_t x104 = -1LL;

	t13 = ((x101/(x102/x103))==x104);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x121 = -1157;
	static int16_t x122 = -248;
	uint8_t x123 = 2U;
	static volatile uint16_t x124 = 892U;
	volatile int32_t t14 = -1153;

	t14 = ((x121/(x122/x123))==x124);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x133 = -1LL;
	uint32_t x134 = 4533862U;
	static int8_t x135 = INT8_MAX;
	int32_t x136 = 13220521;

	t15 = ((x133/(x134/x135))==x136);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x137 = 1;
	int8_t x140 = 2;
	volatile int32_t t16 = 540383;

	t16 = ((x137/(x138/x139))==x140);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x141 = -650;
	static int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MAX;
	volatile int32_t t17 = 5046;

	t17 = ((x141/(x142/x143))==x144);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = INT64_MIN;
	uint16_t x146 = 304U;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t18 = 38055;

	t18 = ((x145/(x146/x147))==x148);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x153 = 94U;
	static int32_t x154 = INT32_MAX;
	volatile int32_t t19 = -1;

	t19 = ((x153/(x154/x155))==x156);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x161 = INT8_MAX;
	int16_t x164 = -1;
	volatile int32_t t20 = -582689463;

	t20 = ((x161/(x162/x163))==x164);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x165 = 4U;
	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	volatile int32_t x168 = INT32_MIN;

	t21 = ((x165/(x166/x167))==x168);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x185 = UINT32_MAX;
	static int16_t x186 = 34;
	int8_t x187 = -1;
	int8_t x188 = -1;
	int32_t t22 = -49;

	t22 = ((x185/(x186/x187))==x188);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x189 = UINT16_MAX;
	uint64_t x191 = UINT64_MAX;
	volatile int16_t x192 = INT16_MIN;
	int32_t t23 = -37383808;

	t23 = ((x189/(x190/x191))==x192);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x197 = 1U;
	int8_t x198 = INT8_MIN;
	volatile int16_t x199 = -1;
	uint32_t x200 = 2049799762U;
	static int32_t t24 = 1087569;

	t24 = ((x197/(x198/x199))==x200);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MAX;
	volatile int32_t x208 = -1;
	static volatile int32_t t25 = 0;

	t25 = ((x205/(x206/x207))==x208);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x213 = 7U;
	int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MIN;

	t26 = ((x213/(x214/x215))==x216);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x218 = INT16_MIN;
	static volatile uint32_t x220 = UINT32_MAX;
	int32_t t27 = 93;

	t27 = ((x217/(x218/x219))==x220);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x221 = INT32_MIN;
	int16_t x224 = -1;
	static volatile int32_t t28 = -82146;

	t28 = ((x221/(x222/x223))==x224);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x233 = 3311U;
	uint16_t x235 = 1879U;
	static int8_t x236 = INT8_MIN;
	int32_t t29 = 2;

	t29 = ((x233/(x234/x235))==x236);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x237 = INT32_MIN;
	static int32_t x238 = INT32_MIN;
	int8_t x239 = -15;
	volatile int64_t x240 = INT64_MAX;
	int32_t t30 = 17481326;

	t30 = ((x237/(x238/x239))==x240);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x245 = UINT32_MAX;
	volatile uint64_t x246 = UINT64_MAX;
	int16_t x247 = -195;
	uint32_t x248 = 430493758U;
	int32_t t31 = -7850501;

	t31 = ((x245/(x246/x247))==x248);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x249 = -41;
	int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	int64_t x252 = -1LL;
	static int32_t t32 = 2;

	t32 = ((x249/(x250/x251))==x252);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x258 = INT32_MIN;
	int8_t x259 = 7;
	volatile int32_t x260 = INT32_MAX;
	static int32_t t33 = 1;

	t33 = ((x257/(x258/x259))==x260);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x261 = INT16_MIN;
	volatile int32_t x262 = 467;
	static int64_t x263 = -1LL;
	int32_t x264 = INT32_MIN;
	static int32_t t34 = -7;

	t34 = ((x261/(x262/x263))==x264);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x269 = -1;
	static uint32_t x270 = 3317366U;
	int64_t x271 = -1LL;
	int32_t x272 = INT32_MIN;
	int32_t t35 = 8352966;

	t35 = ((x269/(x270/x271))==x272);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x280 = INT8_MIN;

	t36 = ((x277/(x278/x279))==x280);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x281 = 40;
	uint64_t x283 = 9151457452303697313LLU;
	uint8_t x284 = 49U;

	t37 = ((x281/(x282/x283))==x284);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x297 = 5;
	static int64_t x298 = -1LL;
	static volatile int32_t x300 = -44;

	t38 = ((x297/(x298/x299))==x300);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x305 = 2715U;
	uint16_t x307 = 14U;
	int64_t x308 = INT64_MIN;
	static volatile int32_t t39 = -5;

	t39 = ((x305/(x306/x307))==x308);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MIN;
	static uint16_t x324 = UINT16_MAX;
	int32_t t40 = -1;

	t40 = ((x321/(x322/x323))==x324);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x325 = INT8_MAX;
	static int32_t x326 = INT32_MIN;
	static int8_t x327 = INT8_MIN;
	static volatile int32_t x328 = -144;
	int32_t t41 = -15323691;

	t41 = ((x325/(x326/x327))==x328);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x342 = INT16_MIN;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	static int32_t t42 = -32876306;

	t42 = ((x341/(x342/x343))==x344);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x357 = 2LLU;
	int8_t x358 = INT8_MAX;
	int16_t x359 = 103;
	int32_t t43 = 224487661;

	t43 = ((x357/(x358/x359))==x360);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x365 = 12980U;
	int64_t x366 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	int32_t t44 = -185624;

	t44 = ((x365/(x366/x367))==x368);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x373 = 42U;
	int32_t x375 = -3502;
	static int32_t x376 = -211;
	int32_t t45 = 420;

	t45 = ((x373/(x374/x375))==x376);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x381 = 1891;
	int16_t x382 = INT16_MIN;
	int8_t x383 = 3;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t46 = 1;

	t46 = ((x381/(x382/x383))==x384);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x388 = INT32_MIN;

	t47 = ((x385/(x386/x387))==x388);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x389 = 1;
	int64_t x390 = INT64_MAX;
	int8_t x391 = -14;
	uint32_t x392 = UINT32_MAX;
	static int32_t t48 = 1003536306;

	t48 = ((x389/(x390/x391))==x392);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x397 = UINT8_MAX;
	static int32_t x398 = INT32_MIN;
	volatile uint64_t x399 = 26276072LLU;
	static volatile int32_t x400 = INT32_MAX;
	int32_t t49 = -380;

	t49 = ((x397/(x398/x399))==x400);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x405 = -1LL;
	int8_t x406 = INT8_MIN;
	int8_t x407 = 25;
	int16_t x408 = INT16_MIN;

	t50 = ((x405/(x406/x407))==x408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x409 = 0U;
	volatile int32_t x410 = 1032;
	uint8_t x411 = UINT8_MAX;
	volatile int32_t t51 = 64498123;

	t51 = ((x409/(x410/x411))==x412);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x413 = -3002737131901LL;
	static uint32_t x414 = 129910561U;
	volatile uint32_t x415 = 4U;
	uint16_t x416 = 4U;
	int32_t t52 = -49272245;

	t52 = ((x413/(x414/x415))==x416);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x429 = UINT16_MAX;
	volatile int32_t t53 = 25964;

	t53 = ((x429/(x430/x431))==x432);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x433 = -375;
	volatile int8_t x434 = -1;
	int32_t x435 = -1;
	uint64_t x436 = 1LLU;
	static volatile int32_t t54 = -130761;

	t54 = ((x433/(x434/x435))==x436);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x437 = -1LL;
	int64_t x438 = INT64_MAX;
	static int32_t x440 = -1;
	volatile int32_t t55 = -4168570;

	t55 = ((x437/(x438/x439))==x440);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x441 = 1U;
	int32_t x442 = -13524;
	uint32_t x443 = 3U;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t56 = 12;

	t56 = ((x441/(x442/x443))==x444);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x465 = INT8_MIN;
	uint32_t x466 = UINT32_MAX;
	int32_t x468 = INT32_MIN;
	volatile int32_t t57 = -2;

	t57 = ((x465/(x466/x467))==x468);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x473 = -50;
	int8_t x476 = INT8_MIN;

	t58 = ((x473/(x474/x475))==x476);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x477 = -1;
	int64_t x478 = INT64_MIN;
	int32_t x479 = INT32_MAX;
	static volatile int32_t x480 = INT32_MIN;
	static int32_t t59 = 6;

	t59 = ((x477/(x478/x479))==x480);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x481 = 210921;
	uint16_t x483 = UINT16_MAX;
	int32_t x484 = -1;

	t60 = ((x481/(x482/x483))==x484);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x485 = -106180LL;
	uint64_t x486 = UINT64_MAX;
	int8_t x487 = INT8_MAX;
	volatile uint32_t x488 = UINT32_MAX;
	int32_t t61 = 36;

	t61 = ((x485/(x486/x487))==x488);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x493 = 8;
	uint32_t x494 = UINT32_MAX;
	int32_t x495 = -65209;
	int64_t x496 = INT64_MIN;
	volatile int32_t t62 = -45;

	t62 = ((x493/(x494/x495))==x496);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x497 = INT16_MAX;
	static uint64_t x498 = UINT64_MAX;
	volatile int32_t t63 = 130632;

	t63 = ((x497/(x498/x499))==x500);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x505 = INT8_MAX;
	int64_t x506 = INT64_MIN;
	int32_t x507 = INT32_MAX;
	int16_t x508 = INT16_MIN;

	t64 = ((x505/(x506/x507))==x508);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x509 = UINT16_MAX;
	uint32_t x511 = 23U;
	volatile int32_t t65 = -47186;

	t65 = ((x509/(x510/x511))==x512);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x525 = UINT8_MAX;
	static int64_t x526 = INT64_MAX;
	uint16_t x528 = 6860U;
	int32_t t66 = -21325;

	t66 = ((x525/(x526/x527))==x528);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x533 = INT8_MIN;
	int64_t x534 = INT64_MIN;
	static uint32_t x536 = UINT32_MAX;
	volatile int32_t t67 = -16978;

	t67 = ((x533/(x534/x535))==x536);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x538 = 29;
	static int16_t x539 = 1;
	int8_t x540 = INT8_MAX;
	int32_t t68 = 38404267;

	t68 = ((x537/(x538/x539))==x540);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MIN;
	volatile uint32_t x547 = 403067U;
	int32_t x548 = INT32_MIN;
	volatile int32_t t69 = -47;

	t69 = ((x545/(x546/x547))==x548);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x549 = -7314466104925LL;
	int16_t x550 = -448;
	static int16_t x551 = 3;
	int32_t x552 = 6250104;

	t70 = ((x549/(x550/x551))==x552);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x561 = UINT16_MAX;
	volatile uint32_t x562 = 107312U;
	int64_t x564 = INT64_MIN;
	volatile int32_t t71 = -1353036;

	t71 = ((x561/(x562/x563))==x564);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x565 = INT8_MIN;
	uint8_t x568 = 2U;

	t72 = ((x565/(x566/x567))==x568);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x577 = INT16_MAX;
	static int64_t x578 = INT64_MAX;
	volatile int64_t x579 = -1LL;
	volatile int16_t x580 = -2;
	int32_t t73 = 22;

	t73 = ((x577/(x578/x579))==x580);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x585 = -10;
	volatile uint16_t x587 = 4U;
	uint8_t x588 = 29U;
	volatile int32_t t74 = -2;

	t74 = ((x585/(x586/x587))==x588);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x589 = 3836LLU;
	int64_t x590 = INT64_MIN;
	volatile int64_t x591 = INT64_MIN;
	int32_t x592 = -1;
	volatile int32_t t75 = 4;

	t75 = ((x589/(x590/x591))==x592);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x593 = -3184LL;
	static volatile int8_t x594 = 14;
	static int64_t x595 = -1LL;
	int64_t x596 = -59LL;

	t76 = ((x593/(x594/x595))==x596);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x601 = -1;
	int64_t x602 = INT64_MIN;
	volatile int8_t x603 = INT8_MIN;
	static int64_t x604 = -1LL;
	int32_t t77 = 111710;

	t77 = ((x601/(x602/x603))==x604);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x605 = 2185U;
	volatile int64_t x606 = INT64_MIN;
	static uint32_t x607 = UINT32_MAX;

	t78 = ((x605/(x606/x607))==x608);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x609 = 4LLU;
	static int64_t x610 = INT64_MIN;
	static uint64_t x611 = 82910LLU;
	int64_t x612 = INT64_MAX;

	t79 = ((x609/(x610/x611))==x612);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x617 = INT32_MIN;
	static int8_t x618 = INT8_MIN;
	volatile int64_t x619 = -1LL;
	static volatile uint16_t x620 = 80U;

	t80 = ((x617/(x618/x619))==x620);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x626 = 125U;
	int8_t x627 = -9;
	int8_t x628 = INT8_MIN;
	volatile int32_t t81 = -1791691;

	t81 = ((x625/(x626/x627))==x628);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x633 = -196546LL;
	static volatile int32_t x634 = INT32_MIN;
	int32_t x635 = INT32_MIN;
	int64_t x636 = INT64_MIN;
	int32_t t82 = -43060;

	t82 = ((x633/(x634/x635))==x636);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x643 = -1;
	int32_t x644 = 101015;
	int32_t t83 = -2193;

	t83 = ((x641/(x642/x643))==x644);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x653 = -1;
	int64_t x654 = -2LL;
	int64_t x655 = -1LL;
	int64_t x656 = INT64_MIN;
	int32_t t84 = -47325647;

	t84 = ((x653/(x654/x655))==x656);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x665 = -7184714LL;
	int64_t x666 = 1583195133284296084LL;
	int16_t x667 = -1;
	int64_t x668 = -1LL;
	volatile int32_t t85 = 4642750;

	t85 = ((x665/(x666/x667))==x668);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x669 = 118U;
	uint16_t x670 = 1875U;
	volatile int32_t x672 = INT32_MIN;
	int32_t t86 = -76877235;

	t86 = ((x669/(x670/x671))==x672);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MIN;
	int32_t x679 = INT32_MIN;
	int16_t x680 = INT16_MIN;
	int32_t t87 = 1;

	t87 = ((x677/(x678/x679))==x680);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x683 = INT8_MIN;
	volatile int32_t t88 = 119445;

	t88 = ((x681/(x682/x683))==x684);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x689 = 37U;
	uint16_t x692 = 1063U;
	int32_t t89 = -4305;

	t89 = ((x689/(x690/x691))==x692);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x713 = 37U;
	static int8_t x714 = INT8_MIN;
	volatile int16_t x716 = -13290;
	static volatile int32_t t90 = 31624;

	t90 = ((x713/(x714/x715))==x716);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x717 = -99444660;
	uint32_t x718 = 1548246U;
	static int8_t x719 = INT8_MAX;
	volatile int32_t t91 = -53396;

	t91 = ((x717/(x718/x719))==x720);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x721 = 7U;
	int32_t x723 = INT32_MIN;
	static int8_t x724 = -3;
	volatile int32_t t92 = 53;

	t92 = ((x721/(x722/x723))==x724);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x733 = INT32_MIN;
	volatile int8_t x734 = INT8_MIN;
	int8_t x735 = 1;
	int32_t t93 = -1543693;

	t93 = ((x733/(x734/x735))==x736);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x741 = UINT32_MAX;
	static int64_t x742 = 4512897261780266LL;
	int8_t x743 = INT8_MAX;
	static uint32_t x744 = 2269560U;

	t94 = ((x741/(x742/x743))==x744);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x745 = 10U;
	int8_t x746 = INT8_MIN;
	int8_t x747 = INT8_MAX;
	int8_t x748 = INT8_MIN;
	static int32_t t95 = -15505521;

	t95 = ((x745/(x746/x747))==x748);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x753 = -1LL;
	static uint64_t x754 = UINT64_MAX;
	int16_t x755 = -1;
	int64_t x756 = INT64_MAX;
	volatile int32_t t96 = 163565708;

	t96 = ((x753/(x754/x755))==x756);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x757 = -1;
	int8_t x758 = INT8_MIN;
	int32_t x759 = -1;
	int32_t x760 = -1;
	volatile int32_t t97 = -110210997;

	t97 = ((x757/(x758/x759))==x760);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x761 = 0U;
	int64_t x762 = INT64_MIN;
	uint64_t x763 = 386483LLU;
	int32_t t98 = 273435;

	t98 = ((x761/(x762/x763))==x764);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x769 = 35320U;
	static volatile int64_t x770 = 151689786140LL;
	int64_t x771 = -1LL;
	uint64_t x772 = 15LLU;
	volatile int32_t t99 = -191;

	t99 = ((x769/(x770/x771))==x772);

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

