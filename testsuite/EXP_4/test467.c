#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -14890192;
static volatile int32_t x15 = -1;
static int64_t x19 = -5673560157996657LL;
static int16_t x37 = -9065;
static uint16_t x39 = 54U;
int8_t x40 = INT8_MAX;
uint32_t x44 = 1171658968U;
volatile int32_t t4 = 11005498;
uint32_t x52 = UINT32_MAX;
int8_t x55 = INT8_MAX;
static volatile int16_t x56 = INT16_MAX;
volatile int32_t t7 = 21;
uint64_t x67 = 40752726535850909LLU;
volatile int16_t x72 = INT16_MIN;
volatile int32_t x73 = INT32_MIN;
uint32_t t11 = 9082U;
volatile uint16_t x83 = UINT16_MAX;
int8_t x88 = INT8_MIN;
uint64_t x90 = 49148984805761180LLU;
int16_t x91 = -1;
int16_t x92 = INT16_MIN;
static volatile int32_t t14 = -188;
volatile uint16_t x99 = 2015U;
uint16_t x115 = UINT16_MAX;
static uint8_t x124 = UINT8_MAX;
volatile int16_t x128 = 0;
int32_t t21 = -9284258;
int64_t x144 = INT64_MIN;
int64_t x148 = INT64_MIN;
int64_t x150 = -1LL;
int64_t x161 = -1LL;
uint8_t x173 = 8U;
volatile int32_t t30 = -1478203;
uint8_t x188 = 0U;
int32_t x189 = -1;
static int16_t x191 = -1;
volatile int32_t t32 = -18683164;
int8_t x215 = -1;
volatile int32_t t37 = -851077;
int16_t x223 = INT16_MIN;
static int64_t t39 = -1330215271857LL;
int8_t x230 = -1;
volatile int32_t t42 = INT32_MAX;
int16_t x237 = INT16_MIN;
int16_t x241 = -911;
static volatile int64_t x243 = INT64_MIN;
static uint64_t x248 = UINT64_MAX;
int32_t t45 = 186848779;
volatile int16_t x253 = -1;
static volatile uint8_t x257 = UINT8_MAX;
int8_t x272 = -32;
static int8_t x274 = INT8_MIN;
uint8_t x288 = 6U;
int32_t x289 = INT32_MIN;
uint32_t x290 = UINT32_MAX;
int64_t x292 = -1LL;
uint8_t x297 = 8U;
int32_t x299 = INT32_MIN;
int32_t t57 = -6373354;
int64_t x308 = -1LL;
volatile uint64_t x310 = 9LLU;
static volatile uint64_t t59 = 1016737LLU;
uint64_t x317 = 154650711LLU;
int8_t x319 = 0;
uint64_t x328 = UINT64_MAX;
volatile int16_t x335 = -27;
volatile int32_t t63 = -4389;
int32_t x342 = INT32_MAX;
int16_t x344 = -479;
static int16_t x350 = INT16_MAX;
int8_t x351 = -4;
int8_t x359 = -4;
int8_t x360 = -1;
static int64_t x365 = 2193648908LL;
int16_t x371 = -1;
int64_t x376 = -20566514102472LL;
volatile int16_t x384 = -1;
int8_t x385 = INT8_MIN;
volatile int64_t x388 = INT64_MIN;
int8_t x395 = INT8_MIN;
uint64_t x397 = UINT64_MAX;
static uint8_t x399 = 56U;
volatile uint64_t t76 = UINT64_MAX;
int8_t x408 = -1;
int32_t t77 = 100;
static volatile uint8_t x421 = 6U;
int64_t x430 = INT64_MAX;
uint8_t x432 = UINT8_MAX;
int32_t t82 = 668166222;
static int32_t t83 = 1975102;
int32_t x459 = -1;
static volatile int64_t x463 = -1240621438LL;
uint8_t x466 = 27U;
int32_t x468 = -1;
static int8_t x479 = -1;
int8_t x481 = -1;
int16_t x483 = INT16_MIN;
volatile int32_t t89 = 19;
int64_t x485 = INT64_MIN;
uint32_t t91 = 81U;
volatile int8_t x511 = -1;
int16_t x513 = INT16_MIN;
static int16_t x514 = -3969;
int32_t t96 = 92939;
volatile int8_t x532 = INT8_MIN;
uint8_t x534 = 1U;


