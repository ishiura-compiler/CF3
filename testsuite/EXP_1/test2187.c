#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 335382926318LLU;
volatile int64_t t2 = -142387607050749LL;
int16_t x42 = -1;
volatile int32_t t5 = -569;
int32_t x48 = -1;
int32_t x67 = INT32_MIN;
uint64_t x75 = 19606LLU;
volatile int8_t x82 = INT8_MAX;
int16_t x83 = INT16_MAX;
uint64_t x86 = 1081933919845432LLU;
static volatile uint64_t x89 = 2282066377176966462LLU;
volatile uint64_t t13 = 2222899684691657LLU;
int32_t x93 = INT32_MIN;
static int8_t x97 = INT8_MIN;
int8_t x100 = 1;
int8_t x118 = INT8_MAX;
int32_t x119 = INT32_MAX;
int32_t x120 = -947;
volatile uint64_t t21 = 7LLU;
uint8_t x129 = UINT8_MAX;
static volatile int32_t t22 = -14;
int8_t x136 = -1;
uint64_t x137 = UINT64_MAX;
uint8_t x147 = 2U;
int64_t x163 = -1LL;
uint32_t x166 = 4U;
int8_t x169 = -1;
int64_t x171 = INT64_MIN;
uint32_t x175 = 2398U;
static uint16_t x184 = 50U;
static int32_t t33 = -6;
static uint16_t x197 = 2153U;
uint32_t t34 = 3335993U;
static volatile uint64_t x214 = 14786074863434LLU;
static uint32_t x221 = UINT32_MAX;
int16_t x223 = -1;
static uint32_t x228 = 24280U;
static int16_t x236 = INT16_MAX;
uint64_t t41 = 62LLU;
volatile int64_t x237 = -1LL;
volatile int64_t t42 = 6228LL;
int16_t x243 = INT16_MIN;
uint64_t t43 = 6043576607460195LLU;
volatile uint64_t x246 = 14258691305LLU;
int64_t x247 = 1354998LL;
uint16_t x248 = 950U;
uint64_t t44 = 10LLU;
int32_t x249 = -28;
int8_t x256 = INT8_MIN;
volatile uint64_t t46 = 64549LLU;
int16_t x270 = -1;
volatile int32_t x271 = -1;
int64_t x275 = 0LL;
uint8_t x290 = UINT8_MAX;
static int32_t x301 = -1;
static int32_t x303 = -1;
static uint16_t x309 = UINT16_MAX;
int32_t x310 = INT32_MIN;
static volatile int64_t t55 = -1963293LL;
int16_t x335 = 33;
volatile int32_t t56 = 2;
uint64_t x337 = 2460912978439LLU;
static volatile int16_t x340 = INT16_MIN;
int16_t x342 = INT16_MIN;
int64_t x348 = -1LL;
int64_t t59 = -170816190LL;
static int16_t x354 = INT16_MAX;
static int8_t x356 = -15;
int64_t x363 = 61337LL;
uint64_t x388 = UINT64_MAX;
uint64_t t67 = 3339944065LLU;
volatile uint64_t t68 = 233783552LLU;
int8_t x397 = 2;
int16_t x401 = INT16_MAX;
static int32_t x403 = 1225548;
static volatile int16_t x408 = -1;
uint32_t t71 = 25827357U;
int8_t x409 = -40;
static int32_t x412 = -252079;
volatile uint16_t x417 = UINT16_MAX;
uint16_t x419 = UINT16_MAX;
volatile uint64_t t73 = 9157LLU;
int32_t x426 = 1829817;
uint8_t x427 = 4U;
static volatile uint16_t x431 = UINT16_MAX;
uint16_t x438 = 7U;
uint64_t x445 = 356523LLU;
uint64_t t80 = 111419410337984LLU;
static int32_t x459 = 0;
uint8_t x463 = UINT8_MAX;
volatile int64_t x464 = 2190317976780LL;
volatile int8_t x466 = INT8_MIN;
uint16_t x469 = UINT16_MAX;
static volatile uint64_t x471 = UINT64_MAX;
int32_t x473 = -1;
int64_t t86 = -105LL;
int64_t t87 = -163076LL;
static int8_t x481 = INT8_MIN;
int32_t x483 = -1;
int8_t x493 = -14;
volatile int32_t t90 = 1698;
volatile int32_t x502 = -7153;
static int16_t x504 = -1;
uint64_t t94 = 1571LLU;
static int32_t x525 = INT32_MIN;
static uint64_t t97 = 611526981LLU;
volatile int64_t x533 = INT64_MIN;
static volatile int32_t x536 = -1;
static volatile int64_t t99 = 1638628917LL;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = INT8_MIN;
	int64_t x7 = 1LL;
	uint64_t x8 = UINT64_MAX;

	t0 = (((x5^x6)^x7)*x8);

	if (t0 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 109U;
	int64_t x10 = -744870LL;
	int32_t x11 = INT32_MIN;
	int16_t x12 = -8474;
	volatile int64_t t1 = -2197672569039501LL;

	t1 = (((x9^x10)^x11)*x12);

	if (t1 != -18191464108182LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = 10;
	static int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	int16_t x16 = 0;

	t2 = (((x13^x14)^x15)*x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 31976U;
	int64_t x18 = -341768360LL;
	uint8_t x19 = UINT8_MAX;
	uint16_t x20 = 5U;
	volatile int64_t t3 = -2LL;

	t3 = (((x17^x18)^x19)*x20);

	if (t3 != -1708693365LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 8659413U;
	int16_t x26 = -1;
	volatile uint64_t x27 = 3494482LLU;
	int32_t x28 = INT32_MIN;
	uint64_t t4 = 7036939633112929LLU;

	t4 = (((x25^x26)^x27)*x28);

	if (t4 != 9248346086270042112LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x41 = 0;
	int8_t x43 = INT8_MIN;
	static uint8_t x44 = UINT8_MAX;

	t5 = (((x41^x42)^x43)*x44);

	if (t5 != 32385) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MIN;
	uint64_t x47 = 4278398216LLU;
	volatile uint64_t t6 = 1LLU;

	t6 = (((x45^x46)^x47)*x48);

	if (t6 != 9223372036838206729LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = -1;
	static uint64_t x50 = UINT64_MAX;
	uint16_t x51 = 14476U;
	int16_t x52 = INT16_MAX;
	uint64_t t7 = 298213134359401753LLU;

	t7 = (((x49^x50)^x51)*x52);

	if (t7 != 474335092LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = -1;
	int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 302112084U;
	uint64_t t8 = 3544592641797651LLU;

	t8 = (((x57^x58)^x59)*x60);

	if (t8 != 18446734174100783104LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = 161;
	uint64_t x66 = 6751739867008226LLU;
	uint16_t x68 = 14U;
	volatile uint64_t t9 = 15LLU;

	t9 = (((x65^x66)^x67)*x68);

	if (t9 != 18352219738302688170LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x73 = -1;
	volatile int32_t x74 = -1;
	volatile int16_t x76 = INT16_MIN;
	volatile uint64_t t10 = 132LLU;

	t10 = (((x73^x74)^x75)*x76);

	if (t10 != 18446744073067102208LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = -56;
	int8_t x84 = INT8_MIN;
	int32_t t11 = -29222532;

	t11 = (((x81^x82)^x83)*x84);

	if (t11 != 4185088) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x85 = INT32_MAX;
	static volatile int32_t x87 = 71048509;
	int16_t x88 = INT16_MIN;
	static uint64_t t12 = 8606179014LLU;

	t12 = (((x85^x86)^x87)*x88);

	if (t12 != 1440709212178153472LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x90 = 319329063U;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 39514671LLU;

	t13 = (((x89^x90)^x91)*x92);

	if (t13 != 10684305821903179927LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x94 = -1;
	volatile int64_t x95 = INT64_MIN;
	static int8_t x96 = -1;
	int64_t t14 = 384571604621562466LL;

	t14 = (((x93^x94)^x95)*x96);

	if (t14 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x98 = -1;
	int32_t x99 = INT32_MAX;
	int32_t t15 = -983190;

	t15 = (((x97^x98)^x99)*x100);

	if (t15 != 2147483520) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x101 = -3;
	int64_t x102 = 707853660032LL;
	volatile int32_t x103 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;
	static volatile int64_t t16 = 598539LL;

	t16 = (((x101^x102)^x103)*x104);

	if (t16 != 180371206319235LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x105 = -4121;
	volatile int16_t x106 = INT16_MIN;
	uint64_t x107 = 39396271738LLU;
	uint32_t x108 = 13976U;
	static volatile uint64_t t17 = 6847153520795LLU;

	t17 = (((x105^x106)^x107)*x108);

	if (t17 != 550601961558840LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x109 = -403893;
	static uint16_t x110 = 6U;
	int64_t x111 = -1LL;
	static int32_t x112 = 1785;
	int64_t t18 = -3803688100LL;

	t18 = (((x109^x110)^x111)*x112);

	if (t18 != 720943650LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x113 = 26U;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = 1009450194612LLU;
	volatile int16_t x116 = INT16_MAX;
	volatile uint64_t t19 = 459989LLU;

	t19 = (((x113^x114)^x115)*x116);

	if (t19 != 18413667418489678162LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t t20 = 33603088075LLU;

	t20 = (((x117^x118)^x119)*x120);

	if (t20 != 2033666894387LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x121 = INT8_MAX;
	int64_t x122 = INT64_MIN;
	volatile uint64_t x123 = UINT64_MAX;
	static int8_t x124 = 41;

	t21 = (((x121^x122)^x123)*x124);

	if (t21 != 9223372036854770560LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MAX;

	t22 = (((x129^x130)^x131)*x132);

	if (t22 != 8355585) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x133 = 3300513LLU;
	int32_t x134 = INT32_MIN;
	volatile int64_t x135 = -1LL;
	uint64_t t23 = 4818691LLU;

	t23 = (((x133^x134)^x135)*x136);

	if (t23 != 18446744071565368482LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x138 = 7925U;
	uint16_t x139 = 1U;
	uint32_t x140 = UINT32_MAX;
	uint64_t t24 = 12LLU;

	t24 = (((x137^x138)^x139)*x140);

	if (t24 != 18446710036093738741LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x145 = UINT32_MAX;
	int32_t x146 = INT32_MIN;
	static int32_t x148 = INT32_MAX;
	uint32_t t25 = 456151U;

	t25 = (((x145^x146)^x147)*x148);

	if (t25 != 3U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MAX;
	int8_t x152 = -1;
	static int32_t t26 = -55836;

	t26 = (((x149^x150)^x151)*x152);

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x161 = 2U;
	static int16_t x162 = INT16_MIN;
	int16_t x164 = -12;
	int64_t t27 = -81250197LL;

	t27 = (((x161^x162)^x163)*x164);

	if (t27 != 51539214372LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x165 = UINT32_MAX;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = 1379;
	volatile uint32_t t28 = 2384360U;

	t28 = (((x165^x166)^x167)*x168);

	if (t28 != 5516U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x170 = 49556140846617LLU;
	int64_t x172 = 4113102469184820LL;
	uint64_t t29 = 32085929060LLU;

	t29 = (((x169^x170)^x171)*x172);

	if (t29 != 3107487912707518648LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x174 = -1;
	volatile uint16_t x176 = 1U;
	uint32_t t30 = 1U;

	t30 = (((x173^x174)^x175)*x176);

	if (t30 != 2147481249U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x181 = -612LL;
	uint64_t x182 = UINT64_MAX;
	static volatile uint32_t x183 = 496U;
	volatile uint64_t t31 = 11756964149342LLU;

	t31 = (((x181^x182)^x183)*x184);

	if (t31 != 45750LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int16_t x190 = -1;
	static int16_t x191 = INT16_MIN;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t32 = -94;

	t32 = (((x189^x190)^x191)*x192);

	if (t32 != 8290560) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = 3U;
	volatile int16_t x194 = INT16_MIN;
	int8_t x195 = 0;
	int8_t x196 = INT8_MAX;

	t33 = (((x193^x194)^x195)*x196);

	if (t33 != -4161155) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x198 = -1;
	uint32_t x199 = 7413U;
	int32_t x200 = -1;

	t34 = (((x197^x198)^x199)*x200);

	if (t34 != 5277U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = INT16_MIN;
	volatile uint64_t x206 = 396176554949979175LLU;
	static uint8_t x207 = 42U;
	uint16_t x208 = 926U;
	uint64_t t35 = 4429214LLU;

	t35 = (((x205^x206)^x207)*x208);

	if (t35 != 2075391590500882182LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x209 = -1LL;
	int8_t x210 = 1;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	static volatile int64_t t36 = -955LL;

	t36 = (((x209^x210)^x211)*x212);

	if (t36 != -4194048LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x213 = UINT32_MAX;
	static int64_t x215 = 1475932246966915LL;
	uint64_t x216 = 150LLU;
	volatile uint64_t t37 = 1570661238989192460LLU;

	t37 = (((x213^x214)^x215)*x216);

	if (t37 != 219543326781627300LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = -299;
	volatile int16_t x219 = -82;
	volatile int64_t x220 = -11765343454110LL;
	int64_t t38 = 12404454605829LL;

	t38 = (((x217^x218)^x219)*x220);

	if (t38 != -4564953260194680LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x222 = 383472LLU;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t39 = 32008LLU;

	t39 = (((x221^x222)^x223)*x224);

	if (t39 != 4294583824LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x225 = 6U;
	volatile int8_t x226 = INT8_MIN;
	uint8_t x227 = 51U;
	uint32_t t40 = 147501U;

	t40 = (((x225^x226)^x227)*x228);

	if (t40 != 4293146296U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x233 = 0U;
	int64_t x234 = -1LL;
	static uint64_t x235 = 100434876236979LLU;

	t41 = (((x233^x234)^x235)*x236);

	if (t41 != 15155794484052427956LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x238 = -1LL;
	volatile uint32_t x239 = UINT32_MAX;
	uint32_t x240 = 8936U;

	t42 = (((x237^x238)^x239)*x240);

	if (t42 != 38379827748120LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x241 = 9218457012743LL;
	static uint64_t x242 = 1059433362428877LLU;
	static uint64_t x244 = UINT64_MAX;

	t43 = (((x241^x242)^x243)*x244);

	if (t43 != 1068651681703478LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x245 = 8937U;

	t44 = (((x245^x246)^x247)*x248);

	if (t44 != 13547030633700LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x250 = -40;
	int8_t x251 = INT8_MIN;
	int8_t x252 = -1;
	int32_t t45 = -9914;

	t45 = (((x249^x250)^x251)*x252);

	if (t45 != 68) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x253 = 14838U;
	volatile uint64_t x254 = 349LLU;
	volatile int8_t x255 = 14;

	t46 = (((x253^x254)^x255)*x256);

	if (t46 != 18446744073707695488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t47 = -97253;

	t47 = (((x257^x258)^x259)*x260);

	if (t47 != -1077903360) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x269 = 1458693U;
	volatile uint8_t x272 = 1U;
	uint32_t t48 = 753292U;

	t48 = (((x269^x270)^x271)*x272);

	if (t48 != 1458693U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x273 = INT8_MIN;
	static int64_t x274 = 41LL;
	uint16_t x276 = 106U;
	volatile int64_t t49 = 301998763914LL;

	t49 = (((x273^x274)^x275)*x276);

	if (t49 != -9222LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = -29;
	int64_t x279 = -1LL;
	uint64_t x280 = 1891998917LLU;
	volatile uint64_t t50 = 6LLU;

	t50 = (((x277^x278)^x279)*x280);

	if (t50 != 14383707390394312076LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = 10;
	uint8_t x286 = 31U;
	int8_t x287 = 50;
	static uint32_t x288 = 3U;
	volatile uint32_t t51 = 8604U;

	t51 = (((x285^x286)^x287)*x288);

	if (t51 != 117U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x289 = UINT32_MAX;
	int32_t x291 = INT32_MIN;
	int8_t x292 = 54;
	static volatile uint32_t t52 = 14367U;

	t52 = (((x289^x290)^x291)*x292);

	if (t52 != 4294953472U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x302 = 0U;
	int64_t x304 = -1LL;
	volatile int64_t t53 = 44055499455196209LL;

	t53 = (((x301^x302)^x303)*x304);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x311 = -1;
	uint64_t x312 = 0LLU;
	volatile uint64_t t54 = 606644783613120783LLU;

	t54 = (((x309^x310)^x311)*x312);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x325 = 41U;
	int16_t x326 = INT16_MAX;
	int64_t x327 = -1LL;
	int64_t x328 = 4095921LL;

	t55 = (((x325^x326)^x327)*x328);

	if (t55 != -134047206567LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x333 = 0;
	int16_t x334 = 1;
	int32_t x336 = -29;

	t56 = (((x333^x334)^x335)*x336);

	if (t56 != -928) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x338 = INT16_MAX;
	int32_t x339 = -1;
	volatile uint64_t t57 = 224167000250129LLU;

	t57 = (((x337^x338)^x339)*x340);

	if (t57 != 80639197383000064LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = -1;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = 62426U;
	uint32_t t58 = 170503U;

	t58 = (((x341^x342)^x343)*x344);

	if (t58 != 2249392128U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -1LL;

	t59 = (((x345^x346)^x347)*x348);

	if (t59 != -2147450880LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MAX;
	int8_t x351 = 0;
	int16_t x352 = INT16_MAX;
	int32_t t60 = 44641;

	t60 = (((x349^x350)^x351)*x352);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x353 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	volatile uint64_t t61 = 24487589424834LLU;

	t61 = (((x353^x354)^x355)*x356);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x357 = INT16_MIN;
	uint8_t x358 = UINT8_MAX;
	static int32_t x359 = INT32_MIN;
	volatile uint32_t x360 = UINT32_MAX;
	volatile uint32_t t62 = 3780U;

	t62 = (((x357^x358)^x359)*x360);

	if (t62 != 2147516161U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MIN;
	volatile uint8_t x364 = 3U;
	uint64_t t63 = 10LLU;

	t63 = (((x361^x362)^x363)*x364);

	if (t63 != 110898LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = 15;
	int16_t x371 = INT16_MIN;
	int32_t x372 = 5359152;
	static uint64_t t64 = 53LLU;

	t64 = (((x369^x370)^x371)*x372);

	if (t64 != 175522946304LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	static int16_t x380 = -1;
	int32_t t65 = 5633886;

	t65 = (((x377^x378)^x379)*x380);

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x381 = 49;
	uint16_t x382 = UINT16_MAX;
	static int32_t x383 = 8515716;
	int8_t x384 = INT8_MIN;
	int32_t t66 = 1538;

	t66 = (((x381^x382)^x383)*x384);

	if (t66 != -1082631424) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x385 = -1;
	static int16_t x386 = INT16_MIN;
	static volatile int64_t x387 = -6035LL;

	t67 = (((x385^x386)^x387)*x388);

	if (t67 != 26734LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x393 = 458390464500420LLU;
	int64_t x394 = INT64_MAX;
	static int16_t x395 = INT16_MAX;
	volatile int16_t x396 = INT16_MIN;

	t68 = (((x393^x394)^x395)*x396);

	if (t68 != 15020538741508669440LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x398 = UINT64_MAX;
	static int8_t x399 = -1;
	int64_t x400 = -83257123680313LL;
	uint64_t t69 = 120848154062787LLU;

	t69 = (((x397^x398)^x399)*x400);

	if (t69 != 18446577559462190990LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x402 = INT16_MIN;
	uint8_t x404 = 1U;
	volatile int32_t t70 = 8537839;

	t70 = (((x401^x402)^x403)*x404);

	if (t70 != -1225549) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x405 = -21;
	uint32_t x406 = 327U;
	uint16_t x407 = UINT16_MAX;

	t71 = (((x405^x406)^x407)*x408);

	if (t71 != 65197U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x410 = -1LL;
	uint64_t x411 = 79LLU;
	uint64_t t72 = 6130254844LLU;

	t72 = (((x409^x410)^x411)*x412);

	if (t72 != 18446744073683335400LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x418 = 1874LLU;
	uint64_t x420 = 1LLU;

	t73 = (((x417^x418)^x419)*x420);

	if (t73 != 1874LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x425 = INT32_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t74 = 491964877U;

	t74 = (((x425^x426)^x427)*x428);

	if (t74 != 2149313470U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x429 = 4996;
	volatile uint8_t x430 = 2U;
	uint16_t x432 = 1792U;
	int32_t t75 = -2219;

	t75 = (((x429^x430)^x431)*x432);

	if (t75 != 108482304) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x433 = 9390476706891070LL;
	uint16_t x434 = 26U;
	int32_t x435 = INT32_MIN;
	int8_t x436 = INT8_MIN;
	int64_t t76 = 29084213957LL;

	t76 = (((x433^x434)^x435)*x436);

	if (t76 != 1201981034004835840LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x437 = INT32_MIN;
	static int16_t x439 = INT16_MIN;
	uint32_t x440 = 323681U;
	static volatile uint32_t t77 = 8367988U;

	t77 = (((x437^x438)^x439)*x440);

	if (t77 != 133304999U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x441 = -22592948;
	static int16_t x442 = 1;
	uint64_t x443 = 2932198LLU;
	int64_t x444 = 4842842159LL;
	volatile uint64_t t78 = 11047969716LLU;

	t78 = (((x441^x442)^x443)*x444);

	if (t78 != 18328678114679580773LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x446 = UINT32_MAX;
	int16_t x447 = INT16_MIN;
	volatile int8_t x448 = INT8_MAX;
	static uint64_t t79 = 19485098LLU;

	t79 = (((x445^x446)^x447)*x448);

	if (t79 != 18446743528290818732LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x449 = 162938898798487607LLU;
	int32_t x450 = -1;
	static uint8_t x451 = 52U;
	int64_t x452 = -1856773170750229505LL;

	t80 = (((x449^x450)^x451)*x452);

	if (t80 != 653632235001763844LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x453 = 1406346LLU;
	static int32_t x454 = -3308;
	int32_t x455 = -5662899;
	int64_t x456 = 32482768721122289LL;
	uint64_t t81 = 2817835069710587LLU;

	t81 = (((x453^x454)^x455)*x456);

	if (t81 != 17845458036773286051LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x457 = -1;
	uint8_t x458 = 0U;
	uint64_t x460 = 9103454139LLU;
	volatile uint64_t t82 = 9274LLU;

	t82 = (((x457^x458)^x459)*x460);

	if (t82 != 18446744064606097477LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x461 = INT64_MIN;
	uint64_t x462 = 46065LLU;
	volatile uint64_t t83 = 478702LLU;

	t83 = (((x461^x462)^x463)*x464);

	if (t83 != 100399795419641640LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x465 = 3LLU;
	int8_t x467 = INT8_MIN;
	volatile int64_t x468 = -1LL;
	volatile uint64_t t84 = 2LLU;

	t84 = (((x465^x466)^x467)*x468);

	if (t84 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x470 = INT32_MIN;
	uint64_t x472 = UINT64_MAX;
	uint64_t t85 = 23359178375192806LLU;

	t85 = (((x469^x470)^x471)*x472);

	if (t85 != 18446744071562133504LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x474 = 1724825023U;
	int64_t x475 = 8169707LL;
	int32_t x476 = INT32_MAX;

	t86 = (((x473^x474)^x475)*x476);

	if (t86 != 5523371738012980565LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x477 = -3200;
	static int64_t x478 = INT64_MIN;
	uint8_t x479 = UINT8_MAX;
	int64_t x480 = -1LL;

	t87 = (((x477^x478)^x479)*x480);

	if (t87 != -9223372036854772607LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x482 = 295426U;
	int32_t x484 = INT32_MIN;
	uint32_t t88 = 12001U;

	t88 = (((x481^x482)^x483)*x484);

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x485 = -3167;
	volatile int8_t x486 = 24;
	static volatile int64_t x487 = -1LL;
	int32_t x488 = 1;
	int64_t t89 = 245137447LL;

	t89 = (((x485^x486)^x487)*x488);

	if (t89 != 3142LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x494 = UINT8_MAX;
	static uint16_t x495 = UINT16_MAX;
	uint8_t x496 = 13U;

	t90 = (((x493^x494)^x495)*x496);

	if (t90 != -848822) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x497 = -229;
	int32_t x498 = -1;
	int64_t x499 = -97651460057LL;
	static uint64_t x500 = 479737969098LLU;
	static uint64_t t91 = 183513LLU;

	t91 = (((x497^x498)^x499)*x500);

	if (t91 != 7616894861736965342LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x501 = UINT64_MAX;
	uint8_t x503 = UINT8_MAX;
	uint64_t t92 = 8419102964116526LLU;

	t92 = (((x501^x502)^x503)*x504);

	if (t92 != 18446744073709544689LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x513 = UINT32_MAX;
	uint8_t x514 = 0U;
	uint32_t x515 = UINT32_MAX;
	int32_t x516 = 263522966;
	static uint32_t t93 = 68043U;

	t93 = (((x513^x514)^x515)*x516);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x517 = -1;
	volatile uint8_t x518 = 1U;
	uint64_t x519 = 16431LLU;
	volatile int8_t x520 = 1;

	t94 = (((x517^x518)^x519)*x520);

	if (t94 != 18446744073709535185LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = INT8_MIN;
	static int8_t x522 = INT8_MIN;
	volatile int32_t x523 = INT32_MAX;
	uint64_t x524 = UINT64_MAX;
	static volatile uint64_t t95 = 4050143083LLU;

	t95 = (((x521^x522)^x523)*x524);

	if (t95 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x526 = 6461U;
	volatile int8_t x527 = -1;
	uint64_t x528 = 15816240104734LLU;
	static volatile uint64_t t96 = 2236676209070LLU;

	t96 = (((x525^x526)^x527)*x528);

	if (t96 != 4558953515231073468LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x529 = INT8_MAX;
	volatile int8_t x530 = 1;
	uint64_t x531 = 6980LLU;
	uint64_t x532 = 114752301LLU;

	t97 = (((x529^x530)^x531)*x532);

	if (t97 != 799823537970LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x534 = 3051U;
	volatile int16_t x535 = INT16_MIN;
	static int64_t t98 = -181LL;

	t98 = (((x533^x534)^x535)*x536);

	if (t98 != -9223372036854746091LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x537 = UINT32_MAX;
	int64_t x538 = -516354459667724LL;
	int16_t x539 = INT16_MIN;
	static uint16_t x540 = 2U;

	t99 = (((x537^x538)^x539)*x540);

	if (t99 != 1032715083454998LL) { NG(); } else { ; }
	
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