void f0(void) {
	int32_t x5 = 290997;
	static int32_t x6 = 85;
	int16_t x7 = INT16_MAX;
	int32_t x8 = -1;

	t0 = (x5|(x6<=(x7*x8)));

	if (t0 != 290997) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x13 = 74719U;
	static int8_t x14 = INT8_MIN;
	int8_t x16 = 53;
	volatile uint32_t t1 = 0U;

	t1 = (x13|(x14<=(x15*x16)));

	if (t1 != 74719U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x17 = 71078630357095LLU;
	int16_t x18 = -243;
	int8_t x20 = -1;
	volatile uint64_t t2 = 122LLU;

	t2 = (x17|(x18<=(x19*x20)));

	if (t2 != 71078630357095LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x38 = -1;
	volatile int32_t t3 = 0;

	t3 = (x37|(x38<=(x39*x40)));

	if (t3 != -9065) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x41 = 1U;
	uint8_t x42 = 51U;
	static volatile int32_t x43 = INT32_MIN;

	t4 = (x41|(x42<=(x43*x44)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = INT32_MIN;
	int8_t x51 = -1;
	int64_t t5 = INT64_MIN;

	t5 = (x49|(x50<=(x51*x52)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x53 = 53804336680LLU;
	int8_t x54 = INT8_MIN;
	uint64_t t6 = 9029LLU;

	t6 = (x53|(x54<=(x55*x56)));

	if (t6 != 53804336681LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = 2;
	static volatile int32_t x58 = -1;
	int8_t x59 = INT8_MAX;
	static volatile uint8_t x60 = UINT8_MAX;

	t7 = (x57|(x58<=(x59*x60)));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x65 = 1U;
	volatile int16_t x66 = 6;
	volatile uint32_t x68 = UINT32_MAX;
	static int32_t t8 = -103172;

	t8 = (x65|(x66<=(x67*x68)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = 3;
	int16_t x71 = -1;
	volatile int32_t t9 = 302;

	t9 = (x69|(x70<=(x71*x72)));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x74 = INT32_MAX;
	uint16_t x75 = 32479U;
	uint32_t x76 = 879U;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x73|(x74<=(x75*x76)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x77 = 37U;
	uint32_t x78 = UINT32_MAX;
	static uint64_t x79 = 16068307LLU;
	static volatile uint64_t x80 = 510712750LLU;

	t11 = (x77|(x78<=(x79*x80)));

	if (t11 != 37U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = INT16_MAX;
	static uint64_t x82 = UINT64_MAX;
	int16_t x84 = 0;
	static volatile int32_t t12 = 5;

	t12 = (x81|(x82<=(x83*x84)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x85 = INT64_MIN;
	uint32_t x86 = 1211272U;
	uint64_t x87 = UINT64_MAX;
	int64_t t13 = INT64_MIN;

	t13 = (x85|(x86<=(x87*x88)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MIN;

	t14 = (x89|(x90<=(x91*x92)));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	static uint32_t x100 = 17458649U;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x97|(x98<=(x99*x100)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	volatile int32_t x103 = -1;
	int64_t x104 = INT64_MAX;
	volatile int32_t t16 = -98;

	t16 = (x101|(x102<=(x103*x104)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x105 = 8U;
	volatile uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MAX;
	int8_t x108 = -1;
	static volatile int32_t t17 = 2709;

	t17 = (x105|(x106<=(x107*x108)));

	if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = INT64_MIN;
	static volatile int16_t x114 = -1;
	int16_t x116 = -1;
	int64_t t18 = INT64_MIN;

	t18 = (x113|(x114<=(x115*x116)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x121 = -1;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = 98U;
	volatile int32_t t19 = -4733;

	t19 = (x121|(x122<=(x123*x124)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x125 = UINT64_MAX;
	uint64_t x126 = 577083LLU;
	volatile int8_t x127 = INT8_MIN;
	uint64_t t20 = UINT64_MAX;

	t20 = (x125|(x126<=(x127*x128)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = 24;
	static volatile uint8_t x131 = 4U;
	uint16_t x132 = UINT16_MAX;

	t21 = (x129|(x130<=(x131*x132)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x133 = -31;
	static volatile int8_t x134 = INT8_MIN;
	volatile int32_t x135 = -450947;
	uint32_t x136 = UINT32_MAX;
	int32_t t22 = -34032;

	t22 = (x133|(x134<=(x135*x136)));

	if (t22 != -31) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = -1;
	int8_t x142 = -1;
	uint8_t x143 = 1U;
	static int32_t t23 = 215;

	t23 = (x141|(x142<=(x143*x144)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x145 = -1;
	static volatile uint16_t x146 = 6564U;
	uint64_t x147 = 102800972420189060LLU;
	int32_t t24 = -46384036;

	t24 = (x145|(x146<=(x147*x148)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -240;
	int16_t x151 = INT16_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t25 = -235315580;

	t25 = (x149|(x150<=(x151*x152)));

	if (t25 != -240) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x162 = UINT16_MAX;
	int16_t x163 = -242;
	uint32_t x164 = 30036U;
	int64_t t26 = 847251673359780LL;

	t26 = (x161|(x162<=(x163*x164)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x165 = 15U;
	int8_t x166 = INT8_MAX;
	volatile uint64_t x167 = 955546161561LLU;
	int16_t x168 = INT16_MIN;
	volatile int32_t t27 = -216483;

	t27 = (x165|(x166<=(x167*x168)));

	if (t27 != 15) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x174 = INT8_MAX;
	static int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MAX;
	int32_t t28 = 575;

	t28 = (x173|(x174<=(x175*x176)));

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	uint32_t x180 = UINT32_MAX;
	int64_t t29 = INT64_MIN;

	t29 = (x177|(x178<=(x179*x180)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x181 = 16U;
	uint64_t x182 = 5768LLU;
	static int8_t x183 = -1;
	int16_t x184 = INT16_MAX;

	t30 = (x181|(x182<=(x183*x184)));

	if (t30 != 17) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x185 = 1017917U;
	int32_t x186 = INT32_MIN;
	int8_t x187 = INT8_MAX;
	uint32_t t31 = 16707008U;

	t31 = (x185|(x186<=(x187*x188)));

	if (t31 != 1017917U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x190 = 7U;
	uint32_t x192 = UINT32_MAX;

	t32 = (x189|(x190<=(x191*x192)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x193 = INT8_MIN;
	static int16_t x194 = -5;
	static int64_t x195 = 43388LL;
	volatile int16_t x196 = 126;
	volatile int32_t t33 = -568;

	t33 = (x193|(x194<=(x195*x196)));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = 37;
	int16_t x203 = INT16_MIN;
	volatile uint32_t x204 = 4694717U;
	int32_t t34 = -8185;

	t34 = (x201|(x202<=(x203*x204)));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	int16_t x207 = -361;
	volatile uint8_t x208 = 1U;
	int32_t t35 = -8307656;

	t35 = (x205|(x206<=(x207*x208)));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = -1;
	int8_t x210 = 7;
	int8_t x211 = -1;
	uint8_t x212 = 21U;
	volatile int32_t t36 = 446211;

	t36 = (x209|(x210<=(x211*x212)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x213 = 14;
	int64_t x214 = INT64_MAX;
	uint8_t x216 = UINT8_MAX;

	t37 = (x213|(x214<=(x215*x216)));

	if (t37 != 14) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x217 = 2U;
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	static uint16_t x220 = 1U;
	int32_t t38 = 33119434;

	t38 = (x217|(x218<=(x219*x220)));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x221 = -1LL;
	int16_t x222 = 550;
	uint32_t x224 = 22U;

	t39 = (x221|(x222<=(x223*x224)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x225 = 3U;
	int8_t x226 = 2;
	int8_t x227 = -1;
	int16_t x228 = INT16_MIN;
	uint32_t t40 = 368560469U;

	t40 = (x225|(x226<=(x227*x228)));

	if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = 1105201689976052485LLU;
	int8_t x231 = INT8_MIN;
	static int16_t x232 = INT16_MIN;
	uint64_t t41 = 3149425491LLU;

	t41 = (x229|(x230<=(x231*x232)));

	if (t41 != 1105201689976052485LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x233 = INT32_MAX;
	static int16_t x234 = INT16_MIN;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = INT32_MAX;

	t42 = (x233|(x234<=(x235*x236)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x238 = 13U;
	uint16_t x239 = 2291U;
	int32_t x240 = 76595;
	volatile int32_t t43 = 150;

	t43 = (x237|(x238<=(x239*x240)));

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x242 = INT8_MAX;
	volatile int8_t x244 = 0;
	int32_t t44 = -246695162;

	t44 = (x241|(x242<=(x243*x244)));

	if (t44 != -911) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = -1;
	int8_t x247 = -1;

	t45 = (x245|(x246<=(x247*x248)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x249 = 6U;
	int32_t x250 = INT32_MIN;
	volatile int16_t x251 = INT16_MAX;
	uint32_t x252 = 123914U;
	static volatile int32_t t46 = -268304023;

	t46 = (x249|(x250<=(x251*x252)));

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MAX;
	volatile int8_t x256 = 2;
	volatile int32_t t47 = -44765;

	t47 = (x253|(x254<=(x255*x256)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x258 = INT64_MAX;
	volatile uint16_t x259 = UINT16_MAX;
	int16_t x260 = 0;
	int32_t t48 = 7998721;

	t48 = (x257|(x258<=(x259*x260)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x261 = 1173U;
	int64_t x262 = INT64_MIN;
	volatile int64_t x263 = 89508407205972397LL;
	static volatile int8_t x264 = -1;
	int32_t t49 = 379;

	t49 = (x261|(x262<=(x263*x264)));

	if (t49 != 1173) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x265 = 1890U;
	static int32_t x266 = INT32_MIN;
	static uint32_t x267 = 15129U;
	static volatile int8_t x268 = INT8_MAX;
	uint32_t t50 = 103809U;

	t50 = (x265|(x266<=(x267*x268)));

	if (t50 != 1890U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x269 = INT64_MAX;
	static volatile int32_t x270 = -1;
	static int8_t x271 = INT8_MAX;
	int64_t t51 = INT64_MAX;

	t51 = (x269|(x270<=(x271*x272)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x273 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int64_t x276 = -19011LL;
	int32_t t52 = 10;

	t52 = (x273|(x274<=(x275*x276)));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x277 = INT16_MAX;
	volatile uint8_t x278 = 24U;
	int8_t x279 = 20;
	int16_t x280 = 1010;
	int32_t t53 = 5464;

	t53 = (x277|(x278<=(x279*x280)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x285 = -1;
	int64_t x286 = -48916289268972LL;
	int16_t x287 = -2;
	int32_t t54 = 21;

	t54 = (x285|(x286<=(x287*x288)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x291 = INT16_MIN;
	int32_t t55 = INT32_MIN;

	t55 = (x289|(x290<=(x291*x292)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x293 = -1061;
	uint32_t x294 = 39117662U;
	int64_t x295 = -1LL;
	static uint32_t x296 = 675404U;
	int32_t t56 = 406872362;

	t56 = (x293|(x294<=(x295*x296)));

	if (t56 != -1061) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x298 = 11U;
	uint32_t x300 = 1909290313U;

	t57 = (x297|(x298<=(x299*x300)));

	if (t57 != 9) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x305 = UINT32_MAX;
	static int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MAX;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (x305|(x306<=(x307*x308)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x309 = 115519684LLU;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = 45;

	t59 = (x309|(x310<=(x311*x312)));

	if (t59 != 115519685LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x313 = -25;
	uint32_t x314 = 87384U;
	static volatile int8_t x315 = INT8_MAX;
	static int8_t x316 = 28;
	int32_t t60 = 1426998;

	t60 = (x313|(x314<=(x315*x316)));

	if (t60 != -25) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x318 = -1959001LL;
	int16_t x320 = 25;
	static uint64_t t61 = 1624816373934359LLU;

	t61 = (x317|(x318<=(x319*x320)));

	if (t61 != 154650711LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x325 = 0U;
	static int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MAX;
	volatile int32_t t62 = 42;

	t62 = (x325|(x326<=(x327*x328)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x333 = INT32_MIN;
	volatile uint8_t x334 = 108U;
	static volatile uint64_t x336 = 869430959033482LLU;

	t63 = (x333|(x334<=(x335*x336)));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x337 = 1139634389072504LLU;
	uint64_t x338 = 100601LLU;
	int32_t x339 = 4051592;
	int32_t x340 = -519;
	uint64_t t64 = 113684648282898LLU;

	t64 = (x337|(x338<=(x339*x340)));

	if (t64 != 1139634389072505LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x341 = -34016298391713821LL;
	int8_t x343 = INT8_MIN;
	static int64_t t65 = -108270LL;

	t65 = (x341|(x342<=(x343*x344)));

	if (t65 != -34016298391713821LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x345 = INT16_MAX;
	static uint32_t x346 = 1435U;
	int32_t x347 = -444;
	int16_t x348 = 0;
	static int32_t t66 = -8815196;

	t66 = (x345|(x346<=(x347*x348)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x349 = 2284U;
	uint8_t x352 = 2U;
	uint32_t t67 = 389748U;

	t67 = (x349|(x350<=(x351*x352)));

	if (t67 != 2284U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x357 = -120704;
	uint32_t x358 = 2U;
	int32_t t68 = 460;

	t68 = (x357|(x358<=(x359*x360)));

	if (t68 != -120703) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x366 = INT16_MIN;
	int8_t x367 = -1;
	static uint32_t x368 = 473U;
	volatile int64_t t69 = 1LL;

	t69 = (x365|(x366<=(x367*x368)));

	if (t69 != 2193648909LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x369 = UINT16_MAX;
	static int32_t x370 = -1;
	static int16_t x372 = 11866;
	int32_t t70 = 5;

	t70 = (x369|(x370<=(x371*x372)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 7051352U;
	uint32_t x375 = 2U;
	uint64_t t71 = UINT64_MAX;

	t71 = (x373|(x374<=(x375*x376)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x381 = UINT32_MAX;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MIN;
	uint32_t t72 = UINT32_MAX;

	t72 = (x381|(x382<=(x383*x384)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x386 = INT16_MIN;
	volatile int16_t x387 = 0;
	int32_t t73 = -8436;

	t73 = (x385|(x386<=(x387*x388)));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x389 = -7022;
	uint64_t x390 = 11081069LLU;
	uint16_t x391 = UINT16_MAX;
	volatile int16_t x392 = INT16_MAX;
	int32_t t74 = -125902;

	t74 = (x389|(x390<=(x391*x392)));

	if (t74 != -7021) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x393 = 9LLU;
	int32_t x394 = -1;
	volatile int64_t x396 = -1LL;
	volatile uint64_t t75 = 0LLU;

	t75 = (x393|(x394<=(x395*x396)));

	if (t75 != 9LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x398 = INT32_MAX;
	int32_t x400 = -14548;

	t76 = (x397|(x398<=(x399*x400)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x405 = 36219776;
	static uint64_t x406 = UINT64_MAX;
	int16_t x407 = INT16_MIN;

	t77 = (x405|(x406<=(x407*x408)));

	if (t77 != 36219776) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x422 = INT16_MIN;
	volatile uint32_t x423 = 2061424002U;
	uint64_t x424 = 50601LLU;
	volatile int32_t t78 = -1006377284;

	t78 = (x421|(x422<=(x423*x424)));

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x425 = 149LLU;
	volatile int16_t x426 = -5586;
	int64_t x427 = 26387310046LL;
	volatile int16_t x428 = 0;
	volatile uint64_t t79 = 113045614LLU;

	t79 = (x425|(x426<=(x427*x428)));

	if (t79 != 149LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x429 = -5;
	static uint8_t x431 = 28U;
	static volatile int32_t t80 = -920521821;

	t80 = (x429|(x430<=(x431*x432)));

	if (t80 != -5) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x433 = UINT16_MAX;
	int64_t x434 = INT64_MIN;
	static int16_t x435 = -31;
	static volatile uint32_t x436 = UINT32_MAX;
	volatile int32_t t81 = 108943;

	t81 = (x433|(x434<=(x435*x436)));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = INT16_MAX;
	uint32_t x446 = 94U;
	static int8_t x447 = INT8_MIN;
	uint16_t x448 = 176U;

	t82 = (x445|(x446<=(x447*x448)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = -1;
	volatile uint32_t x450 = 520880786U;
	static int16_t x451 = -4;
	int8_t x452 = INT8_MIN;

	t83 = (x449|(x450<=(x451*x452)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x457 = -3;
	int64_t x458 = INT64_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t84 = 251666;

	t84 = (x457|(x458<=(x459*x460)));

	if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x461 = 3385738LLU;
	static uint64_t x462 = UINT64_MAX;
	static uint32_t x464 = 173786653U;
	volatile uint64_t t85 = 203725492232LLU;

	t85 = (x461|(x462<=(x463*x464)));

	if (t85 != 3385738LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x465 = 539U;
	volatile uint64_t x467 = UINT64_MAX;
	volatile int32_t t86 = 3;

	t86 = (x465|(x466<=(x467*x468)));

	if (t86 != 539) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x469 = INT16_MAX;
	volatile int64_t x470 = INT64_MIN;
	uint64_t x471 = UINT64_MAX;
	uint32_t x472 = 21U;
	int32_t t87 = 182315;

	t87 = (x469|(x470<=(x471*x472)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x477 = 0;
	int32_t x478 = INT32_MIN;
	int8_t x480 = -41;
	int32_t t88 = -315047;

	t88 = (x477|(x478<=(x479*x480)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x482 = UINT32_MAX;
	uint16_t x484 = UINT16_MAX;

	t89 = (x481|(x482<=(x483*x484)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x486 = INT8_MIN;
	uint16_t x487 = 13U;
	int8_t x488 = INT8_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x485|(x486<=(x487*x488)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x489 = 3U;
	int16_t x490 = INT16_MIN;
	int8_t x491 = INT8_MIN;
	int8_t x492 = 7;

	t91 = (x489|(x490<=(x491*x492)));

	if (t91 != 3U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x493 = INT8_MAX;
	uint32_t x494 = 1U;
	static int32_t x495 = -1;
	uint8_t x496 = UINT8_MAX;
	static int32_t t92 = -409538130;

	t92 = (x493|(x494<=(x495*x496)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x505 = INT64_MAX;
	int64_t x506 = INT64_MIN;
	int64_t x507 = INT64_MAX;
	uint64_t x508 = UINT64_MAX;
	static volatile int64_t t93 = INT64_MAX;

	t93 = (x505|(x506<=(x507*x508)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x509 = 70U;
	int16_t x510 = INT16_MIN;
	static uint64_t x512 = 180422482198LLU;
	volatile int32_t t94 = 1;

	t94 = (x509|(x510<=(x511*x512)));

	if (t94 != 70) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x515 = INT8_MIN;
	static int16_t x516 = INT16_MAX;
	volatile int32_t t95 = 66519332;

	t95 = (x513|(x514<=(x515*x516)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x521 = INT16_MIN;
	int64_t x522 = INT64_MIN;
	uint32_t x523 = 149794U;
	int32_t x524 = -1;

	t96 = (x521|(x522<=(x523*x524)));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x525 = 2U;
	static uint64_t x526 = 2979251LLU;
	int8_t x527 = INT8_MAX;
	volatile int8_t x528 = INT8_MIN;
	int32_t t97 = -136771302;

	t97 = (x525|(x526<=(x527*x528)));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x529 = INT32_MAX;
	volatile uint16_t x530 = 2U;
	int8_t x531 = -1;
	static int32_t t98 = INT32_MAX;

	t98 = (x529|(x530<=(x531*x532)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x533 = 6U;
	uint8_t x535 = 1U;
	uint16_t x536 = UINT16_MAX;
	int32_t t99 = -20189063;

	t99 = (x533|(x534<=(x535*x536)));

	if (t99 != 7) { NG(); } else { ; }
	
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

